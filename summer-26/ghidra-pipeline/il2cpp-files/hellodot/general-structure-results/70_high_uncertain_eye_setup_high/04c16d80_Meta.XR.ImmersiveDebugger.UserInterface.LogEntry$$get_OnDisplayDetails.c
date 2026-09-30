/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.LogEntry$$get_OnDisplayDetails
ENTRY_POINT: 04c16d80
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_LogEntry__get_OnDisplayDetails(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar8;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  *(undefined1 *)(unaff_x23 + 0x60e) = 1;
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar3 = *unaff_x22;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x20);
  uVar4 = FUN_04c120f4();
  uVar5 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e2e08);
  FUN_054dba24(uVar5,uVar8,uVar4,0);
  plVar6 = *(long **)(unaff_x20 + 0x40);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar3 = (**(code **)(*plVar6 + 0x198))
                    (plVar6,uVar5,*(undefined8 *)(unaff_x19 + 0xc),*(undefined8 *)(*plVar6 + 0x1a0))
  ;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  _in_stack_00000030 = FUN_0404bcb8(lVar3,0,*(undefined8 *)PTR_DAT_065e1788);
  uVar7 = FUN_044a8fc8(&stack0x00000030,*(undefined8 *)PTR_DAT_065e1780);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
    if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_0335fc7c(unaff_x19 + 2,&stack0x00000030);
  }
  else {
    lVar3 = FUN_044a9014(&stack0x00000030,*(undefined8 *)PTR_DAT_065e1778);
    *(long *)(unaff_x19 + 0x10) = lVar3;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar7 = FUN_054df770(lVar3,0);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x38);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar3 = FUN_054dcf98(lVar3,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      _in_stack_00000020 = FUN_0404bcb8(lVar3,0,*(undefined8 *)PTR_DAT_065e1700);
      uVar7 = FUN_044a8fc8(&stack0x00000020,*(undefined8 *)PTR_DAT_065e16e8);
      if ((uVar7 & 1) != 0) {
        uVar4 = thunk_FUN_02c7737c(PTR_DAT_065e16e0);
        uVar4 = FUN_044a9014(&stack0x00000020,uVar4);
        puVar2 = PTR_DAT_065dd1f0;
        lVar3 = thunk_FUN_02c7737c(PTR_DAT_065dd1f0);
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        if (DAT_06a6975a == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd1f0);
          DAT_06a6975a = '\x01';
        }
        lVar3 = *(long *)puVar2;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
          lVar3 = *(long *)puVar2;
        }
        lVar3 = **(long **)(lVar3 + 0xb8);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar5 = thunk_FUN_02c7737c(PTR_DAT_065e5420);
        uVar4 = FUN_0349e5c8(lVar3,uVar4,uVar5);
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar1 = *(undefined4 *)(*(long *)(unaff_x19 + 0x10) + 0x20);
        in_stack_00000008 = 0;
        uVar5 = thunk_FUN_02c7737c(PTR_DAT_065e5428);
        Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
                  (&stack0x00000008,uVar1,uVar5);
        thunk_FUN_02c7737c(PTR_DAT_065e3a10);
        uVar5 = thunk_FUN_02cea894();
        FUN_04c11c30(uVar5,uVar4,in_stack_00000008);
        uVar4 = thunk_FUN_02c7737c(PTR_DAT_065e5660);
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar5,uVar4);
      }
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000020;
      if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_0335fc7c(unaff_x19 + 2,&stack0x00000020);
    }
    else {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar3 = FUN_04c140ec();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      _in_stack_00000010 = FUN_04fa5130(lVar3,0,0);
      uVar7 = FUN_04e5bb90(&stack0x00000010,0);
      if ((uVar7 & 1) == 0) {
        *unaff_x19 = 2;
        *(undefined1 (*) [16])(unaff_x19 + 0x1a) = _in_stack_00000010;
        if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_033614b8(unaff_x19 + 2,&stack0x00000010);
      }
      else {
        FUN_04e5bbac(&stack0x00000010,0);
        *(undefined8 *)(unaff_x19 + 0x10) = 0;
        *unaff_x19 = 0xfffffffe;
        if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_04e5a1e4(unaff_x19 + 2,0);
      }
    }
  }
  return;
}


