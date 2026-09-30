/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Copy
ENTRY_POINT: 07a62e44
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Copy(undefined1 param_1 [16],undefined1 param_2 [16])

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long unaff_x20;
  long unaff_x23;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(long *)(unaff_x20 + 0x2c) = param_1._8_8_;
  *(long *)(unaff_x20 + 0x24) = param_1._0_8_;
  *(long *)(unaff_x20 + 0x38) = param_2._8_8_;
  *(long *)(unaff_x20 + 0x30) = param_2._0_8_;
  *(undefined4 *)(unaff_x20 + 0x20) = 1;
  FUN_089d99f0(0,0,&stack0x00000d80,0);
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x23 + 0x14) = *(undefined8 *)(unaff_x23 + 0x34);
  *(undefined8 *)(unaff_x23 + 0xc) = *(undefined8 *)(unaff_x23 + 0x2c);
  uVar3 = DAT_01aec028;
  uVar2 = DAT_01aebf60;
  if ((uVar1 & 0xfffffffe) != 0) {
    uVar6 = *(undefined8 *)(unaff_x23 + 0x14);
    uVar5 = *(undefined8 *)(unaff_x23 + 0xc);
    *(undefined4 *)(unaff_x20 + 0x40) = 0xffffffff;
    *(undefined8 *)(unaff_x20 + 0x4c) = 0;
    *(undefined8 *)(unaff_x20 + 0x44) = 0;
    uVar4 = DAT_01aed130;
    *(undefined8 *)(unaff_x20 + 0x58) = uVar6;
    *(undefined8 *)(unaff_x20 + 0x50) = uVar5;
    FUN_089d99f0(uVar4,uVar3,uVar2,DAT_01aecc40,DAT_01aebc80,DAT_01aeb8b0,DAT_01aec7dc,
                 &stack0x00000d40,0);
    if (2 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x60) = 1;
      *(undefined8 *)(unaff_x20 + 0x6c) = 0;
      *(undefined8 *)(unaff_x20 + 100) = 0;
      uVar2 = DAT_01aebad0;
      *(undefined8 *)(unaff_x20 + 0x78) = 0;
      *(undefined8 *)(unaff_x20 + 0x70) = 0;
      FUN_089d99f0(uVar2,DAT_01aecf24,DAT_01aebad4,DAT_01aeb8b4,DAT_01aebe48,DAT_01aec99c,
                   DAT_01aec394,&stack0x00000d00,0);
      if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffffc) != 0) {
        *(undefined4 *)(unaff_x20 + 0x80) = 2;
        *(undefined8 *)(unaff_x20 + 0x8c) = 0;
        *(undefined8 *)(unaff_x20 + 0x84) = 0;
        uVar2 = DAT_01aed1d4;
        *(undefined8 *)(unaff_x20 + 0x98) = 0;
        *(undefined8 *)(unaff_x20 + 0x90) = 0;
        FUN_08d5cef8(uVar2,DAT_01aebba0,DAT_01aed1d8,DAT_01aecf28,DAT_01aebe4c,DAT_01aec02c);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


