/*
FUNCTION_NAME: Challenges_GetEntriesByIds_mF52A8AE266122FC82EFA1DCB71CC23FAEE9E29AC
ENTRY_POINT: 02ceb250
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 120
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


Request_1_t073EA18B3EA44E7A485A942C707F4414DF52BFB6 *
Challenges_GetEntriesByIds_mF52A8AE266122FC82EFA1DCB71CC23FAEE9E29AC
          (undefined8 param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_6c;
  undefined8 local_18;
  
  puVar1 = Method_System_Collections_Generic_List<Vector3>_get_Item__;
  if ((Challenges_GetEntriesByIds_mF52A8AE266122FC82EFA1DCB71CC23FAEE9E29AC::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_41__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_42__);
    Challenges_GetEntriesByIds_mF52A8AE266122FC82EFA1DCB71CC23FAEE9E29AC::s_Il2CppMethodInitialized
         = 1;
  }
                    /* try { // try from 02ceb2e0 to 02deb367 has its CatchHandler @ 02ceb2e0
                       catch() { ... } // from try @ 02ceb2e0 with catch @ 02ceb2e0
                       catch() { ... } // from try @ 02ceb3e8 with catch @ 02ceb2e0
                       catch() { ... } // from try @ 02ceb42c with catch @ 02ceb2e0
                       catch() { ... } // from try @ 02ceb594 with catch @ 02ceb2e0 */
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar2 = Core_IsInitialized_mE325D95C21CFC9CE94AA55841CDFF49BDE8916AA_inline((MethodInfo *)0x0);
  if ((bVar2 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar4 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uVar5 = *(undefined8 *)(lVar4 + 8);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar5,0);
    local_18 = (Request_1_t073EA18B3EA44E7A485A942C707F4414DF52BFB6 *)0x0;
  }
  else {
    if (param_4 == (void *)0x0) {
      local_6c = 0;
    }
    else {
      NullCheck(param_4);
      local_6c = (undefined4)*(undefined8 *)((long)param_4 + 0x18);
    }
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    uVar3 = CAPI_ovr_Challenges_GetEntriesByIds_m5E314D44CD9F4B63B0EB680D6A54F19F25BB0FF8
                      (param_1,param_2,param_3,param_4,local_6c,0);
    local_18 = (Request_1_t073EA18B3EA44E7A485A942C707F4414DF52BFB6 *)
               il2cpp_codegen_object_new(*(Il2CppClass **)Method_OVRPlugin_<>c_<_cctor>b__653_42__);
    Request_1__ctor_m817E3B0B1C617AE840330CA1A48671FD32386F00
              (local_18,uVar3,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_41__);
  }
  return local_18;
}


