/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$Dispose
ENTRY_POINT: 0265c618
PROGRAM: vrfs-libil2cpp.so
SCORE: 166
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__Dispose
               (long param_1,long param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  
  uVar2 = thunk_FUN_01625c74(param_3);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(long *)(param_1 + 0x28) = param_3;
  *(long *)(param_1 + 0x20) = param_2;
  thunk_FUN_01656ef8((long *)(param_1 + 0x20),param_2);
  cVar1 = *(char *)(param_3 + 0x52);
  *(long *)(param_1 + 0x40) = param_1;
  uVar3 = FUN_0160ee14(param_3);
  if ((uVar3 & 1) == 0) {
    if (cVar1 != '\0') {
      if (param_2 == 0) {
        uVar2 = thunk_FUN_015f058c(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar2,0);
      }
LAB_0265c680:
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
      goto LAB_0265c718;
    }
    if (*(char *)(param_1 + 0x70) == '\0') {
      pcVar5 = FUN_0126b184;
    }
    else {
      uVar3 = thunk_FUN_016258a8(param_3);
      uVar4 = FUN_0160f1c8(param_3);
      if ((uVar3 & 1) == 0) {
        if ((uVar4 & 1) == 0) {
          pcVar5 = FUN_0126b218;
        }
        else {
          pcVar5 = FUN_0126b240;
        }
      }
      else if ((uVar4 & 1) == 0) {
        pcVar5 = FUN_0126b2c4;
      }
      else {
        pcVar5 = FUN_0126b310;
      }
    }
  }
  else if ((*(byte *)(param_3 + 0x53) >> 4 & 1) == 0) {
    if (cVar1 != '\x01') goto LAB_0265c680;
    pcVar5 = FUN_0126b1a4;
  }
  else if (cVar1 == '\x01') {
    pcVar5 = FUN_0126b1b4;
  }
  else {
    pcVar5 = FUN_0126b1e0;
  }
  *(code **)(param_1 + 0x18) = pcVar5;
LAB_0265c718:
  *(code **)(param_1 + 0x38) = FUN_0126b13c;
  return;
}


