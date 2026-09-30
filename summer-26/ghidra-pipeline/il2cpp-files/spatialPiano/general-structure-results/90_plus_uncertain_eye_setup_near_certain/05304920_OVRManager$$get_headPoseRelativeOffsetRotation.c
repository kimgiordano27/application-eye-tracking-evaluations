/*
FUNCTION_NAME: OVRManager$$get_headPoseRelativeOffsetRotation
ENTRY_POINT: 05304920
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_headPoseRelativeOffsetRotation
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  long unaff_x19;
  undefined4 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s8;
  float fVar16;
  float unaff_s9;
  float unaff_s10;
  float fVar17;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar18;
  undefined4 uStack0000000000000004;
  float fStack0000000000000010;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float fStack000000000000003c;
  float in_stack_00000040;
  float in_stack_00000050;
  undefined4 in_stack_00000068;
  float in_stack_00000070;
  float in_stack_00000080;
  
  fVar17 = DAT_011b06e4;
  if (0 < (int)param_1) {
    lVar4 = 0;
    uVar5 = 0;
    uVar12 = NEON_fmov(0x3f800000,4);
    fVar6 = SQRT(unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8);
    fStack000000000000003c = 1.0 / param_4;
    in_stack_00000080 = in_stack_00000080 + -0.5;
    fVar18 = 0.0;
    fVar8 = fStack0000000000000030 - unaff_s14;
    fVar11 = fStack000000000000002c - unaff_s15;
    fVar14 = fStack0000000000000028 - in_stack_00000020._4_4_;
    do {
      fVar13 = (float)unaff_x20[2];
      fStack0000000000000010 = (float)(int)uVar5 / ((float)(int)param_1 + -1.0);
      fVar10 = (float)unaff_x20[1];
      uStack0000000000000004 = in_stack_00000068;
      fVar7 = (float)FUN_05304df8(*unaff_x20,fVar10,fVar13,
                                  in_stack_00000070 + in_stack_00000080 * fVar6 * unaff_s12,
                                  in_stack_00000038 + in_stack_00000080 * fVar6 * unaff_s13,
                                  fStack0000000000000034 + in_stack_00000080 * fVar6 * unaff_s11);
      lVar2 = *(long *)(unaff_x19 + 0x68);
      if (lVar2 == 0) goto LAB_05304c5c;
      if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_05304c58;
      *(ulong *)(lVar2 + lVar4 + 0x20) =
           CONCAT44(((float)((ulong)uVar12 >> 0x20) / in_stack_00000040) * fVar10,
                    ((float)uVar12 / in_stack_00000050) * fVar7);
      *(float *)(lVar2 + lVar4 + 0x28) = fStack000000000000003c * fVar13;
      lVar2 = *(long *)(unaff_x19 + 0x68);
      if (lVar2 == 0) goto LAB_05304c5c;
      if (DAT_06bb42bf == '\0') {
        FUN_02f08768();
        DAT_06bb42bf = '\x01';
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      fVar14 = fVar13 - fVar14;
      fVar8 = fVar7 - fVar8;
      fVar11 = fVar10 - fVar11;
      fVar15 = fVar14 * fVar14 + fVar8 * fVar8 + fVar11 * fVar11;
      fVar16 = SQRT(fVar15);
      if (fVar16 <= fVar17) {
        if (DAT_06bb42c1 == '\0') {
          FUN_02f08768();
          DAT_06bb42c1 = '\x01';
        }
        pfVar3 = *(float **)(*unaff_x22 + 0xb8);
        fVar8 = *pfVar3;
        fVar11 = pfVar3[1];
        fVar14 = pfVar3[2];
      }
      else {
        fVar8 = fVar8 / fVar16;
        fVar11 = fVar11 / fVar16;
        fVar14 = fVar14 / fVar16;
      }
      uVar9 = FUN_060df954(fVar8,0);
      if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_05304c58;
      lVar2 = lVar2 + lVar4;
      *(undefined4 *)(lVar2 + 0x2c) = uVar9;
      *(float *)(lVar2 + 0x30) = fVar11;
      *(float *)(lVar2 + 0x34) = fVar14;
      *(float *)(lVar2 + 0x38) = fVar15;
      if (uVar5 != 0) {
        if (*(char *)(unaff_x23 + 0x2c7) == '\0') {
          FUN_02f08768();
          *(undefined1 *)(unaff_x23 + 0x2c7) = 1;
        }
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        fVar18 = fVar18 + fVar16;
      }
      param_1 = (long)*(int *)(unaff_x19 + 0x50);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x20;
      fVar8 = fVar7;
      fVar11 = fVar10;
      fVar14 = fVar13;
    } while ((long)uVar5 < param_1);
    if (1 < *(int *)(unaff_x19 + 0x50)) {
      lVar2 = *(long *)(unaff_x19 + 0x68);
      lVar4 = 0x5c;
      uVar5 = 1;
      do {
        if (lVar2 == 0) {
LAB_05304c5c:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (((ulong)*(uint *)(lVar2 + 0x18) <= uVar5 - 1) || (*(uint *)(lVar2 + 0x18) <= uVar5)) {
LAB_05304c58:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        lVar2 = lVar2 + lVar4;
        fVar8 = *(float *)(lVar2 + -0x38);
        fVar11 = *(float *)(lVar2 + -0x34);
        fVar17 = *(float *)(lVar2 + -0x3c);
        fVar14 = *(float *)(lVar2 + -0x1c);
        fVar6 = *(float *)(lVar2 + -0x18);
        fVar7 = *(float *)(lVar2 + -0x14);
        if (*(char *)(unaff_x23 + 0x2c7) == '\0') {
          FUN_02f08768();
          *(undefined1 *)(unaff_x23 + 0x2c7) = 1;
        }
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar2 = *(long *)(unaff_x19 + 0x68);
        if (lVar2 == 0) goto LAB_05304c5c;
        if (((ulong)*(uint *)(lVar2 + 0x18) <= uVar5 - 1) || (*(uint *)(lVar2 + 0x18) <= uVar5))
        goto LAB_05304c58;
        fVar17 = fVar17 - fVar14;
        fVar8 = fVar8 - fVar6;
        pfVar3 = (float *)(lVar2 + lVar4);
        fVar11 = fVar11 - fVar7;
        iVar1 = *(int *)(unaff_x19 + 0x50);
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x20;
        *pfVar3 = SQRT(fVar17 * fVar17 + fVar8 * fVar8 + fVar11 * fVar11) / fVar18 + pfVar3[-8];
      } while ((long)uVar5 < (long)iVar1);
    }
  }
  return;
}


