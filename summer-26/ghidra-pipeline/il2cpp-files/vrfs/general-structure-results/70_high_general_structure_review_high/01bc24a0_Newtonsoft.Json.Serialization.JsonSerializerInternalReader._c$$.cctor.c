/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$.cctor
ENTRY_POINT: 01bc24a0
PROGRAM: vrfs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c___cctor(void)

{
  long lVar1;
  long unaff_x19;
  
  if (*(int *)(*(long *)PTR_DAT_06e53b50 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  FUN_04393868();
  lVar1 = *(long *)(unaff_x19 + 0x50);
  while (lVar1 != 0) {
    lVar1 = FUN_018752a4(lVar1,0);
    if (lVar1 == 0) {
      return;
    }
    if (*(long *)(lVar1 + 0x18) == 0) break;
    if (1 < *(byte *)(*(long *)(lVar1 + 0x18) + 0x3d) - 0x31) {
      FUN_01bc2578();
    }
    lVar1 = *(long *)(unaff_x19 + 0x50);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


