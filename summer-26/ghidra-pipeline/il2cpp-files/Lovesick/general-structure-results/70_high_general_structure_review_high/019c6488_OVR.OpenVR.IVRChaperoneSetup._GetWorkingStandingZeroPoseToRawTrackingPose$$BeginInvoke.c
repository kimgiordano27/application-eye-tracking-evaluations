/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$BeginInvoke
ENTRY_POINT: 019c6488
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__BeginInvoke
               (long param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x25;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  
  if (param_1 != 0) {
                    /* try { // try from 019c6494 to 01ac64b3 has its CatchHandler @ 019c6578 */
    FUN_012d3188();
    lVar1 = thunk_FUN_00d62348(*unaff_x25);
    if (lVar1 != 0) {
                    /* try { // try from 019c64b4 to 01ac64d3 has its CatchHandler @ 019c6594 */
      FUN_012c4d18();
                    /* try { // try from 019c64d4 to 01ac64df has its CatchHandler @ 019c6588 */
      if ((*(long *)(unaff_x20 + 0x28) != 0) && (unaff_x21 != 0)) {
                    /* try { // try from 019c64e4 to 01ac64e7 has its CatchHandler @ 019c6574 */
                    /* try { // try from 019c64ec to 01ac64ff has its CatchHandler @ 019c6580 */
        FUN_013804d8();
        *unaff_x19 = in_stack_00000000;
        *(undefined4 *)(unaff_x19 + 1) = in_stack_00000008;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 019c6494 with catch @ 019c6578 */
  FUN_00da518c();
}


