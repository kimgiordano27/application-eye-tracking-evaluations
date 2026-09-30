/*
FUNCTION_NAME: OVRPlugin$$set_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 032211b0
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


undefined8
OVRPlugin__set_eyeFovPremultipliedAlphaModeEnabled
          (long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if ((bRam0000000007237e6d & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06ddcf78);
    bRam0000000007237e6d = 1;
  }
  if (DAT_0722ab65 == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06dfcf08);
    DAT_0722ab65 = '\x01';
  }
  if (param_1 != 0) {
    FUN_02524ea0(param_1,0);
  }
  uVar1 = FUN_02719164();
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 03221254 with catch @ 03221260
                        */
    uVar2 = 0;
  }
  else {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar3 = *(undefined4 *)(param_1 + 0x10);
                    /* try { // try from 03221254 to 03321257 has its CatchHandler @ 03221260 */
    uVar2 = 1;
                    /* try { // try from 03221258 to 03321283 has its CatchHandler @ 03220d8c */
  }
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 0322117c with catch @ 03221264
                        */
  *param_4 = uVar3;
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 032210a4 with catch @ 03221268
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 032210e4 with catch @ 0322126c
                        */
  return uVar2;
}


