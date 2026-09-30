/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppHasVrFocus
ENTRY_POINT: 05bec7a0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetAppHasVrFocus(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x21;
  
  thunk_FUN_031c3cac();
  uVar5 = *(undefined8 *)(unaff_x19 + 0x78);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar2 = FUN_069d69b8(uVar5,0,0);
  puVar1 = PTR_DAT_07112a48;
  if ((uVar2 & 1) != 0) {
    uVar6 = *(undefined8 *)(unaff_x19 + 0x78);
    uVar5 = thunk_FUN_031c3cac(uVar6,*(undefined8 *)PTR_DAT_07112a48);
    uVar3 = *(undefined8 *)puVar1;
    *(undefined8 *)(unaff_x19 + 0x80) = uVar5;
    thunk_FUN_031c3cac(uVar6,uVar3);
  }
  if ((*(long *)(unaff_x19 + 0x48) != 0) &&
     (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x88), lVar4 != 0)) {
    *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(unaff_x19 + 0x50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


