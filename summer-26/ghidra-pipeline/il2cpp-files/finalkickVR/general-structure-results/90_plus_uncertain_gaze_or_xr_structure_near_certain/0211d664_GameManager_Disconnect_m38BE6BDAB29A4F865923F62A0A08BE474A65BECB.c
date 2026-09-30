/*
FUNCTION_NAME: GameManager_Disconnect_m38BE6BDAB29A4F865923F62A0A08BE474A65BECB
ENTRY_POINT: 0211d664
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 140
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ray_interaction;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;ray_or_cast_sink_hits_21;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_3
*/


void GameManager_Disconnect_m38BE6BDAB29A4F865923F62A0A08BE474A65BECB(Il2CppObject *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  Action_1_t2B6E5EB562596B98AD0756820FFACB24AF73DE38 *pAVar4;
  undefined8 uVar5;
  void *pvVar6;
  
  puVar2 = Method_System_Collections_Generic_HashSet<LabelScopeInfo>_GetEnumerator__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  if ((GameManager_Disconnect_m38BE6BDAB29A4F865923F62A0A08BE474A65BECB::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet<LabelScopeInfo>_GetEnumerator__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Add__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Clear__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Contains__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_get_Count__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_Add__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet<object>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_Sort__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_get_Count__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet<ParameterExpression>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>__ctor__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_Add__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_get_Count__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_add_WhenPostprocessed__
              );
    GameManager_Disconnect_m38BE6BDAB29A4F865923F62A0A08BE474A65BECB::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
            (*(undefined8 *)
              Method_System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_get_Count__
             ,0);
  if ((((byte)param_1[0x2d1] & 1) != 0) || (((byte)param_1[0x2d2] & 1) != 0)) {
    uVar5 = *(undefined8 *)(param_1 + 0x2c8);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__)
    ;
    bVar3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar5,0);
    if ((bVar3 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_get_Item__);
      pvVar6 = *(void **)(param_1 + 0x2c8);
      pAVar4 = (Action_1_t2B6E5EB562596B98AD0756820FFACB24AF73DE38 *)
               il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
      Action_1__ctor_m8C21F09CD72F4918927B2CEB909845B16B4FBC67
                (pAVar4,param_1,
                 *(long *)Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Add__
                 ,(MethodInfo *)0x0);
      NullCheck(pvVar6);
      SocketIOComponent_Off_mC17BCA700C71B943A074DD40E1E50F97DF9FD37A
                (pvVar6,*(undefined8 *)Method_System_Collections_Generic_HashSet<object>__ctor__,
                 pAVar4,0);
      pvVar6 = *(void **)(param_1 + 0x2c8);
      pAVar4 = (Action_1_t2B6E5EB562596B98AD0756820FFACB24AF73DE38 *)
               il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
      Action_1__ctor_m8C21F09CD72F4918927B2CEB909845B16B4FBC67
                (pAVar4,param_1,
                 *(long *)
                  Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Clear__,
                 (MethodInfo *)0x0);
      NullCheck(pvVar6);
      SocketIOComponent_Off_mC17BCA700C71B943A074DD40E1E50F97DF9FD37A
                (pvVar6,*(undefined8 *)
                         Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_Sort__,
                 pAVar4,0);
      pvVar6 = *(void **)(param_1 + 0x2c8);
      pAVar4 = (Action_1_t2B6E5EB562596B98AD0756820FFACB24AF73DE38 *)
               il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
      Action_1__ctor_m8C21F09CD72F4918927B2CEB909845B16B4FBC67
                (pAVar4,param_1,
                 *(long *)
                  Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Contains__,
                 (MethodInfo *)0x0);
      NullCheck(pvVar6);
      SocketIOComponent_Off_mC17BCA700C71B943A074DD40E1E50F97DF9FD37A
                (pvVar6,*(undefined8 *)
                         Method_System_Collections_Generic_HashSet<ParameterExpression>__ctor__,
                 pAVar4,0);
      pvVar6 = *(void **)(param_1 + 0x2c8);
      pAVar4 = (Action_1_t2B6E5EB562596B98AD0756820FFACB24AF73DE38 *)
               il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
      Action_1__ctor_m8C21F09CD72F4918927B2CEB909845B16B4FBC67
                (pAVar4,param_1,
                 *(long *)
                  Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_get_Count__,
                 (MethodInfo *)0x0);
      NullCheck(pvVar6);
      SocketIOComponent_Off_mC17BCA700C71B943A074DD40E1E50F97DF9FD37A
                (pvVar6,*(undefined8 *)
                         Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_get_Count__
                 ,pAVar4,0);
      pvVar6 = *(void **)(param_1 + 0x2c8);
      pAVar4 = (Action_1_t2B6E5EB562596B98AD0756820FFACB24AF73DE38 *)
               il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
      Action_1__ctor_m8C21F09CD72F4918927B2CEB909845B16B4FBC67
                (pAVar4,param_1,
                 *(long *)Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>__ctor__,
                 (MethodInfo *)0x0);
      NullCheck(pvVar6);
      SocketIOComponent_Off_mC17BCA700C71B943A074DD40E1E50F97DF9FD37A
                (pvVar6,*(undefined8 *)
                         Method_System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>__ctor__
                 ,pAVar4,0);
      pvVar6 = *(void **)(param_1 + 0x2c8);
      pAVar4 = (Action_1_t2B6E5EB562596B98AD0756820FFACB24AF73DE38 *)
               il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
      Action_1__ctor_m8C21F09CD72F4918927B2CEB909845B16B4FBC67
                (pAVar4,param_1,
                 *(long *)Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_Add__,
                 (MethodInfo *)0x0);
      NullCheck(pvVar6);
      SocketIOComponent_Off_mC17BCA700C71B943A074DD40E1E50F97DF9FD37A
                (pvVar6,*(undefined8 *)
                         Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_add_WhenPostprocessed__
                 ,pAVar4,0);
      pvVar6 = *(void **)(param_1 + 0x2c8);
      pAVar4 = (Action_1_t2B6E5EB562596B98AD0756820FFACB24AF73DE38 *)
               il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
      Action_1__ctor_m8C21F09CD72F4918927B2CEB909845B16B4FBC67
                (pAVar4,param_1,
                 *(long *)Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_Clear__,
                 (MethodInfo *)0x0);
      NullCheck(pvVar6);
      SocketIOComponent_Off_mC17BCA700C71B943A074DD40E1E50F97DF9FD37A
                (pvVar6,*(undefined8 *)
                         Method_System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_Add__
                 ,pAVar4,0);
      pvVar6 = *(void **)(param_1 + 0x2c8);
      NullCheck(pvVar6);
      SocketIOComponent_Close_m8F83C242C9A8F58CBDE2B7CCEBF0B0AD61E7620E(pvVar6,0);
      *(undefined8 *)(param_1 + 0x2c8) = 0;
      Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x2c8),(void *)0x0);
      param_1[0x2d1] = (Il2CppObject)0x0;
      param_1[0x2d0] = (Il2CppObject)0x0;
      param_1[0x2d2] = (Il2CppObject)0x0;
    }
  }
  return;
}


