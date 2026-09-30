/*
FUNCTION_NAME: Unity.Mathematics.uint2x4$$op_BitwiseAnd
ENTRY_POINT: 03bc8b48
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03bc8d14) */
/* WARNING: Removing unreachable block (ram,0x03bc8d0c) */
/* WARNING: Removing unreachable block (ram,0x03bc8c5c) */

void Unity_Mathematics_uint2x4__op_BitwiseAnd(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  undefined4 *puVar10;
  int iVar11;
  long *unaff_x25;
  undefined4 in_stack_00000048;
  int iStack0000000000000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  
  uVar4 = FUN_02357418();
  if ((uVar4 & 1) != 0) {
    puVar10 = (undefined4 *)(unaff_x20 + 0xa0);
    in_stack_00000048 = *puVar10;
    uVar4 = FUN_03bc368c(&stack0x00000048);
    if ((uVar4 & 1) != 0) {
      in_stack_00000048 = *puVar10;
      FUN_03bc6118(&stack0x00000048);
    }
    FUN_03b562c4(&stack0x00000120,&stack0x00000070,0);
    puVar2 = StringLiteral_13397;
    in_stack_00000058 = in_stack_00000128;
    _iStack0000000000000050 = in_stack_00000120;
    uVar5 = _iStack0000000000000050;
    in_stack_00000068 = in_stack_00000138;
    in_stack_00000060 = in_stack_00000130;
    iStack0000000000000050 = (int)in_stack_00000120;
    bVar1 = 0 < iStack0000000000000050;
    _iStack0000000000000050 = uVar5;
    if (bVar1) {
      iVar11 = 0;
      do {
        uVar5 = FUN_02f1e6dc(&stack0x00000050,iVar11,*(undefined8 *)puVar2);
        uVar3 = FUN_03bc6388(uVar5,*puVar10,0);
        *puVar10 = uVar3;
        if ((uVar4 & 1) == 0) {
          uVar5 = FUN_03bc2564();
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar6 = FUN_04073094(uVar5,0,0);
          if ((uVar6 & 1) != 0) {
            uVar5 = FUN_03bc2564();
            FUN_03bc6898(puVar10,uVar5);
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < iStack0000000000000050);
    }
    in_stack_00000048 = *puVar10;
    Unity_Mathematics_uint2x3__op_Equality(&stack0x00000048);
    FUN_03b5656c(&stack0x00000070,0);
  }
  FUN_02f1fbf0(&stack0x000000f0,*(undefined8 *)StringLiteral_12330);
  if (unaff_x19 != (long *)0x0) {
    lVar8 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03bc8cdc;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238();
LAB_03bc8cdc:
    (*(code *)*puVar7)();
  }
  return;
}


