/*
FUNCTION_NAME: OVRManager$$add_SpaceEraseComplete
ENTRY_POINT: 033a7240
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


void OVRManager__add_SpaceEraseComplete(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  byte in_w8;
  long lVar7;
  uint unaff_w19;
  uint unaff_w20;
  ulong uVar8;
  long lVar9;
  long *unaff_x27;
  long *unaff_x28;
  ushort *puVar10;
  ushort *unaff_x29;
  undefined1 auVar11 [16];
  long in_stack_00000000;
  ushort *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  do {
    if ((in_w8 & 1) == 0) {
      param_1 = FUN_01dde7f8();
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8();
    }
    lVar9 = *unaff_x28;
    lVar7 = *(long *)(lVar9 + 0x20);
    iVar5 = **(int **)(lVar6 + 0xb8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01dde7f8(lVar7);
    }
    lVar6 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar6 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8();
    }
    unaff_x29 = unaff_x29 + -(long)iVar5;
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8();
    }
    unaff_w19 = unaff_w19 - **(int **)(lVar6 + 0xb8);
    while ((int)unaff_w19 < 1) {
      uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
      if (unaff_x29 < in_stack_00000008 || uVar8 == 0) {
LAB_033a7340:
        uVar8 = 0xffffffff;
        goto LAB_033a7398;
      }
      if ((long)uVar8 < 0) {
        uVar8 = uVar8 + 1;
      }
      uVar8 = uVar8 >> 1;
      puVar10 = unaff_x29;
      while (iVar5 = (int)uVar8, 3 < iVar5) {
        unaff_x29 = puVar10 + -4;
        if ((uint)puVar10[-1] == (unaff_w20 & 0xffff)) {
          uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar8 < 0) {
            uVar8 = uVar8 + 1;
          }
          uVar8 = (ulong)((int)(uVar8 >> 1) + 3);
          goto LAB_033a7398;
        }
        if ((uint)puVar10[-2] == (unaff_w20 & 0xffff)) {
          uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar8 < 0) {
            uVar8 = uVar8 + 1;
          }
          uVar8 = (ulong)((int)(uVar8 >> 1) + 2);
          goto LAB_033a7398;
        }
        if ((uint)puVar10[-3] == (unaff_w20 & 0xffff)) {
          uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar8 < 0) {
            uVar8 = uVar8 + 1;
          }
          uVar8 = (ulong)((int)(uVar8 >> 1) + 1);
          goto LAB_033a7398;
        }
        uVar8 = (ulong)(iVar5 - 4);
        puVar10 = unaff_x29;
        if ((uint)*unaff_x29 == (unaff_w20 & 0xffff)) goto LAB_033a72fc;
      }
      iVar5 = iVar5 + 1;
      unaff_x29 = puVar10;
      while (iVar5 = iVar5 + -1, 0 < iVar5) {
        unaff_x29 = unaff_x29 + -1;
        if ((uint)*unaff_x29 == (unaff_w20 & 0xffff)) goto LAB_033a72fc;
      }
      uVar8 = FUN_0331bf08(0);
      if (((uVar8 & 1) == 0) ||
         (uVar8 = (long)unaff_x29 - (long)in_stack_00000008,
         unaff_x29 < in_stack_00000008 || uVar8 == 0)) goto LAB_033a7340;
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar7 = *unaff_x28;
      lVar6 = *(long *)(lVar7 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01dde7f8();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01dde7f8();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar6 = *(long *)(lVar7 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01dde7f8();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01dde7f8();
      }
      if ((long)uVar8 < 0) {
        uVar8 = uVar8 + 1;
      }
      iVar5 = **(int **)(lVar6 + 0xb8);
      FUN_028513c0(&stack0x00000028,unaff_w20,*(undefined8 *)StringLiteral_8438);
      unaff_w19 = -iVar5 & (uint)(uVar8 >> 1);
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar7 = *unaff_x28;
    lVar6 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar6 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8();
    }
    uVar4 = in_stack_00000030;
    uVar3 = in_stack_00000028;
    lVar9 = *(long *)StringLiteral_8440;
    lVar7 = *(long *)(lVar9 + 0x38);
    puVar10 = unaff_x29 + -(long)**(int **)(lVar6 + 0xb8);
    uVar1 = *(undefined8 *)puVar10;
    uVar2 = *(undefined8 *)(puVar10 + 4);
    if (lVar7 == 0) {
      FUN_01dde854(lVar9);
      lVar7 = *(long *)(lVar9 + 0x38);
    }
    lVar6 = *(long *)(lVar7 + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    auVar11 = FUN_02191188(uVar3,uVar4,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 8));
    lVar7 = *(long *)StringLiteral_8439;
    lVar6 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar6 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8();
    }
    in_stack_00000018 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
    in_stack_00000010 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
    uVar8 = FUN_028549c8(&stack0x00000010,auVar11._0_8_,auVar11._8_8_,
                         *(undefined8 *)StringLiteral_8437);
    if ((uVar8 & 1) == 0) {
      iVar5 = FUN_033baaac(auVar11._0_8_,auVar11._8_8_,0);
      uVar8 = (long)puVar10 - (long)in_stack_00000008;
      if ((long)uVar8 < 0) {
        uVar8 = uVar8 + 1;
      }
      uVar8 = (ulong)(uint)(iVar5 + (int)(uVar8 >> 1));
LAB_033a7398:
      if (*(long *)(in_stack_00000000 + 0x28) == in_stack_00000038) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar8);
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar7 = *unaff_x28;
    lVar6 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    param_1 = *(long *)(lVar7 + 0x20);
    in_w8 = *(byte *)(param_1 + 0x135);
  } while( true );
LAB_033a72fc:
  uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
  if ((long)uVar8 < 0) {
    uVar8 = uVar8 + 1;
  }
  uVar8 = uVar8 >> 1;
  goto LAB_033a7398;
}


