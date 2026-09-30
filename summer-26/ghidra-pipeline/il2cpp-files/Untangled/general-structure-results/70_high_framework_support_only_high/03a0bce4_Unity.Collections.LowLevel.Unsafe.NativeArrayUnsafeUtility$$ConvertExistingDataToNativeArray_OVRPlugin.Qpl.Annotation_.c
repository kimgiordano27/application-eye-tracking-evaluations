/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 03a0bce4
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Qpl_Annotation>
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_3 + 0x38);
  if (plVar3 == (long *)0x0) {
    FUN_02eea7c4(param_3);
    plVar3 = *(long **)(param_3 + 0x38);
  }
  if ((*(byte *)(*plVar3 + 0x135) & 1) == 0) {
    FUN_02eea768();
  }
  lVar1 = thunk_FUN_02ef1808();
  FUN_03c79604(lVar1,*(undefined8 *)(*(long *)(param_3 + 0x38) + 8));
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_2;
    thunk_FUN_02f411dc((undefined8 *)(lVar1 + 0x10),param_2);
    *(undefined8 *)(lVar1 + 0x18) = param_1;
    thunk_FUN_02f411dc((undefined8 *)(lVar1 + 0x18),param_1);
    if ((*(byte *)(*(long *)(*(long *)(param_3 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_02eea768();
    }
    uVar2 = thunk_FUN_02ef1808();
    FUN_05134540(uVar2,lVar1,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20),
                 *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x30));
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


