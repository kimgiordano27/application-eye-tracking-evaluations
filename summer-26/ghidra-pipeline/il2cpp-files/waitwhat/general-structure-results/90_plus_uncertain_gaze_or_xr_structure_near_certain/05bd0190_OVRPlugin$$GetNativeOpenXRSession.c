/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRSession
ENTRY_POINT: 05bd0190
PROGRAM: waitwhat-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__GetNativeOpenXRSession(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = fmodf(param_1,360.0);
  lVar1 = *(long *)(param_2 + 0x20);
  if ((param_1 == 0.0) || (fVar2 != 0.0)) {
    if (lVar1 == 0) {
LAB_05bd020c:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    param_1 = param_1 - (float)(int)(param_1 / 360.0) * 360.0;
    fVar3 = 360.0;
    if (param_1 <= 360.0) {
      fVar3 = param_1;
    }
    fVar2 = 0.0;
    if (0.0 <= param_1) {
      fVar2 = fVar3;
    }
  }
  else {
    if (lVar1 == 0) goto LAB_05bd020c;
    fVar2 = 360.0;
  }
  *(float *)(lVar1 + 0x2c) = fVar2;
  return;
}


