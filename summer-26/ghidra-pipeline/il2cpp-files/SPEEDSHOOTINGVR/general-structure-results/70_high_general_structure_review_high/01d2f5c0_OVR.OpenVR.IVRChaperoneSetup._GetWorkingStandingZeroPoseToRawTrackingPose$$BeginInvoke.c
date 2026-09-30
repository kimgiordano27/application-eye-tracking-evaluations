/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$BeginInvoke
ENTRY_POINT: 01d2f5c0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


ulong OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__BeginInvoke(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  
  FUN_01d2f644();
  lVar4 = *(long *)(unaff_x19 + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if ((unaff_x20 != 0) && (lVar2 = thunk_FUN_0103ffe0(), lVar2 == 0)) {
    uVar3 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar3,0);
  }
  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
    *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
    thunk_FUN_0106e12c();
    uVar5 = *(ulong *)(unaff_x19 + 0x18);
    *(ulong *)(unaff_x19 + 0x18) = CONCAT44((int)(uVar5 >> 0x20) + 1,(int)uVar5 + 1);
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


