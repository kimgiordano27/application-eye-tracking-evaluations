/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.EyeGazeState>
ENTRY_POINT: 01ea09a0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 155
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__Insert<OVRPlugin_EyeGazeState>(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0xe0);
    uVar1 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_95);
    FUN_027586d8();
    if (lVar2 != 0) {
      FUN_0275ab9c(lVar2,uVar1,*(undefined8 *)StringLiteral_96);
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        lVar2 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0xb8);
        uVar1 = thunk_FUN_01de27b8(*(undefined8 *)Field_UnityEngine_UIElements_RuleMatcher_sheet);
        FUN_027586d8();
        if (lVar2 != 0) {
          FUN_0275ab9c(lVar2,uVar1,
                       *(undefined8 *)
                        Field_UnityEngine_UIElements_StyleSheets_ScalableImage_normalImage);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


