/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 05f19f18
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16])

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  uint uVar4;
  ulong unaff_x26;
  ulong uVar5;
  long unaff_x27;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  uVar6 = param_1._0_8_;
  uVar7 = param_1._8_8_;
  uVar8 = param_2._0_8_;
  uVar9 = param_2._8_8_;
  uVar10 = param_3._0_8_;
  uVar11 = param_3._8_8_;
  uVar13 = param_4._0_8_;
  uVar12 = param_4._8_8_;
  do {
    uStack0000000000000048 = in_stack_000000c8;
    uStack0000000000000040 = in_stack_000000c0;
    uStack0000000000000058 = in_stack_000000d8;
    uStack0000000000000050 = in_stack_000000d0;
    uStack0000000000000068 = in_stack_000000e8;
    uStack0000000000000060 = in_stack_000000e0;
    uStack0000000000000078 = in_stack_000000f8;
    uStack0000000000000070 = in_stack_000000f0;
    uStack0000000000000080 = uVar13;
    uStack0000000000000088 = uVar12;
    uStack0000000000000090 = uVar10;
    uStack0000000000000098 = uVar11;
    uStack00000000000000a0 = uVar8;
    uStack00000000000000a8 = uVar9;
    uStack00000000000000b0 = uVar6;
    uStack00000000000000b8 = uVar7;
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    in_stack_000001c8 = uStack0000000000000048;
    in_stack_000001c0 = uStack0000000000000040;
    in_stack_000001d8 = uStack0000000000000058;
    in_stack_000001d0 = uStack0000000000000050;
    in_stack_000001e8 = uStack0000000000000068;
    in_stack_000001e0 = uStack0000000000000060;
    iVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000200,&stack0x000001c0,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if (iVar2 < 0) {
      uVar4 = (uint)unaff_x26;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar4) goto LAB_05f1a068;
      uVar6 = *(undefined8 *)(unaff_x27 + 0x40);
      uVar8 = *(undefined8 *)(unaff_x27 + 0x58);
      uVar7 = *(undefined8 *)(unaff_x27 + 0x50);
      uVar10 = *(undefined8 *)(unaff_x27 + 0x28);
      uVar9 = *(undefined8 *)(unaff_x27 + 0x20);
      uVar13 = *(undefined8 *)(unaff_x27 + 0x38);
      uVar11 = *(undefined8 *)(unaff_x27 + 0x30);
      if (*(uint *)(unaff_x22 + 0x18) <= uVar4 + 1) goto LAB_05f1a068;
      lVar1 = unaff_x22 + (long)(int)(uVar4 + 1) * 0x40;
      *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(unaff_x27 + 0x48);
      *(undefined8 *)(lVar1 + 0x40) = uVar6;
      *(undefined8 *)(lVar1 + 0x58) = uVar8;
      *(undefined8 *)(lVar1 + 0x50) = uVar7;
      *(undefined8 *)(lVar1 + 0x28) = uVar10;
      *(undefined8 *)(lVar1 + 0x20) = uVar9;
      *(undefined8 *)(lVar1 + 0x38) = uVar13;
      *(undefined8 *)(lVar1 + 0x30) = uVar11;
      thunk_FUN_044bb4b4(lVar1 + 0x20,0);
      uVar4 = uVar4 - 1;
      unaff_x26 = (ulong)uVar4;
      if ((int)uVar4 < unaff_w21) goto LAB_05f19ff8;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar4) goto LAB_05f1a068;
    }
    else {
LAB_05f19ff8:
      uVar3 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar5 = unaff_x26;
      do {
        unaff_x26 = unaff_x25;
        uVar4 = (int)uVar5 + 1;
        if ((uint)uVar3 <= uVar4) goto LAB_05f1a068;
        lVar1 = unaff_x22 + (long)(int)uVar4 * 0x40;
        *(undefined8 *)(lVar1 + 0x48) = in_stack_000001a8;
        *(undefined8 *)(lVar1 + 0x40) = in_stack_000001a0;
        *(undefined8 *)(lVar1 + 0x58) = in_stack_000001b8;
        *(undefined8 *)(lVar1 + 0x50) = in_stack_000001b0;
        *(undefined8 *)(lVar1 + 0x28) = in_stack_00000188;
        *(undefined8 *)(lVar1 + 0x20) = in_stack_00000180;
        *(undefined8 *)(lVar1 + 0x38) = in_stack_00000198;
        *(undefined8 *)(lVar1 + 0x30) = in_stack_00000190;
        thunk_FUN_044bb4b4(lVar1 + 0x20,0);
        if (unaff_x26 == unaff_x24) {
          return;
        }
        uVar3 = *(ulong *)(unaff_x22 + 0x18);
        unaff_x25 = unaff_x26 + 1;
        if ((uint)uVar3 <= (uint)unaff_x25) goto LAB_05f1a068;
        lVar1 = unaff_x22 + unaff_x25 * 0x40;
        in_stack_000001a8 = *(undefined8 *)(lVar1 + 0x48);
        in_stack_000001a0 = *(undefined8 *)(lVar1 + 0x40);
        in_stack_000001b8 = *(undefined8 *)(lVar1 + 0x58);
        in_stack_000001b0 = *(undefined8 *)(lVar1 + 0x50);
        in_stack_00000188 = *(undefined8 *)(lVar1 + 0x28);
        in_stack_00000180 = *(undefined8 *)(lVar1 + 0x20);
        in_stack_00000198 = *(undefined8 *)(lVar1 + 0x38);
        in_stack_00000190 = *(undefined8 *)(lVar1 + 0x30);
        uVar5 = unaff_x26;
      } while ((long)unaff_x26 < unaff_x23);
      if ((uint)uVar3 <= (uint)unaff_x26) {
LAB_05f1a068:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
    }
    unaff_x27 = unaff_x22 + (long)(int)unaff_x26 * 0x40;
    in_stack_000000e8 = *(undefined8 *)(unaff_x27 + 0x48);
    in_stack_000000e0 = *(undefined8 *)(unaff_x27 + 0x40);
    in_stack_000000f8 = *(undefined8 *)(unaff_x27 + 0x58);
    in_stack_000000f0 = *(undefined8 *)(unaff_x27 + 0x50);
    in_stack_000000c8 = *(undefined8 *)(unaff_x27 + 0x28);
    in_stack_000000c0 = *(undefined8 *)(unaff_x27 + 0x20);
    in_stack_000000d8 = *(undefined8 *)(unaff_x27 + 0x38);
    in_stack_000000d0 = *(undefined8 *)(unaff_x27 + 0x30);
    uVar6 = in_stack_000001b0;
    uVar7 = in_stack_000001b8;
    uVar8 = in_stack_000001a0;
    uVar9 = in_stack_000001a8;
    uVar10 = in_stack_00000190;
    uVar11 = in_stack_00000198;
    uVar13 = in_stack_00000180;
    uVar12 = in_stack_00000188;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
  } while( true );
}


