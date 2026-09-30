/*
FUNCTION_NAME: OVRManager$$get_hasVrFocus
ENTRY_POINT: 02c01ee4
PROGRAM: sharks-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_hasVrFocus(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
                    /* catch() { ... } // from try @ 02c018ec with catch @ 02c01ee4 */
                    /* catch() { ... } // from try @ 02c018cc with catch @ 02c01ee8 */
                    /* catch() { ... } // from try @ 02c018b8 with catch @ 02c01eec */
  if (*(long *)(param_1 + -8) != param_2) {
    unaff_x20 = 0;
  }
                    /* catch() { ... } // from try @ 02c01858 with catch @ 02c01ef0 */
                    /* catch() { ... } // from try @ 02c01e80 with catch @ 02c01ef4 */
  if (*(int *)(param_2 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 02c01d18 with catch @ 02c01ef8 */
    thunk_FUN_01843fdc();
  }
                    /* catch() { ... } // from try @ 02c01e7c with catch @ 02c01efc */
  if (unaff_x20 != 0) {
                    /* catch() { ... } // from try @ 02c01cc8 with catch @ 02c01f00 */
                    /* catch() { ... } // from try @ 02c01e78 with catch @ 02c01f04 */
                    /* catch() { ... } // from try @ 02c0192c with catch @ 02c01f08
                       catch() { ... } // from try @ 02c01e88 with catch @ 02c01f08 */
                    /* catch() { ... } // from try @ 02c01914 with catch @ 02c01f0c
                       catch() { ... } // from try @ 02c01e84 with catch @ 02c01f0c */
    if (*(int *)(*(long *)PTR_DAT_037f4790 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
                    /* try { // try from 02c01f2c to 02d01f2f has its CatchHandler @ 02c01f64 */
    FUN_017f830c(unaff_x20);
    return;
  }
                    /* catch() { ... } // from try @ 02c01dcc with catch @ 02c01f88 */
                    /* catch() { ... } // from try @ 02c01d90 with catch @ 02c01f8c */
                    /* catch() { ... } // from try @ 02c01bf8 with catch @ 02c01f90 */
  uVar1 = thunk_FUN_01851c08(PTR_DAT_03804850);
                    /* catch() { ... } // from try @ 02c01c18 with catch @ 02c01f94 */
                    /* catch() { ... } // from try @ 02c01d88 with catch @ 02c01f98 */
  uVar1 = FUN_02c108dc(uVar1,0);
                    /* catch() { ... } // from try @ 02c01a58 with catch @ 02c01f9c */
                    /* catch() { ... } // from try @ 02c01a30 with catch @ 02c01fa0 */
                    /* catch() { ... } // from try @ 02c01a78 with catch @ 02c01fa4 */
                    /* catch() { ... } // from try @ 02c01d84 with catch @ 02c01fa8 */
  thunk_FUN_01851c08(PTR_DAT_037f87a8);
                    /* catch() { ... } // from try @ 02c01bb0 with catch @ 02c01fac */
  uVar2 = thunk_FUN_01861bbc();
                    /* catch() { ... } // from try @ 02c01a20 with catch @ 02c01fb0 */
                    /* catch() { ... } // from try @ 02c01b54 with catch @ 02c01fb4 */
  uVar3 = thunk_FUN_01851c08(PTR_DAT_0380a198);
  FUN_02b3cc64(uVar2,uVar1,uVar3,0);
  uVar1 = thunk_FUN_01851c08(PTR_DAT_0380ace8);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar2,uVar1);
}


