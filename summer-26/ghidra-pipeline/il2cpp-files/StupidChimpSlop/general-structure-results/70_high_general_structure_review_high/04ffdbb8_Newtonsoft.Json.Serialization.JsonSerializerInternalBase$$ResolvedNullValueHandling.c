/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$ResolvedNullValueHandling
ENTRY_POINT: 04ffdbb8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ResolvedNullValueHandling
               (undefined8 param_1,undefined8 param_2,int param_3)

{
  int *unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long lVar1;
  long unaff_x23;
  long lVar2;
  ulong unaff_x24;
  undefined8 unaff_x25;
  int unaff_w26;
  int unaff_w27;
  
  FUN_04ffd75c(param_1,param_3 >> 8);
  if (unaff_w27 == 0) {
    lVar1 = unaff_x23 + 8;
  }
  else {
    lVar1 = unaff_x23 + 10;
    *(undefined2 *)(unaff_x23 + 8) = 0x2d;
  }
  FUN_04ffd75c(lVar1,(int)*(short *)(unaff_x21 + 6) >> 8);
  if (unaff_w27 == 0) {
    lVar2 = lVar1 + 8;
  }
  else {
    lVar2 = lVar1 + 10;
    *(undefined2 *)(lVar1 + 8) = 0x2d;
  }
  FUN_04ffd75c(lVar2,*(undefined1 *)(unaff_x21 + 8),*(undefined1 *)(unaff_x21 + 9));
  if (unaff_w27 == 0) {
    lVar1 = lVar2 + 8;
  }
  else {
    lVar1 = lVar2 + 10;
    *(undefined2 *)(lVar2 + 8) = 0x2d;
  }
  FUN_04ffd75c(lVar1,*(undefined1 *)(unaff_x21 + 10),*(undefined1 *)(unaff_x21 + 0xb));
  FUN_04ffd75c(lVar1 + 8,*(undefined1 *)(unaff_x21 + 0xc),*(undefined1 *)(unaff_x21 + 0xd));
  FUN_04ffd75c(lVar1 + 0x10,*(undefined1 *)(unaff_x21 + 0xe),*(undefined1 *)(unaff_x21 + 0xf));
  if ((unaff_x24 & 1) == 0) {
    *(short *)(lVar1 + 0x18) = (short)((ulong)unaff_x25 >> 0x10);
  }
  *unaff_x19 = unaff_w26;
  return unaff_w26 <= unaff_w20;
}


