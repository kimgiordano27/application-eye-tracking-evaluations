/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ParsePostValue
ENTRY_POINT: 05da8b20
PROGRAM: vandalizer-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonTextReader__ParsePostValue(void)

{
  undefined8 *puVar1;
  uint in_w8;
  long lVar2;
  long in_x9;
  long unaff_x19;
  
  if (in_w8 < *(uint *)(in_x9 + 0x18)) {
    puVar1 = (undefined8 *)(in_x9 + (long)(int)in_w8 * 8 + 0x20);
    *puVar1 = 0;
    thunk_FUN_0329bf60(puVar1,0);
    lVar2 = *(long *)(unaff_x19 + 0x18);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(uint *)(unaff_x19 + 0x20) < *(uint *)(lVar2 + 0x18)) {
      puVar1 = (undefined8 *)(lVar2 + (long)(int)*(uint *)(unaff_x19 + 0x20) * 8 + 0x20);
      *puVar1 = 0;
      thunk_FUN_0329bf60(puVar1,0);
      *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


