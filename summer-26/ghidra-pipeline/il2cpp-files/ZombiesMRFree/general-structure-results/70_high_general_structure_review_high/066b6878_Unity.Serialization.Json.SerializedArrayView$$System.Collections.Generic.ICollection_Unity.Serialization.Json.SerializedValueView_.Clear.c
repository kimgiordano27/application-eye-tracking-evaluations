/*
FUNCTION_NAME: Unity.Serialization.Json.SerializedArrayView$$System.Collections.Generic.ICollection<Unity.Serialization.Json.SerializedValueView>.Clear
ENTRY_POINT: 066b6878
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
Unity_Serialization_Json_SerializedArrayView__System_Collections_Generic_ICollection<Unity_Serialization_Json_SerializedValueView>_Clear
          (undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int unaff_w19;
  
  puVar1 = PTR_DAT_06f6d618;
  uVar3 = FUN_068f8a88(param_1,0);
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar5);
  }
  uVar4 = FUN_068f8810(uVar3,0,0);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  lVar5 = FUN_068f5db8();
  if ((lVar5 != 0) && (lVar5 = FUN_068f8a88(lVar5,0), lVar5 != 0)) {
    lVar5 = FUN_06906070(lVar5,1,0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar6);
    }
    uVar4 = FUN_068f8810(lVar5,0,0);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if (lVar5 != 0) {
      iVar2 = FUN_06905cd8(lVar5,0);
      if (iVar2 <= unaff_w19) {
        return 0;
      }
      lVar5 = FUN_06906070(lVar5,unaff_w19,0);
      if (lVar5 != 0) {
        uVar3 = FUN_068f5db8(lVar5,0);
        return uVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


