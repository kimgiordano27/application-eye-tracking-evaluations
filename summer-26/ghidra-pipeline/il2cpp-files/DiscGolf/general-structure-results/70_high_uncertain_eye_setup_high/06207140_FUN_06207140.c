/*
FUNCTION_NAME: FUN_06207140
ENTRY_POINT: 06207140
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_06207140(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<NetworkAnimator_AnimatorParamCache>__
  ;
  if ((DAT_06dc7037 & 1) == 0) {
    FUN_02d965b8(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceDiscoveryResult>__
                );
    FUN_02d965b8(PTR_DAT_06a0d480);
    FUN_02d965b8(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceQueryResult>__
                );
    FUN_02d965b8(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ProbeBrickIndex_Brick>__
                );
    FUN_02d965b8(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<NetworkAnimator_AnimatorParamCache>__
                );
    FUN_02d965b8(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<byte>__
                );
    DAT_06dc7037 = 1;
  }
  lVar2 = **(long **)(*(long *)puVar1 + 0xb8);
  if (lVar2 == 0) {
    uVar3 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<byte>__
                              );
    FUN_06206f90(uVar3,0,*(undefined8 *)
                          Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceQueryResult>__
                );
    if (*(int *)(*(long *)PTR_DAT_06a0d480 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar2 = FUN_0359b33c(uVar3,*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceDiscoveryResult>__
                        );
    **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
  }
  *param_1 = lVar2;
  return;
}


