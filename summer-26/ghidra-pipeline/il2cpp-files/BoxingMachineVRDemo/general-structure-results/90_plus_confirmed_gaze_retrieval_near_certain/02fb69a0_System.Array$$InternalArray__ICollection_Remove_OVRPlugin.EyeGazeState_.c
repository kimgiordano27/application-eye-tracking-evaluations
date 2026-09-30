/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.EyeGazeState>
ENTRY_POINT: 02fb69a0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_EyeGazeState>
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  long in_x9;
  int *in_x10;
  long unaff_x21;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_02d9a5d4();
      goto LAB_02fb69c8;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)*piVar2 * 0x10 + 0x138);
LAB_02fb69c8:
  (*(code *)*puVar3)();
  if (unaff_x21 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae0();
}


