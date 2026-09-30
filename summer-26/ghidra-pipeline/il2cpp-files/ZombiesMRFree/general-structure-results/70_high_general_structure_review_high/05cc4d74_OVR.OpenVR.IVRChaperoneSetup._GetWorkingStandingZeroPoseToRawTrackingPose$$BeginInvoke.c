/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$BeginInvoke
ENTRY_POINT: 05cc4d74
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__BeginInvoke(void)

{
  long unaff_x19;
  long unaff_x20;
  float in_stack_00000000;
  float in_stack_00000010;
  float in_stack_00000020;
  
                    /* catch() { ... } // from try @ 05cc4b74 with catch @ 05cc4d74 */
  if (unaff_x20 != 0) {
                    /* catch() { ... } // from try @ 05cc4b30 with catch @ 05cc4d78 */
                    /* catch() { ... } // from try @ 05cc4b48 with catch @ 05cc4d7c */
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
                    /* catch() { ... } // from try @ 05cc4b80 with catch @ 05cc4d80 */
    *(undefined4 *)(unaff_x20 + 0x1c) = 0;
                    /* catch() { ... } // from try @ 05cc4b1c with catch @ 05cc4d84 */
    *(undefined8 *)(unaff_x20 + 0x14) = 0;
                    /* catch() { ... } // from try @ 05cc4aec with catch @ 05cc4d88 */
    *(undefined4 *)(unaff_x20 + 0x28) = 0;
                    /* catch() { ... } // from try @ 05cc4a88 with catch @ 05cc4d8c */
    *(undefined8 *)(unaff_x20 + 0x2c) = 0;
    *(undefined4 *)(unaff_x20 + 0x34) = 0;
    if (*(char *)(unaff_x19 + 0x14) != '\0') {
      *(undefined1 *)(unaff_x20 + 0x14) = 1;
                    /* try { // try from 05cc4da4 to 05dc4da7 has its CatchHandler @ 05cc4dbc */
      *(ulong *)(unaff_x20 + 0x18) =
           CONCAT44(in_stack_00000000 + (float)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20),
                    in_stack_00000000 + (float)*(undefined8 *)(unaff_x19 + 0x18));
    }
                    /* catch() { ... } // from try @ 05cc4da4 with catch @ 05cc4dbc */
    if (*(char *)(unaff_x19 + 0x20) != '\0') {
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
      *(ulong *)(unaff_x20 + 0x24) =
           CONCAT44(in_stack_00000010 + (float)((ulong)*(undefined8 *)(unaff_x19 + 0x24) >> 0x20),
                    in_stack_00000010 + (float)*(undefined8 *)(unaff_x19 + 0x24));
    }
    if (*(char *)(unaff_x19 + 0x2c) != '\0') {
      *(undefined1 *)(unaff_x20 + 0x2c) = 1;
                    /* try { // try from 05cc4dfc to 05dc4e2f has its CatchHandler @ 05cc4e30 */
      *(ulong *)(unaff_x20 + 0x30) =
           CONCAT44(in_stack_00000020 + (float)((ulong)*(undefined8 *)(unaff_x19 + 0x30) >> 0x20),
                    in_stack_00000020 + (float)*(undefined8 *)(unaff_x19 + 0x30));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


