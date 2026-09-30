/*
FUNCTION_NAME: OVRManager_InitPermissionRequest_m119AB6ECF8AC0DF7B5165493E5F285A734ABCEB5
ENTRY_POINT: 02d86a5c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 132
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_9;validity_or_gating_hits_5;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_6
*/


void OVRManager_InitPermissionRequest_m119AB6ECF8AC0DF7B5165493E5F285A734ABCEB5(long param_1)

{
  undefined *puVar1;
  HashSet_1_t8CCE4B1A7C21C55C1F50A4850C846D17B4943076 *pHVar2;
  
  puVar1 = Method_museoTrofeo_<StartContinuacion>d__41_System_Collections_IEnumerator_Reset__;
  if ((OVRManager_InitPermissionRequest_m119AB6ECF8AC0DF7B5165493E5F285A734ABCEB5::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_museoTrofeo_<StartContinuacion>d__41_System_Collections_IEnumerator_Reset__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_pelotaCapturable_<dejarOtraVezTocar>d__7_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_retrasarInicioLluvia_<retraso>d__1_System_Collections_IEnumerator_Reset__);
    OVRManager_InitPermissionRequest_m119AB6ECF8AC0DF7B5165493E5F285A734ABCEB5::
    s_Il2CppMethodInitialized = 1;
  }
  pHVar2 = (HashSet_1_t8CCE4B1A7C21C55C1F50A4850C846D17B4943076 *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_retrasarInicioLluvia_<retraso>d__1_System_Collections_IEnumerator_Reset__
                     );
  HashSet_1__ctor_mBF244C9F5A32AFAC08C7E26F547F642E66B3A293
            (pHVar2,*(MethodInfo **)
                     Method_pelotaCapturable_<dejarOtraVezTocar>d__7_System_Collections_IEnumerator_Reset__
            );
  if ((*(byte *)(param_1 + 0x102) & 1) != 0) {
    NullCheck(pHVar2);
    HashSet_1_Add_m4DBD371950A207F1A5A02780C893698D95AE38CA(pHVar2,1,*(MethodInfo **)puVar1);
  }
  if ((*(byte *)(param_1 + 0x103) & 1) != 0) {
    NullCheck(pHVar2);
    HashSet_1_Add_m4DBD371950A207F1A5A02780C893698D95AE38CA(pHVar2,0,*(MethodInfo **)puVar1);
  }
  if ((*(byte *)(param_1 + 0x104) & 1) != 0) {
    NullCheck(pHVar2);
    HashSet_1_Add_m4DBD371950A207F1A5A02780C893698D95AE38CA(pHVar2,2,*(MethodInfo **)puVar1);
  }
  if ((*(byte *)(param_1 + 0x105) & 1) != 0) {
    NullCheck(pHVar2);
    HashSet_1_Add_m4DBD371950A207F1A5A02780C893698D95AE38CA(pHVar2,3,*(MethodInfo **)puVar1);
  }
  OVRPermissionsRequester_Request_mE24346F59325F8846898FF68A44ABE4295695906(pHVar2,0);
  return;
}


