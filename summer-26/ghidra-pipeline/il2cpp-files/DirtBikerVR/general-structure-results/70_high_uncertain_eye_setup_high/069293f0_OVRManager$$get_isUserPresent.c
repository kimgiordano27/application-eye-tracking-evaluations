/*
FUNCTION_NAME: OVRManager$$get_isUserPresent
ENTRY_POINT: 069293f0
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


float OVRManager__get_isUserPresent
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                )

{
  undefined *puVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack000000000000000c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  
                    /* try { // try from 069293f0 to 06a293fb has its CatchHandler @ 06929420 */
                    /* try { // try from 069293fc to 06a2944f has its CatchHandler @ 0692937c */
  fVar6 = 0.0;
  fVar7 = 0.0;
  fVar8 = 0.0;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 069293d0 with catch @ 0692941c
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 069293f0 with catch @ 06929420
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 069293d4 with catch @ 06929424
                        */
  fVar2 = (param_5 - param_2) * (in_stack_00000068 - param_3) -
          (param_6 - param_3) * (fStack0000000000000064 - param_2);
  fVar4 = (param_6 - param_3) * (fStack0000000000000060 - param_1) -
          (param_4 - param_1) * (in_stack_00000068 - param_3);
  fVar5 = (param_4 - param_1) * (fStack0000000000000064 - param_2) -
          (param_5 - param_2) * (fStack0000000000000060 - param_1);
                    /* try { // try from 06929450 to 06a29453 has its CatchHandler @ 06929490 */
                    /* try { // try from 06929454 to 06a2947f has its CatchHandler @ 0692937c */
  fStack000000000000000c = SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar4 * fVar4);
  if (fStack000000000000000c != 0.0) {
    fVar8 = fVar2 / fStack000000000000000c;
    fVar7 = fVar4 / fStack000000000000000c;
    fVar6 = fVar5 / fStack000000000000000c;
  }
                    /* try { // try from 06929480 to 06a2948f has its CatchHandler @ 06929490 */
                    /* catch() { ... } // from try @ 06929450 with catch @ 06929490
                       catch() { ... } // from try @ 06929480 with catch @ 06929490 */
  if (DAT_08974d91 == '\0') {
                    /* try { // try from 06929494 to 06a29497 has its CatchHandler @ 069294a0 */
                    /* try { // try from 06929498 to 06a294a3 has its CatchHandler @ 0692937c */
    FUN_03a8a718(PTR_DAT_08486c60);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06929494 with catch @ 069294a0
                        */
    DAT_08974d91 = '\x01';
  }
  puVar1 = PTR_DAT_08486c60;
  if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  fVar2 = SQRT((in_stack_00000078 * in_stack_00000078 +
               fStack0000000000000070 * fStack0000000000000070 +
               fStack0000000000000074 * fStack0000000000000074) *
               (fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8));
  fVar4 = 0.0;
  if (DAT_015c5594 <= fVar2) {
    fVar2 = (in_stack_00000078 * fVar6 +
            fStack0000000000000074 * fVar7 + fStack0000000000000070 * fVar8) / fVar2;
    fVar4 = 1.0;
    if (fVar2 <= 1.0) {
      fVar4 = fVar2;
    }
    fVar5 = -1.0;
    if (-1.0 <= fVar2) {
      fVar5 = fVar4;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    dVar3 = acos((double)fVar5);
    fVar4 = (float)dVar3 * DAT_015c595c;
  }
  fVar4 = cosf(fVar4);
  fVar2 = 0.0;
  if (0.0 <= fVar4) {
    fVar2 = fStack000000000000000c * 0.5 * fVar4;
  }
  return fVar2;
}


