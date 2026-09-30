/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ContractResolver
ENTRY_POINT: 0559e158
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


void Newtonsoft_Json_JsonSerializerSettings__get_ContractResolver(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong uVar2;
  
  uVar2 = 0;
  do {
    if ((long)*(int *)(param_1 + 0x18) <= (long)uVar2) {
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
    if (*(uint *)(lVar1 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    uVar2 = uVar2 + 1;
    FUN_0559e27c();
    param_1 = FUN_0559b524();
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


