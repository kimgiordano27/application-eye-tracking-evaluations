/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ContractResolver
ENTRY_POINT: 06762ec0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ContractResolver
          (undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,char *param_5)

{
  ulong uVar1;
  long unaff_x24;
  long *plVar2;
  long unaff_x25;
  uint uStack000000000000000c;
  
  plVar2 = *(long **)(unaff_x24 + 0xb08);
  if ((*(byte *)(unaff_x25 + 0xb79) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084a5b08);
    *(undefined1 *)(unaff_x25 + 0xb79) = 1;
  }
  *param_5 = '\0';
  uStack000000000000000c = 0;
  if (*(int *)(*plVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_0674da68(param_1,param_2,param_3,param_4,&stack0x0000000c,0);
  if ((uVar1 & 1) != 0) {
    if ((param_3 >> 9 & 1) == 0) {
      if (uStack000000000000000c == (int)(char)uStack000000000000000c) {
LAB_06762f4c:
        *param_5 = (char)uStack000000000000000c;
        return 1;
      }
    }
    else if (uStack000000000000000c < 0x100) goto LAB_06762f4c;
  }
  return 0;
}


