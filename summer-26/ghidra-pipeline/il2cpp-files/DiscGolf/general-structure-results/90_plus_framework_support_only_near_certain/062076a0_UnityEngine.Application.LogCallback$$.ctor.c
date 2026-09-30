/*
FUNCTION_NAME: UnityEngine.Application.LogCallback$$.ctor
ENTRY_POINT: 062076a0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 133
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void UnityEngine_Application_LogCallback___ctor(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Vector3>__;
  if ((DAT_06dc703d & 1) == 0) {
    FUN_02d965b8(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02d965b8(PTR_DAT_06a0d480);
    FUN_02d965b8(
                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XRRaycastHit>__
                );
    FUN_02d965b8(Method_UnityEngine_Bindings_NativeHeaderAttribute__ctor__);
    FUN_02d965b8(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Vector3>__
                );
    FUN_02d965b8(Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_DeviceCommand__);
    DAT_06dc703d = 1;
  }
  lVar2 = **(long **)(*(long *)puVar1 + 0xb8);
  if (lVar2 == 0) {
    uVar3 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_DeviceCommand__
                              );
    FUN_06207500(uVar3,0,*(undefined8 *)
                          Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XRRaycastHit>__
                );
    if (*(int *)(*(long *)PTR_DAT_06a0d480 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar2 = FUN_0359b33c(uVar3,*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                        );
    **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
  }
  *param_1 = lVar2;
  return;
}


