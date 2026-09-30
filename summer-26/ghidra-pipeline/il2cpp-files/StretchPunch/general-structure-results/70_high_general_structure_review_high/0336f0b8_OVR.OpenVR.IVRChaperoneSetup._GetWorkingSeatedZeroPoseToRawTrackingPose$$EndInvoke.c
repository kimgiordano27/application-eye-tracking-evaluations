/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 0336f0b8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__EndInvoke(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 in_w8;
  long unaff_x19;
  undefined4 unaff_w21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined4 in_stack_00000018;
  
  *(undefined1 *)(unaff_x19 + 0x62c) = in_w8;
  plVar1 = (long *)FUN_01d7d9bc(*unaff_x24,3);
  lVar2 = thunk_FUN_01de23e8(*unaff_x23,&stack0x0000001c);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_01de26bc(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
LAB_0336f1c0:
    uVar4 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar4,0);
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar2;
    thunk_FUN_01e10808(plVar1 + 4,lVar2);
    in_stack_00000018 = unaff_w21;
    lVar2 = thunk_FUN_01de23e8(*unaff_x23,&stack0x00000018);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_01de26bc(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_0336f1c0;
    if (1 < *(uint *)(plVar1 + 3)) {
      plVar1[5] = lVar2;
      thunk_FUN_01e10808(plVar1 + 5,lVar2);
      lVar2 = thunk_FUN_01de23e8(*unaff_x23,&stack0x0000000c);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_01de26bc(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_0336f1c0;
      if (2 < *(uint *)(plVar1 + 3)) {
        plVar1[6] = lVar2;
        thunk_FUN_01e10808(plVar1 + 6,lVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


