/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetColor
ENTRY_POINT: 05f4b774
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetColor(undefined8 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *in_x9;
  int in_w10;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x24;
  long unaff_x25;
  
  uVar9 = *in_x9;
  if (in_w10 == 0) {
    thunk_FUN_03798b70(param_1);
  }
  FUN_062519f8(uVar9,0);
  uVar3 = FUN_0625ad04();
  if ((uVar3 & 1) != 0) {
    lVar4 = (**(code **)(*unaff_x20 + 0x478))();
    if (lVar4 == 0) {
LAB_05f4ba14:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(int *)(lVar4 + 0x18) == 0) {
LAB_05f4ba18:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    plVar8 = *(long **)(lVar4 + 0x20);
    if (plVar8 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x24 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(plVar8);
      }
    }
                    /* catch() { ... } // from try @ 05f4b944 with catch @ 05f4b804
                       catch() { ... } // from try @ 05f4b980 with catch @ 05f4b804
                       catch() { ... } // from try @ 05f4b9bc with catch @ 05f4b804
                       catch() { ... } // from try @ 05f4b9e8 with catch @ 05f4b804
                       catch() { ... } // from try @ 05f4ba5c with catch @ 05f4b804 */
    uVar9 = *(undefined8 *)PTR_DAT_07d98310;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    plVar5 = (long *)FUN_062519f8(uVar9,0);
                    /* try { // try from 05f4b838 to 0604b83b has its CatchHandler @ 05f4b944 */
    plVar6 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d92630,1);
    if (plVar6 == (long *)0x0) goto LAB_05f4ba14;
    if ((plVar8 != (long *)0x0) &&
       (lVar4 = thunk_FUN_037787d0(plVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
      uVar9 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar9,0);
    }
    if ((int)plVar6[3] == 0) goto LAB_05f4ba18;
    plVar6[4] = (long)plVar8;
    thunk_FUN_037aeb94(plVar6 + 4,plVar8);
    if ((plVar5 == (long *)0x0) ||
       (plVar5 = (long *)(**(code **)(*plVar5 + 0x978))
                                   (plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x980)),
       plVar5 == (long *)0x0)) goto LAB_05f4ba14;
    uVar3 = (**(code **)(*plVar5 + 0x2a8))(plVar5,plVar8,*(undefined8 *)(*plVar5 + 0x2b0));
    if ((uVar3 & 1) != 0) {
      uVar9 = *(undefined8 *)PTR_DAT_07d98328;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar9 = FUN_062519f8(uVar9,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03798b70(*unaff_x24);
      }
      goto LAB_05f4b6ac;
    }
  }
  uVar3 = (**(code **)(*unaff_x20 + 0x5b8))();
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar9 = FUN_06276e18();
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
    }
    uVar2 = FUN_0625d834(uVar9,0);
    switch(uVar2) {
    case 5:
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar7 = (undefined8 *)PTR_DAT_07d98338;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar7 = (undefined8 *)PTR_DAT_07d98300;
      break;
    case 7:
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar7 = (undefined8 *)PTR_DAT_07d98340;
      break;
    case 0xb:
    case 0xc:
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar7 = (undefined8 *)PTR_DAT_07d98320;
      break;
    default:
      goto switchD_05f4b970_default;
    }
    uVar9 = *puVar7;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar9 = FUN_062519f8(uVar9,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03798b70(*unaff_x24);
    }
LAB_05f4b6ac:
    plVar8 = (long *)FUN_06284508(uVar9);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03775678(lVar4);
    }
    lVar4 = **(long **)(lVar4 + 0xc0);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03775678(lVar4);
    }
    if (plVar8 != (long *)0x0) {
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4))
      {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(plVar8);
      }
    }
    return plVar8;
  }
switchD_05f4b970_default:
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  plVar8 = (long *)thunk_FUN_037788cc();
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678(lVar4);
  }
  FUN_04f12a2c(plVar8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
  return plVar8;
}


