/*
FUNCTION_NAME: Unity.Services.Core.Internal.UnityServicesInternal.<EnableInitializationAsync>d__36$$SetStateMachine
ENTRY_POINT: 058d3cb8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Services_Core_Internal_UnityServicesInternal_<EnableInitializationAsync>d__36__SetStateMachine
               (void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 (*unaff_x19) [16];
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000044;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  FUN_02b3c81c(Method_System_ReadOnlySpan<ulong>_get_Length__);
  *(undefined1 *)(unaff_x23 + 0x342) = 1;
  puVar2 = 
  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControlScheme_DeviceRequirement>_GetEnumerator__
  ;
  uStack0000000000000064 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  uStack000000000000003c = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000040 = 0;
  uStack0000000000000044 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000088 = *(undefined8 *)(*unaff_x19 + 8);
  in_stack_00000080 = *(undefined8 *)*unaff_x19;
  in_stack_00000090 = *(undefined8 *)unaff_x19[1];
  in_stack_00000098 = *(undefined8 *)(unaff_x19[1] + 8);
  uVar6 = *unaff_x24;
  in_stack_00000060 = 0;
  in_stack_000000a0 = *(undefined8 *)unaff_x19[2];
  in_stack_000000a8 = *(undefined8 *)(unaff_x19[2] + 8);
  uVar9 = *(undefined8 *)(unaff_x19[2] + 0xc);
  auVar1 = *(undefined1 (*) [16])(unaff_x21 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x34) = *(undefined8 *)(unaff_x19[3] + 4);
  *(undefined8 *)(unaff_x22 + 0x2c) = uVar9;
  uStack0000000000000008 = auVar1._8_4_;
  uStack000000000000000c = auVar1._12_4_;
  uVar5 = FUN_03abeef0(&stack0x00000070,&stack0x00000080,&stack0x00000064,uVar6);
  puVar4 = Method_System_ReadOnlySpan<OVRPlugin_Bool>_get_Length__;
  puVar3 = Method_System_ReadOnlySpan<OVRPlugin_Bool>_GetPinnableReference__;
  if ((uVar5 & 1) == 0) {
    in_stack_00000030 = *(undefined8 *)unaff_x19[2];
    auVar7._4_4_ = uStack0000000000000008;
    auVar7._0_4_ = uStack0000000000000008;
    auVar7._8_4_ = uStack0000000000000008;
    auVar7._12_4_ = uStack0000000000000008;
    uStack0000000000000044 = (undefined4)*(undefined8 *)(unaff_x19[3] + 4);
    in_stack_00000048 = (undefined4)((ulong)*(undefined8 *)(unaff_x19[3] + 4) >> 0x20);
    in_stack_00000040 = (undefined4)((ulong)*(undefined8 *)(unaff_x19[2] + 0xc) >> 0x20);
    in_stack_00000038 = (undefined4)*(undefined8 *)(unaff_x19[2] + 8);
    uStack000000000000003c = (undefined4)((ulong)*(undefined8 *)(unaff_x19[2] + 8) >> 0x20);
    uStack000000000000004c = 0;
    in_stack_00000050 = 0;
    auVar8._12_4_ = uStack000000000000000c;
    auVar8._0_12_ = auVar1._0_12_;
    auVar8 = NEON_ext(auVar8,auVar7,0xc,1);
    uStack0000000000000054 = auVar1._0_4_;
    uStack000000000000005c = auVar1._4_4_;
    in_stack_00000058 = auVar8._0_4_;
    in_stack_00000060 = auVar8._4_4_;
    in_stack_00000010 = SUB168(*unaff_x19,0);
    in_stack_00000028 = *(undefined8 *)(unaff_x19[1] + 8);
    in_stack_00000020 = *(undefined8 *)unaff_x19[1];
    in_stack_00000018 = SUB168(*unaff_x19,8);
    if ((*(byte *)(*(long *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InternedString>__ctor__
                            + 0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    in_stack_00000080 = *(undefined8 *)*unaff_x19;
    in_stack_00000088 = *(undefined8 *)(*unaff_x19 + 8);
    in_stack_00000098 = *(undefined8 *)(unaff_x19[1] + 8);
    in_stack_00000090 = *(undefined8 *)unaff_x19[1];
    uStack0000000000000064 = *(undefined4 *)(unaff_x20 + 8);
    in_stack_000000a8 = *(undefined8 *)(unaff_x19[2] + 8);
    in_stack_000000a0 = *(undefined8 *)unaff_x19[2];
    uVar6 = *(undefined8 *)puVar4;
    auVar1 = *(undefined1 (*) [16])(unaff_x19[2] + 0xc);
    *(long *)(unaff_x22 + 0x34) = auVar1._8_8_;
    *(long *)(unaff_x22 + 0x2c) = auVar1._0_8_;
    FUN_03abedf4(&stack0x00000070,&stack0x00000080,uStack0000000000000064,uVar6);
    FUN_03aaa1f0(&stack0x00000068,&stack0x00000010,*(undefined8 *)puVar3);
  }
  FUN_03aaa0c0(&stack0x00000068,uStack0000000000000064,*(undefined8 *)puVar2);
  return;
}


