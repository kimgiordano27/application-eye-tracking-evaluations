/*
FUNCTION_NAME: FUN_014dc03c
ENTRY_POINT: 014dc03c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 118
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_014dc03c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar4 = 
  Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__;
  if ((DAT_03776f2f & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Renderer>_Clear__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                      );
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(StringLiteral_1578);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<char>_Contains__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_TryGetValue__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(UnityEngine_XR_CommonUsages_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_TapGestureRecognizer_CreateEnhancedGesture__
                      );
    thunk_FUN_00d48444(StringLiteral_3505);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_5_0_TypeInfo);
    thunk_FUN_00d48444(FullSerializer_fsConverterRegistrar_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1538);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<AdditionalLightsShadowCasterPass_ShadowResolutionRequest>_set_Capacity__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f35a8);
    thunk_FUN_00d48444(Method_System_Threading_Tasks_Task<Socket>_ConfigureAwait__);
    thunk_FUN_00d48444(Method_Oculus_Platform_Message<InvitePanelResultInfo>_get_Data__);
    thunk_FUN_00d48444(Method_OVRTask_WhenAll<OVRPlugin_Result>__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_StyleSheet_CheckAccess<Object>__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractableUnregisteredEventArgs>_System_IDisposable_Dispose__
                      );
    DAT_03776f2f = 1;
  }
  plVar10 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar4);
  puVar4 = Method_Oculus_Platform_Message<InvitePanelResultInfo>_get_Data__;
  if (plVar10 != (long *)0x0) {
    FUN_0160aa4c(plVar10,0);
    FUN_0160c8e8(plVar10,*(undefined8 *)puVar4,0);
    puVar4 = Method_System_Collections_Generic_List<Renderer>_Clear__;
    if (*(int *)(param_1 + 0x20) < 4) {
      uVar12 = *(undefined8 *)
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractableUnregisteredEventArgs>_System_IDisposable_Dispose__
      ;
    }
    else {
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__ +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      puVar8 = StringLiteral_9958;
      puVar7 = StringLiteral_3505;
      puVar6 = Method_OVRTask_WhenAll<OVRPlugin_Result>__;
      puVar5 = Method_System_Collections_Generic_List<char>_Contains__;
      puVar3 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
      puVar2 = 
      Method_System_Collections_Generic_Dictionary<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_TryGetValue__
      ;
      puVar1 = OVRPlugin_OVRP_1_5_0_TypeInfo;
      uVar9 = FUN_016f56e8(uVar12,0,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
      uVar12 = FUN_014dbb70(uVar9);
      uVar12 = FUN_015f5b28(*(undefined8 *)puVar7,uVar12,0);
      FUN_0160c8e8(plVar10,uVar12,0);
      uVar12 = FUN_016f5c78(*(undefined8 *)(param_1 + 0x18),0);
      uVar12 = FUN_015f5b28(*(undefined8 *)puVar6,uVar12,0);
      FUN_0160c8e8(plVar10,uVar12,0);
      local_78 = *(undefined8 *)puVar2;
      local_68 = *(undefined4 *)(param_1 + 0x50);
      uStack_70 = 0xffffffffffffffff;
      uVar12 = FUN_017a7f78(&local_78,0);
      uVar12 = FUN_015f5b28(*(undefined8 *)puVar1,uVar12,0);
      FUN_0160c8e8(plVar10,uVar12,0);
      local_90 = *(undefined8 *)puVar5;
      local_80 = *(undefined4 *)(param_1 + 0x54);
      uStack_88 = 0xffffffffffffffff;
      uVar12 = FUN_017a7f78(&local_90,0);
      uVar12 = FUN_015f5b28(*(undefined8 *)StringLiteral_1538,uVar12,0);
      FUN_0160c8e8(plVar10,uVar12,0);
      local_98 = *(undefined4 *)(param_1 + 0x58);
      local_a8 = *(undefined8 *)StringLiteral_1578;
      uStack_a0 = 0xffffffffffffffff;
      uVar12 = FUN_017a7f78(&local_a8,0);
      uVar12 = FUN_015f5b28(*(undefined8 *)UnityEngine_XR_CommonUsages_TypeInfo,uVar12,0);
      FUN_0160c8e8(plVar10,uVar12,0);
      local_ac[0] = *(undefined1 *)(param_1 + 0x71);
      uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar8,local_ac);
      uVar12 = FUN_015f6780(*(undefined8 *)
                             Method_UnityEngine_UIElements_StyleSheet_CheckAccess<Object>__,uVar12,0
                           );
      FUN_0160c8e8(plVar10,uVar12,0);
      local_b0[0] = *(undefined1 *)(param_1 + 0x70);
      uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar8,local_b0);
      uVar12 = FUN_015f6780(*(undefined8 *)
                             Method_UnityEngine_XR_Interaction_Toolkit_AR_TapGestureRecognizer_CreateEnhancedGesture__
                            ,uVar12,0);
      FUN_0160c8e8(plVar10,uVar12,0);
      local_b4 = *(undefined4 *)(param_1 + 0x60);
      uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_b4);
      local_b8 = *(undefined4 *)(param_1 + 100);
      uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_b8);
      uVar12 = FUN_01600b5c(*(undefined8 *)
                             Method_System_Collections_Generic_List<AdditionalLightsShadowCasterPass_ShadowResolutionRequest>_set_Capacity__
                            ,uVar12,uVar11,0);
      FUN_0160c8e8(plVar10,uVar12,0);
      local_bc = *(undefined4 *)(param_1 + 0x68);
      uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_bc);
      local_c0 = *(undefined4 *)(param_1 + 0x6c);
      uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_c0);
      uVar12 = FUN_01600b5c(*(undefined8 *)
                             Method_System_Threading_Tasks_Task<Socket>_ConfigureAwait__,uVar12,
                            uVar11,0);
      FUN_0160c8e8(plVar10,uVar12,0);
      local_c4 = *(undefined4 *)(param_1 + 0x78);
      uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_c4);
      uVar12 = FUN_015f6780(*(undefined8 *)PTR_DAT_033f35a8,uVar12,0);
      FUN_0160c8e8(plVar10,uVar12,0);
      local_c8 = *(undefined4 *)(param_1 + 0x74);
      uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_c8);
      uVar12 = FUN_015f6780(*(undefined8 *)FullSerializer_fsConverterRegistrar_TypeInfo,uVar12,0);
    }
    FUN_0160c8e8(plVar10,uVar12,0);
    (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


