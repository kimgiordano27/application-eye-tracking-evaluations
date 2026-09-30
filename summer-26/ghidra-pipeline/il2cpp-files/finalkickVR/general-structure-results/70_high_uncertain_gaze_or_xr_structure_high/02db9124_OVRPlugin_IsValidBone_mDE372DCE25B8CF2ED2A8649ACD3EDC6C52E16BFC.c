/*
FUNCTION_NAME: OVRPlugin_IsValidBone_mDE372DCE25B8CF2ED2A8649ACD3EDC6C52E16BFC
ENTRY_POINT: 02db9124
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


bool OVRPlugin_IsValidBone_mDE372DCE25B8CF2ED2A8649ACD3EDC6C52E16BFC(uint param_1,int param_2)

{
  undefined4 uVar1;
  bool local_11;
  
  uVar1 = il2cpp_codegen_subtract<int,int>(param_2,-1);
  switch(uVar1) {
  case 0:
    return false;
  case 1:
    break;
  case 2:
    break;
  case 3:
    if (-1 < (int)param_1) {
      return (int)param_1 < 0x47;
    }
    return false;
  default:
    return false;
  }
  local_11 = param_1 < 0x19;
  return local_11;
}


