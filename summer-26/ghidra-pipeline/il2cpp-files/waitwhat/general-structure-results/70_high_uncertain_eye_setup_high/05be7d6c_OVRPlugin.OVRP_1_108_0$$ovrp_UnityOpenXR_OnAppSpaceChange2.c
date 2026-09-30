/*
FUNCTION_NAME: OVRPlugin.OVRP_1_108_0$$ovrp_UnityOpenXR_OnAppSpaceChange2
ENTRY_POINT: 05be7d6c
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


void OVRPlugin_OVRP_1_108_0__ovrp_UnityOpenXR_OnAppSpaceChange2(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long *unaff_x22;
  
  FUN_03188a78(*(undefined8 *)(param_1 + 0xba8));
  FUN_03188a78(PTR_DAT_07116b98);
  FUN_03188a78(PTR_DAT_07112a20);
  FUN_03188a78(PTR_DAT_07112a28);
  FUN_03188a78(PTR_DAT_07112a30);
  *(undefined1 *)(unaff_x20 + 0xd34) = 1;
  lVar6 = *unaff_x22;
  *(undefined4 *)(unaff_x19 + 0x44) = 0x41a00000;
  *(undefined4 *)(unaff_x19 + 0x38) = 2;
  iVar1 = *(int *)(lVar6 + 0xe4);
  *(undefined8 *)(unaff_x19 + 0x3c) = 0x420c0000420c0000;
  if (iVar1 == 0) {
    thunk_FUN_031e5338();
    lVar6 = *unaff_x22;
  }
  puVar4 = PTR_DAT_07112a30;
  puVar3 = PTR_DAT_07112a28;
  puVar2 = PTR_DAT_07112a20;
  puVar7 = *(undefined8 **)(lVar6 + 0xb8);
  lVar8 = puVar7[1];
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar7 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar9 = *puVar7;
    lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar8,uVar9,*(undefined8 *)PTR_DAT_07116ba0,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8) = lVar8;
  }
  uVar9 = *(undefined8 *)puVar3;
  *(long *)(unaff_x19 + 0x48) = lVar8;
  *(undefined8 *)(unaff_x19 + 0x50) = 0xffffffffffffffff;
  uVar5 = FUN_06977554(uVar9,0);
  uVar9 = *(undefined8 *)puVar4;
  *(undefined4 *)(unaff_x19 + 0x58) = uVar5;
  uVar5 = FUN_06977554(uVar9,0);
  uVar9 = *(undefined8 *)puVar2;
  *(undefined4 *)(unaff_x19 + 0x5c) = uVar5;
  uVar5 = FUN_06977554(uVar9,0);
  lVar6 = *unaff_x22;
  *(undefined4 *)(unaff_x19 + 0x60) = uVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_031e5338(lVar6);
    lVar6 = *unaff_x22;
  }
  puVar7 = *(undefined8 **)(lVar6 + 0xb8);
  lVar8 = puVar7[2];
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar6);
      puVar7 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar9 = *puVar7;
    lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar8,uVar9,*(undefined8 *)PTR_DAT_07116ba8,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = lVar8;
  }
  *(long *)(unaff_x19 + 0x88) = lVar8;
  thunk_FUN_069d3450();
  return;
}


