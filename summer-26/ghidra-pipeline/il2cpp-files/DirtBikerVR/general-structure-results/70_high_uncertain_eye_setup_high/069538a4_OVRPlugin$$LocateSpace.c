/*
FUNCTION_NAME: OVRPlugin$$LocateSpace
ENTRY_POINT: 069538a4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__LocateSpace(undefined8 param_1)

{
  long unaff_x19;
  float fVar1;
  float fVar2;
  float fVar3;
  
  FUN_06943108(param_1,0);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    fVar1 = (float)FUN_06926524(*(long *)(unaff_x19 + 0x10),0);
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      fVar3 = *(float *)(unaff_x19 + 0x58);
                    /* try { // try from 069538cc to 06a538d3 has its CatchHandler @ 06953aec */
      *(float *)(unaff_x19 + 0x4c) = fVar1 * *(float *)(*(long *)(unaff_x19 + 0x10) + 0x138);
      fVar1 = (float)FUN_07ca88b8(0);
                    /* try { // try from 069538ec to 06a538f3 has its CatchHandler @ 06953b18 */
      *(float *)(unaff_x19 + 0x48) = (fVar3 / 3600.0) * fVar1;
      fVar3 = (float)FUN_07ca88b8(0);
                    /* try { // try from 06953908 to 06a5390f has its CatchHandler @ 06953b04 */
      fVar2 = (*(float *)(unaff_x19 + 0x4c) * (3600.0 / fVar3)) / DAT_015c5bc4;
      fVar1 = 0.0;
      if (fVar2 != 0.0) {
                    /* try { // try from 06953928 to 06a53933 has its CatchHandler @ 06953b0c */
        fVar2 = ((3600.0 / fVar3) * *(float *)(unaff_x19 + 0x48)) / fVar2;
                    /* try { // try from 06953938 to 06a53947 has its CatchHandler @ 06953b08 */
        fVar3 = DAT_015c5948;
        if (fVar2 <= DAT_015c5948) {
          fVar3 = fVar2;
        }
        fVar1 = 0.0;
        if (0.0 <= fVar2) {
          fVar1 = fVar3;
        }
      }
      fVar3 = *(float *)(unaff_x19 + 0x24);
      *(float *)(unaff_x19 + 0x54) = fVar1;
                    /* try { // try from 06953960 to 06a53967 has its CatchHandler @ 06953af8 */
      if ((fVar3 == 0.0) && (0.0 < *(float *)(unaff_x19 + 0x50))) {
        if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_06953990;
        FUN_07cb2910(*(long *)(unaff_x19 + 0x40),0);
        fVar3 = *(float *)(unaff_x19 + 0x24);
      }
      *(float *)(unaff_x19 + 0x50) = fVar3;
      return;
    }
  }
LAB_06953990:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


