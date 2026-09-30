/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ObjectCreationHandling
ENTRY_POINT: 06762f80
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ObjectCreationHandling
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 unaff_w20;
  long unaff_x22;
  
  FUN_066d15d8(param_2,0);
  if (unaff_x22 != 0) {
    if (DAT_089760b7 == '\0') {
      FUN_03a8a718(PTR_DAT_08493e18);
      DAT_089760b7 = '\x01';
    }
    uVar2 = FUN_065cab58();
    uVar1 = *(undefined4 *)(unaff_x22 + 0x10);
    uVar3 = FUN_066d0fa4(param_3,0);
    uVar2 = FUN_06762ea4(uVar2,uVar1,unaff_w20,uVar3,param_4);
    return uVar2;
  }
  *param_4 = 0;
  return 0;
}


