/*
FUNCTION_NAME: OVRPlugin$$GetControllerState4
ENTRY_POINT: 073dc414
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__GetControllerState4
          (long *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7,float param_8,float param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong *unaff_x19;
  long *unaff_x23;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  ulong uVar5;
  float in_s16;
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  ulong uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 in_stack_000000a8;
  
                    /* catch() { ... } // from try @ 073dc36c with catch @ 073dc414 */
                    /* catch() { ... } // from try @ 073dc318 with catch @ 073dc418
                       catch() { ... } // from try @ 073dc400 with catch @ 073dc418 */
                    /* catch() { ... } // from try @ 073dc2fc with catch @ 073dc41c
                       catch() { ... } // from try @ 073dc3fc with catch @ 073dc41c */
                    /* catch() { ... } // from try @ 073dc2d8 with catch @ 073dc420 */
                    /* catch() { ... } // from try @ 073dc3f8 with catch @ 073dc424 */
                    /* catch() { ... } // from try @ 073dc3a0 with catch @ 073dc428 */
                    /* catch() { ... } // from try @ 073dc2a0 with catch @ 073dc42c
                       catch() { ... } // from try @ 073dc3f4 with catch @ 073dc42c */
                    /* catch() { ... } // from try @ 073dc280 with catch @ 073dc438 */
  uStack0000000000000028 = 0;
  fVar4 = **(float **)(*param_1 + 0xb8) * 8.0;
  fVar3 = param_9 * param_8;
  if (param_9 * param_8 <= fVar4) {
    fVar3 = fVar4;
  }
                    /* try { // try from 073dc454 to 074dc46b has its CatchHandler @ 073dc538 */
  if (fVar3 <= ABS(in_s16 - unaff_s8)) {
    in_s16 = unaff_s9 / unaff_s8;
  }
                    /* try { // try from 073dc46c to 074dc483 has its CatchHandler @ 073dc1d4 */
  uStack0000000000000020 = 0;
  FUN_073dc704(param_2 + param_5 * in_s16,param_3 + param_6 * in_s16,param_4 + in_s16 * param_7);
  uVar2 = uStack0000000000000028;
  uVar5 = uStack0000000000000020 & 0xffffffff;
  uVar1 = uStack0000000000000020._4_4_;
                    /* try { // try from 073dc484 to 074dc48b has its CatchHandler @ 073dc52c */
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
                    /* try { // try from 073dc498 to 074dc49f has its CatchHandler @ 073dc528 */
                    /* try { // try from 073dc4a4 to 074dc4fb has its CatchHandler @ 073dc548 */
  FUN_085e9668(uVar5,uVar1,uVar2,&stack0x00000040,0);
  FUN_073dc554();
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000 & 0xffffffff00000000;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
                    /* try { // try from 073dc4fc to 074dc50f has its CatchHandler @ 073dc1d4 */
                    /* try { // try from 073dc510 to 074dc51f has its CatchHandler @ 073dc538 */
  return 1;
}


