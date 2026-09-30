/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 05616620
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint unaff_w19;
  uint unaff_w20;
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
  
  while( true ) {
    lVar6 = *(long *)(param_1 + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768();
    }
    uVar4 = in_stack_00000030;
    uVar3 = in_stack_00000028;
    lVar9 = *(long *)PTR_DAT_06d52338;
    lVar8 = *(long *)(lVar9 + 0x38);
    puVar10 = unaff_x29 + -(long)**(int **)(lVar6 + 0xb8);
    uVar1 = *(undefined8 *)puVar10;
    uVar2 = *(undefined8 *)(puVar10 + 4);
    if (lVar8 == 0) {
      FUN_02eea7c4(lVar9);
      lVar8 = *(long *)(lVar9 + 0x38);
    }
    lVar6 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    auVar11 = FUN_03bd458c(uVar3,uVar4,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 8));
    lVar8 = *(long *)PTR_DAT_06d52330;
    lVar6 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar6 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768();
    }
    in_stack_00000018 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
    in_stack_00000010 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
    uVar7 = FUN_04923cd0(&stack0x00000010,auVar11._0_8_,auVar11._8_8_,
                         *(undefined8 *)PTR_DAT_06d52320);
    if ((uVar7 & 1) == 0) break;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar8 = *unaff_x28;
    lVar6 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar6 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768();
    }
    lVar9 = *unaff_x28;
    lVar8 = *(long *)(lVar9 + 0x20);
    iVar5 = **(int **)(lVar6 + 0xb8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02eea768(lVar8);
    }
    lVar6 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar6 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768();
    }
    unaff_x29 = unaff_x29 + -(long)iVar5;
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768();
    }
    unaff_w19 = unaff_w19 - **(int **)(lVar6 + 0xb8);
    while ((int)unaff_w19 < 1) {
      uVar7 = (long)unaff_x29 - (long)in_stack_00000008;
      if (unaff_x29 < in_stack_00000008 || uVar7 == 0) {
LAB_0561687c:
        uVar7 = 0xffffffff;
        goto LAB_056168d4;
      }
      if ((long)uVar7 < 0) {
        uVar7 = uVar7 + 1;
      }
      uVar7 = uVar7 >> 1;
      puVar10 = unaff_x29;
      while (iVar5 = (int)uVar7, 3 < iVar5) {
        unaff_x29 = puVar10 + -4;
        if ((uint)puVar10[-1] == (unaff_w20 & 0xffff)) {
          uVar7 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar7 < 0) {
            uVar7 = uVar7 + 1;
          }
          uVar7 = (ulong)((int)(uVar7 >> 1) + 3);
          goto LAB_056168d4;
        }
        if ((uint)puVar10[-2] == (unaff_w20 & 0xffff)) {
          uVar7 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar7 < 0) {
            uVar7 = uVar7 + 1;
          }
          uVar7 = (ulong)((int)(uVar7 >> 1) + 2);
          goto LAB_056168d4;
        }
        if ((uint)puVar10[-3] == (unaff_w20 & 0xffff)) {
          uVar7 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar7 < 0) {
            uVar7 = uVar7 + 1;
          }
          uVar7 = (ulong)((int)(uVar7 >> 1) + 1);
          goto LAB_056168d4;
        }
        uVar7 = (ulong)(iVar5 - 4);
        puVar10 = unaff_x29;
        if ((uint)*unaff_x29 == (unaff_w20 & 0xffff)) goto LAB_05616838;
      }
      iVar5 = iVar5 + 1;
      unaff_x29 = puVar10;
      while (iVar5 = iVar5 + -1, 0 < iVar5) {
        unaff_x29 = unaff_x29 + -1;
        if ((uint)*unaff_x29 == (unaff_w20 & 0xffff)) goto LAB_05616838;
      }
      uVar7 = FUN_05543fc8(0);
      if (((uVar7 & 1) == 0) ||
         (uVar7 = (long)unaff_x29 - (long)in_stack_00000008,
         unaff_x29 < in_stack_00000008 || uVar7 == 0)) goto LAB_0561687c;
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar8 = *unaff_x28;
      lVar6 = *(long *)(lVar8 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02eea768();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02eea768();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar6 = *(long *)(lVar8 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02eea768();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02eea768();
      }
      if ((long)uVar7 < 0) {
        uVar7 = uVar7 + 1;
      }
      iVar5 = **(int **)(lVar6 + 0xb8);
      FUN_049206c8(&stack0x00000028,unaff_w20,*(undefined8 *)PTR_DAT_06d52328);
      unaff_w19 = -iVar5 & (uint)(uVar7 >> 1);
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar8 = *unaff_x28;
    lVar6 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar6 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768();
    }
    param_1 = *(long *)(lVar6 + 0xc0);
  }
  iVar5 = FUN_05628594(auVar11._0_8_,auVar11._8_8_,0);
  uVar7 = (long)puVar10 - (long)in_stack_00000008;
  if ((long)uVar7 < 0) {
    uVar7 = uVar7 + 1;
  }
  uVar7 = (ulong)(uint)(iVar5 + (int)(uVar7 >> 1));
LAB_056168d4:
  if (*(long *)(in_stack_00000000 + 0x28) == in_stack_00000038) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
LAB_05616838:
  uVar7 = (long)unaff_x29 - (long)in_stack_00000008;
  if ((long)uVar7 < 0) {
    uVar7 = uVar7 + 1;
  }
  uVar7 = uVar7 >> 1;
  goto LAB_056168d4;
}


