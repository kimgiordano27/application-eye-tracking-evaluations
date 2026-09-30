/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteStartArray
ENTRY_POINT: 0561636c
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteStartArray
               (ushort *param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ushort *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ushort *puVar15;
  undefined1 auVar16 [16];
  long lStack0000000000000000;
  ushort *puStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long lStack0000000000000038;
  
  lStack0000000000000000 = tpidr_el0;
  lStack0000000000000038 = *(long *)(lStack0000000000000000 + 0x28);
  uVar13 = param_3 & 0xffffffff;
  puStack0000000000000008 = param_1;
  if ((bRam00000000071c2d48 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d52320);
    FUN_02f07e70(PTR_DAT_06d52328);
    FUN_02f07e70(PTR_DAT_06d52308);
    FUN_02f07e70(PTR_DAT_06d52330);
    FUN_02f07e70(PTR_DAT_06d52318);
    FUN_02f07e70(PTR_DAT_06d52338);
    bRam00000000071c2d48 = 1;
  }
  puVar5 = PTR_DAT_06d52318;
  puVar4 = PTR_DAT_06d52308;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  puVar15 = puStack0000000000000008 + (int)param_3;
  uVar9 = FUN_05543fc8(0);
  if ((uVar9 & 1) != 0) {
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar12 = *(long *)puVar4;
    lVar10 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02eea768();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02eea768();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar10 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02eea768();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02eea768();
    }
    if (**(int **)(lVar10 + 0xb8) * 2 <= (int)param_3) {
      uVar13 = (ulong)((uint)puVar15 >> 1 & 7);
    }
  }
LAB_056164a4:
  while (iVar8 = (int)uVar13, 3 < iVar8) {
    puVar11 = puVar15 + -4;
    if ((uint)puVar15[-1] == (param_2 & 0xffff)) {
      uVar13 = (long)puVar11 - (long)puStack0000000000000008;
      if ((long)uVar13 < 0) {
        uVar13 = uVar13 + 1;
      }
      uVar13 = (ulong)((int)(uVar13 >> 1) + 3);
      goto LAB_056168d4;
    }
    if ((uint)puVar15[-2] == (param_2 & 0xffff)) {
      uVar13 = (long)puVar11 - (long)puStack0000000000000008;
      if ((long)uVar13 < 0) {
        uVar13 = uVar13 + 1;
      }
      uVar13 = (ulong)((int)(uVar13 >> 1) + 2);
      goto LAB_056168d4;
    }
    if ((uint)puVar15[-3] == (param_2 & 0xffff)) {
      uVar13 = (long)puVar11 - (long)puStack0000000000000008;
      if ((long)uVar13 < 0) {
        uVar13 = uVar13 + 1;
      }
      uVar13 = (ulong)((int)(uVar13 >> 1) + 1);
      goto LAB_056168d4;
    }
    uVar13 = (ulong)(iVar8 - 4);
    puVar15 = puVar11;
    if ((uint)*puVar11 == (param_2 & 0xffff)) {
LAB_05616838:
      uVar13 = (long)puVar11 - (long)puStack0000000000000008;
      if ((long)uVar13 < 0) {
        uVar13 = uVar13 + 1;
      }
      uVar13 = uVar13 >> 1;
LAB_056168d4:
      if (*(long *)(lStack0000000000000000 + 0x28) == lStack0000000000000038) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar13);
    }
  }
  iVar8 = iVar8 + 1;
  puVar11 = puVar15;
  while (iVar8 = iVar8 + -1, 0 < iVar8) {
    puVar11 = puVar11 + -1;
    if ((uint)*puVar11 == (param_2 & 0xffff)) goto LAB_05616838;
  }
  uVar13 = FUN_05543fc8(0);
  if (((uVar13 & 1) != 0) &&
     (uVar13 = (long)puVar11 - (long)puStack0000000000000008,
     puStack0000000000000008 <= puVar11 && uVar13 != 0)) {
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar12 = *(long *)puVar4;
    lVar10 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02eea768();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02eea768();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar10 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02eea768();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02eea768();
    }
    if ((long)uVar13 < 0) {
      uVar13 = uVar13 + 1;
    }
    iVar8 = **(int **)(lVar10 + 0xb8);
    FUN_049206c8(&stack0x00000028,param_2,*(undefined8 *)PTR_DAT_06d52328);
    puVar15 = puVar11;
    for (uVar1 = -iVar8 & (uint)(uVar13 >> 1); 0 < (int)uVar1;
        uVar1 = uVar1 - **(int **)(lVar10 + 0xb8)) {
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar12 = *(long *)puVar4;
      lVar10 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02eea768();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02eea768();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar10 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02eea768();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02eea768();
      }
      uVar7 = in_stack_00000030;
      uVar6 = in_stack_00000028;
      lVar14 = *(long *)PTR_DAT_06d52338;
      lVar12 = *(long *)(lVar14 + 0x38);
      puVar11 = puVar15 + -(long)**(int **)(lVar10 + 0xb8);
      uVar2 = *(undefined8 *)puVar11;
      uVar3 = *(undefined8 *)(puVar11 + 4);
      if (lVar12 == 0) {
        FUN_02eea7c4(lVar14);
        lVar12 = *(long *)(lVar14 + 0x38);
      }
      lVar10 = *(long *)(lVar12 + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02eea768();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      auVar16 = FUN_03bd458c(uVar6,uVar7,uVar2,uVar3,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 8));
      lVar12 = *(long *)PTR_DAT_06d52330;
      lVar10 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02eea768();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02eea768();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar10 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02eea768();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02eea768();
      }
      in_stack_00000018 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10);
      in_stack_00000010 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
      uVar13 = FUN_04923cd0(&stack0x00000010,auVar16._0_8_,auVar16._8_8_,
                            *(undefined8 *)PTR_DAT_06d52320);
      if ((uVar13 & 1) == 0) {
        iVar8 = FUN_05628594(auVar16._0_8_,auVar16._8_8_,0);
        uVar13 = (long)puVar11 - (long)puStack0000000000000008;
        if ((long)uVar13 < 0) {
          uVar13 = uVar13 + 1;
        }
        uVar13 = (ulong)(uint)(iVar8 + (int)(uVar13 >> 1));
        goto LAB_056168d4;
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar12 = *(long *)puVar4;
      lVar10 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02eea768();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02eea768();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar10 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02eea768();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02eea768();
      }
      lVar14 = *(long *)puVar4;
      lVar12 = *(long *)(lVar14 + 0x20);
      iVar8 = **(int **)(lVar10 + 0xb8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02eea768(lVar12);
      }
      lVar10 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02eea768();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar10 = *(long *)(lVar14 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02eea768();
      }
      puVar15 = puVar15 + -(long)iVar8;
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02eea768();
      }
    }
    uVar13 = (long)puVar15 - (long)puStack0000000000000008;
    if (puStack0000000000000008 <= puVar15 && uVar13 != 0) {
      if ((long)uVar13 < 0) {
        uVar13 = uVar13 + 1;
      }
      uVar13 = uVar13 >> 1;
      goto LAB_056164a4;
    }
  }
  uVar13 = 0xffffffff;
  goto LAB_056168d4;
}


