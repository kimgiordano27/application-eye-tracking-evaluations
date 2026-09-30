/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.EyeGazeState>
ENTRY_POINT: 02fec9b0
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


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_EyeGazeState>
               (size_t param_1,void *param_2)

{
  bool in_ZR;
  bool in_CY;
  void *pvVar1;
  long lVar2;
  size_t in_x9;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar3;
  
  if (!in_CY || in_ZR) {
    in_x9 = param_1;
  }
  unaff_x19[2] = in_x9;
  pvVar1 = realloc(param_2,in_x9);
  *unaff_x19 = pvVar1;
  if (pvVar1 != (void *)0x0) {
    lVar2 = unaff_x19[1];
    *(undefined1 *)((undefined2 *)((long)pvVar1 + lVar2) + 1) = 0x20;
    *(undefined2 *)((long)pvVar1 + lVar2) = 0x3d20;
    plVar3 = *(long **)(unaff_x20 + 0x20);
    unaff_x19[1] = unaff_x19[1] + 3;
    (**(code **)(*plVar3 + 0x20))(plVar3);
    if ((*(ushort *)((long)plVar3 + 9) & 0xc0) == 0x40) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x02feca44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x28))(plVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


