/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyValue
ENTRY_POINT: 04d47ae8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyValue(ulong param_1)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x24;
  long unaff_x25;
  
  if ((param_1 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06332648);
    *(undefined1 *)(unaff_x25 + 0x6bc) = 1;
  }
  uVar1 = (**(code **)(*unaff_x24 + 0x338))();
  lVar2 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06332648);
  FUN_04dbdb8c(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = unaff_x20;
  *(undefined4 *)(lVar2 + 0x34) = uVar1;
  thunk_FUN_02bb0e9c();
  if (unaff_x19 != 0) {
    (**(code **)(unaff_x19 + 0x18))
              (*(undefined8 *)(unaff_x19 + 0x40),lVar2,*(undefined8 *)(unaff_x19 + 0x28));
  }
  return lVar2;
}


