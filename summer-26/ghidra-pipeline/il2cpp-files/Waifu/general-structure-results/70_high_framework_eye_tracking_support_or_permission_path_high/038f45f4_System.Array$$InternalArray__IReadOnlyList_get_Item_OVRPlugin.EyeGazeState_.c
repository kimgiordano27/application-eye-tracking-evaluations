/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 038f45f4
PROGRAM: Waifu-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


bool System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_EyeGazeState>(uint param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x21;
  ulong uVar4;
  undefined4 uStack0000000000000018;
  undefined2 uStack000000000000001c;
  undefined4 uStack0000000000000028;
  undefined2 uStack000000000000002c;
  
  if ((int)param_1 < 1) {
    bVar1 = false;
  }
  else {
    uVar4 = 0;
    bVar1 = true;
    do {
      memcpy(&stack0x00000028,
             (void *)((long)unaff_x21 + uVar4 * *(uint *)(*unaff_x21 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x21 + 0x104));
      uStack0000000000000018 = uStack0000000000000028;
      uStack000000000000001c = uStack000000000000002c;
      FUN_03398650(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000018);
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        FUN_0338f618(lVar3);
      }
      uVar2 = FUN_06891484();
      if ((uVar2 & 1) != 0) {
        return bVar1;
      }
      uVar4 = uVar4 + 1;
      bVar1 = uVar4 < param_1;
    } while (param_1 != uVar4);
  }
  return bVar1;
}


