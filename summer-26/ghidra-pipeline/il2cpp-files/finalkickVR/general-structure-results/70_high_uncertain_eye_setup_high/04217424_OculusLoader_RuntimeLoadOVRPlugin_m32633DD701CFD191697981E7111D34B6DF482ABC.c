/*
FUNCTION_NAME: OculusLoader_RuntimeLoadOVRPlugin_m32633DD701CFD191697981E7111D34B6DF482ABC
ENTRY_POINT: 04217424
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OculusLoader_RuntimeLoadOVRPlugin_m32633DD701CFD191697981E7111D34B6DF482ABC(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ExceptionSupportStack<Il2CppObject*,1> aEStack_28 [16];
  undefined8 local_18;
  
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  local_18 = param_1;
  if ((OculusLoader_RuntimeLoadOVRPlugin_m32633DD701CFD191697981E7111D34B6DF482ABC::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolumeProfile>__ctor__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB_il2cpp_TypeInfo_var_048d3988
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteral066D7D93F8175DDAAA3D6E4337D52AB827615B03_048d39f0);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteral8A017E46CE09C02B042A499A98229FB4CB75E992_048d39f8);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>__ctor__);
    OculusLoader_RuntimeLoadOVRPlugin_m32633DD701CFD191697981E7111D34B6DF482ABC::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::ExceptionSupportStack(aEStack_28);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              PTR_OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB_il2cpp_TypeInfo_var_048d3988
            );
  iVar2 = OculusLoader_IsDeviceSupported_m478A97E527F8DA4B6C08459445739C2E9C72C36D(0);
  if (iVar2 == 2) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
              (*(undefined8 *)PTR__stringLiteral8A017E46CE09C02B042A499A98229FB4CB75E992_048d39f8);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolumeProfile>__ctor__
              );
    Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(0);
  }
  if ((iVar2 == 0) &&
     (uVar3 = NativeMethods_LoadOVRPlugin_mE7DA65BF795C1E1E7DB69B59793C413556875F7F
                        (*(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>__ctor__
                         ,0), (uVar3 & 1) == 0)) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
              (*(undefined8 *)PTR__stringLiteral066D7D93F8175DDAAA3D6E4337D52AB827615B03_048d39f0,0)
    ;
  }
  return;
}


