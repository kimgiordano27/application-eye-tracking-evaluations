/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 01d2f64c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__EndInvoke
               (long param_1,long *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  iVar3 = (int)*(long *)(param_1 + 0x18);
  if (iVar3 < (int)param_3) {
    uVar2 = iVar3 << 1;
    if (0x7feffffe < uVar2) {
      uVar2 = 0x7fefffff;
    }
    uVar1 = 4;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar1 = uVar2;
    }
    if ((int)param_3 <= (int)uVar1) {
      param_3 = uVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x01d2f690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x278))(param_2,param_3,*(undefined8 *)(*param_2 + 0x280));
    return;
  }
  return;
}


