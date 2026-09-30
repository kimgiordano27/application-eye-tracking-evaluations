/*
FUNCTION_NAME: OVREyeGaze$$OnDestroy
ENTRY_POINT: 05f8033c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x05f80734) */

void OVREyeGaze__OnDestroy(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 uVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  char cStack0000000000000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if (*(int *)(param_1 + 0x84) == 3) {
    lVar2 = *(long *)(unaff_x19 + 0x38);
    if (lVar2 != 0) {
LAB_05f80628:
      FUN_06e59c44(lVar2,0,0);
      return;
    }
  }
  else {
    in_stack_00000028 = *(undefined8 *)(param_1 + 0x1b4);
    _cStack0000000000000020 = *(undefined8 *)(param_1 + 0x1ac);
    in_stack_00000038 = *(undefined8 *)(param_1 + 0x1c4);
    in_stack_00000030 = *(undefined8 *)(param_1 + 0x1bc);
    lVar2 = *(long *)(unaff_x19 + 0x38);
    if (lVar2 != 0) {
      if (cStack0000000000000020 == '\0') goto LAB_05f80628;
      uVar3 = FUN_06e59d08(lVar2,0);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_05f80794;
        FUN_06e59c44(*(long *)(unaff_x19 + 0x38),1,0);
      }
      puVar1 = PTR_DAT_075f4ef0;
      lVar2 = *(long *)(unaff_x19 + 0x30);
      if (lVar2 != 0) {
        in_stack_00000028 = *(undefined8 *)(lVar2 + 0x1b4);
        _cStack0000000000000020 = *(undefined8 *)(lVar2 + 0x1ac);
        in_stack_00000038 = *(undefined8 *)(lVar2 + 0x1c4);
        in_stack_00000030 = *(undefined8 *)(lVar2 + 0x1bc);
        FUN_04ba82e0(&stack0x00000020,*(undefined8 *)PTR_DAT_075f4ef0);
        lVar2 = FUN_06e5502c();
        lVar6 = *(long *)(unaff_x19 + 0x30);
        if ((lVar6 != 0) && (lVar2 != 0)) {
          fVar10 = *(float *)(unaff_x19 + 0x58);
          fVar12 = fStack0000000000000010 * fVar10 +
                   (float)((ulong)*(undefined8 *)(lVar6 + 0x1a0) >> 0x20);
          FUN_06e6a69c(CONCAT44(fVar12,in_stack_00000008._4_4_ * fVar10 +
                                       (float)*(undefined8 *)(lVar6 + 0x1a0)),fVar12,
                       fStack0000000000000014 * fVar10 + *(float *)(lVar6 + 0x1a8),lVar2,0);
          lVar2 = FUN_06e5502c();
          lVar6 = *(long *)(unaff_x19 + 0x30);
          if (lVar6 != 0) {
            in_stack_00000028 = *(undefined8 *)(lVar6 + 0x1b4);
            _cStack0000000000000020 = *(undefined8 *)(lVar6 + 0x1ac);
            in_stack_00000038 = *(undefined8 *)(lVar6 + 0x1c4);
            in_stack_00000030 = *(undefined8 *)(lVar6 + 0x1bc);
            FUN_04ba82e0(&stack0x00000020,*(undefined8 *)puVar1);
            if (DAT_07a3caf2 == '\0') {
              FUN_031f20f4(PTR_DAT_0759b378);
              DAT_07a3caf2 = '\x01';
            }
            lVar6 = *(long *)(*(long *)PTR_DAT_0759b378 + 0xb8);
            FUN_06e461b0(in_stack_00000008._4_4_,fStack0000000000000010,fStack0000000000000014,
                         *(undefined4 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x1c),
                         *(undefined4 *)(lVar6 + 0x20),0);
            if (lVar2 != 0) {
              FUN_06e6aafc(lVar2,0);
              uVar8 = *(undefined8 *)(unaff_x19 + 0x60);
              if (*(int *)(*(long *)PTR_DAT_0759b2a8 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              uVar3 = FUN_06e587d8(uVar8,0,0);
              if ((uVar3 & 1) != 0) {
                lVar2 = FUN_06e5502c();
                if (lVar2 == 0) goto LAB_05f80794;
                fVar10 = (float)FUN_06e6a5c4(lVar2,0);
                if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_05f80794;
                fVar12 = fStack0000000000000010;
                fVar13 = fStack0000000000000014;
                fVar11 = (float)FUN_06e6a5c4(*(long *)(unaff_x19 + 0x60),0);
                if (DAT_07a3fba1 == '\0') {
                  FUN_031f20f4(PTR_DAT_0759b370);
                  DAT_07a3fba1 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
                  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                }
                lVar2 = FUN_06e5502c();
                if (lVar2 == 0) goto LAB_05f80794;
                fVar10 = SQRT((fStack0000000000000014 - fVar13) * (fStack0000000000000014 - fVar13)
                              + (fVar10 - fVar11) * (fVar10 - fVar11) +
                                (fStack0000000000000010 - fVar12) *
                                (fStack0000000000000010 - fVar12));
                FUN_06e6b2fc(fVar10 * *(float *)(unaff_x19 + 0x68),
                             fVar10 * *(float *)(unaff_x19 + 0x6c),
                             fVar10 * *(float *)(unaff_x19 + 0x70),lVar2,0);
              }
              if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                 (lVar2 = *(long *)(unaff_x19 + 0x88), lVar2 != 0)) {
                if (*(int *)(*(long *)(unaff_x19 + 0x30) + 0x84) == 2) {
                  FUN_06e59c44(lVar2,1,0);
                  if ((*(long *)(unaff_x19 + 0x40) == 0) ||
                     (lVar2 = thunk_FUN_06e03184(*(long *)(unaff_x19 + 0x40),0), lVar2 == 0))
                  goto LAB_05f80794;
                  thunk_FUN_06e1062c(DAT_014ba894,lVar2,*(undefined4 *)(unaff_x19 + 0x74),0);
                  if ((*(long *)(unaff_x19 + 0x40) == 0) ||
                     (lVar2 = thunk_FUN_06e03184(*(long *)(unaff_x19 + 0x40),0), lVar2 == 0))
                  goto LAB_05f80794;
                  thunk_FUN_06e1062c(0x3f800000,lVar2,*(undefined4 *)(unaff_x19 + 0x78),0);
                  if ((*(long *)(unaff_x19 + 0x40) == 0) ||
                     (lVar2 = thunk_FUN_06e03184(*(long *)(unaff_x19 + 0x40),0), lVar2 == 0))
                  goto LAB_05f80794;
                  uVar5 = *(undefined4 *)(unaff_x19 + 0x7c);
                  fVar12 = 1.0;
                }
                else {
                  FUN_06e59c44(lVar2,0,0);
                  plVar9 = *(long **)(unaff_x19 + 0x28);
                  if (plVar9 == (long *)0x0) goto LAB_05f80794;
                  lVar2 = *plVar9;
                  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                  if (uVar3 != 0) {
                    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_075f2fc8) {
                        puVar4 = (undefined8 *)(lVar2 + (long)(*piVar7 + 0x10) * 0x10 + 0x138);
                        goto LAB_05f806a4;
                      }
                      uVar3 = uVar3 - 1;
                      piVar7 = piVar7 + 4;
                    } while (uVar3 != 0);
                  }
                  puVar4 = (undefined8 *)FUN_0322c1e8(plVar9,*(long *)PTR_DAT_075f2fc8,0x10);
LAB_05f806a4:
                  uVar8 = (*(code *)*puVar4)(plVar9,1,puVar4[1]);
                  if ((*(long *)(unaff_x19 + 0x40) == 0) ||
                     (lVar2 = thunk_FUN_06e03184(*(long *)(unaff_x19 + 0x40),0),
                     fVar10 = DAT_014ba894, lVar2 == 0)) goto LAB_05f80794;
                  fVar13 = (float)uVar8;
                  fVar12 = 1.0 - fVar13;
                  if (1.0 - fVar13 <= DAT_014ba894) {
                    fVar12 = DAT_014ba894;
                  }
                  thunk_FUN_06e1062c(fVar12,lVar2,*(undefined4 *)(unaff_x19 + 0x74),0);
                  if ((*(long *)(unaff_x19 + 0x40) == 0) ||
                     (lVar2 = thunk_FUN_06e03184(*(long *)(unaff_x19 + 0x40),0), lVar2 == 0))
                  goto LAB_05f80794;
                  thunk_FUN_06e1062c(uVar8,lVar2,*(undefined4 *)(unaff_x19 + 0x78),0);
                  if ((*(long *)(unaff_x19 + 0x40) == 0) ||
                     (lVar2 = thunk_FUN_06e03184(*(long *)(unaff_x19 + 0x40),0), lVar2 == 0))
                  goto LAB_05f80794;
                  uVar5 = *(undefined4 *)(unaff_x19 + 0x7c);
                  fVar12 = fVar13 * DAT_014baf38 + fVar10;
                  if (fVar13 < 0.0) {
                    fVar12 = fVar10;
                  }
                }
                thunk_FUN_06e1062c(fVar12,lVar2,uVar5,0);
                if ((*(long *)(unaff_x19 + 0x40) != 0) &&
                   (lVar2 = thunk_FUN_06e03184(*(long *)(unaff_x19 + 0x40),0), lVar2 != 0)) {
                  thunk_FUN_06e1073c(*(undefined4 *)(unaff_x19 + 0x48),
                                     *(undefined4 *)(unaff_x19 + 0x4c),
                                     *(undefined4 *)(unaff_x19 + 0x50),
                                     *(undefined4 *)(unaff_x19 + 0x54),lVar2,
                                     *(undefined4 *)(unaff_x19 + 0x80),0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_05f80794:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


