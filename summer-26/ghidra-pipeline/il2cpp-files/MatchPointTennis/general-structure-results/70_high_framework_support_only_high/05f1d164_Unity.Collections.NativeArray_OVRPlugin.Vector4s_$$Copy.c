/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 05f1d164
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


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy
               (ulong param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16])

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 in_x9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  uint uVar4;
  ulong unaff_x27;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 uStack0000000000000130;
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
  
  uVar8 = param_4._8_8_;
  uVar7 = param_4._0_8_;
  uVar12 = param_3._8_8_;
  uVar11 = param_3._0_8_;
  uVar10 = param_2._8_8_;
  uVar9 = param_2._0_8_;
  do {
    bVar1 = (uint)param_1 <= (uint)unaff_x27;
    uStack0000000000000100 = uVar9;
    uStack0000000000000108 = uVar10;
    uStack0000000000000110 = uVar11;
    uStack0000000000000118 = uVar12;
    uStack0000000000000120 = uVar7;
    uStack0000000000000128 = uVar8;
    while( true ) {
      uStack0000000000000130 = in_x9;
      if (bVar1) goto LAB_05f1d338;
      uVar4 = (uint)unaff_x27;
      lVar6 = unaff_x22 + (long)(int)uVar4 * (long)(int)unaff_x25;
      uVar10 = *(undefined8 *)(lVar6 + 0x38);
      uVar8 = *(undefined8 *)(lVar6 + 0x30);
      uVar9 = *(undefined8 *)(lVar6 + 0x48);
      uVar7 = *(undefined8 *)(lVar6 + 0x40);
      uVar12 = *(undefined8 *)(lVar6 + 0x28);
      uVar11 = *(undefined8 *)(lVar6 + 0x20);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      in_stack_000001c0 = uVar11;
      in_stack_000001c8 = uVar12;
      in_stack_000001d0 = uVar8;
      in_stack_000001d8 = uVar10;
      in_stack_000001e0 = uVar7;
      in_stack_000001e8 = uVar9;
      iVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000200,&stack0x000001c0,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if (-1 < iVar2) break;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar4) goto LAB_05f1d338;
      uVar12 = *(undefined8 *)(lVar6 + 0x38);
      uVar11 = *(undefined8 *)(lVar6 + 0x30);
      uVar9 = *(undefined8 *)(lVar6 + 0x48);
      uVar7 = *(undefined8 *)(lVar6 + 0x40);
      uVar10 = *(undefined8 *)(lVar6 + 0x28);
      uVar8 = *(undefined8 *)(lVar6 + 0x20);
      if (*(uint *)(unaff_x22 + 0x18) <= uVar4 + 1) goto LAB_05f1d338;
      lVar3 = unaff_x22 + (int)(uVar4 + 1) * unaff_x25;
      *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(lVar6 + 0x50);
      *(undefined8 *)(lVar3 + 0x38) = uVar12;
      *(undefined8 *)(lVar3 + 0x30) = uVar11;
      *(undefined8 *)(lVar3 + 0x48) = uVar9;
      *(undefined8 *)(lVar3 + 0x40) = uVar7;
      *(undefined8 *)(lVar3 + 0x28) = uVar10;
      *(undefined8 *)(lVar3 + 0x20) = uVar8;
      thunk_FUN_044bb4b4(lVar3 + 0x28,0);
      uVar4 = uVar4 - 1;
      unaff_x27 = (ulong)uVar4;
      if ((int)uVar4 < unaff_w21) break;
      bVar1 = *(uint *)(unaff_x22 + 0x18) <= uVar4;
      uStack0000000000000108 = in_stack_00000188;
      uStack0000000000000100 = in_stack_00000180;
      uStack0000000000000118 = in_stack_00000198;
      uStack0000000000000110 = in_stack_00000190;
      uStack0000000000000128 = in_stack_000001a8;
      uStack0000000000000120 = in_stack_000001a0;
      in_x9 = in_stack_000001b0;
    }
    param_1 = (ulong)*(uint *)(unaff_x22 + 0x18);
    uVar5 = unaff_x27;
    do {
      unaff_x27 = unaff_x26;
      uVar4 = (int)uVar5 + 1;
      if ((uint)param_1 <= uVar4) {
LAB_05f1d338:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      lVar6 = unaff_x22 + (int)uVar4 * unaff_x25;
      *(undefined8 *)(lVar6 + 0x50) = in_stack_000001b0;
      *(undefined8 *)(lVar6 + 0x38) = in_stack_00000198;
      *(undefined8 *)(lVar6 + 0x30) = in_stack_00000190;
      *(undefined8 *)(lVar6 + 0x48) = in_stack_000001a8;
      *(undefined8 *)(lVar6 + 0x40) = in_stack_000001a0;
      *(undefined8 *)(lVar6 + 0x28) = in_stack_00000188;
      *(undefined8 *)(lVar6 + 0x20) = in_stack_00000180;
      thunk_FUN_044bb4b4(lVar6 + 0x28,0);
      if (unaff_x27 == unaff_x24) {
        return;
      }
      param_1 = *(ulong *)(unaff_x22 + 0x18);
      unaff_x26 = unaff_x27 + 1;
      if ((uint)param_1 <= (uint)unaff_x26) goto LAB_05f1d338;
      lVar6 = unaff_x22 + unaff_x26 * unaff_x25;
      uVar12 = *(undefined8 *)(lVar6 + 0x38);
      uVar11 = *(undefined8 *)(lVar6 + 0x30);
      uVar8 = *(undefined8 *)(lVar6 + 0x48);
      uVar7 = *(undefined8 *)(lVar6 + 0x40);
      in_x9 = *(undefined8 *)(lVar6 + 0x50);
      uVar10 = *(undefined8 *)(lVar6 + 0x28);
      uVar9 = *(undefined8 *)(lVar6 + 0x20);
      uVar5 = unaff_x27;
      in_stack_00000180 = uVar9;
      in_stack_00000188 = uVar10;
      in_stack_00000190 = uVar11;
      in_stack_00000198 = uVar12;
      in_stack_000001a0 = uVar7;
      in_stack_000001a8 = uVar8;
      in_stack_000001b0 = in_x9;
    } while ((long)unaff_x27 < unaff_x23);
  } while( true );
}


