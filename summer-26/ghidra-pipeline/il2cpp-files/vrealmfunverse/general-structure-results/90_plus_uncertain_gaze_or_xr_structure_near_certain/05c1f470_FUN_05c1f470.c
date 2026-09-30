/*
FUNCTION_NAME: FUN_05c1f470
ENTRY_POINT: 05c1f470
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 168
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_10;validity_or_gating_hits_14;ray_or_cast_sink_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05c1f470(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  undefined4 local_c0;
  uint local_bc;
  uint local_b8;
  undefined4 local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  uint local_64;
  
  puVar3 = Method_OVRNativeList_ToNativeList<Guid>__;
  puVar2 = Method_OVRMicrogesturesSample_<Start>b__19_1__;
  puVar1 = PTR_DAT_0631c5b8;
  if ((DAT_066d5f80 & 1) == 0) {
    FUN_02b3c81c(Method_OVRMicrogesturesSample_<Start>b__19_1__);
    FUN_02b3c81c(
                Method_OVRNativeList_WithSuggestedCapacityFrom<KeyValuePair<OVRAnchor,_Transform>>__
                );
    FUN_02b3c81c(Method_OVRNativeList_WithSuggestedCapacityFrom<OVRAnchor>__);
    FUN_02b3c81c(Method_OVRNativeList_WithSuggestedCapacityFrom<OVRSpaceUser>__);
    FUN_02b3c81c(Method_OVRNativeList_WithSuggestedCapacityFrom<Type>__);
    FUN_02b3c81c(Method_OVRObjectPool_Get<LogEntry>__);
    FUN_02b3c81c(Method_OVRObjectPool_HashSet<Guid>__);
    FUN_02b3c81c(Method_OVRObjectPool_List<Guid>__);
    FUN_02b3c81c(Method_OVRObjectPool_List<IntPtr>__);
    FUN_02b3c81c(Method_OVRObjectPool_List<OVRSpaceUser>__);
    FUN_02b3c81c(Method_OVRObjectPool_List<OVRSpatialAnchor>__);
    FUN_02b3c81c(Method_OVRObjectPool_List<OVRAnchor_DeferredValue>__);
    FUN_02b3c81c(Method_OVRObjectPool_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__);
    FUN_02b3c81c(Method_OVRObjectPool_Return<List<Guid>>__);
    FUN_02b3c81c(Method_OVRObjectPool_Return<List<IntPtr>>__);
    FUN_02b3c81c(PTR_DAT_0631c5b8);
    FUN_02b3c81c(Method_OVRObjectPool_Return<List<OVRSpaceUser>>__);
    FUN_02b3c81c(Method_OVRObjectPool_Return<List<OVRSpatialAnchor>>__);
    FUN_02b3c81c(Method_OVRObjectPool_Return<List<OVRAnchor_DeferredValue>>__);
    FUN_02b3c81c(Method_OVRObjectPool_Return<List<OVRPlugin_Qpl_Annotation_Builder_Entry>>__);
    FUN_02b3c81c(Method_OVRObjectPool_Return<Guid>__);
    FUN_02b3c81c(Method_OVRObjectPool_Return<LogEntry>__);
    FUN_02b3c81c(Method_OVROverlay_HandleBeginCameraRendering__);
    FUN_02b3c81c(Method_OVROverlay_HandlePreRender__);
    FUN_02b3c81c(Method_OVROverlayCanvas_TMPChanged_OnTextChanged__);
    FUN_02b3c81c(Method_OVRPassthroughColorLut_GetArraySize<byte>__);
    FUN_02b3c81c(Method_OVRPassthroughColorLut_GetArraySize<Color>__);
    FUN_02b3c81c(Method_OVRPassthroughColorLut_GetArraySize<Color32>__);
    FUN_02b3c81c(Method_OVRPassthroughColorLut_IsValidLutUpdate<byte>__);
    FUN_02b3c81c(Method_OVRPassthroughColorLut_IsValidLutUpdate<Color>__);
    FUN_02b3c81c(Method_OVRPassthroughColorLut_IsValidLutUpdate<Color32>__);
    FUN_02b3c81c(Method_OVRPassthroughColorLut__ctor__);
    FUN_02b3c81c(Method_OVRPassthroughColorLut_GetChannelsForTextureFormat__);
    FUN_02b3c81c(Method_OVRPassthroughColorLut_GetTextureSize__);
    FUN_02b3c81c(Method_OVRPassthroughColorLut_GetTextureSizeFromByteArray__);
    FUN_02b3c81c(Method_OVRPassthroughColorLut_RefreshIfInitialized__);
    FUN_02b3c81c(Method_OVRPassthroughLayer_OnPassthroughLayerResumed__);
    FUN_02b3c81c(Method_OVRPassthroughLayer_SetColorMap__);
    FUN_02b3c81c(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
    FUN_02b3c81c(Method_OVRNativeList_ToNativeList<Guid>__);
    FUN_02b3c81c(Method_OVRPermissionsRequester_GetPermissionId__);
    DAT_066d5f80 = 1;
  }
  plVar10 = (long *)thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_04c149dc(plVar10,0);
  local_64 = *(uint *)(param_1 + 0x10) & 0xc;
  uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*(undefined8 *)puVar2,&local_64);
  uVar11 = FUN_04c00984(*(undefined8 *)puVar3,uVar11,0);
  puVar9 = Method_OVRPassthroughLayer_SetColorMap__;
  puVar8 = Method_OVRPassthroughColorLut_IsValidLutUpdate<byte>__;
  puVar7 = Method_OVRPassthroughColorLut_GetArraySize<Color>__;
  puVar6 = Method_OVRPassthroughColorLut_GetArraySize<byte>__;
  puVar5 = Method_OVROverlayCanvas_TMPChanged_OnTextChanged__;
  puVar4 = Method_OVRObjectPool_Return<LogEntry>__;
  puVar3 = Method_OVRNativeList_WithSuggestedCapacityFrom<Type>__;
  puVar2 = Method_OVRNativeList_WithSuggestedCapacityFrom<OVRAnchor>__;
  puVar1 = Method_OVRNativeList_WithSuggestedCapacityFrom<KeyValuePair<OVRAnchor,_Transform>>__;
  if (plVar10 != (long *)0x0) {
    FUN_04c16810(plVar10,uVar11,0);
    local_68 = *(uint *)(param_1 + 0x10) & 3;
    uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*(undefined8 *)puVar1,&local_68);
    uVar11 = FUN_04c00984(*(undefined8 *)puVar6,uVar11,0);
    FUN_04c16810(plVar10,uVar11,0);
    puVar1 = PTR_DAT_06312310;
    local_6c = *(undefined4 *)(param_1 + 0x14);
    uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_6c);
    uVar11 = FUN_04c00984(*(undefined8 *)puVar8,uVar11,0);
    FUN_04c16810(plVar10,uVar11,0);
    local_70 = *(undefined4 *)(param_1 + 0x18);
    uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)(puVar1 + 0x78),&local_70);
    uVar11 = FUN_04c00984(*(undefined8 *)puVar4,uVar11,0);
    FUN_04c16810(plVar10,uVar11,0);
    local_74 = *(undefined4 *)(param_1 + 0x1c);
    uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)(puVar1 + 0x48),&local_74);
    uVar11 = FUN_04c00984(*(undefined8 *)puVar5,uVar11,0);
    FUN_04c16810(plVar10,uVar11,0);
    local_78 = *(undefined4 *)(param_1 + 0x20);
    uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*(undefined8 *)puVar3,&local_78);
    uVar11 = FUN_04c00984(*(undefined8 *)puVar7,uVar11,0);
    FUN_04c16810(plVar10,uVar11,0);
    local_7c = *(undefined4 *)(param_1 + 0x24);
    uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*(undefined8 *)puVar2,&local_7c);
    uVar11 = FUN_04c00984(*(undefined8 *)puVar9,uVar11,0);
    FUN_04c16810(plVar10,uVar11,0);
    local_80 = *(undefined4 *)(param_1 + 0x28);
    uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)
                         Method_OVRNativeList_WithSuggestedCapacityFrom<OVRSpaceUser>__,&local_80);
    uVar11 = FUN_04c00984(*(undefined8 *)Method_OVRPassthroughColorLut_IsValidLutUpdate<Color>__,
                          uVar11,0);
    FUN_04c16810(plVar10,uVar11,0);
    local_84 = *(undefined4 *)(param_1 + 0x2c);
    uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)(puVar1 + 0x48),&local_84);
    uVar11 = FUN_04c00984(*(undefined8 *)Method_OVRPassthroughColorLut_GetTextureSize__,uVar11,0);
    FUN_04c16810(plVar10,uVar11,0);
    local_88 = *(undefined4 *)(param_1 + 0x30);
    uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)(puVar1 + 0x48),&local_88);
    uVar11 = FUN_04c00984(*(undefined8 *)Method_OVRObjectPool_Return<List<OVRSpatialAnchor>>__,
                          uVar11,0);
    FUN_04c16810(plVar10,uVar11,0);
    local_8c = *(undefined4 *)(param_1 + 0x34);
    uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)Method_OVRObjectPool_HashSet<Guid>__,&local_8c);
    uVar11 = FUN_04c00984(*(undefined8 *)Method_OVRObjectPool_Return<Guid>__,uVar11,0);
    FUN_04c16810(plVar10,uVar11,0);
    local_90 = *(undefined4 *)(param_1 + 0x38);
    uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)Method_OVRObjectPool_Get<LogEntry>__,&local_90);
    uVar11 = FUN_04c00984(*(undefined8 *)Method_OVRPassthroughColorLut_RefreshIfInitialized__,uVar11
                          ,0);
    FUN_04c16810(plVar10,uVar11,0);
    local_94 = *(undefined4 *)(param_1 + 0x3c);
    uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)Method_OVRObjectPool_List<Guid>__,&local_94);
    uVar11 = FUN_04c00984(*(undefined8 *)Method_OVRObjectPool_Return<List<OVRSpaceUser>>__,uVar11,0)
    ;
    FUN_04c16810(plVar10,uVar11,0);
    local_98 = *(undefined4 *)(param_1 + 0x40);
    uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)(puVar1 + 0x48),&local_98);
    uVar11 = FUN_04c00984(*(undefined8 *)Method_OVROverlay_HandleBeginCameraRendering__,uVar11,0);
    FUN_04c16810(plVar10,uVar11,0);
    local_9c = *(undefined4 *)(param_1 + 0x44);
    uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)(puVar1 + 0x48),&local_9c);
    uVar11 = FUN_04c00984(*(undefined8 *)Method_OVRPassthroughColorLut__ctor__,uVar11,0);
    FUN_04c16810(plVar10,uVar11,0);
    local_a0 = *(undefined4 *)(param_1 + 0x48);
    uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)(puVar1 + 0x48),&local_a0);
    uVar11 = FUN_04c00984(*(undefined8 *)Method_OVROverlay_HandlePreRender__,uVar11,0);
    FUN_04c16810(plVar10,uVar11,0);
    local_a4 = *(uint *)(param_1 + 0x4c) & 0xc0;
    uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)Method_OVRObjectPool_List<IntPtr>__,&local_a4);
    uVar11 = FUN_04c00984(*(undefined8 *)
                           Method_OVRObjectPool_Return<List<OVRPlugin_Qpl_Annotation_Builder_Entry>>__
                          ,uVar11,0);
    FUN_04c16810(plVar10,uVar11,0);
    local_a8 = *(uint *)(param_1 + 0x4c) & 0xf;
    uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)Method_OVRObjectPool_List<OVRAnchor_DeferredValue>__,
                        &local_a8);
    uVar11 = FUN_04c00984(*(undefined8 *)
                           Method_OVRObjectPool_Return<List<OVRAnchor_DeferredValue>>__,uVar11,0);
    FUN_04c16810(plVar10,uVar11,0);
    local_ac = *(uint *)(param_1 + 0x4c) & 0x30;
    uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)Method_OVRObjectPool_List<OVRSpaceUser>__,&local_ac);
    uVar11 = FUN_04c00984(*(undefined8 *)Method_OVRPassthroughColorLut_GetArraySize<Color32>__,
                          uVar11,0);
    FUN_04c16810(plVar10,uVar11,0);
    local_b0 = *(uint *)(param_1 + 0x4c) & 0x300;
    uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)Method_OVRObjectPool_List<OVRSpatialAnchor>__,&local_b0);
    uVar11 = FUN_04c00984(*(undefined8 *)Method_OVRPassthroughLayer_OnPassthroughLayerResumed__,
                          uVar11,0);
    FUN_04c16810(plVar10,uVar11,0);
    local_b4 = *(undefined4 *)(param_1 + 0x50);
    uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)
                         Method_OVRObjectPool_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__,
                        &local_b4);
    uVar11 = FUN_04c00984(*(undefined8 *)Method_OVRPassthroughColorLut_GetChannelsForTextureFormat__
                          ,uVar11,0);
    FUN_04c16810(plVar10,uVar11,0);
    local_b8 = *(uint *)(param_1 + 0x54) & 0x30;
    uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)Method_OVRObjectPool_Return<List<Guid>>__,&local_b8);
    uVar11 = FUN_04c00984(*(undefined8 *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__,
                          uVar11,0);
    FUN_04c16810(plVar10,uVar11,0);
    local_bc = *(uint *)(param_1 + 0x54) & 0xf;
    uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)Method_OVRObjectPool_Return<List<IntPtr>>__,&local_bc);
    uVar11 = FUN_04c00984(*(undefined8 *)Method_OVRPassthroughColorLut_GetTextureSizeFromByteArray__
                          ,uVar11,0);
    FUN_04c16810(plVar10,uVar11,0);
    lVar12 = FUN_05c1f310(param_1);
    puVar2 = Method_OVRPermissionsRequester_GetPermissionId__;
    if (lVar12 != 0) {
      local_c0 = (undefined4)*(undefined8 *)(lVar12 + 0x18);
      uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                         (*(undefined8 *)(puVar1 + 0x48),&local_c0);
      uVar11 = FUN_04c00984(*(undefined8 *)puVar2,uVar11,0);
      FUN_04c16810(plVar10,uVar11,0);
      lVar12 = FUN_05c1f310(param_1);
      puVar2 = Method_OVRPassthroughColorLut_IsValidLutUpdate<Color32>__;
      if (lVar12 != 0) {
        lVar14 = 0;
        do {
          uVar13 = (uint)lVar14;
          if (*(int *)(lVar12 + 0x18) <= (int)uVar13) {
            (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
            return;
          }
          lVar12 = FUN_05c1f310(param_1);
          if (lVar12 == 0) break;
          if (*(uint *)(lVar12 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          lVar12 = *(long *)(lVar12 + lVar14 * 8 + 0x20);
          local_64 = uVar13;
          uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(puVar1 + 0x48),&local_64);
          if (lVar12 == 0) break;
          uVar11 = FUN_04c0af6c(*(undefined8 *)puVar2,uVar11,*(undefined8 *)(lVar12 + 0x10),
                                *(undefined8 *)(lVar12 + 0x18),0);
          FUN_04c16810(plVar10,uVar11,0);
          lVar12 = FUN_05c1f310(param_1);
          lVar14 = lVar14 + 1;
        } while (lVar12 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


