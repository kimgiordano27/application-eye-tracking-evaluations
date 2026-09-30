/*
FUNCTION_NAME: FUN_014e6d78
ENTRY_POINT: 014e6d78
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


void FUN_014e6d78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar2 = 
  Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeMemoryPtr__;
  if ((DAT_03776fbe & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_EyeTextureFormat_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Tuple<OVRGLTFAnimatinonNode_ThumbstickDirection,_OVRGLTFAnimatinonNode_ThumbstickDirection>_get_Item1__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_GenericDropdownMenu_OnContainerGeometryChanged__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeMemoryPtr__
                      );
    DAT_03776fbe = 1;
  }
  puVar4 = Method_UnityEngine_UIElements_GenericDropdownMenu_OnContainerGeometryChanged__;
  puVar3 = 
  Method_System_Tuple<OVRGLTFAnimatinonNode_ThumbstickDirection,_OVRGLTFAnimatinonNode_ThumbstickDirection>_get_Item1__
  ;
  puVar1 = OVRPlugin_EyeTextureFormat_TypeInfo;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_011ccac8(&local_48,*(undefined8 *)puVar1);
  uStack_80 = uStack_40;
  uStack_88 = local_48;
  local_78 = local_38;
  local_90 = CONCAT44(local_90._4_4_,0xffffffff);
  local_70 = param_2;
  uStack_68 = param_1;
  FUN_01099328((ulong)&local_90 | 8,&local_90,*(undefined8 *)puVar3);
  FUN_011ccadc((ulong)&local_90 | 8,*(undefined8 *)puVar4);
  return;
}


