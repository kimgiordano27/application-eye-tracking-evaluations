/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.AppPerfFrameStats>
ENTRY_POINT: 01f0618c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_AppPerfFrameStats>(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long in_x9;
  long unaff_x20;
  void *unaff_x21;
  long unaff_x22;
  long *plVar5;
  size_t unaff_x23;
  long unaff_x25;
  long *plVar6;
  long unaff_x29;
  
  lVar1 = FUN_03349ae8();
  if (lVar1 != 0) {
    plVar6 = *(long **)(unaff_x22 + 0x38);
    plVar5 = *(long **)(lVar1 + 0x38);
    if (-1 < *(int *)(*plVar6 + 0x28)) {
      unaff_x21 = (void *)(unaff_x29 + -0x10);
    }
    memcpy((void *)(param_1 - in_x9),unaff_x21,unaff_x23);
    lVar2 = thunk_FUN_01afa70c(*plVar6,(void *)(param_1 - in_x9));
    if (plVar5 != (long *)0x0) {
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_01afa9e0(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0)) {
        uVar4 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar4,0);
      }
      if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      plVar5[4] = lVar2;
      thunk_FUN_01b4f09c(plVar5 + 4,lVar2);
      uVar4 = FUN_03337144(lVar1,0);
      if (*(long *)(unaff_x20 + 0x18) != 0) {
        FUN_03337a94(*(long *)(unaff_x20 + 0x18),lVar1,0);
        FUN_033371c0(lVar1,uVar4,0);
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


