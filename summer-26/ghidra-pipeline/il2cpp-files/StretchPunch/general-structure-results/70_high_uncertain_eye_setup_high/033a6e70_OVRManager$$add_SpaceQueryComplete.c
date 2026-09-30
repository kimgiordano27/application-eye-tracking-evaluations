/*
FUNCTION_NAME: OVRManager$$add_SpaceQueryComplete
ENTRY_POINT: 033a6e70
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpaceQueryComplete(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ushort *puVar11;
  long unaff_x19;
  long lVar12;
  uint unaff_w20;
  ulong unaff_x21;
  long lVar13;
  ushort *puVar14;
  undefined1 auVar15 [16];
  long in_stack_00000000;
  ushort *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  FUN_01d7d918(StringLiteral_8437);
  FUN_01d7d918(StringLiteral_8438);
  FUN_01d7d918(StringLiteral_8434);
  FUN_01d7d918(StringLiteral_8439);
  FUN_01d7d918(StringLiteral_8436);
  FUN_01d7d918(StringLiteral_8440);
  *(undefined1 *)(unaff_x19 + 0x87c) = 1;
  puVar5 = StringLiteral_8436;
  puVar4 = StringLiteral_8434;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  puVar14 = in_stack_00000008 + (int)unaff_x21;
  uVar9 = FUN_0331bf08(0);
  if ((uVar9 & 1) != 0) {
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar12 = *(long *)puVar4;
    lVar10 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01dde7f8();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01dde7f8();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar10 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01dde7f8();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01dde7f8();
    }
    if (**(int **)(lVar10 + 0xb8) * 2 <= (int)unaff_x21) {
      unaff_x21 = (ulong)((uint)puVar14 >> 1 & 7);
    }
  }
LAB_033a6f68:
  while (iVar8 = (int)unaff_x21, 3 < iVar8) {
    puVar11 = puVar14 + -4;
    if ((uint)puVar14[-1] == (unaff_w20 & 0xffff)) {
      uVar9 = (long)puVar11 - (long)in_stack_00000008;
      if ((long)uVar9 < 0) {
        uVar9 = uVar9 + 1;
      }
      uVar9 = (ulong)((int)(uVar9 >> 1) + 3);
      goto LAB_033a7398;
    }
    if ((uint)puVar14[-2] == (unaff_w20 & 0xffff)) {
      uVar9 = (long)puVar11 - (long)in_stack_00000008;
      if ((long)uVar9 < 0) {
        uVar9 = uVar9 + 1;
      }
      uVar9 = (ulong)((int)(uVar9 >> 1) + 2);
      goto LAB_033a7398;
    }
    if ((uint)puVar14[-3] == (unaff_w20 & 0xffff)) {
      uVar9 = (long)puVar11 - (long)in_stack_00000008;
      if ((long)uVar9 < 0) {
        uVar9 = uVar9 + 1;
      }
      uVar9 = (ulong)((int)(uVar9 >> 1) + 1);
      goto LAB_033a7398;
    }
    unaff_x21 = (ulong)(iVar8 - 4);
    puVar14 = puVar11;
    if ((uint)*puVar11 == (unaff_w20 & 0xffff)) {
LAB_033a72fc:
      uVar9 = (long)puVar11 - (long)in_stack_00000008;
      if ((long)uVar9 < 0) {
        uVar9 = uVar9 + 1;
      }
      uVar9 = uVar9 >> 1;
LAB_033a7398:
      if (*(long *)(in_stack_00000000 + 0x28) == in_stack_00000038) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar9);
    }
  }
  iVar8 = iVar8 + 1;
  puVar11 = puVar14;
  while (iVar8 = iVar8 + -1, 0 < iVar8) {
    puVar11 = puVar11 + -1;
    if ((uint)*puVar11 == (unaff_w20 & 0xffff)) goto LAB_033a72fc;
  }
  uVar9 = FUN_0331bf08(0);
  if (((uVar9 & 1) != 0) &&
     (uVar9 = (long)puVar11 - (long)in_stack_00000008, in_stack_00000008 <= puVar11 && uVar9 != 0))
  {
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar12 = *(long *)puVar4;
    lVar10 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01dde7f8();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01dde7f8();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar10 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01dde7f8();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01dde7f8();
    }
    if ((long)uVar9 < 0) {
      uVar9 = uVar9 + 1;
    }
    iVar8 = **(int **)(lVar10 + 0xb8);
    FUN_028513c0(&stack0x00000028,unaff_w20,*(undefined8 *)StringLiteral_8438);
    puVar14 = puVar11;
    for (uVar1 = -iVar8 & (uint)(uVar9 >> 1); 0 < (int)uVar1;
        uVar1 = uVar1 - **(int **)(lVar10 + 0xb8)) {
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar12 = *(long *)puVar4;
      lVar10 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar10 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      uVar7 = in_stack_00000030;
      uVar6 = in_stack_00000028;
      lVar13 = *(long *)StringLiteral_8440;
      lVar12 = *(long *)(lVar13 + 0x38);
      puVar11 = puVar14 + -(long)**(int **)(lVar10 + 0xb8);
      uVar2 = *(undefined8 *)puVar11;
      uVar3 = *(undefined8 *)(puVar11 + 4);
      if (lVar12 == 0) {
        FUN_01dde854(lVar13);
        lVar12 = *(long *)(lVar13 + 0x38);
      }
      lVar10 = *(long *)(lVar12 + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      auVar15 = FUN_02191188(uVar6,uVar7,uVar2,uVar3,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 8));
      lVar12 = *(long *)StringLiteral_8439;
      lVar10 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar10 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      in_stack_00000018 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10);
      in_stack_00000010 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
      uVar9 = FUN_028549c8(&stack0x00000010,auVar15._0_8_,auVar15._8_8_,
                           *(undefined8 *)StringLiteral_8437);
      if ((uVar9 & 1) == 0) {
        iVar8 = FUN_033baaac(auVar15._0_8_,auVar15._8_8_,0);
        uVar9 = (long)puVar11 - (long)in_stack_00000008;
        if ((long)uVar9 < 0) {
          uVar9 = uVar9 + 1;
        }
        uVar9 = (ulong)(uint)(iVar8 + (int)(uVar9 >> 1));
        goto LAB_033a7398;
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar12 = *(long *)puVar4;
      lVar10 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar10 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      lVar13 = *(long *)puVar4;
      lVar12 = *(long *)(lVar13 + 0x20);
      iVar8 = **(int **)(lVar10 + 0xb8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01dde7f8(lVar12);
      }
      lVar10 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar10 = *(long *)(lVar13 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      puVar14 = puVar14 + -(long)iVar8;
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
    }
    uVar9 = (long)puVar14 - (long)in_stack_00000008;
    if (in_stack_00000008 <= puVar14 && uVar9 != 0) {
      if ((long)uVar9 < 0) {
        uVar9 = uVar9 + 1;
      }
      unaff_x21 = uVar9 >> 1;
      goto LAB_033a6f68;
    }
  }
  uVar9 = 0xffffffff;
  goto LAB_033a7398;
}


