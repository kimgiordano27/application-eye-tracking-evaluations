/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 05f18fdc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],undefined8 param_5,long param_6)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  int unaff_w25;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  uVar7 = param_4._8_8_;
  uVar6 = param_4._0_8_;
  uVar9 = param_3._8_8_;
  uVar8 = param_3._0_8_;
  uVar11 = param_2._8_8_;
  uVar10 = param_2._0_8_;
  uVar13 = param_1._8_8_;
  uVar12 = param_1._0_8_;
  do {
    uStack0000000000000028 = in_stack_000000a8;
    uStack0000000000000020 = in_stack_000000a0;
    uStack0000000000000038 = in_stack_000000b8;
    uStack0000000000000030 = in_stack_000000b0;
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    uStack0000000000000000 = uVar12;
    uStack0000000000000008 = uVar13;
    uStack0000000000000010 = uVar10;
    uStack0000000000000018 = uVar11;
    uStack0000000000000060 = uVar8;
    uStack0000000000000068 = uVar9;
    uStack0000000000000070 = uVar6;
    uStack0000000000000078 = uVar7;
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_6) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05f19034;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_044822ac();
LAB_05f19034:
    iVar1 = (*(code *)*puVar2)();
    if (iVar1 == 0) {
      return unaff_w24;
    }
    if (iVar1 < 0) {
      unaff_w19 = unaff_w24 + 1;
    }
    else {
      unaff_w25 = unaff_w24 - 1;
    }
    if (unaff_w25 < (int)unaff_w19) {
      return ~unaff_w19;
    }
    unaff_w24 = unaff_w19 + ((int)(unaff_w25 - unaff_w19) >> 1);
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar3 = unaff_x23 + (long)(int)unaff_w24 * 0x40;
    uVar9 = *(undefined8 *)(lVar3 + 0x48);
    uVar8 = *(undefined8 *)(lVar3 + 0x40);
    uVar7 = *(undefined8 *)(lVar3 + 0x58);
    uVar6 = *(undefined8 *)(lVar3 + 0x50);
    in_stack_000000a8 = unaff_x22[5];
    in_stack_000000a0 = unaff_x22[4];
    in_stack_000000b8 = unaff_x22[7];
    in_stack_000000b0 = unaff_x22[6];
    uVar13 = unaff_x22[1];
    uVar12 = *unaff_x22;
    uVar11 = unaff_x22[3];
    uVar10 = unaff_x22[2];
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    param_6 = **(long **)(lVar3 + 0xc0);
    if ((*(byte *)(param_6 + 0x135) & 1) == 0) {
      param_6 = FUN_04481fb8(param_6);
    }
  } while( true );
}


