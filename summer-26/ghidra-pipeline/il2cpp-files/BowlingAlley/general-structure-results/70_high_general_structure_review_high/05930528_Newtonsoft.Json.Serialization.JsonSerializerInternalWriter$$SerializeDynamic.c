/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDynamic
ENTRY_POINT: 05930528
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDynamic
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  int iVar2;
  ulong uVar3;
  long unaff_x24;
  undefined8 *unaff_x25;
  long in_stack_00000098;
  
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  uVar3 = *(ulong *)(unaff_x19 + 0x70);
  if (DAT_076d3762 == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_07286280);
    DAT_076d3762 = '\x01';
    if (uVar3 == 0) goto LAB_05930578;
LAB_05930548:
    uVar1 = System_Convert__ToSByte(uVar3,0);
    uVar3 = (ulong)*(uint *)(uVar3 + 0x10);
  }
  else {
    if (uVar3 != 0) goto LAB_05930548;
LAB_05930578:
    uVar1 = 0;
  }
  if (DAT_076d511b == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_07290c20);
    thunk_FUN_032e1da0(PTR_DAT_07290a70);
    DAT_076d511b = '\x01';
  }
  iVar2 = (int)param_2;
  if ((iVar2 == (int)uVar3) &&
     ((iVar2 == 0 ||
      (uVar3 = FUN_057b26b8(param_1,param_2,uVar1,uVar3,*(undefined8 *)PTR_DAT_07290c20),
      (uVar3 & 1) != 0)))) {
    uVar1 = 0x7ff0000000000000;
  }
  else {
    uVar3 = *(ulong *)(unaff_x19 + 0x78);
    if (DAT_076d3762 == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07286280);
      DAT_076d3762 = '\x01';
      if (uVar3 == 0) goto LAB_05930620;
LAB_059305f0:
      uVar1 = System_Convert__ToSByte(uVar3,0);
      uVar3 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      if (uVar3 != 0) goto LAB_059305f0;
LAB_05930620:
      uVar1 = 0;
    }
    if (DAT_076d511b == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07290c20);
      thunk_FUN_032e1da0(PTR_DAT_07290a70);
      DAT_076d511b = '\x01';
    }
    if ((iVar2 == (int)uVar3) &&
       ((iVar2 == 0 ||
        (uVar3 = FUN_057b26b8(param_1,param_2,uVar1,uVar3,*(undefined8 *)PTR_DAT_07290c20),
        (uVar3 & 1) != 0)))) {
      uVar1 = 0xfff0000000000000;
    }
    else {
      uVar3 = *(ulong *)(unaff_x19 + 0x68);
      if (DAT_076d3762 == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_07286280);
        DAT_076d3762 = '\x01';
        if (uVar3 == 0) goto LAB_059306c4;
LAB_05930694:
        uVar1 = System_Convert__ToSByte(uVar3,0);
        uVar3 = (ulong)*(uint *)(uVar3 + 0x10);
      }
      else {
        if (uVar3 != 0) goto LAB_05930694;
LAB_059306c4:
        uVar1 = 0;
      }
      if (DAT_076d511b == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_07290c20);
        thunk_FUN_032e1da0(PTR_DAT_07290a70);
        DAT_076d511b = '\x01';
      }
      if ((iVar2 != (int)uVar3) ||
         ((iVar2 != 0 &&
          (uVar3 = FUN_057b26b8(param_1,param_2,uVar1,uVar3,*(undefined8 *)PTR_DAT_07290c20),
          (uVar3 & 1) == 0)))) {
        FUN_02d9d3e0(*unaff_x25);
        uVar1 = FUN_0592d648(0,0);
        goto LAB_05930788;
      }
      uVar1 = 0x7ff8000000000000;
    }
  }
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
    return;
  }
LAB_05930788:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


