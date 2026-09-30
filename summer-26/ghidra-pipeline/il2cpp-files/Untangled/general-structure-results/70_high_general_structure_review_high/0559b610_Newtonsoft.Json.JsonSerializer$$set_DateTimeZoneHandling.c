/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_DateTimeZoneHandling
ENTRY_POINT: 0559b610
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer__set_DateTimeZoneHandling(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  
  FUN_02f07e70(PTR_DAT_06d09430);
  *(undefined1 *)(unaff_x20 + 0x8ff) = 1;
  lVar1 = *(long *)(unaff_x19 + 0x88);
  if (lVar1 == 0) {
    uVar2 = FUN_0559b680();
    uVar3 = FUN_0559b6cc();
    uVar2 = FUN_05465414(uVar2,*(undefined8 *)PTR_DAT_06d09430,uVar3,0);
    *(undefined8 *)(unaff_x19 + 0x88) = uVar2;
    thunk_FUN_02f411dc((long *)(unaff_x19 + 0x88),uVar2);
    lVar1 = *(long *)(unaff_x19 + 0x88);
  }
  return lVar1;
}


