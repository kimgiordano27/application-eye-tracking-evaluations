/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.EyeGazeState>
ENTRY_POINT: 0319556c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 167
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_EyeGazeState>(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x28;
  
  while( true ) {
    do {
      do {
        unaff_x20 = unaff_x20 + 1;
        if ((long)(int)*(uint *)(unaff_x19 + 0x18) <= (long)unaff_x20) {
          return;
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar3 = *(long *)(unaff_x22 + unaff_x20 * 8);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar4 = *(undefined8 *)(lVar3 + 0x2d8);
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar1 = FUN_0634eb94(uVar4,0,0);
        if ((uVar1 & 1) != 0) {
          if (*(long *)(lVar3 + 0x2d8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar2 = *(long *)(*(long *)(lVar3 + 0x2d8) + 0x20);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(int *)(lVar3 + 0x2e8) < *(int *)(lVar2 + 0x18)) {
            lVar2 = FUN_0400ff1c(lVar2,*(int *)(lVar3 + 0x2e8),*unaff_x21);
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            *(long *)(lVar2 + 0x138) = lVar3;
            LeanTween__value(lVar2 + 0x138,lVar3);
            if (*(long *)(lVar3 + 0x2d8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar2 = *(long *)(*(long *)(lVar3 + 0x2d8) + 0x20);
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar2 = FUN_0400ff1c(lVar2,*(undefined4 *)(lVar3 + 0x2e8),*unaff_x21);
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            *(undefined4 *)(lVar2 + 0x140) = 0;
          }
        }
        uVar4 = *(undefined8 *)(lVar3 + 0x2e0);
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar1 = FUN_0634eb94(uVar4,0,0);
      } while ((uVar1 & 1) == 0);
      if (*(long *)(lVar3 + 0x2e0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar2 = *(long *)(*(long *)(lVar3 + 0x2e0) + 0x20);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    } while (*(int *)(lVar2 + 0x18) <= *(int *)(lVar3 + 0x2f0));
    lVar2 = FUN_0400ff1c(lVar2,*(int *)(lVar3 + 0x2f0),*unaff_x21);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(long *)(lVar2 + 0x138) = lVar3;
    LeanTween__value(lVar2 + 0x138,lVar3);
    if (*(long *)(lVar3 + 0x2e0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar2 = *(long *)(*(long *)(lVar3 + 0x2e0) + 0x20);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar2 = FUN_0400ff1c(lVar2,*(undefined4 *)(lVar3 + 0x2f0),*unaff_x21);
    if (*(long *)(lVar3 + 0x60) == 0) break;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(int *)(lVar2 + 0x140) = *(int *)(*(long *)(lVar3 + 0x60) + 0x18) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


