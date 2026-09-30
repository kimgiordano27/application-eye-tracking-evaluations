/*
FUNCTION_NAME: OVREyeGaze$$Start
ENTRY_POINT: 05ceeefc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_14;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x05ceef90) */
/* WARNING: Removing unreachable block (ram,0x05cef0b0) */

float OVREyeGaze__Start(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  int in_w8;
  uint uVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar14;
  float unaff_s11;
  float unaff_s12;
  float fVar15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  float fStack0000000000000098;
  float fStack000000000000009c;
  
  fVar13 = param_3;
  if (in_w8 == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07279c00);
    *(undefined1 *)(unaff_x24 + 0x82f) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  fVar5 = SQRT((unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10) *
               (param_3 * param_3 + unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12));
  fVar9 = 0.0;
  if (fStack000000000000009c <= fVar5) {
    fVar5 = (unaff_s8 * param_3 + unaff_s9 * unaff_s11 + unaff_s10 * unaff_s12) / fVar5;
    fVar13 = -1.0;
    if (fVar5 < -1.0) {
      fVar5 = -1.0;
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    dVar8 = acos((double)fVar5);
    fVar9 = (float)dVar8 * DAT_013a0834;
  }
  if (1 < *(uint *)(unaff_x20 + 0x18)) {
    *(float *)(unaff_x20 + 0x24) = fVar9;
    uStack0000000000000044 = *(undefined8 *)((long)unaff_x22 + 0x14);
    uVar11 = *unaff_x22;
    uStack0000000000000040 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x22 + 0xc) >> 0x20);
    uStack0000000000000038 = (undefined4)unaff_x22[1];
    uStack000000000000003c = (undefined4)((ulong)unaff_x22[1] >> 0x20);
    in_stack_00000030 = uVar11;
    fVar9 = (float)FUN_06bf3084(&stack0x00000030,0);
    in_stack_00000030 = *unaff_x21;
    uStack0000000000000044 = *(undefined8 *)((long)unaff_x21 + 0x14);
    uVar12 = *(undefined8 *)((long)unaff_x21 + 0xc);
    uStack0000000000000038 = (undefined4)unaff_x21[1];
    uStack000000000000003c = (undefined4)uVar12;
    uStack0000000000000040 = (undefined4)((ulong)uVar12 >> 0x20);
    fVar5 = fVar13;
    fVar6 = (float)FUN_06bf3084(&stack0x00000030,0);
    if (*(char *)(unaff_x24 + 0x82f) == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07279c00);
      *(undefined1 *)(unaff_x24 + 0x82f) = 1;
    }
    fVar14 = (float)uVar11;
    fVar15 = (float)uVar12;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    fVar7 = SQRT((fVar13 * fVar13 + fVar9 * fVar9 + fVar14 * fVar14) *
                 (fVar5 * fVar5 + fVar6 * fVar6 + fVar15 * fVar15));
    fVar10 = 0.0;
    if (fStack000000000000009c <= fVar7) {
      fVar7 = (fVar13 * fVar5 + fVar9 * fVar6 + fVar14 * fVar15) / fVar7;
      if (fVar7 < -1.0) {
        fVar7 = -1.0;
      }
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      dVar8 = acos((double)fVar7);
      fVar10 = (float)dVar8 * DAT_013a0834;
    }
    uVar1 = (uint)*(ulong *)(unaff_x20 + 0x18);
    if (2 < uVar1) {
      fVar13 = *(float *)(unaff_x20 + 0x20);
      *(float *)(unaff_x20 + 0x28) = fVar10;
      if (1 < (int)uVar1) {
        lVar3 = (*(ulong *)(unaff_x20 + 0x18) & 0xffffffff) - 1;
        pfVar4 = (float *)(unaff_x20 + 0x24);
        do {
          fVar5 = *pfVar4;
          if (*pfVar4 <= fVar13) {
            fVar5 = fVar13;
          }
          fVar13 = fVar5;
          lVar3 = lVar3 + -1;
          pfVar4 = pfVar4 + 1;
        } while (lVar3 != 0);
      }
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      iVar2 = (int)*(ulong *)(unaff_x19 + 0x18);
      if (iVar2 != 0) {
        *(float *)(unaff_x19 + 0x20) = fVar13;
        fVar5 = SQRT(fStack0000000000000098 * fStack0000000000000098 +
                     fStack000000000000000c * fStack000000000000000c +
                     fStack0000000000000008 * fStack0000000000000008);
        if (1 < iVar2) {
          lVar3 = (*(ulong *)(unaff_x19 + 0x18) & 0xffffffff) - 1;
          pfVar4 = (float *)(unaff_x19 + 0x24);
          do {
            fVar9 = *pfVar4;
            if (*pfVar4 <= fVar13) {
              fVar9 = fVar13;
            }
            fVar13 = fVar9;
            lVar3 = lVar3 + -1;
            pfVar4 = pfVar4 + 1;
          } while (lVar3 != 0);
        }
        if (fVar5 <= fVar13 * DAT_013a06c8) {
          fVar5 = fVar13 * DAT_013a06c8;
        }
        return fVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


