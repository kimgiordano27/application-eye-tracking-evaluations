/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeConvertable
ENTRY_POINT: 01785200
PROGRAM: Lovesick-libil2cpp.so
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
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeConvertable(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint in_w8;
  long unaff_x19;
  byte unaff_w20;
  long unaff_x21;
  
  do {
    if (in_w8 == unaff_w20) {
LAB_0178538c:
      uVar3 = FUN_017bd58c(unaff_x19,0);
      return uVar3;
    }
    lVar1 = FUN_017bd598(unaff_x19,1,0);
    if (*(byte *)(unaff_x21 + lVar1) == unaff_w20) {
LAB_017852fc:
      uVar3 = 1;
LAB_01785330:
      unaff_x19 = FUN_017bd598(unaff_x19,uVar3,0);
      goto LAB_0178538c;
    }
    lVar1 = FUN_017bd598(unaff_x19,2,0);
    if (*(byte *)(unaff_x21 + lVar1) == unaff_w20) {
LAB_01785304:
      uVar3 = 2;
      goto LAB_01785330;
    }
    lVar1 = FUN_017bd598(unaff_x19,3,0);
    if (*(byte *)(unaff_x21 + lVar1) == unaff_w20) {
LAB_0178530c:
      uVar3 = 3;
      goto LAB_01785330;
    }
    lVar1 = FUN_017bd598(unaff_x19,4,0);
    if (*(byte *)(unaff_x21 + lVar1) == unaff_w20) {
      uVar3 = 4;
      goto LAB_01785330;
    }
    lVar1 = FUN_017bd598(unaff_x19,5,0);
    if (*(byte *)(unaff_x21 + lVar1) == unaff_w20) {
      uVar3 = 5;
      goto LAB_01785330;
    }
    lVar1 = FUN_017bd598(unaff_x19,6,0);
    if (*(byte *)(unaff_x21 + lVar1) == unaff_w20) {
      uVar3 = 6;
      goto LAB_01785330;
    }
    lVar1 = FUN_017bd598(unaff_x19,7,0);
    if (*(byte *)(unaff_x21 + lVar1) == unaff_w20) {
      uVar3 = 7;
      goto LAB_01785330;
    }
    unaff_x19 = FUN_017bd598(unaff_x19,8,0);
    uVar2 = FUN_017bd58c(param_1,0);
    if (uVar2 < 8) {
      uVar2 = FUN_017bd58c(param_1,0);
      if (uVar2 < 4) goto LAB_01785350;
      param_1 = FUN_017bd5a0(param_1,4,0);
      if (*(byte *)(unaff_x21 + unaff_x19) != unaff_w20) {
        lVar1 = FUN_017bd598(unaff_x19,1,0);
        if (*(byte *)(unaff_x21 + lVar1) == unaff_w20) goto LAB_017852fc;
        lVar1 = FUN_017bd598(unaff_x19,2,0);
        if (*(byte *)(unaff_x21 + lVar1) == unaff_w20) goto LAB_01785304;
        lVar1 = FUN_017bd598(unaff_x19,3,0);
        if (*(byte *)(unaff_x21 + lVar1) == unaff_w20) goto LAB_0178530c;
        uVar3 = 4;
        while( true ) {
          unaff_x19 = FUN_017bd598(unaff_x19,uVar3,0);
LAB_01785350:
          lVar1 = FUN_017bd58c(param_1,0);
          if (lVar1 == 0) {
            return 0xffffffff;
          }
          param_1 = FUN_017bd5a0(param_1,1,0);
          if (*(byte *)(unaff_x21 + unaff_x19) == unaff_w20) break;
          uVar3 = 1;
        }
      }
      goto LAB_0178538c;
    }
    param_1 = FUN_017bd5a0(param_1,8,0);
    in_w8 = (uint)*(byte *)(unaff_x21 + unaff_x19);
  } while( true );
}


