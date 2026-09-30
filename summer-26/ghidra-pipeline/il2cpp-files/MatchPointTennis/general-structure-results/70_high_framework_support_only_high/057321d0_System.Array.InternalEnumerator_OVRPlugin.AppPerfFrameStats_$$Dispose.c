/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.AppPerfFrameStats>$$Dispose
ENTRY_POINT: 057321d0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               long *param_4)

{
  long lVar1;
  undefined8 in_x9;
  code *in_x10;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack00000000000000b0;
  long in_stack_000000b8;
  
  uVar3 = param_3._8_8_;
  uVar2 = param_3._0_8_;
  uVar7 = param_2._8_8_;
  uVar6 = param_2._0_8_;
  uVar5 = param_1._8_8_;
  uVar4 = param_1._0_8_;
  while( true ) {
    *(undefined8 *)(unaff_x22 + 0x18) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x10) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
    uStack0000000000000080 = uVar4;
    uStack0000000000000088 = uVar5;
    uStack00000000000000b0 = in_x9;
    (*in_x10)(&stack0x00000008,param_4,&stack0x00000080);
    uStack00000000000000b0 = in_stack_00000038;
    unaff_w23 = unaff_w23 + 1;
    *(undefined8 *)(unaff_x22 + 0x18) = in_stack_00000020;
    *(undefined8 *)(unaff_x22 + 0x10) = in_stack_00000018;
    *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000030;
    *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000028;
    uStack0000000000000088 = in_stack_00000010;
    uStack0000000000000080 = in_stack_00000008;
    unaff_x20[6] = in_stack_00000038;
    unaff_x20[3] = in_stack_00000020;
    unaff_x20[2] = in_stack_00000018;
    unaff_x20[5] = in_stack_00000030;
    unaff_x20[4] = in_stack_00000028;
    unaff_x20[1] = in_stack_00000010;
    *unaff_x20 = in_stack_00000008;
    if (*(int *)(unaff_x19 + 0xe0) + -1 <= (int)unaff_w23) {
      if (*(long *)(unaff_x21 + 0x28) == in_stack_000000b8) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar1 = *(long *)(unaff_x19 + 0xf0);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    uVar7 = unaff_x20[3];
    uVar6 = unaff_x20[2];
    uVar3 = unaff_x20[5];
    uVar2 = unaff_x20[4];
    in_x9 = unaff_x20[6];
    uVar5 = unaff_x20[1];
    uVar4 = *unaff_x20;
    param_4 = *(long **)(lVar1 + (long)(int)unaff_w23 * 8 + 0x20);
    in_stack_00000040 = uVar4;
    in_stack_00000048 = uVar5;
    in_stack_00000050 = uVar6;
    in_stack_00000058 = uVar7;
    in_stack_00000060 = uVar2;
    in_stack_00000068 = uVar3;
    in_stack_00000070 = in_x9;
    if (param_4 == (long *)0x0) break;
    in_x10 = *(code **)(*param_4 + 0x1a8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


