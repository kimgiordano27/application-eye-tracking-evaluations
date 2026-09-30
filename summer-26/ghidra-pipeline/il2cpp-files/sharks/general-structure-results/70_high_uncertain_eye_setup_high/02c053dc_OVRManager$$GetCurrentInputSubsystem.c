/*
FUNCTION_NAME: OVRManager$$GetCurrentInputSubsystem
ENTRY_POINT: 02c053dc
PROGRAM: sharks-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetCurrentInputSubsystem(undefined8 param_1,undefined8 param_2)

{
  bool in_ZR;
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  int unaff_w25;
  
  if (!in_ZR) {
    param_1 = 0;
  }
  thunk_FUN_0188fd20(param_2,param_1);
                    /* try { // try from 02c053f4 to 02d0545b has its CatchHandler @ 02c051e4 */
  if ((*unaff_x22 != 0) && (*(int *)(unaff_x20 + 0x60) != 0)) {
    if (unaff_w25 == 0x80) {
      uVar1 = FUN_02a43498(*unaff_x24,*unaff_x23,0);
      *unaff_x24 = uVar1;
      thunk_FUN_0188fd20();
      *unaff_x23 = 0;
      thunk_FUN_0188fd20();
      return;
    }
                    /* try { // try from 02c0545c to 02d0545f has its CatchHandler @ 02c05474 */
                    /* catch() { ... } // from try @ 02c05380 with catch @ 02c05460
                       try { // try from 02c05460 to 02d0548f has its CatchHandler @ 02c051e4 */
                    /* catch() { ... } // from try @ 02c05338 with catch @ 02c05464 */
                    /* catch() { ... } // from try @ 02c05370 with catch @ 02c05468 */
                    /* catch() { ... } // from try @ 02c05360 with catch @ 02c0546c */
    return;
  }
                    /* catch() { ... } // from try @ 02c05358 with catch @ 02c05470 */
                    /* catch() { ... } // from try @ 02c0533c with catch @ 02c05474
                       catch() { ... } // from try @ 02c0545c with catch @ 02c05474 */
                    /* catch() { ... } // from try @ 02c052a4 with catch @ 02c05478
                       catch() { ... } // from try @ 02c053ec with catch @ 02c05478 */
  uVar1 = thunk_FUN_01851c08(PTR_DAT_03804828);
  uVar1 = FUN_02c108dc(uVar1,0);
                    /* try { // try from 02c05490 to 02d054a7 has its CatchHandler @ 02c054dc */
  thunk_FUN_01851c08(PTR_DAT_037fb188);
  uVar2 = thunk_FUN_01861bbc();
  FUN_02ad6d08(uVar2,uVar1,0);
                    /* try { // try from 02c054a8 to 02d054cb has its CatchHandler @ 02c051e4 */
  uVar1 = thunk_FUN_01851c08(PTR_DAT_0380ae08);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar2,uVar1);
}


