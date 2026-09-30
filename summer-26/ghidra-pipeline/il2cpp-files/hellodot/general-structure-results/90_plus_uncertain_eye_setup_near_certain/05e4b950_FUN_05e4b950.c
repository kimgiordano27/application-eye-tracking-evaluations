/*
FUNCTION_NAME: FUN_05e4b950
ENTRY_POINT: 05e4b950
PROGRAM: hellodot-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_6
*/


uint FUN_05e4b950(undefined8 param_1,undefined4 param_2,long *param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long local_40;
  long lStack_38;
  
  puVar1 = UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_TypeInfo;
  if ((DAT_06a7b510 & 1) == 0) {
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
    DAT_06a7b510 = 1;
  }
  *param_3 = 0;
  param_3[1] = 0;
  uVar4 = FUN_05e4dad8(*(undefined8 *)puVar1);
  if ((uVar4 & 1) == 0) {
    puVar6 = (undefined8 *)OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo
    ;
    if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      puVar6 = (undefined8 *)
               OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo;
    }
  }
  else {
    iVar2 = FUN_05e4bab4();
    if (iVar2 != 0) {
      local_40 = 0;
      lStack_38 = 0;
      FUN_03c2e420(&local_40,iVar2,param_2,1,*(undefined8 *)PTR_DAT_065ee7c8);
      param_3[1] = lStack_38;
      *param_3 = local_40;
      uVar3 = 0;
      if (*param_3 != 0) {
        uVar5 = FUN_0349b7f8(*param_3,param_3[1],
                             *(undefined8 *)
                              UnityEngine_Rendering_ObservableList<DebugUI_Widget>_TypeInfo);
        uVar3 = FUN_05e4bb1c(uVar5,iVar2);
      }
      goto LAB_05e4ba9c;
    }
    puVar6 = (undefined8 *)Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Pose>_TypeInfo;
    if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      puVar6 = (undefined8 *)
               Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Pose>_TypeInfo;
    }
  }
  FUN_05eb30e4(*puVar6,0);
  uVar3 = 0;
LAB_05e4ba9c:
  return uVar3 & 1;
}


