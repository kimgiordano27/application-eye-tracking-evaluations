/*
FUNCTION_NAME: OVRManager$$add_SpaceListSaveComplete
ENTRY_POINT: 090810cc
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__add_SpaceListSaveComplete(long param_1,float param_2,float param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  float fVar4;
  float unaff_s8;
  float fVar5;
  float unaff_s10;
  undefined4 unaff_s13;
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
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  undefined8 uStack00000000000000e4;
  
                    /* try { // try from 090810d4 to 091810d7 has its CatchHandler @ 0908119c */
                    /* try { // try from 090810d8 to 091810db has its CatchHandler @ 09081198 */
                    /* try { // try from 090810dc to 091810ff has its CatchHandler @ 09080a1c */
  if (param_2 <= param_3) {
    param_2 = param_3;
  }
  fVar4 = **(float **)(**(long **)(param_1 + 0xf00) + 0xb8) * 8.0;
  fVar5 = param_2 * DAT_01df4f4c;
  if (param_2 * DAT_01df4f4c <= fVar4) {
    fVar5 = fVar4;
  }
                    /* try { // try from 09081100 to 0918110f has its CatchHandler @ 09081180 */
  if (fVar5 <= ABS(param_3 - unaff_s10)) {
                    /* try { // try from 09081124 to 09181133 has its CatchHandler @ 09081148 */
                    /* try { // try from 09081138 to 0918113f has its CatchHandler @ 09081144 */
                    /* catch() { ... } // from try @ 09080fcc with catch @ 09081140 */
                    /* catch() { ... } // from try @ 09081138 with catch @ 09081144 */
    if (DAT_0b31f3e6 == '\0') {
                    /* catch() { ... } // from try @ 09081124 with catch @ 09081148 */
                    /* catch() { ... } // from try @ 09080fa4 with catch @ 0908114c */
                    /* catch() { ... } // from try @ 09080f98 with catch @ 09081150 */
      FUN_04947ee4(PTR_DAT_0ac0a830);
                    /* catch() { ... } // from try @ 09080f94 with catch @ 09081154 */
      DAT_0b31f3e6 = '\x01';
    }
                    /* catch() { ... } // from try @ 09080f64 with catch @ 09081160 */
                    /* try { // try from 09081168 to 0918118b has its CatchHandler @ 090811d4 */
    if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    puVar1 = PTR_DAT_0ac56b50;
                    /* catch() { ... } // from try @ 09081100 with catch @ 09081180 */
                    /* catch() { ... } // from try @ 09080c7c with catch @ 09081184 */
    if (SQRT(unaff_s10) <= DAT_01df50c4) {
                    /* catch() { ... } // from try @ 090810d4 with catch @ 0908119c */
                    /* catch() { ... } // from try @ 09080e40 with catch @ 090811a0 */
                    /* catch() { ... } // from try @ 09080ddc with catch @ 090811a4 */
      if (DAT_0b31f3e7 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
                    /* try { // try from 090811b8 to 091811bb has its CatchHandler @ 090811c4 */
        DAT_0b31f3e7 = '\x01';
      }
      fVar5 = *(float *)(*(long *)(*(long *)PTR_DAT_0ac0def8 + 0xb8) + 4);
    }
    else {
                    /* try { // try from 0908118c to 091811b7 has its CatchHandler @ 09080a1c */
      fVar5 = unaff_s8 / SQRT(unaff_s10);
                    /* catch() { ... } // from try @ 09080e68 with catch @ 09081194 */
                    /* catch() { ... } // from try @ 090810d8 with catch @ 09081198 */
    }
    uVar2 = FUN_0a17c8d0(unaff_x20 + 0x2c,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c(*(long *)puVar1);
    }
    fStack0000000000000004 = fVar5;
    uVar3 = FUN_0a1f2b10(in_stack_00000020._4_4_,uStack0000000000000028,uStack000000000000002c,
                         unaff_s13,&stack0x00000090,uVar2,1,0);
    if ((uVar3 & 1) == 0) {
      in_stack_00000078 = 0;
      in_stack_00000070 = 0;
      in_stack_00000088 = 0;
      in_stack_00000080 = 0;
      in_stack_00000068 = 0;
      in_stack_00000060 = 0;
    }
    else {
      in_stack_000000c8 = in_stack_00000098;
      in_stack_000000c0 = in_stack_00000090;
      in_stack_000000d8 = in_stack_000000a8;
      in_stack_000000d0 = in_stack_000000a0;
      uStack00000000000000e4 = uStack00000000000000b4;
      in_stack_000000e0 = uStack00000000000000b0;
      in_stack_00000048 = 0;
      in_stack_00000040 = 0;
      in_stack_00000058 = 0;
      in_stack_00000050 = 0;
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      FUN_06fc6590(&stack0x00000030,&stack0x000000c0,*(undefined8 *)PTR_DAT_0ac78720);
      in_stack_00000088 = in_stack_00000058;
      in_stack_00000080 = in_stack_00000050;
      in_stack_00000068 = in_stack_00000038;
      in_stack_00000060 = in_stack_00000030;
      in_stack_00000078 = in_stack_00000048;
      in_stack_00000070 = in_stack_00000040;
    }
    unaff_x19[5] = in_stack_00000088;
    unaff_x19[4] = in_stack_00000080;
    unaff_x19[1] = in_stack_00000068;
    *unaff_x19 = in_stack_00000060;
    unaff_x19[3] = in_stack_00000078;
    unaff_x19[2] = in_stack_00000070;
  }
  else {
    uVar3 = 0;
                    /* try { // try from 09081110 to 09181123 has its CatchHandler @ 09080a1c */
    unaff_x19[3] = 0;
    unaff_x19[2] = 0;
    unaff_x19[5] = 0;
    unaff_x19[4] = 0;
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
  }
  return uVar3 & 1;
}


