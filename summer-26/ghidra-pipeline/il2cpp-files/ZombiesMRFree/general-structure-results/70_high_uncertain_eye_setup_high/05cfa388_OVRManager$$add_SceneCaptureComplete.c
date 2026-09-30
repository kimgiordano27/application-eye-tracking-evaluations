/*
FUNCTION_NAME: OVRManager$$add_SceneCaptureComplete
ENTRY_POINT: 05cfa388
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__add_SceneCaptureComplete(float param_1,long param_2)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  if (*(long *)(param_2 + 0x20) != 0) {
    param_1 = 0.0;
    if ((*(char *)(*(long *)(param_2 + 0x20) + 0x7c) != '\0') && (*(float *)(param_2 + 0xb8) <= 0.0)
       ) {
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
      if (lVar2 == 0) goto LAB_05cfa408;
      fVar3 = *(float *)(param_2 + 0x5c);
      fVar4 = *pfVar1;
      param_1 = (float)(**(code **)(lVar2 + 0x18))
                                 (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      param_1 = fVar3 * fVar4 * param_1;
    }
    return param_1;
  }
LAB_05cfa408:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8(param_1);
}


