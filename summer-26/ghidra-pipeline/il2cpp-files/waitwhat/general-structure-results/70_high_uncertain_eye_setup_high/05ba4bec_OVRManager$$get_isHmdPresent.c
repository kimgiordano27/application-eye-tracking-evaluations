/*
FUNCTION_NAME: OVRManager$$get_isHmdPresent
ENTRY_POINT: 05ba4bec
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_isHmdPresent(long param_1,undefined1 param_2 [16],long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int in_w9;
  long unaff_x19;
  long lVar7;
  long *unaff_x22;
  undefined8 uVar8;
  
  *(long *)(unaff_x19 + 0x74) = param_2._8_8_;
  *(long *)(unaff_x19 + 0x6c) = param_2._0_8_;
  uVar8 = *(undefined8 *)(param_1 + 0xd48);
                    /* try { // try from 05ba4bf8 to 05ca4c13 has its CatchHandler @ 05ba4c6c */
  *(undefined4 *)(unaff_x19 + 0x84) = 3;
  *(undefined8 *)(unaff_x19 + 0x7c) = uVar8;
  if (in_w9 == 0) {
    thunk_FUN_031e5338();
    param_3 = *unaff_x22;
  }
  puVar6 = *(undefined8 **)(param_3 + 0xb8);
  lVar7 = puVar6[1];
                    /* try { // try from 05ba4c14 to 05ca4c1f has its CatchHandler @ 05ba4c64 */
  if (lVar7 == 0) {
    if (*(int *)(param_3 + 0xe4) == 0) {
                    /* try { // try from 05ba4c20 to 05ca4c4b has its CatchHandler @ 05ba4af0 */
      thunk_FUN_031e5338();
      puVar6 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07112a08);
                    /* try { // try from 05ba4c4c to 05ca4c4f has its CatchHandler @ 05ba4c60 */
                    /* try { // try from 05ba4c50 to 05ca4c53 has its CatchHandler @ 05ba4c5c */
                    /* try { // try from 05ba4c54 to 05ca4c87 has its CatchHandler @ 05ba4af0 */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05ba4be4 with catch @ 05ba4c58
                        */
    FUN_0570f240(lVar7,uVar8,*(undefined8 *)PTR_DAT_07115e58,0);
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05ba4c50 with catch @ 05ba4c5c
                        */
    param_3 = *unaff_x22;
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05ba4c4c with catch @ 05ba4c60
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05ba4c14 with catch @ 05ba4c64
                        */
    *(long *)(*(long *)(param_3 + 0xb8) + 8) = lVar7;
  }
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05ba4bd0 with catch @ 05ba4c68
                        */
  iVar1 = *(int *)(param_3 + 0xe4);
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05ba4bf8 with catch @ 05ba4c6c
                        */
  *(long *)(unaff_x19 + 0xa0) = lVar7;
  if (iVar1 == 0) {
    thunk_FUN_031e5338();
    param_3 = *unaff_x22;
  }
  puVar4 = PTR_DAT_07115e50;
  puVar3 = PTR_DAT_07115e48;
  puVar2 = PTR_DAT_070f8bb0;
  puVar6 = *(undefined8 **)(param_3 + 0xb8);
                    /* try { // try from 05ba4c88 to 05ca4c8b has its CatchHandler @ 05ba4ca4 */
                    /* try { // try from 05ba4c8c to 05ca4ca7 has its CatchHandler @ 05ba4af0 */
  lVar7 = puVar6[2];
  if (lVar7 == 0) {
                    /* catch() { ... } // from try @ 05ba4c88 with catch @ 05ba4ca4 */
    if (*(int *)(param_3 + 0xe4) == 0) {
                    /* try { // try from 05ba4ca8 to 05ca4caf has its CatchHandler @ 05ba4cb8 */
      thunk_FUN_031e5338();
                    /* try { // try from 05ba4cb0 to 05ca4cbb has its CatchHandler @ 05ba4af0 */
      puVar6 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05ba4ca8 with catch @ 05ba4cb8
                        */
                    /* try { // try from 05ba4cbc to 05ca4fe7 has its CatchHandler @ 05ba4cbc
                       catch() { ... } // from try @ 05ba4cbc with catch @ 05ba4cbc
                       catch() { ... } // from try @ 05ba4ff0 with catch @ 05ba4cbc
                       catch() { ... } // from try @ 05ba5054 with catch @ 05ba4cbc
                       catch() { ... } // from try @ 05ba5238 with catch @ 05ba4cbc */
    uVar8 = *puVar6;
    lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07113260);
    FUN_051de404(lVar7,uVar8,*(undefined8 *)PTR_DAT_07115e60,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = lVar7;
  }
  uVar8 = *(undefined8 *)puVar4;
  *(long *)(unaff_x19 + 0xa8) = lVar7;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
  FUN_04849ce8(uVar8,*(undefined8 *)puVar3);
  uVar5 = *(undefined8 *)puVar2;
  *(undefined8 *)(unaff_x19 + 0x120) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar5);
  FUN_069dea64(uVar8,0);
  *(undefined8 *)(unaff_x19 + 0x128) = uVar8;
  thunk_FUN_069d3450();
  return;
}


