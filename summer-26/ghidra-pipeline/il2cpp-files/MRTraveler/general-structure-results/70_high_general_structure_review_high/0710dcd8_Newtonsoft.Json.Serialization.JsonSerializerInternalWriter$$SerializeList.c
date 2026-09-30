/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeList
ENTRY_POINT: 0710dcd8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeList(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  int iVar4;
  long unaff_x24;
  long *unaff_x25;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 in_stack_00000008;
  long in_stack_00000098;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar1 = FUN_0710d388();
  if ((uVar1 & 1) == 0) {
    FUN_071030e0();
    auVar6 = FUN_071031d4();
    uVar3 = auVar6._8_8_;
    uVar5 = auVar6._0_8_;
    if (unaff_x19 == 0) goto LAB_0710df84;
    uVar1 = *(ulong *)(unaff_x19 + 0x70);
    if (DAT_0941218d == '\0') {
      FUN_03c8f898(PTR_DAT_08e83798);
      DAT_0941218d = '\x01';
      if (uVar1 != 0) goto LAB_0710dd5c;
LAB_0710dd8c:
      uVar2 = 0;
    }
    else {
      if (uVar1 == 0) goto LAB_0710dd8c;
LAB_0710dd5c:
      uVar2 = System_Convert__ToInt16(uVar1,0);
      uVar1 = (ulong)*(uint *)(uVar1 + 0x10);
    }
    if (DAT_0941bf03 == '\0') {
      FUN_03c8f898(PTR_DAT_08e9bd68);
      FUN_03c8f898(PTR_DAT_08e9bbb8);
      DAT_0941bf03 = '\x01';
    }
    iVar4 = auVar6._8_4_;
    if ((iVar4 == (int)uVar1) &&
       ((iVar4 == 0 ||
        (uVar1 = FUN_06f7beec(uVar5,uVar3,uVar2,uVar1,*(undefined8 *)PTR_DAT_08e9bd68),
        (uVar1 & 1) != 0)))) {
      uVar5 = 0x7ff0000000000000;
    }
    else {
      uVar1 = *(ulong *)(unaff_x19 + 0x78);
      if (DAT_0941218d == '\0') {
        FUN_03c8f898(PTR_DAT_08e83798);
        DAT_0941218d = '\x01';
        if (uVar1 != 0) goto LAB_0710de04;
LAB_0710de34:
        uVar2 = 0;
      }
      else {
        if (uVar1 == 0) goto LAB_0710de34;
LAB_0710de04:
        uVar2 = System_Convert__ToInt16(uVar1,0);
        uVar1 = (ulong)*(uint *)(uVar1 + 0x10);
      }
      if (DAT_0941bf03 == '\0') {
        FUN_03c8f898(PTR_DAT_08e9bd68);
        FUN_03c8f898(PTR_DAT_08e9bbb8);
        DAT_0941bf03 = '\x01';
      }
      if ((iVar4 == (int)uVar1) &&
         ((iVar4 == 0 ||
          (uVar1 = FUN_06f7beec(uVar5,uVar3,uVar2,uVar1,*(undefined8 *)PTR_DAT_08e9bd68),
          (uVar1 & 1) != 0)))) {
        uVar5 = 0xfff0000000000000;
      }
      else {
        uVar1 = *(ulong *)(unaff_x19 + 0x68);
        if (DAT_0941218d == '\0') {
          FUN_03c8f898(PTR_DAT_08e83798);
          DAT_0941218d = '\x01';
          if (uVar1 != 0) goto LAB_0710dea8;
LAB_0710ded8:
          uVar2 = 0;
        }
        else {
          if (uVar1 == 0) goto LAB_0710ded8;
LAB_0710dea8:
          uVar2 = System_Convert__ToInt16(uVar1,0);
          uVar1 = (ulong)*(uint *)(uVar1 + 0x10);
        }
        if (DAT_0941bf03 == '\0') {
          FUN_03c8f898(PTR_DAT_08e9bd68);
          FUN_03c8f898(PTR_DAT_08e9bbb8);
          DAT_0941bf03 = '\x01';
        }
        if ((iVar4 != (int)uVar1) ||
           ((iVar4 != 0 &&
            (uVar1 = FUN_06f7beec(uVar5,uVar3,uVar2,uVar1,*(undefined8 *)PTR_DAT_08e9bd68),
            (uVar1 & 1) == 0)))) {
          FUN_036f8b20(*unaff_x25);
          uVar5 = FUN_0710ae5c(0,0);
          goto LAB_0710df9c;
        }
        uVar5 = 0x7ff8000000000000;
      }
    }
  }
  else {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar1 = FUN_0710dfa0(&stack0x00000010,&stack0x00000008);
    uVar5 = in_stack_00000008;
    if ((uVar1 & 1) == 0) {
      FUN_036f8b20(*unaff_x25);
      FUN_0710ae5c(1,*(undefined8 *)PTR_DAT_08ea5788);
LAB_0710df84:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
  }
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
    return;
  }
LAB_0710df9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


