/*
FUNCTION_NAME: OVREyeGaze$$OnEnable
ENTRY_POINT: 05b430dc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 86
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_12;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x05b433f0) */

long OVREyeGaze__OnEnable(void)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  float *pfVar10;
  long *unaff_x19;
  long lVar11;
  long lVar12;
  long unaff_x24;
  long *plVar13;
  undefined8 *unaff_x26;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  long in_stack_00000010;
  undefined1 *in_stack_00000018;
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
  
  plVar13 = *(long **)(unaff_x24 + 0xb68);
  FUN_0447acc4(&stack0x00000010);
  memcpy(&stack0x000000a0,&stack0x00000010,0x50);
  puVar2 = PTR_DAT_070c22f8;
  in_stack_00000010 = 0;
  lVar11 = 0;
  fVar16 = 3.4028235e+38;
  fVar17 = 3.4028235e+38;
  in_stack_00000018 = &stack0x000000a0;
  do {
    do {
      do {
        do {
          do {
            uVar9 = FUN_05496478(&stack0x000000a0,*unaff_x26);
            uVar7 = in_stack_000000c8;
            uVar6 = uStack00000000000000c4;
            uVar5 = uStack00000000000000bc;
            uVar4 = uStack00000000000000b8;
            lVar3 = in_stack_000000b0;
            lVar12 = in_stack_00000010;
            if ((uVar9 & 1) == 0) {
              FUN_05496474(in_stack_00000018,*(undefined8 *)PTR_DAT_071140f0);
              if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd0(lVar12);
              }
              if (*(int *)(*plVar13 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              uVar9 = FUN_069d69b8(lVar11,0,0);
              if ((uVar9 & 1) != 0) {
                if (unaff_x19[0x40] != 0) {
                  FUN_05b45148(unaff_x19[0x40],lVar11,&stack0x00000080,0);
                  if (unaff_x19[0x40] != 0) {
                    FUN_05b44f30(unaff_x19[0x40],lVar11,&stack0x00000060,0);
                    *(undefined4 *)((long)unaff_x19 + 300) = uStack0000000000000060;
                    unaff_x19[0x27] = in_stack_00000080;
                    unaff_x19[0x26] = uStack0000000000000064;
                    unaff_x19[0x29] = in_stack_00000090;
                    unaff_x19[0x28] = in_stack_00000088;
                    return lVar11;
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              return lVar11;
            }
            uVar9 = FUN_05b435dc((int)unaff_x19[0x2a],*(undefined4 *)((long)unaff_x19 + 0x154),
                                 (int)unaff_x19[0x2b]);
          } while (((uVar9 & 1) == 0) &&
                  (uVar9 = FUN_05b435dc(*(undefined4 *)((long)unaff_x19 + 0x15c),
                                        (int)unaff_x19[0x2c],
                                        *(undefined4 *)((long)unaff_x19 + 0x164)), (uVar9 & 1) == 0)
                  );
          fVar18 = *(float *)(unaff_x19 + 0x2a);
          uVar19 = *(undefined8 *)((long)unaff_x19 + 0x154);
          if (DAT_07546bbc == '\0') {
            FUN_03188a78(puVar2);
            DAT_07546bbc = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          fVar18 = fVar18 - (float)uVar4;
          fVar14 = (float)uVar19 - (float)uVar5;
          fVar15 = (float)((ulong)uVar19 >> 0x20) - SUB84(uVar5,4);
        } while ((SQRT(fVar18 * fVar18 + fVar14 * fVar14 + fVar15 * fVar15) == 0.0) ||
                ((float)((ulong)uVar7 >> 0x20) * fVar15 +
                 (float)uVar6 * fVar18 + (float)uVar7 * fVar14 <= 0.0));
        fVar18 = (float)FUN_05b436cc((int)unaff_x19[0x2a],*(undefined4 *)((long)unaff_x19 + 0x154),
                                     (int)unaff_x19[0x2b]);
        lVar12 = unaff_x19[0x2d];
        if (*(int *)(*plVar13 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar9 = FUN_069d69b8(lVar12,lVar3,0);
        if ((uVar9 & 1) == 0) {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          pfVar10 = (float *)(lVar3 + 0xe0);
        }
        else {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          pfVar10 = (float *)(lVar3 + 0xd8);
        }
      } while (*pfVar10 < fVar18);
      fVar14 = (float)FUN_05b436ec((int)unaff_x19[0x2a],*(undefined4 *)((long)unaff_x19 + 0x154),
                                   (int)unaff_x19[0x2b]);
      lVar12 = unaff_x19[0x2d];
      if (*(int *)(*plVar13 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar9 = FUN_069d69b8(lVar12,lVar3,0);
      lVar12 = 0xdc;
      if ((uVar9 & 1) == 0) {
        lVar12 = 0xe4;
      }
    } while (*(float *)(lVar3 + lVar12) < fVar14);
    lVar12 = lVar11;
    fVar15 = fVar16;
    fVar1 = fVar17;
    if (*(float *)(unaff_x19 + 0x25) <= ABS(fVar18 - fVar17)) goto LAB_05b43338;
    if (*(int *)(*plVar13 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar9 = FUN_069d69b8(lVar11,0,0);
    if ((uVar9 & 1) == 0) goto LAB_05b43338;
    iVar8 = (**(code **)(*unaff_x19 + 0x548))();
    if (0 < iVar8) {
      lVar12 = lVar3;
      fVar1 = fVar18;
      fVar15 = fVar14;
    }
    lVar11 = lVar12;
    fVar16 = fVar15;
    fVar17 = fVar1;
    if (iVar8 == 0) {
LAB_05b43338:
      lVar11 = lVar12;
      fVar16 = fVar15;
      fVar17 = fVar1;
      if (fVar18 <= fVar1 + *(float *)(lVar3 + 0x110)) {
        if (*(int *)(*plVar13 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar9 = FUN_069d8404(lVar12,0,0);
        lVar11 = lVar3;
        fVar16 = fVar14;
        fVar17 = fVar18;
        if ((uVar9 & 1) == 0) {
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          if ((fVar1 - *(float *)(lVar12 + 0x110) <= fVar18) &&
             (lVar11 = lVar12, fVar16 = fVar15, fVar17 = fVar1, fVar14 < fVar15)) {
            lVar11 = lVar3;
            fVar16 = fVar14;
            fVar17 = fVar18;
          }
        }
      }
    }
  } while( true );
}


