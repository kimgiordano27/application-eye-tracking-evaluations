/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$AsReadOnlySpan
ENTRY_POINT: 04a0d868
PROGRAM: vandalizer-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__AsReadOnlySpan
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16])

{
  char in_NG;
  char in_OV;
  uint uVar1;
  int iVar2;
  int in_w3;
  long in_x4;
  long in_x5;
  uint in_w8;
  long lVar3;
  long lVar4;
  long unaff_x19;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  uint uVar5;
  uint unaff_w29;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack0000000000000190;
  undefined8 uStack0000000000000198;
  undefined8 uStack00000000000001a0;
  undefined8 uStack00000000000001a8;
  undefined8 uStack00000000000001b0;
  undefined8 uStack00000000000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  uStack00000000000001a8 = param_3._8_8_;
  uStack00000000000001a0 = param_3._0_8_;
  uStack0000000000000198 = param_2._8_8_;
  uStack0000000000000190 = param_2._0_8_;
  uStack00000000000001b8 = param_1._8_8_;
  uStack00000000000001b0 = param_1._0_8_;
  if (in_NG == in_OV) {
    do {
      uVar5 = unaff_w24 * 2;
      if ((int)uVar5 < unaff_w23) {
        uVar1 = uVar5 + in_w3;
        if ((*(uint *)(unaff_x19 + 0x18) <= uVar1 - 1) || (*(uint *)(unaff_x19 + 0x18) <= uVar1))
        goto LAB_04a0da84;
        lVar3 = unaff_x19 + (long)(int)uVar1 * (long)unaff_w26;
        uVar9 = *(undefined8 *)(lVar3 + 0x38);
        uVar8 = *(undefined8 *)(lVar3 + 0x30);
        uVar7 = *(undefined8 *)(lVar3 + 0x48);
        uVar6 = *(undefined8 *)(lVar3 + 0x40);
        uVar11 = *(undefined8 *)(lVar3 + 0x28);
        uVar10 = *(undefined8 *)(lVar3 + 0x20);
        if (in_x4 == 0) goto LAB_04a0da88;
        if ((*(byte *)(*(long *)(in_x5 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        in_stack_000001c0 = uVar10;
        in_stack_000001c8 = uVar11;
        in_stack_000001d0 = uVar8;
        in_stack_000001d8 = uVar9;
        in_stack_000001e0 = uVar6;
        in_stack_000001e8 = uVar7;
        uVar1 = (**(code **)(in_x4 + 0x18))
                          (*(undefined8 *)(in_x4 + 0x40),&stack0x000001f0,&stack0x000001c0,
                           *(undefined8 *)(in_x4 + 0x28));
        uVar5 = uVar5 | uVar1 >> 0x1f;
      }
      unaff_w29 = unaff_w25 + uVar5;
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_04a0da84;
      lVar3 = unaff_x19 + (long)(int)unaff_w29 * (long)unaff_w26;
      uVar9 = *(undefined8 *)(lVar3 + 0x38);
      uVar8 = *(undefined8 *)(lVar3 + 0x30);
      uVar7 = *(undefined8 *)(lVar3 + 0x48);
      uVar6 = *(undefined8 *)(lVar3 + 0x40);
      uVar11 = *(undefined8 *)(lVar3 + 0x28);
      uVar10 = *(undefined8 *)(lVar3 + 0x20);
      if (in_x4 == 0) {
LAB_04a0da88:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if ((*(byte *)(*(long *)(in_x5 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      in_stack_000001c0 = uVar10;
      in_stack_000001c8 = uVar11;
      in_stack_000001d0 = uVar8;
      in_stack_000001d8 = uVar9;
      in_stack_000001e0 = uVar6;
      in_stack_000001e8 = uVar7;
      iVar2 = (**(code **)(in_x4 + 0x18))
                        (*(undefined8 *)(in_x4 + 0x40),&stack0x000001f0,&stack0x000001c0,
                         *(undefined8 *)(in_x4 + 0x28));
      if (-1 < iVar2) {
        unaff_w29 = unaff_w25 + unaff_w24;
        break;
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_04a0da84;
      uVar10 = *(undefined8 *)(lVar3 + 0x30);
      uVar7 = *(undefined8 *)(lVar3 + 0x48);
      uVar6 = *(undefined8 *)(lVar3 + 0x40);
      uVar9 = *(undefined8 *)(lVar3 + 0x28);
      uVar8 = *(undefined8 *)(lVar3 + 0x20);
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + unaff_w24) goto LAB_04a0da84;
      lVar4 = unaff_x19 + (long)(int)(unaff_w25 + unaff_w24) * (long)unaff_w26;
      *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(lVar3 + 0x38);
      *(undefined8 *)(lVar4 + 0x30) = uVar10;
      *(undefined8 *)(lVar4 + 0x48) = uVar7;
      *(undefined8 *)(lVar4 + 0x40) = uVar6;
      *(undefined8 *)(lVar4 + 0x28) = uVar9;
      *(undefined8 *)(lVar4 + 0x20) = uVar8;
      unaff_w24 = uVar5;
    } while ((int)uVar5 <= unaff_w27);
    in_w8 = *(uint *)(unaff_x19 + 0x18);
  }
  if (unaff_w29 < in_w8) {
    lVar3 = unaff_x19 + (long)(int)unaff_w29 * 0x30;
    *(undefined8 *)(lVar3 + 0x38) = uStack00000000000001a8;
    *(undefined8 *)(lVar3 + 0x30) = uStack00000000000001a0;
    *(undefined8 *)(lVar3 + 0x48) = uStack00000000000001b8;
    *(undefined8 *)(lVar3 + 0x40) = uStack00000000000001b0;
    *(undefined8 *)(lVar3 + 0x28) = uStack0000000000000198;
    *(undefined8 *)(lVar3 + 0x20) = uStack0000000000000190;
    return;
  }
LAB_04a0da84:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


