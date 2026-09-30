/*
FUNCTION_NAME: OVRPlugin.OVRP_1_40_0$$.cctor
ENTRY_POINT: 0569f6f0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_40_0___cctor(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  long *unaff_x21;
  
  FUN_02d965b8();
  *(undefined1 *)(unaff_x20 + 0x896) = 1;
  lVar3 = *unaff_x21;
  lVar2 = *(long *)(lVar3 + 0x38);
  if (lVar2 == 0) {
    FUN_02dcfd74(lVar3);
    lVar2 = *(long *)(lVar3 + 0x38);
  }
  lVar2 = *(long *)(lVar2 + 8);
  if (*(long *)(lVar2 + 0x38) == 0) {
    FUN_02dcfd74(lVar2);
  }
  if (((0 < (int)unaff_x19[1]) && (*unaff_x19 != 0)) &&
     (lVar2 = FUN_036eca28(*unaff_x19,unaff_x19[1],*(undefined8 *)(*(long *)(lVar2 + 0x38) + 0x28)),
     lVar2 != 0)) {
    uVar1 = FUN_036ec944(*unaff_x19,unaff_x19[1],*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x18));
    return uVar1;
  }
  return 0;
}


