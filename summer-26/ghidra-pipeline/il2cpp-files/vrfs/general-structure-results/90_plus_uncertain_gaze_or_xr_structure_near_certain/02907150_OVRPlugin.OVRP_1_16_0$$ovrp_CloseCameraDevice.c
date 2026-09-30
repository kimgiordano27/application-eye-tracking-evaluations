/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_CloseCameraDevice
ENTRY_POINT: 02907150
PROGRAM: vrfs-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_16_0__ovrp_CloseCameraDevice(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint in_w8;
  undefined4 unaff_w19;
  long unaff_x20;
  
  if ((7 < (in_w8 >> 1 | in_w8 << 0x1f)) || ((1 << (ulong)(in_w8 >> 1 & 0x1f) & 0x99U) == 0)) {
    thunk_FUN_0159f088(PTR_DAT_06dde728);
    uVar1 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    uVar2 = thunk_FUN_0159f088(PTR_DAT_06df3888);
    FUN_028f9010(uVar1,uVar2);
    uVar2 = thunk_FUN_0159f088(PTR_DAT_06e3faf8);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar1,uVar2);
  }
  if (unaff_x20 == 0) {
    uVar1 = 0;
  }
  else {
                    /* try { // try from 0290717c to 02a071a3 has its CatchHandler @ 02907348 */
    if (DAT_0722ab65 == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06dfcf08);
      DAT_0722ab65 = '\x01';
    }
    uVar1 = FUN_02524ea0();
    uVar1 = FUN_031c95e8(uVar1,*(undefined4 *)(unaff_x20 + 0x10),unaff_w19,0x1200,0);
    if (0xff < (uint)uVar1) {
                    /* try { // try from 029071bc to 02a0721b has its CatchHandler @ 0290734c */
      FUN_011aacf4(*(undefined8 *)PTR_DAT_06ddaad8);
                    /* WARNING: Subroutine does not return */
      FUN_02902c74();
    }
  }
  return uVar1;
}


