/*
FUNCTION_NAME: OVRSceneLoader$$.ctor
ENTRY_POINT: 02cea48c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 OVRSceneLoader___ctor(MethodInfo *param_1)

{
  byte bVar1;
  ulong uVar2;
  Request_1_t073EA18B3EA44E7A485A942C707F4414DF52BFB6 *pRVar3;
  long lVar4;
  DeserializableList_1_tCDCCA28828C9F4A36A16C7FD37B5604F27A47353 *pDVar5;
  undefined8 uVar6;
  long unaff_x29;
  undefined8 *in_stack_00000000;
  
  bVar1 = Core_IsInitialized_mE325D95C21CFC9CE94AA55841CDFF49BDE8916AA_inline(param_1);
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
    pDVar5 = *(DeserializableList_1_tCDCCA28828C9F4A36A16C7FD37B5604F27A47353 **)(unaff_x29 + -0x10)
    ;
    NullCheck(pDVar5);
    uVar6 = DeserializableList_1_get_NextUrl_mC6C6399A3FE8D006B674C3B34E15B7B5B88150FA_inline
                      (pDVar5,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_40__);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    uVar2 = CAPI_ovr_HTTP_GetWithMessageType_m6F275650A5D97B6044D6C23607CDF844922A28C8
                      (uVar6,0x7f4ca0c6,0);
    pRVar3 = (Request_1_t073EA18B3EA44E7A485A942C707F4414DF52BFB6 *)
             il2cpp_codegen_object_new(*(Il2CppClass **)Method_OVRPlugin_<>c_<_cctor>b__653_42__);
    Request_1__ctor_m817E3B0B1C617AE840330CA1A48671FD32386F00
              (pRVar3,uVar2,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_41__);
    *(Request_1_t073EA18B3EA44E7A485A942C707F4414DF52BFB6 **)(unaff_x29 + -8) = pRVar3;
  }
  return *(undefined8 *)(unaff_x29 + -8);
}


