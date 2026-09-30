/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 04233ddc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


byte System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_EyeGazeState>
               (undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x21;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  byte unaff_w26;
  long in_stack_00000008;
  undefined8 uStack0000000000000020;
  undefined8 in_stack_00000028;
  
  uStack0000000000000020 = param_1;
  while( true ) {
    uVar1 = thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),param_3);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244(lVar3);
    }
    in_stack_00000008 = lVar3;
    uVar2 = thunk_FUN_0715d3b4(&stack0x00000008,uVar1,0);
    if ((uVar2 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 1;
    unaff_w26 = unaff_x23 < unaff_x25;
    if (unaff_x25 == unaff_x23) break;
    memcpy(&stack0x00000028,(void *)(unaff_x24 + unaff_x23 * *(uint *)(*unaff_x21 + 0x104)),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    param_3 = (undefined1 *)&stack0x00000020;
    uStack0000000000000020 = in_stack_00000028;
  }
  return unaff_w26 & 1;
}


