/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.EyeGazeState>
ENTRY_POINT: 041f4424
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


bool System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_EyeGazeState>
               (long *param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_03cf12a0(param_3);
  }
  in_stack_00000090 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  iVar2 = thunk_FUN_03d12034(param_1,0);
  if (1 < iVar2) {
    thunk_FUN_03ce5214(PTR_DAT_08e804b0);
    uVar4 = thunk_FUN_03cf5234();
    uVar6 = thunk_FUN_03ce5214(PTR_DAT_08e804b8);
    FUN_0711241c(uVar4,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar4,param_3);
  }
  uVar3 = FUN_07119d8c(param_1,0);
  if ((int)uVar3 < 1) {
    bVar1 = false;
  }
  else {
    uVar8 = 0;
    bVar1 = true;
    do {
      memcpy(&stack0x00000070,(void *)((long)param_1 + uVar8 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      in_stack_00000048 = in_stack_00000078;
      in_stack_00000040 = in_stack_00000070;
      in_stack_00000058 = in_stack_00000088;
      in_stack_00000050 = in_stack_00000080;
      in_stack_00000060 = in_stack_00000090;
      uVar4 = thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),&stack0x00000040);
      lVar7 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03cf1244(lVar7);
      }
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000038 = param_2[4];
      in_stack_00000020 = param_2[1];
      in_stack_00000018 = *param_2;
      in_stack_00000030 = param_2[3];
      in_stack_00000028 = param_2[2];
      in_stack_00000008 = lVar7;
      uVar5 = thunk_FUN_0715d3b4(&stack0x00000008,uVar4,0);
      if ((uVar5 & 1) != 0) {
        return bVar1;
      }
      uVar8 = uVar8 + 1;
      bVar1 = uVar8 < uVar3;
    } while (uVar3 != uVar8);
  }
  return bVar1;
}


