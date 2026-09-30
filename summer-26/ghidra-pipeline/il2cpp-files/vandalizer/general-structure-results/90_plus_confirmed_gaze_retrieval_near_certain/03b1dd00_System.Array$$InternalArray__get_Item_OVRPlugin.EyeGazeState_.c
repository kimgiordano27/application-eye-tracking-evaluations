/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03b1dd00
PROGRAM: vandalizer-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__get_Item<OVRPlugin_EyeGazeState>
               (undefined8 *param_1,long *param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = 0;
  uStack0000000000000008 = 0;
  uStack0000000000000010 = 0;
  uVar1 = FUN_05e1a3d8(param_2,0);
  if (param_3 < uVar1) {
    memcpy(&stack0x00000008,
           (void *)((long)param_2 + (ulong)*(uint *)(*param_2 + 0x104) * (long)(int)param_3 + 0x20),
           (ulong)*(uint *)(*param_2 + 0x104));
    param_1[1] = uStack0000000000000010;
    *param_1 = uStack0000000000000008;
    param_1[2] = uStack0000000000000018;
    return;
  }
  thunk_FUN_03257e30(PTR_DAT_0759e028);
  uVar2 = thunk_FUN_0322f148();
  uVar3 = thunk_FUN_03257e30(PTR_DAT_0759c148);
  FUN_05d7734c(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_031f225c(uVar2,param_4);
}


