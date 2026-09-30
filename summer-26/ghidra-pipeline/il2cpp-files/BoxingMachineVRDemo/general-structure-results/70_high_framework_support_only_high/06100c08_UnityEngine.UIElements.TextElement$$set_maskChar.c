/*
FUNCTION_NAME: UnityEngine.UIElements.TextElement$$set_maskChar
ENTRY_POINT: 06100c08
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_UIElements_TextElement__set_maskChar(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  
  thunk_FUN_02dbd7b4(param_1);
  uVar5 = **(undefined8 **)(*unaff_x25 + 0xb8);
  uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                              Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<float>__
                            );
  FUN_043a08b0(uVar1,uVar5,
               *(undefined8 *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>__
               ,0);
  lVar2 = *(long *)(*unaff_x25 + 0xb8);
  *(undefined8 *)(lVar2 + 0x2d0) = uVar1;
  thunk_FUN_02dd37b4(lVar2 + 0x2d0,uVar1);
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c();
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar2 = *(long *)(unaff_x27 + 0x70);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar1 = FUN_05015c2c(lVar2 + 0x20,0);
  uVar5 = FUN_05015c2c(*(long *)(unaff_x27 + 0x68) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x2d8);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector2>__
                              );
    FUN_043a0974(lVar4,uVar6,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<AttachmentDescriptor>__
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x2d8) = lVar4;
    thunk_FUN_02dd37b4(lVar2 + 0x2d8,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar2 = *(long *)(unaff_x27 + 0x70);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar1 = FUN_05015c2c(lVar2 + 0x20,0);
  uVar5 = FUN_05015c2c(*(long *)(unaff_x27 + 0x18) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x2e0);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ulong>__
                              );
    FUN_043a05a0(lVar4,uVar6,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<byte>__
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x2e0) = lVar4;
    thunk_FUN_02dd37b4(lVar2 + 0x2e0,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar2 = *(long *)(unaff_x27 + 0x70);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar1 = FUN_05015c2c(lVar2 + 0x20,0);
  uVar5 = FUN_05015c2c(*(long *)(unaff_x27 + 0x40) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x2e8);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<uint>__
                              );
    FUN_043a0c84(lVar4,uVar6,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<int>__
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x2e8) = lVar4;
    thunk_FUN_02dd37b4(lVar2 + 0x2e8,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar2 = *(long *)(unaff_x27 + 0x70);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar1 = FUN_05015c2c(lVar2 + 0x20,0);
  uVar5 = FUN_05015c2c(*(long *)(unaff_x27 + 0x50) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x2f0);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<XRFov>__
                              );
    FUN_043a0d48(lVar4,uVar6,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<long>__
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x2f0) = lVar4;
    thunk_FUN_02dd37b4(lVar2 + 0x2f0,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar2 = *(long *)(unaff_x27 + 0x70);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar1 = FUN_05015c2c(lVar2 + 0x20,0);
  uVar5 = FUN_05015c2c(*(long *)(unaff_x27 + 0x78) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x2f8);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                              );
    FUN_043a0bc0(lVar4,uVar6,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<JobHandle>__
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x2f8) = lVar4;
    thunk_FUN_02dd37b4(lVar2 + 0x2f8,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar2 = *(long *)(unaff_x27 + 0x70);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar1 = FUN_05015c2c(lVar2 + 0x20,0);
  uVar5 = FUN_05015c2c(*(long *)(unaff_x27 + 0x80) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x300);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<TrackableId>__
                              );
    FUN_043a0728(lVar4,uVar6,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<XrCompositionLayerProjectionView>__
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x300) = lVar4;
    thunk_FUN_02dd37b4(lVar2 + 0x300,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar2 = *(long *)(unaff_x27 + 0x70);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar1 = FUN_05015c2c(lVar2 + 0x20,0);
  uVar5 = FUN_05015c2c(*(long *)(unaff_x27 + 0x10) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x308);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<SmallIntegerArray>__
                              );
    FUN_043a0a38(lVar4,uVar6,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceDiscoveryResult>__
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x308) = lVar4;
    thunk_FUN_02dd37b4(lVar2 + 0x308,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar3,uVar1,uVar5,lVar4);
  return;
}


