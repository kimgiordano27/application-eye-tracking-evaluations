/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingSupported
ENTRY_POINT: 05329d44
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin__get_faceTrackingSupported(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x21;
  undefined1 auVar4 [16];
  
  if ((*(byte *)(unaff_x21 + 0x2cc) & 1) == 0) {
    FUN_02f08768(OVR_OpenVR_ETrackedControllerRole_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x2cc) = 1;
  }
  uVar2 = _UNK_011b5bb8;
  uVar3 = _DAT_011b5bb0;
  auVar4 = NEON_fmov(0x3f800000,4);
  *(long *)(unaff_x19 + 0x78) = auVar4._8_8_;
  *(long *)(unaff_x19 + 0x70) = auVar4._0_8_;
  *(undefined8 *)(unaff_x19 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x80) = uVar3;
  uVar3 = FUN_060a0808(ZEXT816(0),0x3f800000,0x3f800000,0,0);
  uVar1 = DAT_011b04a0;
  *(undefined8 *)(unaff_x19 + 0x90) = uVar3;
  uVar3 = FUN_060a0808(ZEXT816(0),0,0x3f800000,uVar1,0);
                    /* try { // try from 05329dac to 05429db3 has its CatchHandler @ 0532a00c */
  *(undefined8 *)(unaff_x19 + 0x98) = uVar3;
  *(undefined4 *)(unaff_x19 + 0xa0) = 0x41000000;
  *(undefined1 *)(unaff_x19 + 0xb0) = 1;
  FUN_037db288();
  return;
}


