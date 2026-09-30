/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.EyeGazeState>
ENTRY_POINT: 02169448
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 155
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x02169570) */

void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_EyeGazeState>
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  byte in_w8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar5;
  undefined8 in_stack_00000030;
  
  do {
    if ((in_w8 & 1) == 0) {
      param_2 = FUN_01dde7f8(param_2);
    }
    lVar3 = thunk_FUN_01de26bc(unaff_x21,param_2);
    if (lVar3 != 0) {
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01dde7f8(lVar3);
      }
      lVar3 = thunk_FUN_01de26bc(unaff_x21,lVar3);
      lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01dde7f8(lVar5);
      }
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = thunk_FUN_01de26bc(lVar3,lVar5);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(lVar3,lVar5);
        }
      }
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar3 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
        thunk_FUN_01e10808();
      }
      else {
        FUN_03198f70();
      }
    }
    uVar2 = FUN_02c52b88(&stack0x00000020,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x48));
    if ((uVar2 & 1) == 0) {
      FUN_02c52b84(&stack0x00000020,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x50));
      return;
    }
    param_2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    in_w8 = *(byte *)(param_2 + 0x135);
    unaff_x21 = in_stack_00000030;
  } while( true );
}


