/*
FUNCTION_NAME: OVRManager$$add_SpaceQueryComplete
ENTRY_POINT: 04f40e4c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__add_SpaceQueryComplete(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 in_w8;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float fVar7;
  undefined4 unaff_s13;
  float unaff_s15;
  float fStack0000000000000004;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 in_stack_000000e0;
  undefined8 uStack00000000000000e4;
  
                    /* catch() { ... } // from try @ 04f40c90 with catch @ 04f40e4c */
  *(undefined1 *)(unaff_x21 + 0x9a7) = in_w8;
                    /* catch() { ... } // from try @ 04f40c54 with catch @ 04f40e50 */
                    /* catch() { ... } // from try @ 04f40c24 with catch @ 04f40e54 */
                    /* catch() { ... } // from try @ 04f40e40 with catch @ 04f40e58 */
                    /* catch() { ... } // from try @ 04f40ce0 with catch @ 04f40e5c */
                    /* catch() { ... } // from try @ 04f40ca4 with catch @ 04f40e60 */
                    /* catch() { ... } // from try @ 04f40cd0 with catch @ 04f40e64 */
                    /* catch() { ... } // from try @ 04f40c94 with catch @ 04f40e68 */
                    /* catch() { ... } // from try @ 04f40b8c with catch @ 04f40e6c */
  uStack00000000000000b4 = 0;
  uStack00000000000000b0 = 0;
                    /* catch() { ... } // from try @ 04f40b10 with catch @ 04f40e70 */
  uStack0000000000000078 = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000088 = 0;
  uStack0000000000000080 = 0;
                    /* catch() { ... } // from try @ 04f40c00 with catch @ 04f40e74 */
  uStack0000000000000098 = 0;
  uStack0000000000000090 = 0;
  uStack00000000000000a8 = 0;
  uStack00000000000000ac = 0;
  uStack00000000000000a0 = 0;
                    /* catch() { ... } // from try @ 04f40c68 with catch @ 04f40e78 */
  uStack0000000000000068 = 0;
  uStack0000000000000060 = 0;
                    /* catch() { ... } // from try @ 04f40c58 with catch @ 04f40e7c */
  fVar7 = unaff_s9 * unaff_s9 + unaff_s15 * unaff_s15 + unaff_s8 * unaff_s8;
                    /* catch() { ... } // from try @ 04f40d2c with catch @ 04f40e80 */
  if (DAT_066c2035 == '\0') {
                    /* catch() { ... } // from try @ 04f40b5c with catch @ 04f40e84 */
                    /* catch() { ... } // from try @ 04f40adc with catch @ 04f40e88 */
                    /* catch() { ... } // from try @ 04f40b24 with catch @ 04f40e8c */
    FUN_02b3c81c(PTR_DAT_06315600);
                    /* catch() { ... } // from try @ 04f40aa0 with catch @ 04f40e90 */
                    /* catch() { ... } // from try @ 04f40b34 with catch @ 04f40e94 */
    DAT_066c2035 = '\x01';
  }
                    /* catch() { ... } // from try @ 04f40ab4 with catch @ 04f40e98 */
  fVar4 = ABS(fVar7);
                    /* try { // try from 04f40eb4 to 05040ecb has its CatchHandler @ 04f40fc4 */
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar6 = **(float **)(*(long *)PTR_DAT_06315600 + 0xb8) * 8.0;
  fVar5 = fVar4 * DAT_010326fc;
  if (fVar4 * DAT_010326fc <= fVar6) {
    fVar5 = fVar6;
  }
  if (fVar5 <= ABS(0.0 - fVar7)) {
                    /* try { // try from 04f40f08 to 05040f0f has its CatchHandler @ 04f40fb8 */
                    /* try { // try from 04f40f1c to 05040f23 has its CatchHandler @ 04f40fb4 */
    if (DAT_066c1d9d == '\0') {
      FUN_02b3c81c(PTR_DAT_06312c90);
                    /* try { // try from 04f40f30 to 05040f53 has its CatchHandler @ 04f40fb0 */
      DAT_066c1d9d = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar1 = PTR_DAT_06312cd0;
    if (SQRT(fVar7) <= DAT_01032864) {
      if (DAT_066c1d97 == '\0') {
        FUN_02b3c81c(PTR_DAT_06312438);
        DAT_066c1d97 = '\x01';
      }
      fVar7 = *(float *)(*(long *)(*(long *)PTR_DAT_06312438 + 0xb8) + 4);
    }
    else {
      fVar7 = unaff_s8 / SQRT(fVar7);
    }
    uVar2 = FUN_05c8db98(unaff_x20 + 0x2c,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar1);
    }
    fStack0000000000000004 = fVar7;
    uVar3 = FUN_05d12d1c(in_stack_00000020._4_4_,uStack0000000000000028,uStack000000000000002c,
                         unaff_s13,&stack0x00000090,uVar2,1,0);
    if ((uVar3 & 1) == 0) {
      uStack0000000000000078 = 0;
      uStack0000000000000070 = 0;
      uStack0000000000000088 = 0;
      uStack0000000000000080 = 0;
      uStack0000000000000068 = 0;
      uStack0000000000000060 = 0;
    }
    else {
      in_stack_000000c8 = uStack0000000000000098;
      in_stack_000000c0 = uStack0000000000000090;
      in_stack_000000d8 = uStack00000000000000a8;
      in_stack_000000d0 = uStack00000000000000a0;
      uStack00000000000000e4 = uStack00000000000000b4;
      uStack00000000000000dc = uStack00000000000000ac;
      in_stack_000000e0 = uStack00000000000000b0;
      in_stack_00000048 = 0;
      in_stack_00000040 = 0;
      in_stack_00000058 = 0;
      in_stack_00000050 = 0;
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      FUN_03ad9c4c(&stack0x00000030,&stack0x000000c0,
                   *(undefined8 *)System_Collections_Generic_Dictionary<object,_int>_TypeInfo);
      uStack0000000000000088 = in_stack_00000058;
      uStack0000000000000080 = in_stack_00000050;
      uStack0000000000000068 = in_stack_00000038;
      uStack0000000000000060 = in_stack_00000030;
      uStack0000000000000078 = in_stack_00000048;
      uStack0000000000000070 = in_stack_00000040;
    }
    unaff_x19[5] = uStack0000000000000088;
    unaff_x19[4] = uStack0000000000000080;
    unaff_x19[1] = uStack0000000000000068;
    *unaff_x19 = uStack0000000000000060;
    unaff_x19[3] = uStack0000000000000078;
    unaff_x19[2] = uStack0000000000000070;
  }
  else {
    uVar3 = 0;
    unaff_x19[3] = 0;
    unaff_x19[2] = 0;
    unaff_x19[5] = 0;
    unaff_x19[4] = 0;
                    /* try { // try from 04f40eec to 05040eef has its CatchHandler @ 04f40fc0 */
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
                    /* try { // try from 04f40ef0 to 05040f07 has its CatchHandler @ 04f40fbc */
  }
  return uVar3 & 1;
}


