/*
FUNCTION_NAME: Oculus.Interaction.Input.ControllerAnimatedHand$$set_AllowThumbUpMode
ENTRY_POINT: 05c7802c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Interaction_Input_ControllerAnimatedHand__set_AllowThumbUpMode(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x24;
  undefined8 *puVar5;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  
  puVar4 = PTR_DAT_072ac7a8;
  puVar2 = PTR_DAT_07282968;
  puVar1 = PTR_DAT_072823c0;
  puVar5 = *(undefined8 **)(unaff_x24 + 0x7b0);
  *(undefined4 *)(unaff_x20 + 0x10) = *(undefined4 *)(unaff_x19 + 0x10);
  puVar3 = PTR_DAT_072ac7a0;
  uStack0000000000000030 = 0;
  uStack0000000000000038 = 0;
  FUN_0451f220(&stack0x00000030,*(undefined4 *)(unaff_x19 + 0x20),4,0,*param_1);
  *(undefined8 *)(unaff_x20 + 0x20) = uStack0000000000000038;
  *(undefined8 *)(unaff_x20 + 0x18) = uStack0000000000000030;
  FUN_0451f704(unaff_x20 + 0x18,*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)(unaff_x19 + 0x20),
               *puVar5);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  FUN_044487b0(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x30),4,0,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x20 + 0x30) = in_stack_00000028;
  *(undefined8 *)(unaff_x20 + 0x28) = in_stack_00000020;
  Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyTo
            (unaff_x20 + 0x28,*(undefined8 *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x30),
             *(undefined8 *)puVar4);
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  FUN_044bdf14(&stack0x00000010,*(undefined4 *)(unaff_x19 + 0x40),4,0,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x20 + 0x40) = in_stack_00000018;
  *(undefined8 *)(unaff_x20 + 0x38) = in_stack_00000010;
  FUN_044be398(unaff_x20 + 0x38,*(undefined8 *)(unaff_x19 + 0x38),*(undefined8 *)(unaff_x19 + 0x40),
               *(undefined8 *)puVar3);
  FUN_044487b0();
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyTo
            (unaff_x20 + 0x48,*(undefined8 *)(unaff_x19 + 0x48),*(undefined8 *)(unaff_x19 + 0x50),
             *(undefined8 *)puVar4);
  return;
}


