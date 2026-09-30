/*
FUNCTION_NAME: OVRManager$$remove_BoundaryVisibilityChanged
ENTRY_POINT: 05d63a38
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_BoundaryVisibilityChanged
               (ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072b10c8);
    *(undefined1 *)(unaff_x20 + 0x609) = 1;
  }
  puVar1 = PTR_DAT_072b10c8;
                    /* try { // try from 05d63a60 to 05e63ab3 has its CatchHandler @ 05d63a60
                       catch() { ... } // from try @ 05d63a60 with catch @ 05d63a60
                       catch() { ... } // from try @ 05d63b30 with catch @ 05d63a60
                       catch() { ... } // from try @ 05d63b7c with catch @ 05d63a60
                       catch() { ... } // from try @ 05d63c0c with catch @ 05d63a60
                       catch() { ... } // from try @ 05d63c18 with catch @ 05d63a60 */
  if (*(long *)(param_4 + 0x40) != 0) {
    lVar2 = FUN_06bc2168(*(long *)(param_4 + 0x40),0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)puVar1);
    }
    if (lVar2 != 0) {
                    /* try { // try from 05d63ab4 to 05e63ab7 has its CatchHandler @ 05d63b44 */
      thunk_FUN_06bc4928(param_2,param_3,lVar2,
                         *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),0);
                    /* try { // try from 05d63ac4 to 05e63acb has its CatchHandler @ 05d63b4c */
      if ((*(long *)(param_4 + 0x40) != 0) &&
         (lVar2 = FUN_06bc2168(*(long *)(param_4 + 0x40),0), lVar2 != 0)) {
                    /* try { // try from 05d63ae0 to 05e63ae7 has its CatchHandler @ 05d63b48 */
                    /* try { // try from 05d63af4 to 05e63af7 has its CatchHandler @ 05d63b38 */
                    /* try { // try from 05d63afc to 05e63b07 has its CatchHandler @ 05d63b30 */
        thunk_FUN_06bc4928(param_2,param_3,lVar2,
                           *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


