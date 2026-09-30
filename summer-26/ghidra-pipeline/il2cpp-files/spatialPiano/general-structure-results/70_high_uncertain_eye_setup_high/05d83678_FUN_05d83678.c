/*
FUNCTION_NAME: FUN_05d83678
ENTRY_POINT: 05d83678
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05d83678(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 local_30;
  
  if ((DAT_06bc3a7a & 1) == 0) {
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_ReinitializeEnhancedGesture__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_ReinitializeGesture__
                );
    DAT_06bc3a7a = 1;
  }
  local_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  if (*(long *)(param_2 + 8) == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x180);
    FUN_05d83464(&local_60,param_1);
    iVar2 = *(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4);
    puVar3 = (undefined8 *)
             Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_ReinitializeGesture__
    ;
  }
  else {
    if (*(long *)(param_2 + 8) != *(long *)(param_1 + 0xf0)) {
      return;
    }
    if (*(int *)(param_1 + 0xc0) < 2) {
      return;
    }
    puVar1 = (undefined8 *)(param_1 + 0x188);
    FUN_05d83464(&local_60,param_1);
    iVar2 = *(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4);
    puVar3 = (undefined8 *)
             Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_ReinitializeEnhancedGesture__
    ;
  }
  if (iVar2 == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05daf224(0,puVar1,&local_60,1,1,1,*puVar3,0);
  *(undefined8 *)(param_2 + 8) = *puVar1;
  return;
}


