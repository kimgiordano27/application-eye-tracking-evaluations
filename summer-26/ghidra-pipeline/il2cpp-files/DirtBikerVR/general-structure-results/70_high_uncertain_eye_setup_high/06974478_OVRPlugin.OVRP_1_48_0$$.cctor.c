/*
FUNCTION_NAME: OVRPlugin.OVRP_1_48_0$$.cctor
ENTRY_POINT: 06974478
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_48_0___cctor(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar5;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar6;
  
  while( true ) {
    (**(code **)(param_1 + 0x1a8))(param_2,param_3,*(undefined8 *)(param_1 + 0x1b0));
                    /* try { // try from 06974488 to 06a74493 has its CatchHandler @ 0697454c */
    (**(code **)(*unaff_x22 + 0x188))(0,unaff_x22,*(undefined8 *)(*unaff_x22 + 400));
    if (*(char *)(unaff_x23 + 0x12) != '\0' && ((unaff_w20 ^ 0xffffffff) & 1) == 0) {
                    /* try { // try from 069744ac to 06a744af has its CatchHandler @ 06974550 */
                    /* try { // try from 069744b0 to 06a7453f has its CatchHandler @ 069743e8 */
      (**(code **)(*unaff_x22 + 0x1a8))
                (*(undefined4 *)(unaff_x19 + 0xb4),unaff_x22,*(undefined8 *)(*unaff_x22 + 0x1b0));
    }
    fVar2 = (float)FUN_06926538();
    if (((fVar2 < unaff_s9) && (fVar2 = *(float *)(unaff_x19 + 0xdc), unaff_s10 < fVar2)) ||
       ((fVar2 = (float)FUN_06926538(), unaff_s8 < fVar2 &&
        (fVar2 = *(float *)(unaff_x19 + 0xdc), fVar2 < unaff_s12)))) {
      (**(code **)(*unaff_x22 + 0x1a8))
                (*(float *)(unaff_x19 + 0xb4) * ABS(fVar2),unaff_x22,
                 *(undefined8 *)(*unaff_x22 + 0x1b0));
    }
    if ((((*(char *)(unaff_x23 + 0x10) != '\0') && (fVar2 = (float)FUN_06926538(), -0.5 <= fVar2))
        && (fVar2 = *(float *)(unaff_x19 + 0xdc), unaff_s10 < fVar2)) ||
       ((fVar2 = (float)FUN_06926538(), fVar2 <= 0.5 &&
        (fVar2 = *(float *)(unaff_x19 + 0xdc), fVar2 < unaff_s12)))) {
      (**(code **)(*unaff_x22 + 0x188))
                (*(float *)(unaff_x19 + 0xb8) * fVar2,unaff_x22,*(undefined8 *)(*unaff_x22 + 400));
    }
    if (*(char *)(unaff_x23 + 0x11) != '\0') {
      fVar6 = *(float *)(unaff_x19 + 0xbc);
      fVar5 = *(float *)(unaff_x19 + 0xc0);
      fVar3 = (float)FUN_06926524();
      fVar3 = fVar3 * unaff_s13;
      fVar2 = unaff_s14;
      if (fVar3 <= unaff_s14) {
        fVar2 = fVar3;
      }
      fVar4 = 0.0;
      if (0.0 <= fVar3) {
        fVar4 = fVar2;
      }
      (**(code **)(*unaff_x22 + 0x1f8))
                (*(float *)(unaff_x19 + 0xd0) * (fVar6 + (fVar5 - fVar6) * fVar4),unaff_x22,
                 *(undefined8 *)(*unaff_x22 + 0x200));
    }
    lVar1 = *(long *)(unaff_x19 + 200);
    unaff_w21 = unaff_w21 + 1;
    if (lVar1 == 0) break;
    if (*(int *)(lVar1 + 0x18) <= unaff_w21) {
      return;
    }
    unaff_x23 = FUN_04de82e0(lVar1,unaff_w21,*unaff_x24);
    if ((unaff_x23 == 0) || (param_3 = *(long **)(unaff_x23 + 0x18), param_3 == (long *)0x0)) break;
    param_1 = *param_3;
    param_2 = 0;
    unaff_x22 = param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


