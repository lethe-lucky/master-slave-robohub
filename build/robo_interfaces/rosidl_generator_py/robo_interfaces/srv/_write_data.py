# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robo_interfaces:srv/WriteData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WriteData_Request(type):
    """Metaclass of message 'WriteData_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robo_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robo_interfaces.srv.WriteData_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__write_data__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__write_data__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__write_data__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__write_data__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__write_data__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WriteData_Request(metaclass=Metaclass_WriteData_Request):
    """Message class 'WriteData_Request'."""

    __slots__ = [
        '_command',
        '_servo_id',
        '_value1',
    ]

    _fields_and_field_types = {
        'command': 'string',
        'servo_id': 'uint8',
        'value1': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command = kwargs.get('command', str())
        self.servo_id = kwargs.get('servo_id', int())
        self.value1 = kwargs.get('value1', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.command != other.command:
            return False
        if self.servo_id != other.servo_id:
            return False
        if self.value1 != other.value1:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'command' field must be of type 'str'"
        self._command = value

    @builtins.property
    def servo_id(self):
        """Message field 'servo_id'."""
        return self._servo_id

    @servo_id.setter
    def servo_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'servo_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'servo_id' field must be an unsigned integer in [0, 255]"
        self._servo_id = value

    @builtins.property
    def value1(self):
        """Message field 'value1'."""
        return self._value1

    @value1.setter
    def value1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'value1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'value1' field must be an integer in [-2147483648, 2147483647]"
        self._value1 = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_WriteData_Response(type):
    """Metaclass of message 'WriteData_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robo_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robo_interfaces.srv.WriteData_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__write_data__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__write_data__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__write_data__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__write_data__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__write_data__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WriteData_Response(metaclass=Metaclass_WriteData_Response):
    """Message class 'WriteData_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'result' field must be of type 'bool'"
        self._result = value


class Metaclass_WriteData(type):
    """Metaclass of service 'WriteData'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robo_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robo_interfaces.srv.WriteData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__write_data

            from robo_interfaces.srv import _write_data
            if _write_data.Metaclass_WriteData_Request._TYPE_SUPPORT is None:
                _write_data.Metaclass_WriteData_Request.__import_type_support__()
            if _write_data.Metaclass_WriteData_Response._TYPE_SUPPORT is None:
                _write_data.Metaclass_WriteData_Response.__import_type_support__()


class WriteData(metaclass=Metaclass_WriteData):
    from robo_interfaces.srv._write_data import WriteData_Request as Request
    from robo_interfaces.srv._write_data import WriteData_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
