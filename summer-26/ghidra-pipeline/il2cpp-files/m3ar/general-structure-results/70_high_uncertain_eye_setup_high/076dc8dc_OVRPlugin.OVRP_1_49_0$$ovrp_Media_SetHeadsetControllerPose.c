/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetHeadsetControllerPose
ENTRY_POINT: 076dc8dc
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_1_49_0__ovrp_Media_SetHeadsetControllerPose
               (undefined8 param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *unaff_x19;
  undefined4 uVar2;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000010 = param_1;
  uVar1 = FUN_0861aa18();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_08626600(&stack0x00000020,0);
    *unaff_x19 = uVar2;
    unaff_x19[1] = param_3;
    unaff_x19[2] = param_4;
    uVar2 = FUN_0862660c(&stack0x00000020,0);
    unaff_x19[3] = uVar2;
    unaff_x19[4] = param_3;
    unaff_x19[5] = param_4;
    uVar2 = FUN_08626618(&stack0x00000020,0);
    unaff_x19[6] = uVar2;
  }
  return uVar1 & 1;
}


