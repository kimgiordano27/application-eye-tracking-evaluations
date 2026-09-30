/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 027008e0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__SerializeObject(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int in_w8;
  int iVar6;
  int iVar7;
  
  if (in_w8 != 4) {
    return 0;
  }
  if (*(int *)(param_1 + 0xc) != 3) {
    return 0;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x118);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  lVar2 = FUN_026fc36c(param_2);
  if (DAT_041221cf == '\0') {
    FUN_01ab69ac(PTR_DAT_03cdba00);
    DAT_041221cf = '\x01';
  }
  if (lVar2 == 0) {
    uVar3 = 0;
    iVar7 = 0;
  }
  else {
    uVar3 = FUN_025bb98c(lVar2,0);
    iVar7 = *(int *)(lVar2 + 0x10);
  }
  if (DAT_04123d85 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cefba0);
    FUN_01ab69ac(PTR_DAT_03cef9c0);
    DAT_04123d85 = '\x01';
  }
  iVar6 = (int)uVar1;
  if ((iVar6 == iVar7) &&
     ((iVar6 == 0 ||
      (uVar4 = FUN_025c6a00(uVar5,uVar1,uVar3,iVar7,*(undefined8 *)PTR_DAT_03cefba0),
      (uVar4 & 1) != 0)))) {
    uVar5 = *(undefined8 *)(param_1 + 0x128);
    uVar1 = *(undefined8 *)(param_1 + 0x130);
    lVar2 = FUN_026fc3c0(param_2);
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
    }
    if (lVar2 == 0) {
      uVar3 = 0;
      iVar7 = 0;
    }
    else {
      uVar3 = FUN_025bb98c(lVar2,0);
      iVar7 = *(int *)(lVar2 + 0x10);
    }
    if (DAT_04123d85 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cefba0);
      FUN_01ab69ac(PTR_DAT_03cef9c0);
      DAT_04123d85 = '\x01';
    }
    iVar6 = (int)uVar1;
    if ((iVar6 == iVar7) &&
       ((iVar6 == 0 ||
        (uVar4 = FUN_025c6a00(uVar5,uVar1,uVar3,iVar7,*(undefined8 *)PTR_DAT_03cefba0),
        (uVar4 & 1) != 0)))) {
      uVar5 = *(undefined8 *)(param_1 + 0x138);
      uVar1 = *(undefined8 *)(param_1 + 0x140);
      lVar2 = FUN_026fc3ec(param_2);
      if (DAT_041221cf == '\0') {
        FUN_01ab69ac(PTR_DAT_03cdba00);
        DAT_041221cf = '\x01';
      }
      if (lVar2 == 0) {
        uVar3 = 0;
        iVar7 = 0;
      }
      else {
        uVar3 = FUN_025bb98c(lVar2,0);
        iVar7 = *(int *)(lVar2 + 0x10);
      }
      if (DAT_04123d85 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cefba0);
        FUN_01ab69ac(PTR_DAT_03cef9c0);
        DAT_04123d85 = '\x01';
      }
      iVar6 = (int)uVar1;
      if ((iVar6 == iVar7) &&
         ((iVar6 == 0 ||
          (uVar4 = FUN_025c6a00(uVar5,uVar1,uVar3,iVar7,*(undefined8 *)PTR_DAT_03cefba0),
          (uVar4 & 1) != 0)))) {
        uVar5 = *(undefined8 *)(param_1 + 0x148);
        uVar1 = *(undefined8 *)(param_1 + 0x150);
        lVar2 = FUN_026fc444(param_2);
        if (DAT_041221cf == '\0') {
          FUN_01ab69ac(PTR_DAT_03cdba00);
          DAT_041221cf = '\x01';
        }
        if (lVar2 == 0) {
          uVar3 = 0;
          iVar7 = 0;
        }
        else {
          uVar3 = FUN_025bb98c(lVar2,0);
          iVar7 = *(int *)(lVar2 + 0x10);
        }
        if (DAT_04123d85 == '\0') {
          FUN_01ab69ac(PTR_DAT_03cefba0);
          FUN_01ab69ac(PTR_DAT_03cef9c0);
          DAT_04123d85 = '\x01';
        }
        iVar6 = (int)uVar1;
        if (iVar6 == iVar7) {
          if (iVar6 != 0) {
            uVar5 = FUN_025c6a00(uVar5,uVar1,uVar3,iVar7,*(undefined8 *)PTR_DAT_03cefba0);
            return uVar5;
          }
          return 1;
        }
      }
    }
  }
  return 0;
}


