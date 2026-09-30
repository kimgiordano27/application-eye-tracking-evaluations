/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 0546f990
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined2 Newtonsoft_Json_JsonConvert__SerializeObject(long param_1)

{
  long lVar1;
  ushort unaff_w19;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if ((uint)((ulong)unaff_w19 - 0x24b6) < *(uint *)(lVar1 + 0x18)) {
    return *(undefined2 *)(lVar1 + ((ulong)unaff_w19 - 0x24b6) * 2 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


