/*
FUNCTION_NAME: Unity.Properties.PropertyPathPart$$.ctor
ENTRY_POINT: 05c1f6f8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 148
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_8;ray_or_cast_sink_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_Properties_PropertyPathPart___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *puVar10;
  uint uVar11;
  long unaff_x23;
  undefined8 *puVar12;
  long lVar13;
  long unaff_x24;
  undefined8 *puVar14;
  uint uStack0000000000000004;
  uint in_stack_00000008;
  undefined4 uStack000000000000000c;
  uint in_stack_00000010;
  uint uStack0000000000000014;
  uint in_stack_00000018;
  uint uStack000000000000001c;
  undefined4 in_stack_00000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000044;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  uint uStack0000000000000058;
  uint uStack000000000000005c;
  
  puVar7 = Method_OVRPassthroughLayer_SetColorMap__;
  puVar6 = Method_OVRPassthroughColorLut_GetArraySize<Color>__;
  puVar5 = Method_OVROverlayCanvas_TMPChanged_OnTextChanged__;
  puVar4 = Method_OVRObjectPool_Return<LogEntry>__;
  puVar3 = Method_OVRNativeList_WithSuggestedCapacityFrom<Type>__;
  puVar2 = Method_OVRNativeList_WithSuggestedCapacityFrom<OVRAnchor>__;
  puVar10 = *(undefined8 **)(unaff_x21 + 0x580);
  puVar14 = *(undefined8 **)(unaff_x24 + 0x638);
  puVar12 = *(undefined8 **)(unaff_x23 + 0x650);
  FUN_04c16810();
  uStack0000000000000058 = *(uint *)(unaff_x19 + 0x10) & 3;
  uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*puVar10,&stack0x00000058);
  FUN_04c00984(*puVar14,uVar8,0);
  FUN_04c16810();
  puVar1 = PTR_DAT_06312310;
  uStack0000000000000054 = *(undefined4 *)(unaff_x19 + 0x14);
  uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&stack0x00000054);
  FUN_04c00984(*puVar12,uVar8,0);
  FUN_04c16810();
  in_stack_00000050 = *(undefined4 *)(unaff_x19 + 0x18);
  uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(puVar1 + 0x78),&stack0x00000050);
  FUN_04c00984(*(undefined8 *)puVar4,uVar8,0);
  FUN_04c16810();
  uStack000000000000004c = *(undefined4 *)(unaff_x19 + 0x1c);
  uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(puVar1 + 0x48),&stack0x0000004c);
  FUN_04c00984(*(undefined8 *)puVar5,uVar8,0);
  FUN_04c16810();
  in_stack_00000048 = *(undefined4 *)(unaff_x19 + 0x20);
  uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)puVar3,&stack0x00000048);
  FUN_04c00984(*(undefined8 *)puVar6,uVar8,0);
  FUN_04c16810();
  uStack0000000000000044 = *(undefined4 *)(unaff_x19 + 0x24);
  uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)puVar2,&stack0x00000044);
  FUN_04c00984(*(undefined8 *)puVar7,uVar8,0);
  FUN_04c16810();
  in_stack_00000040 = *(undefined4 *)(unaff_x19 + 0x28);
  uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)Method_OVRNativeList_WithSuggestedCapacityFrom<OVRSpaceUser>__,
                     &stack0x00000040);
  FUN_04c00984(*(undefined8 *)Method_OVRPassthroughColorLut_IsValidLutUpdate<Color>__,uVar8,0);
  FUN_04c16810();
  uStack000000000000003c = *(undefined4 *)(unaff_x19 + 0x2c);
  uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(puVar1 + 0x48),&stack0x0000003c);
  FUN_04c00984(*(undefined8 *)Method_OVRPassthroughColorLut_GetTextureSize__,uVar8,0);
  FUN_04c16810();
  in_stack_00000038 = *(undefined4 *)(unaff_x19 + 0x30);
  uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(puVar1 + 0x48),&stack0x00000038);
  FUN_04c00984(*(undefined8 *)Method_OVRObjectPool_Return<List<OVRSpatialAnchor>>__,uVar8,0);
  FUN_04c16810();
  uStack0000000000000034 = *(undefined4 *)(unaff_x19 + 0x34);
  uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)Method_OVRObjectPool_HashSet<Guid>__,&stack0x00000034);
  FUN_04c00984(*(undefined8 *)Method_OVRObjectPool_Return<Guid>__,uVar8,0);
  FUN_04c16810();
  in_stack_00000030 = *(undefined4 *)(unaff_x19 + 0x38);
  uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)Method_OVRObjectPool_Get<LogEntry>__,&stack0x00000030);
  FUN_04c00984(*(undefined8 *)Method_OVRPassthroughColorLut_RefreshIfInitialized__,uVar8,0);
  FUN_04c16810();
  uStack000000000000002c = *(undefined4 *)(unaff_x19 + 0x3c);
  uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)Method_OVRObjectPool_List<Guid>__,&stack0x0000002c);
  FUN_04c00984(*(undefined8 *)Method_OVRObjectPool_Return<List<OVRSpaceUser>>__,uVar8,0);
  FUN_04c16810();
  in_stack_00000028 = *(undefined4 *)(unaff_x19 + 0x40);
  uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(puVar1 + 0x48),&stack0x00000028);
  FUN_04c00984(*(undefined8 *)Method_OVROverlay_HandleBeginCameraRendering__,uVar8,0);
  FUN_04c16810();
  uStack0000000000000024 = *(undefined4 *)(unaff_x19 + 0x44);
  uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(puVar1 + 0x48),&stack0x00000024);
  FUN_04c00984(*(undefined8 *)Method_OVRPassthroughColorLut__ctor__,uVar8,0);
  FUN_04c16810();
  in_stack_00000020 = *(undefined4 *)(unaff_x19 + 0x48);
  uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(puVar1 + 0x48),&stack0x00000020);
  FUN_04c00984(*(undefined8 *)Method_OVROverlay_HandlePreRender__,uVar8,0);
  FUN_04c16810();
  uStack000000000000001c = *(uint *)(unaff_x19 + 0x4c) & 0xc0;
  uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)Method_OVRObjectPool_List<IntPtr>__,&stack0x0000001c);
  FUN_04c00984(*(undefined8 *)
                Method_OVRObjectPool_Return<List<OVRPlugin_Qpl_Annotation_Builder_Entry>>__,uVar8,0)
  ;
  FUN_04c16810();
  in_stack_00000018 = *(uint *)(unaff_x19 + 0x4c) & 0xf;
  uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)Method_OVRObjectPool_List<OVRAnchor_DeferredValue>__,
                     &stack0x00000018);
  FUN_04c00984(*(undefined8 *)Method_OVRObjectPool_Return<List<OVRAnchor_DeferredValue>>__,uVar8,0);
  FUN_04c16810();
  uStack0000000000000014 = *(uint *)(unaff_x19 + 0x4c) & 0x30;
  uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)Method_OVRObjectPool_List<OVRSpaceUser>__,&stack0x00000014);
  FUN_04c00984(*(undefined8 *)Method_OVRPassthroughColorLut_GetArraySize<Color32>__,uVar8,0);
  FUN_04c16810();
  in_stack_00000010 = *(uint *)(unaff_x19 + 0x4c) & 0x300;
  uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)Method_OVRObjectPool_List<OVRSpatialAnchor>__,&stack0x00000010);
  FUN_04c00984(*(undefined8 *)Method_OVRPassthroughLayer_OnPassthroughLayerResumed__,uVar8,0);
  FUN_04c16810();
  uStack000000000000000c = *(undefined4 *)(unaff_x19 + 0x50);
  uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)
                      Method_OVRObjectPool_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__,
                     &stack0x0000000c);
  FUN_04c00984(*(undefined8 *)Method_OVRPassthroughColorLut_GetChannelsForTextureFormat__,uVar8,0);
  FUN_04c16810();
  in_stack_00000008 = *(uint *)(unaff_x19 + 0x54) & 0x30;
  uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)Method_OVRObjectPool_Return<List<Guid>>__,&stack0x00000008);
  FUN_04c00984(*(undefined8 *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__,uVar8,0);
  FUN_04c16810();
  uStack0000000000000004 = *(uint *)(unaff_x19 + 0x54) & 0xf;
  uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)Method_OVRObjectPool_Return<List<IntPtr>>__,&stack0x00000004);
  FUN_04c00984(*(undefined8 *)Method_OVRPassthroughColorLut_GetTextureSizeFromByteArray__,uVar8,0);
  FUN_04c16810();
  lVar9 = FUN_05c1f310();
  puVar2 = Method_OVRPermissionsRequester_GetPermissionId__;
  if (lVar9 != 0) {
    uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*(undefined8 *)(puVar1 + 0x48));
    FUN_04c00984(*(undefined8 *)puVar2,uVar8,0);
    FUN_04c16810();
    lVar9 = FUN_05c1f310();
    puVar2 = Method_OVRPassthroughColorLut_IsValidLutUpdate<Color32>__;
    if (lVar9 != 0) {
      lVar13 = 0;
      do {
        uVar11 = (uint)lVar13;
        if (*(int *)(lVar9 + 0x18) <= (int)uVar11) {
          (**(code **)(*unaff_x20 + 0x168))();
          return;
        }
        lVar9 = FUN_05c1f310();
        if (lVar9 == 0) break;
        if (*(uint *)(lVar9 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar9 = *(long *)(lVar9 + lVar13 * 8 + 0x20);
        uStack000000000000005c = uVar11;
        uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(puVar1 + 0x48),(long)&stack0x00000058 + 4);
        if (lVar9 == 0) break;
        FUN_04c0af6c(*(undefined8 *)puVar2,uVar8,*(undefined8 *)(lVar9 + 0x10),
                     *(undefined8 *)(lVar9 + 0x18),0);
        FUN_04c16810();
        lVar9 = FUN_05c1f310();
        lVar13 = lVar13 + 1;
      } while (lVar9 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


