/*
FUNCTION_NAME: OVRPlugin$$GetTrackerPose
ENTRY_POINT: 02c1ab60
PROGRAM: sharks-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__GetTrackerPose(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = FUN_02bf4718();
  if (lVar1 == 0) {
    if (*(int *)(unaff_x20 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
  }
  else {
    uVar5 = *(undefined8 *)PTR_DAT_037f2f98;
    plVar2 = (long *)thunk_FUN_01861ac0(lVar1,uVar5);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944(lVar1,uVar5);
    }
    if (*(int *)(unaff_x20 + 0x18) != 0) {
      lVar1 = *(long *)(unaff_x20 + 0x20);
      if (lVar1 == 0) {
        lVar4 = 0;
      }
      else {
        lVar3 = thunk_FUN_01861ac0(lVar1,*(undefined8 *)(*plVar2 + 0x40));
        lVar4 = lVar1;
        if (lVar3 == 0) {
          uVar5 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar5,0);
        }
      }
      if ((int)plVar2[3] != 0) {
        plVar2[4] = lVar4;
        thunk_FUN_0188fd20(plVar2 + 4,lVar1);
        return plVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


