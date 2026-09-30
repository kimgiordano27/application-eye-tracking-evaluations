/*
FUNCTION_NAME: Unity.Serialization.Json.SerializedArrayView$$System.Collections.Generic.IList<Unity.Serialization.Json.SerializedValueView>.set_Item
ENTRY_POINT: 066b63d0
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


void Unity_Serialization_Json_SerializedArrayView__System_Collections_Generic_IList<Unity_Serialization_Json_SerializedValueView>_set_Item
               (void)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  
  lVar2 = *(long *)(unaff_x19 + 0x30);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x18);
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_05b11f04(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


