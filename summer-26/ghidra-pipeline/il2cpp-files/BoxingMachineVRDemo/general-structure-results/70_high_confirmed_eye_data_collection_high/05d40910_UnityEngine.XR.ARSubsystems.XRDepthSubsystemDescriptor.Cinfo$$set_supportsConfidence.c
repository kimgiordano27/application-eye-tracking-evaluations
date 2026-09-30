/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor.Cinfo$$set_supportsConfidence
ENTRY_POINT: 05d40910
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry;active_gaze_retrieval;active_gaze_collection
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_13;telemetry_or_network_hits_2;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_collection_or_telemetry_sink;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_XR_ARSubsystems_XRDepthSubsystemDescriptor_Cinfo__set_supportsConfidence
               (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long in_x9;
  undefined8 uVar3;
  long *unaff_x22;
  
  uVar3 = **(undefined8 **)(param_1 + 0xb8);
  uVar1 = thunk_FUN_02d9d534(**(undefined8 **)(in_x9 + 0x7a8));
  FUN_04d69570(uVar1,uVar3,
               *(undefined8 *)Method_Unity_Collections_NativeArray<XRTextureDescriptor>__ctor__,0);
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar2 + 0x340) = uVar1;
  thunk_FUN_02dd37b4(lVar2 + 0x340,uVar1);
  FUN_03335ec4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x348) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Contains__);
    FUN_04d698f4(uVar1,uVar3,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<XrCompositionLayerProjectionView>__ctor__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x348) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x348,uVar1);
  }
  FUN_03336ec8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x350) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>__ctor__);
    FUN_04d69624(uVar1,uVar3,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<XrCompositionLayerProjectionView>_Dispose__,0
                );
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x350) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x350,uVar1);
  }
  FUN_033361f8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x358) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_ToArray__
                              );
    FUN_04d699a8(uVar1,uVar3,*(undefined8 *)Method_Unity_Collections_NativeArray<float2>__ctor__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x358) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x358,uVar1);
  }
  FUN_033371fc();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x360) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>__ctor__
                              );
    FUN_04d6978c(uVar1,uVar3,*(undefined8 *)Method_Unity_Collections_NativeArray<float2>_Dispose__,0
                );
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x360) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x360,uVar1);
  }
  FUN_03336860();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x368) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VariantCheckpoint>_GetEnumerator__
                              );
    FUN_04d69408(uVar1,uVar3,*(undefined8 *)Method_Unity_Collections_NativeArray<float2>_Dispose__,0
                );
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x368) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x368,uVar1);
  }
  FUN_0333585c();
  return;
}


