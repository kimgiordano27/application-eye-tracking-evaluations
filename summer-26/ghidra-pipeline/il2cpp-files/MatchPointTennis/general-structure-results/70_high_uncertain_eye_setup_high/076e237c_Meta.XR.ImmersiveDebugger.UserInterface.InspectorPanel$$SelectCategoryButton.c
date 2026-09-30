/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$SelectCategoryButton
ENTRY_POINT: 076e237c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__SelectCategoryButton(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  int *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  int unaff_w22;
  int iVar8;
  long *plVar9;
  undefined8 *unaff_x25;
  int unaff_w26;
  long *unaff_x27;
  
  do {
    iVar8 = unaff_w22;
    lVar5 = *unaff_x27;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar5 = *unaff_x27;
    }
    plVar7 = *(long **)(lVar5 + 0xb8);
    if (*plVar7 == 0) goto LAB_076e2640;
    puVar2 = PTR_DAT_09f2ef68;
    if (*(int *)(*plVar7 + 0x18) + -1 <= iVar8) break;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      plVar7 = *(long **)(*unaff_x27 + 0xb8);
    }
    if (*plVar7 == 0) goto LAB_076e2640;
    plVar9 = (long *)plVar7[6];
    lVar5 = FUN_05badb74(*plVar7,iVar8 + 1,*unaff_x25);
    if ((lVar5 == 0) || (plVar9 == (long *)0x0)) goto LAB_076e2640;
    iVar4 = (**(code **)(*plVar9 + 0x1a8))
                      (plVar9,*(undefined8 *)(lVar5 + 0x28),*unaff_x21,3,
                       *(undefined8 *)(*plVar9 + 0x1b0));
    unaff_w22 = iVar8 + 1;
    puVar2 = PTR_DAT_09f2ef68;
  } while (iVar4 == 0);
  do {
    puVar3 = PTR_DAT_09f2ef68;
    if (iVar8 < unaff_w26) {
      PTR_DAT_09f2ef68 = puVar2;
      return;
    }
    lVar5 = *unaff_x27;
    PTR_DAT_09f2ef68 = puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar5 = *unaff_x27;
    }
    if (((**(long **)(lVar5 + 0xb8) == 0) ||
        (lVar5 = FUN_05badb74(**(long **)(lVar5 + 0xb8),unaff_w26,*(undefined8 *)puVar3), lVar5 == 0
        )) || (*(long *)(lVar5 + 0x18) == 0)) goto LAB_076e2640;
    if (*unaff_x19 <= *(int *)(*(long *)(lVar5 + 0x18) + 0x18)) {
      lVar5 = *unaff_x27;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar5 = *unaff_x27;
      }
      if ((**(long **)(lVar5 + 0xb8) == 0) ||
         (uVar6 = FUN_05badb74(**(long **)(lVar5 + 0xb8),unaff_w26,*(undefined8 *)puVar3),
         unaff_x20 == 0)) {
LAB_076e2640:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar5 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_076e2640;
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
        thunk_FUN_044bb4b4();
      }
      else {
        FUN_05bade44();
      }
    }
    unaff_w26 = unaff_w26 + 1;
    puVar2 = PTR_DAT_09f2ef68;
    PTR_DAT_09f2ef68 = puVar3;
  } while( true );
}


