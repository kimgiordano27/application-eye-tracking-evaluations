/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldSerialize
ENTRY_POINT: 0718bb28
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldSerialize
          (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  char unaff_w20;
  long unaff_x21;
  undefined8 unaff_x22;
  
  while( true ) {
    unaff_x19 = FUN_071c5e28(unaff_x19,param_2,0);
    uVar2 = FUN_071c5e1c(unaff_x22,0);
    if (uVar2 < 8) break;
    unaff_x22 = FUN_071c5e30(unaff_x22,8,0);
    if (*(char *)(unaff_x21 + unaff_x19) == unaff_w20) goto LAB_0718bc28;
    lVar1 = FUN_071c5e28(unaff_x19,1,0);
    if (*(char *)(unaff_x21 + lVar1) == unaff_w20) goto LAB_0718ba38;
    lVar1 = FUN_071c5e28(unaff_x19,2,0);
    if (*(char *)(unaff_x21 + lVar1) == unaff_w20) goto LAB_0718bb6c;
    lVar1 = FUN_071c5e28(unaff_x19,3,0);
    if (*(char *)(unaff_x21 + lVar1) == unaff_w20) goto LAB_0718bbc4;
    lVar1 = FUN_071c5e28(unaff_x19,4,0);
    if (*(char *)(unaff_x21 + lVar1) == unaff_w20) {
      uVar3 = 4;
LAB_0718bb90:
      uVar3 = FUN_071c5e28(unaff_x19,uVar3,0);
      uVar3 = FUN_071c5e1c(uVar3,0);
      return uVar3;
    }
    lVar1 = FUN_071c5e28(unaff_x19,5,0);
    if (*(char *)(unaff_x21 + lVar1) == unaff_w20) {
      uVar3 = 5;
      goto LAB_0718bb90;
    }
    lVar1 = FUN_071c5e28(unaff_x19,6,0);
    if (*(char *)(unaff_x21 + lVar1) == unaff_w20) {
      uVar3 = 6;
      goto LAB_0718bb90;
    }
    lVar1 = FUN_071c5e28(unaff_x19,7,0);
    if (*(char *)(unaff_x21 + lVar1) == unaff_w20) {
      uVar3 = 7;
      goto LAB_0718bb90;
    }
    param_2 = 8;
  }
  uVar2 = FUN_071c5e1c(unaff_x22,0);
  if (uVar2 < 4) goto LAB_0718bbec;
  unaff_x22 = FUN_071c5e30(unaff_x22,4,0);
  if (*(char *)(unaff_x21 + unaff_x19) != unaff_w20) {
    lVar1 = FUN_071c5e28(unaff_x19,1,0);
    if (*(char *)(unaff_x21 + lVar1) == unaff_w20) {
LAB_0718ba38:
      uVar3 = 1;
    }
    else {
      lVar1 = FUN_071c5e28(unaff_x19,2,0);
      if (*(char *)(unaff_x21 + lVar1) == unaff_w20) {
LAB_0718bb6c:
        uVar3 = 2;
      }
      else {
        lVar1 = FUN_071c5e28(unaff_x19,3,0);
        if (*(char *)(unaff_x21 + lVar1) != unaff_w20) {
          uVar3 = 4;
          while( true ) {
            unaff_x19 = FUN_071c5e28(unaff_x19,uVar3,0);
LAB_0718bbec:
            lVar1 = FUN_071c5e1c(unaff_x22,0);
            if (lVar1 == 0) {
              return 0xffffffff;
            }
            unaff_x22 = FUN_071c5e30(unaff_x22,1,0);
            if (*(char *)(unaff_x21 + unaff_x19) == unaff_w20) break;
            uVar3 = 1;
          }
          goto LAB_0718bc28;
        }
LAB_0718bbc4:
        uVar3 = 3;
      }
    }
    unaff_x19 = FUN_071c5e28(unaff_x19,uVar3,0);
  }
LAB_0718bc28:
  uVar3 = FUN_071c5e1c(unaff_x19,0);
  return uVar3;
}


