/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObjectUsingCreatorWithParameters
ENTRY_POINT: 0624fee0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObjectUsingCreatorWithParameters
               (undefined8 *param_1,undefined8 param_2)

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
  
  FUN_0624cbc4(param_2,*param_1);
  FUN_06244ec4();
  auVar7 = FUN_06244fac();
  uVar3 = auVar7._8_8_;
  uVar1 = auVar7._0_8_;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar5 = *(ulong *)(unaff_x19 + 0x70);
  if (DAT_08255bd1 == '\0') {
    FUN_0373b518(PTR_DAT_07d98650);
    DAT_08255bd1 = '\x01';
    if (uVar5 == 0) goto LAB_0624ff48;
LAB_0624ff18:
    uVar2 = FUN_060be1d4(uVar5,0);
    uVar5 = (ulong)*(uint *)(uVar5 + 0x10);
  }
  else {
    if (uVar5 != 0) goto LAB_0624ff18;
LAB_0624ff48:
    uVar2 = 0;
  }
  if (DAT_0825b59d == '\0') {
    FUN_0373b518(PTR_DAT_07da5468);
    FUN_0373b518(PTR_DAT_07da5230);
    DAT_0825b59d = '\x01';
  }
  iVar4 = auVar7._8_4_;
  if ((iVar4 == (int)uVar5) &&
     ((iVar4 == 0 ||
      (uVar5 = FUN_060c73cc(uVar1,uVar3,uVar2,uVar5,*(undefined8 *)PTR_DAT_07da5468),
      (uVar5 & 1) != 0)))) {
    uVar6 = 0x7f800000;
  }
  else {
    uVar5 = *(ulong *)(unaff_x19 + 0x78);
    if (DAT_08255bd1 == '\0') {
      FUN_0373b518(PTR_DAT_07d98650);
      DAT_08255bd1 = '\x01';
      if (uVar5 == 0) goto LAB_0624fff0;
LAB_0624ffc0:
      uVar2 = FUN_060be1d4(uVar5,0);
      uVar5 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      if (uVar5 != 0) goto LAB_0624ffc0;
LAB_0624fff0:
      uVar2 = 0;
    }
    if (DAT_0825b59d == '\0') {
      FUN_0373b518(PTR_DAT_07da5468);
      FUN_0373b518(PTR_DAT_07da5230);
      DAT_0825b59d = '\x01';
    }
    if ((iVar4 == (int)uVar5) &&
       ((iVar4 == 0 ||
        (uVar5 = FUN_060c73cc(uVar1,uVar3,uVar2,uVar5,*(undefined8 *)PTR_DAT_07da5468),
        (uVar5 & 1) != 0)))) {
      uVar6 = 0xff800000;
    }
    else {
      uVar5 = *(ulong *)(unaff_x19 + 0x68);
      if (DAT_08255bd1 == '\0') {
        FUN_0373b518(PTR_DAT_07d98650);
        DAT_08255bd1 = '\x01';
        if (uVar5 == 0) goto LAB_06250094;
LAB_06250064:
        uVar2 = FUN_060be1d4(uVar5,0);
        uVar5 = (ulong)*(uint *)(uVar5 + 0x10);
      }
      else {
        if (uVar5 != 0) goto LAB_06250064;
LAB_06250094:
        uVar2 = 0;
      }
      if (DAT_0825b59d == '\0') {
        FUN_0373b518(PTR_DAT_07da5468);
        FUN_0373b518(PTR_DAT_07da5230);
        DAT_0825b59d = '\x01';
      }
      if ((iVar4 != (int)uVar5) ||
         ((iVar4 != 0 &&
          (uVar5 = FUN_060c73cc(uVar1,uVar3,uVar2,uVar5,*(undefined8 *)PTR_DAT_07da5468),
          (uVar5 & 1) == 0)))) {
        FUN_031ae340(*unaff_x25);
        uVar6 = FUN_0624cbc4(0,0);
        goto LAB_0625013c;
      }
      uVar6 = 0x7fc00000;
    }
  }
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
    return;
  }
LAB_0625013c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


