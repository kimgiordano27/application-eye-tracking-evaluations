/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 0128e944
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


int System_Array__InternalArray__get_Item<OVRPlugin_EyeGazeState>(code *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 in_x9;
  long unaff_x19;
  
  *(undefined8 *)(unaff_x19 + 0x48) = in_x9;
  plVar2 = (long *)(*param_1)(*(undefined8 *)(unaff_x19 + 0x50),1,0x1bf8);
  if (plVar2 == (long *)0x0) {
    iVar1 = -4;
  }
  else {
    *(long **)(unaff_x19 + 0x38) = plVar2;
    *plVar2 = unaff_x19;
    plVar2[9] = 0;
    *(undefined4 *)(plVar2 + 1) = 0x3f34;
    iVar1 = FUN_0128e840();
    if (iVar1 != 0) {
      (**(code **)(unaff_x19 + 0x48))(*(undefined8 *)(unaff_x19 + 0x50),plVar2);
      *(undefined8 *)(unaff_x19 + 0x38) = 0;
    }
  }
  return iVar1;
}


