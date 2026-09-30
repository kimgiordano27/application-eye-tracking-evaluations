/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ParsePostValue
ENTRY_POINT: 07119494
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


byte Newtonsoft_Json_JsonTextReader__ParsePostValue(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long in_x9;
  long in_x10;
  long in_x12;
  long *unaff_x19;
  byte unaff_w20;
  long unaff_x21;
  long lVar4;
  long unaff_x22;
  long lVar5;
  
  lVar1 = param_1 * in_x12 + in_x9 * 0xe10 + in_x10 * 0x3c + (long)*(int *)(unaff_x22 + 4);
  if (lVar1 * 1000 + 0x346dc5d638865U < 0x68db8bac710cb) {
    lVar5 = (long)*(int *)(unaff_x21 + 4);
    if (*(int *)(unaff_x21 + 4) == 0) {
      lVar5 = 0;
    }
    else {
      lVar4 = 1000000;
      if (0 < *(int *)(unaff_x21 + 8)) {
        lVar3 = FUN_07118fe0();
        lVar4 = 0;
        if (lVar3 != 0) {
          lVar4 = 1000000 / lVar3;
        }
      }
      for (; lVar5 < lVar4; lVar5 = lVar5 * 10) {
      }
    }
    lVar5 = lVar5 + lVar1 * 10000000;
    bVar2 = lVar5 < 0 & unaff_w20;
    lVar1 = 0;
    if (bVar2 == 0) {
      lVar1 = lVar5;
    }
    bVar2 = bVar2 ^ 1;
    *unaff_x19 = lVar1;
  }
  else {
    bVar2 = 0;
    *unaff_x19 = 0;
  }
  return bVar2;
}


