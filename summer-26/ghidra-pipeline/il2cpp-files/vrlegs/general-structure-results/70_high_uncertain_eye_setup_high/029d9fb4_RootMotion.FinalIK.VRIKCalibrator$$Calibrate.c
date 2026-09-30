/*
FUNCTION_NAME: RootMotion.FinalIK.VRIKCalibrator$$Calibrate
ENTRY_POINT: 029d9fb4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x029da048) */
/* WARNING: Removing unreachable block (ram,0x029da010) */

undefined8 RootMotion_FinalIK_VRIKCalibrator__Calibrate(undefined8 param_1,int param_2)

{
  bool in_ZR;
  long *plVar1;
  long lVar2;
  undefined8 in_stack_00000038;
  
                    /* try { // try from 029d9fb4 to 02ad9fb7 has its CatchHandler @ 029da0e4 */
  if (in_ZR) {
                    /* try { // try from 029d9fb8 to 02ad9fbb has its CatchHandler @ 029da120 */
                    /* try { // try from 029d9fbc to 02ad9fbf has its CatchHandler @ 029da0e0 */
    plVar1 = (long *)__cxa_begin_catch();
                    /* try { // try from 029d9fc0 to 02ad9fcb has its CatchHandler @ 029da124 */
    lVar2 = *plVar1;
    __cxa_end_catch();
    FUN_021b51c4(&stack0x00000020,*(undefined8 *)PTR_DAT_03d08e08);
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(lVar2);
    }
    lVar2 = 0;
  }
  else {
                    /* try { // try from 029d9fcc to 02ad9fd7 has its CatchHandler @ 029da128 */
                    /* try { // try from 029d9fd8 to 02ad9fe3 has its CatchHandler @ 029da11c */
                    /* try { // try from 029d9fe4 to 02ad9fef has its CatchHandler @ 029da120 */
    FUN_021b51c4(&stack0x00000020,*(undefined8 *)PTR_DAT_03d08e08);
                    /* try { // try from 029d9ff0 to 02ad9ff3 has its CatchHandler @ 029da0dc */
    if (param_2 != 1) {
                    /* try { // try from 029da00c to 02ada017 has its CatchHandler @ 029da110 */
                    /* catch() { ... } // from try @ 029d9774 with catch @ 029da028 */
                    /* catch() { ... } // from try @ 029d9658 with catch @ 029da02c */
      if (in_stack_00000038._4_1_ != '\0') {
                    /* catch() { ... } // from try @ 029d95e8 with catch @ 029da030 */
                    /* catch() { ... } // from try @ 029d9574 with catch @ 029da034 */
                    /* catch() { ... } // from try @ 029d9514 with catch @ 029da038 */
        OVRManager_<>c__<InitOVRManager>b__424_0();
      }
                    /* catch() { ... } // from try @ 029d98dc with catch @ 029da03c */
                    /* catch() { ... } // from try @ 029d9884 with catch @ 029da040 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 029d9878 with catch @ 029da044 */
      FUN_01b3fef0();
    }
                    /* try { // try from 029d9ff4 to 02ad9ffb has its CatchHandler @ 029da108 */
    plVar1 = (long *)__cxa_begin_catch();
                    /* try { // try from 029d9ffc to 02ad9fff has its CatchHandler @ 029da110 */
    lVar2 = *plVar1;
                    /* try { // try from 029da000 to 02ada00b has its CatchHandler @ 029da108 */
    __cxa_end_catch();
  }
  if (in_stack_00000038._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar2);
  }
  return 1;
}


