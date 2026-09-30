/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.RoomFace>$$CopySafe
ENTRY_POINT: 047a4da0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_RoomFace>__CopySafe(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  long lVar7;
  uint unaff_w29;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  do {
    uVar8 = unaff_w29;
    lVar7 = unaff_x19 + (long)(int)unaff_w22 * (long)unaff_w26;
    uStack0000000000000028 = *(undefined8 *)(lVar7 + 0x28);
    uStack0000000000000020 = *(undefined8 *)(lVar7 + 0x20);
    uStack0000000000000030 = *(undefined8 *)(lVar7 + 0x30);
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    in_stack_000000d0 = in_stack_00000090;
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000a8 = uStack0000000000000028;
    in_stack_000000a0 = uStack0000000000000020;
    in_stack_000000b0 = uStack0000000000000030;
    iVar2 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000000c0,&stack0x000000a0,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if (-1 < iVar2) {
      unaff_w22 = unaff_w25 + unaff_w24;
LAB_047a4e54:
      if (unaff_w22 < *(uint *)(unaff_x19 + 0x18)) {
        lVar7 = unaff_x19 + (long)(int)unaff_w22 * 0x18;
        *(undefined8 *)(lVar7 + 0x28) = in_stack_00000088;
        *(undefined8 *)(lVar7 + 0x20) = in_stack_00000080;
        *(undefined8 *)(lVar7 + 0x30) = in_stack_00000090;
        thunk_FUN_036b7ad0(lVar7 + 0x20,0);
        return;
      }
LAB_047a4ea8:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    if ((*(uint *)(unaff_x19 + 0x18) <= unaff_w22) ||
       (uVar3 = unaff_w25 + unaff_w24, *(uint *)(unaff_x19 + 0x18) <= uVar3)) goto LAB_047a4ea8;
    lVar6 = unaff_x19 + (long)(int)uVar3 * (long)unaff_w26;
    uVar5 = *(undefined8 *)(lVar7 + 0x28);
    uVar4 = *(undefined8 *)(lVar7 + 0x20);
    *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(lVar7 + 0x30);
    *(undefined8 *)(lVar6 + 0x28) = uVar5;
    *(undefined8 *)(lVar6 + 0x20) = uVar4;
    thunk_FUN_036b7ad0(in_stack_00000018 + (long)(int)uVar3 * (long)unaff_w26,0);
    if (unaff_w27 < (int)uVar8) goto LAB_047a4e54;
    unaff_w29 = uVar8 * 2;
    uVar3 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
    if ((int)unaff_w29 < unaff_w23) {
      uVar1 = unaff_w29 + in_stack_00000010._4_4_;
      if ((uVar3 <= uVar1 - 1) || (uVar3 <= uVar1)) goto LAB_047a4ea8;
      if (unaff_x21 == 0) break;
      lVar7 = unaff_x19 + (long)(int)(uVar1 - 1) * (long)unaff_w26;
      lVar6 = unaff_x19 + (long)(int)uVar1 * (long)unaff_w26;
      uVar10 = *(undefined8 *)(lVar7 + 0x28);
      uVar9 = *(undefined8 *)(lVar7 + 0x20);
      uVar4 = *(undefined8 *)(lVar7 + 0x30);
      uVar12 = *(undefined8 *)(lVar6 + 0x28);
      uVar11 = *(undefined8 *)(lVar6 + 0x20);
      uVar5 = *(undefined8 *)(lVar6 + 0x30);
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      in_stack_000000a0 = uVar11;
      in_stack_000000a8 = uVar12;
      in_stack_000000b0 = uVar5;
      in_stack_000000c0 = uVar9;
      in_stack_000000c8 = uVar10;
      in_stack_000000d0 = uVar4;
      uVar1 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000000c0,&stack0x000000a0,
                         *(undefined8 *)(unaff_x21 + 0x28));
      uVar3 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
      unaff_w29 = unaff_w29 | uVar1 >> 0x1f;
    }
    unaff_w22 = unaff_w25 + unaff_w29;
    if (uVar3 <= unaff_w22) goto LAB_047a4ea8;
    unaff_w24 = uVar8;
  } while (unaff_x21 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


