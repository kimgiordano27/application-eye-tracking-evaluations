/*
FUNCTION_NAME: UnityEngine.UIElements.TextElement$$UnityEngine.UIElements.ITextEdition.set_AcceptCharacter
ENTRY_POINT: 06100610
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void UnityEngine_UIElements_TextElement__UnityEngine_UIElements_ITextEdition_set_AcceptCharacter
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar2 = PTR_DAT_06767580;
  if ((DAT_06b8a6d8 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06769028);
    FUN_02d6084c(PTR_DAT_06767580);
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ShadowSplitData>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<float>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<SmallIntegerArray>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<SphericalHarmonicsL2>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<TrackableId>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<uint>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ulong>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector2>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector3>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<XRFov>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<XRHandJoint>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<XRTextureDescriptor>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<XrCompositionLayerProjectionView>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceDiscoveryResult>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceQueryResult>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ProbeBrickIndex_Brick>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<AlphaBlendExtension_Native_XrCompositionLayerAlphaBlendFB>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<AttachmentDescriptor>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<byte>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<int>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<long>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<JobHandle>__
                );
    FUN_02d6084c(Method_UnityEngine_MonoBehaviour_StopCoroutine__);
    DAT_06b8a6d8 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  puVar4 = Method_UnityEngine_MonoBehaviour_StopCoroutine__;
  puVar1 = PTR_DAT_0675e258;
  lVar7 = *(long *)(PTR_DAT_0675e258 + 0x70);
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar7 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x30) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  puVar3 = PTR_DAT_06769028;
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x2b0);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<XRHandJoint>__
                              );
    FUN_043a0afc(lVar9,uVar10,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<XRTextureDescriptor>__
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x2b0) = lVar9;
    thunk_FUN_02dd37b4(lVar7 + 0x2b0,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar7 = *(long *)(puVar1 + 0x70);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar7 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x88) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x2b8);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector3>__
                              );
    FUN_043a0664(lVar9,uVar10,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceQueryResult>__
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x2b8) = lVar9;
    thunk_FUN_02dd37b4(lVar7 + 0x2b8,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar7 = *(long *)(puVar1 + 0x70);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar7 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x28) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x2c0);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<SphericalHarmonicsL2>__
                              );
    FUN_043a04dc(lVar9,uVar10,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ProbeBrickIndex_Brick>__
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x2c0) = lVar9;
    thunk_FUN_02dd37b4(lVar7 + 0x2c0,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar7 = *(long *)(puVar1 + 0x70);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar7 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x38) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x2c8);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ShadowSplitData>__
                              );
    FUN_043a07ec(lVar9,uVar10,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<AlphaBlendExtension_Native_XrCompositionLayerAlphaBlendFB>__
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x2c8) = lVar9;
    thunk_FUN_02dd37b4(lVar7 + 0x2c8,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar7 = *(long *)(puVar1 + 0x70);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar7 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x48) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x2d0);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<float>__
                              );
    FUN_043a08b0(lVar9,uVar10,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>__
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x2d0) = lVar9;
    thunk_FUN_02dd37b4(lVar7 + 0x2d0,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar7 = *(long *)(puVar1 + 0x70);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar7 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x68) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x2d8);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector2>__
                              );
    FUN_043a0974(lVar9,uVar10,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<AttachmentDescriptor>__
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x2d8) = lVar9;
    thunk_FUN_02dd37b4(lVar7 + 0x2d8,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar7 = *(long *)(puVar1 + 0x70);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar7 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x18) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x2e0);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ulong>__
                              );
    FUN_043a05a0(lVar9,uVar10,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<byte>__
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x2e0) = lVar9;
    thunk_FUN_02dd37b4(lVar7 + 0x2e0,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar7 = *(long *)(puVar1 + 0x70);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar7 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x40) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x2e8);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<uint>__
                              );
    FUN_043a0c84(lVar9,uVar10,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<int>__
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x2e8) = lVar9;
    thunk_FUN_02dd37b4(lVar7 + 0x2e8,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar7 = *(long *)(puVar1 + 0x70);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar7 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x50) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x2f0);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<XRFov>__
                              );
    FUN_043a0d48(lVar9,uVar10,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<long>__
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x2f0) = lVar9;
    thunk_FUN_02dd37b4(lVar7 + 0x2f0,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar7 = *(long *)(puVar1 + 0x70);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar7 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x78) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x2f8);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                              );
    FUN_043a0bc0(lVar9,uVar10,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<JobHandle>__
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x2f8) = lVar9;
    thunk_FUN_02dd37b4(lVar7 + 0x2f8,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar7 = *(long *)(puVar1 + 0x70);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar7 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x80) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x300);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<TrackableId>__
                              );
    FUN_043a0728(lVar9,uVar10,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<XrCompositionLayerProjectionView>__
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x300) = lVar9;
    thunk_FUN_02dd37b4(lVar7 + 0x300,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar7 = *(long *)(puVar1 + 0x70);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar7 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x10) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x308);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<SmallIntegerArray>__
                              );
    FUN_043a0a38(lVar9,uVar10,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceDiscoveryResult>__
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x308) = lVar9;
    thunk_FUN_02dd37b4(lVar7 + 0x308,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar8,uVar5,uVar6,lVar9);
  return;
}


