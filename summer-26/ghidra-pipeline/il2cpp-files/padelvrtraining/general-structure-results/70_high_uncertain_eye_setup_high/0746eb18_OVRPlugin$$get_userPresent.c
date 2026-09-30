/*
FUNCTION_NAME: OVRPlugin$$get_userPresent
ENTRY_POINT: 0746eb18
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_userPresent
               (undefined8 param_1,float param_2,undefined8 param_3,undefined8 param_4,float param_5
               ,float param_6,float param_7)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_d8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float in_s16;
  float in_s17;
  float in_s21;
  float in_s22;
  float in_s23;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 in_stack_00000108;
  
  uStack00000000000000f0 = param_1;
  while( true ) {
                    /* try { // try from 0746eb18 to 0756eb57 has its CatchHandler @ 0746e944 */
    fVar8 = (float)param_4;
    fVar7 = (float)param_3;
                    /* catch() { ... } // from try @ 0746eb14 with catch @ 0746eb48 */
                    /* try { // try from 0746eb58 to 0756eb5f has its CatchHandler @ 0746eb74 */
                    /* try { // try from 0746eb60 to 0756eb6b has its CatchHandler @ 0746e944 */
                    /* try { // try from 0746eb6c to 0756eb73 has its CatchHandler @ 0746eb74 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0746eb58 with catch @ 0746eb74
                       catch(type#2 @ 00000000) { ... } // from try @ 0746eb6c with catch @ 0746eb74
                        */
    uStack00000000000000f8 =
         CONCAT44((unaff_s10 * fVar8 + param_6 + param_7) - unaff_s9 * fVar7,in_stack_00000078);
    uStack0000000000000100 =
         CONCAT44((unaff_s11 * fVar7 + in_s22 + param_5) - unaff_s10 * param_2,
                  (unaff_s9 * param_2 + in_s16 + in_s17) - unaff_s11 * fVar8);
    in_stack_00000108 =
         CONCAT44(in_stack_00000108._4_4_,((in_s23 - in_s21) - unaff_s10 * fVar7) - unaff_s9 * fVar8
                 );
    FUN_07411b08(&stack0x00000030,*(undefined8 *)(unaff_x20 + 0x28),&stack0x000000f0,0);
    in_stack_00000088 = CONCAT44(fStack000000000000003c,uStack0000000000000038);
    in_stack_00000080 = in_stack_00000030;
    *(ulong *)(unaff_x23 + 0x14) = CONCAT44(fStack0000000000000048,fStack0000000000000044);
    *(ulong *)(unaff_x23 + 0xc) = CONCAT44(fStack0000000000000040,fStack000000000000003c);
    lVar4 = *unaff_x21;
    fStack0000000000000018 = (float)in_stack_00000098;
    uStack000000000000001c = (undefined4)*(undefined8 *)(unaff_x23 + 0x1c);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uStack00000000000000f0 = in_stack_00000030;
    in_stack_00000108 = CONCAT44(uStack000000000000001c,fStack0000000000000018);
    uStack0000000000000100 = in_stack_00000090;
    lVar6 = *unaff_x25;
    *(undefined8 *)(unaff_x23 + 0x94) = *(undefined8 *)(unaff_x23 + 0x24);
    *(undefined8 *)(unaff_x23 + 0x8c) = *(undefined8 *)(unaff_x23 + 0x1c);
    lVar5 = *(long *)(lVar4 + 0x10);
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    uStack00000000000000f8 = in_stack_00000088;
    if (lVar5 == 0) break;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      uVar3 = *(undefined8 *)(unaff_x23 + 0x8c);
      lVar5 = lVar5 + (int)uVar1 * unaff_x27;
      *(undefined8 *)(lVar5 + 0x44) = *(undefined8 *)(unaff_x23 + 0x94);
      *(undefined8 *)(lVar5 + 0x3c) = uVar3;
      *(undefined8 *)(lVar5 + 0x28) = in_stack_00000088;
      *(undefined8 *)(lVar5 + 0x20) = in_stack_00000030;
      *(undefined8 *)(lVar5 + 0x38) = in_stack_00000108;
      *(undefined8 *)(lVar5 + 0x30) = in_stack_00000090;
    }
    else {
      uStack0000000000000054 = *(undefined8 *)(unaff_x23 + 0x94);
      fStack0000000000000048 = fStack0000000000000018;
      fStack0000000000000040 = (float)in_stack_00000090;
      fStack0000000000000044 = (float)((ulong)in_stack_00000090 >> 0x20);
      uStack000000000000004c = (undefined4)*(undefined8 *)(unaff_x23 + 0x8c);
      uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)(unaff_x23 + 0x8c) >> 0x20);
      FUN_0592f0c4(lVar4,&stack0x00000030,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    uVar2 = FUN_06d87180(&stack0x000000b0,*unaff_x24);
    if ((uVar2 & 1) == 0) {
      FUN_06d8717c(&stack0x000000b0,*unaff_x22);
      return;
    }
    uVar3 = *(undefined8 *)((long)unaff_x26 + 0x1c);
    in_stack_00000088 = unaff_x26[1];
    in_stack_00000080 = *unaff_x26;
    in_stack_00000098 = unaff_x26[3];
    in_stack_00000090 = unaff_x26[2];
    uVar10 = *(undefined8 *)((long)unaff_x26 + 0x14);
    uVar9 = *(undefined8 *)((long)unaff_x26 + 0xc);
    *(undefined8 *)(unaff_x23 + 0x24) = *(undefined8 *)((long)unaff_x26 + 0x24);
    *(undefined8 *)(unaff_x23 + 0x1c) = uVar3;
    uStack00000000000000f8 = unaff_x26[1];
    uStack00000000000000f0 = *unaff_x26;
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 *)(unaff_x23 + 0x84) = uVar10;
    *(undefined8 *)(unaff_x23 + 0x7c) = uVar9;
    FUN_07411d10(&stack0x00000030,uVar3,&stack0x000000f0,0);
    fVar7 = fStack0000000000000048;
    unaff_s9 = fStack0000000000000044;
    unaff_s10 = fStack0000000000000040;
    unaff_s11 = fStack000000000000003c;
    param_5 = (float)uVar9;
    in_stack_00000070 = in_stack_00000030;
    in_stack_00000078 = uStack0000000000000038;
    param_4 = 0;
    param_3 = unaff_d8;
    param_2 = (float)FUN_08a447dc(0);
    param_6 = fVar7 * param_2;
    param_7 = unaff_s11 * param_5;
    in_s16 = fVar7 * (float)param_3;
    in_s17 = unaff_s10 * param_5;
    in_s21 = unaff_s11 * param_2;
    in_s22 = fVar7 * (float)param_4;
    in_s23 = fVar7 * param_5;
    param_5 = unaff_s9 * param_5;
    uStack00000000000000f0 = in_stack_00000070;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


