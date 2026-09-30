/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 059cd520
PROGRAM: m3ar-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor(undefined1 param_1 [16])

{
  uint uVar1;
  int iVar2;
  byte in_w8;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  uint uVar8;
  uint unaff_w29;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  uStack0000000000000018 = param_1._8_8_;
  uStack0000000000000010 = param_1._0_8_;
  do {
    uVar8 = unaff_w28;
    uStack0000000000000020 = *(undefined8 *)(unaff_x22 + 0x30);
    if ((in_w8 & 1) == 0) {
      FUN_0406aaec();
    }
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000b8 = in_stack_00000078;
    in_stack_000000b0 = in_stack_00000070;
    in_stack_00000098 = uStack0000000000000018;
    in_stack_00000090 = uStack0000000000000010;
    in_stack_000000a0 = uStack0000000000000020;
    iVar2 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000000b0,&stack0x00000090,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if (-1 < iVar2) {
      unaff_w29 = unaff_w25 + unaff_w24;
LAB_059cd5b0:
      if (unaff_w29 < *(uint *)(unaff_x19 + 0x18)) {
        lVar5 = unaff_x19 + (long)(int)unaff_w29 * 0x18;
        *(undefined8 *)(lVar5 + 0x28) = in_stack_00000078;
        *(undefined8 *)(lVar5 + 0x20) = in_stack_00000070;
        *(undefined8 *)(lVar5 + 0x30) = in_stack_00000080;
        return;
      }
LAB_059cd5f8:
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    if ((*(uint *)(unaff_x19 + 0x18) <= unaff_w29) ||
       (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + unaff_w24)) goto LAB_059cd5f8;
    lVar5 = unaff_x19 + (long)(int)(unaff_w25 + unaff_w24) * (long)unaff_w26;
    uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(lVar5 + 0x28) = uVar7;
    *(undefined8 *)(lVar5 + 0x20) = uVar4;
    if (unaff_w27 < (int)uVar8) goto LAB_059cd5b0;
    unaff_w28 = uVar8 * 2;
    uVar3 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
    if ((int)unaff_w28 < unaff_w23) {
      uVar1 = unaff_w28 + in_stack_00000008._4_4_;
      if ((uVar3 <= uVar1 - 1) || (uVar3 <= uVar1)) goto LAB_059cd5f8;
      if (unaff_x21 == 0) {
LAB_059cd5fc:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar5 = unaff_x19 + (long)(int)(uVar1 - 1) * (long)unaff_w26;
      lVar6 = unaff_x19 + (long)(int)uVar1 * (long)unaff_w26;
      uVar10 = *(undefined8 *)(lVar5 + 0x28);
      uVar9 = *(undefined8 *)(lVar5 + 0x20);
      uVar4 = *(undefined8 *)(lVar5 + 0x30);
      uVar12 = *(undefined8 *)(lVar6 + 0x28);
      uVar11 = *(undefined8 *)(lVar6 + 0x20);
      uVar7 = *(undefined8 *)(lVar6 + 0x30);
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      in_stack_00000090 = uVar11;
      in_stack_00000098 = uVar12;
      in_stack_000000a0 = uVar7;
      in_stack_000000b0 = uVar9;
      in_stack_000000b8 = uVar10;
      in_stack_000000c0 = uVar4;
      uVar1 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000000b0,&stack0x00000090,
                         *(undefined8 *)(unaff_x21 + 0x28));
      uVar3 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
      unaff_w28 = unaff_w28 | uVar1 >> 0x1f;
    }
    unaff_w29 = unaff_w25 + unaff_w28;
    if (uVar3 <= unaff_w29) goto LAB_059cd5f8;
    if (unaff_x21 == 0) goto LAB_059cd5fc;
    unaff_x22 = unaff_x19 + (long)(int)unaff_w29 * (long)unaff_w26;
    in_w8 = *(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    uStack0000000000000018 = *(undefined8 *)(unaff_x22 + 0x28);
    uStack0000000000000010 = *(undefined8 *)(unaff_x22 + 0x20);
    unaff_w24 = uVar8;
  } while( true );
}


