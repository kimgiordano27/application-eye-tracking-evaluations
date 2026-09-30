/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03103220
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
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
               (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint unaff_w22;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  uStack000000000000000c = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000014 = 0;
  uVar1 = FUN_0501f6a4(param_2,0);
  if (unaff_w22 < uVar1) {
    memcpy(&stack0x00000000,
           (void *)((long)param_2 + (ulong)*(uint *)(*param_2 + 0x104) * (long)(int)unaff_w22 + 0x20
                   ),(ulong)*(uint *)(*param_2 + 0x104));
    param_1[1] = CONCAT44(uStack000000000000000c,uStack0000000000000008);
    *param_1 = uStack0000000000000000;
    *(ulong *)((long)param_1 + 0x14) = CONCAT44(uStack0000000000000018,uStack0000000000000014);
    *(ulong *)((long)param_1 + 0xc) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
    return;
  }
  thunk_FUN_02dc61f4(PTR_DAT_06764080);
  uVar2 = thunk_FUN_02d9d534();
  uVar3 = thunk_FUN_02dc61f4(PTR_DAT_0675e7b8);
  FUN_04f7ef3c(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar2,param_4);
}


