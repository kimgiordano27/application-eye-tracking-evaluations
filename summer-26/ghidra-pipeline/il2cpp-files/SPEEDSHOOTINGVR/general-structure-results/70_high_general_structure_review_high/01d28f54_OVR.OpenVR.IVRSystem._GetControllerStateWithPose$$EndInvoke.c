/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$EndInvoke
ENTRY_POINT: 01d28f54
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetControllerStateWithPose__EndInvoke
               (undefined8 param_1,long param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 + param_3 <= *(int *)(param_2 + 0x10)) {
    FUN_01d27f8c();
    return;
  }
  thunk_FUN_010303a8(PTR_DAT_0234be28);
  uVar1 = thunk_FUN_010400dc();
  uVar2 = thunk_FUN_010303a8(PTR_DAT_023574e0);
  FUN_01c66cb4(uVar1,uVar2,0);
  uVar2 = thunk_FUN_010303a8(PTR_DAT_023574e8);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar1,uVar2);
}


