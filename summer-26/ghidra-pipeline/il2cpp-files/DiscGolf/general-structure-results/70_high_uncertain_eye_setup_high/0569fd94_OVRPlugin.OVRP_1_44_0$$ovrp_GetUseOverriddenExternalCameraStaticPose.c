/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 0569fd94
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetUseOverriddenExternalCameraStaticPose
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined2 uStack0000000000000004;
  undefined2 in_stack_00000008;
  undefined2 uStack000000000000000c;
  undefined2 in_stack_00000018;
  undefined2 uStack000000000000001c;
  
  uStack000000000000001c = 0;
  FUN_062fe4d8(&stack0x0000001c,param_2,5,0);
  uVar1 = *unaff_x24;
  in_stack_00000018 = 0;
  *(undefined2 *)(unaff_x19 + 0x10) = uStack000000000000001c;
  FUN_062fe4d8(&stack0x00000018,uVar1,0,0);
  uVar1 = *unaff_x23;
  uStack000000000000000c = 0;
  *(undefined2 *)(unaff_x19 + 0x12) = in_stack_00000018;
  FUN_062fe4d8(&stack0x0000000c,uVar1,3,0);
  uVar1 = *unaff_x22;
  in_stack_00000008 = 0;
  *(undefined2 *)(unaff_x19 + 0x14) = uStack000000000000000c;
  FUN_062fe4d8(&stack0x00000008,uVar1,0xc,0);
  uVar1 = *unaff_x21;
  uStack0000000000000004 = 0;
  *(undefined2 *)(unaff_x19 + 0x16) = in_stack_00000008;
  FUN_062fe4d8(&stack0x00000004,uVar1,0xd,0);
  *(undefined2 *)(unaff_x19 + 0x18) = uStack0000000000000004;
  FUN_062fe4d8();
  *(undefined2 *)(unaff_x19 + 0x1a) = 0;
  return;
}


