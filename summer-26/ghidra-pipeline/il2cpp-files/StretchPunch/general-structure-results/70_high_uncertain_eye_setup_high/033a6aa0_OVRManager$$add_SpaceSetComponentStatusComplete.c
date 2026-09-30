/*
FUNCTION_NAME: OVRManager$$add_SpaceSetComponentStatusComplete
ENTRY_POINT: 033a6aa0
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


void OVRManager__add_SpaceSetComponentStatusComplete(ulong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ushort *puVar9;
  ushort *unaff_x19;
  uint unaff_w20;
  long lVar10;
  long lVar11;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  ushort *unaff_x29;
  undefined1 auVar12 [16];
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  
  while ((uint)unaff_x29[3] != (unaff_w20 & 0xffff)) {
    unaff_x29 = unaff_x29 + 4;
    for (param_1 = (ulong)((int)param_1 - 4); iVar6 = (int)param_1, iVar6 < 4;
        param_1 = param_1 >> 1) {
      if (0 < iVar6) {
        iVar6 = iVar6 + 1;
        do {
          puVar9 = unaff_x29;
          if ((uint)*unaff_x29 == (unaff_w20 & 0xffff)) goto LAB_033a6de0;
          iVar6 = iVar6 + -1;
          unaff_x29 = unaff_x29 + 1;
        } while (1 < iVar6);
      }
      uVar8 = FUN_0331bf08(0);
      if (((uVar8 & 1) == 0) ||
         (uVar8 = (long)unaff_x19 - (long)unaff_x29, unaff_x19 < unaff_x29 || uVar8 == 0)) {
LAB_033a6dc8:
        uVar8 = 0xffffffff;
        goto LAB_033a6df4;
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar10 = *unaff_x28;
      lVar7 = *(long *)(lVar10 + 0x20);
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
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      if ((long)uVar8 < 0) {
        uVar8 = uVar8 + 1;
      }
      iVar6 = **(int **)(lVar7 + 0xb8);
      FUN_028513c0(&stack0x00000038,unaff_w20,*(undefined8 *)StringLiteral_8438);
      uVar4 = in_stack_00000038;
      uVar5 = in_stack_00000040;
      for (uVar1 = -iVar6 & (uint)(uVar8 >> 1); in_stack_00000038 = uVar4, in_stack_00000040 = uVar5
          , 0 < (int)uVar1; uVar1 = uVar1 - **(int **)(lVar7 + 0xb8)) {
        uVar2 = *(undefined8 *)unaff_x29;
        uVar3 = *(undefined8 *)(unaff_x29 + 4);
        lVar10 = *(long *)StringLiteral_8440;
        lVar7 = *(long *)(lVar10 + 0x38);
        if (lVar7 == 0) {
          FUN_01dde854(lVar10);
          lVar7 = *(long *)(lVar10 + 0x38);
        }
        lVar7 = *(long *)(lVar7 + 0x10);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01dde7f8();
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        auVar12 = FUN_02191188(uVar4,uVar5,uVar2,uVar3,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 8)
                              );
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        lVar10 = *(long *)StringLiteral_8439;
        lVar7 = *(long *)(lVar10 + 0x20);
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
        lVar7 = *(long *)(lVar10 + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01dde7f8();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01dde7f8();
        }
        in_stack_00000028 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
        in_stack_00000020 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
        uVar8 = FUN_028549c8(&stack0x00000020,auVar12._0_8_,auVar12._8_8_,*unaff_x26);
        if ((uVar8 & 1) == 0) {
          iVar6 = FUN_033ba8d0(auVar12._0_8_,auVar12._8_8_,0);
          uVar8 = (long)unaff_x29 - in_stack_00000010;
          if ((long)uVar8 < 0) {
            uVar8 = uVar8 + 1;
          }
          uVar8 = (ulong)(uint)(iVar6 + (int)(uVar8 >> 1));
          goto LAB_033a6df4;
        }
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        lVar10 = *unaff_x28;
        lVar7 = *(long *)(lVar10 + 0x20);
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
        lVar7 = *(long *)(lVar10 + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01dde7f8();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01dde7f8();
        }
        lVar11 = *unaff_x28;
        lVar10 = *(long *)(lVar11 + 0x20);
        iVar6 = **(int **)(lVar7 + 0xb8);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01dde7f8(lVar10);
        }
        lVar7 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01dde7f8();
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        lVar7 = *(long *)(lVar11 + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01dde7f8();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01dde7f8();
        }
        unaff_x29 = unaff_x29 + iVar6;
        uVar4 = in_stack_00000038;
        uVar5 = in_stack_00000040;
      }
      param_1 = (long)unaff_x19 - (long)unaff_x29;
      if (unaff_x19 < unaff_x29 || param_1 == 0) goto LAB_033a6dc8;
      if ((long)param_1 < 0) {
        param_1 = param_1 + 1;
      }
    }
    puVar9 = unaff_x29;
    if (((uint)*unaff_x29 == (unaff_w20 & 0xffff)) ||
       (puVar9 = unaff_x29 + 1, (uint)*puVar9 == (unaff_w20 & 0xffff))) goto LAB_033a6de0;
    if ((uint)unaff_x29[2] == (unaff_w20 & 0xffff)) goto LAB_033a6ddc;
  }
  puVar9 = unaff_x29 + 2;
LAB_033a6ddc:
  puVar9 = puVar9 + 1;
LAB_033a6de0:
  uVar8 = (long)puVar9 - in_stack_00000010;
  if ((long)uVar8 < 0) {
    uVar8 = uVar8 + 1;
  }
  uVar8 = uVar8 >> 1;
LAB_033a6df4:
  if (*(long *)(in_stack_00000018 + 0x28) == in_stack_00000048) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


