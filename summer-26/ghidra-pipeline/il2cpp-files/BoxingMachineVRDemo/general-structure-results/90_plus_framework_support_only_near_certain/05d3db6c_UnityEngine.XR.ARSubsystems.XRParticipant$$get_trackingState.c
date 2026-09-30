/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRParticipant$$get_trackingState
ENTRY_POINT: 05d3db6c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 161
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_9;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_21;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_ARSubsystems_XRParticipant__get_trackingState(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_x9;
  undefined8 uVar4;
  long *unaff_x22;
  
  uVar4 = **(undefined8 **)(param_1 + 0xb8);
  uVar1 = thunk_FUN_02d9d534(**(undefined8 **)(in_x9 + 0x650));
  FUN_04d6a218(uVar1,uVar4,
               *(undefined8 *)
                Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_get_IsCreated__
               ,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd8);
  *puVar2 = uVar1;
  thunk_FUN_02dd37b4(puVar2,uVar1);
  FUN_03339204();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xe0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_Add__
                              );
    FUN_04d69f48(uVar1,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe0);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_03338534();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xe8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_get_Item__);
    FUN_04d6a0b0(uVar1,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe8);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_03338b9c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xf0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<URPProfileId>__ctor__);
    FUN_04d69c78(uVar1,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_get_IsCreated__
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf0);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_03337864();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xf8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ViewerTrigger>_GetEnumerator__
                              );
    FUN_04d69d2c(uVar1,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf8);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_03337b98();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x100) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_get_Count__);
    FUN_04d6e230(uVar1,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__,0
                );
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x100) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x100,uVar1);
  }
  FUN_03341558();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x108) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Variant>__ctor__);
    FUN_04d6e668(uVar1,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<Painter2D_Painter2DJobData>__ctor__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x108) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x108,uVar1);
  }
  FUN_03342890();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x110) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_get_Item__);
    FUN_04d6e44c(uVar1,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<Painter2D_Painter2DJobData>_Dispose__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x110) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x110,uVar1);
  }
  FUN_03341ef4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x118) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    FUN_0638a10c(*(undefined8 *)(lVar3 + 0xb8));
    return;
  }
  FUN_03342ef8();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x120) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>__ctor__);
    FUN_04d6e500(uVar1,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>__ctor__,
                 0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x120) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x120,uVar1);
  }
  FUN_03342228();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x128) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Vector2>_Add__)
    ;
    FUN_04d6e884(uVar1,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_Dispose__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x128) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x128,uVar1);
  }
  FUN_0334322c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x130) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Value>_Add__);
    FUN_04d6e5b4(uVar1,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_GetSubArray__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x130) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x130,uVar1);
  }
  FUN_0334255c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x138) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_RemoveAt__);
    FUN_04d6e938(uVar1,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_get_IsCreated__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x138) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x138,uVar1);
  }
  FUN_03343560();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x140) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VectorImageManager>__ctor__);
    FUN_04d6e71c(uVar1,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_op_Implicit__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x140) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x140,uVar1);
  }
  FUN_03342bc4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x148) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>__ctor__);
    FUN_04d6e2e4(uVar1,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ShaderInput_LightData>_Dispose__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x148) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x148,uVar1);
  }
  FUN_0334188c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x150) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_get_Item__);
    FUN_04d6e398(uVar1,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<AlphaBlendExtension_Native_XrCompositionLayerAlphaBlendFB>__ctor__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x150) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x150,uVar1);
  }
  FUN_03341bc0();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x158) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_set_Item__);
    FUN_04d6a2cc(uVar1,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<AlphaBlendExtension_Native_XrCompositionLayerAlphaBlendFB>_Dispose__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x158) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x158,uVar1);
  }
  FUN_03339538();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x160) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueInput>_Add__);
    FUN_04d6a9d4(uVar1,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<AlphaBlendExtension_Native_XrCompositionLayerAlphaBlendFB>_get_IsCreated__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x160) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x160,uVar1);
  }
  FUN_0333a870();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x168) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_AddRange__);
    FUN_04d6a4e8(uVar1,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>__ctor__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x168) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x168,uVar1);
  }
  FUN_03339ed4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x170) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueOutput>_Add__);
    FUN_04d6ab3c(uVar1,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>_Dispose__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x170) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x170,uVar1);
  }
  FUN_0333aed8();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x178) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Vector4>_Add__)
    ;
    FUN_04d6a650(uVar1,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>_get_IsCreated__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x178) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x178,uVar1);
  }
  FUN_0333a208();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x180) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_set_Item__);
    FUN_04d6abf0(uVar1,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ctor__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x180) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x180,uVar1);
  }
  FUN_0333b20c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x188) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_get_Capacity__);
    FUN_04d6a704(uVar1,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>_Dispose__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x188) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x188,uVar1);
  }
  FUN_0333a53c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 400) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_RemoveAt__);
    FUN_04d6aa88(uVar1,uVar4,*(undefined8 *)Method_Unity_Collections_NativeHashMap<int,_int>__ctor__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 400) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 400,uVar1);
  }
  FUN_0333aba4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x198) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_Contains__);
    FUN_04d6a380(uVar1,uVar4,*(undefined8 *)Method_Unity_Collections_NativeHashMap<int,_int>_Clear__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x198) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x198,uVar1);
  }
  FUN_0333986c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1a0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_AddRange__);
    FUN_04d6a434(uVar1,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeHashMap<int,_int>_ContainsKey__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1a0) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x1a0,uVar1);
  }
  FUN_03339ba0();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1a8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_set_Item__);
    FUN_04d6e9ec(uVar1,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeHashMap<int,_int>_Dispose__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1a8) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x1a8,uVar1);
  }
  FUN_03343894();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1b0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Vector3>_Add__)
    ;
    FUN_04d6ee24(uVar1,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeHashMap<int,_int>_TryGetValue__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1b0) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x1b0,uVar1);
  }
  FUN_03344bcc();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1b8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_get_Item__);
    Interop_Sys__GetNonCryptographicallySecureRandomBytes
              (uVar1,uVar4,
               *(undefined8 *)Method_Unity_Collections_NativeList<AttachmentDescriptor>__ctor__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1b8) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x1b8,uVar1);
  }
  FUN_03344230();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1c0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_GetEnumerator__
                              );
    FUN_04d6ef8c(uVar1,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeList<AttachmentDescriptor>_AsArray__,
                 0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1c0) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x1c0,uVar1);
  }
  FUN_03345234();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1c8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_Clear__);
    FUN_04d6ecbc(uVar1,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeList<AttachmentDescriptor>_Dispose__,
                 0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1c8) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x1c8,uVar1);
  }
  FUN_03344564();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1d0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_Clear__);
    FUN_04d6f040(uVar1,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeList<AttachmentDescriptor>_ElementAt__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1d0) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x1d0,uVar1);
  }
  FUN_03345568();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1d8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UsageHint>_GetEnumerator__);
    FUN_04d6ed70(uVar1,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeList<AttachmentDescriptor>_Resize__,0
                );
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1d8) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x1d8,uVar1);
  }
  FUN_03344898();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1e0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueOutput>__ctor__);
    FUN_04d6f0f4(uVar1,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DebugOccluderStats>__ctor__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1e0) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x1e0,uVar1);
  }
  FUN_0334589c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1e8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_Sort__);
    FUN_04d6eed8(uVar1,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DebugOccluderStats>_Clear__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1e8) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x1e8,uVar1);
  }
  FUN_03344f00();
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_0638a53c();
  return;
}


