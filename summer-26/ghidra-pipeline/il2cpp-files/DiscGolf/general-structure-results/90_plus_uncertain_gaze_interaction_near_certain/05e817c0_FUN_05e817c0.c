/*
FUNCTION_NAME: FUN_05e817c0
ENTRY_POINT: 05e817c0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 207
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_18;weak_xr_or_state_hits_18;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_21;ui_or_gameplay_sink_hits_17;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_17;functionality_possible_biometrics_hits_4
*/


long FUN_05e817c0(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined *puVar13;
  
  puVar13 = Method_Unity_Services_Authentication_Shared_Multimap<string,_string>_GetEnumerator__;
  if ((DAT_06dc3c36 & 1) == 0) {
    FUN_02d965b8(
                Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2EntityAssetType>_Dispose__
                );
    FUN_02d965b8(
                Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2EntityAssetType>_GetEnumerator__
                );
    FUN_02d965b8(
                Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2EntityAssetType>_ToArray__
                );
    FUN_02d965b8(
                Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2EntityAssetType>_op_Implicit__
                );
    FUN_02d965b8(
                Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2NodeId>_Dispose__
                );
    FUN_02d965b8(
                Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2NodeId>_ToArray__
                );
    FUN_02d965b8(
                Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2NodeId>_get_Length__
                );
    FUN_02d965b8(
                Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2NodeId>_op_Implicit__
                );
    FUN_02d965b8(Method_OVRMeshJobs_NativeArrayHelper<short>__ctor__);
    FUN_02d965b8(Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__);
    FUN_02d965b8(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__ctor__);
    FUN_02d965b8(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>_Dispose__);
    FUN_02d965b8(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    FUN_02d965b8(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>_Dispose__);
    FUN_02d965b8(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__ctor__);
    FUN_02d965b8(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__);
    FUN_02d965b8(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__);
    FUN_02d965b8(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<int>>__ctor__
                );
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<int>>_GetEnumerator__
                );
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<float>>__ctor__
                );
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<float>>_GetEnumerator__
                );
    FUN_02d965b8(
                Method_Unity_Services_Authentication_Shared_Multimap<string,_string>_GetEnumerator__
                );
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<Vector3>>__ctor__
                );
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<Vector3>>_GetEnumerator__
                );
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<Vector4>>__ctor__
                );
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<Vector4>>_GetEnumerator__
                );
    FUN_02d965b8(Method_Unity_Collections_NativeArray<AttachmentDescriptor>_op_Implicit__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<BoneWeight>__ctor__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<BoneWeight>_Dispose__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<BoneWeight>_ToArray__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<bool>__ctor__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<bool>_CopyFrom__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<bool>_Dispose__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<byte>_Reinterpret<byte>__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<byte>_Reinterpret<float>__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<byte>_Reinterpret<ushort>__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<byte>_Reinterpret<uint>__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<byte>_Reinterpret<Vector3>__);
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<byte>_Reinterpret<OvrAvatarComputeSkinnedPrimitive_UInt16Wrapper>__
                );
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<byte>_Reinterpret<OvrAvatarComputeSkinnedPrimitive_UInt32Wrapper>__
                );
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<byte>_Reinterpret<OvrAvatarComputeSkinnedPrimitive_UInt8Wrapper>__
                );
    DAT_06dc3c36 = 1;
  }
  lVar9 = *(long *)puVar13;
  uStack_60 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar9 = *(long *)puVar13;
  }
  puVar5 = Method_Unity_Collections_NativeArray<BoneWeight>__ctor__;
  puVar4 = 
  Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<Vector4>>__ctor__;
  puVar2 = PTR_DAT_069fb9c0;
  if (*(char *)(*(long *)(lVar9 + 0xb8) + 8) != '\0') {
    lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_Unity_Collections_NativeArray<BoneWeight>__ctor__);
    FUN_041258d8(lVar9,*(undefined8 *)puVar4);
    return lVar9;
  }
  uVar16 = *(undefined8 *)Method_Unity_Collections_NativeArray<BoneWeight>_ToArray__;
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar16 = FUN_054f73b4(uVar16,0);
  if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)(puVar2 + 0x98));
  }
  lVar9 = FUN_0551ce98(uVar16,0);
  if (lVar9 != 0) {
    iVar6 = FUN_0550100c(lVar9,0);
    lVar9 = *(long *)puVar13;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar9);
      lVar9 = *(long *)puVar13;
    }
    puVar3 = Method_Unity_Services_Authentication_Shared_Multimap<string,_string>_GetEnumerator__;
    if (**(long **)(lVar9 + 0xb8) != 0) {
      if (*(int *)(**(long **)(lVar9 + 0xb8) + 0x18) != iVar6) {
        thunk_FUN_02dfd288(
                          Method_Unity_Services_Authentication_Shared_Multimap<string,_string>_GetEnumerator__
                          );
        FUN_0297e1b4();
        lVar9 = thunk_FUN_02dfd288(puVar3);
        lVar9 = **(long **)(lVar9 + 0xb8);
        FUN_02979e58(lVar9);
        thunk_FUN_02dfd288(
                          Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<Vector4>>_GetEnumerator__
                          );
        local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(lVar9 + 0x18));
        uVar16 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar2 + 0x48),&local_b8);
        local_c8 = CONCAT44(local_c8._4_4_,iVar6);
        uVar11 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar2 + 0x48),&local_c8);
        puVar13 = Method_Unity_Collections_NativeArray<byte>__ctor__;
LAB_05e821f0:
        uVar12 = thunk_FUN_02dfd288(puVar13);
        uVar16 = FUN_0536e0dc(uVar12,uVar16,uVar11,0);
        thunk_FUN_02dfd288(PTR_DAT_069fcb10);
        uVar11 = thunk_FUN_02dd3144();
        Oculus_Avatar2_OvrAvatarDefaultStateListener_AnimationStateChangeDelegate__EndInvoke
                  (uVar11,uVar16,0);
        uVar16 = thunk_FUN_02dfd288(
                                   Method_Unity_Collections_NativeArray<byte>_Reinterpret<OvrComputeAnimatorBuffer_VertexInfo>__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar11,uVar16);
      }
      lVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
      FUN_041258d8(lVar9,*(undefined8 *)puVar4);
      puVar4 = 
      Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<Vector3>>__ctor__
      ;
      iVar7 = iVar6;
      if (0 < iVar6) {
        do {
          if (lVar9 == 0) goto LAB_05e820d0;
          lVar14 = *(long *)(lVar9 + 0x10);
          lVar15 = *(long *)puVar4;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_05e820d0;
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            lVar14 = lVar14 + (long)(int)uVar1 * 0x18;
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar14 + 0x20) = 0;
            *(undefined8 *)(lVar14 + 0x28) = 0;
            *(undefined8 *)(lVar14 + 0x30) = 0;
            LeanTween__value((undefined8 *)(lVar14 + 0x20),0);
          }
          else {
            local_b8 = 0;
            uStack_b0 = 0;
            local_a8 = 0;
            Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                      (lVar9,&local_b8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__
                                 );
      FUN_04ede0ec(lVar14,*(undefined8 *)
                           Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
      uVar16 = *(undefined8 *)
                Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2NodeId>_get_Length__
      ;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar16 = FUN_054f73b4(uVar16,0);
      puVar4 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__ctor__;
      if (lVar14 != 0) {
        FUN_04edee6c(lVar14,uVar16,0,
                     *(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__ctor__
                    );
        uVar16 = FUN_054f73b4(*(undefined8 *)
                               Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2NodeId>_op_Implicit__
                              ,0);
        FUN_04edee6c(lVar14,uVar16,1,*(undefined8 *)puVar4);
        uVar16 = FUN_054f73b4(*(undefined8 *)
                               Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2EntityAssetType>_ToArray__
                              ,0);
        FUN_04edee6c(lVar14,uVar16,2,*(undefined8 *)puVar4);
        uVar16 = FUN_054f73b4(*(undefined8 *)
                               Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2EntityAssetType>_op_Implicit__
                              ,0);
        FUN_04edee6c(lVar14,uVar16,3,*(undefined8 *)puVar4);
        uVar16 = FUN_054f73b4(*(undefined8 *)
                               Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2NodeId>_Dispose__
                              ,0);
        FUN_04edee6c(lVar14,uVar16,4,*(undefined8 *)puVar4);
        uVar16 = FUN_054f73b4(*(undefined8 *)
                               Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2NodeId>_ToArray__
                              ,0);
        FUN_04edee6c(lVar14,uVar16,5,*(undefined8 *)puVar4);
        uVar16 = FUN_054f73b4(*(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<short>__ctor__,0);
        FUN_04edee6c(lVar14,uVar16,6,*(undefined8 *)puVar4);
        uVar16 = FUN_054f73b4(*(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__,0
                             );
        FUN_04edee6c(lVar14,uVar16,7,*(undefined8 *)puVar4);
        uVar16 = FUN_054f73b4(*(undefined8 *)
                               Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__,0);
        FUN_04edee6c(lVar14,uVar16,8,*(undefined8 *)puVar4);
        uVar16 = FUN_054f73b4(*(undefined8 *)
                               Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<float>>__ctor__
                              ,0);
        FUN_04edee6c(lVar14,uVar16,9,*(undefined8 *)puVar4);
        uVar16 = FUN_054f73b4(*(undefined8 *)
                               Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<float>>_GetEnumerator__
                              ,0);
        FUN_04edee6c(lVar14,uVar16,10,*(undefined8 *)puVar4);
        uVar16 = FUN_054f73b4(*(undefined8 *)
                               Method_Unity_Collections_NativeArray<BoneWeight>_Dispose__,0);
        FUN_04edee6c(lVar14,uVar16,0xb,*(undefined8 *)puVar4);
        uVar16 = FUN_054f73b4(*(undefined8 *)Method_Unity_Collections_NativeArray<bool>__ctor__,0);
        FUN_04edee6c(lVar14,uVar16,0xc,*(undefined8 *)puVar4);
        uVar16 = FUN_054f73b4(*(undefined8 *)Method_Unity_Collections_NativeArray<bool>_CopyFrom__,0
                             );
        FUN_04edee6c(lVar14,uVar16,0xd,*(undefined8 *)puVar4);
        uVar16 = FUN_054f73b4(*(undefined8 *)Method_Unity_Collections_NativeArray<bool>_Dispose__,0)
        ;
        FUN_04edee6c(lVar14,uVar16,0xe,*(undefined8 *)puVar4);
        uVar16 = FUN_054f73b4(*(undefined8 *)
                               Method_Unity_Collections_NativeArray<byte>_Reinterpret<byte>__,0);
        FUN_04edee6c(lVar14,uVar16,0xf,*(undefined8 *)puVar4);
        uVar16 = FUN_054f73b4(*(undefined8 *)
                               Method_Unity_Collections_NativeArray<byte>_Reinterpret<float>__,0);
        FUN_04edee6c(lVar14,uVar16,0x10,*(undefined8 *)puVar4);
        uVar16 = FUN_054f73b4(*(undefined8 *)
                               Method_Unity_Collections_NativeArray<byte>_Reinterpret<ushort>__,0);
        FUN_04edee6c(lVar14,uVar16,0x11,*(undefined8 *)puVar4);
        uVar16 = FUN_054f73b4(*(undefined8 *)
                               Method_Unity_Collections_NativeArray<byte>_Reinterpret<uint>__,0);
        FUN_04edee6c(lVar14,uVar16,0x12,*(undefined8 *)puVar4);
        uVar16 = FUN_054f73b4(*(undefined8 *)
                               Method_Unity_Collections_NativeArray<byte>_Reinterpret<Vector3>__,0);
        FUN_04edee6c(lVar14,uVar16,0x13,*(undefined8 *)puVar4);
        uVar16 = FUN_054f73b4(*(undefined8 *)
                               Method_Unity_Collections_NativeArray<byte>_Reinterpret<OvrAvatarComputeSkinnedPrimitive_UInt32Wrapper>__
                              ,0);
        FUN_04edee6c(lVar14,uVar16,0x15,*(undefined8 *)puVar4);
        uVar16 = FUN_054f73b4(*(undefined8 *)
                               Method_Unity_Collections_NativeArray<byte>_Reinterpret<OvrAvatarComputeSkinnedPrimitive_UInt8Wrapper>__
                              ,0);
        FUN_04edee6c(lVar14,uVar16,0x16,*(undefined8 *)puVar4);
        uVar16 = FUN_054f73b4(*(undefined8 *)
                               Method_Unity_Collections_NativeArray<byte>_Reinterpret<OvrAvatarComputeSkinnedPrimitive_UInt16Wrapper>__
                              ,0);
        FUN_04edee6c(lVar14,uVar16,0x14,*(undefined8 *)puVar4);
        uVar16 = FUN_054f73b4(*(undefined8 *)
                               Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2EntityAssetType>_Dispose__
                              ,0);
        FUN_04edee6c(lVar14,uVar16,0x17,*(undefined8 *)puVar4);
        uVar16 = FUN_054f73b4(*(undefined8 *)
                               Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2EntityAssetType>_GetEnumerator__
                              ,0);
        FUN_04edee6c(lVar14,uVar16,0x18,*(undefined8 *)puVar4);
        iVar7 = FUN_04edeb24(lVar14,*(undefined8 *)
                                     Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>_Dispose__
                            );
        if (iVar7 != iVar6) {
          FUN_02979e58(lVar14);
          uVar16 = thunk_FUN_02dfd288(
                                     Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>_Dispose__
                                     );
          uVar8 = thunk_FUN_04edeb24(lVar14,uVar16);
          local_b8 = CONCAT44(local_b8._4_4_,uVar8);
          uVar16 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar2 + 0x48),&local_b8);
          local_c8 = CONCAT44(local_c8._4_4_,iVar6);
          uVar11 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar2 + 0x48),&local_c8);
          puVar13 = Method_Unity_Collections_NativeArray<byte>__ctor__;
          goto LAB_05e821f0;
        }
        lVar15 = *(long *)puVar13;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar15 = *(long *)puVar13;
        }
        if (**(long **)(lVar15 + 0xb8) != 0) {
          Unity_Collections_NativeArray<AttachmentDescriptor>__CopySafe
                    (&local_b8,**(long **)(lVar15 + 0xb8),
                     *(undefined8 *)
                      Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<Vector3>>_GetEnumerator__
                    );
          puVar5 = Method_Unity_Collections_NativeArray<AttachmentDescriptor>_op_Implicit__;
          puVar4 = 
          Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<int>>__ctor__
          ;
          puVar2 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__ctor__;
          puVar13 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>_Dispose__;
          uStack_78 = uStack_b0;
          local_80 = local_b8;
          local_68 = uStack_a0;
          local_70 = local_a8;
          uStack_60 = local_98;
          puStack_c0 = &local_80;
          local_c8 = 0;
          while( true ) {
            uVar10 = FUN_0518ddf0(&local_80,*(undefined8 *)puVar4);
            uVar16 = local_70;
            if ((uVar10 & 1) == 0) {
              FUN_0518ddec(&local_80,
                           *(undefined8 *)
                            Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
              return lVar9;
            }
            uStack_88 = uStack_60;
            local_90 = local_68;
            uVar10 = FUN_04edf060(lVar14,local_70,*(undefined8 *)puVar13);
            if ((uVar10 & 1) == 0) break;
            uVar10 = FUN_04ededec(lVar14,uVar16,*(undefined8 *)puVar2);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860(uVar10,uVar10 & 0xffffffff);
            }
            local_b8 = uVar16;
            local_a8 = uStack_88;
            uStack_b0 = local_90;
            FUN_04125ed8(lVar9,uVar10 & 0xffffffff,&local_b8,*(undefined8 *)puVar5);
          }
          uVar11 = thunk_FUN_02dfd288(
                                     Method_Unity_Collections_NativeArray<byte>_Reinterpret<OvrComputeAnimatorBuffer_MeshInstanceMetaData>__
                                     );
          uVar16 = FUN_0536388c(uVar11,uVar16,0);
          thunk_FUN_02dfd288(PTR_DAT_069fcb10);
          uVar11 = thunk_FUN_02dd3144();
          Oculus_Avatar2_OvrAvatarDefaultStateListener_AnimationStateChangeDelegate__EndInvoke
                    (uVar11,uVar16,0);
          uVar16 = thunk_FUN_02dfd288(
                                     Method_Unity_Collections_NativeArray<byte>_Reinterpret<OvrComputeAnimatorBuffer_VertexInfo>__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar11,uVar16);
        }
      }
    }
  }
LAB_05e820d0:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


