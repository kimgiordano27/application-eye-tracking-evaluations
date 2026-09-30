/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasCreatorParameter
ENTRY_POINT: 0561605c
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasCreatorParameter(long param_1)

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
  ulong unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long lVar10;
  long lVar11;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  ushort *unaff_x29;
  undefined1 auVar12 [16];
  ushort *in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  
  while( true ) {
    lVar7 = *(long *)(param_1 + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02eea768();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar7 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02eea768();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02eea768();
    }
    if ((long)unaff_x19 < 0) {
      unaff_x19 = unaff_x19 + 1;
    }
    iVar6 = **(int **)(lVar7 + 0xb8);
    FUN_049206c8(&stack0x00000038,unaff_w20,*(undefined8 *)PTR_DAT_06d52328);
    uVar4 = in_stack_00000038;
    uVar5 = in_stack_00000040;
    for (uVar1 = -iVar6 & (uint)(unaff_x19 >> 1); in_stack_00000038 = uVar4,
        in_stack_00000040 = uVar5, 0 < (int)uVar1; uVar1 = uVar1 - **(int **)(lVar7 + 0xb8)) {
      uVar2 = *(undefined8 *)unaff_x29;
      uVar3 = *(undefined8 *)(unaff_x29 + 4);
      lVar11 = *(long *)PTR_DAT_06d52338;
      lVar7 = *(long *)(lVar11 + 0x38);
      if (lVar7 == 0) {
        FUN_02eea7c4(lVar11);
        lVar7 = *(long *)(lVar11 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02eea768();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      auVar12 = FUN_03bd458c(uVar4,uVar5,uVar2,uVar3,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 8));
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar11 = *(long *)PTR_DAT_06d52330;
      lVar7 = *(long *)(lVar11 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02eea768();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02eea768();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar7 = *(long *)(lVar11 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02eea768();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02eea768();
      }
      in_stack_00000028 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
      in_stack_00000020 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
      uVar8 = FUN_04923cd0(&stack0x00000020,auVar12._0_8_,auVar12._8_8_,*unaff_x26);
      if ((uVar8 & 1) == 0) {
        iVar6 = FUN_056283b8(auVar12._0_8_,auVar12._8_8_,0);
        uVar8 = (long)unaff_x29 - in_stack_00000010;
        if ((long)uVar8 < 0) {
          uVar8 = uVar8 + 1;
        }
        uVar8 = (ulong)(uint)(iVar6 + (int)(uVar8 >> 1));
        goto LAB_05616330;
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar11 = *unaff_x28;
      lVar7 = *(long *)(lVar11 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02eea768();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02eea768();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar7 = *(long *)(lVar11 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02eea768();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02eea768();
      }
      lVar10 = *unaff_x28;
      lVar11 = *(long *)(lVar10 + 0x20);
      iVar6 = **(int **)(lVar7 + 0xb8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02eea768(lVar11);
      }
      lVar7 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02eea768();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02eea768();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02eea768();
      }
      unaff_x29 = unaff_x29 + iVar6;
      uVar4 = in_stack_00000038;
      uVar5 = in_stack_00000040;
    }
    uVar8 = (long)in_stack_00000008 - (long)unaff_x29;
    if (in_stack_00000008 < unaff_x29 || uVar8 == 0) break;
    if ((long)uVar8 < 0) {
      uVar8 = uVar8 + 1;
    }
    uVar8 = uVar8 >> 1;
    while (iVar6 = (int)uVar8, puVar9 = unaff_x29, 3 < iVar6) {
      if (((uint)*unaff_x29 == (unaff_w20 & 0xffff)) ||
         (puVar9 = unaff_x29 + 1, (uint)*puVar9 == (unaff_w20 & 0xffff))) goto LAB_0561631c;
      if ((uint)unaff_x29[2] == (unaff_w20 & 0xffff)) {
LAB_05616318:
        puVar9 = puVar9 + 1;
        goto LAB_0561631c;
      }
      if ((uint)unaff_x29[3] == (unaff_w20 & 0xffff)) {
        puVar9 = unaff_x29 + 2;
        goto LAB_05616318;
      }
      unaff_x29 = unaff_x29 + 4;
      uVar8 = (ulong)(iVar6 - 4);
    }
    if (0 < iVar6) {
      iVar6 = iVar6 + 1;
      do {
        if ((uint)*puVar9 == (unaff_w20 & 0xffff)) goto LAB_0561631c;
        iVar6 = iVar6 + -1;
        unaff_x29 = puVar9 + 1;
        puVar9 = unaff_x29;
      } while (1 < iVar6);
    }
    uVar8 = FUN_05543fc8(0);
    if (((uVar8 & 1) == 0) ||
       (unaff_x19 = (long)in_stack_00000008 - (long)unaff_x29,
       in_stack_00000008 < unaff_x29 || unaff_x19 == 0)) break;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    unaff_x21 = *unaff_x28;
    lVar7 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02eea768();
    }
    param_1 = *(long *)(lVar7 + 0xc0);
  }
  uVar8 = 0xffffffff;
LAB_05616330:
  if (*(long *)(in_stack_00000018 + 0x28) == in_stack_00000048) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
LAB_0561631c:
  uVar8 = (long)puVar9 - in_stack_00000010;
  if ((long)uVar8 < 0) {
    uVar8 = uVar8 + 1;
  }
  uVar8 = uVar8 >> 1;
  goto LAB_05616330;
}


