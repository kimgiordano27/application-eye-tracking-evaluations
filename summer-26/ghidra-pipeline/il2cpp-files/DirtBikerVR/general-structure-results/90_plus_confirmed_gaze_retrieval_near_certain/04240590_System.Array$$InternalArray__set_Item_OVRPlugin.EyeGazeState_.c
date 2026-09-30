/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 04240590
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


int System_Array__InternalArray__set_Item<OVRPlugin_EyeGazeState>
              (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar7;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  
  uStack0000000000000050 = param_1;
  uStack0000000000000060 = param_1;
  iVar1 = thunk_FUN_03a9985c(param_2,0);
  if (1 < iVar1) {
    thunk_FUN_03af1434(&DAT_0861d9c0);
    uVar4 = thunk_FUN_03ac74bc();
    uVar5 = thunk_FUN_03af1434(&DAT_08694740);
    FUN_06762458(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar4);
  }
  uVar2 = FUN_06769a04();
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      memcpy(&stack0x00000050,
             (void *)((long)unaff_x20 + uVar7 * *(uint *)(*unaff_x20 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x20 + 0x104));
      in_stack_00000038 = unaff_x21[1];
      in_stack_00000030 = *unaff_x21;
      in_stack_00000048 = unaff_x21[3];
      in_stack_00000040 = unaff_x21[2];
      thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000030);
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        FUN_03ac4090(lVar6);
      }
      uVar3 = thunk_FUN_067aa794();
      if ((uVar3 & 1) != 0) {
        iVar1 = thunk_FUN_03a9981c();
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_03a9981c();
  return iVar1 + -1;
}


