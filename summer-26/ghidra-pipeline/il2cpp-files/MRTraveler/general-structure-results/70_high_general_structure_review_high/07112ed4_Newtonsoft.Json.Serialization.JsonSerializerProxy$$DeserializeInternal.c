/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$DeserializeInternal
ENTRY_POINT: 07112ed4
PROGRAM: MRTraveler-libil2cpp.so
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
Newtonsoft_Json_Serialization_JsonSerializerProxy__DeserializeInternal
          (undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,char *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uStack000000000000000c;
  
  puVar1 = PTR_DAT_08ea1b30;
  if ((DAT_0941c24a & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08ea1b30);
    DAT_0941c24a = 1;
  }
  uStack000000000000000c = 0;
  *param_5 = '\0';
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar2 = FUN_070fd5a8(param_1,param_2,param_3,param_4,&stack0x0000000c,0);
  if ((uVar2 & 1) == 0) {
LAB_07112f7c:
    uVar3 = 0;
  }
  else {
    if ((param_3 >> 9 & 1) == 0) {
      if (uStack000000000000000c != (int)(char)uStack000000000000000c) goto LAB_07112f7c;
    }
    else if (0xff < uStack000000000000000c) goto LAB_07112f7c;
    uVar3 = 1;
    *param_5 = (char)uStack000000000000000c;
  }
  return uVar3;
}


