/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03548e98
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_EyeGazeState>
               (undefined8 *param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  plVar2 = (long *)FUN_050e4454(uVar3,0);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_067c9a28 + 0x130);
    if (*(byte *)(*plVar2 + 0x130) < bVar1) {
      plVar2 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)PTR_DAT_067c9a28) {
      plVar2 = (long *)0x0;
    }
  }
  thunk_FUN_02f1bb70(plVar2,0);
  return;
}


