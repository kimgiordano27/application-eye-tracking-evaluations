/*
FUNCTION_NAME: OVRManager$$add_SpaceSaveComplete
ENTRY_POINT: 033a7058
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


void OVRManager__add_SpaceSaveComplete(int *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined **in_x10;
  ulong unaff_x19;
  uint unaff_w20;
  long lVar9;
  long lVar10;
  long *unaff_x27;
  long *unaff_x28;
  ushort *puVar11;
  ushort *unaff_x29;
  undefined1 auVar12 [16];
  long in_stack_00000000;
  ushort *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  while( true ) {
    if ((long)unaff_x19 < 0) {
      unaff_x19 = unaff_x19 + 1;
    }
    iVar6 = *param_1;
    FUN_028513c0(&stack0x00000028,unaff_w20,*(undefined8 *)in_x10[0xca]);
    for (uVar1 = -iVar6 & (uint)(unaff_x19 >> 1); 0 < (int)uVar1;
        uVar1 = uVar1 - **(int **)(lVar7 + 0xb8)) {
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar9 = *unaff_x28;
      lVar7 = *(long *)(lVar9 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar7 = *(long *)(lVar9 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      uVar5 = in_stack_00000030;
      uVar4 = in_stack_00000028;
      lVar10 = *(long *)StringLiteral_8440;
      lVar9 = *(long *)(lVar10 + 0x38);
      puVar11 = unaff_x29 + -(long)**(int **)(lVar7 + 0xb8);
      uVar2 = *(undefined8 *)puVar11;
      uVar3 = *(undefined8 *)(puVar11 + 4);
      if (lVar9 == 0) {
        FUN_01dde854(lVar10);
        lVar9 = *(long *)(lVar10 + 0x38);
      }
      lVar7 = *(long *)(lVar9 + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      auVar12 = FUN_02191188(uVar4,uVar5,uVar2,uVar3,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 8));
      lVar9 = *(long *)StringLiteral_8439;
      lVar7 = *(long *)(lVar9 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar7 = *(long *)(lVar9 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      in_stack_00000018 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
      in_stack_00000010 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
      uVar8 = FUN_028549c8(&stack0x00000010,auVar12._0_8_,auVar12._8_8_,
                           *(undefined8 *)StringLiteral_8437);
      if ((uVar8 & 1) == 0) {
        iVar6 = FUN_033baaac(auVar12._0_8_,auVar12._8_8_,0);
        uVar8 = (long)puVar11 - (long)in_stack_00000008;
        if ((long)uVar8 < 0) {
          uVar8 = uVar8 + 1;
        }
        uVar8 = (ulong)(uint)(iVar6 + (int)(uVar8 >> 1));
        goto LAB_033a7398;
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar9 = *unaff_x28;
      lVar7 = *(long *)(lVar9 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar7 = *(long *)(lVar9 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      lVar10 = *unaff_x28;
      lVar9 = *(long *)(lVar10 + 0x20);
      iVar6 = **(int **)(lVar7 + 0xb8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01dde7f8(lVar9);
      }
      lVar7 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      unaff_x29 = unaff_x29 + -(long)iVar6;
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
    }
    uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
    if (unaff_x29 < in_stack_00000008 || uVar8 == 0) break;
    if ((long)uVar8 < 0) {
      uVar8 = uVar8 + 1;
    }
    uVar8 = uVar8 >> 1;
    puVar11 = unaff_x29;
    while (iVar6 = (int)uVar8, 3 < iVar6) {
      unaff_x29 = puVar11 + -4;
      if ((uint)puVar11[-1] == (unaff_w20 & 0xffff)) {
        uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
        if ((long)uVar8 < 0) {
          uVar8 = uVar8 + 1;
        }
        uVar8 = (ulong)((int)(uVar8 >> 1) + 3);
        goto LAB_033a7398;
      }
      if ((uint)puVar11[-2] == (unaff_w20 & 0xffff)) {
        uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
        if ((long)uVar8 < 0) {
          uVar8 = uVar8 + 1;
        }
        uVar8 = (ulong)((int)(uVar8 >> 1) + 2);
        goto LAB_033a7398;
      }
      if ((uint)puVar11[-3] == (unaff_w20 & 0xffff)) {
        uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
        if ((long)uVar8 < 0) {
          uVar8 = uVar8 + 1;
        }
        uVar8 = (ulong)((int)(uVar8 >> 1) + 1);
        goto LAB_033a7398;
      }
      uVar8 = (ulong)(iVar6 - 4);
      puVar11 = unaff_x29;
      if ((uint)*unaff_x29 == (unaff_w20 & 0xffff)) goto LAB_033a72fc;
    }
    iVar6 = iVar6 + 1;
    unaff_x29 = puVar11;
    while (iVar6 = iVar6 + -1, 0 < iVar6) {
      unaff_x29 = unaff_x29 + -1;
      if ((uint)*unaff_x29 == (unaff_w20 & 0xffff)) goto LAB_033a72fc;
    }
    uVar8 = FUN_0331bf08(0);
    if (((uVar8 & 1) == 0) ||
       (unaff_x19 = (long)unaff_x29 - (long)in_stack_00000008,
       unaff_x29 < in_stack_00000008 || unaff_x19 == 0)) break;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar9 = *unaff_x28;
    lVar7 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01dde7f8();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01dde7f8();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar7 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01dde7f8();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01dde7f8();
    }
    param_1 = *(int **)(lVar7 + 0xb8);
    in_x10 = &StringLiteral_8236;
  }
  uVar8 = 0xffffffff;
LAB_033a7398:
  if (*(long *)(in_stack_00000000 + 0x28) == in_stack_00000038) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
LAB_033a72fc:
  uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
  if ((long)uVar8 < 0) {
    uVar8 = uVar8 + 1;
  }
  uVar8 = uVar8 >> 1;
  goto LAB_033a7398;
}


