/*
FUNCTION_NAME: MetaXRAcousticMaterialProperties$$Meta.XR.Acoustics.IMaterialDataProvider.get_name
ENTRY_POINT: 01419120
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Type propagation algorithm not settling */

void MetaXRAcousticMaterialProperties__Meta_XR_Acoustics_IMaterialDataProvider_get_name(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  
  if ((unaff_w21 >> 8 & 1) != 0) {
    *(undefined8 *)(unaff_x20 + 0x50) = *(undefined8 *)(unaff_x19 + 0x158);
  }
  if ((unaff_w21 >> 9 & 1) != 0) {
    *(undefined8 *)(unaff_x20 + 0x58) = *(undefined8 *)(unaff_x19 + 0x160);
  }
  if ((unaff_w21 >> 10 & 1) != 0) {
    *(undefined8 *)(unaff_x20 + 0x60) = *(undefined8 *)(unaff_x19 + 0x168);
  }
  if ((unaff_w21 >> 0xb & 1) != 0) {
    *(undefined8 *)(unaff_x20 + 0x68) = *(undefined8 *)(unaff_x19 + 0x170);
  }
  if ((unaff_w21 >> 0xc & 1) != 0) {
    *(undefined8 *)(unaff_x20 + 0x70) = *(undefined8 *)(unaff_x19 + 0x178);
  }
  uVar1 = *(undefined8 *)(unaff_x19 + 0x188);
  *(undefined1 *)(unaff_x20 + 1) = 1;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar1;
  return;
}


