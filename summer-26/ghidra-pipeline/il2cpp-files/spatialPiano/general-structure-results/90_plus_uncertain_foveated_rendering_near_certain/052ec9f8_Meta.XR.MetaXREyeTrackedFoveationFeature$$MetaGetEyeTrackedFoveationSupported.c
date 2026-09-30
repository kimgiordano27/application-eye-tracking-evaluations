/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaGetEyeTrackedFoveationSupported
ENTRY_POINT: 052ec9f8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 136
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;strong_foveation_hits_4;functionality_foveated_rendering
*/


uint Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetEyeTrackedFoveationSupported
               (ulong param_1,float param_2,float param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  undefined4 *unaff_x20;
  uint *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  undefined8 unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 unaff_s8;
  undefined8 uVar10;
  float unaff_s9;
  uint uVar11;
  float unaff_s10;
  float fVar12;
  float unaff_s13;
  undefined4 unaff_s14;
  undefined4 uStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000028;
  float in_stack_00000030;
  undefined4 uStack0000000000000048;
  float fStack000000000000004c;
  undefined8 in_stack_00000050;
  uint uStack0000000000000058;
  undefined8 uStack000000000000005c;
  float fStack0000000000000064;
  undefined8 in_stack_000000a0;
  float in_stack_000000a8;
  
  uStack000000000000001c = unaff_s14;
  while( true ) {
    uStack0000000000000000 = unaff_s8;
    fStack0000000000000004 = unaff_s9;
    fStack0000000000000008 = unaff_s10;
    fStack0000000000000018 = unaff_s13;
                    /* try { // try from 052eca18 to 053eca23 has its CatchHandler @ 052ecafc */
    uVar2 = FUN_0616c1a4(param_1,unaff_x26,unaff_x25,&stack0x000000a0,&stack0x0000006c,0);
    fVar4 = in_stack_000000a8;
    uVar1 = in_stack_000000a0;
                    /* try { // try from 052eca24 to 053eca2f has its CatchHandler @ 052ecaf4 */
    unaff_s9 = param_2;
    unaff_s10 = param_3;
    if ((uVar2 & 1) != 0) {
      uVar10 = *(undefined8 *)unaff_x21;
                    /* try { // try from 052eca30 to 053ecadf has its CatchHandler @ 052ec810 */
      uVar11 = unaff_x21[2];
      if (*(char *)(unaff_x23 + 0x2bf) == '\0') {
        FUN_02f08768(PTR_DAT_067c8f80);
        *(undefined1 *)(unaff_x23 + 0x2bf) = 1;
      }
      if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      fVar9 = (float)uVar1;
      fVar12 = (float)((ulong)uVar1 >> 0x20);
      fVar8 = SQRT(fVar4 * fVar4 + fVar9 * fVar9 + fVar12 * fVar12);
      if (fVar8 <= in_stack_00000030) {
        if (DAT_06bb42c1 == '\0') {
          FUN_02f08768(PTR_DAT_067c8f78);
          DAT_06bb42c1 = '\x01';
        }
        uStack000000000000005c = **(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
        unaff_s9 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 1);
      }
      else {
        uStack000000000000005c = CONCAT44(-fVar12 / fVar8,-fVar9 / fVar8);
        param_3 = -fVar4;
        unaff_s9 = param_3 / fVar8;
      }
      in_stack_00000050 = uVar10;
      uStack0000000000000058 = uVar11;
      fStack0000000000000064 = unaff_s9;
      uVar2 = FUN_06165c24(fStack000000000000004c,unaff_x25,&stack0x00000050,&stack0x00000070,0);
      unaff_s10 = param_3;
      if (((uVar2 & 1) != 0) &&
         (fVar4 = (float)FUN_06170650(&stack0x00000070,0), unaff_s10 = param_3,
         fVar4 < fStack000000000000004c)) {
        fStack000000000000004c = (float)FUN_06170650(&stack0x00000070,0);
        uVar5 = FUN_06170620(&stack0x00000070,0);
        fVar4 = unaff_s9;
        fVar9 = param_3;
        uVar6 = FUN_06170638(&stack0x00000070,0);
        fVar8 = fVar4;
        unaff_s10 = fVar9;
        uVar7 = FUN_06170650(&stack0x00000070,0);
        *unaff_x20 = uVar5;
        unaff_x20[1] = unaff_s9;
        unaff_x20[2] = param_3;
        unaff_x20[3] = uVar6;
        unaff_x20[4] = fVar4;
        unaff_x20[5] = fVar9;
        in_stack_00000028._4_4_ = 1;
        unaff_x20[6] = uVar7;
        unaff_s9 = fVar8;
      }
    }
    unaff_x29 = unaff_x29 + 1;
    if (unaff_w24 == (uint)unaff_x29) break;
    lVar3 = *(long *)(unaff_x19 + 0x28);
    if (lVar3 == 0) goto LAB_052ecbf8;
    if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x29) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052ecbf8;
    unaff_x25 = *(long *)(lVar3 + unaff_x29 * 8 + 0x20);
    FUN_06172430(fStack000000000000004c,*(long *)(unaff_x19 + 0x30),0);
    uVar11 = *unaff_x21;
    param_2 = (float)unaff_x21[1];
    unaff_x26 = *(undefined8 *)(unaff_x19 + 0x30);
    param_3 = (float)unaff_x21[2];
    if (*(char *)(unaff_x28 + 0x2c3) == '\0') {
      FUN_02f08768();
      *(undefined1 *)(unaff_x28 + 0x2c3) = 1;
    }
    if (unaff_x25 == 0) goto LAB_052ecbf8;
    uVar5 = **(undefined4 **)(*unaff_x22 + 0xb8);
    lVar3 = FUN_060ed7ac(unaff_x25,0);
    if (lVar3 == 0) goto LAB_052ecbf8;
    unaff_s8 = FUN_060ffbe4(lVar3,0);
    unaff_s13 = unaff_s10;
    lVar3 = FUN_060ed7ac(unaff_x25,0);
    if (lVar3 == 0) goto LAB_052ecbf8;
    FUN_060fdda4(lVar3,0);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    param_1 = (ulong)uVar11;
    uStack000000000000001c = uStack0000000000000048;
    uStack0000000000000048 = uVar5;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_06165478(*(long *)(unaff_x19 + 0x30),0,0);
    return in_stack_00000028._4_4_ & 1;
  }
LAB_052ecbf8:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


