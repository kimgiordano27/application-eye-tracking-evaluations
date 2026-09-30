/*
FUNCTION_NAME: OVREyeGaze$$OnDestroy
ENTRY_POINT: 05b43314
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_12;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x05b433f0) */

long OVREyeGaze__OnDestroy(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char in_NG;
  char in_OV;
  ulong uVar5;
  float *pfVar6;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar7;
  long *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined1 unaff_w29;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s12;
  float unaff_s13;
  float fVar10;
  undefined8 uVar11;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_000000b0;
  undefined4 uStack00000000000000b8;
  undefined8 uStack00000000000000bc;
  undefined4 uStack00000000000000c4;
  undefined8 in_stack_000000c8;
  
  do {
    if (in_NG == in_OV) {
      unaff_x20 = unaff_x22;
    }
    lVar7 = unaff_x20;
    fVar10 = unaff_s12;
    fVar8 = unaff_s13;
    if (param_1 != 0) goto LAB_05b43130;
    do {
      do {
        unaff_x20 = lVar7;
        unaff_s13 = fVar8;
        unaff_s12 = fVar10;
        if (unaff_s8 <= fVar8 + *(float *)(unaff_x22 + 0x110)) {
          if (*(int *)(*unaff_x24 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar5 = FUN_069d8404(lVar7,0,0);
          unaff_x20 = unaff_x22;
          unaff_s13 = unaff_s8;
          unaff_s12 = unaff_s9;
          if ((uVar5 & 1) == 0) {
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            if ((fVar8 - *(float *)(lVar7 + 0x110) <= unaff_s8) &&
               (unaff_x20 = lVar7, unaff_s13 = fVar8, unaff_s12 = fVar10, unaff_s9 < fVar10)) {
              unaff_x20 = unaff_x22;
              unaff_s13 = unaff_s8;
              unaff_s12 = unaff_s9;
            }
          }
        }
LAB_05b43130:
        do {
          do {
            do {
              do {
                uVar5 = FUN_05496478(&stack0x000000a0,*unaff_x26);
                uVar4 = in_stack_000000c8;
                uVar3 = uStack00000000000000c4;
                uVar2 = uStack00000000000000bc;
                uVar1 = uStack00000000000000b8;
                unaff_x22 = in_stack_000000b0;
                if ((uVar5 & 1) == 0) {
                  FUN_05496474(in_stack_00000018,*(undefined8 *)PTR_DAT_071140f0);
                  if (in_stack_00000010 != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03188cd0(in_stack_00000010);
                  }
                  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
                    thunk_FUN_031e5338();
                  }
                  uVar5 = FUN_069d69b8(unaff_x20,0,0);
                  if ((uVar5 & 1) == 0) {
                    return unaff_x20;
                  }
                  if (unaff_x19[0x40] != 0) {
                    FUN_05b45148(unaff_x19[0x40],unaff_x20,&stack0x00000080,0);
                    if (unaff_x19[0x40] != 0) {
                      FUN_05b44f30(unaff_x19[0x40],unaff_x20,&stack0x00000060,0);
                      *(undefined4 *)((long)unaff_x19 + 300) = uStack0000000000000060;
                      unaff_x19[0x27] = in_stack_00000080;
                      unaff_x19[0x26] = uStack0000000000000064;
                      unaff_x19[0x29] = in_stack_00000090;
                      unaff_x19[0x28] = in_stack_00000088;
                      return unaff_x20;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_03188cd8();
                }
                uVar5 = FUN_05b435dc((int)unaff_x19[0x2a],*(undefined4 *)((long)unaff_x19 + 0x154),
                                     (int)unaff_x19[0x2b]);
              } while (((uVar5 & 1) == 0) &&
                      (uVar5 = FUN_05b435dc(*(undefined4 *)((long)unaff_x19 + 0x15c),
                                            (int)unaff_x19[0x2c],
                                            *(undefined4 *)((long)unaff_x19 + 0x164)),
                      (uVar5 & 1) == 0));
              fVar10 = *(float *)(unaff_x19 + 0x2a);
              uVar11 = *unaff_x27;
              if (*(char *)(unaff_x28 + 0xbbc) == '\0') {
                FUN_03188a78();
                *(undefined1 *)(unaff_x28 + 0xbbc) = unaff_w29;
              }
              if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              fVar10 = fVar10 - (float)uVar1;
              fVar8 = (float)uVar11 - (float)uVar2;
              fVar9 = (float)((ulong)uVar11 >> 0x20) - SUB84(uVar2,4);
            } while ((SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9) == 0.0) ||
                    ((float)((ulong)uVar4 >> 0x20) * fVar9 +
                     (float)uVar3 * fVar10 + (float)uVar4 * fVar8 <= 0.0));
            unaff_s8 = (float)FUN_05b436cc((int)unaff_x19[0x2a],
                                           *(undefined4 *)((long)unaff_x19 + 0x154),
                                           (int)unaff_x19[0x2b]);
            lVar7 = unaff_x19[0x2d];
            if (*(int *)(*unaff_x24 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            uVar5 = FUN_069d69b8(lVar7,unaff_x22,0);
            if ((uVar5 & 1) == 0) {
              if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              pfVar6 = (float *)(unaff_x22 + 0xe0);
            }
            else {
              if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              pfVar6 = (float *)(unaff_x22 + 0xd8);
            }
          } while (*pfVar6 < unaff_s8);
          unaff_s9 = (float)FUN_05b436ec((int)unaff_x19[0x2a],
                                         *(undefined4 *)((long)unaff_x19 + 0x154),
                                         (int)unaff_x19[0x2b]);
          lVar7 = unaff_x19[0x2d];
          if (*(int *)(*unaff_x24 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar5 = FUN_069d69b8(lVar7,unaff_x22,0);
          lVar7 = unaff_x25;
          if ((uVar5 & 1) == 0) {
            lVar7 = 0xe4;
          }
        } while (*(float *)(unaff_x22 + lVar7) < unaff_s9);
        lVar7 = unaff_x20;
        fVar10 = unaff_s12;
        fVar8 = unaff_s13;
      } while (*(float *)(unaff_x19 + 0x25) <= ABS(unaff_s8 - unaff_s13));
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar5 = FUN_069d69b8(unaff_x20,0,0);
    } while ((uVar5 & 1) == 0);
    param_1 = (**(code **)(*unaff_x19 + 0x548))();
    in_OV = SBORROW4(param_1,1);
    in_NG = param_1 + -1 < 0;
    if (0 < param_1) {
      unaff_s12 = unaff_s9;
      unaff_s13 = unaff_s8;
    }
  } while( true );
}


