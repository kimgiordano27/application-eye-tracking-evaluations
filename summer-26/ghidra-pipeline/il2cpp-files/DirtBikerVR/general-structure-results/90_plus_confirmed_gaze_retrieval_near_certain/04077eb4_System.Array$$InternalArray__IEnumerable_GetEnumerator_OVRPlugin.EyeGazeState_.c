/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.EyeGazeState>
ENTRY_POINT: 04077eb4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


bool System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_EyeGazeState>(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x22;
  ulong uVar8;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  
  FUN_03ac40ec();
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  iVar2 = thunk_FUN_03a9985c();
  if (1 < iVar2) {
    thunk_FUN_03af1434(&DAT_0861d9c0);
    uVar5 = thunk_FUN_03ac74bc();
    uVar6 = thunk_FUN_03af1434(&DAT_08694740);
    FUN_06762458(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar5);
  }
  uVar3 = FUN_06769a04();
  if ((int)uVar3 < 1) {
    bVar1 = false;
  }
  else {
    uVar8 = 0;
    bVar1 = true;
    do {
      memcpy(&stack0x00000030,
             (void *)((long)unaff_x22 + uVar8 * *(uint *)(*unaff_x22 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x22 + 0x104));
      in_stack_00000020 = in_stack_00000030;
      in_stack_00000028 = in_stack_00000038;
      thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000020);
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        FUN_03ac4090(lVar7);
      }
      uVar4 = thunk_FUN_067aa794();
      if ((uVar4 & 1) != 0) {
        return bVar1;
      }
      uVar8 = uVar8 + 1;
      bVar1 = uVar8 < uVar3;
    } while (uVar3 != uVar8);
  }
  return bVar1;
}


