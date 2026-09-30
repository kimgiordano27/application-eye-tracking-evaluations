/*
FUNCTION_NAME: Oculus.Interaction.Input.SyntheticControllerInHand$$<Start>b__7_0
ENTRY_POINT: 05c77fdc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Interaction_Input_SyntheticControllerInHand__<Start>b__7_0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0x7b0));
  thunk_FUN_032e1da0(PTR_DAT_072823c0);
  thunk_FUN_032e1da0(PTR_DAT_07282968);
  thunk_FUN_032e1da0(PTR_DAT_072aa5b8);
  *(undefined1 *)(unaff_x21 + 0xdba) = 1;
  FUN_059660a0();
  puVar6 = PTR_DAT_072ac7b0;
  puVar5 = PTR_DAT_072ac7a8;
  puVar3 = PTR_DAT_072aa5b8;
  puVar2 = PTR_DAT_07282968;
  puVar1 = PTR_DAT_072823c0;
  if (unaff_x19 != 0) {
    *(undefined4 *)(unaff_x20 + 0x10) = *(undefined4 *)(unaff_x19 + 0x10);
    puVar4 = PTR_DAT_072ac7a0;
    in_stack_00000030 = 0;
    in_stack_00000038 = 0;
    FUN_0451f220(&stack0x00000030,*(undefined4 *)(unaff_x19 + 0x20),4,0,*(undefined8 *)puVar3);
    *(undefined8 *)(unaff_x20 + 0x20) = in_stack_00000038;
    *(undefined8 *)(unaff_x20 + 0x18) = in_stack_00000030;
    FUN_0451f704(unaff_x20 + 0x18,*(undefined8 *)(unaff_x19 + 0x18),
                 *(undefined8 *)(unaff_x19 + 0x20),*(undefined8 *)puVar6);
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    FUN_044487b0(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x30),4,0,*(undefined8 *)puVar1);
    *(undefined8 *)(unaff_x20 + 0x30) = in_stack_00000028;
    *(undefined8 *)(unaff_x20 + 0x28) = in_stack_00000020;
    Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyTo
              (unaff_x20 + 0x28,*(undefined8 *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x30),
               *(undefined8 *)puVar5);
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_044bdf14(&stack0x00000010,*(undefined4 *)(unaff_x19 + 0x40),4,0,*(undefined8 *)puVar2);
    *(undefined8 *)(unaff_x20 + 0x40) = in_stack_00000018;
    *(undefined8 *)(unaff_x20 + 0x38) = in_stack_00000010;
    FUN_044be398(unaff_x20 + 0x38,*(undefined8 *)(unaff_x19 + 0x38),
                 *(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)puVar4);
    FUN_044487b0();
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyTo
              (unaff_x20 + 0x48,*(undefined8 *)(unaff_x19 + 0x48),*(undefined8 *)(unaff_x19 + 0x50),
               *(undefined8 *)puVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


