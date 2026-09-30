/*
FUNCTION_NAME: OVRManager$$remove_SpaceSaveComplete
ENTRY_POINT: 033a714c
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


void OVRManager__remove_SpaceSaveComplete(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint unaff_w19;
  uint unaff_w20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar4;
  long lVar5;
  undefined8 unaff_x24;
  ushort *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  ushort *puVar6;
  ushort *unaff_x29;
  undefined1 auVar7 [16];
  long in_stack_00000000;
  ushort *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  while( true ) {
    auVar7 = FUN_02191188(param_2,unaff_x21,unaff_x24,unaff_x22,*(undefined8 *)(param_1 + 8));
    lVar5 = *(long *)StringLiteral_8439;
    lVar2 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar2 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    in_stack_00000018 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10);
    in_stack_00000010 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
    uVar3 = FUN_028549c8(&stack0x00000010,auVar7._0_8_,auVar7._8_8_,
                         *(undefined8 *)StringLiteral_8437);
    if ((uVar3 & 1) == 0) break;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar5 = *unaff_x28;
    lVar2 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar2 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    lVar4 = *unaff_x28;
    lVar5 = *(long *)(lVar4 + 0x20);
    iVar1 = **(int **)(lVar2 + 0xb8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01dde7f8(lVar5);
    }
    lVar2 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar2 = *(long *)(lVar4 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    unaff_x29 = unaff_x29 + -(long)iVar1;
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    unaff_w19 = unaff_w19 - **(int **)(lVar2 + 0xb8);
    while ((int)unaff_w19 < 1) {
      uVar3 = (long)unaff_x29 - (long)in_stack_00000008;
      if (unaff_x29 < in_stack_00000008 || uVar3 == 0) {
LAB_033a7340:
        uVar3 = 0xffffffff;
        goto LAB_033a7398;
      }
      if ((long)uVar3 < 0) {
        uVar3 = uVar3 + 1;
      }
      uVar3 = uVar3 >> 1;
      puVar6 = unaff_x29;
      while (iVar1 = (int)uVar3, 3 < iVar1) {
        unaff_x29 = puVar6 + -4;
        if ((uint)puVar6[-1] == (unaff_w20 & 0xffff)) {
          uVar3 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar3 < 0) {
            uVar3 = uVar3 + 1;
          }
          uVar3 = (ulong)((int)(uVar3 >> 1) + 3);
          goto LAB_033a7398;
        }
        if ((uint)puVar6[-2] == (unaff_w20 & 0xffff)) {
          uVar3 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar3 < 0) {
            uVar3 = uVar3 + 1;
          }
          uVar3 = (ulong)((int)(uVar3 >> 1) + 2);
          goto LAB_033a7398;
        }
        if ((uint)puVar6[-3] == (unaff_w20 & 0xffff)) {
          uVar3 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar3 < 0) {
            uVar3 = uVar3 + 1;
          }
          uVar3 = (ulong)((int)(uVar3 >> 1) + 1);
          goto LAB_033a7398;
        }
        uVar3 = (ulong)(iVar1 - 4);
        puVar6 = unaff_x29;
        if ((uint)*unaff_x29 == (unaff_w20 & 0xffff)) goto LAB_033a72fc;
      }
      iVar1 = iVar1 + 1;
      unaff_x29 = puVar6;
      while (iVar1 = iVar1 + -1, 0 < iVar1) {
        unaff_x29 = unaff_x29 + -1;
        if ((uint)*unaff_x29 == (unaff_w20 & 0xffff)) goto LAB_033a72fc;
      }
      uVar3 = FUN_0331bf08(0);
      if (((uVar3 & 1) == 0) ||
         (uVar3 = (long)unaff_x29 - (long)in_stack_00000008,
         unaff_x29 < in_stack_00000008 || uVar3 == 0)) goto LAB_033a7340;
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar5 = *unaff_x28;
      lVar2 = *(long *)(lVar5 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01dde7f8();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01dde7f8();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar2 = *(long *)(lVar5 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01dde7f8();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01dde7f8();
      }
      if ((long)uVar3 < 0) {
        uVar3 = uVar3 + 1;
      }
      iVar1 = **(int **)(lVar2 + 0xb8);
      FUN_028513c0(&stack0x00000028,unaff_w20,*(undefined8 *)StringLiteral_8438);
      unaff_w19 = -iVar1 & (uint)(uVar3 >> 1);
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar5 = *unaff_x28;
    lVar2 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar2 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    unaff_x21 = in_stack_00000030;
    param_2 = in_stack_00000028;
    lVar4 = *(long *)StringLiteral_8440;
    lVar5 = *(long *)(lVar4 + 0x38);
    unaff_x26 = unaff_x29 + -(long)**(int **)(lVar2 + 0xb8);
    unaff_x24 = *(undefined8 *)unaff_x26;
    unaff_x22 = *(undefined8 *)(unaff_x26 + 4);
    if (lVar5 == 0) {
      FUN_01dde854(lVar4);
      lVar5 = *(long *)(lVar4 + 0x38);
    }
    lVar2 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    param_1 = *(long *)(lVar4 + 0x38);
  }
  iVar1 = FUN_033baaac(auVar7._0_8_,auVar7._8_8_,0);
  uVar3 = (long)unaff_x26 - (long)in_stack_00000008;
  if ((long)uVar3 < 0) {
    uVar3 = uVar3 + 1;
  }
  uVar3 = (ulong)(uint)(iVar1 + (int)(uVar3 >> 1));
LAB_033a7398:
  if (*(long *)(in_stack_00000000 + 0x28) == in_stack_00000038) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
LAB_033a72fc:
  uVar3 = (long)unaff_x29 - (long)in_stack_00000008;
  if ((long)uVar3 < 0) {
    uVar3 = uVar3 + 1;
  }
  uVar3 = uVar3 >> 1;
  goto LAB_033a7398;
}


