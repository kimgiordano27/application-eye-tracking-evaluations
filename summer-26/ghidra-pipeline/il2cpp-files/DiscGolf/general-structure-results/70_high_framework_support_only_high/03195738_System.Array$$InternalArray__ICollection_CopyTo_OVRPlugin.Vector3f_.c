/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Vector3f>
ENTRY_POINT: 03195738
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Vector3f>(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x26;
  undefined8 uVar3;
  long *unaff_x28;
  
  while( true ) {
    do {
      do {
        uVar3 = *(undefined8 *)(unaff_x26 + 0x2e0);
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar1 = FUN_0634eb94(uVar3,0,0);
        if ((uVar1 & 1) != 0) {
          if (*(long *)(unaff_x26 + 0x2e0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar2 = *(long *)(*(long *)(unaff_x26 + 0x2e0) + 0x20);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(int *)(unaff_x26 + 0x2f0) < *(int *)(lVar2 + 0x18)) {
            lVar2 = FUN_0400ff1c(lVar2,*(int *)(unaff_x26 + 0x2f0),*unaff_x21);
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            *(long *)(lVar2 + 0x138) = unaff_x26;
            LeanTween__value(lVar2 + 0x138,unaff_x26);
            if (*(long *)(unaff_x26 + 0x2e0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar2 = *(long *)(*(long *)(unaff_x26 + 0x2e0) + 0x20);
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar2 = FUN_0400ff1c(lVar2,*(undefined4 *)(unaff_x26 + 0x2f0),*unaff_x21);
            if (*(long *)(unaff_x26 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            *(int *)(lVar2 + 0x140) = *(int *)(*(long *)(unaff_x26 + 0x60) + 0x18) + -1;
          }
        }
        unaff_x20 = unaff_x20 + 1;
        if ((long)(int)*(uint *)(unaff_x19 + 0x18) <= (long)unaff_x20) {
          return;
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        unaff_x26 = *(long *)(unaff_x22 + unaff_x20 * 8);
        if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar3 = *(undefined8 *)(unaff_x26 + 0x2d8);
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar1 = FUN_0634eb94(uVar3,0,0);
      } while ((uVar1 & 1) == 0);
      if (*(long *)(unaff_x26 + 0x2d8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar2 = *(long *)(*(long *)(unaff_x26 + 0x2d8) + 0x20);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    } while (*(int *)(lVar2 + 0x18) <= *(int *)(unaff_x26 + 0x2e8));
    lVar2 = FUN_0400ff1c(lVar2,*(int *)(unaff_x26 + 0x2e8),*unaff_x21);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(long *)(lVar2 + 0x138) = unaff_x26;
    LeanTween__value(lVar2 + 0x138,unaff_x26);
    if (*(long *)(unaff_x26 + 0x2d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar2 = *(long *)(*(long *)(unaff_x26 + 0x2d8) + 0x20);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar2 = FUN_0400ff1c(lVar2,*(undefined4 *)(unaff_x26 + 0x2e8),*unaff_x21);
    if (lVar2 == 0) break;
    *(undefined4 *)(lVar2 + 0x140) = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


