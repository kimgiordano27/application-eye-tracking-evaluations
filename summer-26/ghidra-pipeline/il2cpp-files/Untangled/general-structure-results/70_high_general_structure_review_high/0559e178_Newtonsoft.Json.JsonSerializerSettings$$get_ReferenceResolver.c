/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ReferenceResolver
ENTRY_POINT: 0559e178
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_ReferenceResolver(ulong param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x22;
  
  while( true ) {
    if (param_1 <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    unaff_x22 = unaff_x22 + 1;
    FUN_0559e27c();
    lVar1 = FUN_0559b524();
    if (lVar1 == 0) break;
    if ((long)*(int *)(lVar1 + 0x18) <= (long)unaff_x22) {
      FUN_0559e27c();
      FUN_0559e27c();
      FUN_0559e27c();
      FUN_0559e27c();
      FUN_0559e27c();
      *(undefined8 *)(unaff_x19 + 0x158) = unaff_x20;
      thunk_FUN_02f411dc();
      return;
    }
    lVar1 = FUN_0559b524();
    if (lVar1 == 0) break;
    param_1 = (ulong)*(uint *)(lVar1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


