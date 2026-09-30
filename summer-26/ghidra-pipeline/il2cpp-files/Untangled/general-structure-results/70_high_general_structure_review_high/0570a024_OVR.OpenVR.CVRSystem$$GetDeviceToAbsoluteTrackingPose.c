/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem$$GetDeviceToAbsoluteTrackingPose
ENTRY_POINT: 0570a024
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


void OVR_OpenVR_CVRSystem__GetDeviceToAbsoluteTrackingPose(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
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
  
code_r0x0570a024:
  FUN_056109c0(param_1,param_2);
LAB_0570a028:
  FUN_05705a10();
  plVar5 = (long *)FUN_05705e88();
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
    if ((uVar6 & 1) != 0) {
      FUN_05705ef4();
      goto LAB_0570a0b0;
    }
  }
  OVR_OpenVR_IVRScreenshots__UpdateScreenshotProgress__BeginInvoke();
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
        uVar3 = FUN_05638848(&stack0x00000018,0);
        uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d57a50);
        FUN_05458458(uVar7,uVar3,0);
        uVar3 = FUN_05692378();
        uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d57c78);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar3,uVar7);
      }
      goto LAB_0570a378;
    }
    plVar5 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar3 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    uVar6 = (**(code **)(*unaff_x19 + 0x288))();
    if ((uVar6 & 1) == 0) {
      lVar4 = thunk_FUN_02f239f0(PTR_DAT_06d06338);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar7 = FUN_055b5920(0);
      uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d57ac0);
      FUN_056f1630(uVar8,uVar7,uVar3);
      uVar3 = FUN_05692378();
      uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d57c78);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar3,uVar7);
    }
    if (*(long *)(unaff_x20 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar4 = OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking__Invoke
                      (*(long *)(unaff_x20 + 0xc0),uVar3);
    if (((lVar4 == 0) || (*(char *)(lVar4 + 0x82) == '\0')) || (*(char *)(lVar4 + 0x80) != '\0'))
    break;
    plVar5 = (long *)(lVar4 + 0x48);
    if (*plVar5 == 0) {
      lVar4 = FUN_05705a10();
      *plVar5 = lVar4;
      thunk_FUN_02f411dc(plVar5);
    }
    FUN_05705e88();
    uVar6 = FUN_0570bc24();
    if ((uVar6 & 1) == 0) {
      FUN_05698a14();
    }
  } while( true );
  uVar3 = (**(code **)(*unaff_x19 + 0x238))();
  uVar6 = FUN_056eab88(uVar3,0);
  if ((uVar6 & 1) == 0) goto LAB_0570a008;
  (**(code **)(*unaff_x19 + 600))();
  goto LAB_0570a028;
LAB_0570a008:
  param_1 = *unaff_x29;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  param_2 = 0;
  goto code_r0x0570a024;
}


