/*
FUNCTION_NAME: OVRManager$$UpdateHMDEvents
ENTRY_POINT: 06ab39b4
PROGRAM: Waifu-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateHMDEvents(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x19;
  uint unaff_w20;
  long lVar3;
  long unaff_x26;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  ulong unaff_d11;
  
  FUN_06ab3f78(*(undefined4 *)(unaff_x19 + 0x9c));
  lVar3 = *(long *)(unaff_x19 + 0x50);
  if (lVar3 != 0) {
    pcVar2 = *(code **)(unaff_x26 + 0x188);
    if (pcVar2 == (code *)0x0) {
      pcVar2 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      *(code **)(unaff_x26 + 0x188) = pcVar2;
    }
    (*pcVar2)(lVar3);
    uVar1 = FUN_06ab3d04(-unaff_s10 - unaff_s9);
    fVar4 = 0.0;
    if (unaff_s8 < 0.0 && ((unaff_w20 ^ 0xffffffff) & 1) == 0) {
      fVar4 = *(float *)(unaff_x19 + 0x9c) - unaff_s10;
    }
    FUN_06ab3ecc(fVar4,uVar1,*(undefined8 *)(unaff_x19 + 0x70));
    if (0.0 <= unaff_s8) {
      unaff_d11 = (ulong)*(uint *)(unaff_x19 + 0x9c);
    }
    else if ((unaff_w20 & 1) != 0) {
      unaff_d11 = (ulong)(uint)(unaff_s9 + *(float *)(unaff_x19 + 0x9c));
    }
    FUN_06ab3f78(unaff_d11);
    FUN_06ab3fcc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


