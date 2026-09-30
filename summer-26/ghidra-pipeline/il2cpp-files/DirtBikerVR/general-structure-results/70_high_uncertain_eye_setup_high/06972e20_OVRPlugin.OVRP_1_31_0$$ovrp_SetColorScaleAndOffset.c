/*
FUNCTION_NAME: OVRPlugin.OVRP_1_31_0$$ovrp_SetColorScaleAndOffset
ENTRY_POINT: 06972e20
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_31_0__ovrp_SetColorScaleAndOffset(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 unaff_x19;
  long unaff_x21;
  undefined8 uVar4;
  long unaff_x22;
  long *plVar5;
  
  plVar5 = *(long **)(unaff_x22 + 0x738);
  if ((*(byte *)(unaff_x21 + 0x105) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b7378);
    FUN_03a8a718(PTR_DAT_08488808);
    FUN_03a8a718(PTR_DAT_08486738);
    *(undefined1 *)(unaff_x21 + 0x105) = 1;
  }
  puVar1 = PTR_DAT_08488808;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = FUN_07c98f88(param_1,0);
  if (*(int *)(*plVar5 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*plVar5);
  }
  lVar3 = FUN_046582b0(uVar4,uVar2,*(undefined8 *)puVar1);
  if ((lVar3 != 0) && (lVar3 = FUN_04561560(lVar3,*(undefined8 *)PTR_DAT_084b7378), lVar3 != 0)) {
    *(undefined8 *)(lVar3 + 0x20) = unaff_x19;
    thunk_FUN_03afed3c();
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


