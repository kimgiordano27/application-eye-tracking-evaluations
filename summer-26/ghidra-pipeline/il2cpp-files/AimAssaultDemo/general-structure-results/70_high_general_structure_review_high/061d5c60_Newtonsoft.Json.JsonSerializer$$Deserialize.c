/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize
ENTRY_POINT: 061d5c60
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_JsonSerializer__Deserialize(void)

{
  short sVar1;
  undefined8 *unaff_x19;
  undefined8 uVar2;
  
  sVar1 = FUN_060bb390();
  uVar2 = 0;
  if (sVar1 == 0x79) {
    uVar2 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d88078);
    FUN_061d6f54(uVar2,*(undefined8 *)PTR_DAT_07dac6a8,1,0);
    *unaff_x19 = uVar2;
    thunk_FUN_037aeb94();
  }
  return uVar2;
}


