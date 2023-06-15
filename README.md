# PikaTestTool

PikaTestTool 是一个针对 PikaPython 设备框架的软硬件测试系统，通过 ESP32S3 主控芯片与被测板卡串口连接，可以测试和验证支持 PikaPython 的板卡的外设功能，如 GPIO、UART、IIC、SPI、CAN 等以及 Wifi、BLE、Modbus 等协议栈。PikaTestTool 提供 Python 模块，开发者可以方便地调用 PikaTestTool 的测试功能。

## 背景

在软件工程中，单元测试是确保代码质量的关键一环。忽视单元测试可能导致许多在单元级别就可以发现和解决的问题在系统集成时才暴露出来，给项目带来致命打击。在复杂的软件系统中，单元测试的重要性更为显现，它能保证软件的可用性、可重构性、可维护性等关键能力，为软件的稳健发展提供保障。

PikaPython 作为一款重新设计的嵌入式 Python 解释器，依赖于单元测试技术来提升软件稳定性，提高交付可靠性并支持快速迭代。例如，在每次新功能的添加、bug修复或者性能优化后，都需要通过单元测试来验证修改的正确性以及是否影响到了其他部分的功能。

在嵌入式领域，外设测试是一大挑战。外设的功能通常不能直接从主控读取结果进行验证，而需要借助于实际的硬件设备。而传统的硬件设备，如示波器、逻辑分析仪等，其自动化程度低，导致维护成本急剧升高，如果每次都需要手动进行驱动测试，将严重降低开发效率。

此外，在涉及到外设适配的系统的迭代中，如驱动适配的迭代、驱动框架的迭代、Python解释器的迭代、主控SDK的迭代，每个环节都有可能影响到系统外设驱动的可用性。随着驱动体量的增大，对于一个没有大量资金和固定员工的开源项目来说，每次迭代进行完整的手工测试已经变得不现实。

针对上述问题，我们迫切需要一个更自动化、高度定制的测试方案。PikaTestTool 正是为此而生。

## 项目的必要性

在嵌入式系统开发中，尤其是在涉及到外设适配的系统迭代中，每次迭代都需要进行大量的手动测试，这既耗时又耗人力。而 PikaTestTool 的出现，将大大减轻开发者的负担，提高测试效率，帮助开发者更快地进行产品迭代。

PikaTestTool 作为一款基于 ESP32S3 的测试工具，能够自动完成对 PikaPython 设备框架支持的各种外设功能的测试。这包括 GPIO、UART、IIC、SPI、CAN 等通信接口的测试，以及 Wifi、BLE、Modbus 等协议栈的测试。这大大提高了开发效率，并使得每次软件更新后都能进行全面的测试，确保软件的稳定性和可靠性。

此外，PikaTestTool 采用 Python 进行编程，使得开发者可以快速上手，快速编写测试用例。这不仅提高了开发效率，还提高了代码的可读性和可维护性。

## PikaTestTool 对 PikaPython 设备框架的贡献

PikaTestTool 对 PikaPython 设备框架的贡献主要体现在以下几个方面：

提供自动化测试：PikaTestTool 能自动完成对 PikaPython 设备框架支持的各种外设功能的测试，大大提高了测试效率，节省了人力资源。

提供持续集成测试：PikaTestTool 通过 Python 语言进行编程，支持 Wifi 联网，每次对 PikaPython 设备框架进行更新时，都能触发实际硬件系统的全套自动测试，保证软件的持续可维护和持续可交付。

提高软件质量：PikaTestTool 的全面测试保证了 PikaPython 设备框架的稳定性和可靠性，降低了因为软件缺陷导致的产品问题。

促进开源社区发展：PikaTestTool 作为一个开源项目，不仅能帮助 PikaPython 设备框架的开发，也为其他开源项目提供了自动化测试的解决方案，促进了开源社区的发展。

对其他测试场景的拓展性
除了针对 PikaPython 设备框架，PikaTestTool 也适用于其他需要进行硬件功能测试的场景。例如，你可以使用 PikaTestTool 来测试你的硬件设备是否正常工作，或者使用 PikaTestTool 来测试你的软件是否能正确驱动硬件设备。

以下是一个使用 PikaTestTool 对 GPIO 进行测试的例子：

``` python
Copy code
import PikaTestTool
import PikaStdDevice

# 通过串口 3 连接到 PikaTestTool
PikaTestTool.connect(mode = 'UART', id = 3)

# 初始化一个 GPIO 对象
test_io = PikaStdDevice.GPIO()

# 设置 GPIO 引脚和模式
test_io.setPin('PA1')
test_io.setMode('out')

# 启用 GPIO
test_io.enable()

# 设置 GPIO 输出高电平，然后读取 GPIO 值，确认为高电平
test_io.high()
test_tool_io_number = 1
tested_value = PikaTestTool.read_gpio_value(test_tool_io_number)
assert tested_value == 1

# 设置 GPIO 输出低电平，然后读取 GPIO 值，确认为低电平
test_io.low()
tested_value = PikaTestTool.read_gpio_value(test_tool_io_number)
assert tested_value == 0
```

在这个例子中，我们首先创建了一个 GPIO 对象，并设置了其引脚和模式。然后，我们启用了这个 GPIO，设置其输出高电平，并读取了 GPIO 的值，确认其为高电平。接着，我们设置 GPIO 输出低电平，并读取了 GPIO 的值，确认其为低电平。这个例子清晰地展示了如何使用 PikaTestTool 进行硬件功能的测试。
