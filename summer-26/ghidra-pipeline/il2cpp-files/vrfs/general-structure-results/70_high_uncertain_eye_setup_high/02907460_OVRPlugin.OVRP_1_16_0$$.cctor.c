/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$.cctor
ENTRY_POINT: 02907460
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_16_0___cctor(long param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000007233cb6 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06ddaad8);
    bRam0000000007233cb6 = 1;
  }
  uVar1 = param_2 - 2U >> 1;
  if ((7 < (uVar1 | param_2 << 0x1f)) || ((1 << (ulong)(uVar1 & 0x1f) & 0x99U) == 0)) {
    thunk_FUN_0159f088(PTR_DAT_06dde728);
    uVar2 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    uVar3 = thunk_FUN_0159f088(PTR_DAT_06df3888);
    FUN_028f9010(uVar2,uVar3);
    uVar3 = thunk_FUN_0159f088(PTR_DAT_06ddbd88);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar2,uVar3);
  }
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    if (DAT_0722ab65 == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06dfcf08);
      DAT_0722ab65 = '\x01';
    }
    uVar2 = FUN_02524ea0(param_1,0);
    uVar2 = FUN_031c95e8(uVar2,*(undefined4 *)(param_1 + 0x10),param_2,0x1200,0);
    if (0xffff < (uint)uVar2) {
      FUN_011aacf4(*(undefined8 *)PTR_DAT_06ddaad8);
                    /* WARNING: Subroutine does not return */
      FUN_02902d64();
    }
  }
  return uVar2;
}


