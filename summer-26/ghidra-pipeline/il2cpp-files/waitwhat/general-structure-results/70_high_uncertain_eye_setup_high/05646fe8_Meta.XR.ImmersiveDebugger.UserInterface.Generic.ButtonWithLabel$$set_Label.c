/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$set_Label
ENTRY_POINT: 05646fe8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__set_Label(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar8;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  
  lVar3 = FUN_03188b1c(*param_1);
  if (lVar3 == 0) {
LAB_05647274:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if ((unaff_x21 != 0) && (lVar4 = thunk_FUN_031c3cac(), lVar4 == 0)) {
    uVar8 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
    FUN_03188b9c(uVar8,0);
  }
  if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
  *(long *)(lVar3 + 0x20) = unaff_x21;
  if ((unaff_x22 == (long *)0x0) ||
     (plVar5 = (long *)(**(code **)(*unaff_x22 + 0x938))(), plVar5 == (long *)0x0))
  goto LAB_05647274;
  uVar6 = (**(code **)(*plVar5 + 0x2a8))();
  if ((uVar6 & 1) != 0) {
    uVar8 = *(undefined8 *)PTR_DAT_070f64a8;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar8 = FUN_0593e698(uVar8,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_031e5338(*unaff_x24);
    }
    goto LAB_056471a8;
  }
  uVar6 = (**(code **)(*unaff_x20 + 0x5a8))();
  if ((uVar6 & 1) == 0) goto LAB_05647208;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar8 = FUN_05963974();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338(*(long *)(unaff_x25 + 0xe0));
  }
  uVar2 = FUN_0594a30c(uVar8,0);
  if (uVar2 < 0xd) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar1 & 0x740) == 0) {
      if ((uVar1 & 0x1800) == 0) {
        if (uVar2 != 7) goto LAB_05647158;
        lVar3 = *(long *)(unaff_x25 + 0xe0);
        puVar7 = (undefined8 *)PTR_DAT_070f64b8;
      }
      else {
        lVar3 = *(long *)(unaff_x25 + 0xe0);
        puVar7 = (undefined8 *)PTR_DAT_070f64a0;
      }
    }
    else {
      lVar3 = *(long *)(unaff_x25 + 0xe0);
      puVar7 = (undefined8 *)PTR_DAT_070f6480;
    }
  }
  else {
LAB_05647158:
    if (uVar2 != 5) {
LAB_05647208:
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
      }
      FUN_04750170(uVar8,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
      return uVar8;
    }
    lVar3 = *(long *)(unaff_x25 + 0xe0);
    puVar7 = (undefined8 *)PTR_DAT_070f64b0;
  }
  uVar8 = *puVar7;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar8 = FUN_0593e698(uVar8,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_031e5338(*unaff_x24);
  }
LAB_056471a8:
  uVar8 = FUN_0597090c(uVar8);
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_031c09d4(lVar3);
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_031c09d4(lVar3);
  }
  uVar8 = FUN_02d37100(uVar8,lVar3);
  return uVar8;
}


