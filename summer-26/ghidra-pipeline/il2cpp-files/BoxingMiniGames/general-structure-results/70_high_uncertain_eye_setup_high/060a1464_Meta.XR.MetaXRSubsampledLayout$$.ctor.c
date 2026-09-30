/*
FUNCTION_NAME: Meta.XR.MetaXRSubsampledLayout$$.ctor
ENTRY_POINT: 060a1464
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MetaXRSubsampledLayout___ctor(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)(param_3 + 0xf1) == '\0') {
    fVar3 = 0.0;
  }
  else {
    fVar3 = *(float *)(param_3 + 0x4c);
  }
  fVar4 = *(float *)(param_3 + 0x48);
  if (*(char *)(param_3 + 0x40) == '\0') {
    param_2 = *(float *)(param_3 + 0x44);
  }
  else {
    FUN_060a3840(param_3);
    if (*(long *)(param_3 + 0x28) == 0) goto LAB_060a14f4;
    fVar2 = param_2;
    FUN_071d0360(*(long *)(param_3 + 0x28),0);
    param_2 = param_2 - fVar2;
  }
  if (((*(long *)(param_3 + 0x20) != 0) &&
      (lVar1 = *(long *)(*(long *)(param_3 + 0x20) + 0x20), lVar1 != 0)) &&
     (fVar2 = (float)FUN_07245cec(lVar1,0), *(long *)(param_3 + 0x20) != 0)) {
    param_2 = fVar4 + fVar3 + param_2;
    if (param_2 <= fVar2 + fVar2) {
      param_2 = fVar2 + fVar2;
    }
    FUN_0609e3a4(param_2);
    return;
  }
LAB_060a14f4:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


