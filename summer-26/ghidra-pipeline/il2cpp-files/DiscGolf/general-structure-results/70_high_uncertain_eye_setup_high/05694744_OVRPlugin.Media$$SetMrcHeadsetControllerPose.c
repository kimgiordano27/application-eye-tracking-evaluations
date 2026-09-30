/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcHeadsetControllerPose
ENTRY_POINT: 05694744
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetMrcHeadsetControllerPose(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar4;
  long lVar5;
  long *unaff_x22;
  
  if (unaff_x20 != (long *)0x0) {
    lVar5 = unaff_x19[0xe];
    if ((lVar5 != 0) &&
       (lVar1 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*unaff_x20 + 0x40)), lVar1 == 0)) {
LAB_0569480c:
      uVar3 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar3,0);
    }
    if (*(uint *)(unaff_x20 + 3) < 9) {
LAB_05694808:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    unaff_x20[0xc] = lVar5;
    LeanTween__value(unaff_x20 + 0xc,lVar5);
    lVar5 = unaff_x19[0xf];
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar2 = FUN_0634eb94(lVar5,0,0);
    if ((uVar2 & 1) != 0) {
      plVar4 = (long *)unaff_x19[5];
      if (plVar4 == (long *)0x0) goto LAB_05694804;
      lVar5 = unaff_x19[0xf];
      if ((lVar5 != 0) &&
         (lVar1 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar1 == 0))
      goto LAB_0569480c;
      if (*(uint *)(plVar4 + 3) < 10) goto LAB_05694808;
      plVar4[0xd] = lVar5;
      LeanTween__value(plVar4 + 0xd,lVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x05694800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x1a8))();
    return;
  }
LAB_05694804:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


