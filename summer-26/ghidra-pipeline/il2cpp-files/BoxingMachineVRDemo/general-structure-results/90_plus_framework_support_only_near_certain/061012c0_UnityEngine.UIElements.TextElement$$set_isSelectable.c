/*
FUNCTION_NAME: UnityEngine.UIElements.TextElement$$set_isSelectable
ENTRY_POINT: 061012c0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void UnityEngine_UIElements_TextElement__set_isSelectable(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  int in_w9;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  
  if (in_w9 == 0) {
    thunk_FUN_02dbd7b4(param_1);
    param_1 = *unaff_x25;
  }
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (*(long *)(*(long *)(param_1 + 0xb8) + 0x308) == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(param_1);
      param_1 = *unaff_x25;
    }
    uVar4 = **(undefined8 **)(param_1 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<SmallIntegerArray>__
                              );
    FUN_043a0a38(uVar1,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceDiscoveryResult>__
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(undefined8 *)(lVar2 + 0x308) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x308,uVar1);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar3);
  return;
}


