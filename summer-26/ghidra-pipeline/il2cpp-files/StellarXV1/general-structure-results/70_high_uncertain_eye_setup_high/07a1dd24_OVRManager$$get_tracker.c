/*
FUNCTION_NAME: OVRManager$$get_tracker
ENTRY_POINT: 07a1dd24
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_tracker(float param_1,float param_2,float param_3)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  long lVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  undefined4 uVar4;
  float unaff_s8;
  
                    /* try { // try from 07a1dd24 to 07b1dd2b has its CatchHandler @ 07a1dd34 */
  if (in_ZR || in_NG != in_OV) {
    param_1 = param_3;
  }
                    /* try { // try from 07a1dd2c to 07b1dd37 has its CatchHandler @ 07a1dae4 */
  if (param_2 < param_1) {
    return;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07a1dd24 with catch @ 07a1dd34
                        */
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_089c6d28(*(long *)(unaff_x19 + 0x30),1,0);
    lVar1 = *(long *)(unaff_x19 + 0x30);
    if (lVar1 != 0) {
      lVar2 = *(long *)(unaff_x19 + 0x60);
      *(undefined4 *)(lVar1 + 0x7c) = 0x3f800000;
      fVar3 = *(float *)(lVar1 + 0x74);
      if (unaff_s8 <= *(float *)(lVar1 + 0x74)) {
        fVar3 = unaff_s8;
      }
      *(float *)(lVar1 + 0x74) = fVar3;
      if (lVar2 != 0) {
        uVar4 = (**(code **)(lVar2 + 0x18))
                          (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        *(undefined4 *)(unaff_x19 + 0x78) = uVar4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


