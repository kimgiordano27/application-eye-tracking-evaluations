/*
FUNCTION_NAME: OVRManager$$remove_SpaceQueryResults
ENTRY_POINT: 033a6d7c
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


void OVRManager__remove_SpaceQueryResults(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ushort *puVar8;
  uint unaff_w19;
  uint unaff_w20;
  long lVar9;
  long lVar10;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  ushort *unaff_x29;
  undefined1 auVar11 [16];
  ushort *in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  
  do {
    if ((bool)in_ZR || in_NG != in_OV) {
      do {
        uVar7 = (long)in_stack_00000008 - (long)unaff_x29;
        if (in_stack_00000008 < unaff_x29 || uVar7 == 0) {
LAB_033a6dc8:
          uVar7 = 0xffffffff;
          goto LAB_033a6df4;
        }
        if ((long)uVar7 < 0) {
          uVar7 = uVar7 + 1;
        }
        uVar7 = uVar7 >> 1;
        while (iVar5 = (int)uVar7, puVar8 = unaff_x29, 3 < iVar5) {
          if (((uint)*unaff_x29 == (unaff_w20 & 0xffff)) ||
             (puVar8 = unaff_x29 + 1, (uint)*puVar8 == (unaff_w20 & 0xffff))) goto LAB_033a6de0;
          if ((uint)unaff_x29[2] == (unaff_w20 & 0xffff)) {
LAB_033a6ddc:
            puVar8 = puVar8 + 1;
            goto LAB_033a6de0;
          }
          if ((uint)unaff_x29[3] == (unaff_w20 & 0xffff)) {
            puVar8 = unaff_x29 + 2;
            goto LAB_033a6ddc;
          }
          unaff_x29 = unaff_x29 + 4;
          uVar7 = (ulong)(iVar5 - 4);
        }
        if (0 < iVar5) {
          iVar5 = iVar5 + 1;
          do {
            if ((uint)*puVar8 == (unaff_w20 & 0xffff)) goto LAB_033a6de0;
            iVar5 = iVar5 + -1;
            unaff_x29 = puVar8 + 1;
            puVar8 = unaff_x29;
          } while (1 < iVar5);
        }
        uVar7 = FUN_0331bf08(0);
        if (((uVar7 & 1) == 0) ||
           (uVar7 = (long)in_stack_00000008 - (long)unaff_x29,
           in_stack_00000008 < unaff_x29 || uVar7 == 0)) goto LAB_033a6dc8;
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        lVar9 = *unaff_x28;
        lVar6 = *(long *)(lVar9 + 0x20);
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
        lVar6 = *(long *)(lVar9 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01dde7f8();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01dde7f8();
        }
        if ((long)uVar7 < 0) {
          uVar7 = uVar7 + 1;
        }
        unaff_w19 = -**(int **)(lVar6 + 0xb8) & (uint)(uVar7 >> 1);
        FUN_028513c0(&stack0x00000038,unaff_w20,*(undefined8 *)StringLiteral_8438);
      } while ((int)unaff_w19 < 1);
    }
    uVar4 = in_stack_00000040;
    uVar3 = in_stack_00000038;
    uVar1 = *(undefined8 *)unaff_x29;
    uVar2 = *(undefined8 *)(unaff_x29 + 4);
    lVar9 = *(long *)StringLiteral_8440;
    lVar6 = *(long *)(lVar9 + 0x38);
    if (lVar6 == 0) {
      FUN_01dde854(lVar9);
      lVar6 = *(long *)(lVar9 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    auVar11 = FUN_02191188(uVar3,uVar4,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 8));
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar9 = *(long *)StringLiteral_8439;
    lVar6 = *(long *)(lVar9 + 0x20);
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
    lVar6 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8();
    }
    in_stack_00000028 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
    in_stack_00000020 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
    uVar7 = FUN_028549c8(&stack0x00000020,auVar11._0_8_,auVar11._8_8_,*unaff_x26);
    if ((uVar7 & 1) == 0) {
      iVar5 = FUN_033ba8d0(auVar11._0_8_,auVar11._8_8_,0);
      uVar7 = (long)unaff_x29 - in_stack_00000010;
      if ((long)uVar7 < 0) {
        uVar7 = uVar7 + 1;
      }
      uVar7 = (ulong)(uint)(iVar5 + (int)(uVar7 >> 1));
LAB_033a6df4:
      if (*(long *)(in_stack_00000018 + 0x28) != in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar7);
      }
      return;
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar9 = *unaff_x28;
    lVar6 = *(long *)(lVar9 + 0x20);
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
    lVar6 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8();
    }
    lVar10 = *unaff_x28;
    lVar9 = *(long *)(lVar10 + 0x20);
    iVar5 = **(int **)(lVar6 + 0xb8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01dde7f8(lVar9);
    }
    lVar6 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8();
    }
    unaff_x29 = unaff_x29 + iVar5;
    unaff_w19 = unaff_w19 - **(int **)(lVar6 + 0xb8);
    in_NG = (int)unaff_w19 < 0;
    in_ZR = unaff_w19 == 0;
    in_OV = '\0';
  } while( true );
LAB_033a6de0:
  uVar7 = (long)puVar8 - in_stack_00000010;
  if ((long)uVar7 < 0) {
    uVar7 = uVar7 + 1;
  }
  uVar7 = uVar7 >> 1;
  goto LAB_033a6df4;
}


