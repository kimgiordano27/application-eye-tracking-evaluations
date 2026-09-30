/*
FUNCTION_NAME: SetAt
ENTRY_POINT: 017f5d68
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


/* EyeGazeStateU5BU5D_t8F18F753F2C427FE1DE7C88ABF6910A7E73793FC::SetAt(unsigned long,
   EyeGazeState_t153E4D1AFFFEB96639D94D67C265E63D84DE9976) */

void __thiscall
EyeGazeStateU5BU5D_t8F18F753F2C427FE1DE7C88ABF6910A7E73793FC::SetAt
          (EyeGazeStateU5BU5D_t8F18F753F2C427FE1DE7C88ABF6910A7E73793FC *this,long param_1,
          void *param_3)

{
  if ((uint)*(undefined8 *)(this + 0x18) <= (uint)param_1) {
    il2cpp_codegen_raise_index_out_of_range_exception();
  }
  memcpy(this + param_1 * 0x24 + 0x20,param_3,0x24);
  return;
}


