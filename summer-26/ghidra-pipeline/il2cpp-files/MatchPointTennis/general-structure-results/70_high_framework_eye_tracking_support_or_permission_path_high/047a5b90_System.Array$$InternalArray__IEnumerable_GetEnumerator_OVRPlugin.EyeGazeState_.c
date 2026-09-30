/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.EyeGazeState>
ENTRY_POINT: 047a5b90
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


byte System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_EyeGazeState>(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  byte unaff_w25;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  undefined2 in_stack_00000018;
  
  do {
    thunk_FUN_044a54b4(param_1);
    do {
                    /* try { // try from 047a5b9c to 048a5ba3 has its CatchHandler @ 047a65c4 */
                    /* try { // try from 047a5ba4 to 048a5bb7 has its CatchHandler @ 047a65b4 */
      uVar1 = FUN_08b97b5c(&stack0x0000001c,unaff_x21,
                           *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10));
      if ((uVar1 & 1) != 0) {
LAB_047a5bc8:
                    /* try { // try from 047a5bcc to 048a5c1b has its CatchHandler @ 047a6608 */
        return unaff_w25 & 1;
      }
      unaff_x22 = unaff_x22 + 1;
      unaff_w25 = unaff_x22 < unaff_x24;
      if (unaff_x24 == unaff_x22) goto LAB_047a5bc8;
      memcpy(&stack0x00000018,(void *)(unaff_x23 + unaff_x22 * *(uint *)(*unaff_x20 + 0x104)),
             (ulong)*(uint *)(*unaff_x20 + 0x104));
      in_stack_00000008._4_2_ = in_stack_00000018;
      unaff_x21 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),
                                     (long)&stack0x00000008 + 4);
      param_1 = *unaff_x26;
    } while (*(int *)(param_1 + 0xe4) != 0);
  } while( true );
}


