/*
FUNCTION_NAME: Unity.Properties.PropertyPathPart$$CheckKind
ENTRY_POINT: 05c1f74c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 134
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_8;ray_or_cast_sink_hits_21;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_Properties_PropertyPathPart__CheckKind(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint in_w8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x22;
  uint uVar5;
  undefined8 *unaff_x23;
  long lVar6;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
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
  
  uStack0000000000000058 = in_w8 & 3;
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(param_1,&stack0x00000058);
  FUN_04c00984(*unaff_x24,uVar3,0);
  FUN_04c16810();
  puVar1 = PTR_DAT_06312310;
  uStack0000000000000054 = *(undefined4 *)(unaff_x19 + 0x14);
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&stack0x00000054);
  FUN_04c00984(*unaff_x23,uVar3,0);
  FUN_04c16810();
  in_stack_00000050 = *(undefined4 *)(unaff_x19 + 0x18);
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(puVar1 + 0x78),&stack0x00000050);
  FUN_04c00984(*unaff_x22,uVar3,0);
  FUN_04c16810();
  uStack000000000000004c = *(undefined4 *)(unaff_x19 + 0x1c);
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(puVar1 + 0x48),&stack0x0000004c);
  FUN_04c00984(*unaff_x29,uVar3,0);
  FUN_04c16810();
  in_stack_00000048 = *(undefined4 *)(unaff_x19 + 0x20);
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*unaff_x28,&stack0x00000048);
  FUN_04c00984(*unaff_x27,uVar3,0);
  FUN_04c16810();
  uStack0000000000000044 = *(undefined4 *)(unaff_x19 + 0x24);
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*unaff_x26,&stack0x00000044);
  FUN_04c00984(*unaff_x25,uVar3,0);
  FUN_04c16810();
  in_stack_00000040 = *(undefined4 *)(unaff_x19 + 0x28);
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)Method_OVRNativeList_WithSuggestedCapacityFrom<OVRSpaceUser>__,
                     &stack0x00000040);
  FUN_04c00984(*(undefined8 *)Method_OVRPassthroughColorLut_IsValidLutUpdate<Color>__,uVar3,0);
  FUN_04c16810();
  uStack000000000000003c = *(undefined4 *)(unaff_x19 + 0x2c);
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(puVar1 + 0x48),&stack0x0000003c);
  FUN_04c00984(*(undefined8 *)Method_OVRPassthroughColorLut_GetTextureSize__,uVar3,0);
  FUN_04c16810();
  in_stack_00000038 = *(undefined4 *)(unaff_x19 + 0x30);
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(puVar1 + 0x48),&stack0x00000038);
  FUN_04c00984(*(undefined8 *)Method_OVRObjectPool_Return<List<OVRSpatialAnchor>>__,uVar3,0);
  FUN_04c16810();
  uStack0000000000000034 = *(undefined4 *)(unaff_x19 + 0x34);
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)Method_OVRObjectPool_HashSet<Guid>__,&stack0x00000034);
  FUN_04c00984(*(undefined8 *)Method_OVRObjectPool_Return<Guid>__,uVar3,0);
  FUN_04c16810();
  in_stack_00000030 = *(undefined4 *)(unaff_x19 + 0x38);
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)Method_OVRObjectPool_Get<LogEntry>__,&stack0x00000030);
  FUN_04c00984(*(undefined8 *)Method_OVRPassthroughColorLut_RefreshIfInitialized__,uVar3,0);
  FUN_04c16810();
  uStack000000000000002c = *(undefined4 *)(unaff_x19 + 0x3c);
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)Method_OVRObjectPool_List<Guid>__,&stack0x0000002c);
  FUN_04c00984(*(undefined8 *)Method_OVRObjectPool_Return<List<OVRSpaceUser>>__,uVar3,0);
  FUN_04c16810();
  in_stack_00000028 = *(undefined4 *)(unaff_x19 + 0x40);
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(puVar1 + 0x48),&stack0x00000028);
  FUN_04c00984(*(undefined8 *)Method_OVROverlay_HandleBeginCameraRendering__,uVar3,0);
  FUN_04c16810();
  uStack0000000000000024 = *(undefined4 *)(unaff_x19 + 0x44);
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(puVar1 + 0x48),&stack0x00000024);
  FUN_04c00984(*(undefined8 *)Method_OVRPassthroughColorLut__ctor__,uVar3,0);
  FUN_04c16810();
  in_stack_00000020 = *(undefined4 *)(unaff_x19 + 0x48);
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(puVar1 + 0x48),&stack0x00000020);
  FUN_04c00984(*(undefined8 *)Method_OVROverlay_HandlePreRender__,uVar3,0);
  FUN_04c16810();
  uStack000000000000001c = *(uint *)(unaff_x19 + 0x4c) & 0xc0;
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)Method_OVRObjectPool_List<IntPtr>__,&stack0x0000001c);
  FUN_04c00984(*(undefined8 *)
                Method_OVRObjectPool_Return<List<OVRPlugin_Qpl_Annotation_Builder_Entry>>__,uVar3,0)
  ;
  FUN_04c16810();
  in_stack_00000018 = *(uint *)(unaff_x19 + 0x4c) & 0xf;
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)Method_OVRObjectPool_List<OVRAnchor_DeferredValue>__,
                     &stack0x00000018);
  FUN_04c00984(*(undefined8 *)Method_OVRObjectPool_Return<List<OVRAnchor_DeferredValue>>__,uVar3,0);
  FUN_04c16810();
  uStack0000000000000014 = *(uint *)(unaff_x19 + 0x4c) & 0x30;
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)Method_OVRObjectPool_List<OVRSpaceUser>__,&stack0x00000014);
  FUN_04c00984(*(undefined8 *)Method_OVRPassthroughColorLut_GetArraySize<Color32>__,uVar3,0);
  FUN_04c16810();
  in_stack_00000010 = *(uint *)(unaff_x19 + 0x4c) & 0x300;
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)Method_OVRObjectPool_List<OVRSpatialAnchor>__,&stack0x00000010);
  FUN_04c00984(*(undefined8 *)Method_OVRPassthroughLayer_OnPassthroughLayerResumed__,uVar3,0);
  FUN_04c16810();
  uStack000000000000000c = *(undefined4 *)(unaff_x19 + 0x50);
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)
                      Method_OVRObjectPool_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__,
                     &stack0x0000000c);
  FUN_04c00984(*(undefined8 *)Method_OVRPassthroughColorLut_GetChannelsForTextureFormat__,uVar3,0);
  FUN_04c16810();
  in_stack_00000008 = *(uint *)(unaff_x19 + 0x54) & 0x30;
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)Method_OVRObjectPool_Return<List<Guid>>__,&stack0x00000008);
  FUN_04c00984(*(undefined8 *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__,uVar3,0);
  FUN_04c16810();
  uStack0000000000000004 = *(uint *)(unaff_x19 + 0x54) & 0xf;
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)Method_OVRObjectPool_Return<List<IntPtr>>__,&stack0x00000004);
  FUN_04c00984(*(undefined8 *)Method_OVRPassthroughColorLut_GetTextureSizeFromByteArray__,uVar3,0);
  FUN_04c16810();
  lVar4 = FUN_05c1f310();
  puVar2 = Method_OVRPermissionsRequester_GetPermissionId__;
  if (lVar4 != 0) {
    uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*(undefined8 *)(puVar1 + 0x48));
    FUN_04c00984(*(undefined8 *)puVar2,uVar3,0);
    FUN_04c16810();
    lVar4 = FUN_05c1f310();
    puVar2 = Method_OVRPassthroughColorLut_IsValidLutUpdate<Color32>__;
    if (lVar4 != 0) {
      lVar6 = 0;
      do {
        uVar5 = (uint)lVar6;
        if (*(int *)(lVar4 + 0x18) <= (int)uVar5) {
          (**(code **)(*unaff_x20 + 0x168))();
          return;
        }
        lVar4 = FUN_05c1f310();
        if (lVar4 == 0) break;
        if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar4 = *(long *)(lVar4 + lVar6 * 8 + 0x20);
        uStack000000000000005c = uVar5;
        uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(puVar1 + 0x48),(long)&stack0x00000058 + 4);
        if (lVar4 == 0) break;
        FUN_04c0af6c(*(undefined8 *)puVar2,uVar3,*(undefined8 *)(lVar4 + 0x10),
                     *(undefined8 *)(lVar4 + 0x18),0);
        FUN_04c16810();
        lVar4 = FUN_05c1f310();
        lVar6 = lVar6 + 1;
      } while (lVar4 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


