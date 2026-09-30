/*
FUNCTION_NAME: OVRManager$$GetOpenVRControllerOffset
ENTRY_POINT: 090843fc
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__GetOpenVRControllerOffset(float param_1,long param_2)

{
  int in_w8;
  float *pfVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  if ((in_w8 != 0) && (*(float *)(param_2 + 0xb8) <= 0.0)) {
    if (*(char *)(param_2 + 0xd5) == '\0') {
      if (*(char *)(param_2 + 0xd4) == '\0') {
        pfVar1 = (float *)(param_2 + 0x50);
      }
      else {
        pfVar1 = (float *)(param_2 + 0x58);
      }
    }
    else {
      pfVar1 = (float *)(param_2 + 0x54);
    }
    lVar2 = *(long *)(param_2 + 0x88);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    fVar3 = *(float *)(param_2 + 0x5c);
    fVar4 = *pfVar1;
    param_1 = (float)(**(code **)(lVar2 + 0x18))
                               (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    param_1 = fVar3 * fVar4 * param_1;
  }
  return param_1;
}


