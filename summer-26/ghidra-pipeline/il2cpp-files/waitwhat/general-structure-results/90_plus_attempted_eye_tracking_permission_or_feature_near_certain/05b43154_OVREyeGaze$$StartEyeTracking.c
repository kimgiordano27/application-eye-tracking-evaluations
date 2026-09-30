/*
FUNCTION_NAME: OVREyeGaze$$StartEyeTracking
ENTRY_POINT: 05b43154
PROGRAM: waitwhat-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_12;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x05b433f0) */

long OVREyeGaze__StartEyeTracking(void)

{
  float fVar1;
  int iVar2;
  ulong uVar3;
  float *pfVar4;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar5;
  long *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined1 unaff_w29;
  float fVar6;
  float fVar7;
  float unaff_s8;
  undefined8 unaff_d9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  undefined8 unaff_d13;
  float fVar8;
  undefined8 uVar9;
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
    uVar3 = FUN_05b435dc((int)unaff_x19[0x2a],*(undefined4 *)((long)unaff_x19 + 0x154),
                         (int)unaff_x19[0x2b]);
    if (((uVar3 & 1) != 0) ||
       (uVar3 = FUN_05b435dc(*(undefined4 *)((long)unaff_x19 + 0x15c),(int)unaff_x19[0x2c],
                             *(undefined4 *)((long)unaff_x19 + 0x164)), (uVar3 & 1) != 0)) {
      fVar8 = *(float *)(unaff_x19 + 0x2a);
      uVar9 = *unaff_x27;
      if (*(char *)(unaff_x28 + 0xbbc) == '\0') {
        FUN_03188a78();
        *(undefined1 *)(unaff_x28 + 0xbbc) = unaff_w29;
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      fVar8 = fVar8 - unaff_s12;
      fVar6 = (float)uVar9 - (float)unaff_d13;
      fVar7 = (float)((ulong)uVar9 >> 0x20) - (float)((ulong)unaff_d13 >> 0x20);
      if ((SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7) != 0.0) &&
         (0.0 < (float)((ulong)unaff_d9 >> 0x20) * fVar7 +
                unaff_s8 * fVar8 + (float)unaff_d9 * fVar6)) {
        fVar8 = (float)FUN_05b436cc((int)unaff_x19[0x2a],*(undefined4 *)((long)unaff_x19 + 0x154),
                                    (int)unaff_x19[0x2b]);
        lVar5 = unaff_x19[0x2d];
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar3 = FUN_069d69b8(lVar5,unaff_x22,0);
        if ((uVar3 & 1) == 0) {
          if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          pfVar4 = (float *)(unaff_x22 + 0xe0);
        }
        else {
          if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          pfVar4 = (float *)(unaff_x22 + 0xd8);
        }
        if (fVar8 <= *pfVar4) {
          fVar6 = (float)FUN_05b436ec((int)unaff_x19[0x2a],*(undefined4 *)((long)unaff_x19 + 0x154),
                                      (int)unaff_x19[0x2b]);
          lVar5 = unaff_x19[0x2d];
          if (*(int *)(*unaff_x24 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar3 = FUN_069d69b8(lVar5,unaff_x22,0);
          lVar5 = unaff_x25;
          if ((uVar3 & 1) == 0) {
            lVar5 = 0xe4;
          }
          if (fVar6 <= *(float *)(unaff_x22 + lVar5)) {
            lVar5 = unaff_x20;
            fVar7 = unaff_s10;
            fVar1 = unaff_s11;
            if (ABS(fVar8 - unaff_s11) < *(float *)(unaff_x19 + 0x25)) {
              if (*(int *)(*unaff_x24 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              uVar3 = FUN_069d69b8(unaff_x20,0,0);
              if ((uVar3 & 1) != 0) {
                iVar2 = (**(code **)(*unaff_x19 + 0x548))();
                if (0 < iVar2) {
                  lVar5 = unaff_x22;
                  fVar1 = fVar8;
                  fVar7 = fVar6;
                }
                unaff_x20 = lVar5;
                unaff_s11 = fVar1;
                unaff_s10 = fVar7;
                if (iVar2 != 0) goto LAB_05b43130;
              }
            }
            unaff_x20 = lVar5;
            unaff_s11 = fVar1;
            unaff_s10 = fVar7;
            if (fVar8 <= fVar1 + *(float *)(unaff_x22 + 0x110)) {
              if (*(int *)(*unaff_x24 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              uVar3 = FUN_069d8404(lVar5,0,0);
              unaff_x20 = unaff_x22;
              unaff_s11 = fVar8;
              unaff_s10 = fVar6;
              if ((uVar3 & 1) == 0) {
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03188cd8();
                }
                if ((fVar1 - *(float *)(lVar5 + 0x110) <= fVar8) &&
                   (unaff_x20 = lVar5, unaff_s11 = fVar1, unaff_s10 = fVar7, fVar6 < fVar7)) {
                  unaff_x20 = unaff_x22;
                  unaff_s11 = fVar8;
                  unaff_s10 = fVar6;
                }
              }
            }
          }
        }
      }
    }
LAB_05b43130:
    uVar3 = FUN_05496478(&stack0x000000a0,*unaff_x26);
    unaff_x22 = in_stack_000000b0;
    unaff_d9 = in_stack_000000c8;
    unaff_d13 = uStack00000000000000bc;
    unaff_s12 = (float)uStack00000000000000b8;
    unaff_s8 = (float)uStack00000000000000c4;
    if ((uVar3 & 1) == 0) {
      FUN_05496474(in_stack_00000018,*(undefined8 *)PTR_DAT_071140f0);
      if (in_stack_00000010 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd0(in_stack_00000010);
      }
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar3 = FUN_069d69b8(unaff_x20,0,0);
      if ((uVar3 & 1) != 0) {
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
  } while( true );
}


