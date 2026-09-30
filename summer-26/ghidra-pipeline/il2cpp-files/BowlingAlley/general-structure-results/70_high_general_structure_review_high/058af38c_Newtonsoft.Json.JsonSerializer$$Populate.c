/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Populate
ENTRY_POINT: 058af38c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__Populate(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *unaff_x22;
  
  puVar1 = PTR_DAT_07296cd0;
  if (param_1 != 0) {
    uVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727fea0);
    System_Threading_Tasks_Task__Run(uVar2,0,*(undefined8 *)puVar1,0);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
    thunk_FUN_0333a630((undefined8 *)(unaff_x19 + 0x28),uVar2);
  }
  uVar2 = thunk_FUN_032a56a0(*unaff_x22);
  FUN_05986454(uVar2,0,0);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  thunk_FUN_0333a630((undefined8 *)(unaff_x19 + 0x20),uVar2);
  return;
}


