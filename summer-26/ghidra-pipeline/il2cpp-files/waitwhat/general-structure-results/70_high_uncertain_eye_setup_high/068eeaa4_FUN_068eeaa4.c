/*
FUNCTION_NAME: FUN_068eeaa4
ENTRY_POINT: 068eeaa4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float FUN_068eeaa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_24;
  
  if ((DAT_07559350 & 1) == 0) {
    FUN_03188a78(OVRPlugin_UnityOpenXR_TypeInfo);
    DAT_07559350 = 1;
  }
  local_24 = 0.0;
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = FUN_0525d20c(*(long *)(param_1 + 0x30),param_3,&local_24,
                         *(undefined8 *)OVRPlugin_UnityOpenXR_TypeInfo);
    fVar2 = 0.5;
    if (((uVar1 & 1) != 0) && (0.0 < *(float *)(param_1 + 0x38))) {
      fVar2 = (float)FUN_069e3174(0x3f000000,0);
      fVar3 = (fVar2 - local_24) / *(float *)(param_1 + 0x38);
      fVar4 = 1.0;
      if (fVar3 <= 1.0) {
        fVar4 = fVar3;
      }
      fVar2 = 1.0;
      if (0.0 <= fVar3) {
        fVar2 = (1.0 - fVar4) * 0.5 + 0.5;
      }
    }
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


