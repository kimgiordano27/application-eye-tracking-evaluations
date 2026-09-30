/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerialized
ENTRY_POINT: 05014120
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_5
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerialized(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  int iVar4;
  ulong uVar5;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  long in_stack_00000098;
  
  Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateDynamic();
  auVar7 = FUN_050091bc();
  uVar3 = auVar7._8_8_;
  uVar1 = auVar7._0_8_;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar5 = *(ulong *)(unaff_x19 + 0x70);
  if (DAT_06b77dad == '\0') {
    FUN_02d6084c(PTR_DAT_0676c428);
    DAT_06b77dad = '\x01';
    if (uVar5 == 0) goto LAB_0501417c;
LAB_0501414c:
    uVar2 = FUN_04e8a8a0(uVar5,0);
    uVar5 = (ulong)*(uint *)(uVar5 + 0x10);
  }
  else {
    if (uVar5 != 0) goto LAB_0501414c;
LAB_0501417c:
    uVar2 = 0;
  }
  if (DAT_06b78c44 == '\0') {
    FUN_02d6084c(PTR_DAT_067711b0);
    FUN_02d6084c(PTR_DAT_06770f78);
    DAT_06b78c44 = '\x01';
  }
  iVar4 = auVar7._8_4_;
  if ((iVar4 == (int)uVar5) &&
     ((iVar4 == 0 ||
      (uVar5 = FUN_04e93a1c(uVar1,uVar3,uVar2,uVar5,*(undefined8 *)PTR_DAT_067711b0),
      (uVar5 & 1) != 0)))) {
    uVar6 = 0x7f800000;
  }
  else {
    uVar5 = *(ulong *)(unaff_x19 + 0x78);
    if (DAT_06b77dad == '\0') {
      FUN_02d6084c(PTR_DAT_0676c428);
      DAT_06b77dad = '\x01';
      if (uVar5 == 0) goto LAB_05014224;
LAB_050141f4:
      uVar2 = FUN_04e8a8a0(uVar5,0);
      uVar5 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      if (uVar5 != 0) goto LAB_050141f4;
LAB_05014224:
      uVar2 = 0;
    }
    if (DAT_06b78c44 == '\0') {
      FUN_02d6084c(PTR_DAT_067711b0);
      FUN_02d6084c(PTR_DAT_06770f78);
      DAT_06b78c44 = '\x01';
    }
    if ((iVar4 == (int)uVar5) &&
       ((iVar4 == 0 ||
        (uVar5 = FUN_04e93a1c(uVar1,uVar3,uVar2,uVar5,*(undefined8 *)PTR_DAT_067711b0),
        (uVar5 & 1) != 0)))) {
      uVar6 = 0xff800000;
    }
    else {
      uVar5 = *(ulong *)(unaff_x19 + 0x68);
      if (DAT_06b77dad == '\0') {
        FUN_02d6084c(PTR_DAT_0676c428);
        DAT_06b77dad = '\x01';
        if (uVar5 == 0) goto LAB_050142c8;
LAB_05014298:
        uVar2 = FUN_04e8a8a0(uVar5,0);
        uVar5 = (ulong)*(uint *)(uVar5 + 0x10);
      }
      else {
        if (uVar5 != 0) goto LAB_05014298;
LAB_050142c8:
        uVar2 = 0;
      }
      if (DAT_06b78c44 == '\0') {
        FUN_02d6084c(PTR_DAT_067711b0);
        FUN_02d6084c(PTR_DAT_06770f78);
        DAT_06b78c44 = '\x01';
      }
      if ((iVar4 != (int)uVar5) ||
         ((iVar4 != 0 &&
          (uVar5 = FUN_04e93a1c(uVar1,uVar3,uVar2,uVar5,*(undefined8 *)PTR_DAT_067711b0),
          (uVar5 & 1) == 0)))) {
        FUN_028f4b80(*unaff_x25);
        uVar6 = FUN_05010df8(0,0);
        goto LAB_05014370;
      }
      uVar6 = 0x7fc00000;
    }
  }
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
    return;
  }
LAB_05014370:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


