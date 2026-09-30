/*
FUNCTION_NAME: OVRPlugin$$GetHeadPoseModifier
ENTRY_POINT: 060d8008
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x060d8090) */

undefined8 OVRPlugin__GetHeadPoseModifier(void)

{
  undefined8 uVar1;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (in_w8 == 0) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    *(undefined4 *)(unaff_x19 + 0x28) = 0x3f800000;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    *(undefined4 *)(unaff_x20 + 0xa8) = 0;
    *(undefined1 *)(unaff_x20 + 0xa4) = 1;
    if (DAT_07ed76b8 == '\0') {
                    /* try { // try from 060d8060 to 061d8087 has its CatchHandler @ 060d8698 */
      FUN_03642964(PTR_DAT_079f4df8);
      DAT_07ed76b8 = '\x01';
    }
    fVar3 = **(float **)(*(long *)PTR_DAT_079f4df8 + 0xb8) * 8.0;
    fVar2 = DAT_016511f0 * 1.0;
    if (DAT_016511f0 * 1.0 <= fVar3) {
      fVar2 = fVar3;
    }
    if (fVar2 <= 1.0) {
      fVar4 = *(float *)(unaff_x20 + 0xa8);
      fVar5 = *(float *)(unaff_x19 + 0x28);
      fVar6 = *(float *)(unaff_x20 + 0xa0);
      fVar2 = (float)FUN_071cc8d8(0);
      fVar3 = fVar6 * fVar2;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      fVar2 = -(fVar6 * fVar2);
      if (0.0 <= fVar5 - fVar4) {
        fVar2 = fVar3;
      }
                    /* try { // try from 060d8104 to 061d8107 has its CatchHandler @ 060d868c */
      fVar2 = fVar4 + fVar2;
      if (ABS(fVar5 - fVar4) <= fVar3) {
        fVar2 = fVar5;
      }
      *(float *)(unaff_x20 + 0xa8) = fVar2;
      thunk_FUN_036b7ad0((undefined8 *)(unaff_x19 + 0x18),0);
      uVar1 = 1;
      *(undefined4 *)(unaff_x19 + 0x10) = 1;
    }
    else {
      uVar1 = 0;
      *(undefined1 *)(unaff_x20 + 0xa4) = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


