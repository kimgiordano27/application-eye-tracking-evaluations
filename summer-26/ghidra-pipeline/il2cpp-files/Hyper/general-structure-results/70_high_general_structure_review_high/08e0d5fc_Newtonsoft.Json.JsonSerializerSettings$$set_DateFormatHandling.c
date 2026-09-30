/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DateFormatHandling
ENTRY_POINT: 08e0d5fc
PROGRAM: Hyper-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_DateFormatHandling
               (undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *unaff_x21;
  
  FUN_05dd59a0(param_2,*param_1);
  thunk_FUN_04983f60(*unaff_x21);
                    /* try { // try from 08e0d61c to 08f0d61f has its CatchHandler @ 08e0d924 */
  FUN_06411a74();
                    /* try { // try from 08e0d620 to 08f0d64b has its CatchHandler @ 08e0d93c */
  lVar2 = FUN_04a88cb8();
  puVar1 = PTR_DAT_0ac6a7c8;
  if (lVar2 != 0) {
    FUN_05dd59a0(lVar2,*(undefined8 *)PTR_DAT_0ac6a8b8);
    thunk_FUN_04983f60(*(undefined8 *)puVar1);
    FUN_06411a74();
    lVar2 = FUN_04a88cb8();
    if (lVar2 != 0) {
      FUN_05dd59a0(lVar2,*(undefined8 *)PTR_DAT_0ac6a8d8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


