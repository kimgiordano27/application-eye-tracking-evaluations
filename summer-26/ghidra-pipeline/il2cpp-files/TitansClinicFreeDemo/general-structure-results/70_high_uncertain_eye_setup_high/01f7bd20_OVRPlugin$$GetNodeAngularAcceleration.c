/*
FUNCTION_NAME: OVRPlugin$$GetNodeAngularAcceleration
ENTRY_POINT: 01f7bd20
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodeAngularAcceleration(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int in_w8;
  ushort *puVar8;
  uint unaff_w19;
  uint unaff_w20;
  undefined8 unaff_x21;
  long lVar9;
  undefined8 unaff_x22;
  long lVar10;
  long unaff_x23;
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
  
  auVar11._8_8_ = unaff_x22;
  auVar11._0_8_ = unaff_x21;
  while( true ) {
    if (in_w8 == 0) {
      thunk_FUN_01220628();
    }
    lVar6 = *(long *)(unaff_x23 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    in_stack_00000028 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
    in_stack_00000020 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
    uVar7 = FUN_01d22ef0(&stack0x00000020,auVar11._0_8_,auVar11._8_8_,*unaff_x26);
    if ((uVar7 & 1) == 0) break;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar9 = *unaff_x28;
    lVar6 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar6 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    lVar10 = *unaff_x28;
    lVar9 = *(long *)(lVar10 + 0x20);
    iVar5 = **(int **)(lVar6 + 0xb8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748(lVar9);
    }
    lVar6 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    unaff_x29 = unaff_x29 + iVar5;
    unaff_w19 = unaff_w19 - **(int **)(lVar6 + 0xb8);
    uVar3 = in_stack_00000038;
    uVar4 = in_stack_00000040;
    while (in_stack_00000038 = uVar3, in_stack_00000040 = uVar4, (int)unaff_w19 < 1) {
      uVar7 = (long)in_stack_00000008 - (long)unaff_x29;
      if (in_stack_00000008 < unaff_x29 || uVar7 == 0) {
LAB_01f7bea0:
        uVar7 = 0xffffffff;
        goto LAB_01f7becc;
      }
      if ((long)uVar7 < 0) {
        uVar7 = uVar7 + 1;
      }
      uVar7 = uVar7 >> 1;
      while (iVar5 = (int)uVar7, puVar8 = unaff_x29, 3 < iVar5) {
        if (((uint)*unaff_x29 == (unaff_w20 & 0xffff)) ||
           (puVar8 = unaff_x29 + 1, (uint)*puVar8 == (unaff_w20 & 0xffff))) goto LAB_01f7beb8;
        if ((uint)unaff_x29[2] == (unaff_w20 & 0xffff)) {
LAB_01f7beb4:
          puVar8 = puVar8 + 1;
          goto LAB_01f7beb8;
        }
        if ((uint)unaff_x29[3] == (unaff_w20 & 0xffff)) {
          puVar8 = unaff_x29 + 2;
          goto LAB_01f7beb4;
        }
        unaff_x29 = unaff_x29 + 4;
        uVar7 = (ulong)(iVar5 - 4);
      }
      if (0 < iVar5) {
        iVar5 = iVar5 + 1;
        do {
          if ((uint)*puVar8 == (unaff_w20 & 0xffff)) goto LAB_01f7beb8;
          iVar5 = iVar5 + -1;
          unaff_x29 = puVar8 + 1;
          puVar8 = unaff_x29;
        } while (1 < iVar5);
      }
      uVar7 = FUN_01ef817c(0);
      if (((uVar7 & 1) == 0) ||
         (uVar7 = (long)in_stack_00000008 - (long)unaff_x29,
         in_stack_00000008 < unaff_x29 || uVar7 == 0)) goto LAB_01f7bea0;
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar9 = *unaff_x28;
      lVar6 = *(long *)(lVar9 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0122e748();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0122e748();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar6 = *(long *)(lVar9 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0122e748();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0122e748();
      }
      if ((long)uVar7 < 0) {
        uVar7 = uVar7 + 1;
      }
      iVar5 = **(int **)(lVar6 + 0xb8);
      FUN_01d1f8e8(&stack0x00000038,unaff_w20,*(undefined8 *)PTR_DAT_027c10f0);
      uVar3 = in_stack_00000038;
      uVar4 = in_stack_00000040;
      unaff_w19 = -iVar5 & (uint)(uVar7 >> 1);
    }
    uVar1 = *(undefined8 *)unaff_x29;
    uVar2 = *(undefined8 *)(unaff_x29 + 4);
    lVar9 = *(long *)PTR_DAT_027c1100;
    lVar6 = *(long *)(lVar9 + 0x38);
    if (lVar6 == 0) {
      FUN_0122e7a4(lVar9);
      lVar6 = *(long *)(lVar9 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    auVar11 = FUN_014803a8(uVar3,uVar4,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 8));
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    unaff_x23 = *(long *)PTR_DAT_027c10f8;
    lVar6 = *(long *)(unaff_x23 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    in_w8 = *(int *)(lVar6 + 0xe0);
  }
  iVar5 = FUN_01f91828(auVar11._0_8_,auVar11._8_8_,0);
  uVar7 = (long)unaff_x29 - in_stack_00000010;
  if ((long)uVar7 < 0) {
    uVar7 = uVar7 + 1;
  }
  uVar7 = (ulong)(uint)(iVar5 + (int)(uVar7 >> 1));
LAB_01f7becc:
  if (*(long *)(in_stack_00000018 + 0x28) == in_stack_00000048) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
LAB_01f7beb8:
  uVar7 = (long)puVar8 - in_stack_00000010;
  if ((long)uVar7 < 0) {
    uVar7 = uVar7 + 1;
  }
  uVar7 = uVar7 >> 1;
  goto LAB_01f7becc;
}


