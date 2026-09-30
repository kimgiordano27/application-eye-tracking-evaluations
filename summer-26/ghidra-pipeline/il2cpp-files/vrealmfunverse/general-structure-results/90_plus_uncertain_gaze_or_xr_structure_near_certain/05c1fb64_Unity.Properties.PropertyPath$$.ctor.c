/*
FUNCTION_NAME: Unity.Properties.PropertyPath$$.ctor
ENTRY_POINT: 05c1fb64
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 128
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_7;ray_or_cast_sink_hits_8;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_Properties_PropertyPath___ctor(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint uVar4;
  long lVar5;
  uint uStack0000000000000004;
  uint in_stack_00000008;
  undefined4 uStack000000000000000c;
  uint in_stack_00000010;
  uint uStack0000000000000014;
  undefined8 in_stack_00000058;
  
  uVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody();
  FUN_04c00984(*(undefined8 *)Method_OVRObjectPool_Return<List<OVRAnchor_DeferredValue>>__,uVar2,0);
  FUN_04c16810();
  uStack0000000000000014 = *(uint *)(unaff_x19 + 0x4c) & 0x30;
  uVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)Method_OVRObjectPool_List<OVRSpaceUser>__,&stack0x00000014);
  FUN_04c00984(*(undefined8 *)Method_OVRPassthroughColorLut_GetArraySize<Color32>__,uVar2,0);
  FUN_04c16810();
  in_stack_00000010 = *(uint *)(unaff_x19 + 0x4c) & 0x300;
  uVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)Method_OVRObjectPool_List<OVRSpatialAnchor>__,&stack0x00000010);
  FUN_04c00984(*(undefined8 *)Method_OVRPassthroughLayer_OnPassthroughLayerResumed__,uVar2,0);
  FUN_04c16810();
  uStack000000000000000c = *(undefined4 *)(unaff_x19 + 0x50);
  uVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)
                      Method_OVRObjectPool_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__,
                     &stack0x0000000c);
  FUN_04c00984(*(undefined8 *)Method_OVRPassthroughColorLut_GetChannelsForTextureFormat__,uVar2,0);
  FUN_04c16810();
  in_stack_00000008 = *(uint *)(unaff_x19 + 0x54) & 0x30;
  uVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)Method_OVRObjectPool_Return<List<Guid>>__,&stack0x00000008);
  FUN_04c00984(*(undefined8 *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__,uVar2,0);
  FUN_04c16810();
  uStack0000000000000004 = *(uint *)(unaff_x19 + 0x54) & 0xf;
  uVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)Method_OVRObjectPool_Return<List<IntPtr>>__,&stack0x00000004);
  FUN_04c00984(*(undefined8 *)Method_OVRPassthroughColorLut_GetTextureSizeFromByteArray__,uVar2,0);
  FUN_04c16810();
  lVar3 = FUN_05c1f310();
  puVar1 = Method_OVRPermissionsRequester_GetPermissionId__;
  if (lVar3 != 0) {
    uVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*(undefined8 *)(unaff_x21 + 0x48));
    FUN_04c00984(*(undefined8 *)puVar1,uVar2,0);
    FUN_04c16810();
    lVar3 = FUN_05c1f310();
    puVar1 = Method_OVRPassthroughColorLut_IsValidLutUpdate<Color32>__;
    if (lVar3 != 0) {
      lVar5 = 0;
      do {
        uVar4 = (uint)lVar5;
        if (*(int *)(lVar3 + 0x18) <= (int)uVar4) {
          (**(code **)(*unaff_x20 + 0x168))();
          return;
        }
        lVar3 = FUN_05c1f310();
        if (lVar3 == 0) break;
        if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar3 = *(long *)(lVar3 + lVar5 * 8 + 0x20);
        in_stack_00000058._4_4_ = uVar4;
        uVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(unaff_x21 + 0x48),(long)&stack0x00000058 + 4);
        if (lVar3 == 0) break;
        FUN_04c0af6c(*(undefined8 *)puVar1,uVar2,*(undefined8 *)(lVar3 + 0x10),
                     *(undefined8 *)(lVar3 + 0x18),0);
        FUN_04c16810();
        lVar3 = FUN_05c1f310();
        lVar5 = lVar5 + 1;
      } while (lVar3 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


