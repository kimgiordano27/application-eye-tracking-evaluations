/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_IsCameraDeviceColorFrameAvailable
ENTRY_POINT: 02907248
PROGRAM: vrfs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_16_0__ovrp_IsCameraDeviceColorFrameAvailable(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  
  thunk_FUN_0159f088(*(undefined8 *)(param_1 + 0xad8));
                    /* try { // try from 02907250 to 02a07257 has its CatchHandler @ 02907340 */
  *(undefined1 *)(unaff_x21 + 0xcb4) = 1;
  uVar1 = unaff_w19 - 2U >> 1;
  if ((7 < (uVar1 | unaff_w19 << 0x1f)) || ((1 << (ulong)(uVar1 & 0x1f) & 0x99U) == 0)) {
    thunk_FUN_0159f088(PTR_DAT_06dde728);
    uVar2 = thunk_FUN_015d056c();
    FUN_011a9bc8();
                    /* try { // try from 02907318 to 02a0731b has its CatchHandler @ 0290733c */
                    /* try { // try from 0290731c to 02a0731f has its CatchHandler @ 02907338 */
    uVar3 = thunk_FUN_0159f088(PTR_DAT_06df3888);
                    /* try { // try from 02907320 to 02a07323 has its CatchHandler @ 0290733c */
                    /* try { // try from 02907324 to 02a07327 has its CatchHandler @ 02907068 */
                    /* try { // try from 02907328 to 02a0732b has its CatchHandler @ 02907334 */
    FUN_028f9010(uVar2,uVar3);
                    /* try { // try from 0290732c to 02a07363 has its CatchHandler @ 02907068 */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 02907328 with catch @ 02907334
                        */
    uVar3 = thunk_FUN_0159f088(PTR_DAT_06e4ac28);
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 0290731c with catch @ 02907338
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 02907318 with catch @ 0290733c
                       catch(type#1 @ 06a5a440) { ... } // from try @ 02907320 with catch @ 0290733c
                        */
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 02907250 with catch @ 02907340
                        */
    FUN_0160ee7c(uVar2,uVar3);
  }
  if (unaff_x20 == 0) {
    uVar2 = 0;
  }
  else {
    if (DAT_0722ab65 == '\0') {
                    /* try { // try from 02907294 to 02a0729b has its CatchHandler @ 02907344 */
      thunk_FUN_0159f088(PTR_DAT_06dfcf08);
                    /* try { // try from 0290729c to 02a07317 has its CatchHandler @ 02907068 */
      DAT_0722ab65 = '\x01';
    }
    uVar2 = FUN_02524ea0();
    uVar2 = FUN_031c95e8(uVar2,*(undefined4 *)(unaff_x20 + 0x10),unaff_w19,0x1400,0);
    if (((unaff_w19 == 10) || (0xff < (int)uVar2)) && ((int)uVar2 != (int)(char)uVar2)) {
      FUN_011aacf4(*(undefined8 *)PTR_DAT_06ddaad8);
                    /* WARNING: Subroutine does not return */
      FUN_02902cc4();
    }
  }
  return uVar2;
}


