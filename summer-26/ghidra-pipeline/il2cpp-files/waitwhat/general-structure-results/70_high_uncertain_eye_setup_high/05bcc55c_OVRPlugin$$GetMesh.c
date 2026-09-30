/*
FUNCTION_NAME: OVRPlugin$$GetMesh
ENTRY_POINT: 05bcc55c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetMesh(undefined1 param_1 [16],float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  float *pfVar11;
  long unaff_x20;
  float *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int iVar12;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  ulong in_stack_00000090;
  float fStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined8 in_stack_000000b0;
  char in_stack_000000b8;
  ulong in_stack_000000c0;
  float fStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined8 uStack00000000000000e4;
  float fStack00000000000000f0;
  float fStack00000000000000f4;
  float fStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined4 uStack0000000000000100;
  undefined8 uStack0000000000000104;
  undefined4 uStack0000000000000110;
  undefined4 uStack0000000000000114;
  undefined4 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  ulong in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  char in_stack_00000178;
  undefined4 uStack0000000000000180;
  float fStack0000000000000184;
  float fStack0000000000000188;
  undefined4 uStack000000000000018c;
  undefined4 uStack0000000000000190;
  undefined4 uStack0000000000000194;
  undefined4 in_stack_00000198;
  
code_r0x05bcc55c:
  uVar14 = FUN_06993e50();
                    /* try { // try from 05bcc564 to 05ccc567 has its CatchHandler @ 05bcc89c */
                    /* try { // try from 05bcc568 to 05ccc573 has its CatchHandler @ 05bcc8b8 */
                    /* try { // try from 05bcc574 to 05ccc583 has its CatchHandler @ 05bcc8cc */
  FUN_05b74f50(&stack0x00000180,&stack0x000000f0,0);
  do {
    fVar5 = fStack0000000000000188;
    fVar19 = fStack0000000000000184;
    uVar3 = uStack0000000000000180;
    if (*(int *)(*(long *)PTR_DAT_07113e80 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_05bcae24(uVar14,param_2,param_3,uVar3,fVar19,fVar5,&stack0x00000110,0);
    uVar9 = FUN_05bc5120(uStack000000000000007c,uStack0000000000000078,in_stack_00000070._4_4_,
                         &stack0x00000110);
    fVar19 = fStack00000000000000c8;
    iVar12 = unaff_w23;
    if ((uVar9 & 1) != 0) {
      uStack0000000000000078 = uStack0000000000000114;
      uStack000000000000007c = uStack0000000000000110;
      in_stack_00000070._4_4_ = in_stack_00000118;
      FUN_05b74f50(in_stack_00000038,&stack0x00000180,0);
      in_stack_00000030._4_4_ = 1;
      fVar19 = fStack00000000000000c8;
    }
    do {
      do {
        do {
          while( true ) {
            fStack00000000000000c8 = fVar19;
            lVar10 = *(long *)(unaff_x22 + 0x20);
            unaff_w23 = iVar12 + 1;
            fVar19 = fStack00000000000000c8;
            if (lVar10 == 0) goto LAB_05bcc884;
            if (*(int *)(lVar10 + 0x18) <= unaff_w23) {
              return in_stack_00000030._4_4_ & 1;
            }
            FUN_041f12bc(&stack0x000000c0,lVar10,unaff_w23,*unaff_x29);
            in_stack_00000158 = CONCAT44(uStack00000000000000cc,fStack00000000000000c8);
            in_stack_00000168 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
            in_stack_00000160 = CONCAT44(uStack00000000000000d4,uStack00000000000000d0);
            lVar10 = *(long *)(unaff_x22 + 0x20);
            in_stack_00000150 = in_stack_000000c0;
            *(undefined8 *)(unaff_x27 + 0x54) = uStack00000000000000e4;
            *(ulong *)(unaff_x27 + 0x4c) = CONCAT44(uStack00000000000000e0,uStack00000000000000dc);
            fVar19 = fStack00000000000000c8;
            if (lVar10 == 0) goto LAB_05bcc884;
            iVar1 = *(int *)(lVar10 + 0x18);
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = (iVar12 + 2) / iVar1;
            }
            FUN_041f12bc(&stack0x00000090,lVar10,(iVar12 + 2) - iVar2 * iVar1,*unaff_x29);
            fVar19 = fStack00000000000000c8;
            in_stack_00000128 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
            in_stack_00000138 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
            in_stack_00000130 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
            in_stack_00000140 = in_stack_000000b0;
            in_stack_00000120 = in_stack_00000090;
            fStack00000000000000c8 = (float)in_stack_00000158;
            iVar12 = unaff_w23;
            if (in_stack_00000178 == '\0') break;
            if (in_stack_000000b8 == '\0') goto LAB_05bcc394;
LAB_05bcc3a8:
            in_stack_000000c0 = in_stack_00000150;
            uStack00000000000000d4 = (undefined4)*(undefined8 *)(unaff_x27 + 0x44);
            uStack00000000000000d8 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x44) >> 0x20);
            uStack00000000000000cc = (undefined4)*(undefined8 *)(unaff_x27 + 0x3c);
            uStack00000000000000d0 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x3c) >> 0x20);
            FUN_05b756a8(&stack0x00000090);
            fVar5 = fStack0000000000000098;
            fVar19 = unaff_x21[3];
            fVar24 = unaff_x21[4];
            uStack0000000000000104 = CONCAT44(uStack00000000000000a8,uStack00000000000000a4);
            fVar23 = unaff_x21[5];
            fStack00000000000000f8 = fStack0000000000000098;
            _fStack00000000000000f0 = in_stack_00000090;
            uVar4 = _fStack00000000000000f0;
            fStack00000000000000f0 = (float)in_stack_00000090;
            fVar6 = fStack00000000000000f0;
            fStack00000000000000f4 = (float)(in_stack_00000090 >> 0x20);
            fVar16 = fStack00000000000000f4;
            uStack00000000000000fc = uStack000000000000009c;
            uStack0000000000000100 = uStack00000000000000a0;
            _fStack00000000000000f0 = uVar4;
            if (*(char *)(unaff_x28 + 0xbbf) == '\0') {
              FUN_03188a78();
              *(undefined1 *)(unaff_x28 + 0xbbf) = 1;
            }
            if (*(int *)(*unaff_x25 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            fVar13 = SQRT(fVar23 * fVar23 + fVar19 * fVar19 + fVar24 * fVar24);
            if (fVar13 <= DAT_012e3cb4) {
              if (DAT_075457d6 == '\0') {
                FUN_03188a78(PTR_DAT_070c1a80);
                DAT_075457d6 = '\x01';
              }
              pfVar11 = *(float **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
              fVar22 = *pfVar11;
              fVar24 = pfVar11[1];
              fVar13 = pfVar11[2];
            }
            else {
              fVar22 = -fVar19 / fVar13;
              fVar24 = -fVar24 / fVar13;
              fVar13 = -fVar23 / fVar13;
            }
            fVar26 = *unaff_x21;
            fVar20 = unaff_x21[1];
            fVar23 = unaff_x21[2];
            fVar21 = unaff_x21[3];
            fVar25 = unaff_x21[4];
            fVar19 = unaff_x21[5];
            if (*(char *)(unaff_x20 + 0xc44) == '\0') {
              FUN_03188a78();
              *(undefined1 *)(unaff_x20 + 0xc44) = 1;
            }
            fVar25 = fVar13 * fVar19 + fVar22 * fVar21 + fVar24 * fVar25;
            fVar21 = ABS(fVar25);
            if (fVar21 <= 0.0) {
              fVar21 = 0.0;
            }
            fVar21 = fVar21 * *(float *)(unaff_x26 + 0xb94);
            fVar19 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
            if (fVar21 <= fVar19) {
              fVar21 = fVar19;
            }
            fVar19 = fStack00000000000000c8;
            if (fVar21 <= ABS(0.0 - fVar25)) {
              param_3 = fVar13 * fVar23 + fVar22 * fVar26 + fVar24 * fVar20;
              param_2 = (fVar5 * fVar13 + fVar6 * fVar22 + fVar16 * fVar24) - param_3;
              if (0.0 < param_2 / fVar25) goto code_r0x05bcc55c;
            }
          }
        } while (in_stack_000000b8 != '\0');
LAB_05bcc394:
        if (*(long *)(unaff_x22 + 0x20) == 0) {
LAB_05bcc884:
          fStack00000000000000c8 = fVar19;
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        if (*(int *)(*(long *)(unaff_x22 + 0x20) + 0x18) == 1) goto LAB_05bcc3a8;
        in_stack_00000090 = in_stack_00000150;
        uStack00000000000000a4 = (undefined4)*(undefined8 *)(unaff_x27 + 0x44);
        uStack00000000000000a8 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x44) >> 0x20);
        uStack000000000000009c = (undefined4)*(undefined8 *)(unaff_x27 + 0x3c);
        uStack00000000000000a0 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x3c) >> 0x20);
        fStack0000000000000098 = fStack00000000000000c8;
        fStack00000000000000c8 = fVar19;
        FUN_05b756a8(&stack0x000000c0);
        uVar18 = uStack00000000000000d8;
        uVar8 = uStack00000000000000d4;
        uVar7 = uStack00000000000000d0;
        uVar3 = uStack00000000000000cc;
        fVar6 = fStack00000000000000c8;
        uVar9 = in_stack_000000c0;
                    /* try { // try from 05bcc5b0 to 05ccc5b7 has its CatchHandler @ 05bcc8ec */
        fVar5 = in_stack_000000c0._4_4_;
        fStack0000000000000098 = (float)in_stack_00000128;
        in_stack_00000090 = in_stack_00000120;
        uStack00000000000000a4 = (undefined4)*(undefined8 *)(unaff_x27 + 0x14);
        uStack00000000000000a8 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x14) >> 0x20);
        uStack000000000000009c = (undefined4)*(undefined8 *)(unaff_x27 + 0xc);
        uStack00000000000000a0 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0xc) >> 0x20);
        FUN_05b756a8(&stack0x000000c0);
        uVar15 = uStack00000000000000cc;
        uVar17 = uStack00000000000000d0;
        fVar23 = (float)FUN_05bcbb48(&stack0x00000150);
                    /* try { // try from 05bcc608 to 05ccc60f has its CatchHandler @ 05bcc8c0 */
                    /* try { // try from 05bcc620 to 05ccc623 has its CatchHandler @ 05bcc8bc */
        param_2 = fVar23;
        fVar16 = fVar5;
        param_3 = fVar6;
                    /* try { // try from 05bcc660 to 05ccc667 has its CatchHandler @ 05bcc8f0 */
        fVar24 = (float)FUN_05bcc8c0(uVar9 & 0xffffffff);
                    /* try { // try from 05bcc674 to 05ccc67b has its CatchHandler @ 05bcc8e4 */
        fVar13 = *unaff_x21;
        fVar25 = unaff_x21[1];
        fVar22 = unaff_x21[2];
        fVar19 = unaff_x21[3];
        fVar21 = unaff_x21[4];
        fVar20 = unaff_x21[5];
        if (*(char *)(unaff_x20 + 0xc44) == '\0') {
                    /* try { // try from 05bcc698 to 05ccc69f has its CatchHandler @ 05bcc8e8 */
          FUN_03188a78();
          *(undefined1 *)(unaff_x20 + 0xc44) = 1;
        }
                    /* try { // try from 05bcc6bc to 05ccc6c7 has its CatchHandler @ 05bcc8f4 */
        fVar21 = param_3 * fVar20 + fVar24 * fVar19 + fVar16 * fVar21;
        fVar20 = ABS(fVar21);
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        fVar20 = fVar20 * *(float *)(unaff_x26 + 0xb94);
                    /* try { // try from 05bcc6e0 to 05ccc76b has its CatchHandler @ 05bcc8e8 */
        fVar19 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
        if (fVar20 <= fVar19) {
          fVar20 = fVar19;
        }
        fVar19 = fStack00000000000000c8;
      } while (ABS(0.0 - fVar21) < fVar20);
      param_3 = param_3 * fVar22;
      param_2 = -(param_3 + fVar13 * fVar24 + fVar16 * fVar25) - param_2;
    } while (param_2 / fVar21 <= 0.0);
    uVar14 = FUN_06993e50();
    FUN_05bcbb68(uVar14);
    uStack0000000000000180 = FUN_05bcccac(uVar9 & 0xffffffff,fVar5,fVar6,fVar23,uVar15,uVar17);
    fStack0000000000000188 = fVar6;
    fStack0000000000000184 = fVar5;
    uStack000000000000018c = FUN_069c4f80(uVar3,0);
    uStack0000000000000194 = uVar8;
    uStack0000000000000190 = uVar7;
    in_stack_00000198 = uVar18;
  } while( true );
}


