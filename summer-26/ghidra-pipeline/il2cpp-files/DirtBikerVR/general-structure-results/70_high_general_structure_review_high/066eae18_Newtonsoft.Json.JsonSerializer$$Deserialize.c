/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize
ENTRY_POINT: 066eae18
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__Deserialize(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  
  lVar1 = thunk_FUN_03ac73c0();
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar2,0);
  }
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    *(undefined8 *)(unaff_x19 + 0x20) = unaff_x20;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


