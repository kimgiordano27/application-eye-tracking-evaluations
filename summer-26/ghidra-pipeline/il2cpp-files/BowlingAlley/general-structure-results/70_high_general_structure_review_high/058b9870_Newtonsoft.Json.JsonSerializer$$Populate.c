/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Populate
ENTRY_POINT: 058b9870
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


undefined8 Newtonsoft_Json_JsonSerializer__Populate(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long *unaff_x21;
  ushort *unaff_x23;
  long lVar6;
  
  puVar2 = PTR_DAT_07290a18;
  lVar6 = 0;
  do {
    uVar3 = FUN_057a62b4();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)puVar2);
    }
    if (uVar3 - 0x61 < 0x1a) {
      uVar3 = uVar3 - 0x20;
    }
    *unaff_x23 = uVar3;
    puVar1 = PTR_DAT_072906b8;
    lVar6 = lVar6 + 1;
    unaff_x23 = unaff_x23 + 1;
  } while (lVar6 < *(int *)(unaff_x20 + 0x10));
  uVar4 = (**(code **)(*unaff_x21 + 0x188))();
  uVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  FUN_058dab6c(uVar5,uVar4);
  return uVar5;
}


