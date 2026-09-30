/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$Setup
ENTRY_POINT: 052dcbc8
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__Setup
          (undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar5 = FUN_052cfcc4();
  *(undefined4 *)(unaff_x20 + 0x28) = uVar5;
  *(float *)(unaff_x20 + 0x2c) = param_2;
  *(float *)(unaff_x20 + 0x30) = param_3;
  if (*(long *)(unaff_x19 + 0x180) != 0) {
    fVar6 = (float)FUN_066d3ed0(*(long *)(unaff_x19 + 0x180),0);
    param_2 = -param_2;
    param_3 = -param_3;
    *(float *)(unaff_x20 + 0x34) = -fVar6;
    *(float *)(unaff_x20 + 0x38) = param_2;
    *(float *)(unaff_x20 + 0x3c) = param_3;
    lVar1 = FUN_066c67b0();
    if (lVar1 != 0) {
      uVar5 = FUN_066d48c0(lVar1,0);
      *(undefined4 *)(unaff_x20 + 0x40) = uVar5;
      *(float *)(unaff_x20 + 0x44) = param_2;
      *(float *)(unaff_x20 + 0x48) = param_3;
      if (*(char *)(unaff_x19 + 0x270) != '\0') {
        uVar5 = FUN_052da188();
        *(undefined4 *)(unaff_x19 + 0x2c4) = uVar5;
        *(float *)(unaff_x19 + 0x2c8) = param_2;
        *(float *)(unaff_x19 + 0x2cc) = param_3;
        uVar5 = FUN_052cff0c();
        *(undefined4 *)(unaff_x20 + 0x28) = uVar5;
        *(float *)(unaff_x20 + 0x2c) = param_2;
        *(float *)(unaff_x20 + 0x30) = param_3;
        fVar6 = (float)FUN_052d3f4c();
        *(float *)(unaff_x20 + 0x34) = -fVar6;
        *(float *)(unaff_x20 + 0x38) = -param_2;
        *(float *)(unaff_x20 + 0x3c) = -param_3;
      }
      fVar6 = *(float *)(unaff_x20 + 0x28);
      fVar18 = *(float *)(unaff_x20 + 0x2c);
      fVar19 = *(float *)(unaff_x20 + 0x30);
      lVar1 = FUN_066c67b0();
      if (lVar1 != 0) {
        fVar9 = *(float *)(unaff_x20 + 0x38);
        fVar11 = *(float *)(unaff_x20 + 0x3c);
        fVar7 = (float)FUN_066d55cc(*(undefined4 *)(unaff_x20 + 0x34),lVar1,0);
        fVar14 = fVar9;
        fVar13 = fVar11;
        lVar1 = FUN_066c67b0();
        if (lVar1 != 0) {
          fVar8 = (float)FUN_066d48c0(lVar1,0);
          if (DAT_071babf8 == '\0') {
            FUN_02f07e70(PTR_DAT_06d03010);
            DAT_071babf8 = '\x01';
          }
          fVar8 = (fVar6 + fVar7) - fVar8;
          fVar14 = (fVar18 + fVar9) - fVar14;
          fVar13 = (fVar19 + fVar11) - fVar13;
          if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          fVar14 = fVar14 * fVar14;
          fVar6 = *(float *)(unaff_x19 + 0xcc);
          fVar13 = fVar13 * fVar13;
          *(float *)(unaff_x20 + 0x4c) = SQRT(fVar13 + fVar8 * fVar8 + fVar14) / fVar6;
          *(undefined4 *)(unaff_x20 + 0x50) = 0;
          if (*(long *)(unaff_x19 + 0x78) != 0) {
            FUN_06741ea8(*(long *)(unaff_x19 + 0x78),0,0);
            if (*(long *)(unaff_x19 + 0x180) != 0) {
              uVar5 = FUN_066d320c(*(long *)(unaff_x19 + 0x180),0);
              *(undefined4 *)(unaff_x20 + 0x54) = uVar5;
              *(float *)(unaff_x20 + 0x58) = fVar14;
              *(float *)(unaff_x20 + 0x5c) = fVar13;
              *(float *)(unaff_x20 + 0x60) = fVar6;
              fVar18 = *(float *)(unaff_x20 + 0x4c);
                    /* try { // try from 052dcd84 to 053dce87 has its CatchHandler @ 052dcd84
                       catch() { ... } // from try @ 052dcd84 with catch @ 052dcd84
                       catch() { ... } // from try @ 052dcf4c with catch @ 052dcd84
                       catch() { ... } // from try @ 052dd004 with catch @ 052dcd84
                       catch() { ... } // from try @ 052dd0a0 with catch @ 052dcd84 */
              if (fVar18 <= *(float *)(unaff_x20 + 0x50)) {
                if (unaff_x19 == 0) goto LAB_052dd1fc;
              }
              else {
                if (unaff_x19 == 0) goto LAB_052dd1fc;
                uVar4 = *(undefined8 *)(unaff_x19 + 0x98);
                if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                uVar2 = FUN_066cd30c(uVar4,0);
                if ((uVar2 & 1) != 0) {
                  if (*(char *)(unaff_x19 + 0x270) == '\0') {
                    uVar5 = FUN_052cfcc4();
                  }
                  else {
                    uVar5 = FUN_052cff0c();
                  }
                  fVar19 = *(float *)(unaff_x20 + 0x50);
                  *(undefined4 *)(unaff_x20 + 0x28) = uVar5;
                  *(float *)(unaff_x20 + 0x2c) = fVar18;
                  *(float *)(unaff_x20 + 0x30) = fVar13;
                  fVar6 = (float)FUN_066d1758(0);
                  *(float *)(unaff_x20 + 0x50) = fVar19 + fVar6;
                  lVar1 = FUN_066c67b0();
                  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
                  fVar6 = *(float *)(unaff_x20 + 0x48);
                  uVar16 = *(undefined8 *)(unaff_x20 + 0x28);
                  fVar18 = *(float *)(unaff_x20 + 0x30);
                  lVar3 = FUN_066c67b0();
                  if (lVar3 != 0) {
                    fVar13 = *(float *)(unaff_x20 + 0x38);
                    fVar7 = *(float *)(unaff_x20 + 0x3c);
                    fVar14 = (float)FUN_066d55cc(*(undefined4 *)(unaff_x20 + 0x34),fVar13,fVar7,
                                                 lVar3,0);
                    fVar9 = *(float *)(unaff_x20 + 0x50) / *(float *)(unaff_x20 + 0x4c);
                    fVar19 = fVar9;
                    if (1.0 < fVar9) {
                      fVar19 = 1.0;
                    }
                    if (fVar9 < 0.0) {
                      fVar19 = 0.0;
                    }
                    uVar2 = (ulong)(uint)fVar19;
                    if (lVar1 != 0) {
                      fVar11 = (float)uVar4;
                      fVar9 = (float)((ulong)uVar4 >> 0x20);
                      fVar9 = fVar9 + (((float)((ulong)uVar16 >> 0x20) + fVar13) - fVar9) * fVar19;
                      uVar12 = (ulong)(uint)(fVar6 + ((fVar18 + fVar7) - fVar6) * fVar19);
                      uVar10 = (ulong)(uint)fVar9;
                      FUN_066d4960(CONCAT44(fVar9,fVar11 + (((float)uVar16 + fVar14) - fVar11) *
                                                           fVar19),uVar10,uVar12,lVar1,0);
                      lVar1 = FUN_066c67b0();
                      uVar5 = *(undefined4 *)(unaff_x20 + 0x54);
                      fVar19 = *(float *)(unaff_x20 + 0x58);
                      fVar13 = *(float *)(unaff_x20 + 0x5c);
                      fVar9 = *(float *)(unaff_x20 + 0x60);
                      uVar4 = FUN_052cfc14();
                      fVar6 = (float)FUN_066bd920(uVar5,fVar19,fVar13,fVar9,uVar4,uVar10,uVar12,
                                                  uVar2,0);
                      fVar11 = *(float *)(unaff_x19 + 0x248);
                      fVar14 = *(float *)(unaff_x19 + 0x240);
                      fVar7 = *(float *)(unaff_x19 + 0x244);
                      fVar18 = (float)FUN_066bd6e0(*(undefined4 *)(unaff_x19 + 0x23c),fVar14,fVar7,
                                                   fVar11,0);
                      if (lVar1 != 0) {
                        FUN_066d4ae0((fVar19 * fVar7 + fVar9 * fVar18 + fVar6 * fVar11) -
                                     fVar13 * fVar14,
                                     (fVar13 * fVar18 + fVar9 * fVar14 + fVar19 * fVar11) -
                                     fVar6 * fVar7,
                                     (fVar6 * fVar14 + fVar9 * fVar7 + fVar13 * fVar11) -
                                     fVar19 * fVar18,
                                     ((fVar9 * fVar11 - fVar6 * fVar18) - fVar19 * fVar14) -
                                     fVar13 * fVar7,lVar1,0);
                        *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x3a0);
                        thunk_FUN_02f411dc((undefined8 *)(unaff_x20 + 0x18));
                        *(undefined4 *)(unaff_x20 + 0x10) = 1;
                        return 1;
                      }
                    }
                  }
                  goto LAB_052dd1fc;
                }
              }
              *(undefined1 *)(unaff_x19 + 0x309) = 0;
              uVar4 = *(undefined8 *)(unaff_x19 + 0x98);
              if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              uVar2 = FUN_066cd30c(uVar4,0);
              if ((uVar2 & 1) == 0) {
                return 0;
              }
              if (*(long *)(unaff_x19 + 0x98) != 0) {
                if (*(char *)(*(long *)(unaff_x19 + 0x98) + 0xda) == '\0') {
                  *(undefined1 *)(unaff_x19 + 0x3c9) = 1;
                  uVar5 = FUN_066d1690(0);
                  *(undefined4 *)(unaff_x19 + 0x3cc) = uVar5;
                }
                fVar9 = (float)FUN_052cc80c();
                fVar19 = fVar6;
                fVar14 = fVar18;
                fVar7 = fVar13;
                FUN_052cfc14();
                fVar11 = (float)FUN_066bd6e0(0);
                    /* try { // try from 052dce88 to 053dceaf has its CatchHandler @ 052dd014 */
                    /* try { // try from 052dcec8 to 053dcf27 has its CatchHandler @ 052dd018 */
                fVar8 = (fVar13 * fVar11 + fVar6 * fVar14 + fVar18 * fVar19) - fVar9 * fVar7;
                fVar15 = (fVar9 * fVar14 + fVar6 * fVar7 + fVar13 * fVar19) - fVar18 * fVar11;
                fVar17 = ((fVar6 * fVar19 - fVar9 * fVar11) - fVar18 * fVar14) - fVar13 * fVar7;
                lVar1 = FUN_066c67b0();
                fVar14 = (float)FUN_066bd6e0((fVar18 * fVar7 + fVar6 * fVar11 + fVar9 * fVar19) -
                                             fVar13 * fVar14,fVar8,fVar15,fVar17,0);
                fVar6 = fVar17;
                fVar18 = fVar15;
                fVar19 = fVar8;
                lVar3 = FUN_066c67b0();
                if ((lVar3 != 0) && (fVar13 = (float)FUN_066d320c(lVar3,0), lVar1 != 0)) {
                  FUN_066d4ae0((fVar8 * fVar18 + fVar17 * fVar13 + fVar14 * fVar6) - fVar15 * fVar19
                               ,(fVar15 * fVar13 + fVar17 * fVar19 + fVar8 * fVar6) -
                                fVar14 * fVar18,
                               (fVar14 * fVar19 + fVar17 * fVar18 + fVar15 * fVar6) - fVar8 * fVar13
                               ,((fVar17 * fVar6 - fVar14 * fVar13) - fVar8 * fVar19) -
                                fVar15 * fVar18,lVar1,0);
                  lVar1 = FUN_066c67b0();
                  fVar6 = *(float *)(unaff_x20 + 0x28);
                  fVar18 = *(float *)(unaff_x20 + 0x2c);
                  fVar19 = *(float *)(unaff_x20 + 0x30);
                  lVar3 = FUN_066c67b0();
                  if (lVar3 != 0) {
                    fVar13 = *(float *)(unaff_x20 + 0x38);
                    fVar7 = *(float *)(unaff_x20 + 0x3c);
                    fVar14 = (float)FUN_066d55cc(*(undefined4 *)(unaff_x20 + 0x34),fVar13,fVar7,
                                                 lVar3,0);
                    if (lVar1 != 0) {
                      FUN_066d4960(fVar6 + fVar14,fVar18 + fVar13,fVar19 + fVar7,lVar1,0);
                      FUN_052d96d0();
                      return 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_052dd1fc:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


