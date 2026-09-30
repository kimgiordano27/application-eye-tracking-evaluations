/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteReferenceIdProperty
ENTRY_POINT: 05616114
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReferenceIdProperty(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int in_w8;
  ushort *puVar4;
  uint unaff_w19;
  uint unaff_w20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar5;
  undefined8 unaff_x23;
  long lVar6;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  ushort *unaff_x29;
  undefined1 auVar7 [16];
  ushort *in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  
  while( true ) {
    if (in_w8 == 0) {
      thunk_FUN_02f12b58();
    }
    auVar7 = FUN_03bd458c(unaff_x24,unaff_x22,unaff_x23,unaff_x21,
                          *(undefined8 *)(*(long *)(unaff_x25 + 0x38) + 8));
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar6 = *(long *)PTR_DAT_06d52330;
    lVar2 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar2 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
    }
    in_stack_00000028 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10);
    in_stack_00000020 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
    uVar3 = FUN_04923cd0(&stack0x00000020,auVar7._0_8_,auVar7._8_8_,*unaff_x26);
    if ((uVar3 & 1) == 0) break;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar6 = *unaff_x28;
    lVar2 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar2 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
    }
    lVar5 = *unaff_x28;
    lVar6 = *(long *)(lVar5 + 0x20);
    iVar1 = **(int **)(lVar2 + 0xb8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768(lVar6);
    }
    lVar2 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar2 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
    }
    unaff_x29 = unaff_x29 + iVar1;
    unaff_w19 = unaff_w19 - **(int **)(lVar2 + 0xb8);
    unaff_x24 = in_stack_00000038;
    unaff_x22 = in_stack_00000040;
    while (in_stack_00000038 = unaff_x24, in_stack_00000040 = unaff_x22, (int)unaff_w19 < 1) {
      uVar3 = (long)in_stack_00000008 - (long)unaff_x29;
      if (in_stack_00000008 < unaff_x29 || uVar3 == 0) {
LAB_05616304:
        uVar3 = 0xffffffff;
        goto LAB_05616330;
      }
      if ((long)uVar3 < 0) {
        uVar3 = uVar3 + 1;
      }
      uVar3 = uVar3 >> 1;
      while (iVar1 = (int)uVar3, puVar4 = unaff_x29, 3 < iVar1) {
        if (((uint)*unaff_x29 == (unaff_w20 & 0xffff)) ||
           (puVar4 = unaff_x29 + 1, (uint)*puVar4 == (unaff_w20 & 0xffff))) goto LAB_0561631c;
        if ((uint)unaff_x29[2] == (unaff_w20 & 0xffff)) {
LAB_05616318:
          puVar4 = puVar4 + 1;
          goto LAB_0561631c;
        }
        if ((uint)unaff_x29[3] == (unaff_w20 & 0xffff)) {
          puVar4 = unaff_x29 + 2;
          goto LAB_05616318;
        }
        unaff_x29 = unaff_x29 + 4;
        uVar3 = (ulong)(iVar1 - 4);
      }
      if (0 < iVar1) {
        iVar1 = iVar1 + 1;
        do {
          if ((uint)*puVar4 == (unaff_w20 & 0xffff)) goto LAB_0561631c;
          iVar1 = iVar1 + -1;
          unaff_x29 = puVar4 + 1;
          puVar4 = unaff_x29;
        } while (1 < iVar1);
      }
      uVar3 = FUN_05543fc8(0);
      if (((uVar3 & 1) == 0) ||
         (uVar3 = (long)in_stack_00000008 - (long)unaff_x29,
         in_stack_00000008 < unaff_x29 || uVar3 == 0)) goto LAB_05616304;
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar6 = *unaff_x28;
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02eea768();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02eea768();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02eea768();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02eea768();
      }
      if ((long)uVar3 < 0) {
        uVar3 = uVar3 + 1;
      }
      iVar1 = **(int **)(lVar2 + 0xb8);
      FUN_049206c8(&stack0x00000038,unaff_w20,*(undefined8 *)PTR_DAT_06d52328);
      unaff_x24 = in_stack_00000038;
      unaff_x22 = in_stack_00000040;
      unaff_w19 = -iVar1 & (uint)(uVar3 >> 1);
    }
    unaff_x23 = *(undefined8 *)unaff_x29;
    unaff_x21 = *(undefined8 *)(unaff_x29 + 4);
    unaff_x25 = *(long *)PTR_DAT_06d52338;
    lVar2 = *(long *)(unaff_x25 + 0x38);
    if (lVar2 == 0) {
      FUN_02eea7c4(unaff_x25);
      lVar2 = *(long *)(unaff_x25 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
    }
    in_w8 = *(int *)(lVar2 + 0xe0);
  }
  iVar1 = FUN_056283b8(auVar7._0_8_,auVar7._8_8_,0);
  uVar3 = (long)unaff_x29 - in_stack_00000010;
  if ((long)uVar3 < 0) {
    uVar3 = uVar3 + 1;
  }
  uVar3 = (ulong)(uint)(iVar1 + (int)(uVar3 >> 1));
LAB_05616330:
  if (*(long *)(in_stack_00000018 + 0x28) == in_stack_00000048) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
LAB_0561631c:
  uVar3 = (long)puVar4 - in_stack_00000010;
  if ((long)uVar3 < 0) {
    uVar3 = uVar3 + 1;
  }
  uVar3 = uVar3 >> 1;
  goto LAB_05616330;
}


