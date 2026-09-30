/*
FUNCTION_NAME: OVREyeGaze$$get_EyeTrackingEnabled
ENTRY_POINT: 05ceee18
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_19;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x05ceef90) */
/* WARNING: Removing unreachable block (ram,0x05ceee70) */
/* WARNING: Removing unreachable block (ram,0x05cef0b0) */

float OVREyeGaze__get_EyeTrackingEnabled(float param_1,undefined1 param_2 [16],float param_3)

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
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar14;
  float unaff_s11;
  float unaff_s12;
  float fVar15;
  float unaff_s13;
  float unaff_s14;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  float in_stack_00000098;
  float fStack000000000000009c;
  
  if (in_w8 == 0) {
    thunk_FUN_032cd7c0();
  }
  fVar5 = SQRT(unaff_s14 * (unaff_s13 * unaff_s13 + param_1));
  fStack000000000000009c = DAT_0139fe30;
  fVar10 = 0.0;
  if (DAT_0139fe30 <= fVar5) {
    fVar5 = (unaff_s8 * unaff_s13 + unaff_s9 * unaff_s11 + unaff_s10 * unaff_s12) / fVar5;
    param_3 = -1.0;
    if (fVar5 < -1.0) {
      fVar5 = -1.0;
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    dVar9 = acos((double)fVar5);
    fVar10 = (float)dVar9 * DAT_013a0834;
  }
  if (unaff_x20 == 0) {
LAB_05cef1ac:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(float *)(unaff_x20 + 0x20) = fVar10;
    uStack0000000000000044 = *(undefined8 *)((long)unaff_x22 + 0x14);
    uVar12 = *unaff_x22;
    uStack0000000000000040 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x22 + 0xc) >> 0x20);
    uStack0000000000000038 = (undefined4)unaff_x22[1];
    uStack000000000000003c = (undefined4)((ulong)unaff_x22[1] >> 0x20);
    in_stack_00000030 = uVar12;
    fVar6 = (float)FUN_06bf30f4(&stack0x00000030,0);
    in_stack_00000030 = *unaff_x21;
    uStack0000000000000044 = *(undefined8 *)((long)unaff_x21 + 0x14);
    uVar13 = *(undefined8 *)((long)unaff_x21 + 0xc);
    uStack0000000000000038 = (undefined4)unaff_x21[1];
    uStack000000000000003c = (undefined4)uVar13;
    uStack0000000000000040 = (undefined4)((ulong)uVar13 >> 0x20);
    fVar5 = param_3;
    fVar7 = (float)FUN_06bf30f4(&stack0x00000030,0);
    fVar10 = fVar5;
    if (*(char *)(unaff_x24 + 0x82f) == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07279c00);
      *(undefined1 *)(unaff_x24 + 0x82f) = 1;
    }
    fVar14 = (float)uVar12;
    fVar15 = (float)uVar13;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    fVar8 = SQRT((param_3 * param_3 + fVar6 * fVar6 + fVar14 * fVar14) *
                 (fVar5 * fVar5 + fVar7 * fVar7 + fVar15 * fVar15));
    fVar11 = 0.0;
    if (fStack000000000000009c <= fVar8) {
      fVar8 = (param_3 * fVar5 + fVar6 * fVar7 + fVar14 * fVar15) / fVar8;
      fVar10 = -1.0;
      if (fVar8 < -1.0) {
        fVar8 = -1.0;
      }
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      dVar9 = acos((double)fVar8);
      fVar11 = (float)dVar9 * DAT_013a0834;
    }
    if (1 < *(uint *)(unaff_x20 + 0x18)) {
      *(float *)(unaff_x20 + 0x24) = fVar11;
      uStack0000000000000044 = *(undefined8 *)((long)unaff_x22 + 0x14);
      uVar12 = *unaff_x22;
      uStack0000000000000040 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x22 + 0xc) >> 0x20);
      uStack0000000000000038 = (undefined4)unaff_x22[1];
      uStack000000000000003c = (undefined4)((ulong)unaff_x22[1] >> 0x20);
      in_stack_00000030 = uVar12;
      fVar6 = (float)FUN_06bf3084(&stack0x00000030,0);
      in_stack_00000030 = *unaff_x21;
      uStack0000000000000044 = *(undefined8 *)((long)unaff_x21 + 0x14);
      uVar13 = *(undefined8 *)((long)unaff_x21 + 0xc);
      uStack0000000000000038 = (undefined4)unaff_x21[1];
      uStack000000000000003c = (undefined4)uVar13;
      uStack0000000000000040 = (undefined4)((ulong)uVar13 >> 0x20);
      fVar5 = fVar10;
      fVar7 = (float)FUN_06bf3084(&stack0x00000030,0);
      if (*(char *)(unaff_x24 + 0x82f) == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_07279c00);
        *(undefined1 *)(unaff_x24 + 0x82f) = 1;
      }
      fVar14 = (float)uVar12;
      fVar15 = (float)uVar13;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      fVar8 = SQRT((fVar10 * fVar10 + fVar6 * fVar6 + fVar14 * fVar14) *
                   (fVar5 * fVar5 + fVar7 * fVar7 + fVar15 * fVar15));
      fVar11 = 0.0;
      if (fStack000000000000009c <= fVar8) {
        fVar8 = (fVar10 * fVar5 + fVar6 * fVar7 + fVar14 * fVar15) / fVar8;
        if (fVar8 < -1.0) {
          fVar8 = -1.0;
        }
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        dVar9 = acos((double)fVar8);
        fVar11 = (float)dVar9 * DAT_013a0834;
      }
      uVar1 = (uint)*(ulong *)(unaff_x20 + 0x18);
      if (2 < uVar1) {
        fVar5 = *(float *)(unaff_x20 + 0x20);
        *(float *)(unaff_x20 + 0x28) = fVar11;
        if (1 < (int)uVar1) {
          lVar3 = (*(ulong *)(unaff_x20 + 0x18) & 0xffffffff) - 1;
          pfVar4 = (float *)(unaff_x20 + 0x24);
          do {
            fVar10 = *pfVar4;
            if (*pfVar4 <= fVar5) {
              fVar10 = fVar5;
            }
            fVar5 = fVar10;
            lVar3 = lVar3 + -1;
            pfVar4 = pfVar4 + 1;
          } while (lVar3 != 0);
        }
        if (unaff_x19 == 0) goto LAB_05cef1ac;
        iVar2 = (int)*(ulong *)(unaff_x19 + 0x18);
        if (iVar2 != 0) {
          *(float *)(unaff_x19 + 0x20) = fVar5;
          fVar10 = SQRT(in_stack_00000098 * in_stack_00000098 +
                        fStack000000000000000c * fStack000000000000000c +
                        fStack0000000000000008 * fStack0000000000000008);
          if (1 < iVar2) {
            lVar3 = (*(ulong *)(unaff_x19 + 0x18) & 0xffffffff) - 1;
            pfVar4 = (float *)(unaff_x19 + 0x24);
            do {
              fVar6 = *pfVar4;
              if (*pfVar4 <= fVar5) {
                fVar6 = fVar5;
              }
              fVar5 = fVar6;
              lVar3 = lVar3 + -1;
              pfVar4 = pfVar4 + 1;
            } while (lVar3 != 0);
          }
          if (fVar10 <= fVar5 * DAT_013a06c8) {
            fVar10 = fVar5 * DAT_013a06c8;
          }
          return fVar10;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


