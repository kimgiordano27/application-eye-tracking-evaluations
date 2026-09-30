/*
FUNCTION_NAME: Unity.Serialization.Json.SerializedArrayView$$System.Collections.Generic.ICollection<Unity.Serialization.Json.SerializedValueView>.Add
ENTRY_POINT: 066b6910
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_Serialization_Json_SerializedArrayView__System_Collections_Generic_ICollection<Unity_Serialization_Json_SerializedValueView>_Add
          (undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int unaff_w19;
  
  iVar1 = FUN_06905cd8(param_1,0);
  if (iVar1 <= unaff_w19) {
    return 0;
  }
  lVar2 = FUN_06906070();
  if (lVar2 != 0) {
    uVar3 = FUN_068f5db8(lVar2,0);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


