/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionDestroy
ENTRY_POINT: 076de518
PROGRAM: m3ar-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
OVRPlugin_UnityOpenXR__OnSessionDestroy
          (long param_1,float param_2,float param_3,float param_4,undefined1 param_5 [16],
          float param_6)

{
  bool bVar1;
  bool bVar2;
  undefined4 *unaff_x19;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  if (param_2 <= param_3) {
    param_2 = param_3;
  }
  param_4 = **(float **)(param_1 + 0xb8) * param_4;
                    /* try { // try from 076de534 to 077de53b has its CatchHandler @ 076de924 */
  fVar3 = param_2 * param_6;
  if (param_2 * param_6 <= param_4) {
    fVar3 = param_4;
  }
  if (fVar3 <= ABS(param_3 - unaff_s15)) {
                    /* try { // try from 076de548 to 077de56f has its CatchHandler @ 076de92c */
    fVar5 = unaff_s14 * unaff_s9 + unaff_s13 * unaff_s10;
                    /* try { // try from 076de570 to 077de58b has its CatchHandler @ 076de91c */
    fVar3 = ((fStack0000000000000008 * unaff_s12 +
             unaff_s11 * unaff_s14 + in_stack_00000000._4_4_ * unaff_s13) -
            (unaff_s12 * unaff_s8 + fVar5)) / unaff_s15;
    bVar1 = false;
    bVar2 = true;
    if (0.0 < fVar3) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar3) && !NAN(fStack000000000000000c)) {
        bVar1 = fVar3 == fStack000000000000000c;
        bVar2 = fStack000000000000000c <= fVar3;
      }
    }
    if (!bVar2 || bVar1) {
      uVar4 = FUN_0853dbe0();
      *unaff_x19 = uVar4;
      unaff_x19[1] = fStack000000000000000c;
                    /* try { // try from 076de5a4 to 077de5ab has its CatchHandler @ 076de904 */
      unaff_x19[2] = fVar5;
      return 1;
    }
  }
                    /* try { // try from 076de5b8 to 077de5bf has its CatchHandler @ 076de920 */
  return 0;
}


