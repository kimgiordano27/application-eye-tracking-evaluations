/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$LateUpdate
ENTRY_POINT: 076ee7d8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__LateUpdate(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint in_w8;
  long unaff_x19;
  ulong uVar7;
  long *plVar8;
  int unaff_w22;
  undefined4 unaff_w23;
  undefined8 unaff_x24;
  long *plVar9;
  long unaff_x26;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  do {
    if (*(uint *)(unaff_x26 + 0x18) <= in_w8) goto LAB_076eeab8;
    if (*(long *)(unaff_x19 + 0x40) == 0) break;
    uVar7 = (ulong)in_w8;
    plVar9 = *(long **)(unaff_x26 + uVar7 * 8 + 0x20);
    FUN_094e9b40(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_09f2f600,plVar9,0);
    if (plVar9 == (long *)0x0) break;
    plVar8 = *(long **)(unaff_x19 + 0x50);
    uVar2 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
    uVar3 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
    lVar4 = FUN_0950b9c0(uVar2,uVar3,0,unaff_w23,0);
    if (plVar8 == (long *)0x0) break;
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar5 == 0)) {
      uVar10 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar10,0);
    }
    if (*(uint *)(plVar8 + 3) <= in_w8) goto LAB_076eeab8;
    plVar8[uVar7 + 4] = lVar4;
    thunk_FUN_044bb4b4(plVar8 + uVar7 + 4,lVar4);
    lVar4 = *(long *)(unaff_x19 + 0x50);
    iVar1 = unaff_w22;
    if (*(char *)(unaff_x19 + 0x30) != '\0') {
      iVar1 = unaff_w22 + 1;
    }
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= in_w8) goto LAB_076eeab8;
    uVar10 = *(undefined8 *)(lVar4 + uVar7 * 8 + 0x20);
    uVar11 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_094d4178(unaff_x24,uVar10,uVar11,iVar1,0);
    lVar4 = *(long *)(unaff_x19 + 0x50);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= in_w8) goto LAB_076eeab8;
    unaff_x24 = *(undefined8 *)(lVar4 + uVar7 * 8 + 0x20);
    if ((int)in_w8 < 1) {
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        FUN_094e9b40(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_09f2f600,in_stack_00000018,0
                    );
        uVar10 = *(undefined8 *)(unaff_x19 + 0x40);
        uVar2 = 7;
        if (*(char *)(unaff_x19 + 0x30) != '\0') {
          uVar2 = 8;
        }
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_044a54b4(7);
        }
        FUN_094d4178(unaff_x24,in_stack_00000008,uVar10,uVar2,0);
        uVar7 = 0;
        lVar4 = 0x20;
        goto LAB_076ee978;
      }
      break;
    }
    unaff_x26 = *(long *)(unaff_x19 + 0x48);
    in_w8 = in_w8 - 1;
  } while (unaff_x26 != 0);
LAB_076eeab4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
LAB_076ee978:
  lVar5 = *(long *)(unaff_x19 + 0x48);
  if (lVar5 == 0) goto LAB_076eeab4;
  if (*(uint *)(lVar5 + 0x18) <= uVar7) {
LAB_076eeab8:
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  uVar10 = *(undefined8 *)(lVar5 + lVar4);
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar6 = FUN_09531730(uVar10,0,0);
  if ((uVar6 & 1) != 0) {
    lVar5 = *(long *)(unaff_x19 + 0x48);
    if (lVar5 == 0) goto LAB_076eeab4;
    if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_076eeab8;
    FUN_0950a138(*(undefined8 *)(lVar5 + lVar4),0);
  }
  lVar5 = *(long *)(unaff_x19 + 0x50);
  if (lVar5 == 0) goto LAB_076eeab4;
  if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_076eeab8;
  uVar10 = *(undefined8 *)(lVar5 + lVar4);
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar6 = FUN_09531730(uVar10,0,0);
  if ((uVar6 & 1) != 0) {
    lVar5 = *(long *)(unaff_x19 + 0x50);
    if (lVar5 == 0) goto LAB_076eeab4;
    if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_076eeab8;
    FUN_0950a138(*(undefined8 *)(lVar5 + lVar4),0);
  }
  lVar5 = *(long *)(unaff_x19 + 0x48);
  if (lVar5 == 0) goto LAB_076eeab4;
  if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_076eeab8;
  *(undefined8 *)(lVar5 + lVar4) = 0;
  thunk_FUN_044bb4b4((undefined8 *)(lVar5 + lVar4),0);
  lVar5 = *(long *)(unaff_x19 + 0x50);
  if (lVar5 == 0) goto LAB_076eeab4;
  if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_076eeab8;
  *(undefined8 *)(lVar5 + lVar4) = 0;
  thunk_FUN_044bb4b4((undefined8 *)(lVar5 + lVar4),0);
  lVar4 = lVar4 + 8;
  uVar7 = uVar7 + 1;
  if (lVar4 == 0xa0) {
    FUN_0950a138(in_stack_00000000,0);
    return;
  }
  goto LAB_076ee978;
}


