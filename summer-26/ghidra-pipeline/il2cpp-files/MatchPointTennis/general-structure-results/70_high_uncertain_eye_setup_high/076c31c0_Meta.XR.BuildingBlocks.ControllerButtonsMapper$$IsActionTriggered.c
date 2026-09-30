/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$IsActionTriggered
ENTRY_POINT: 076c31c0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_ControllerButtonsMapper__IsActionTriggered(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  int *unaff_x19;
  long unaff_x20;
  bool bVar8;
  long unaff_x21;
  int unaff_w23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  while( true ) {
    iVar7 = param_1;
    if (param_1 < 0) {
      iVar7 = *(int *)(unaff_x20 + 0x10);
    }
    if (0 < iVar7 - unaff_w23) {
      uVar2 = System_Globalization_HijriCalendar__GetDaysInYear();
      uVar3 = thunk_FUN_078b3114(uVar2,*unaff_x28,0);
      if ((uVar3 & 1) == 0) {
        uVar3 = FUN_078b33f8(uVar2,*unaff_x24,0);
        if ((uVar3 & 1) != 0) {
          if (unaff_x21 == 0) goto LAB_076c33c0;
          lVar6 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar6 == 0) goto LAB_076c33c0;
          uVar1 = *(uint *)(unaff_x21 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
            puVar4 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
            *puVar4 = uVar2;
            thunk_FUN_044bb4b4(puVar4,uVar2);
          }
          else {
            FUN_05bade44();
          }
        }
      }
      else {
        if (unaff_x21 == 0) goto LAB_076c33c0;
        if (*(int *)(unaff_x21 + 0x18) < 1) {
          *unaff_x19 = *unaff_x19 + 1;
        }
        else {
          FUN_05baf638();
        }
      }
    }
    unaff_w23 = param_1 + 1;
    if (param_1 < 0) break;
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if (unaff_x20 == 0) goto LAB_076c33c0;
    param_1 = FUN_078b96dc();
  }
  plVar5 = (long *)thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20ed0);
  FUN_078c1634(plVar5,0);
  if (unaff_x21 != 0) {
    FUN_05bae95c(&stack0x00000008);
    bVar8 = true;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar3 = FUN_0768d020(&stack0x00000020,*unaff_x26), uVar2 = in_stack_00000030,
          (uVar3 & 1) != 0) {
      if (bVar8) {
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
      }
      else {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        FUN_078bb708(plVar5,*(undefined2 *)(*(long *)(*unaff_x25 + 0xb8) + 10),0);
      }
      FUN_078bb7b4(plVar5,uVar2,0);
      bVar8 = false;
    }
    FUN_0768d01c(&stack0x00000020,*(undefined8 *)PTR_DAT_09f22c50);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      return;
    }
  }
LAB_076c33c0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


