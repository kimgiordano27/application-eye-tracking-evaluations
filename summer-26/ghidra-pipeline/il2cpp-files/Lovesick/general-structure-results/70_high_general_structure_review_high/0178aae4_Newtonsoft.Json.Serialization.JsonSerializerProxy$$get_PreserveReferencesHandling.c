/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_PreserveReferencesHandling
ENTRY_POINT: 0178aae4
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
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_PreserveReferencesHandling
          (long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x19;
  uint uVar5;
  
  uVar2 = (**(code **)(param_1 + 1000))(param_2,*(undefined8 *)(param_1 + 0x3f0));
  if (((uVar2 & 1) == 0) || (uVar2 = (**(code **)(*unaff_x19 + 0x3f8))(), (uVar2 & 1) != 0)) {
    return 1;
  }
  lVar3 = (**(code **)(*unaff_x19 + 0x488))();
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if ((int)uVar1 < 1) {
      return 1;
    }
    uVar5 = 0;
    lVar4 = lVar3;
    while( true ) {
      if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194(lVar4);
      }
      if (*(long *)(lVar3 + (long)(int)uVar5 * 8 + 0x20) == 0) break;
      uVar2 = FUN_0178aa28();
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
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


