/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$AllowVisibilityMesh
ENTRY_POINT: 05be7df0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__AllowVisibilityMesh(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  long unaff_x19;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  long unaff_x23;
  undefined8 *puVar5;
  long unaff_x24;
  undefined8 *puVar6;
  undefined8 *unaff_x25;
  
  puVar6 = *(undefined8 **)(unaff_x24 + 0xa30);
  lVar2 = param_1[1];
  puVar5 = *(undefined8 **)(unaff_x23 + 0xa20);
  if (lVar2 == 0) {
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      param_1 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *param_1;
    lVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar2,uVar4,*(undefined8 *)PTR_DAT_07116ba0,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8) = lVar2;
  }
  uVar4 = *unaff_x25;
  *(long *)(unaff_x19 + 0x48) = lVar2;
  *(undefined8 *)(unaff_x19 + 0x50) = 0xffffffffffffffff;
  uVar1 = FUN_06977554(uVar4,0);
  uVar4 = *puVar6;
  *(undefined4 *)(unaff_x19 + 0x58) = uVar1;
  uVar1 = FUN_06977554(uVar4,0);
  uVar4 = *puVar5;
  *(undefined4 *)(unaff_x19 + 0x5c) = uVar1;
  uVar1 = FUN_06977554(uVar4,0);
  lVar2 = *unaff_x22;
  *(undefined4 *)(unaff_x19 + 0x60) = uVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338(lVar2);
    lVar2 = *unaff_x22;
  }
  puVar5 = *(undefined8 **)(lVar2 + 0xb8);
  lVar3 = puVar5[2];
  if (lVar3 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar2);
      puVar5 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar5;
    lVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar3,uVar4,*(undefined8 *)PTR_DAT_07116ba8,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = lVar3;
  }
  *(long *)(unaff_x19 + 0x88) = lVar3;
  thunk_FUN_069d3450();
  return;
}


