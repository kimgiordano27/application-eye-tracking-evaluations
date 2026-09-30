/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$IsSpecified
ENTRY_POINT: 055decac
PROGRAM: beastcraft-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__IsSpecified(void)

{
  undefined *puVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  *(undefined8 *)(unaff_x23 + 0x28) = unaff_x21;
  thunk_FUN_02ee2be8((undefined8 *)(unaff_x23 + 0x28));
  if (2 < *(uint *)(unaff_x23 + 0x18)) {
    *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
    thunk_FUN_02ee2be8((undefined8 *)(unaff_x22 + 0x30));
    puVar1 = PTR_DAT_06a368c0;
                    /* try { // try from 055dece4 to 056ded13 has its CatchHandler @ 055dee04 */
    if ((*(uint *)(unaff_x22 + 0x18) & 0xfffffffc) != 0) {
      *(undefined8 *)(unaff_x22 + 0x38) = unaff_x19;
      thunk_FUN_02ee2be8();
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
                    /* try { // try from 055ded14 to 056dedaf has its CatchHandler @ 055de7e8 */
      FUN_055de798();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3cccc();
}


