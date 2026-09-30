/*
FUNCTION_NAME: Users_GetNextUserCapabilityListPage_m7DF51D9704925CED6E65DBB8EADE8C8A8843FAB8
ENTRY_POINT: 02ced578
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 150
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_4;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_5
*/


Request_1_tC258C952DBE23E9E1EF084E937E156146A43974A *
Users_GetNextUserCapabilityListPage_m7DF51D9704925CED6E65DBB8EADE8C8A8843FAB8
          (DeserializableList_1_t2C48A604D96ADFDDA2A56068585340FF74A37510 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_18;
  
  puVar2 = Method_System_Collections_Generic_List<Vector3>_get_Item__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  if ((Users_GetNextUserCapabilityListPage_m7DF51D9704925CED6E65DBB8EADE8C8A8843FAB8::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_RectiPair_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_RectiPair_set_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRRaycaster_<>c_<GraphicRaycast>b__16_0__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
              );
    Users_GetNextUserCapabilityListPage_m7DF51D9704925CED6E65DBB8EADE8C8A8843FAB8::
    s_Il2CppMethodInitialized = 1;
  }
  NullCheck(param_1);
  bVar3 = DeserializableList_1_get_HasNextPage_m65E89472F8C63E1057652C31706E981B965E7B99
                    (param_1,*(MethodInfo **)Method_OVRPlugin_RectiPair_get_Item__);
  if ((bVar3 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)
                Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
               ,0);
    local_18 = (Request_1_tC258C952DBE23E9E1EF084E937E156146A43974A *)0x0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    bVar3 = Core_IsInitialized_mE325D95C21CFC9CE94AA55841CDFF49BDE8916AA_inline((MethodInfo *)0x0);
    if ((bVar3 & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar6 = *(undefined8 *)(lVar5 + 8);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar6,0);
      local_18 = (Request_1_tC258C952DBE23E9E1EF084E937E156146A43974A *)0x0;
    }
    else {
      NullCheck(param_1);
      uVar6 = DeserializableList_1_get_NextUrl_m57C2882F67AAECF1B880E5ACF6A9770B2104EDBB_inline
                        (param_1,*(MethodInfo **)Method_OVRPlugin_RectiPair_set_Item__);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
                );
      uVar4 = CAPI_ovr_HTTP_GetWithMessageType_m6F275650A5D97B6044D6C23607CDF844922A28C8
                        (uVar6,0x2309f399,0);
      local_18 = (Request_1_tC258C952DBE23E9E1EF084E937E156146A43974A *)
                 il2cpp_codegen_object_new
                           (*(Il2CppClass **)Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__);
      Request_1__ctor_mD7C574928FD0710BCDEEDC10A9A715FA18D2FF56
                (local_18,uVar4,*(MethodInfo **)Method_OVRRaycaster_<>c_<GraphicRaycast>b__16_0__);
                    /* try { // try from 02ced71c to 02ded78f has its CatchHandler @ 02ced71c
                       catch() { ... } // from try @ 02ced71c with catch @ 02ced71c
                       catch() { ... } // from try @ 02ced7f0 with catch @ 02ced71c
                       catch() { ... } // from try @ 02ced84c with catch @ 02ced71c
                       catch() { ... } // from try @ 02cedbf4 with catch @ 02ced71c */
    }
  }
  return local_18;
}


