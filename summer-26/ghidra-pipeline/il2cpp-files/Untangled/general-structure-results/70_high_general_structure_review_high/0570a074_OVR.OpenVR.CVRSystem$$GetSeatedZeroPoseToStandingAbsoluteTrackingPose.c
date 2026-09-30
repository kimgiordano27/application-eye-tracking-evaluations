/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem$$GetSeatedZeroPoseToStandingAbsoluteTrackingPose
ENTRY_POINT: 0570a074
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure
*/


void OVR_OpenVR_CVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
code_r0x0570a074:
  FUN_05705ef4();
LAB_0570a0b0:
  FUN_05701b3c();
  do {
    uVar6 = (**(code **)(*unaff_x19 + 0x288))();
    if ((uVar6 & 1) == 0) {
      FUN_0570cfec();
LAB_0570a378:
      FUN_0570cdc0();
      return;
    }
    iVar1 = (**(code **)(*unaff_x19 + 0x238))();
    if (iVar1 != 4) {
      if (iVar1 != 0xd) {
        FUN_02a551a0();
        uVar2 = (**(code **)(*unaff_x19 + 0x238))();
        in_stack_00000018 = thunk_FUN_02f239f0(PTR_DAT_06d55320);
        in_stack_00000020 = 0xffffffffffffffff;
        in_stack_00000028 = uVar2;
        uVar4 = FUN_05638848(&stack0x00000018,0);
        uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d57a50);
        FUN_05458458(uVar7,uVar4,0);
        uVar4 = FUN_05692378();
        uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d57c78);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar4,uVar7);
      }
      goto LAB_0570a378;
    }
    plVar3 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar6 = (**(code **)(*unaff_x19 + 0x288))();
    if ((uVar6 & 1) == 0) {
      lVar5 = thunk_FUN_02f239f0(PTR_DAT_06d06338);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar7 = FUN_055b5920(0);
      uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d57ac0);
      FUN_056f1630(uVar8,uVar7,uVar4);
      uVar4 = FUN_05692378();
      uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d57c78);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar4,uVar7);
    }
    if (*(long *)(unaff_x20 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar5 = OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking__Invoke
                      (*(long *)(unaff_x20 + 0xc0),uVar4);
    if (((lVar5 == 0) || (*(char *)(lVar5 + 0x82) == '\0')) || (*(char *)(lVar5 + 0x80) != '\0'))
    break;
    plVar3 = (long *)(lVar5 + 0x48);
    if (*plVar3 == 0) {
      lVar5 = FUN_05705a10();
      *plVar3 = lVar5;
      thunk_FUN_02f411dc(plVar3);
    }
    FUN_05705e88();
    uVar6 = FUN_0570bc24();
    if ((uVar6 & 1) == 0) {
      FUN_05698a14();
    }
  } while( true );
  uVar4 = (**(code **)(*unaff_x19 + 0x238))();
  uVar6 = FUN_056eab88(uVar4,0);
  if ((uVar6 & 1) == 0) {
    uVar4 = *unaff_x29;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_056109c0(uVar4,0);
  }
  else {
    (**(code **)(*unaff_x19 + 600))();
  }
  FUN_05705a10();
  plVar3 = (long *)FUN_05705e88();
  if ((plVar3 != (long *)0x0) &&
     (uVar6 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0)),
     (uVar6 & 1) != 0)) goto code_r0x0570a074;
  OVR_OpenVR_IVRScreenshots__UpdateScreenshotProgress__BeginInvoke();
  goto LAB_0570a0b0;
}


