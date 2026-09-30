/*
FUNCTION_NAME: Unity.Mathematics.uint2$$get_yxy
ENTRY_POINT: 03bc4b60
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03bc4dd8) */

void Unity_Mathematics_uint2__get_yxy(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 in_w8;
  int iVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  char cStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined4 in_stack_000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined4 in_stack_000000c8;
  
  *(undefined1 *)(unaff_x19 + 0x8fc) = in_w8;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  uStack00000000000000b0 = 0;
  uStack00000000000000b8 = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000088 = 0;
  _cStack0000000000000080 = 0;
  uStack0000000000000098 = 0;
  uStack0000000000000090 = 0;
  uStack0000000000000070 = 0;
  plVar4 = (long *)FUN_03b2468c(0);
  in_stack_000000c8 = *(undefined4 *)(unaff_x21 + 0xa0);
  _uStack00000000000000b0 = FUN_03bc4448(&stack0x000000c8);
  puVar3 = StringLiteral_12036;
  iVar8 = uStack00000000000000b0._12_4_;
  puVar7 = (undefined8 *)StringLiteral_11579;
  while (iVar8 = iVar8 + -1, StringLiteral_11579 = (undefined *)puVar7, -1 < iVar8) {
    in_stack_000000c8 = *(undefined4 *)(unaff_x21 + 0xa0);
    auVar12 = FUN_03bc4448(&stack0x000000c8);
    _uStack00000000000000b0 = auVar12;
    FUN_02617b44(&stack0x000000b0,iVar8,*(undefined8 *)puVar3);
    uVar5 = FUN_02271038();
    puVar7 = (undefined8 *)StringLiteral_11579;
    if ((uVar5 & 1) == 0) {
      in_stack_000000a8 = *(undefined4 *)(unaff_x21 + 0xa0);
      in_stack_000000c8 = in_stack_000000a8;
      auVar12 = FUN_03bc4448(&stack0x000000a8);
      _uStack00000000000000b0 = auVar12;
      uVar6 = FUN_02617b44(&stack0x000000b0,iVar8,*(undefined8 *)puVar3);
      FUN_03bc8fb8(&stack0x000000c8,uVar6);
      puVar7 = (undefined8 *)StringLiteral_11579;
    }
  }
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (0 < (int)*(ulong *)(unaff_x22 + 0x18)) {
    uVar5 = 0;
    uVar9 = *(ulong *)(unaff_x22 + 0x18) & 0xffffffff;
    do {
      if (uVar9 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      in_stack_000000c8 = *(undefined4 *)(unaff_x21 + 0xa0);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x20 + uVar5 * 8);
      auVar12 = FUN_03bc4448(&stack0x000000c8);
      uVar9 = FUN_023c0864(auVar12._0_8_,auVar12._8_8_,uVar6,*puVar7);
      if ((uVar9 & 1) == 0) {
        FUN_03bc6388(uVar6,*(undefined4 *)(unaff_x21 + 0xa0),0);
      }
      uVar9 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)(int)*(uint *)(unaff_x22 + 0x18));
  }
  in_stack_000000c8 = *(undefined4 *)(unaff_x21 + 0xa0);
  FUN_03bc3734(&stack0x00000040,&stack0x000000c8);
  uStack0000000000000088 = in_stack_00000048;
  _cStack0000000000000080 = in_stack_00000040;
  uVar6 = _cStack0000000000000080;
  uStack0000000000000098 = in_stack_00000058;
  uStack0000000000000090 = in_stack_00000050;
  cStack0000000000000080 = (char)in_stack_00000040;
  bVar1 = cStack0000000000000080 != '\0';
  _cStack0000000000000080 = uVar6;
  if (bVar1) {
    in_stack_000000c8 = *(undefined4 *)(unaff_x21 + 0xa0);
    FUN_03bc3734(&stack0x00000040,&stack0x000000c8);
    uStack0000000000000088 = in_stack_00000048;
    _cStack0000000000000080 = in_stack_00000040;
    uStack0000000000000098 = in_stack_00000058;
    uStack0000000000000090 = in_stack_00000050;
    FUN_0332df58(&stack0x00000040,&stack0x00000080,*(undefined8 *)StringLiteral_13400);
    uStack0000000000000068 = in_stack_00000048;
    uStack0000000000000060 = in_stack_00000040;
    uStack0000000000000070 = in_stack_00000050;
    in_stack_00000030 = unaff_x20[2];
    in_stack_00000028 = unaff_x20[1];
    in_stack_00000020 = *unaff_x20;
    uVar5 = FUN_03b55e20(&stack0x00000060,&stack0x00000020,0);
    if ((uVar5 & 1) != 0) goto LAB_03bc4d50;
  }
  in_stack_000000c8 = *(undefined4 *)(unaff_x21 + 0xa0);
  Unity_Mathematics_uint2x3__op_Equality(&stack0x000000c8);
LAB_03bc4d50:
  if (plVar4 != (long *)0x0) {
    lVar10 = *plVar4;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03bc4da4;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_03bc4da4:
    (*(code *)*puVar7)(plVar4,puVar7[1]);
  }
  return;
}


