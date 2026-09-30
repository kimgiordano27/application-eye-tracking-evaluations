/*
FUNCTION_NAME: OVRPlugin.TextureRectMatrixf$$.cctor
ENTRY_POINT: 0369415c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin_TextureRectMatrixf___cctor(undefined1 param_1 [16],float param_2,undefined4 param_3)

{
  long lVar1;
  int in_w8;
  float *pfVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar5;
  float unaff_s11;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uStack000000000000000c;
  
  uStack000000000000000c = param_3;
  if (in_w8 == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar3 = (float)FUN_0407bb40();
  lVar1 = *unaff_x21;
  if (*(int *)(lVar1 + 0xe0) == 0) {
                    /* try { // try from 03694190 to 03794193 has its CatchHandler @ 0369486c */
    thunk_FUN_01ee6d7c();
                    /* try { // try from 03694194 to 0379419b has its CatchHandler @ 03694878 */
    lVar1 = *unaff_x21;
  }
  pfVar2 = *(float **)(lVar1 + 0xb8);
  fVar8 = *(float *)(unaff_x20 + 0x48);
                    /* try { // try from 036941b0 to 037941bb has its CatchHandler @ 03694880 */
  fVar5 = *pfVar2;
  fVar4 = pfVar2[1];
  fVar7 = unaff_s8 * 0.5 * unaff_s8;
  if (1.0 <= unaff_s8) {
    fVar6 = *(float *)(unaff_x19 + 4);
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar1 = *unaff_x21;
      pfVar2 = *(float **)(lVar1 + 0xb8);
    }
    if ((fVar6 - pfVar2[3] < unaff_s10 + param_2 * unaff_s9 * unaff_s8 + fVar7 * fVar4 * fVar8) &&
       (*(int *)(lVar1 + 0xe0) == 0)) {
      thunk_FUN_01ee6d7c();
    }
  }
  return unaff_s11 + fVar3 * unaff_s9 * unaff_s8 + fVar7 * fVar5 * fVar8;
}


