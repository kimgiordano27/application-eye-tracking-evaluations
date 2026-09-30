/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_GetHandState3
ENTRY_POINT: 056a7678
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_103_0__ovrp_GetHandState3(long param_1)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  uint *unaff_x19;
  void *unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  int iVar4;
  long unaff_x23;
  long lVar5;
  long lVar6;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02df485c(param_1);
    }
    lVar5 = unaff_x23 * 8;
    free(unaff_x20);
    uVar1 = *unaff_x19;
    unaff_x23 = (long)unaff_w22;
    lVar2 = *(long *)(unaff_x19 + 2);
    unaff_w22 = unaff_w22 + 1;
    *(undefined8 *)(lVar5 + lVar2) = 0;
    if ((long)(ulong)uVar1 <= unaff_x23) break;
    unaff_x20 = (void *)FUN_055339f0(*(undefined8 *)(lVar2 + unaff_x23 * 8),0);
    param_1 = *unaff_x21;
  }
  pvVar3 = (void *)FUN_055339f0(lVar2,0);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x21);
  }
  free(pvVar3);
  lVar2 = *(long *)(unaff_x19 + 8);
  unaff_x19[2] = 0;
  unaff_x19[3] = 0;
  *unaff_x19 = 0;
  if (unaff_x19[6] != 0) {
    lVar5 = 0;
    iVar4 = 1;
    do {
      pvVar3 = (void *)FUN_055339f0(*(undefined8 *)(lVar2 + lVar5 * 8),0);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02df485c(*unaff_x21);
      }
      lVar6 = lVar5 * 8;
      free(pvVar3);
      uVar1 = unaff_x19[6];
      lVar5 = (long)iVar4;
      lVar2 = *(long *)(unaff_x19 + 8);
      iVar4 = iVar4 + 1;
      *(undefined8 *)(lVar6 + lVar2) = 0;
    } while (lVar5 < (long)(ulong)uVar1);
  }
  pvVar3 = (void *)FUN_055339f0(lVar2,0);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x21);
  }
  free(pvVar3);
  unaff_x19[8] = 0;
  unaff_x19[9] = 0;
  unaff_x19[6] = 0;
  OVRPlugin_OVRP_1_97_0__ovrp_RetrieveSpaceDiscoveryResults(unaff_x19 + 0xe);
  return;
}


