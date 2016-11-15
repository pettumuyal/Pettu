int Set_camera_name(unsigned int field, void *data, unsigned int len)
{
	SYS_MSG_BUF msgbuf;

	memset(&msgbuf, 0, sizeof(msgbuf));
	msgbuf.cmd = SYS_MSG_SET_CAMERA_NAME;
	msgbuf.field = field;
	return ProcessSetRequest(&msgbuf, data, len);
}
