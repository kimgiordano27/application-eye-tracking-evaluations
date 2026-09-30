/*
FUNCTION_NAME: OVRPlugin$$GetNodeAngularVelocity
ENTRY_POINT: 01f7b9c4
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


void OVRPlugin__GetNodeAngularVelocity(void)

{
  ushort *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ushort *puVar12;
  long lVar13;
  uint unaff_w20;
  uint unaff_w21;
  long lVar14;
  ushort *unaff_x23;
  long *unaff_x27;
  long *unaff_x28;
  ushort *puVar15;
  undefined1 auVar16 [16];
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  
  uVar9 = FUN_01ef817c();
  uVar11 = (ulong)unaff_w21;
  if ((uVar9 & 1) != 0) {
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar13 = *unaff_x28;
    lVar10 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0122e748();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0122e748();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar10 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0122e748();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0122e748();
    }
    uVar11 = (ulong)unaff_w21;
    if (**(int **)(lVar10 + 0xb8) * 2 <= (int)unaff_w21) {
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar13 = *unaff_x28;
      lVar10 = *(long *)(lVar13 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar10 = *(long *)(lVar13 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      lVar14 = *unaff_x28;
      lVar13 = *(long *)(lVar14 + 0x20);
      iVar8 = **(int **)(lVar10 + 0xb8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_0122e748(lVar13);
      }
      lVar10 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar10 = *(long *)(lVar14 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      uVar11 = (ulong)(**(int **)(lVar10 + 0xb8) - 1U & iVar8 - ((uint)unaff_x23 >> 1 & 7));
    }
  }
  puVar7 = PTR_DAT_027c10e8;
  puVar1 = unaff_x23 + (int)unaff_w21;
  puVar15 = unaff_x23;
  while( true ) {
    while (iVar8 = (int)uVar11, puVar12 = puVar15, 3 < iVar8) {
      if (((uint)*puVar15 == (unaff_w20 & 0xffff)) ||
         (puVar12 = puVar15 + 1, (uint)*puVar12 == (unaff_w20 & 0xffff))) goto LAB_01f7beb8;
      if ((uint)puVar15[2] == (unaff_w20 & 0xffff)) goto LAB_01f7beb4;
      if ((uint)puVar15[3] == (unaff_w20 & 0xffff)) goto LAB_01f7beb0;
      puVar15 = puVar15 + 4;
      uVar11 = (ulong)(iVar8 - 4);
    }
    if (0 < iVar8) {
      iVar8 = iVar8 + 1;
      do {
        if ((uint)*puVar12 == (unaff_w20 & 0xffff)) goto LAB_01f7beb8;
        iVar8 = iVar8 + -1;
        puVar15 = puVar12 + 1;
        puVar12 = puVar15;
      } while (1 < iVar8);
    }
    uVar11 = FUN_01ef817c(0);
    if (((uVar11 & 1) == 0) ||
       (uVar11 = (long)puVar1 - (long)puVar15, puVar1 < puVar15 || uVar11 == 0)) break;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar13 = *unaff_x28;
    lVar10 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0122e748();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0122e748();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar10 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0122e748();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0122e748();
    }
    if ((long)uVar11 < 0) {
      uVar11 = uVar11 + 1;
    }
    iVar8 = **(int **)(lVar10 + 0xb8);
    FUN_01d1f8e8(&stack0x00000038,unaff_w20,*(undefined8 *)PTR_DAT_027c10f0);
    uVar5 = in_stack_00000038;
    uVar6 = in_stack_00000040;
    for (uVar2 = -iVar8 & (uint)(uVar11 >> 1); in_stack_00000038 = uVar5, in_stack_00000040 = uVar6,
        0 < (int)uVar2; uVar2 = uVar2 - **(int **)(lVar10 + 0xb8)) {
      uVar3 = *(undefined8 *)puVar15;
      uVar4 = *(undefined8 *)(puVar15 + 4);
      lVar13 = *(long *)PTR_DAT_027c1100;
      lVar10 = *(long *)(lVar13 + 0x38);
      if (lVar10 == 0) {
        FUN_0122e7a4(lVar13);
        lVar10 = *(long *)(lVar13 + 0x38);
      }
      lVar10 = *(long *)(lVar10 + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      auVar16 = FUN_014803a8(uVar5,uVar6,uVar3,uVar4,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 8));
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar13 = *(long *)PTR_DAT_027c10f8;
      lVar10 = *(long *)(lVar13 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar10 = *(long *)(lVar13 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      in_stack_00000028 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10);
      in_stack_00000020 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
      uVar11 = FUN_01d22ef0(&stack0x00000020,auVar16._0_8_,auVar16._8_8_,*(undefined8 *)puVar7);
      if ((uVar11 & 1) == 0) {
        iVar8 = FUN_01f91828(auVar16._0_8_,auVar16._8_8_,0);
        uVar11 = (long)puVar15 - (long)unaff_x23;
        if ((long)uVar11 < 0) {
          uVar11 = uVar11 + 1;
        }
        uVar11 = (ulong)(uint)(iVar8 + (int)(uVar11 >> 1));
        goto LAB_01f7becc;
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar13 = *unaff_x28;
      lVar10 = *(long *)(lVar13 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar10 = *(long *)(lVar13 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      lVar14 = *unaff_x28;
      lVar13 = *(long *)(lVar14 + 0x20);
      iVar8 = **(int **)(lVar10 + 0xb8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_0122e748(lVar13);
      }
      lVar10 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar10 = *(long *)(lVar14 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      puVar15 = puVar15 + iVar8;
      uVar5 = in_stack_00000038;
      uVar6 = in_stack_00000040;
    }
    uVar11 = (long)puVar1 - (long)puVar15;
    if (puVar1 < puVar15 || uVar11 == 0) break;
    if ((long)uVar11 < 0) {
      uVar11 = uVar11 + 1;
    }
    uVar11 = uVar11 >> 1;
  }
  uVar11 = 0xffffffff;
LAB_01f7becc:
  if (*(long *)(in_stack_00000018 + 0x28) == in_stack_00000048) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
LAB_01f7beb0:
  puVar12 = puVar15 + 2;
LAB_01f7beb4:
  puVar12 = puVar12 + 1;
LAB_01f7beb8:
  uVar11 = (long)puVar12 - (long)unaff_x23;
  if ((long)uVar11 < 0) {
    uVar11 = uVar11 + 1;
  }
  uVar11 = uVar11 >> 1;
  goto LAB_01f7becc;
}


