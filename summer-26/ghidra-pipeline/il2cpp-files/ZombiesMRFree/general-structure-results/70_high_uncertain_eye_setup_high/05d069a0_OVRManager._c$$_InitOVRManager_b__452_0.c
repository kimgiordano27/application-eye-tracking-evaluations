/*
FUNCTION_NAME: OVRManager.<>c$$<InitOVRManager>b__452_0
ENTRY_POINT: 05d069a0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager_<>c__<InitOVRManager>b__452_0(void)

{
  float *pfVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined4 *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long lVar3;
  long unaff_x24;
  ulong unaff_x25;
  ulong uVar4;
  long unaff_x26;
  long unaff_x27;
  undefined1 unaff_w28;
  long unaff_x29;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_s3;
  float unaff_s8;
  float fVar8;
  float unaff_s9;
  float fVar9;
  float fVar10;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  float in_stack_00000040;
  
  do {
    *(undefined1 *)(unaff_x29 + 0x669) = unaff_w28;
    do {
      pfVar1 = *(float **)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
      fVar5 = *pfVar1;
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar10 = unaff_s14;
      fVar9 = unaff_s15;
      fVar8 = unaff_s8;
      while( true ) {
        fVar5 = (float)FUN_068ed124(fVar5,0);
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_05d06b3c;
        pfVar1 = (float *)(unaff_x23 + unaff_x26);
        pfVar1[-3] = fVar5;
        pfVar1[-2] = fVar6;
        pfVar1[-1] = fVar7;
        *pfVar1 = in_s3;
        if (unaff_x26 != 0x38) {
          if (*(char *)(unaff_x24 + 0x6c8) == '\0') {
            FUN_02fe925c();
            *(undefined1 *)(unaff_x24 + 0x6c8) = unaff_w28;
          }
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          in_stack_00000040 = in_stack_00000040 + unaff_s9;
        }
        unaff_x25 = unaff_x25 + 1;
        unaff_x26 = unaff_x26 + 0x20;
        if ((long)*(int *)(unaff_x19 + 0x50) <= (long)unaff_x25) {
          if (*(int *)(unaff_x19 + 0x50) < 2) {
            return;
          }
          lVar2 = *unaff_x20;
          lVar3 = 0x5c;
          uVar4 = 1;
          goto LAB_05d06a50;
        }
        unaff_s15 = (float)unaff_x21[1];
        unaff_s8 = (float)unaff_x21[2];
        unaff_s14 = (float)FUN_05d06cdc(*unaff_x21,unaff_s15,unaff_s8,uStack000000000000003c);
        lVar3 = *unaff_x20;
        if (lVar3 == 0) goto LAB_05d06b40;
        if (*(uint *)(lVar3 + 0x18) <= unaff_x25) goto LAB_05d06b3c;
        lVar3 = lVar3 + unaff_x26;
        *(float *)(lVar3 + -0x10) = fStack0000000000000030 * unaff_s8;
        *(float *)(lVar3 + -0x18) = fStack0000000000000038 * unaff_s14;
        *(float *)(lVar3 + -0x14) = fStack0000000000000034 * unaff_s15;
        unaff_x23 = *unaff_x20;
        if (unaff_x23 == 0) goto LAB_05d06b40;
        if (*(char *)(unaff_x27 + 0x668) == '\0') {
          FUN_02fe925c();
          *(undefined1 *)(unaff_x27 + 0x668) = unaff_w28;
        }
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        fVar10 = unaff_s14 - fVar10;
        fVar9 = unaff_s15 - fVar9;
        fVar8 = unaff_s8 - fVar8;
        unaff_s9 = SQRT(fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9);
        in_s3 = in_stack_00000028._4_4_;
        if (unaff_s9 <= in_stack_00000028._4_4_) break;
        fVar5 = fVar10 / unaff_s9;
        fVar6 = fVar9 / unaff_s9;
        fVar7 = fVar8 / unaff_s9;
        fVar10 = unaff_s14;
        fVar9 = unaff_s15;
        fVar8 = unaff_s8;
      }
    } while (*(char *)(unaff_x29 + 0x669) != '\0');
    FUN_02fe925c(PTR_DAT_06f6d5d8);
  } while( true );
LAB_05d06a50:
  if (lVar2 == 0) {
LAB_05d06b40:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  if (((ulong)*(uint *)(lVar2 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar2 + 0x18) <= uVar4)) {
LAB_05d06b3c:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94f0();
  }
  lVar2 = lVar2 + lVar3;
  fVar9 = *(float *)(lVar2 + -0x38);
  fVar8 = *(float *)(lVar2 + -0x34);
  fVar10 = *(float *)(lVar2 + -0x3c);
  fVar7 = *(float *)(lVar2 + -0x1c);
  fVar6 = *(float *)(lVar2 + -0x18);
  fVar5 = *(float *)(lVar2 + -0x14);
  if (*(char *)(unaff_x24 + 0x6c8) == '\0') {
    FUN_02fe925c();
    *(undefined1 *)(unaff_x24 + 0x6c8) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar2 = *unaff_x20;
  if (lVar2 == 0) goto LAB_05d06b40;
  if (((ulong)*(uint *)(lVar2 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar2 + 0x18) <= uVar4))
  goto LAB_05d06b3c;
  fVar10 = fVar10 - fVar7;
  fVar9 = fVar9 - fVar6;
  fVar8 = fVar8 - fVar5;
  *(float *)(lVar2 + lVar3) =
       SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8) / in_stack_00000040 +
       ((float *)(lVar2 + lVar3))[-8];
  uVar4 = uVar4 + 1;
  lVar3 = lVar3 + 0x20;
  if ((long)*(int *)(unaff_x19 + 0x50) <= (long)uVar4) {
    return;
  }
  goto LAB_05d06a50;
}


