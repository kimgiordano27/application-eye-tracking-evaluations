/*
FUNCTION_NAME: OVRPlugin$$get_nativeSDKVersion
ENTRY_POINT: 03216ba0
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_nativeSDKVersion(void)

{
  undefined4 *unaff_x19;
  int *unaff_x20;
  long unaff_x21;
  long lVar1;
  long lVar2;
  undefined4 unaff_w23;
  int unaff_w24;
  int unaff_w25;
  
  FUN_03216768();
  FUN_03216768(unaff_x21 + 8,*unaff_x20 >> 8);
  if (unaff_w25 == 0) {
    lVar2 = unaff_x21 + 0x10;
  }
  else {
    lVar2 = unaff_x21 + 0x12;
    *(undefined2 *)(unaff_x21 + 0x10) = 0x2d;
  }
  FUN_03216768(lVar2,(int)(short)unaff_x20[1] >> 8);
  if (unaff_w25 == 0) {
    lVar1 = lVar2 + 8;
  }
  else {
    lVar1 = lVar2 + 10;
    *(undefined2 *)(lVar2 + 8) = 0x2d;
  }
  FUN_03216768(lVar1,(int)*(short *)((long)unaff_x20 + 6) >> 8);
  if (unaff_w25 == 0) {
    lVar2 = lVar1 + 8;
  }
  else {
    lVar2 = lVar1 + 10;
    *(undefined2 *)(lVar1 + 8) = 0x2d;
  }
  FUN_03216768(lVar2,(char)unaff_x20[2],*(undefined1 *)((long)unaff_x20 + 9));
  if (unaff_w25 == 0) {
    lVar1 = lVar2 + 8;
  }
  else {
    lVar1 = lVar2 + 10;
    *(undefined2 *)(lVar2 + 8) = 0x2d;
  }
  FUN_03216768(lVar1,*(undefined1 *)((long)unaff_x20 + 10),*(undefined1 *)((long)unaff_x20 + 0xb));
  FUN_03216768(lVar1 + 8,(char)unaff_x20[3],*(undefined1 *)((long)unaff_x20 + 0xd));
  FUN_03216768(lVar1 + 0x10,*(undefined1 *)((long)unaff_x20 + 0xe),
               *(undefined1 *)((long)unaff_x20 + 0xf));
  if (unaff_w24 != 0) {
    *(short *)(lVar1 + 0x18) = (short)((uint)unaff_w24 >> 0x10);
  }
  *unaff_x19 = unaff_w23;
  return 1;
}


