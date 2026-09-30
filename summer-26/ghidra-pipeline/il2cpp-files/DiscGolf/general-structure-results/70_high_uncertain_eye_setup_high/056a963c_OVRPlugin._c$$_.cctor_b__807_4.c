/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__807_4
ENTRY_POINT: 056a963c
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


void OVRPlugin_<>c__<_cctor>b__807_4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar3;
  long *unaff_x23;
  
  FUN_02d965b8();
  *(undefined1 *)(unaff_x22 + 0xa6a) = 1;
  lVar3 = *unaff_x23;
  lVar2 = *(long *)(lVar3 + 0x38);
  if (lVar2 == 0) {
    FUN_02dcfd74(lVar3);
    lVar2 = *(long *)(lVar3 + 0x38);
  }
  lVar2 = *(long *)(lVar2 + 8);
  if (*(long *)(lVar2 + 0x38) == 0) {
    FUN_02dcfd74(lVar2);
  }
  if ((int)unaff_x21[1] < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if ((*unaff_x21 != 0) &&
       (lVar2 = FUN_036ec9e8(*unaff_x21,unaff_x21[1],*(undefined8 *)(*(long *)(lVar2 + 0x38) + 0x28)
                            ), uVar1 = 0, lVar2 != 0)) {
      uVar1 = FUN_036ec8f8(*unaff_x21,unaff_x21[1],*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x18));
    }
  }
  *unaff_x20 = uVar1;
  unaff_x20[1] = unaff_x19;
  return;
}


