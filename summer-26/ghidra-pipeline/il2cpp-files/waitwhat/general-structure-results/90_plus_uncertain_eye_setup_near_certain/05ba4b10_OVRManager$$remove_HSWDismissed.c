/*
FUNCTION_NAME: OVRManager$$remove_HSWDismissed
ENTRY_POINT: 05ba4b10
PROGRAM: waitwhat-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRManager__remove_HSWDismissed(ulong param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  long *plVar11;
  
  plVar11 = *(long **)(unaff_x22 + 0xe40);
  if ((param_1 & 1) == 0) {
    FUN_03188a78(PTR_DAT_07113260);
    FUN_03188a78(PTR_DAT_07112a08);
    FUN_03188a78(PTR_DAT_07115e48);
    FUN_03188a78(PTR_DAT_07115e50);
    FUN_03188a78(PTR_DAT_07115e58);
    FUN_03188a78(PTR_DAT_07115e60);
    FUN_03188a78(PTR_DAT_07115e40);
    FUN_03188a78(PTR_DAT_070f8bb0);
    *(undefined1 *)(unaff_x20 + 0x9a9) = 1;
  }
  *(undefined4 *)(unaff_x19 + 0x28) = 0x3ca3d70a;
  uVar5 = FUN_069d7e0c(0xffffffff,0);
  *(undefined4 *)(unaff_x19 + 0x2c) = uVar5;
  uVar7 = _UNK_012e63f8;
  uVar10 = _DAT_012e63f0;
  lVar6 = *plVar11;
  *(undefined8 *)(unaff_x19 + 0x4c) = DAT_012e19f8;
  *(undefined1 *)(unaff_x19 + 0x48) = 1;
                    /* try { // try from 05ba4bd0 to 05ca4bd7 has its CatchHandler @ 05ba4c68 */
  *(undefined8 *)(unaff_x19 + 100) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x5c) = uVar10;
  *(undefined4 *)(unaff_x19 + 0x54) = 0x3fb33333;
  *(undefined8 *)(unaff_x19 + 0x40) = 0x3e99999a3e99999a;
  uVar10 = _DAT_012e47a0;
                    /* try { // try from 05ba4be4 to 05ca4beb has its CatchHandler @ 05ba4c58 */
  iVar1 = *(int *)(lVar6 + 0xe4);
  *(undefined8 *)(unaff_x19 + 0x74) = _UNK_012e47a8;
  *(undefined8 *)(unaff_x19 + 0x6c) = uVar10;
  uVar10 = DAT_012e1d48;
  *(undefined4 *)(unaff_x19 + 0x84) = 3;
  *(undefined8 *)(unaff_x19 + 0x7c) = uVar10;
  if (iVar1 == 0) {
    thunk_FUN_031e5338();
    lVar6 = *plVar11;
  }
  puVar8 = *(undefined8 **)(lVar6 + 0xb8);
  lVar9 = puVar8[1];
  if (lVar9 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar8 = *(undefined8 **)(*plVar11 + 0xb8);
    }
    uVar10 = *puVar8;
    lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar9,uVar10,*(undefined8 *)PTR_DAT_07115e58,0);
    lVar6 = *plVar11;
    *(long *)(*(long *)(lVar6 + 0xb8) + 8) = lVar9;
  }
  iVar1 = *(int *)(lVar6 + 0xe4);
  *(long *)(unaff_x19 + 0xa0) = lVar9;
  if (iVar1 == 0) {
    thunk_FUN_031e5338();
    lVar6 = *plVar11;
  }
  puVar4 = PTR_DAT_07115e50;
  puVar3 = PTR_DAT_07115e48;
  puVar2 = PTR_DAT_070f8bb0;
  puVar8 = *(undefined8 **)(lVar6 + 0xb8);
  lVar9 = puVar8[2];
  if (lVar9 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar8 = *(undefined8 **)(*plVar11 + 0xb8);
    }
    uVar10 = *puVar8;
    lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07113260);
    FUN_051de404(lVar9,uVar10,*(undefined8 *)PTR_DAT_07115e60,0);
    *(long *)(*(long *)(*plVar11 + 0xb8) + 0x10) = lVar9;
  }
  uVar10 = *(undefined8 *)puVar4;
  *(long *)(unaff_x19 + 0xa8) = lVar9;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar10);
  FUN_04849ce8(uVar10,*(undefined8 *)puVar3);
  uVar7 = *(undefined8 *)puVar2;
  *(undefined8 *)(unaff_x19 + 0x120) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar7);
  FUN_069dea64(uVar10,0);
  *(undefined8 *)(unaff_x19 + 0x128) = uVar10;
  thunk_FUN_069d3450();
  return;
}


