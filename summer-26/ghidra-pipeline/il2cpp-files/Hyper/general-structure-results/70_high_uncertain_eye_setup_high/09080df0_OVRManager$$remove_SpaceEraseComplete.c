/*
FUNCTION_NAME: OVRManager$$remove_SpaceEraseComplete
ENTRY_POINT: 09080df0
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRManager__remove_SpaceEraseComplete
          (undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
          undefined1 param_4 [16],undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  float *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 unaff_s12;
  float unaff_s15;
  float fStack0000000000000004;
  undefined8 in_stack_00000060;
  float fStack0000000000000068;
  float fStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  undefined8 in_stack_00000088;
  undefined4 uStack00000000000000ac;
  undefined8 uStack00000000000000b4;
  undefined8 in_stack_00000160;
  float fStack0000000000000168;
  float fStack000000000000016c;
  undefined8 in_stack_000001c8;
  
  uVar2 = *param_1;
  *(long *)(unaff_x24 + 0xb4) = param_4._8_8_;
  *(long *)(unaff_x24 + 0xac) = param_4._0_8_;
  FUN_06fc6590(param_5,param_6,uVar2);
  FUN_06fc65c0(&stack0x00000290,&stack0x00000260,*(undefined8 *)PTR_DAT_0ac78710);
  uStack00000000000000b4 = *(undefined8 *)(unaff_x24 + 0xb4);
  uStack00000000000000ac = (undefined4)*(undefined8 *)(unaff_x24 + 0xac);
  FUN_090812c8((long)&stack0x00000160 + 4,uStack0000000000000074,uStack0000000000000070,unaff_s12);
  fVar6 = fStack0000000000000168;
                    /* try { // try from 09080e40 to 09180e67 has its CatchHandler @ 090811a0 */
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
                    /* try { // try from 09080e68 to 09180e83 has its CatchHandler @ 09081194 */
  fVar8 = fStack0000000000000068 + fStack0000000000000168;
  fVar7 = fStack000000000000006c + fStack000000000000016c;
  fVar4 = (float)FUN_0a1ecf3c(*(long *)(unaff_x20 + 0x20),0);
                    /* try { // try from 09080e90 to 09180e97 has its CatchHandler @ 09080f4c */
  uVar1 = FUN_09081468(in_stack_00000088._4_4_ + in_stack_00000160._4_4_,fVar8,fVar7,
                       fStack0000000000000084,fVar4 - fStack0000000000000084);
  if ((uVar1 & 1) != 0) {
                    /* try { // try from 09080ea8 to 09180eaf has its CatchHandler @ 09080f50 */
    uVar5 = FUN_0a1f8a4c(&stack0x00000230,0);
                    /* try { // try from 09080eb8 to 09180ed3 has its CatchHandler @ 09080f48 */
    if (*(char *)(unaff_x23 + 0x3e4) == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      *(undefined1 *)(unaff_x23 + 0x3e4) = 1;
    }
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    fStack0000000000000004 = in_stack_00000060._4_4_ + fVar6;
    uVar1 = FUN_090818ac(uVar5,fVar8,fVar7,*(undefined4 *)(lVar3 + 0x18),
                         *(undefined4 *)(lVar3 + 0x1c),*(undefined4 *)(lVar3 + 0x20),
                         (long)&stack0x000001c8 + 4);
    if ((uVar1 & 1) != 0) {
      FUN_0a1f8a4c(&stack0x00000230,0);
      fVar4 = *(float *)(unaff_x20 + 0x34);
      if (fVar8 - (fStack0000000000000080 - fStack0000000000000084) <= fVar4) {
        FUN_0a1f8a64(&stack0x00000230,0);
        uVar1 = FUN_0907f758();
        if ((uVar1 & 1) != 0) {
          if (fVar6 <= unaff_s15 - in_stack_000001c8._4_4_) {
            fVar6 = unaff_s15 - in_stack_000001c8._4_4_;
          }
          FUN_09081eac(0);
          fStack0000000000000004 = fVar4 * fVar6;
          uVar1 = FUN_09081000(uStack0000000000000078,fStack0000000000000080,uStack000000000000007c,
                               in_stack_00000088._4_4_,fStack0000000000000068,fStack000000000000006c
                               ,fStack0000000000000084);
          if ((uVar1 & 1) == 0) {
            *unaff_x19 = in_stack_00000160._4_4_;
            unaff_x19[1] = fVar6;
            unaff_x19[2] = fStack000000000000016c;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


