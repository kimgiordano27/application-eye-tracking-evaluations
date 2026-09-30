/*
FUNCTION_NAME: OVRPlugin$$GetNodeAcceleration
ENTRY_POINT: 01f7bb14
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


void OVRPlugin__GetNodeAcceleration(long param_1)

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
  ulong uVar10;
  ushort *puVar11;
  int unaff_w19;
  uint unaff_w20;
  int unaff_w21;
  long lVar12;
  int unaff_w22;
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
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0122e748();
  }
  puVar7 = PTR_DAT_027c10e8;
  uVar10 = (ulong)(**(int **)(param_1 + 0xb8) - 1U & unaff_w19 - unaff_w22);
  puVar1 = unaff_x23 + unaff_w21;
  puVar14 = unaff_x23;
  while( true ) {
    while (iVar8 = (int)uVar10, puVar11 = puVar14, 3 < iVar8) {
      if (((uint)*puVar14 == (unaff_w20 & 0xffff)) ||
         (puVar11 = puVar14 + 1, (uint)*puVar11 == (unaff_w20 & 0xffff))) goto LAB_01f7beb8;
      if ((uint)puVar14[2] == (unaff_w20 & 0xffff)) goto LAB_01f7beb4;
      if ((uint)puVar14[3] == (unaff_w20 & 0xffff)) goto LAB_01f7beb0;
      puVar14 = puVar14 + 4;
      uVar10 = (ulong)(iVar8 - 4);
    }
    if (0 < iVar8) {
      iVar8 = iVar8 + 1;
      do {
        if ((uint)*puVar11 == (unaff_w20 & 0xffff)) goto LAB_01f7beb8;
        iVar8 = iVar8 + -1;
        puVar14 = puVar11 + 1;
        puVar11 = puVar14;
      } while (1 < iVar8);
    }
    uVar10 = FUN_01ef817c(0);
    if (((uVar10 & 1) == 0) ||
       (uVar10 = (long)puVar1 - (long)puVar14, puVar1 < puVar14 || uVar10 == 0)) break;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar12 = *unaff_x28;
    lVar9 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar9 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    if ((long)uVar10 < 0) {
      uVar10 = uVar10 + 1;
    }
    iVar8 = **(int **)(lVar9 + 0xb8);
    FUN_01d1f8e8(&stack0x00000038,unaff_w20,*(undefined8 *)PTR_DAT_027c10f0);
    uVar5 = in_stack_00000038;
    uVar6 = in_stack_00000040;
    for (uVar2 = -iVar8 & (uint)(uVar10 >> 1); in_stack_00000038 = uVar5, in_stack_00000040 = uVar6,
        0 < (int)uVar2; uVar2 = uVar2 - **(int **)(lVar9 + 0xb8)) {
      uVar3 = *(undefined8 *)puVar14;
      uVar4 = *(undefined8 *)(puVar14 + 4);
      lVar12 = *(long *)PTR_DAT_027c1100;
      lVar9 = *(long *)(lVar12 + 0x38);
      if (lVar9 == 0) {
        FUN_0122e7a4(lVar12);
        lVar9 = *(long *)(lVar12 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      auVar15 = FUN_014803a8(uVar5,uVar6,uVar3,uVar4,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 8));
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar12 = *(long *)PTR_DAT_027c10f8;
      lVar9 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar9 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      in_stack_00000028 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10);
      in_stack_00000020 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8);
      uVar10 = FUN_01d22ef0(&stack0x00000020,auVar15._0_8_,auVar15._8_8_,*(undefined8 *)puVar7);
      if ((uVar10 & 1) == 0) {
        iVar8 = FUN_01f91828(auVar15._0_8_,auVar15._8_8_,0);
        uVar10 = (long)puVar14 - (long)unaff_x23;
        if ((long)uVar10 < 0) {
          uVar10 = uVar10 + 1;
        }
        uVar10 = (ulong)(uint)(iVar8 + (int)(uVar10 >> 1));
        goto LAB_01f7becc;
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar12 = *unaff_x28;
      lVar9 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar9 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      lVar13 = *unaff_x28;
      lVar12 = *(long *)(lVar13 + 0x20);
      iVar8 = **(int **)(lVar9 + 0xb8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_0122e748(lVar12);
      }
      lVar9 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar9 = *(long *)(lVar13 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      puVar14 = puVar14 + iVar8;
      uVar5 = in_stack_00000038;
      uVar6 = in_stack_00000040;
    }
    uVar10 = (long)puVar1 - (long)puVar14;
    if (puVar1 < puVar14 || uVar10 == 0) break;
    if ((long)uVar10 < 0) {
      uVar10 = uVar10 + 1;
    }
    uVar10 = uVar10 >> 1;
  }
  uVar10 = 0xffffffff;
LAB_01f7becc:
  if (*(long *)(in_stack_00000018 + 0x28) == in_stack_00000048) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
LAB_01f7beb0:
  puVar11 = puVar14 + 2;
LAB_01f7beb4:
  puVar11 = puVar11 + 1;
LAB_01f7beb8:
  uVar10 = (long)puVar11 - (long)unaff_x23;
  if ((long)uVar10 < 0) {
    uVar10 = uVar10 + 1;
  }
  uVar10 = uVar10 >> 1;
  goto LAB_01f7becc;
}


