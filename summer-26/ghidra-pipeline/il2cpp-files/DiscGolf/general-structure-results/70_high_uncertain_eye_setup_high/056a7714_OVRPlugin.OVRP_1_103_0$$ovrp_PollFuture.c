/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_PollFuture
ENTRY_POINT: 056a7714
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_103_0__ovrp_PollFuture(long param_1)

{
  uint uVar1;
  long lVar2;
  void *__ptr;
  int in_w9;
  long unaff_x19;
  void *unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long unaff_x23;
  long lVar3;
  
  while( true ) {
    if (in_w9 == 0) {
      thunk_FUN_02df485c(param_1);
    }
    lVar3 = unaff_x23 * 8;
    free(unaff_x20);
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    unaff_x23 = (long)unaff_w22;
    lVar2 = *(long *)(unaff_x19 + 0x20);
    unaff_w22 = unaff_w22 + 1;
    *(undefined8 *)(lVar3 + lVar2) = 0;
    if ((long)(ulong)uVar1 <= unaff_x23) break;
    unaff_x20 = (void *)FUN_055339f0(*(undefined8 *)(lVar2 + unaff_x23 * 8),0);
    param_1 = *unaff_x21;
    in_w9 = *(int *)(param_1 + 0xe4);
  }
  __ptr = (void *)FUN_055339f0(lVar2,0);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x21);
  }
  free(__ptr);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  OVRPlugin_OVRP_1_97_0__ovrp_RetrieveSpaceDiscoveryResults(unaff_x19 + 0x38);
  return;
}


