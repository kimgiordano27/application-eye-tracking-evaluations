/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$op_Implicit
ENTRY_POINT: 04a0d8e0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__op_Implicit
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],undefined1 param_5 [16],undefined1 param_6 [16])

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000008;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
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
  
  uVar9 = param_6._8_8_;
  uVar7 = param_6._0_8_;
  uVar13 = param_3._8_8_;
  uVar12 = param_3._0_8_;
  uVar11 = param_2._8_8_;
  uVar10 = param_2._0_8_;
  uVar8 = param_1._8_8_;
  uVar6 = param_1._0_8_;
  do {
    uStack00000000000000d8 = in_stack_00000138;
    uStack00000000000000d0 = in_stack_00000130;
    uStack00000000000000e8 = in_stack_00000148;
    uStack00000000000000e0 = in_stack_00000140;
    uStack00000000000000f0 = uVar7;
    uStack00000000000000f8 = uVar9;
    uStack0000000000000100 = uVar12;
    uStack0000000000000108 = uVar13;
    uStack0000000000000110 = uVar10;
    uStack0000000000000118 = uVar11;
    uStack0000000000000120 = uVar6;
    uStack0000000000000128 = uVar8;
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    in_stack_000001c8 = uStack00000000000000d8;
    in_stack_000001c0 = uStack00000000000000d0;
    in_stack_000001d8 = uStack00000000000000e8;
    in_stack_000001d0 = uStack00000000000000e0;
    in_stack_000001e8 = uStack00000000000000f8;
    in_stack_000001e0 = uStack00000000000000f0;
    uVar1 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000001f0,&stack0x000001c0,
                       *(undefined8 *)(unaff_x21 + 0x28));
    unaff_w28 = unaff_w28 | uVar1 >> 0x1f;
    uVar1 = unaff_w24;
    do {
      unaff_w24 = unaff_w28;
      uVar5 = unaff_w25 + unaff_w24;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar5) goto LAB_04a0da84;
      lVar4 = unaff_x19 + (long)(int)uVar5 * (long)unaff_w26;
      uVar8 = *(undefined8 *)(lVar4 + 0x38);
      uVar9 = *(undefined8 *)(lVar4 + 0x30);
      uVar6 = *(undefined8 *)(lVar4 + 0x48);
      uVar7 = *(undefined8 *)(lVar4 + 0x40);
      uVar11 = *(undefined8 *)(lVar4 + 0x28);
      uVar10 = *(undefined8 *)(lVar4 + 0x20);
      if (unaff_x21 == 0) goto LAB_04a0da88;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      in_stack_000001c0 = uVar10;
      in_stack_000001c8 = uVar11;
      in_stack_000001d0 = uVar9;
      in_stack_000001d8 = uVar8;
      in_stack_000001e0 = uVar7;
      in_stack_000001e8 = uVar6;
      iVar2 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000001f0,&stack0x000001c0,
                         *(undefined8 *)(unaff_x21 + 0x28));
      if (-1 < iVar2) {
        uVar5 = unaff_w25 + uVar1;
LAB_04a0da30:
        if (uVar5 < *(uint *)(unaff_x19 + 0x18)) {
          lVar4 = unaff_x19 + (long)(int)uVar5 * 0x30;
          *(undefined8 *)(lVar4 + 0x38) = in_stack_000001a8;
          *(undefined8 *)(lVar4 + 0x30) = in_stack_000001a0;
          *(undefined8 *)(lVar4 + 0x48) = in_stack_000001b8;
          *(undefined8 *)(lVar4 + 0x40) = in_stack_000001b0;
          *(undefined8 *)(lVar4 + 0x28) = in_stack_00000198;
          *(undefined8 *)(lVar4 + 0x20) = in_stack_00000190;
          return;
        }
        goto LAB_04a0da84;
      }
      if (*(uint *)(unaff_x19 + 0x18) <= uVar5) goto LAB_04a0da84;
      uVar10 = *(undefined8 *)(lVar4 + 0x30);
      uVar6 = *(undefined8 *)(lVar4 + 0x48);
      uVar7 = *(undefined8 *)(lVar4 + 0x40);
      uVar8 = *(undefined8 *)(lVar4 + 0x28);
      uVar9 = *(undefined8 *)(lVar4 + 0x20);
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + uVar1) goto LAB_04a0da84;
      lVar3 = unaff_x19 + (long)(int)(unaff_w25 + uVar1) * (long)unaff_w26;
      *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(lVar4 + 0x38);
      *(undefined8 *)(lVar3 + 0x30) = uVar10;
      *(undefined8 *)(lVar3 + 0x48) = uVar6;
      *(undefined8 *)(lVar3 + 0x40) = uVar7;
      *(undefined8 *)(lVar3 + 0x28) = uVar8;
      *(undefined8 *)(lVar3 + 0x20) = uVar9;
      if (unaff_w27 < (int)unaff_w24) goto LAB_04a0da30;
      unaff_w28 = unaff_w24 * 2;
      uVar1 = unaff_w24;
    } while (unaff_w23 <= (int)unaff_w28);
    uVar1 = unaff_w28 + in_stack_00000008._4_4_;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1 - 1) {
LAB_04a0da84:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    lVar4 = unaff_x19 + (long)(int)(uVar1 - 1) * (long)unaff_w26;
    uVar11 = *(undefined8 *)(lVar4 + 0x38);
    uVar10 = *(undefined8 *)(lVar4 + 0x30);
    uVar8 = *(undefined8 *)(lVar4 + 0x48);
    uVar6 = *(undefined8 *)(lVar4 + 0x40);
    uVar13 = *(undefined8 *)(lVar4 + 0x28);
    uVar12 = *(undefined8 *)(lVar4 + 0x20);
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_04a0da84;
    lVar4 = unaff_x19 + (long)(int)uVar1 * (long)unaff_w26;
    in_stack_00000148 = *(undefined8 *)(lVar4 + 0x38);
    in_stack_00000140 = *(undefined8 *)(lVar4 + 0x30);
    uVar9 = *(undefined8 *)(lVar4 + 0x48);
    uVar7 = *(undefined8 *)(lVar4 + 0x40);
    in_stack_00000138 = *(undefined8 *)(lVar4 + 0x28);
    in_stack_00000130 = *(undefined8 *)(lVar4 + 0x20);
    if (unaff_x21 == 0) {
LAB_04a0da88:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
  } while( true );
}


