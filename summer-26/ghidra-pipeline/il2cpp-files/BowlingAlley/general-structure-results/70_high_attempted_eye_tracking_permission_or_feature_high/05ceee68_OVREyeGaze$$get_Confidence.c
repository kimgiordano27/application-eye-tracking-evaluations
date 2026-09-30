/*
FUNCTION_NAME: OVREyeGaze$$get_Confidence
ENTRY_POINT: 05ceee68
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_18;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x05ceef90) */
/* WARNING: Removing unreachable block (ram,0x05ceee70) */
/* WARNING: Removing unreachable block (ram,0x05cef0b0) */

float OVREyeGaze__get_Confidence(float param_1)

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
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  float fStack0000000000000098;
  float fStack000000000000009c;
  
  fVar14 = -1.0;
  if (param_1 < -1.0) {
    param_1 = -1.0;
  }
  if (in_w8 == 0) {
    thunk_FUN_032cd7c0();
  }
  dVar10 = acos((double)param_1);
  if (unaff_x20 == 0) {
LAB_05cef1ac:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(float *)(unaff_x20 + 0x20) = (float)dVar10 * DAT_013a0834;
    uStack0000000000000044 = *(undefined8 *)((long)unaff_x22 + 0x14);
    uVar12 = *unaff_x22;
    uStack0000000000000040 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x22 + 0xc) >> 0x20);
    uStack0000000000000038 = (undefined4)unaff_x22[1];
    uStack000000000000003c = (undefined4)((ulong)unaff_x22[1] >> 0x20);
    in_stack_00000030 = uVar12;
    fVar5 = (float)FUN_06bf30f4(&stack0x00000030,0);
    in_stack_00000030 = *unaff_x21;
    uStack0000000000000044 = *(undefined8 *)((long)unaff_x21 + 0x14);
    uVar13 = *(undefined8 *)((long)unaff_x21 + 0xc);
    uStack0000000000000038 = (undefined4)unaff_x21[1];
    uStack000000000000003c = (undefined4)uVar13;
    uStack0000000000000040 = (undefined4)((ulong)uVar13 >> 0x20);
    fVar8 = fVar14;
    fVar6 = (float)FUN_06bf30f4(&stack0x00000030,0);
    fVar15 = fVar8;
    if (*(char *)(unaff_x24 + 0x82f) == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07279c00);
      *(undefined1 *)(unaff_x24 + 0x82f) = 1;
    }
    fVar16 = (float)uVar12;
    fVar9 = (float)uVar13;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    fVar7 = SQRT((fVar14 * fVar14 + fVar5 * fVar5 + fVar16 * fVar16) *
                 (fVar8 * fVar8 + fVar6 * fVar6 + fVar9 * fVar9));
    fVar11 = 0.0;
    if (fStack000000000000009c <= fVar7) {
      fVar7 = (fVar14 * fVar8 + fVar5 * fVar6 + fVar16 * fVar9) / fVar7;
      fVar15 = -1.0;
      if (fVar7 < -1.0) {
        fVar7 = -1.0;
      }
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      dVar10 = acos((double)fVar7);
      fVar11 = (float)dVar10 * DAT_013a0834;
    }
    if (1 < *(uint *)(unaff_x20 + 0x18)) {
      *(float *)(unaff_x20 + 0x24) = fVar11;
      uStack0000000000000044 = *(undefined8 *)((long)unaff_x22 + 0x14);
      uVar12 = *unaff_x22;
      uStack0000000000000040 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x22 + 0xc) >> 0x20);
      uStack0000000000000038 = (undefined4)unaff_x22[1];
      uStack000000000000003c = (undefined4)((ulong)unaff_x22[1] >> 0x20);
      in_stack_00000030 = uVar12;
      fVar8 = (float)FUN_06bf3084(&stack0x00000030,0);
      in_stack_00000030 = *unaff_x21;
      uStack0000000000000044 = *(undefined8 *)((long)unaff_x21 + 0x14);
      uVar13 = *(undefined8 *)((long)unaff_x21 + 0xc);
      uStack0000000000000038 = (undefined4)unaff_x21[1];
      uStack000000000000003c = (undefined4)uVar13;
      uStack0000000000000040 = (undefined4)((ulong)uVar13 >> 0x20);
      fVar14 = fVar15;
      fVar5 = (float)FUN_06bf3084(&stack0x00000030,0);
      if (*(char *)(unaff_x24 + 0x82f) == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_07279c00);
        *(undefined1 *)(unaff_x24 + 0x82f) = 1;
      }
      fVar6 = (float)uVar12;
      fVar16 = (float)uVar13;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      fVar9 = SQRT((fVar15 * fVar15 + fVar8 * fVar8 + fVar6 * fVar6) *
                   (fVar14 * fVar14 + fVar5 * fVar5 + fVar16 * fVar16));
      fVar7 = 0.0;
      if (fStack000000000000009c <= fVar9) {
        fVar9 = (fVar15 * fVar14 + fVar8 * fVar5 + fVar6 * fVar16) / fVar9;
        if (fVar9 < -1.0) {
          fVar9 = -1.0;
        }
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        dVar10 = acos((double)fVar9);
        fVar7 = (float)dVar10 * DAT_013a0834;
      }
      uVar1 = (uint)*(ulong *)(unaff_x20 + 0x18);
      if (2 < uVar1) {
        fVar14 = *(float *)(unaff_x20 + 0x20);
        *(float *)(unaff_x20 + 0x28) = fVar7;
        if (1 < (int)uVar1) {
          lVar3 = (*(ulong *)(unaff_x20 + 0x18) & 0xffffffff) - 1;
          pfVar4 = (float *)(unaff_x20 + 0x24);
          do {
            fVar8 = *pfVar4;
            if (*pfVar4 <= fVar14) {
              fVar8 = fVar14;
            }
            fVar14 = fVar8;
            lVar3 = lVar3 + -1;
            pfVar4 = pfVar4 + 1;
          } while (lVar3 != 0);
        }
        if (unaff_x19 == 0) goto LAB_05cef1ac;
        iVar2 = (int)*(ulong *)(unaff_x19 + 0x18);
        if (iVar2 != 0) {
          *(float *)(unaff_x19 + 0x20) = fVar14;
          fVar8 = SQRT(fStack0000000000000098 * fStack0000000000000098 +
                       fStack000000000000000c * fStack000000000000000c +
                       fStack0000000000000008 * fStack0000000000000008);
          if (1 < iVar2) {
            lVar3 = (*(ulong *)(unaff_x19 + 0x18) & 0xffffffff) - 1;
            pfVar4 = (float *)(unaff_x19 + 0x24);
            do {
              fVar15 = *pfVar4;
              if (*pfVar4 <= fVar14) {
                fVar15 = fVar14;
              }
              fVar14 = fVar15;
              lVar3 = lVar3 + -1;
              pfVar4 = pfVar4 + 1;
            } while (lVar3 != 0);
          }
          if (fVar8 <= fVar14 * DAT_013a06c8) {
            fVar8 = fVar14 * DAT_013a06c8;
          }
          return fVar8;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


