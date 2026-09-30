/*
FUNCTION_NAME: EntityNameStoreAccess$$.ctor
ENTRY_POINT: 0301dd54
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0301df1c) */
/* WARNING: Removing unreachable block (ram,0x0301df20) */
/* WARNING: Removing unreachable block (ram,0x0301e34c) */

void EntityNameStoreAccess___ctor(float param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  uint unaff_w24;
  uint unaff_w26;
  long lVar9;
  undefined4 unaff_w28;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float unaff_s8;
  float unaff_s10;
  float fVar24;
  float fVar25;
  float unaff_s14;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  uint uStack0000000000000040;
  float fStack0000000000000044;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  float fStack0000000000000068;
  float fStack000000000000006c;
  undefined8 in_stack_00000070;
  long in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long in_stack_000000d0;
  undefined8 in_stack_000000d8;
  uint uStack00000000000000e0;
  uint uStack00000000000000e4;
  long in_stack_000000e8;
  long in_stack_00000118;
  undefined8 in_stack_00000178;
  
  do {
    if (!(bool)in_ZR) {
                    /* try { // try from 0301dd58 to 0311dd5b has its CatchHandler @ 0301dd88 */
                    /* try { // try from 0301dd5c to 0311dd5f has its CatchHandler @ 0301dd80 */
      if (in_stack_000000e8 == 0) {
LAB_0301e314:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
                    /* try { // try from 0301dd60 to 0311dd63 has its CatchHandler @ 0301dac4 */
                    /* try { // try from 0301dd64 to 0311dd67 has its CatchHandler @ 0301dd70 */
                    /* try { // try from 0301dd68 to 0311ddab has its CatchHandler @ 0301dac4 */
                    /* catch() { ... } // from try @ 0301dd64 with catch @ 0301dd70 */
                    /* catch() { ... } // from try @ 0301dc8c with catch @ 0301dd74 */
      if ((*(uint *)(in_stack_000000e8 + 0x18) <= param_2) ||
         (*(uint *)(in_stack_000000e8 + 0x18) <= param_2 + 1)) goto LAB_0301e310;
                    /* catch() { ... } // from try @ 0301dc9c with catch @ 0301dd78 */
                    /* catch() { ... } // from try @ 0301dc90 with catch @ 0301dd7c */
                    /* catch() { ... } // from try @ 0301dd5c with catch @ 0301dd80 */
                    /* catch() { ... } // from try @ 0301dc64 with catch @ 0301dd84 */
                    /* catch() { ... } // from try @ 0301dd58 with catch @ 0301dd88 */
      fVar10 = *(float *)(in_stack_000000e8 + (long)(int)param_2 * 4 + 0x20);
                    /* catch() { ... } // from try @ 0301dc00 with catch @ 0301dd8c */
                    /* catch() { ... } // from try @ 0301dba4 with catch @ 0301dd90 */
                    /* catch() { ... } // from try @ 0301dd50 with catch @ 0301dd94 */
      param_1 = (unaff_s10 - fVar10) /
                (*(float *)(in_stack_000000e8 + (long)(int)(param_2 + 1) * 4 + 0x20) - fVar10);
      unaff_w26 = param_2;
    }
                    /* try { // try from 0301ddac to 0311ddaf has its CatchHandler @ 0301ddbc */
    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
                    /* catch() { ... } // from try @ 0301ddac with catch @ 0301ddbc */
                    /* try { // try from 0301ddc4 to 0311de2b has its CatchHandler @ 0301de40 */
    uVar3 = FUN_0276c214(unaff_w26 + 1,uStack00000000000000e0,0);
    if (in_stack_00000080 == 0) goto LAB_0301e314;
    if ((*(uint *)(in_stack_00000080 + 0x18) <= unaff_w26) ||
       (*(uint *)(in_stack_00000080 + 0x18) <= uVar3)) goto LAB_0301e310;
    lVar5 = *(long *)(unaff_x19 + 0x48);
    if (lVar5 == 0) goto LAB_0301e314;
    lVar9 = (long)(int)unaff_w26;
    lVar8 = (long)(int)uVar3;
    lVar6 = in_stack_00000080 + lVar9 * 0xc;
    lVar7 = in_stack_00000080 + lVar8 * 0xc;
    uVar16 = *(undefined8 *)(lVar7 + 0x20);
    uVar26 = *(undefined8 *)(lVar6 + 0x20);
    fVar10 = *(float *)(lVar6 + 0x28);
    fVar15 = *(float *)(lVar7 + 0x28);
    if (*(int *)(lVar5 + 0x10) == 0) {
LAB_0301df28:
      fVar25 = *(float *)(lVar5 + 0x20);
      fVar11 = *(float *)(lVar5 + 0x24);
      if (*(char *)(lVar5 + 0x18) != '\0') {
        fVar11 = fVar25;
      }
    }
    else {
                    /* try { // try from 0301de2c to 0311de37 has its CatchHandler @ 0301dac4 */
      if (*(int *)(lVar5 + 0x10) != 1) {
        thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
        uVar16 = thunk_FUN_01a89e68();
        FUN_026b3f6c(uVar16,0);
        uVar26 = thunk_FUN_01a6ca08(PTR_DAT_03d28a00);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar16,uVar26);
      }
      if (*(char *)(unaff_x19 + 0x50) == '\0') goto LAB_0301df28;
      lVar6 = *(long *)(unaff_x19 + 0x10);
      if (lVar6 == 0) goto LAB_0301e314;
      fVar11 = (float)FUN_0300b038(unaff_w26,*(undefined4 *)(lVar5 + 0x14),
                                   *(undefined8 *)(lVar6 + 0x38),*(undefined8 *)(lVar6 + 0x40),
                                   *(undefined8 *)(lVar6 + 0x48),*(undefined8 *)(lVar6 + 0x50),0);
      uVar4 = *(undefined8 *)(unaff_x19 + 0x48);
      in_stack_00000178._4_1_ = '\0';
      FUN_027e0bd8(uVar4,(long)&stack0x00000178 + 4,0);
      lVar5 = *(long *)(unaff_x19 + 0x48);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      fVar25 = *(float *)(lVar5 + 0x20);
      cVar1 = *(char *)(lVar5 + 0x18);
      fVar24 = *(float *)(lVar5 + 0x24);
      lVar6 = *(long *)(lVar5 + 0x28);
      lVar7 = *(long *)(lVar5 + 0x30);
      uVar14 = FUN_01cbd448(fVar11 - *(float *)(lVar5 + 0x1c),0x3f800000,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      fVar11 = (float)FUN_0366c2a0(lVar6,0);
      fVar25 = fVar25 * fVar11;
      fVar11 = fVar25;
      if (cVar1 == '\0') {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        fVar11 = (float)FUN_0366c2a0(uVar14,lVar7,0);
        fVar11 = fVar24 * fVar11;
      }
      unaff_w28 = in_stack_00000018._4_4_;
      if (in_stack_00000178._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
      }
    }
    if (in_stack_00000050 == 0) goto LAB_0301e314;
    if (*(uint *)(in_stack_00000050 + 0x18) <= unaff_w26) {
LAB_0301e310:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    if (in_stack_00000048 == 0) goto LAB_0301e314;
    if (*(uint *)(in_stack_00000048 + 0x18) <= unaff_w26) goto LAB_0301e310;
    lVar5 = in_stack_00000050 + lVar9 * 0xc;
    fVar24 = *(float *)(lVar5 + 0x24);
    fVar17 = *(float *)(lVar5 + 0x28);
    fVar20 = *(float *)(in_stack_00000048 + lVar9 * 0xc + 0x20);
    uVar4 = FUN_036c0d90(*(undefined4 *)(lVar5 + 0x20),0);
    if ((*(uint *)(in_stack_00000050 + 0x18) <= uVar3) ||
       (*(uint *)(in_stack_00000048 + 0x18) <= uVar3)) goto LAB_0301e310;
    fVar18 = (float)uVar26;
    fVar19 = (float)((ulong)uVar26 >> 0x20);
    lVar5 = in_stack_00000050 + lVar8 * 0xc;
    lVar6 = in_stack_00000048 + lVar8 * 0xc;
    FUN_036c0d90(*(undefined4 *)(lVar5 + 0x20),*(undefined4 *)(lVar5 + 0x24),
                 *(undefined4 *)(lVar5 + 0x28),*(undefined4 *)(lVar6 + 0x20),
                 *(undefined4 *)(lVar6 + 0x24),*(undefined4 *)(lVar6 + 0x28),0);
    fVar12 = (float)FUN_036c0a20(uVar4,0);
    fVar27 = fVar24 + fVar24;
    fVar29 = fVar17 + fVar17;
    fVar21 = fVar12 * (fVar12 + fVar12);
    fVar22 = fVar24 * fVar27;
    fVar13 = fVar12 * fVar29;
    fVar24 = fVar24 * fVar29;
    fVar23 = fVar20 * (fVar12 + fVar12);
    fVar28 = fVar20 * fVar27;
    do {
      if (unaff_x22 == 0) goto LAB_0301e314;
      uVar3 = (uint)unaff_x20;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar3) goto LAB_0301e310;
      fVar31 = fVar20 * fVar29 + fVar12 * fVar27;
      fVar32 = fVar13 - fVar28;
      fVar34 = 1.0 - (fVar17 * fVar29 + fVar22);
      fVar35 = 1.0 - (fVar17 * fVar29 + fVar21);
      fVar30 = fVar12 * fVar27 - fVar20 * fVar29;
      fVar33 = fVar23 + fVar24;
      lVar5 = unaff_x22 + unaff_x20 * 0xc;
      *(float *)(lVar5 + 0x20) =
           unaff_s14 * fVar30 * fVar11 +
           (float)in_stack_00000030 *
           ((fVar18 + ((float)uVar16 - fVar18) * param_1) - (float)in_stack_00000070) +
           unaff_s8 * fVar34 * fVar25;
      *(float *)(lVar5 + 0x24) =
           unaff_s14 * fVar35 * fVar11 +
           (float)((ulong)in_stack_00000030 >> 0x20) *
           ((fVar19 + ((float)((ulong)uVar16 >> 0x20) - fVar19) * param_1) -
           (float)((ulong)in_stack_00000070 >> 0x20)) + unaff_s8 * fVar31 * fVar25;
      *(float *)(lVar5 + 0x28) =
           unaff_s14 * fVar33 * fVar11 +
           in_stack_00000028._4_4_ *
           ((fVar10 + param_1 * (fVar15 - fVar10)) - fStack0000000000000044) +
           unaff_s8 * fVar32 * fVar25;
      if ((int)uVar3 < in_stack_000000d8._4_4_) {
        if (in_stack_000000d0 == 0) goto LAB_0301e314;
        if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar3) goto LAB_0301e310;
        if (in_stack_00000060 == 0) goto LAB_0301e314;
        if (*(uint *)(in_stack_00000060 + 0x18) <= uVar3) goto LAB_0301e310;
        lVar5 = in_stack_000000d0 + unaff_x20 * 0xc;
        fVar37 = *(float *)(lVar5 + 0x20);
        fVar38 = *(float *)(lVar5 + 0x24);
        fVar39 = *(float *)(lVar5 + 0x28);
        lVar5 = in_stack_00000060 + unaff_x20 * 0xc;
        *(float *)(lVar5 + 0x20) = fVar34 * fVar37 + fVar30 * fVar38 + (fVar28 + fVar13) * fVar39;
        *(float *)(lVar5 + 0x24) = fVar31 * fVar37 + fVar35 * fVar38 + (fVar24 - fVar23) * fVar39;
        *(float *)(lVar5 + 0x28) =
             fVar32 * fVar37 + fVar33 * fVar38 + (1.0 - (fVar22 + fVar21)) * fVar39;
      }
      if ((int)uVar3 < in_stack_000000c8._4_4_) {
        if (in_stack_000000c0 == 0) goto LAB_0301e314;
        if (*(uint *)(in_stack_000000c0 + 0x18) <= uVar3) goto LAB_0301e310;
        if (in_stack_00000058 == 0) goto LAB_0301e314;
        if (*(uint *)(in_stack_00000058 + 0x18) <= uVar3) goto LAB_0301e310;
        lVar5 = in_stack_000000c0 + unaff_x20 * 0x10;
        fVar37 = *(float *)(lVar5 + 0x20);
        fVar39 = *(float *)(lVar5 + 0x24);
        fVar38 = *(float *)(lVar5 + 0x28);
        uVar36 = *(undefined4 *)(lVar5 + 0x2c);
        lVar5 = in_stack_00000058 + unaff_x20 * 0x10;
        *(float *)(lVar5 + 0x20) = fVar34 * fVar37 + fVar30 * fVar39 + (fVar28 + fVar13) * fVar38;
        *(float *)(lVar5 + 0x24) = fVar31 * fVar37 + fVar35 * fVar39 + (fVar24 - fVar23) * fVar38;
        *(float *)(lVar5 + 0x28) =
             fVar32 * fVar37 + fVar33 * fVar39 + (1.0 - (fVar22 + fVar21)) * fVar38;
        *(undefined4 *)(lVar5 + 0x2c) = uVar36;
      }
      unaff_w24 = unaff_w24 + 1;
      if (unaff_w24 == uStack00000000000000e4) {
        return;
      }
      if (*(uint *)(in_stack_00000118 + 0x18) <= unaff_w24) goto LAB_0301e310;
      if (in_stack_00000088 == 0) goto LAB_0301e314;
      uVar3 = *(uint *)(in_stack_00000118 + (long)(int)unaff_w24 * 4 + 0x20);
      unaff_x20 = (long)(int)uVar3;
      if (*(uint *)(in_stack_00000088 + 0x18) <= uVar3) goto LAB_0301e310;
      lVar5 = in_stack_00000088 + unaff_x20 * 0xc;
      unaff_s8 = *(float *)(lVar5 + 0x20);
      unaff_s14 = *(float *)(lVar5 + 0x24);
      fVar30 = *(float *)(lVar5 + 0x28);
    } while ((unaff_w24 != 0) && (in_stack_000000b8._4_4_ == fVar30));
    fVar10 = fStack0000000000000068 + fStack000000000000006c * fVar30;
    if (*(char *)(unaff_x19 + 0x38) != '\0') {
      fVar10 = fVar10 + (fVar10 - *(float *)(unaff_x19 + 0x3c)) * *(float *)(unaff_x19 + 0x40);
    }
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0301e314;
    fVar10 = in_stack_00000038._4_4_ * fVar10;
    bVar2 = fVar10 < 0.0;
    if (*(char *)(*(long *)(unaff_x19 + 0x10) + 0x32) == '\0') {
      unaff_s10 = 0.0;
      if ((!bVar2) && (unaff_s10 = fVar10, 1.0 < fVar10)) {
        unaff_s10 = 1.0;
      }
    }
    else {
      while (bVar2) {
        fVar10 = fVar10 + 1.0;
        bVar2 = fVar10 < 0.0;
      }
      for (; unaff_s10 = fVar10, 1.0 < fVar10; fVar10 = fVar10 + -1.0) {
      }
    }
    param_2 = FUN_02fcde38(unaff_s10,in_stack_000000e8,unaff_w28,0);
    param_1 = 1.0;
    in_ZR = param_2 == uStack00000000000000e0;
    unaff_w26 = uStack0000000000000040;
    in_stack_000000b8._4_4_ = fVar30;
  } while( true );
}


