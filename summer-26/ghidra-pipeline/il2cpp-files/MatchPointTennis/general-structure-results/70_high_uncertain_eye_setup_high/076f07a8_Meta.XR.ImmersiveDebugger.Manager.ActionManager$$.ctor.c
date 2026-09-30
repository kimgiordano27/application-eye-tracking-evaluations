/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManager$$.ctor
ENTRY_POINT: 076f07a8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_ActionManager___ctor(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long unaff_x19;
  long *plVar5;
  long unaff_x20;
  long *plVar6;
  long lVar7;
  long *unaff_x22;
  
  FUN_04447ba8();
  *(undefined1 *)(unaff_x20 + 0xf09) = 1;
  plVar6 = (long *)(unaff_x19 + 0x70);
  lVar7 = *plVar6;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar4 = FUN_0952c404(lVar7,0,0);
  puVar3 = PTR_DAT_09f2f6e8;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar7 = FUN_04eb298c(0,*(undefined8 *)puVar3);
    if (lVar7 == 0) goto LAB_076f0940;
    if (*(long *)(lVar7 + 0x18) == 0) {
      FUN_076f0150(*(undefined8 *)PTR_DAT_09f2f6f8);
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      lVar7 = FUN_04eb298c(0,*(undefined8 *)PTR_DAT_09f2f6f0);
      if (lVar7 == 0) goto LAB_076f0940;
      if (*(long *)(lVar7 + 0x18) == 0) goto LAB_076f08b4;
      if ((int)*(long *)(lVar7 + 0x18) == 0) goto LAB_076f0944;
      *plVar6 = *(long *)(lVar7 + 0x20);
      thunk_FUN_044bb4b4(plVar6);
      iVar1 = *(int *)(lVar7 + 0x18);
      puVar2 = (undefined8 *)PTR_DAT_09f2f708;
    }
    else {
      if ((int)*(long *)(lVar7 + 0x18) == 0) {
LAB_076f0944:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      *plVar6 = *(long *)(lVar7 + 0x20);
      thunk_FUN_044bb4b4(plVar6);
      iVar1 = *(int *)(lVar7 + 0x18);
      puVar2 = (undefined8 *)PTR_DAT_09f2f700;
    }
    if (1 < iVar1) {
      FUN_076f1130(*puVar2);
    }
  }
LAB_076f08b4:
  plVar5 = (long *)(unaff_x19 + 0x10);
  if (*plVar5 == 0) {
    if ((*plVar6 == 0) || (lVar7 = FUN_095259a0(*plVar6,0), lVar7 == 0)) {
LAB_076f0940:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar7 = FUN_04d7a1ac(lVar7,*(undefined8 *)PTR_DAT_09f2f6e0);
    *plVar5 = lVar7;
    thunk_FUN_044bb4b4(plVar5,lVar7);
    if (*plVar5 == 0) {
      if ((*plVar6 == 0) || (lVar7 = FUN_095259a0(*plVar6,0), lVar7 == 0)) goto LAB_076f0940;
      lVar7 = FUN_04d7a120(lVar7,*(undefined8 *)PTR_DAT_09f2f6d8);
      *plVar5 = lVar7;
      thunk_FUN_044bb4b4(plVar5,lVar7);
    }
  }
  return 1;
}


