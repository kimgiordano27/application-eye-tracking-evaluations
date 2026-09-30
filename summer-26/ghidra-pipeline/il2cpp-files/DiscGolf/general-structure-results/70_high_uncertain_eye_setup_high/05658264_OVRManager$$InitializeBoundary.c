/*
FUNCTION_NAME: OVRManager$$InitializeBoundary
ENTRY_POINT: 05658264
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__InitializeBoundary(undefined4 param_1,uint *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  if ((((*(long *)(param_2 + 2) == 0) || (*(long *)(param_2 + 4) == 0)) ||
      (*(long *)(param_2 + 6) == 0)) || (*(long *)(param_2 + 8) == 0)) {
LAB_056582ec:
    uVar2 = 0;
  }
  else {
    lVar3 = 0;
    iVar4 = 1;
    do {
      uVar1 = FUN_056a0800(param_1,*(long *)(param_2 + 2) + lVar3 * 0x28,0);
      if (((uVar1 & 1) == 0) ||
         (uVar1 = FUN_056a0800(param_1,lVar3 * 0x28 + *(long *)(param_2 + 4),0), (uVar1 & 1) == 0))
      goto LAB_056582ec;
      lVar3 = (long)iVar4;
      iVar4 = iVar4 + 1;
    } while (lVar3 < (long)(ulong)*param_2);
    uVar2 = 1;
  }
  return uVar2;
}


