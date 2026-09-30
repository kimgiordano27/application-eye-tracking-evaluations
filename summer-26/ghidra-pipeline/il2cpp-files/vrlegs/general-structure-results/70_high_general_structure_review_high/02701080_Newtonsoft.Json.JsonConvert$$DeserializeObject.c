/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject
ENTRY_POINT: 02701080
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__DeserializeObject(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long unaff_x19;
  int iVar7;
  int unaff_w21;
  long unaff_x23;
  long unaff_x25;
  long unaff_x26;
  
  FUN_025bb98c();
  iVar7 = *(int *)(unaff_x23 + 0x10);
  if (*(char *)(unaff_x25 + 0xd85) == '\0') {
    FUN_01ab69ac(PTR_DAT_03cefba0);
    FUN_01ab69ac(PTR_DAT_03cef9c0);
    *(undefined1 *)(unaff_x25 + 0xd85) = 1;
  }
  if ((unaff_w21 == iVar7) && ((unaff_w21 == 0 || (uVar2 = FUN_025c6a00(), (uVar2 & 1) != 0)))) {
    uVar5 = *(undefined8 *)(unaff_x19 + 0x148);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x150);
    lVar3 = FUN_026fc444();
    if (*(char *)(unaff_x26 + 0x1cf) == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      *(undefined1 *)(unaff_x26 + 0x1cf) = 1;
    }
    if (lVar3 == 0) {
      uVar4 = 0;
      iVar7 = 0;
    }
    else {
      uVar4 = FUN_025bb98c(lVar3,0);
      iVar7 = *(int *)(lVar3 + 0x10);
    }
    if (*(char *)(unaff_x25 + 0xd85) == '\0') {
      FUN_01ab69ac(PTR_DAT_03cefba0);
      FUN_01ab69ac(PTR_DAT_03cef9c0);
      *(undefined1 *)(unaff_x25 + 0xd85) = 1;
    }
    iVar6 = (int)uVar1;
    if (iVar6 == iVar7) {
      if (iVar6 == 0) {
        return 1;
      }
      uVar5 = FUN_025c6a00(uVar5,uVar1,uVar4,iVar7,*(undefined8 *)PTR_DAT_03cefba0);
      return uVar5;
    }
  }
  return 0;
}


