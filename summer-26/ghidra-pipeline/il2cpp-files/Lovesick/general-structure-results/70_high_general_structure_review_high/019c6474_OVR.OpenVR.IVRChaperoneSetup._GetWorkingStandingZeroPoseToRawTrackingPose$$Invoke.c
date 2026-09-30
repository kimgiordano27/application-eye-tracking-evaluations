/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$Invoke
ENTRY_POINT: 019c6474
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__Invoke
               (undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined4 in_w9;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar3;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  
                    /* try { // try from 019c6474 to 01ac6493 has its CatchHandler @ 019c659c */
  *unaff_x21 = param_1;
  *(undefined4 *)(unaff_x21 + 1) = in_w9;
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar1 = thunk_FUN_00d62348(*unaff_x26);
  if (lVar1 != 0) {
    FUN_012d3188();
    lVar2 = thunk_FUN_00d62348(*unaff_x25);
    if (lVar2 != 0) {
      FUN_012c4d18();
      if ((*(long *)(unaff_x20 + 0x28) != 0) && (lVar3 != 0)) {
        FUN_013804d8(lVar3,lVar1,lVar2,*(undefined4 *)(*(long *)(unaff_x20 + 0x28) + 0x20));
        *unaff_x19 = in_stack_00000000;
        *(undefined4 *)(unaff_x19 + 1) = in_stack_00000008;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


