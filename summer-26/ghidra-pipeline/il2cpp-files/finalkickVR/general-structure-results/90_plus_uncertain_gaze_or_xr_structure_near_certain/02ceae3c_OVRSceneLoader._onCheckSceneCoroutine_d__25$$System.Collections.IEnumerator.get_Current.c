/*
FUNCTION_NAME: OVRSceneLoader.<onCheckSceneCoroutine>d__25$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02ceae3c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8
OVRSceneLoader_<onCheckSceneCoroutine>d__25__System_Collections_IEnumerator_get_Current
          (ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  ulong uVar2;
  Request_1_t9545553E7143706392892EC7671C1FFCC4370E01 *pRVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x29;
  ulong *puStack0000000000000008;
  
  *(undefined8 *)(unaff_x29 + -0x10) = param_2;
  *(undefined8 *)(unaff_x29 + -0x18) = param_3;
  puStack0000000000000008 = param_1;
  if ((Challenges_Get_mE1E38027D2A70BB5C2BEF62CED9F5FFD58B67645::s_Il2CppMethodInitialized & 1) == 0
     ) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000008);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_48__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_49__);
    Challenges_Get_mE1E38027D2A70BB5C2BEF62CED9F5FFD58B67645::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000008);
  bVar1 = Core_IsInitialized_mE325D95C21CFC9CE94AA55841CDFF49BDE8916AA_inline((MethodInfo *)0x0);
  *(byte *)(unaff_x29 + -0x19) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x19) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000008);
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000008);
    uVar5 = *(undefined8 *)(lVar4 + 8);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar5,0);
    *(undefined8 *)(unaff_x29 + -8) = 0;
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x29 + -0x10);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    uVar2 = CAPI_ovr_Challenges_Get_mD39F99854874E923FEA91606F4030E203363D987(uVar5,0);
    pRVar3 = (Request_1_t9545553E7143706392892EC7671C1FFCC4370E01 *)
             il2cpp_codegen_object_new(*(Il2CppClass **)Method_OVRPlugin_<>c_<_cctor>b__653_49__);
    Request_1__ctor_mBD455FADB3745E94C2E0F04A5A713F3BD8D7A76C
              (pRVar3,uVar2,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_48__);
    *(Request_1_t9545553E7143706392892EC7671C1FFCC4370E01 **)(unaff_x29 + -8) = pRVar3;
  }
  return *(undefined8 *)(unaff_x29 + -8);
}


