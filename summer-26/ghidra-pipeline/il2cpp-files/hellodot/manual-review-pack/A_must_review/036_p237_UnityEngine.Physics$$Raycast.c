/*
FUNCTION_NAME: UnityEngine.Physics$$Raycast
ENTRY_POINT: 05e4b978
PROGRAM: hellodot-libil2cpp.so
SCORE: 154
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


uint UnityEngine_Physics__Raycast(ulong param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c48);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_Rendering_ObservableList<DebugUI_Widget>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ee7c8);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_Dictionary<Type,_MethodInfo[]>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Pose>_TypeInfo);
    *(undefined1 *)(unaff_x22 + 0x510) = 1;
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  uVar3 = FUN_05e4dad8(*unaff_x21);
  if ((uVar3 & 1) == 0) {
    puVar5 = (undefined8 *)OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo
    ;
    if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      puVar5 = (undefined8 *)
               OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo;
    }
  }
  else {
    iVar1 = FUN_05e4bab4();
    if (iVar1 != 0) {
      FUN_03c2e420();
      unaff_x19[1] = 0;
      *unaff_x19 = 0;
      uVar2 = 0;
      if (*unaff_x19 != 0) {
        uVar4 = FUN_0349b7f8(*unaff_x19,unaff_x19[1],
                             *(undefined8 *)
                              UnityEngine_Rendering_ObservableList<DebugUI_Widget>_TypeInfo);
        uVar2 = FUN_05e4bb1c(uVar4,iVar1);
      }
      goto LAB_05e4ba9c;
    }
    puVar5 = (undefined8 *)Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Pose>_TypeInfo;
    if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      puVar5 = (undefined8 *)
               Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Pose>_TypeInfo;
    }
  }
  FUN_05eb30e4(*puVar5,0);
  uVar2 = 0;
LAB_05e4ba9c:
  return uVar2 & 1;
}


