/*
FUNCTION_NAME: OVRPlugin$$GetLayerTexture
ENTRY_POINT: 07c73510
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetLayerTexture
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               float param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x25;
  long unaff_x26;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar13;
  float fVar14;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  float fStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  float fStack00000000000000ac;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  float in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  uStack0000000000000094 = param_2._8_8_;
  uStack000000000000008c = param_2._0_4_;
  uStack0000000000000090 = param_2._4_4_;
  if (*(int *)(param_5 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  in_stack_00000048 = in_stack_00000088;
  in_stack_00000040 = in_stack_00000080;
  uStack0000000000000054 = uStack0000000000000094;
  uStack000000000000004c = uStack000000000000008c;
  in_stack_00000050 = uStack0000000000000090;
  FUN_07ca0128(&stack0x00000060,&stack0x00000040,0);
  uStack00000000000000a8 = uStack0000000000000068;
  fStack00000000000000ac = fStack000000000000006c;
  in_stack_000000a0 = in_stack_00000060;
  *(undefined8 *)(unaff_x26 + 0x14) = uStack0000000000000074;
  *(ulong *)(unaff_x26 + 0xc) = CONCAT44(uStack0000000000000070,fStack000000000000006c);
  fVar8 = unaff_s9;
  fVar9 = unaff_s8;
  uVar7 = FUN_09516eb8(0);
  in_stack_000000a0 = CONCAT44(fVar8,uVar7);
  fVar11 = unaff_s10 * in_stack_000000b8;
  fVar12 = unaff_s9 * fStack00000000000000b4;
  fVar13 = unaff_s8 * fStack00000000000000b0;
  fVar14 = unaff_s10 * fStack00000000000000b0;
                    /* try { // try from 07c735b0 to 07d735b7 has its CatchHandler @ 07c7360c */
  fVar8 = unaff_s9 * fStack00000000000000b0;
                    /* try { // try from 07c735b8 to 07d735bf has its CatchHandler @ 07c73600 */
                    /* try { // try from 07c735c0 to 07d735c3 has its CatchHandler @ 07c735f8 */
                    /* try { // try from 07c735c4 to 07d735c7 has its CatchHandler @ 07c735ec */
                    /* try { // try from 07c735c8 to 07d735cb has its CatchHandler @ 07c73610 */
                    /* catch() { ... } // from try @ 07c732a8 with catch @ 07c735cc
                       try { // try from 07c735cc to 07d7362f has its CatchHandler @ 07c731f8 */
  fVar10 = unaff_s8 * fStack00000000000000b4;
                    /* catch() { ... } // from try @ 07c7336c with catch @ 07c735d0 */
                    /* catch() { ... } // from try @ 07c73388 with catch @ 07c735d4 */
                    /* catch() { ... } // from try @ 07c7334c with catch @ 07c735e4 */
  fStack00000000000000b0 =
       (unaff_s8 * fStack00000000000000ac +
       param_4 * fStack00000000000000b0 + unaff_s9 * in_stack_000000b8) -
       unaff_s10 * fStack00000000000000b4;
                    /* catch() { ... } // from try @ 07c7333c with catch @ 07c735e8 */
  fStack00000000000000b4 =
       (fVar14 + param_4 * fStack00000000000000b4 + unaff_s8 * in_stack_000000b8) -
       unaff_s9 * fStack00000000000000ac;
                    /* catch() { ... } // from try @ 07c735c4 with catch @ 07c735ec */
  in_stack_000000b8 =
       ((param_4 * in_stack_000000b8 - unaff_s10 * fStack00000000000000ac) - fVar8) - fVar10;
                    /* catch() { ... } // from try @ 07c732ac with catch @ 07c735f0 */
  _uStack00000000000000a8 =
       CONCAT44((fVar12 + param_4 * fStack00000000000000ac + fVar11) - fVar13,fVar9);
                    /* catch() { ... } // from try @ 07c733dc with catch @ 07c735f4 */
                    /* catch() { ... } // from try @ 07c735c0 with catch @ 07c735f8 */
                    /* catch() { ... } // from try @ 07c733c0 with catch @ 07c735fc */
  FUN_07c738a8();
  lVar1 = FUN_07c723dc();
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_07c723dc();
    if ((unaff_x19 == 0) || (uVar3 = FUN_095259a0(), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar1 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar1 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_07c736d8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar2,*unaff_x25,4);
LAB_07c736d8:
    (*(code *)*puVar4)(plVar2,uVar3,puVar4[1]);
    FUN_07c72b70();
  }
  return;
}


