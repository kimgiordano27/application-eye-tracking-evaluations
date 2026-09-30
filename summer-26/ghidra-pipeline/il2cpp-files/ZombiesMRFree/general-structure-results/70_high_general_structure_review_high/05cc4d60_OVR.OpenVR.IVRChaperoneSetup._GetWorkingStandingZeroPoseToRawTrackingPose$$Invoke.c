/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$Invoke
ENTRY_POINT: 05cc4d60
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


long OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__Invoke
               (undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  float in_stack_00000000;
  float in_stack_00000010;
  float in_stack_00000020;
  
                    /* catch() { ... } // from try @ 05cc4bfc with catch @ 05cc4d60 */
                    /* catch() { ... } // from try @ 05cc4c08 with catch @ 05cc4d64 */
  lVar1 = thunk_FUN_0301080c(*param_1);
                    /* catch() { ... } // from try @ 05cc4bb8 with catch @ 05cc4d68 */
                    /* catch() { ... } // from try @ 05cc4bac with catch @ 05cc4d6c */
                    /* catch() { ... } // from try @ 05cc4bcc with catch @ 05cc4d70 */
  FUN_05b32c00(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined4 *)(lVar1 + 0x1c) = 0;
    *(undefined8 *)(lVar1 + 0x14) = 0;
    *(undefined4 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x2c) = 0;
    *(undefined4 *)(lVar1 + 0x34) = 0;
    if (*(char *)(unaff_x19 + 0x14) != '\0') {
      *(undefined1 *)(lVar1 + 0x14) = 1;
      *(ulong *)(lVar1 + 0x18) =
           CONCAT44(in_stack_00000000 + (float)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20),
                    in_stack_00000000 + (float)*(undefined8 *)(unaff_x19 + 0x18));
    }
    if (*(char *)(unaff_x19 + 0x20) != '\0') {
      *(undefined1 *)(lVar1 + 0x20) = 1;
      *(ulong *)(lVar1 + 0x24) =
           CONCAT44(in_stack_00000010 + (float)((ulong)*(undefined8 *)(unaff_x19 + 0x24) >> 0x20),
                    in_stack_00000010 + (float)*(undefined8 *)(unaff_x19 + 0x24));
    }
    if (*(char *)(unaff_x19 + 0x2c) != '\0') {
      *(undefined1 *)(lVar1 + 0x2c) = 1;
      *(ulong *)(lVar1 + 0x30) =
           CONCAT44(in_stack_00000020 + (float)((ulong)*(undefined8 *)(unaff_x19 + 0x30) >> 0x20),
                    in_stack_00000020 + (float)*(undefined8 *)(unaff_x19 + 0x30));
    }
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


