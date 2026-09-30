/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.BoundedPlane$$get_defaultValue
ENTRY_POINT: 05d3e554
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_17;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_XR_ARSubsystems_BoundedPlane__get_defaultValue(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  if (unaff_x20 == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      param_1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(param_1 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueInput>_Add__);
    FUN_04d6a9d4(uVar1,uVar3,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<AlphaBlendExtension_Native_XrCompositionLayerAlphaBlendFB>_get_IsCreated__
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x160) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x160,uVar1);
  }
  FUN_0333a870();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x168) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_AddRange__);
    FUN_04d6a4e8(uVar1,uVar3,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>__ctor__
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x168) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x168,uVar1);
  }
  FUN_03339ed4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x170) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueOutput>_Add__);
    FUN_04d6ab3c(uVar1,uVar3,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>_Dispose__
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x170) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x170,uVar1);
  }
  FUN_0333aed8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x178) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Vector4>_Add__)
    ;
    FUN_04d6a650(uVar1,uVar3,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>_get_IsCreated__
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x178) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x178,uVar1);
  }
  FUN_0333a208();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x180) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_set_Item__);
    FUN_04d6abf0(uVar1,uVar3,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ctor__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x180) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x180,uVar1);
  }
  FUN_0333b20c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x188) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_get_Capacity__);
    FUN_04d6a704(uVar1,uVar3,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>_Dispose__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x188) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x188,uVar1);
  }
  FUN_0333a53c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 400) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_RemoveAt__);
    FUN_04d6aa88(uVar1,uVar3,*(undefined8 *)Method_Unity_Collections_NativeHashMap<int,_int>__ctor__
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 400) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 400,uVar1);
  }
  FUN_0333aba4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x198) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_Contains__);
    FUN_04d6a380(uVar1,uVar3,*(undefined8 *)Method_Unity_Collections_NativeHashMap<int,_int>_Clear__
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x198) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x198,uVar1);
  }
  FUN_0333986c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1a0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_AddRange__);
    FUN_04d6a434(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeHashMap<int,_int>_ContainsKey__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1a0) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x1a0,uVar1);
  }
  FUN_03339ba0();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1a8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_set_Item__);
    FUN_04d6e9ec(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeHashMap<int,_int>_Dispose__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1a8) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x1a8,uVar1);
  }
  FUN_03343894();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1b0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Vector3>_Add__)
    ;
    FUN_04d6ee24(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeHashMap<int,_int>_TryGetValue__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1b0) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x1b0,uVar1);
  }
  FUN_03344bcc();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1b8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_get_Item__);
    Interop_Sys__GetNonCryptographicallySecureRandomBytes
              (uVar1,uVar3,
               *(undefined8 *)Method_Unity_Collections_NativeList<AttachmentDescriptor>__ctor__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1b8) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x1b8,uVar1);
  }
  FUN_03344230();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1c0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_GetEnumerator__
                              );
    FUN_04d6ef8c(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<AttachmentDescriptor>_AsArray__,
                 0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1c0) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x1c0,uVar1);
  }
  FUN_03345234();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1c8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_Clear__);
    FUN_04d6ecbc(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<AttachmentDescriptor>_Dispose__,
                 0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1c8) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x1c8,uVar1);
  }
  FUN_03344564();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1d0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_Clear__);
    FUN_04d6f040(uVar1,uVar3,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeList<AttachmentDescriptor>_ElementAt__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1d0) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x1d0,uVar1);
  }
  FUN_03345568();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1d8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UsageHint>_GetEnumerator__);
    FUN_04d6ed70(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<AttachmentDescriptor>_Resize__,0
                );
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1d8) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x1d8,uVar1);
  }
  FUN_03344898();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1e0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueOutput>__ctor__);
    FUN_04d6f0f4(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DebugOccluderStats>__ctor__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1e0) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x1e0,uVar1);
  }
  FUN_0334589c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1e8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_Sort__);
    FUN_04d6eed8(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DebugOccluderStats>_Clear__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1e8) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x1e8,uVar1);
  }
  FUN_03344f00();
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_0638a53c();
  return;
}


