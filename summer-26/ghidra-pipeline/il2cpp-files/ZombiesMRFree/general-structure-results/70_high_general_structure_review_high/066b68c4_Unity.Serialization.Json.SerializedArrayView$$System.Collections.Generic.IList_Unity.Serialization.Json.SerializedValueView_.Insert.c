/*
FUNCTION_NAME: Unity.Serialization.Json.SerializedArrayView$$System.Collections.Generic.IList<Unity.Serialization.Json.SerializedValueView>.Insert
ENTRY_POINT: 066b68c4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_Serialization_Json_SerializedArrayView__System_Collections_Generic_IList<Unity_Serialization_Json_SerializedValueView>_Insert
          (undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  int unaff_w19;
  long *unaff_x22;
  
  lVar2 = FUN_068f8a88(param_1,0);
  if (lVar2 != 0) {
    lVar2 = FUN_06906070(lVar2,1,0);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*unaff_x22);
    }
    uVar3 = FUN_068f8810(lVar2,0,0);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if (lVar2 != 0) {
      iVar1 = FUN_06905cd8(lVar2,0);
      if (iVar1 <= unaff_w19) {
        return 0;
      }
      lVar2 = FUN_06906070(lVar2,unaff_w19,0);
      if (lVar2 != 0) {
        uVar4 = FUN_068f5db8(lVar2,0);
        return uVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


