/*
FUNCTION_NAME: Unity.Mathematics.uint2x4$$op_Inequality
ENTRY_POINT: 03bc8ac4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03bc8d14) */
/* WARNING: Removing unreachable block (ram,0x03bc8d0c) */
/* WARNING: Removing unreachable block (ram,0x03bc8c5c) */

void Unity_Mathematics_uint2x4__op_Inequality(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  undefined4 *puVar13;
  int iVar14;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined1 auVar15 [16];
  undefined4 in_stack_00000048;
  int iStack0000000000000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  
  iVar14 = 0;
  do {
    uVar7 = FUN_02617b44(&stack0x000000e0,iVar14,*unaff_x23);
    FUN_02f1ef3c(&stack0x000000f0,uVar7,*unaff_x24);
    uVar5 = in_stack_00000108;
    uVar4 = in_stack_00000100;
    uVar3 = in_stack_000000f8;
    uVar7 = in_stack_000000f0;
    iVar14 = iVar14 + 1;
  } while (iVar14 < in_stack_000000e8._4_4_);
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  auVar15 = FUN_03b1eb20(*(long *)(unaff_x20 + 0x20),0);
  in_stack_00000128 = uVar3;
  in_stack_00000120 = uVar7;
  in_stack_00000138 = uVar5;
  in_stack_00000130 = uVar4;
  uVar8 = FUN_02357418(&stack0x00000120,auVar15._0_8_,auVar15._8_8_,&stack0x000000c8,
                       &stack0x00000070);
  if ((uVar8 & 1) != 0) {
    puVar13 = (undefined4 *)(unaff_x20 + 0xa0);
    in_stack_00000048 = *puVar13;
    uVar8 = FUN_03bc368c(&stack0x00000048);
    if ((uVar8 & 1) != 0) {
      in_stack_00000048 = *puVar13;
      FUN_03bc6118(&stack0x00000048);
    }
    FUN_03b562c4(&stack0x00000120,&stack0x00000070,0);
    puVar2 = StringLiteral_13397;
    in_stack_00000058 = in_stack_00000128;
    _iStack0000000000000050 = in_stack_00000120;
    uVar7 = _iStack0000000000000050;
    in_stack_00000068 = in_stack_00000138;
    in_stack_00000060 = in_stack_00000130;
    iStack0000000000000050 = (int)in_stack_00000120;
    bVar1 = 0 < iStack0000000000000050;
    _iStack0000000000000050 = uVar7;
    if (bVar1) {
      iVar14 = 0;
      do {
        uVar7 = FUN_02f1e6dc(&stack0x00000050,iVar14,*(undefined8 *)puVar2);
        uVar6 = FUN_03bc6388(uVar7,*puVar13,0);
        *puVar13 = uVar6;
        if ((uVar8 & 1) == 0) {
          uVar7 = FUN_03bc2564();
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar9 = FUN_04073094(uVar7,0,0);
          if ((uVar9 & 1) != 0) {
            uVar7 = FUN_03bc2564();
            FUN_03bc6898(puVar13,uVar7);
          }
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < iStack0000000000000050);
    }
    in_stack_00000048 = *puVar13;
    Unity_Mathematics_uint2x3__op_Equality(&stack0x00000048);
    FUN_03b5656c(&stack0x00000070,0);
  }
  FUN_02f1fbf0(&stack0x000000f0,*(undefined8 *)StringLiteral_12330);
  if (unaff_x19 != (long *)0x0) {
    lVar11 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03bc8cdc;
        }
        uVar8 = uVar8 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238();
LAB_03bc8cdc:
    (*(code *)*puVar10)();
  }
  return;
}


