/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$IsSpecified
ENTRY_POINT: 05615dfc
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__IsSpecified(long param_1)

{
  ushort *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ushort *puVar14;
  long unaff_x19;
  long lVar15;
  uint unaff_w20;
  uint unaff_w21;
  long lVar16;
  ushort *unaff_x23;
  ushort *puVar17;
  undefined1 auVar18 [16];
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  
  FUN_02f07e70(*(undefined8 *)(param_1 + 0x338));
  *(undefined1 *)(unaff_x19 + 0xd47) = 1;
  puVar8 = PTR_DAT_06d52318;
  puVar7 = PTR_DAT_06d52308;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  uVar11 = FUN_05543fc8(0);
  uVar13 = (ulong)unaff_w21;
  if ((uVar11 & 1) != 0) {
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar15 = *(long *)puVar7;
    lVar12 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02eea768();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02eea768();
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar12 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02eea768();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02eea768();
    }
    uVar13 = (ulong)unaff_w21;
    if (**(int **)(lVar12 + 0xb8) * 2 <= (int)unaff_w21) {
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar15 = *(long *)puVar7;
      lVar12 = *(long *)(lVar15 + 0x20);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02eea768();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02eea768();
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar12 = *(long *)(lVar15 + 0x20);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02eea768();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02eea768();
      }
      lVar16 = *(long *)puVar7;
      lVar15 = *(long *)(lVar16 + 0x20);
      iVar10 = **(int **)(lVar12 + 0xb8);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_02eea768(lVar15);
      }
      lVar12 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02eea768();
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar12 = *(long *)(lVar16 + 0x20);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02eea768();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02eea768();
      }
      uVar13 = (ulong)(**(int **)(lVar12 + 0xb8) - 1U & iVar10 - ((uint)unaff_x23 >> 1 & 7));
    }
  }
  puVar9 = PTR_DAT_06d52320;
  puVar1 = unaff_x23 + (int)unaff_w21;
  puVar17 = unaff_x23;
  while( true ) {
    while (iVar10 = (int)uVar13, puVar14 = puVar17, 3 < iVar10) {
      if (((uint)*puVar17 == (unaff_w20 & 0xffff)) ||
         (puVar14 = puVar17 + 1, (uint)*puVar14 == (unaff_w20 & 0xffff))) goto LAB_0561631c;
      if ((uint)puVar17[2] == (unaff_w20 & 0xffff)) goto LAB_05616318;
      if ((uint)puVar17[3] == (unaff_w20 & 0xffff)) goto LAB_05616314;
      puVar17 = puVar17 + 4;
      uVar13 = (ulong)(iVar10 - 4);
    }
    if (0 < iVar10) {
      iVar10 = iVar10 + 1;
      do {
        if ((uint)*puVar14 == (unaff_w20 & 0xffff)) goto LAB_0561631c;
        iVar10 = iVar10 + -1;
        puVar17 = puVar14 + 1;
        puVar14 = puVar17;
      } while (1 < iVar10);
    }
    uVar13 = FUN_05543fc8(0);
    if (((uVar13 & 1) == 0) ||
       (uVar13 = (long)puVar1 - (long)puVar17, puVar1 < puVar17 || uVar13 == 0)) break;
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar15 = *(long *)puVar7;
    lVar12 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02eea768();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02eea768();
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar12 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02eea768();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02eea768();
    }
    if ((long)uVar13 < 0) {
      uVar13 = uVar13 + 1;
    }
    iVar10 = **(int **)(lVar12 + 0xb8);
    FUN_049206c8(&stack0x00000038,unaff_w20,*(undefined8 *)PTR_DAT_06d52328);
    uVar5 = in_stack_00000038;
    uVar6 = in_stack_00000040;
    for (uVar2 = -iVar10 & (uint)(uVar13 >> 1); in_stack_00000038 = uVar5, in_stack_00000040 = uVar6
        , 0 < (int)uVar2; uVar2 = uVar2 - **(int **)(lVar12 + 0xb8)) {
      uVar3 = *(undefined8 *)puVar17;
      uVar4 = *(undefined8 *)(puVar17 + 4);
      lVar15 = *(long *)PTR_DAT_06d52338;
      lVar12 = *(long *)(lVar15 + 0x38);
      if (lVar12 == 0) {
        FUN_02eea7c4(lVar15);
        lVar12 = *(long *)(lVar15 + 0x38);
      }
      lVar12 = *(long *)(lVar12 + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02eea768();
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      auVar18 = FUN_03bd458c(uVar5,uVar6,uVar3,uVar4,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 8));
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar15 = *(long *)PTR_DAT_06d52330;
      lVar12 = *(long *)(lVar15 + 0x20);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02eea768();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02eea768();
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar12 = *(long *)(lVar15 + 0x20);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02eea768();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02eea768();
      }
      in_stack_00000028 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10);
      in_stack_00000020 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8);
      uVar13 = FUN_04923cd0(&stack0x00000020,auVar18._0_8_,auVar18._8_8_,*(undefined8 *)puVar9);
      if ((uVar13 & 1) == 0) {
        iVar10 = FUN_056283b8(auVar18._0_8_,auVar18._8_8_,0);
        uVar13 = (long)puVar17 - (long)unaff_x23;
        if ((long)uVar13 < 0) {
          uVar13 = uVar13 + 1;
        }
        uVar13 = (ulong)(uint)(iVar10 + (int)(uVar13 >> 1));
        goto LAB_05616330;
      }
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar15 = *(long *)puVar7;
      lVar12 = *(long *)(lVar15 + 0x20);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02eea768();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02eea768();
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar12 = *(long *)(lVar15 + 0x20);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02eea768();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02eea768();
      }
      lVar16 = *(long *)puVar7;
      lVar15 = *(long *)(lVar16 + 0x20);
      iVar10 = **(int **)(lVar12 + 0xb8);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_02eea768(lVar15);
      }
      lVar12 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02eea768();
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar12 = *(long *)(lVar16 + 0x20);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02eea768();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02eea768();
      }
      puVar17 = puVar17 + iVar10;
      uVar5 = in_stack_00000038;
      uVar6 = in_stack_00000040;
    }
    uVar13 = (long)puVar1 - (long)puVar17;
    if (puVar1 < puVar17 || uVar13 == 0) break;
    if ((long)uVar13 < 0) {
      uVar13 = uVar13 + 1;
    }
    uVar13 = uVar13 >> 1;
  }
  uVar13 = 0xffffffff;
LAB_05616330:
  if (*(long *)(in_stack_00000018 + 0x28) == in_stack_00000048) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar13);
LAB_05616314:
  puVar14 = puVar17 + 2;
LAB_05616318:
  puVar14 = puVar14 + 1;
LAB_0561631c:
  uVar13 = (long)puVar14 - (long)unaff_x23;
  if ((long)uVar13 < 0) {
    uVar13 = uVar13 + 1;
  }
  uVar13 = uVar13 >> 1;
  goto LAB_05616330;
}


