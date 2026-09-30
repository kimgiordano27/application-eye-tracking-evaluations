/*
FUNCTION_NAME: OVRPlugin$$GetBodyState
ENTRY_POINT: 05751b3c
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetBodyState(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long unaff_x20;
  
  thunk_FUN_02f12b58(param_1);
  uVar2 = FUN_0556ae5c();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  if (lVar3 != 0) {
    uVar1 = *(uint *)(unaff_x20 + 0x18);
                    /* try { // try from 05751b78 to 05851b7b has its CatchHandler @ 05751ce4 */
                    /* try { // try from 05751b7c to 05851b83 has its CatchHandler @ 05751ce8 */
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                    /* try { // try from 05751b84 to 05851c1f has its CatchHandler @ 05750a7c */
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar3 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
    }
    else {
                    /* catch() { ... } // from try @ 05751334 with catch @ 05751c54 */
      FUN_03f83a80();
    }
    lVar3 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d594c8);
    FUN_05645a04(lVar3,0);
    *(long *)(lVar3 + 0x10) = unaff_x20;
    thunk_FUN_02f411dc();
                    /* try { // try from 05751c94 to 05851cbb has its CatchHandler @ 05751e3c */
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


