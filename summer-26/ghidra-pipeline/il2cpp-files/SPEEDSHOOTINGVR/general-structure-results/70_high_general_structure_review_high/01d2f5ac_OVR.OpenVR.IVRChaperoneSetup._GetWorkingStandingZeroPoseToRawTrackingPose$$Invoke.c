/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$Invoke
ENTRY_POINT: 01d2f5ac
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


ulong OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__Invoke
                (long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x21;
  uint unaff_w22;
  ulong uVar3;
  
  if (unaff_w22 == *(uint *)(unaff_x21 + 3)) {
    FUN_01d2f644(param_1,unaff_w22 + 1);
    unaff_x21 = *(long **)(param_1 + 0x10);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    unaff_w22 = *(uint *)(param_1 + 0x18);
  }
  if ((param_2 != 0) &&
     (lVar1 = thunk_FUN_0103ffe0(param_2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar1 == 0)) {
    uVar2 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar2,0);
  }
  if (unaff_w22 < *(uint *)(unaff_x21 + 3)) {
    unaff_x21[(long)(int)unaff_w22 + 4] = param_2;
    thunk_FUN_0106e12c(unaff_x21 + (long)(int)unaff_w22 + 4,param_2);
    uVar3 = *(ulong *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = CONCAT44((int)(uVar3 >> 0x20) + 1,(int)uVar3 + 1);
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


