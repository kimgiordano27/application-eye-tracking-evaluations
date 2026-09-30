/*
FUNCTION_NAME: OVRPlugin$$set_chromatic
ENTRY_POINT: 05bbb374
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_chromatic(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar4;
  
  FUN_03188a78(*(undefined8 *)(param_1 + 0xec8));
  *(undefined1 *)(unaff_x21 + 0xa70) = 1;
                    /* catch() { ... } // from try @ 05bbb368 with catch @ 05bbb384 */
                    /* try { // try from 05bbb388 to 05cbb38f has its CatchHandler @ 05bbb398 */
                    /* try { // try from 05bbb390 to 05cbb39b has its CatchHandler @ 05bbaea0 */
  lVar2 = FUN_05974b90(*(undefined8 *)(unaff_x19 + 0x68));
  puVar1 = PTR_DAT_07115ec8;
  if (lVar2 == 0) {
    *(undefined8 *)(unaff_x19 + 0x68) = 0;
    return;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05bbb388 with catch @ 05bbb398
                        */
  uVar4 = *(undefined8 *)PTR_DAT_07115ec8;
  lVar3 = thunk_FUN_031c3cac(lVar2,uVar4);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)puVar1;
    *(long *)(unaff_x19 + 0x68) = lVar3;
    lVar3 = thunk_FUN_031c3cac(lVar2,uVar4);
    if (lVar3 != 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03189058(lVar2,uVar4);
}


