/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 05f19fe0
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


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint in_w8;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  uint uVar5;
  ulong unaff_x26;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000138;
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
  
  uStack0000000000000118 = param_2._8_8_;
  uStack0000000000000110 = param_2._0_8_;
  uStack0000000000000108 = param_1._8_8_;
  uStack0000000000000100 = param_1._0_8_;
code_r0x05f19fe0:
  uStack0000000000000128 = in_stack_000001a8;
  uStack0000000000000120 = in_stack_000001a0;
  uStack0000000000000138 = in_stack_000001b8;
  uStack0000000000000130 = in_stack_000001b0;
  if (in_w8 <= (uint)unaff_x26) {
LAB_05f1a068:
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  do {
    uVar5 = (uint)unaff_x26;
    lVar1 = unaff_x22 + (long)(int)uVar5 * 0x40;
    uVar8 = *(undefined8 *)(lVar1 + 0x48);
    uVar7 = *(undefined8 *)(lVar1 + 0x40);
    uVar12 = *(undefined8 *)(lVar1 + 0x28);
    uVar11 = *(undefined8 *)(lVar1 + 0x20);
    uVar10 = *(undefined8 *)(lVar1 + 0x38);
    uVar9 = *(undefined8 *)(lVar1 + 0x30);
    uStack0000000000000120 = in_stack_000001a0;
    uStack0000000000000128 = in_stack_000001a8;
    uStack0000000000000130 = in_stack_000001b0;
    uStack0000000000000138 = in_stack_000001b8;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    in_stack_000001c0 = uVar11;
    in_stack_000001c8 = uVar12;
    in_stack_000001d0 = uVar9;
    in_stack_000001d8 = uVar10;
    in_stack_000001e0 = uVar7;
    in_stack_000001e8 = uVar8;
    iVar3 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000200,&stack0x000001c0,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if (iVar3 < 0) {
      if (*(uint *)(unaff_x22 + 0x18) <= uVar5) goto LAB_05f1a068;
      uVar7 = *(undefined8 *)(lVar1 + 0x40);
      uVar9 = *(undefined8 *)(lVar1 + 0x58);
      uVar8 = *(undefined8 *)(lVar1 + 0x50);
      uVar11 = *(undefined8 *)(lVar1 + 0x28);
      uVar10 = *(undefined8 *)(lVar1 + 0x20);
      uVar13 = *(undefined8 *)(lVar1 + 0x38);
      uVar12 = *(undefined8 *)(lVar1 + 0x30);
      if (*(uint *)(unaff_x22 + 0x18) <= uVar5 + 1) goto LAB_05f1a068;
      lVar2 = unaff_x22 + (long)(int)(uVar5 + 1) * 0x40;
      *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(lVar1 + 0x48);
      *(undefined8 *)(lVar2 + 0x40) = uVar7;
      *(undefined8 *)(lVar2 + 0x58) = uVar9;
      *(undefined8 *)(lVar2 + 0x50) = uVar8;
      *(undefined8 *)(lVar2 + 0x28) = uVar11;
      *(undefined8 *)(lVar2 + 0x20) = uVar10;
      *(undefined8 *)(lVar2 + 0x38) = uVar13;
      *(undefined8 *)(lVar2 + 0x30) = uVar12;
      thunk_FUN_044bb4b4(lVar2 + 0x20,0);
      unaff_x26 = (ulong)(uVar5 - 1);
      if (unaff_w21 <= (int)(uVar5 - 1)) break;
    }
    uVar4 = (ulong)*(uint *)(unaff_x22 + 0x18);
    uVar6 = unaff_x26;
    do {
      unaff_x26 = unaff_x25;
      uVar5 = (int)uVar6 + 1;
      if ((uint)uVar4 <= uVar5) goto LAB_05f1a068;
      lVar1 = unaff_x22 + (long)(int)uVar5 * 0x40;
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
      uVar4 = *(ulong *)(unaff_x22 + 0x18);
      unaff_x25 = unaff_x26 + 1;
      if ((uint)uVar4 <= (uint)unaff_x25) goto LAB_05f1a068;
      lVar1 = unaff_x22 + unaff_x25 * 0x40;
      in_stack_000001a8 = *(undefined8 *)(lVar1 + 0x48);
      in_stack_000001a0 = *(undefined8 *)(lVar1 + 0x40);
      in_stack_000001b8 = *(undefined8 *)(lVar1 + 0x58);
      in_stack_000001b0 = *(undefined8 *)(lVar1 + 0x50);
      in_stack_00000188 = *(undefined8 *)(lVar1 + 0x28);
      in_stack_00000180 = *(undefined8 *)(lVar1 + 0x20);
      in_stack_00000198 = *(undefined8 *)(lVar1 + 0x38);
      in_stack_00000190 = *(undefined8 *)(lVar1 + 0x30);
      uVar6 = unaff_x26;
    } while ((long)unaff_x26 < unaff_x23);
    uStack0000000000000100 = in_stack_00000180;
    uStack0000000000000108 = in_stack_00000188;
    uStack0000000000000110 = in_stack_00000190;
    uStack0000000000000118 = in_stack_00000198;
    uStack0000000000000120 = in_stack_000001a0;
    uStack0000000000000128 = in_stack_000001a8;
    uStack0000000000000130 = in_stack_000001b0;
    uStack0000000000000138 = in_stack_000001b8;
    if ((uint)uVar4 <= (uint)unaff_x26) goto LAB_05f1a068;
  } while( true );
  in_w8 = *(uint *)(unaff_x22 + 0x18);
  uStack0000000000000100 = in_stack_00000180;
  uStack0000000000000108 = in_stack_00000188;
  uStack0000000000000110 = in_stack_00000190;
  uStack0000000000000118 = in_stack_00000198;
  goto code_r0x05f19fe0;
}


