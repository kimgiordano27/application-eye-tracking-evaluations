/*
FUNCTION_NAME: OVREyeGaze$$OnDisable
ENTRY_POINT: 05b4328c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_11;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x05b433f0) */

long OVREyeGaze__OnDisable(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  float *pfVar7;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar8;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined1 unaff_w29;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar11;
  undefined8 uVar12;
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
    thunk_FUN_031e5338();
    do {
      uVar6 = FUN_069d69b8(unaff_x23,unaff_x22,0);
      lVar8 = unaff_x25;
      if ((uVar6 & 1) == 0) {
        lVar8 = 0xe4;
      }
      if (unaff_s9 <= *(float *)(unaff_x22 + lVar8)) {
        lVar8 = unaff_x20;
        fVar11 = unaff_s10;
        fVar9 = unaff_s11;
        if (ABS(unaff_s8 - unaff_s11) < *(float *)(unaff_x19 + 0x25)) {
          if (*(int *)(*unaff_x24 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar6 = FUN_069d69b8(unaff_x20,0,0);
          if ((uVar6 & 1) != 0) {
            iVar5 = (**(code **)(*unaff_x19 + 0x548))();
            if (0 < iVar5) {
              lVar8 = unaff_x22;
              fVar9 = unaff_s8;
              fVar11 = unaff_s9;
            }
            unaff_x20 = lVar8;
            unaff_s11 = fVar9;
            unaff_s10 = fVar11;
            if (iVar5 != 0) goto LAB_05b43130;
          }
        }
        unaff_x20 = lVar8;
        unaff_s11 = fVar9;
        unaff_s10 = fVar11;
        if (unaff_s8 <= fVar9 + *(float *)(unaff_x22 + 0x110)) {
          if (*(int *)(*unaff_x24 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar6 = FUN_069d8404(lVar8,0,0);
          unaff_x20 = unaff_x22;
          unaff_s11 = unaff_s8;
          unaff_s10 = unaff_s9;
          if ((uVar6 & 1) == 0) {
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            if ((fVar9 - *(float *)(lVar8 + 0x110) <= unaff_s8) &&
               (unaff_x20 = lVar8, unaff_s11 = fVar9, unaff_s10 = fVar11, unaff_s9 < fVar11)) {
              unaff_x20 = unaff_x22;
              unaff_s11 = unaff_s8;
              unaff_s10 = unaff_s9;
            }
          }
        }
      }
LAB_05b43130:
      do {
        do {
          do {
            uVar6 = FUN_05496478(&stack0x000000a0,*unaff_x26);
            uVar4 = in_stack_000000c8;
            uVar3 = uStack00000000000000c4;
            uVar2 = uStack00000000000000bc;
            uVar1 = uStack00000000000000b8;
            unaff_x22 = in_stack_000000b0;
            if ((uVar6 & 1) == 0) {
              FUN_05496474(in_stack_00000018,*(undefined8 *)PTR_DAT_071140f0);
              if (in_stack_00000010 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd0(in_stack_00000010);
              }
              if (*(int *)(*unaff_x24 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              uVar6 = FUN_069d69b8(unaff_x20,0,0);
              if ((uVar6 & 1) != 0) {
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
              return unaff_x20;
            }
            uVar6 = FUN_05b435dc((int)unaff_x19[0x2a],*(undefined4 *)((long)unaff_x19 + 0x154),
                                 (int)unaff_x19[0x2b]);
          } while (((uVar6 & 1) == 0) &&
                  (uVar6 = FUN_05b435dc(*(undefined4 *)((long)unaff_x19 + 0x15c),
                                        (int)unaff_x19[0x2c],
                                        *(undefined4 *)((long)unaff_x19 + 0x164)), (uVar6 & 1) == 0)
                  );
          fVar11 = *(float *)(unaff_x19 + 0x2a);
          uVar12 = *unaff_x27;
          if (*(char *)(unaff_x28 + 0xbbc) == '\0') {
            FUN_03188a78();
            *(undefined1 *)(unaff_x28 + 0xbbc) = unaff_w29;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          fVar11 = fVar11 - (float)uVar1;
          fVar9 = (float)uVar12 - (float)uVar2;
          fVar10 = (float)((ulong)uVar12 >> 0x20) - SUB84(uVar2,4);
        } while ((SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10) == 0.0) ||
                ((float)((ulong)uVar4 >> 0x20) * fVar10 +
                 (float)uVar3 * fVar11 + (float)uVar4 * fVar9 <= 0.0));
        unaff_s8 = (float)FUN_05b436cc((int)unaff_x19[0x2a],*(undefined4 *)((long)unaff_x19 + 0x154)
                                       ,(int)unaff_x19[0x2b]);
        lVar8 = unaff_x19[0x2d];
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar6 = FUN_069d69b8(lVar8,unaff_x22,0);
        if ((uVar6 & 1) == 0) {
          if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          pfVar7 = (float *)(unaff_x22 + 0xe0);
        }
        else {
          if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          pfVar7 = (float *)(unaff_x22 + 0xd8);
        }
      } while (*pfVar7 < unaff_s8);
      unaff_s9 = (float)FUN_05b436ec((int)unaff_x19[0x2a],*(undefined4 *)((long)unaff_x19 + 0x154),
                                     (int)unaff_x19[0x2b]);
      unaff_x23 = unaff_x19[0x2d];
    } while (*(int *)(*unaff_x24 + 0xe4) != 0);
  } while( true );
}


