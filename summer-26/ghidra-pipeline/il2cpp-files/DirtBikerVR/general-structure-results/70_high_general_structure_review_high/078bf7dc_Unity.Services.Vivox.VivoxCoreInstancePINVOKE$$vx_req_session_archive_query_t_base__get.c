/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_archive_query_t_base__get
ENTRY_POINT: 078bf7dc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


bool Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_archive_query_t_base__get
               (long param_1)

{
  bool bVar1;
  long lVar2;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x98f) & 1) == 0) {
    FUN_03a8a718(
                System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>_TypeInfo
                );
    *(undefined1 *)(unaff_x20 + 0x98f) = 1;
  }
  if ((((*(long *)(param_1 + 0x38) == 0) ||
       (lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x28), lVar2 == 0)) ||
      (lVar2 = *(long *)(lVar2 + 0x10), lVar2 == 0)) ||
     ((*(long *)(lVar2 + 0x18) == 0 || (*(long *)(lVar2 + 0x10) == 0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = 0 < *(int *)(*(long *)(lVar2 + 0x10) + 0x18);
  }
  return bVar1;
}


