/*
FUNCTION_NAME: OVRManager$$remove_SpatialAnchorCreateComplete
ENTRY_POINT: 033a69ac
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpatialAnchorCreateComplete(long param_1)

{
  ushort *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ushort *puVar12;
  long unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  long lVar13;
  ushort *unaff_x23;
  long *unaff_x27;
  long *unaff_x28;
  ushort *puVar14;
  undefined1 auVar15 [16];
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01dde7f8();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01dde7f8();
  }
  lVar13 = *unaff_x28;
  lVar10 = *(long *)(lVar13 + 0x20);
  iVar8 = **(int **)(lVar9 + 0xb8);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01dde7f8(lVar10);
  }
  lVar9 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01dde7f8();
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  lVar9 = *(long *)(lVar13 + 0x20);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01dde7f8();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01dde7f8();
  }
  puVar7 = StringLiteral_8437;
  uVar11 = (ulong)(**(int **)(lVar9 + 0xb8) - 1U & iVar8 - ((uint)unaff_x23 >> 1 & 7));
  puVar1 = unaff_x23 + unaff_w21;
  puVar14 = unaff_x23;
  while( true ) {
    while (iVar8 = (int)uVar11, puVar12 = puVar14, 3 < iVar8) {
      if (((uint)*puVar14 == (unaff_w20 & 0xffff)) ||
         (puVar12 = puVar14 + 1, (uint)*puVar12 == (unaff_w20 & 0xffff))) goto LAB_033a6de0;
      if ((uint)puVar14[2] == (unaff_w20 & 0xffff)) goto LAB_033a6ddc;
      if ((uint)puVar14[3] == (unaff_w20 & 0xffff)) goto LAB_033a6dd8;
      puVar14 = puVar14 + 4;
      uVar11 = (ulong)(iVar8 - 4);
    }
    if (0 < iVar8) {
      iVar8 = iVar8 + 1;
      do {
        if ((uint)*puVar12 == (unaff_w20 & 0xffff)) goto LAB_033a6de0;
        iVar8 = iVar8 + -1;
        puVar14 = puVar12 + 1;
        puVar12 = puVar14;
      } while (1 < iVar8);
    }
    uVar11 = FUN_0331bf08(0);
    if (((uVar11 & 1) == 0) ||
       (uVar11 = (long)puVar1 - (long)puVar14, puVar1 < puVar14 || uVar11 == 0)) break;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar10 = *unaff_x28;
    lVar9 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01dde7f8();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01dde7f8();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar9 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01dde7f8();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01dde7f8();
    }
    if ((long)uVar11 < 0) {
      uVar11 = uVar11 + 1;
    }
    iVar8 = **(int **)(lVar9 + 0xb8);
    FUN_028513c0(&stack0x00000038,unaff_w20,*(undefined8 *)StringLiteral_8438);
    uVar5 = in_stack_00000038;
    uVar6 = in_stack_00000040;
    for (uVar2 = -iVar8 & (uint)(uVar11 >> 1); in_stack_00000038 = uVar5, in_stack_00000040 = uVar6,
        0 < (int)uVar2; uVar2 = uVar2 - **(int **)(lVar9 + 0xb8)) {
      uVar3 = *(undefined8 *)puVar14;
      uVar4 = *(undefined8 *)(puVar14 + 4);
      lVar10 = *(long *)StringLiteral_8440;
      lVar9 = *(long *)(lVar10 + 0x38);
      if (lVar9 == 0) {
        FUN_01dde854(lVar10);
        lVar9 = *(long *)(lVar10 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01dde7f8();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      auVar15 = FUN_02191188(uVar5,uVar6,uVar3,uVar4,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 8));
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar10 = *(long *)StringLiteral_8439;
      lVar9 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01dde7f8();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01dde7f8();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar9 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01dde7f8();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01dde7f8();
      }
      in_stack_00000028 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10);
      in_stack_00000020 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8);
      uVar11 = FUN_028549c8(&stack0x00000020,auVar15._0_8_,auVar15._8_8_,*(undefined8 *)puVar7);
      if ((uVar11 & 1) == 0) {
        iVar8 = FUN_033ba8d0(auVar15._0_8_,auVar15._8_8_,0);
        uVar11 = (long)puVar14 - (long)unaff_x23;
        if ((long)uVar11 < 0) {
          uVar11 = uVar11 + 1;
        }
        uVar11 = (ulong)(uint)(iVar8 + (int)(uVar11 >> 1));
        goto LAB_033a6df4;
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar10 = *unaff_x28;
      lVar9 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01dde7f8();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01dde7f8();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar9 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01dde7f8();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01dde7f8();
      }
      lVar13 = *unaff_x28;
      lVar10 = *(long *)(lVar13 + 0x20);
      iVar8 = **(int **)(lVar9 + 0xb8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8(lVar10);
      }
      lVar9 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01dde7f8();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar9 = *(long *)(lVar13 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01dde7f8();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01dde7f8();
      }
      puVar14 = puVar14 + iVar8;
      uVar5 = in_stack_00000038;
      uVar6 = in_stack_00000040;
    }
    uVar11 = (long)puVar1 - (long)puVar14;
    if (puVar1 < puVar14 || uVar11 == 0) break;
    if ((long)uVar11 < 0) {
      uVar11 = uVar11 + 1;
    }
    uVar11 = uVar11 >> 1;
  }
  uVar11 = 0xffffffff;
LAB_033a6df4:
  if (*(long *)(in_stack_00000018 + 0x28) == in_stack_00000048) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
LAB_033a6dd8:
  puVar12 = puVar14 + 2;
LAB_033a6ddc:
  puVar12 = puVar12 + 1;
LAB_033a6de0:
  uVar11 = (long)puVar12 - (long)unaff_x23;
  if ((long)uVar11 < 0) {
    uVar11 = uVar11 + 1;
  }
  uVar11 = uVar11 >> 1;
  goto LAB_033a6df4;
}


