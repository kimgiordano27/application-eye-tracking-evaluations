/*
FUNCTION_NAME: OVRPlugin$$GetNodePresent
ENTRY_POINT: 01f7be70
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodePresent(ulong param_1)

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
  
LAB_01f7bb48:
  while (iVar6 = (int)param_1, puVar9 = unaff_x29, 3 < iVar6) {
    if (((uint)*unaff_x29 == (unaff_w20 & 0xffff)) ||
       (puVar9 = unaff_x29 + 1, (uint)*puVar9 == (unaff_w20 & 0xffff))) goto LAB_01f7beb8;
    if ((uint)unaff_x29[2] == (unaff_w20 & 0xffff)) goto LAB_01f7beb4;
    if ((uint)unaff_x29[3] == (unaff_w20 & 0xffff)) goto LAB_01f7beb0;
    unaff_x29 = unaff_x29 + 4;
    param_1 = (ulong)(iVar6 - 4);
  }
  if (0 < iVar6) {
    iVar6 = iVar6 + 1;
    do {
      if ((uint)*puVar9 == (unaff_w20 & 0xffff)) goto LAB_01f7beb8;
      iVar6 = iVar6 + -1;
      unaff_x29 = puVar9 + 1;
      puVar9 = unaff_x29;
    } while (1 < iVar6);
  }
  uVar8 = FUN_01ef817c(0);
  if (((uVar8 & 1) != 0) &&
     (uVar8 = (long)unaff_x19 - (long)unaff_x29, unaff_x29 <= unaff_x19 && uVar8 != 0)) {
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar10 = *unaff_x28;
    lVar7 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0122e748();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0122e748();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar7 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0122e748();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0122e748();
    }
    if ((long)uVar8 < 0) {
      uVar8 = uVar8 + 1;
    }
    iVar6 = **(int **)(lVar7 + 0xb8);
    FUN_01d1f8e8(&stack0x00000038,unaff_w20,*(undefined8 *)PTR_DAT_027c10f0);
    uVar4 = in_stack_00000038;
    uVar5 = in_stack_00000040;
    for (uVar1 = -iVar6 & (uint)(uVar8 >> 1); in_stack_00000038 = uVar4, in_stack_00000040 = uVar5,
        0 < (int)uVar1; uVar1 = uVar1 - **(int **)(lVar7 + 0xb8)) {
      uVar2 = *(undefined8 *)unaff_x29;
      uVar3 = *(undefined8 *)(unaff_x29 + 4);
      lVar10 = *(long *)PTR_DAT_027c1100;
      lVar7 = *(long *)(lVar10 + 0x38);
      if (lVar7 == 0) {
        FUN_0122e7a4(lVar10);
        lVar7 = *(long *)(lVar10 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      auVar12 = FUN_014803a8(uVar4,uVar5,uVar2,uVar3,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 8));
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar10 = *(long *)PTR_DAT_027c10f8;
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      in_stack_00000028 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
      in_stack_00000020 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
      uVar8 = FUN_01d22ef0(&stack0x00000020,auVar12._0_8_,auVar12._8_8_,*unaff_x26);
      if ((uVar8 & 1) == 0) {
        iVar6 = FUN_01f91828(auVar12._0_8_,auVar12._8_8_,0);
        uVar8 = (long)unaff_x29 - in_stack_00000010;
        if ((long)uVar8 < 0) {
          uVar8 = uVar8 + 1;
        }
        uVar8 = (ulong)(uint)(iVar6 + (int)(uVar8 >> 1));
        goto LAB_01f7becc;
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar10 = *unaff_x28;
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      lVar11 = *unaff_x28;
      lVar10 = *(long *)(lVar11 + 0x20);
      iVar6 = **(int **)(lVar7 + 0xb8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748(lVar10);
      }
      lVar7 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar7 = *(long *)(lVar11 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      unaff_x29 = unaff_x29 + iVar6;
      uVar4 = in_stack_00000038;
      uVar5 = in_stack_00000040;
    }
    param_1 = (long)unaff_x19 - (long)unaff_x29;
    if (unaff_x29 <= unaff_x19 && param_1 != 0) {
      if ((long)param_1 < 0) {
        param_1 = param_1 + 1;
      }
      param_1 = param_1 >> 1;
      goto LAB_01f7bb48;
    }
  }
  uVar8 = 0xffffffff;
  goto LAB_01f7becc;
LAB_01f7beb0:
  puVar9 = unaff_x29 + 2;
LAB_01f7beb4:
  puVar9 = puVar9 + 1;
LAB_01f7beb8:
  uVar8 = (long)puVar9 - in_stack_00000010;
  if ((long)uVar8 < 0) {
    uVar8 = uVar8 + 1;
  }
  uVar8 = uVar8 >> 1;
LAB_01f7becc:
  if (*(long *)(in_stack_00000018 + 0x28) == in_stack_00000048) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


