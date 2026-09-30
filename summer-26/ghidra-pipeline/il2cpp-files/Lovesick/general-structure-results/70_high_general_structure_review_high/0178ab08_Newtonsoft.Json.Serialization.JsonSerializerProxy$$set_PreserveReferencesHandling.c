/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_PreserveReferencesHandling
ENTRY_POINT: 0178ab08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_PreserveReferencesHandling(ulong param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x19;
  uint uVar5;
  
  if ((param_1 & 1) != 0) {
    return 1;
  }
  lVar2 = (**(code **)(*unaff_x19 + 0x488))();
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if ((int)uVar1 < 1) {
      return 1;
    }
    uVar5 = 0;
    lVar4 = lVar2;
    while( true ) {
      if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194(lVar4);
      }
      if (*(long *)(lVar2 + (long)(int)uVar5 * 8 + 0x20) == 0) break;
      uVar3 = FUN_0178aa28();
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      uVar1 = *(uint *)(lVar2 + 0x18);
      uVar5 = uVar5 + 1;
      lVar4 = 1;
      if ((int)uVar1 <= (int)uVar5) {
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


