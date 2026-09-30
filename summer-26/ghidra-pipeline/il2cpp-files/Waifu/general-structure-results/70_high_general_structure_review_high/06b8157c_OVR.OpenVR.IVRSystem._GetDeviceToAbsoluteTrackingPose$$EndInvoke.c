/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetDeviceToAbsoluteTrackingPose$$EndInvoke
ENTRY_POINT: 06b8157c
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose__EndInvoke(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
    *(code **)(param_1 + 0x38) = FUN_0329f908;
    return;
  }
  uVar1 = thunk_FUN_0334f058(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
  FUN_033d1c20(uVar1,0);
}


