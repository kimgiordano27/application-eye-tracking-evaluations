/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<ParsePostValueAsync>d__4$$MoveNext
ENTRY_POINT: 0762449c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonTextReader_<ParsePostValueAsync>d__4__MoveNext(void)

{
  undefined *puVar1;
  long unaff_x19;
  long unaff_x23;
  long lVar2;
  
  *(undefined1 *)(unaff_x23 + 0xe79) = 1;
  FUN_076b2200();
  puVar1 = PTR_DAT_09285980;
  lVar2 = *(long *)(PTR_DAT_09285980 + 0x90);
  if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0768890c(lVar2 + 0x20,0);
  if (unaff_x19 != 0) {
    FUN_07572a98();
    FUN_0768890c(*(long *)(puVar1 + 0x90) + 0x20,0);
    FUN_07572a98();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


