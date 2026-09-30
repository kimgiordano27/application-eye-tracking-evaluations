/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDictionary
ENTRY_POINT: 06255990
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDictionary(undefined8 param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 *unaff_x19;
  int unaff_w21;
  long unaff_x22;
  int iVar3;
  long unaff_x23;
  long lVar4;
  long unaff_x26;
  
  FUN_060be1d4(param_1,0);
  iVar3 = *(int *)(unaff_x23 + 0x10);
  if (DAT_0825b59d == '\0') {
    FUN_0373b518(PTR_DAT_07da5468);
    FUN_0373b518(PTR_DAT_07da5230);
    DAT_0825b59d = '\x01';
  }
  if ((unaff_w21 == iVar3) && ((unaff_w21 == 0 || (uVar1 = FUN_060c73cc(), (uVar1 & 1) != 0)))) {
    uVar2 = 0x7f800000;
  }
  else {
    lVar4 = *(long *)(unaff_x22 + 0x78);
    if (*(char *)(unaff_x26 + 0xbd1) == '\0') {
      FUN_0373b518(PTR_DAT_07d98650);
      *(undefined1 *)(unaff_x26 + 0xbd1) = 1;
    }
    iVar3 = 0;
    if (lVar4 != 0) {
      FUN_060be1d4(lVar4,0);
      iVar3 = *(int *)(lVar4 + 0x10);
    }
    if (DAT_0825b59d == '\0') {
      FUN_0373b518(PTR_DAT_07da5468);
      FUN_0373b518(PTR_DAT_07da5230);
      DAT_0825b59d = '\x01';
    }
    if ((unaff_w21 == iVar3) && ((unaff_w21 == 0 || (uVar1 = FUN_060c73cc(), (uVar1 & 1) != 0)))) {
      uVar2 = 0xff800000;
    }
    else {
      lVar4 = *(long *)(unaff_x22 + 0x68);
      if (*(char *)(unaff_x26 + 0xbd1) == '\0') {
        FUN_0373b518(PTR_DAT_07d98650);
        *(undefined1 *)(unaff_x26 + 0xbd1) = 1;
      }
      iVar3 = 0;
      if (lVar4 != 0) {
        FUN_060be1d4(lVar4,0);
        iVar3 = *(int *)(lVar4 + 0x10);
      }
      if (DAT_0825b59d == '\0') {
        FUN_0373b518(PTR_DAT_07da5468);
        FUN_0373b518(PTR_DAT_07da5230);
        DAT_0825b59d = '\x01';
      }
      if ((unaff_w21 != iVar3) || ((unaff_w21 != 0 && (uVar1 = FUN_060c73cc(), (uVar1 & 1) == 0))))
      {
        return 0;
      }
      uVar2 = 0x7fc00000;
    }
  }
  *unaff_x19 = uVar2;
  return 1;
}


