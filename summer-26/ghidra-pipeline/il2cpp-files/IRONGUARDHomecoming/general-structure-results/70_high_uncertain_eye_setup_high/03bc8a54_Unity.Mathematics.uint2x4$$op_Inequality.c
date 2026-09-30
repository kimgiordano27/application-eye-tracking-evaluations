/*
FUNCTION_NAME: Unity.Mathematics.uint2x4$$op_Inequality
ENTRY_POINT: 03bc8a54
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03bc8d14) */
/* WARNING: Removing unreachable block (ram,0x03bc8d0c) */
/* WARNING: Removing unreachable block (ram,0x03bc8c5c) */

void Unity_Mathematics_uint2x4__op_Inequality(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  undefined4 *puVar14;
  int iVar15;
  long *unaff_x25;
  undefined1 auVar16 [16];
  undefined4 in_stack_00000048;
  int iStack0000000000000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  int iStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  
  uStack00000000000000f8 = in_stack_00000128;
  _iStack00000000000000f0 = in_stack_00000120;
  uVar8 = _iStack00000000000000f0;
  uStack0000000000000108 = in_stack_00000138;
  uStack0000000000000100 = in_stack_00000130;
  iStack00000000000000f0 = (int)in_stack_00000120;
  bVar1 = 1 < iStack00000000000000f0;
  _iStack00000000000000f0 = uVar8;
  if (bVar1) {
    uVar7 = FUN_02f1f6ac(&stack0x000000f0);
    FUN_02f1f950(&stack0x000000f0,0,uVar7,*(undefined8 *)StringLiteral_13489);
  }
  _in_stack_000000e0 = FUN_03bc4418();
  puVar3 = StringLiteral_12325;
  puVar2 = StringLiteral_12036;
  if (0 < in_stack_000000e0._12_4_) {
    iVar15 = 0;
    do {
      uVar8 = FUN_02617b44(&stack0x000000e0,iVar15,*(undefined8 *)puVar2);
      FUN_02f1ef3c(&stack0x000000f0,uVar8,*(undefined8 *)puVar3);
      iVar15 = iVar15 + 1;
    } while (iVar15 < in_stack_000000e8._4_4_);
  }
  uVar6 = uStack0000000000000108;
  uVar5 = uStack0000000000000100;
  uVar4 = uStack00000000000000f8;
  uVar8 = _iStack00000000000000f0;
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  auVar16 = FUN_03b1eb20(*(long *)(unaff_x20 + 0x20),0);
  in_stack_00000128 = uVar4;
  in_stack_00000120 = uVar8;
  in_stack_00000138 = uVar6;
  in_stack_00000130 = uVar5;
  uVar9 = FUN_02357418(&stack0x00000120,auVar16._0_8_,auVar16._8_8_,&stack0x000000c8,
                       &stack0x00000070);
  if ((uVar9 & 1) != 0) {
    puVar14 = (undefined4 *)(unaff_x20 + 0xa0);
    in_stack_00000048 = *puVar14;
    uVar9 = FUN_03bc368c(&stack0x00000048);
    if ((uVar9 & 1) != 0) {
      in_stack_00000048 = *puVar14;
      FUN_03bc6118(&stack0x00000048);
    }
    FUN_03b562c4(&stack0x00000120,&stack0x00000070,0);
    puVar2 = StringLiteral_13397;
    in_stack_00000058 = in_stack_00000128;
    _iStack0000000000000050 = in_stack_00000120;
    uVar8 = _iStack0000000000000050;
    in_stack_00000068 = in_stack_00000138;
    in_stack_00000060 = in_stack_00000130;
    iStack0000000000000050 = (int)in_stack_00000120;
    bVar1 = 0 < iStack0000000000000050;
    _iStack0000000000000050 = uVar8;
    if (bVar1) {
      iVar15 = 0;
      do {
        uVar8 = FUN_02f1e6dc(&stack0x00000050,iVar15,*(undefined8 *)puVar2);
        uVar7 = FUN_03bc6388(uVar8,*puVar14,0);
        *puVar14 = uVar7;
        if ((uVar9 & 1) == 0) {
          uVar8 = FUN_03bc2564();
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar10 = FUN_04073094(uVar8,0,0);
          if ((uVar10 & 1) != 0) {
            uVar8 = FUN_03bc2564();
            FUN_03bc6898(puVar14,uVar8);
          }
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < iStack0000000000000050);
    }
    in_stack_00000048 = *puVar14;
    Unity_Mathematics_uint2x3__op_Equality(&stack0x00000048);
    FUN_03b5656c(&stack0x00000070,0);
  }
  FUN_02f1fbf0(&stack0x000000f0,*(undefined8 *)StringLiteral_12330);
  if (unaff_x19 != (long *)0x0) {
    lVar12 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar11 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03bc8cdc;
        }
        uVar9 = uVar9 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238();
LAB_03bc8cdc:
    (*(code *)*puVar11)();
  }
  return;
}


