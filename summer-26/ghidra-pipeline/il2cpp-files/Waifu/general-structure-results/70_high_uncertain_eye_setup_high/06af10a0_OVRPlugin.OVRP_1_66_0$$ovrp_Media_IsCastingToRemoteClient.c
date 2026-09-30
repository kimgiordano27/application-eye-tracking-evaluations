/*
FUNCTION_NAME: OVRPlugin.OVRP_1_66_0$$ovrp_Media_IsCastingToRemoteClient
ENTRY_POINT: 06af10a0
PROGRAM: Waifu-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_66_0__ovrp_Media_IsCastingToRemoteClient(code *param_1)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 uVar2;
  long lVar3;
  long unaff_x21;
  
  (*param_1)();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x48);
  if (*(int *)(*(long *)(unaff_x21 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar1 = FUN_07a0d2c4(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x48);
    if (lVar3 == 0) goto LAB_06af115c;
    if (DAT_086edcc0 == (code *)0x0) {
      DAT_086edcc0 = (code *)FUN_033d1b68("UnityEngine.Renderer::set_enabled(System.Boolean)");
    }
    (*DAT_086edcc0)(lVar3,0);
  }
  uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
  if (*(int *)(*(long *)(unaff_x21 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar1 = FUN_07a0d2c4(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_06af0594(*(long *)(unaff_x19 + 0x28),0);
    return;
  }
LAB_06af115c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


