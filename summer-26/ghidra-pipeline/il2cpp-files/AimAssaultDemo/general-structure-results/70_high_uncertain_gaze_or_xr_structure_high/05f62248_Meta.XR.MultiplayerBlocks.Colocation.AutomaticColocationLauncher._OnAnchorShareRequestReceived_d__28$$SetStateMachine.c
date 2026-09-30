/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher.<OnAnchorShareRequestReceived>d__28$$SetStateMachine
ENTRY_POINT: 05f62248
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28__SetStateMachine
                 (void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x24;
  
  uVar2 = FUN_062519f8();
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70(*unaff_x24);
  }
  plVar1 = (long *)FUN_06284508(uVar2);
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678(lVar3);
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678(lVar3);
  }
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar1);
    }
  }
  return plVar1;
}


