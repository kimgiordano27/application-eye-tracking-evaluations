/*
FUNCTION_NAME: OVRPlugin$$GetEyeLayerRecommendedResolution
ENTRY_POINT: 033d3ec4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetEyeLayerRecommendedResolution(long *param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *unaff_x20;
  
  if (param_2 == 0) {
    plVar3 = (long *)(*(long *)(param_3 + 0xb8) + 0x18);
    *plVar3 = (long)param_1;
  }
  else {
    bVar1 = *(byte *)(param_3 + 0x130);
    if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_1 + 200) + ((ulong)bVar1 - 1) * 8) != param_3))
    goto LAB_033d4020;
    plVar3 = (long *)(*(long *)(param_3 + 0xb8) + 0x18);
    *plVar3 = (long)param_1;
    if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_1 + 200) + ((ulong)bVar1 - 1) * 8) != param_3))
    goto LAB_033d4020;
  }
  puVar2 = StringLiteral_6021;
  thunk_FUN_01e10808(plVar3,param_1);
  param_1 = (long *)FUN_033a87c8(*(undefined8 *)puVar2,0);
  lVar4 = *unaff_x20;
  if (param_1 == (long *)0x0) {
    plVar3 = (long *)(*(long *)(lVar4 + 0xb8) + 0x20);
    *plVar3 = 0;
  }
  else {
    bVar1 = *(byte *)(lVar4 + 0x130);
    if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_1 + 200) + ((ulong)bVar1 - 1) * 8) != lVar4)) goto LAB_033d4020;
    plVar3 = (long *)(*(long *)(lVar4 + 0xb8) + 0x20);
    *plVar3 = (long)param_1;
    if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_1 + 200) + ((ulong)bVar1 - 1) * 8) != lVar4)) goto LAB_033d4020;
  }
  puVar2 = StringLiteral_8985;
  thunk_FUN_01e10808(plVar3,param_1);
  param_1 = (long *)FUN_033a87c8(*(undefined8 *)puVar2,0);
  lVar4 = *unaff_x20;
  if (param_1 == (long *)0x0) {
    plVar3 = (long *)(*(long *)(lVar4 + 0xb8) + 0x38);
    *plVar3 = 0;
LAB_033d4030:
    thunk_FUN_01e10808(plVar3,param_1);
    return;
  }
  bVar1 = *(byte *)(lVar4 + 0x130);
  if ((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
     (*(long *)(*(long *)(*param_1 + 200) + ((ulong)bVar1 - 1) * 8) == lVar4)) {
    plVar3 = (long *)(*(long *)(lVar4 + 0xb8) + 0x38);
    *plVar3 = (long)param_1;
    if ((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
       (*(long *)(*(long *)(*param_1 + 200) + ((ulong)bVar1 - 1) * 8) == lVar4)) goto LAB_033d4030;
  }
LAB_033d4020:
                    /* WARNING: Subroutine does not return */
  FUN_01d7df0c(param_1);
}


