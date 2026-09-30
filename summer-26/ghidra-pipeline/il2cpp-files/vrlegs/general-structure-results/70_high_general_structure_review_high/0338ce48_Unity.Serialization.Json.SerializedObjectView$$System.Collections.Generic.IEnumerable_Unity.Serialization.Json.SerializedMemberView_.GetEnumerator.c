/*
FUNCTION_NAME: Unity.Serialization.Json.SerializedObjectView$$System.Collections.Generic.IEnumerable<Unity.Serialization.Json.SerializedMemberView>.GetEnumerator
ENTRY_POINT: 0338ce48
PROGRAM: vrlegs-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Unity_Serialization_Json_SerializedObjectView__System_Collections_Generic_IEnumerable<Unity_Serialization_Json_SerializedMemberView>_GetEnumerator
               (long param_1)

{
  int iVar1;
  ulong uVar2;
  long unaff_x19;
  
  uVar2 = FUN_01ab7534(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 200));
  if ((uVar2 & 1) == 0) {
    *(undefined4 *)(unaff_x19 + 0x18) = 0;
  }
  else {
    iVar1 = *(int *)(unaff_x19 + 0x18);
    *(undefined4 *)(unaff_x19 + 0x18) = 0;
    if (0 < iVar1) {
      FUN_02793a34(*(undefined8 *)(unaff_x19 + 0x10),0,iVar1,0);
    }
  }
  return;
}


