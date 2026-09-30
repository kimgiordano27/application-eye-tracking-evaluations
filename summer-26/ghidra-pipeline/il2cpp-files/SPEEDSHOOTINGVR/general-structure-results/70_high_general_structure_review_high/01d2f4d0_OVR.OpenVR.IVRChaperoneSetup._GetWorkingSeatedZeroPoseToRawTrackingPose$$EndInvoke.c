/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 01d2f4d0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__EndInvoke
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  uint unaff_w21;
  long *unaff_x22;
  
  if ((param_3 != 0) &&
     (lVar1 = thunk_FUN_0103ffe0(param_3,*(undefined8 *)(*unaff_x22 + 0x40)), lVar1 == 0)) {
    uVar2 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar2,0);
  }
  if (unaff_w21 < *(uint *)(unaff_x22 + 3)) {
    unaff_x22[(ulong)unaff_w21 + 4] = param_3;
    thunk_FUN_0106e12c(unaff_x22 + (ulong)unaff_w21 + 4,param_3);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


