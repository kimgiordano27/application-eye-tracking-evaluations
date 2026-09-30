/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnSessionCreatedWithSpaceSharing
ENTRY_POINT: 04ab56ac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing
               (void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
                    /* try { // try from 04ab56c8 to 04bb56d7 has its CatchHandler @ 04ab5734 */
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  lVar1 = *(long *)(lVar3 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 04ab56ec to 04bb56f3 has its CatchHandler @ 04ab5728 */
    lVar1 = FUN_02b76218();
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  }
  lVar3 = *(long *)(lVar3 + 0x80);
  uVar4 = **(undefined8 **)(lVar1 + 0xb8);
                    /* try { // try from 04ab5708 to 04bb570f has its CatchHandler @ 04ab5730 */
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218(lVar3);
  }
                    /* try { // try from 04ab571c to 04bb571f has its CatchHandler @ 04ab5738 */
                    /* try { // try from 04ab5720 to 04bb5723 has its CatchHandler @ 04ab572c */
  uVar2 = thunk_FUN_02b79644(lVar3);
                    /* try { // try from 04ab5724 to 04bb5727 has its CatchHandler @ 04ab5730 */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04ab56ec with catch @ 04ab5728
                       try { // try from 04ab5728 to 04bb574f has its CatchHandler @ 04ab56a4 */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04ab5720 with catch @ 04ab572c
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04ab5708 with catch @ 04ab5730
                       catch(type#1 @ 05fbf508) { ... } // from try @ 04ab5724 with catch @ 04ab5730
                        */
  lVar1 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04ab56c8 with catch @ 04ab5734
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04ab571c with catch @ 04ab5738
                        */
  (*(code *)**(undefined8 **)(lVar1 + 0x90))(uVar2,uVar4,*(undefined8 *)(lVar1 + 0x88));
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  lVar1 = *(long *)(lVar3 + 0x20);
                    /* try { // try from 04ab5750 to 04bb5767 has its CatchHandler @ 04ab57fc */
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  }
                    /* try { // try from 04ab5768 to 04bb5797 has its CatchHandler @ 04ab56a4 */
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x20) = uVar2;
  lVar1 = *(long *)(lVar3 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  thunk_FUN_02bb0e9c(*(long *)(lVar1 + 0xb8) + 0x20,uVar2);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
                    /* WARNING: Could not recover jumptable at 0x04ab57c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98))(uVar2);
  return;
}


