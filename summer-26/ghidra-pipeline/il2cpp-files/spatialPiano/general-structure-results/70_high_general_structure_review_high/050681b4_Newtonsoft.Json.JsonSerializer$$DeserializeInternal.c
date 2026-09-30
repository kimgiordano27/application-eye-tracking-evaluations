/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$DeserializeInternal
ENTRY_POINT: 050681b4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__DeserializeInternal(long param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(uint *)(unaff_x19 + 0x10) < *(uint *)(param_1 + 0x18)) {
    uVar1 = *(undefined8 *)(param_1 + (long)(int)*(uint *)(unaff_x19 + 0x10) * 0x10 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_067dc198 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar1 = FUN_0506809c(uVar1,0);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


