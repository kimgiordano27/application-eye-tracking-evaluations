/*
FUNCTION_NAME: OVRSceneLoader.<DelayCanvasPosUpdate>d__24$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
ENTRY_POINT: 02cea764
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


undefined8
OVRSceneLoader_<DelayCanvasPosUpdate>d__24__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (ulong *param_1)

{
  byte bVar1;
  ulong uVar2;
  Request_1_tBA32CA55FA630F870F3D661A040F82BBE5F77411 *pRVar3;
  long lVar4;
  DeserializableList_1_t2FD579D3B494AFBF6A4B3CF99C0A45741F3E8E3E *pDVar5;
  undefined8 uVar6;
  long unaff_x29;
  undefined8 *in_stack_00000000;
  
  il2cpp_codegen_initialize_runtime_metadata(param_1);
  Challenges_GetNextChallenges_m717731F59C761B225C767A97FD9AF02311E5E0C9::s_Il2CppMethodInitialized
       = 1;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000000);
  bVar1 = Core_IsInitialized_mE325D95C21CFC9CE94AA55841CDFF49BDE8916AA_inline((MethodInfo *)0x0);
  *(byte *)(unaff_x29 + -0x19) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x19) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000000);
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000000);
    uVar6 = *(undefined8 *)(lVar4 + 8);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar6,0);
    *(undefined8 *)(unaff_x29 + -8) = 0;
  }
  else {
    pDVar5 = *(DeserializableList_1_t2FD579D3B494AFBF6A4B3CF99C0A45741F3E8E3E **)(unaff_x29 + -0x10)
    ;
    NullCheck(pDVar5);
    uVar6 = DeserializableList_1_get_NextUrl_m2B073CE39A1F66FFD022182E1129974F43E4AC07_inline
                      (pDVar5,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_44__);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    uVar2 = CAPI_ovr_HTTP_GetWithMessageType_m6F275650A5D97B6044D6C23607CDF844922A28C8
                      (uVar6,0x5b7ca1b6,0);
    pRVar3 = (Request_1_tBA32CA55FA630F870F3D661A040F82BBE5F77411 *)
             il2cpp_codegen_object_new(*(Il2CppClass **)Method_OVRPlugin_<>c_<_cctor>b__653_46__);
    Request_1__ctor_m742479814847CC386A783A3C448108836651C211
              (pRVar3,uVar2,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_45__);
    *(Request_1_tBA32CA55FA630F870F3D661A040F82BBE5F77411 **)(unaff_x29 + -8) = pRVar3;
  }
  return *(undefined8 *)(unaff_x29 + -8);
}


