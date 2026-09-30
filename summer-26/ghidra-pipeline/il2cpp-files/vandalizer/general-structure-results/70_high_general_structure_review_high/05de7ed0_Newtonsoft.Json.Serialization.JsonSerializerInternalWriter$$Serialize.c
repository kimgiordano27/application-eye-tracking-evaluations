/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$Serialize
ENTRY_POINT: 05de7ed0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__Serialize(void)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *unaff_x19;
  int unaff_w20;
  long *unaff_x27;
  
  if (*(int *)(*(long *)PTR_DAT_075a9128 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_05d547ec();
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x27);
  }
  lVar3 = FUN_05ded1c0();
  if (lVar3 != 0) {
    iVar1 = FUN_05c93cd4(lVar3,0);
    if (unaff_w20 < iVar1) {
      uVar2 = 0;
    }
    else {
      FUN_05c93cd4(lVar3,0);
      FUN_05c94050(lVar3,0);
      uVar2 = FUN_05c93cd4(lVar3,0);
    }
    *unaff_x19 = uVar2;
    FUN_05c97604(lVar3,0);
    return iVar1 <= unaff_w20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


