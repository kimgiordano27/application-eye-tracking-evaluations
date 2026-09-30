/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopySafe
ENTRY_POINT: 05f1c210
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe(void)

{
  int iVar1;
  long in_x4;
  undefined8 uVar2;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  uStack0000000000000098 = in_stack_00000118;
  uStack0000000000000090 = in_stack_00000110;
  uStack00000000000000a8 = in_stack_00000128;
  uStack00000000000000a0 = in_stack_00000120;
  uStack0000000000000088 = in_stack_00000108;
  uStack0000000000000080 = in_stack_00000100;
  uStack00000000000000b0 = in_stack_00000130;
  uStack0000000000000048 = in_stack_000000c8;
  uStack0000000000000040 = in_stack_000000c0;
  uStack0000000000000058 = in_stack_000000d8;
  uStack0000000000000050 = in_stack_000000d0;
  uStack0000000000000068 = in_stack_000000e8;
  uStack0000000000000060 = in_stack_000000e0;
  uStack0000000000000070 = in_stack_000000f0;
  if ((*(byte *)(*(long *)(in_x4 + 0x20) + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  in_stack_000001c8 = uStack0000000000000088;
  in_stack_000001c0 = uStack0000000000000080;
  in_stack_000001d8 = uStack0000000000000098;
  in_stack_000001d0 = uStack0000000000000090;
  in_stack_000001e8 = uStack00000000000000a8;
  in_stack_000001e0 = uStack00000000000000a0;
  in_stack_00000188 = uStack0000000000000048;
  in_stack_00000180 = uStack0000000000000040;
  in_stack_00000198 = uStack0000000000000058;
  in_stack_00000190 = uStack0000000000000050;
  in_stack_000001a8 = uStack0000000000000068;
  in_stack_000001a0 = uStack0000000000000060;
  in_stack_000001b0 = uStack0000000000000070;
  iVar1 = (**(code **)(unaff_x22 + 0x18))
                    (*(undefined8 *)(unaff_x22 + 0x40),&stack0x000001c0,&stack0x00000180,
                     *(undefined8 *)(unaff_x22 + 0x28));
  if (iVar1 < 1) {
    return;
  }
  if (unaff_w21 < *(uint *)(unaff_x19 + 0x18)) {
    uVar13 = *(undefined8 *)(unaff_x25 + 0x38);
    uVar11 = *(undefined8 *)(unaff_x25 + 0x30);
    uVar5 = *(undefined8 *)(unaff_x25 + 0x48);
    uVar3 = *(undefined8 *)(unaff_x25 + 0x40);
    uVar2 = *(undefined8 *)(unaff_x25 + 0x50);
    uVar9 = *(undefined8 *)(unaff_x25 + 0x28);
    uVar7 = *(undefined8 *)(unaff_x25 + 0x20);
    if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
      uVar14 = *(undefined8 *)(unaff_x26 + 0x38);
      uVar12 = *(undefined8 *)(unaff_x26 + 0x30);
      uVar6 = *(undefined8 *)(unaff_x26 + 0x48);
      uVar4 = *(undefined8 *)(unaff_x26 + 0x40);
      uVar10 = *(undefined8 *)(unaff_x26 + 0x28);
      uVar8 = *(undefined8 *)(unaff_x26 + 0x20);
      *(undefined8 *)(unaff_x25 + 0x50) = *(undefined8 *)(unaff_x26 + 0x50);
      *(undefined8 *)(unaff_x25 + 0x38) = uVar14;
      *(undefined8 *)(unaff_x25 + 0x30) = uVar12;
      *(undefined8 *)(unaff_x25 + 0x48) = uVar6;
      *(undefined8 *)(unaff_x25 + 0x40) = uVar4;
      *(undefined8 *)(unaff_x25 + 0x28) = uVar10;
      *(undefined8 *)(unaff_x25 + 0x20) = uVar8;
      thunk_FUN_044bb4b4(unaff_x19 + unaff_x24 * 0x38 + 0x28,0);
      if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x26 + 0x50) = uVar2;
        *(undefined8 *)(unaff_x26 + 0x38) = uVar13;
        *(undefined8 *)(unaff_x26 + 0x30) = uVar11;
        *(undefined8 *)(unaff_x26 + 0x48) = uVar5;
        *(undefined8 *)(unaff_x26 + 0x40) = uVar3;
        *(undefined8 *)(unaff_x26 + 0x28) = uVar9;
        *(undefined8 *)(unaff_x26 + 0x20) = uVar7;
        thunk_FUN_044bb4b4(unaff_x19 + unaff_x23 * 0x38 + 0x28,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


