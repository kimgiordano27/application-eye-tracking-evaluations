/*
FUNCTION_NAME: OVREyeGaze$$set_Confidence
ENTRY_POINT: 05ceee70
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

float OVREyeGaze__set_Confidence(float param_1,undefined1 param_2 [16],float param_3)

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
  double dVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
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
  
  if (param_1 < param_3) {
    param_1 = param_3;
  }
  if (in_w8 == 0) {
    thunk_FUN_032cd7c0();
  }
  dVar9 = acos((double)param_1);
  if (unaff_x20 == 0) {
LAB_05cef1ac:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(float *)(unaff_x20 + 0x20) = (float)dVar9 * DAT_013a0834;
    uStack0000000000000044 = *(undefined8 *)((long)unaff_x22 + 0x14);
    uVar11 = *unaff_x22;
    uStack0000000000000040 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x22 + 0xc) >> 0x20);
    uStack0000000000000038 = (undefined4)unaff_x22[1];
    uStack000000000000003c = (undefined4)((ulong)unaff_x22[1] >> 0x20);
    in_stack_00000030 = uVar11;
    fVar5 = (float)FUN_06bf30f4(&stack0x00000030,0);
    in_stack_00000030 = *unaff_x21;
    uStack0000000000000044 = *(undefined8 *)((long)unaff_x21 + 0x14);
    uVar12 = *(undefined8 *)((long)unaff_x21 + 0xc);
    uStack0000000000000038 = (undefined4)unaff_x21[1];
    uStack000000000000003c = (undefined4)uVar12;
    uStack0000000000000040 = (undefined4)((ulong)uVar12 >> 0x20);
    fVar8 = param_3;
    fVar6 = (float)FUN_06bf30f4(&stack0x00000030,0);
    fVar13 = fVar8;
    if (*(char *)(unaff_x24 + 0x82f) == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07279c00);
      *(undefined1 *)(unaff_x24 + 0x82f) = 1;
    }
    fVar14 = (float)uVar11;
    fVar15 = (float)uVar12;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    fVar7 = SQRT((param_3 * param_3 + fVar5 * fVar5 + fVar14 * fVar14) *
                 (fVar8 * fVar8 + fVar6 * fVar6 + fVar15 * fVar15));
    fVar10 = 0.0;
    if (fStack000000000000009c <= fVar7) {
      fVar7 = (param_3 * fVar8 + fVar5 * fVar6 + fVar14 * fVar15) / fVar7;
      fVar13 = -1.0;
      if (fVar7 < -1.0) {
        fVar7 = -1.0;
      }
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      dVar9 = acos((double)fVar7);
      fVar10 = (float)dVar9 * DAT_013a0834;
    }
    if (1 < *(uint *)(unaff_x20 + 0x18)) {
      *(float *)(unaff_x20 + 0x24) = fVar10;
      uStack0000000000000044 = *(undefined8 *)((long)unaff_x22 + 0x14);
      uVar11 = *unaff_x22;
      uStack0000000000000040 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x22 + 0xc) >> 0x20);
      uStack0000000000000038 = (undefined4)unaff_x22[1];
      uStack000000000000003c = (undefined4)((ulong)unaff_x22[1] >> 0x20);
      in_stack_00000030 = uVar11;
      fVar5 = (float)FUN_06bf3084(&stack0x00000030,0);
      in_stack_00000030 = *unaff_x21;
      uStack0000000000000044 = *(undefined8 *)((long)unaff_x21 + 0x14);
      uVar12 = *(undefined8 *)((long)unaff_x21 + 0xc);
      uStack0000000000000038 = (undefined4)unaff_x21[1];
      uStack000000000000003c = (undefined4)uVar12;
      uStack0000000000000040 = (undefined4)((ulong)uVar12 >> 0x20);
      fVar8 = fVar13;
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
      fVar7 = SQRT((fVar13 * fVar13 + fVar5 * fVar5 + fVar14 * fVar14) *
                   (fVar8 * fVar8 + fVar6 * fVar6 + fVar15 * fVar15));
      fVar10 = 0.0;
      if (fStack000000000000009c <= fVar7) {
        fVar7 = (fVar13 * fVar8 + fVar5 * fVar6 + fVar14 * fVar15) / fVar7;
        if (fVar7 < -1.0) {
          fVar7 = -1.0;
        }
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        dVar9 = acos((double)fVar7);
        fVar10 = (float)dVar9 * DAT_013a0834;
      }
      uVar1 = (uint)*(ulong *)(unaff_x20 + 0x18);
      if (2 < uVar1) {
        fVar8 = *(float *)(unaff_x20 + 0x20);
        *(float *)(unaff_x20 + 0x28) = fVar10;
        if (1 < (int)uVar1) {
          lVar3 = (*(ulong *)(unaff_x20 + 0x18) & 0xffffffff) - 1;
          pfVar4 = (float *)(unaff_x20 + 0x24);
          do {
            fVar13 = *pfVar4;
            if (*pfVar4 <= fVar8) {
              fVar13 = fVar8;
            }
            fVar8 = fVar13;
            lVar3 = lVar3 + -1;
            pfVar4 = pfVar4 + 1;
          } while (lVar3 != 0);
        }
        if (unaff_x19 == 0) goto LAB_05cef1ac;
        iVar2 = (int)*(ulong *)(unaff_x19 + 0x18);
        if (iVar2 != 0) {
          *(float *)(unaff_x19 + 0x20) = fVar8;
          fVar13 = SQRT(fStack0000000000000098 * fStack0000000000000098 +
                        fStack000000000000000c * fStack000000000000000c +
                        fStack0000000000000008 * fStack0000000000000008);
          if (1 < iVar2) {
            lVar3 = (*(ulong *)(unaff_x19 + 0x18) & 0xffffffff) - 1;
            pfVar4 = (float *)(unaff_x19 + 0x24);
            do {
              fVar5 = *pfVar4;
              if (*pfVar4 <= fVar8) {
                fVar5 = fVar8;
              }
              fVar8 = fVar5;
              lVar3 = lVar3 + -1;
              pfVar4 = pfVar4 + 1;
            } while (lVar3 != 0);
          }
          if (fVar13 <= fVar8 * DAT_013a06c8) {
            fVar13 = fVar8 * DAT_013a06c8;
          }
          return fVar13;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


