# PikaTestTool

[中文页](README_zh.md)

PikaTestTool is a software and hardware testing system designed for the PikaPython device framework. Connected to the test board via the ESP32S3 main control chip, it can test and validate peripheral functions of boards that support PikaPython, such as GPIO, UART, IIC, SPI, CAN, as well as Wifi, BLE, Modbus protocol stacks, and more. PikaTestTool provides a Python module, allowing developers to easily utilize its testing capabilities.

## Background

In software engineering, unit testing is a key aspect in ensuring code quality. Ignoring unit testing may lead to many issues, that could have been identified and resolved at the unit level, becoming exposed only during system integration—potentially causing critical setbacks to the project. In complex software systems, the importance of unit testing becomes even more apparent as it assures crucial abilities like software usability, refactorability, maintainability, and more, thereby providing stability for software development.

As a redesigned embedded Python interpreter, PikaPython relies on unit testing techniques to enhance software stability, increase the reliability of delivery, and support rapid iteration. For instance, after each addition of new features, bug fixes, or performance optimization, unit tests are needed to validate the correctness of the modifications and whether they affect other parts' functionalities.

In the field of embedded systems, testing peripheral functionality poses a significant challenge. The functions of peripherals generally can't be verified directly from the main control and often require the aid of actual hardware devices. Traditional hardware devices, like oscilloscopes and logic analyzers, offer low levels of automation, leading to a steep increase in maintenance costs. If manual driver testing is needed every time, it will drastically lower development efficiency.

Moreover, during system iteration that involves peripheral adaptation—like driver adaptation iteration, driver framework iteration, Python interpreter iteration, and main control SDK iteration—each link could potentially affect the usability of the system peripheral driver. As the driver volume increases, manual testing for each iteration becomes unrealistic for an open-source project without substantial funding and a stable workforce.

In light of these problems, an automated, highly customizable testing solution is urgently needed. PikaTestTool was created to meet this demand.

## Necessity of the Project

In the development of embedded systems, especially in system iterations that involve peripheral adaptation, each iteration requires a large amount of manual testing. This process is not only time-consuming but also labor-intensive. The emergence of PikaTestTool will greatly alleviate the burden of developers, improve testing efficiency, and assist developers in faster product iteration.

As a testing tool based on ESP32S3, PikaTestTool can automatically complete testing for all kinds of peripheral functionalities supported by the PikaPython device framework. This includes testing communication interfaces like GPIO, UART, IIC, SPI, CAN, as well as protocol stacks like Wifi, BLE, Modbus. This greatly improves development efficiency and ensures comprehensive testing after each software update, securing software stability and reliability.

Moreover, PikaTestTool is programmed using Python, enabling developers to quickly get started and swiftly write test cases. This not only improves development efficiency but also enhances code readability and maintainability.

## Contributions of PikaTestTool to PikaPython Device Framework

The contributions of PikaTestTool to the PikaPython device framework are mainly manifested in the following aspects:

- Automated testing: PikaTestTool can automatically complete testing for all types of peripheral functionalities supported by the PikaPython device framework, significantly improving testing efficiency and saving manpower.

- Continuous integration testing: PikaTestTool, programmed in Python and supporting Wifi connection, can trigger a complete automatic test of the actual hardware system whenever the PikaPython device framework is updated, ensuring continuous maintainability and deliverability of the software.

- Improving software quality: Comprehensive testing by PikaTestTool guarantees the stability and reliability of the PikaPython device framework, reducing product issues due to software defects.

- Promoting the development of the open-source community: As an open-source project, PikaTestTool not only aids in the development of the PikaPython device framework but also offers an automated testing solution for other open-source projects, thereby fostering the growth of the open-source community.

## Extensibility to Other Testing Scenarios

Aside from the PikaPython device framework, PikaTestTool is also applicable to other scenarios that require hardware functionality testing. For example, you can use PikaTestTool to test whether your hardware device is working properly, or use PikaTestTool to test if your software can correctly drive hardware devices.

## Example

Below is an example of using PikaTestTool to test GPIO:

``` python
import PikaTestTool
import PikaStdDevice

# Connect to PikaTestTool via UART 3
PikaTestTool.connect(mode = 'UART', id = 3)

# Initialize a GPIO object
test_io = PikaStdDevice.GPIO()

# Set GPIO pin and mode
test_io.setPin('PA1')
test_io.setMode('out')

# Enable GPIO
test_io.enable()

# Set GPIO to output a high level, then read the GPIO value, and verify it's high
test_io.high()
test_tool_io_number = 1
tested_value = PikaTestTool.read_gpio_value(test_tool_io_number)
assert tested_value == 1

# Set GPIO to output a low level, then read the GPIO value, and verify it's low
test_io.low()
tested_value = PikaTestTool.read_gpio_value(test_tool_io_number)
assert tested_value == 0
```

In this example, we first create a GPIO object and set its pin and mode. Then, we enable this GPIO, set it to output a high level, read the GPIO value, and verify it's high. Afterward, we set the GPIO to output a low level, read the GPIO value, and verify it's low. This example clearly demonstrates how to use PikaTestTool for hardware functionality testing.
