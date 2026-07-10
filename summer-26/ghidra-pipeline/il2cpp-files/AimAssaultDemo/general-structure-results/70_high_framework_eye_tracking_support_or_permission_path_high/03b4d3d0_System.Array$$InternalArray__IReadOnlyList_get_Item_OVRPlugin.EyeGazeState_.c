/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03b4d3d0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


bool System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_EyeGazeState>(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x21;
  ulong uVar4;
  undefined1 uStack0000000000000018;
  undefined1 uStack000000000000001c;
  
  uVar4 = 0;
  bVar1 = true;
  while( true ) {
    memcpy((void *)((long)&stack0x00000018 + 4),
           (void *)((long)unaff_x21 + uVar4 * *(uint *)(*unaff_x21 + 0x104) + 0x20),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    uStack0000000000000018 = uStack000000000000001c;
    thunk_FUN_037784fc(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000018);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      FUN_03775678(lVar3);
    }
    uVar2 = FUN_06278b74();
    if ((uVar2 & 1) != 0) break;
    uVar4 = uVar4 + 1;
    bVar1 = uVar4 < (param_1 & 0xffffffff);
    if ((param_1 & 0xffffffff) == uVar4) {
      return bVar1;
    }
  }
  return bVar1;
}


