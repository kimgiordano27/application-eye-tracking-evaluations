/*
FUNCTION_NAME: FUN_0573328c
ENTRY_POINT: 0573328c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


uint FUN_0573328c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 local_28;
  
  local_28 = 0;
  uVar1 = System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext
                    (param_1,param_2,
                     *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48));
  local_28._4_4_ = uVar1;
  uVar1 = System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext
                    (param_1,param_3,
                     *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48));
  local_28 = CONCAT44(local_28._4_4_,uVar1);
  uVar2 = FUN_05733240((long)&local_28 + 4,&local_28,
                       *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x68));
  return uVar2 & 1;
}


