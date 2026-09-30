/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$.ctor
ENTRY_POINT: 05d067b0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_InstantiateMrcCameraDelegate___ctor
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined4 *unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s8;
  float unaff_s9;
  float fVar12;
  float fVar13;
  float unaff_s10;
  float unaff_s11;
  float fVar14;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float in_stack_00000040;
  
  FUN_06905eb0(param_4,0);
  lVar1 = FUN_068f5d7c();
  if (lVar1 != 0) {
    FUN_06905eb0(lVar1,0);
    fVar14 = DAT_01369fe0;
    if (0 < *(int *)(unaff_x19 + 0x50)) {
      fVar12 = in_stack_00000040 - unaff_s15;
      in_stack_00000040 = 0.0;
      fStack0000000000000030 = fStack0000000000000030 + -0.5;
      fVar6 = SQRT(unaff_s8 * unaff_s8 + unaff_s10 * unaff_s10 + unaff_s13 * unaff_s13);
      uVar4 = 0;
      lVar1 = 0x38;
      fVar8 = fStack0000000000000038 - unaff_s11;
      fVar10 = fStack0000000000000034 - unaff_s14;
      do {
        fVar7 = (float)unaff_x21[1];
        fVar9 = (float)unaff_x21[2];
        fVar5 = (float)FUN_05d06cdc(*unaff_x21,fVar7,fVar9,
                                    unaff_s9 +
                                    fStack0000000000000030 * fVar6 * fStack000000000000003c,
                                    fStack0000000000000028 +
                                    fStack0000000000000030 * fVar6 * fStack0000000000000020,
                                    fStack0000000000000024 +
                                    fStack0000000000000030 * fVar6 * in_stack_00000018._4_4_);
        lVar2 = *unaff_x20;
        if (lVar2 == 0) goto LAB_05d06b40;
        if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_05d06b3c;
        lVar2 = lVar2 + lVar1;
        *(float *)(lVar2 + -0x10) = (1.0 / param_3) * fVar9;
        *(float *)(lVar2 + -0x18) = (1.0 / fStack000000000000002c) * fVar5;
        *(float *)(lVar2 + -0x14) = (1.0 / param_2) * fVar7;
        lVar2 = *unaff_x20;
        if (lVar2 == 0) goto LAB_05d06b40;
        if (DAT_0738e668 == '\0') {
          FUN_02fe925c();
          DAT_0738e668 = '\x01';
        }
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        fVar12 = fVar5 - fVar12;
        fVar8 = fVar7 - fVar8;
        fVar10 = fVar9 - fVar10;
        fVar13 = SQRT(fVar10 * fVar10 + fVar12 * fVar12 + fVar8 * fVar8);
        fVar11 = fVar14;
        if (fVar13 <= fVar14) {
          if (DAT_0738e669 == '\0') {
            FUN_02fe925c(PTR_DAT_06f6d5d8);
            DAT_0738e669 = '\x01';
          }
          pfVar3 = *(float **)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
          fVar12 = *pfVar3;
          fVar8 = pfVar3[1];
          fVar10 = pfVar3[2];
        }
        else {
          fVar12 = fVar12 / fVar13;
          fVar8 = fVar8 / fVar13;
          fVar10 = fVar10 / fVar13;
        }
        fVar12 = (float)FUN_068ed124(fVar12,0);
        if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_05d06b3c;
        pfVar3 = (float *)(lVar2 + lVar1);
        pfVar3[-3] = fVar12;
        pfVar3[-2] = fVar8;
        pfVar3[-1] = fVar10;
        *pfVar3 = fVar11;
        if (lVar1 != 0x38) {
          if (*(char *)(unaff_x24 + 0x6c8) == '\0') {
            FUN_02fe925c();
            *(undefined1 *)(unaff_x24 + 0x6c8) = 1;
          }
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          in_stack_00000040 = in_stack_00000040 + fVar13;
        }
        uVar4 = uVar4 + 1;
        lVar1 = lVar1 + 0x20;
        fVar12 = fVar5;
        fVar8 = fVar7;
        fVar10 = fVar9;
      } while ((long)uVar4 < (long)*(int *)(unaff_x19 + 0x50));
      if (1 < *(int *)(unaff_x19 + 0x50)) {
        lVar2 = *unaff_x20;
        lVar1 = 0x5c;
        uVar4 = 1;
        do {
          if (lVar2 == 0) goto LAB_05d06b40;
          if (((ulong)*(uint *)(lVar2 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar2 + 0x18) <= uVar4)) {
LAB_05d06b3c:
                    /* WARNING: Subroutine does not return */
            FUN_02fe94f0();
          }
          lVar2 = lVar2 + lVar1;
          fVar12 = *(float *)(lVar2 + -0x38);
          fVar8 = *(float *)(lVar2 + -0x34);
          fVar14 = *(float *)(lVar2 + -0x3c);
          fVar5 = *(float *)(lVar2 + -0x1c);
          fVar6 = *(float *)(lVar2 + -0x18);
          fVar10 = *(float *)(lVar2 + -0x14);
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
          fVar14 = fVar14 - fVar5;
          fVar12 = fVar12 - fVar6;
          fVar8 = fVar8 - fVar10;
          *(float *)(lVar2 + lVar1) =
               SQRT(fVar14 * fVar14 + fVar12 * fVar12 + fVar8 * fVar8) / in_stack_00000040 +
               ((float *)(lVar2 + lVar1))[-8];
          uVar4 = uVar4 + 1;
          lVar1 = lVar1 + 0x20;
        } while ((long)uVar4 < (long)*(int *)(unaff_x19 + 0x50));
      }
    }
    return;
  }
LAB_05d06b40:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


