/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.EyeGazeState>
ENTRY_POINT: 01402d1c
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


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_EyeGazeState>
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  long unaff_x21;
  
  lVar3 = FUN_0122e748(param_2);
  lVar4 = *unaff_x20;
  bVar2 = *(byte *)(lVar4 + 0x130);
  if ((*(byte *)(lVar3 + 0x130) <= bVar2) &&
     (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
    lVar3 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x18);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0122e748(lVar3);
      lVar4 = *unaff_x20;
      bVar2 = *(byte *)(lVar4 + 0x130);
    }
    if ((*(byte *)(lVar3 + 0x130) <= bVar2) &&
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
      lVar3 = thunk_FUN_0121496c(*(undefined8 *)
                                  (lVar4 + (ulong)*(ushort *)(lVar1 + 0x50) * 0x10 + 0x140),lVar1);
                    /* WARNING: Could not recover jumptable at 0x01402dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 8))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230f60();
}


