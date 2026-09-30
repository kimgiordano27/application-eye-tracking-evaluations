/*
FUNCTION_NAME: OVRPlugin.OVRP_1_34_0$$ovrp_EnqueueSubmitLayer2
ENTRY_POINT: 06afaa70
PROGRAM: Waifu-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_34_0__ovrp_EnqueueSubmitLayer2(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int unaff_w20;
  int unaff_w21;
  long lVar5;
  long unaff_x24;
  
  do {
    uVar3 = FUN_06848650();
    if (*(int *)(*(long *)(unaff_x24 + 0x7b0) + 0xe0) == 0) {
      FUN_033b9870(*(long *)(unaff_x24 + 0x7b0));
    }
    iVar1 = FUN_067304e4(uVar3,0);
    unaff_w20 = iVar1 + unaff_w20;
    unaff_w21 = unaff_w21 + 1;
    iVar1 = FUN_068485f0();
  } while (unaff_w21 < iVar1);
  if (*(int *)(*(long *)(unaff_x24 + 0x7b0) + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar4 = FUN_0672f75c(unaff_w20,0);
  iVar1 = FUN_068485f0();
  if (0 < iVar1) {
    iVar1 = 0;
    lVar5 = lVar4;
    do {
      uVar3 = FUN_06848650();
      if (*(int *)(*(long *)(unaff_x24 + 0x7b0) + 0xe0) == 0) {
        FUN_033b9870(*(long *)(unaff_x24 + 0x7b0));
      }
      FUN_033396f4(uVar3,lVar5,0);
      uVar3 = FUN_06848650();
      iVar2 = FUN_067304e4(uVar3,0);
      lVar5 = lVar5 + iVar2;
      iVar1 = iVar1 + 1;
      iVar2 = FUN_068485f0();
    } while (iVar1 < iVar2);
  }
  return lVar4;
}


