/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$DeserializeFromString<ColocationSessionEventHandler.SpaceSharingInfo>
ENTRY_POINT: 0321e708
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__DeserializeFromString<ColocationSessionEventHandler_SpaceSharingInfo>
               (undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *in_x9;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (in_x9 == (undefined8 *)0x0) {
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0321e6f0 with catch @ 0321e714
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0321e6d8 with catch @ 0321e718
                        */
    FUN_02b3c81c(PTR_DAT_0631e258);
    in_x9 = *(undefined8 **)(unaff_x20 + 0x38);
    if (in_x9 == (undefined8 *)0x0) {
      FUN_02b76274();
      in_x9 = *(undefined8 **)(unaff_x20 + 0x38);
    }
  }
                    /* try { // try from 0321e734 to 0331e737 has its CatchHandler @ 0321e750 */
                    /* try { // try from 0321e738 to 0331e753 has its CatchHandler @ 0321e674 */
  uVar4 = *in_x9;
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
                    /* catch() { ... } // from try @ 0321e734 with catch @ 0321e750 */
                    /* try { // try from 0321e754 to 0331e75b has its CatchHandler @ 0321e764 */
  FUN_04d8a7b0(uVar4,0);
                    /* try { // try from 0321e75c to 0331e767 has its CatchHandler @ 0321e674 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0321e754 with catch @ 0321e764
                        */
                    /* try { // try from 0321e768 to 0331e7cb has its CatchHandler @ 0321e768
                       catch() { ... } // from try @ 0321e768 with catch @ 0321e768
                       catch() { ... } // from try @ 0321e7ec with catch @ 0321e768
                       catch() { ... } // from try @ 0321e82c with catch @ 0321e768
                       catch() { ... } // from try @ 0321e850 with catch @ 0321e768 */
  if (*(int *)(*(long *)PTR_DAT_0631e258 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)PTR_DAT_0631e258);
  }
  plVar1 = (long *)thunk_FUN_02b488f8();
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218(lVar3);
  }
  if (plVar1 != (long *)0x0) {
    if (*(long *)(*plVar1 + 0x40) == *(long *)(lVar3 + 0x40)) {
      puVar2 = (undefined8 *)thunk_FUN_02b7978c();
                    /* try { // try from 0321e7cc to 0331e7db has its CatchHandler @ 0321e80c */
      uVar5 = puVar2[1];
      uVar4 = *puVar2;
      uVar7 = puVar2[3];
      uVar6 = puVar2[2];
      uVar8 = puVar2[4];
      param_1[5] = puVar2[5];
      param_1[4] = uVar8;
      param_1[1] = uVar5;
      *param_1 = uVar4;
      param_1[3] = uVar7;
      param_1[2] = uVar6;
                    /* try { // try from 0321e7e4 to 0331e7eb has its CatchHandler @ 0321e808 */
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44(plVar1);
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0321e7ec to 0331e827 has its CatchHandler @ 0321e768 */
  FUN_02b3cac4();
}


