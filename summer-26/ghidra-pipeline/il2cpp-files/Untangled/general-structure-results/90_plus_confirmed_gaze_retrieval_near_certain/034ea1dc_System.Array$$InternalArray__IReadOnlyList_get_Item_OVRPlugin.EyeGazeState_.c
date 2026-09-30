/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 034ea1dc
PROGRAM: Untangled-libil2cpp.so
SCORE: 164
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_EyeGazeState>(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar2;
  
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    lVar2 = *(long *)(*(long *)(unaff_x20 + 0x58) + 0x100);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d026a8);
    FUN_066dbbb0();
    if (lVar2 != 0) {
      FUN_066dbc80(lVar2,uVar1,0);
      if (*(long *)(unaff_x20 + 0x68) != 0) {
        *(undefined8 *)(*(long *)(unaff_x20 + 0x68) + 0x58) = unaff_x19;
        thunk_FUN_02f411dc();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


