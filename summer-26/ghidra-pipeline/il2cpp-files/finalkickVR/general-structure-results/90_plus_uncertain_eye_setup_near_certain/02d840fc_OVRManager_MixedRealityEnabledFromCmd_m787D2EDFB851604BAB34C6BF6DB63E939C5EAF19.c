/*
FUNCTION_NAME: OVRManager_MixedRealityEnabledFromCmd_m787D2EDFB851604BAB34C6BF6DB63E939C5EAF19
ENTRY_POINT: 02d840fc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined1 OVRManager_MixedRealityEnabledFromCmd_m787D2EDFB851604BAB34C6BF6DB63E939C5EAF19(void)

{
  byte bVar1;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *this;
  void *pvVar2;
  undefined8 uVar3;
  int local_2c;
  
  if ((OVRManager_MixedRealityEnabledFromCmd_m787D2EDFB851604BAB34C6BF6DB63E939C5EAF19::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_System_Collections_IEnumerator_Reset__
              );
    OVRManager_MixedRealityEnabledFromCmd_m787D2EDFB851604BAB34C6BF6DB63E939C5EAF19::
    s_Il2CppMethodInitialized = 1;
  }
  this = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)
         Environment_GetCommandLineArgs_mD29CFA1CD3C84F9BD91152E70302E908114A831D(0);
  local_2c = 0;
  while( true ) {
    NullCheck(this);
    if ((int)*(undefined8 *)(this + 0x18) <= local_2c) {
      return 0;
    }
    NullCheck(this);
    pvVar2 = (void *)StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::GetAt
                               (this,(long)local_2c);
    NullCheck(pvVar2);
    uVar3 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(pvVar2);
    bVar1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1
                      (uVar3,*(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_System_Collections_IEnumerator_Reset__
                       ,0);
    if ((bVar1 & 1) != 0) break;
    local_2c = il2cpp_codegen_add<int,int>(local_2c,1);
  }
  return 1;
}


