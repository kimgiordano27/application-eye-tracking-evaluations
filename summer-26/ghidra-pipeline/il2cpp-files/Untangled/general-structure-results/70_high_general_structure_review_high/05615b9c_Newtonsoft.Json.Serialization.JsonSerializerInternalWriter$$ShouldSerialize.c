/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldSerialize
ENTRY_POINT: 05615b9c
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldSerialize(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x23;
  long *unaff_x26;
  long lVar13;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  while( true ) {
    uVar10 = FUN_0564ec5c();
    uVar11 = FUN_0564ec5c(unaff_x23,0);
    if (uVar10 < uVar11) break;
    puVar1 = (undefined8 *)(unaff_x20 + unaff_x23 * 2);
    puVar2 = (undefined8 *)(unaff_x19 + unaff_x23 * 2);
    uVar12 = *puVar1;
    uVar4 = puVar1[1];
    uVar3 = *puVar2;
    uVar5 = puVar2[1];
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar13 = *(long *)PTR_DAT_06d52310;
    lVar9 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02eea768();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02eea768();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar9 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02eea768();
    }
    lVar13 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x58);
    lVar9 = *(long *)(lVar13 + 0x20);
    in_stack_00000018 = uVar12;
    in_stack_00000020 = uVar4;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02eea768();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02eea768();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar9 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02eea768();
    }
    uVar10 = FUN_04923cd0(&stack0x00000018,uVar3,uVar5,
                          *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x38));
    if ((uVar10 & 1) == 0) break;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar13 = *(long *)PTR_DAT_06d52308;
    lVar9 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02eea768();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02eea768();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar9 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02eea768();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02eea768();
    }
    unaff_x23 = FUN_0564ec68(unaff_x23,**(undefined4 **)(lVar9 + 0xb8),0);
  }
  uVar10 = FUN_0564ec5c();
  uVar12 = FUN_0564ec68(unaff_x23,4,0);
  uVar11 = FUN_0564ec5c(uVar12,0);
  if (uVar11 <= uVar10) {
    do {
      uVar10 = FUN_0565dbe4(*(undefined8 *)(unaff_x20 + unaff_x23 * 2),
                            *(undefined8 *)(unaff_x19 + unaff_x23 * 2),0);
      if ((uVar10 & 1) != 0) break;
      unaff_x23 = FUN_0564ec68(unaff_x23,4,0);
      uVar10 = FUN_0564ec5c();
      uVar12 = FUN_0564ec68(unaff_x23,4,0);
      uVar11 = FUN_0564ec5c(uVar12,0);
    } while (uVar11 <= uVar10);
  }
  uVar10 = FUN_0564ec5c();
  uVar12 = FUN_0564ec68(unaff_x23,2,0);
  uVar11 = FUN_0564ec5c(uVar12,0);
  if ((uVar11 <= uVar10) &&
     (*(int *)(unaff_x20 + unaff_x23 * 2) == *(int *)(unaff_x19 + unaff_x23 * 2))) {
    unaff_x23 = FUN_0564ec68(unaff_x23,2,0);
  }
  uVar10 = FUN_0564ec5c(unaff_x23,0);
  uVar11 = FUN_0564ec5c();
  puVar7 = PTR_DAT_06d02598;
  iVar8 = in_stack_00000010._4_4_;
  if (uVar10 < uVar11) {
    do {
      uVar6 = *(undefined2 *)(unaff_x19 + unaff_x23 * 2);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      iVar8 = FUN_0556484c(unaff_x20 + unaff_x23 * 2,uVar6,0);
      if (iVar8 != 0) break;
      unaff_x23 = FUN_0564ec68(unaff_x23,1,0);
      uVar10 = FUN_0564ec5c(unaff_x23,0);
      uVar11 = FUN_0564ec5c();
      iVar8 = in_stack_00000010._4_4_;
    } while (uVar10 < uVar11);
  }
  if (*(long *)(in_stack_00000008 + 0x28) != in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar8;
}


