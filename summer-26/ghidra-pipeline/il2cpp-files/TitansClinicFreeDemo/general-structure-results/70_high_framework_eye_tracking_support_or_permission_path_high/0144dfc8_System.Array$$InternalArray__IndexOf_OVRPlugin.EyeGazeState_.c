/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.EyeGazeState>
ENTRY_POINT: 0144dfc8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__IndexOf<OVRPlugin_EyeGazeState>(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)FUN_01f7d8a0();
  FUN_0103b050();
  (**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0));
  thunk_FUN_01279b34(PTR_DAT_027b4788);
  uVar2 = FUN_01e5c0f4();
  thunk_FUN_01279b34(PTR_DAT_027b4020);
  uVar3 = thunk_FUN_0124bba8();
  FUN_01f68e18(uVar3,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar3);
}


