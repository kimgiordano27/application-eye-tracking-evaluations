/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_TypeNameAssemblyFormatHandling
ENTRY_POINT: 05ea161c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_TypeNameAssemblyFormatHandling
               (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  
  puVar1 = PTR_DAT_07a18270;
  if (param_1 == 0) {
    uVar2 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar2,0);
  }
  if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffc) != 0) {
    *(undefined8 *)(unaff_x19 + 0x38) = unaff_x20;
    thunk_FUN_036b7ad0();
    FUN_05c98bb4(*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


