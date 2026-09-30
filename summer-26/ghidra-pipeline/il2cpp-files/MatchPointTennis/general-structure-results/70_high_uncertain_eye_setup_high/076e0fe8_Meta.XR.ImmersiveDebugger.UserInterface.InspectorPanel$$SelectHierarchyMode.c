/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$SelectHierarchyMode
ENTRY_POINT: 076e0fe8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__SelectHierarchyMode
               (long param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  int unaff_w23;
  undefined8 unaff_x24;
  undefined8 uVar9;
  long *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  
  while (unaff_w23 < *(int *)(param_1 + 0x18)) {
    if (unaff_x20 != 0) goto LAB_076e1300;
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      param_1 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
      if (param_1 == 0) goto LAB_076e172c;
    }
    unaff_x20 = FUN_05badb74(param_1,unaff_w23,*(undefined8 *)PTR_DAT_09f2ef68);
    if ((unaff_x20 == 0) || (lVar8 = *(long *)(unaff_x20 + 0x18), lVar8 == 0)) goto LAB_076e172c;
    bVar1 = true;
    uVar6 = 0;
    while ((bVar1 && ((long)uVar6 < (long)*(int *)(lVar8 + 0x18)))) {
      lVar8 = *unaff_x28;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar8 = *unaff_x28;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x20);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar2 = FUN_05badb74(lVar8,uVar6 + 1 & 0xffffffff,*unaff_x29);
      lVar8 = *(long *)(unaff_x20 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      uVar9 = *(undefined8 *)(lVar8 + uVar6 * 8 + 0x20);
      uVar3 = FUN_076e19f4(uVar2,uVar9,&stack0x00000008);
      lVar8 = in_stack_00000008;
      if ((uVar3 & 1) == 0) {
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar9 = FUN_076e0214(uVar9);
        unaff_x24 = FUN_078b56f4(*unaff_x22,uVar2,*unaff_x21,uVar9,0);
        bVar1 = false;
      }
      else {
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if ((in_stack_00000008 != 0) &&
           (lVar4 = thunk_FUN_04485110(in_stack_00000008,*(undefined8 *)(*unaff_x19 + 0x40)),
           lVar4 == 0)) {
          uVar2 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
          FUN_04447d10(uVar2,0);
        }
        if (*(uint *)(unaff_x19 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        unaff_x19[uVar6 + 4] = lVar8;
        thunk_FUN_044bb4b4(unaff_x19 + uVar6 + 4,lVar8);
        bVar1 = true;
      }
      lVar8 = *(long *)(unaff_x20 + 0x18);
      uVar6 = uVar6 + 1;
      if (lVar8 == 0) goto LAB_076e172c;
    }
    if (!bVar1) {
      unaff_x20 = 0;
    }
    unaff_w23 = unaff_w23 + 1;
    param_2 = *unaff_x28;
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      param_2 = *unaff_x28;
    }
    param_1 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
    if (param_1 == 0) goto LAB_076e172c;
  }
  if (unaff_x20 == 0) {
    uVar6 = FUN_078b4450(unaff_x24,0);
    uVar2 = *(undefined8 *)PTR_DAT_09f2f138;
    if ((uVar6 & 1) == 0) {
      uVar2 = unaff_x24;
    }
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c33b0(uVar2,0);
    return;
  }
LAB_076e1300:
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    plVar5 = (long *)FUN_0796aedc(*(long *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x20));
    plVar7 = *(long **)(unaff_x20 + 0x10);
    if (plVar7 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar7 + 0x3d8))(plVar7,*(undefined8 *)(*plVar7 + 0x3e0));
      lVar8 = *(long *)(PTR_DAT_09f1e5b8 + 0x20);
      if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar9 = FUN_07a4ce38(lVar8 + 0x20,0);
      uVar6 = FUN_07a56f5c(uVar2,uVar9,0);
      if ((uVar6 & 1) != 0) {
        if ((plVar5 == (long *)0x0) ||
           (uVar6 = (**(code **)(*plVar5 + 0x138))(plVar5,0,*(undefined8 *)(*plVar5 + 0x140)),
           (uVar6 & 1) != 0)) {
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar2 = *(undefined8 *)PTR_DAT_09f2f168;
        }
        else {
          uVar2 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          uVar2 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f2f160,uVar2,0);
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
          }
        }
        FUN_094c652c(uVar2,0);
      }
      return;
    }
  }
LAB_076e172c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


