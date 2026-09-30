/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$get_IsValid
ENTRY_POINT: 05f3258c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


long * Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster__get_IsValid(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *unaff_x24;
  long unaff_x25;
  
  uVar2 = FUN_06276e18();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
  }
  uVar1 = FUN_0625d834(uVar2,0);
  switch(uVar1) {
  case 5:
    lVar3 = *(long *)(unaff_x25 + 0xe0);
    puVar5 = (undefined8 *)PTR_DAT_07d98338;
    break;
  case 6:
  case 8:
  case 9:
  case 10:
    lVar3 = *(long *)(unaff_x25 + 0xe0);
    puVar5 = (undefined8 *)PTR_DAT_07d98300;
    break;
  case 7:
    lVar3 = *(long *)(unaff_x25 + 0xe0);
    puVar5 = (undefined8 *)PTR_DAT_07d98340;
    break;
  case 0xb:
  case 0xc:
    lVar3 = *(long *)(unaff_x25 + 0xe0);
    puVar5 = (undefined8 *)PTR_DAT_07d98320;
    break;
  default:
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03775678();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    plVar4 = (long *)thunk_FUN_037788cc();
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03775678(lVar3);
    }
    FUN_04f09ffc(plVar4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
    return plVar4;
  }
  uVar2 = *puVar5;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_062519f8(uVar2,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70(*unaff_x24);
  }
  plVar4 = (long *)FUN_06284508(uVar2);
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678(lVar3);
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678(lVar3);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar4);
    }
  }
  return plVar4;
}


