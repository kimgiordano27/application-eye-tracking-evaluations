/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$OnDestroy
ENTRY_POINT: 02dc0774
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;attempted_use
EVIDENCE: strong_eye_source_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


byte Meta_XR_Samples_SampleMetadata__OnDestroy(void *param_1,void *param_2,size_t param_3)

{
  EyeGazeStateU5BU5D_t8F18F753F2C427FE1DE7C88ABF6910A7E73793FC *pEVar1;
  long lVar2;
  long lVar3;
  long unaff_x29;
  void *pvStack0000000000000018;
  size_t in_stack_00000020;
  undefined8 *in_stack_00000050;
  EyeGazeStateU5BU5D_t8F18F753F2C427FE1DE7C88ABF6910A7E73793FC *in_stack_000000b0;
  
  pvStack0000000000000018 = param_1;
  memcpy(param_1,param_2,param_3);
  NullCheck(in_stack_000000b0);
  pEVar1 = in_stack_000000b0;
  memcpy(&stack0x00000068,pvStack0000000000000018,in_stack_00000020);
  EyeGazeStateU5BU5D_t8F18F753F2C427FE1DE7C88ABF6910A7E73793FC::SetAt(pEVar1,1,&stack0x00000068);
  lVar3 = *(long *)(unaff_x29 + -0x18);
  lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar2 + 0x1050);
  *(undefined1 *)(unaff_x29 + -1) = 1;
  return *(byte *)(unaff_x29 + -1) & 1;
}


