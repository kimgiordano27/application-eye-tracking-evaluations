/*
FUNCTION_NAME: OVRManager$$UseDirectCompositionFromCmd
ENTRY_POINT: 05cfe370
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UseDirectCompositionFromCmd(undefined1 param_1 [16],float param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *plVar13;
  uint *puVar14;
  uint uVar15;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  ulong uVar22;
  float unaff_s8;
  float unaff_s9;
  float fVar23;
  ulong unaff_d10;
  float fVar24;
  float unaff_s14;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  ulong in_stack_00000028;
  undefined4 uStack0000000000000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  uVar11 = _uStack0000000000000030 >> 0x20;
  fStack000000000000000c = param_2;
  fStack0000000000000014 = param_3;
  fVar16 = (float)FUN_068ed2ec();
                    /* try { // try from 05cfe374 to 05dfe37b has its CatchHandler @ 05cfe7d0 */
                    /* try { // try from 05cfe380 to 05dfe387 has its CatchHandler @ 05cfe7d8 */
  if (DAT_0738eca3 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6e7c0);
    DAT_0738eca3 = '\x01';
  }
                    /* try { // try from 05cfe39c to 05dfe42b has its CatchHandler @ 05cfe7b4 */
  puVar3 = PTR_DAT_06f6e7c0;
  fVar17 = fStack0000000000000024 * fStack0000000000000024 +
           fStack0000000000000038 * fStack0000000000000038 +
           fStack0000000000000020 * fStack0000000000000020;
  fVar23 = (float)unaff_d10;
  uVar22 = unaff_d10;
  fVar24 = unaff_s9;
  fVar20 = unaff_s8;
  if (**(float **)(*(long *)PTR_DAT_06f6e7c0 + 0xb8) <= fVar17) {
    fVar20 = fStack0000000000000024 * unaff_s8 +
             fStack0000000000000038 * unaff_s9 + fStack0000000000000020 * fVar23;
    fVar24 = unaff_s9 - (fStack0000000000000038 * fVar20) / fVar17;
    uVar22 = (ulong)(uint)(fVar23 - (fStack0000000000000020 * fVar20) / fVar17);
    fVar20 = unaff_s8 - (fStack0000000000000024 * fVar20) / fVar17;
  }
  if (*(char *)(unaff_x23 + 0x668) == '\0') {
    FUN_02fe925c(PTR_DAT_06f6d508);
    *(undefined1 *)(unaff_x23 + 0x668) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  fStack0000000000000020 = (float)uVar22;
  fVar17 = SQRT(fVar20 * fVar20 + fVar24 * fVar24 + fStack0000000000000020 * fStack0000000000000020)
  ;
  if (fVar17 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 0x669) == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      *(undefined1 *)(unaff_x24 + 0x669) = 1;
    }
    pfVar7 = *(float **)(*unaff_x22 + 0xb8);
    fStack0000000000000024 = *pfVar7;
    fStack0000000000000020 = pfVar7[1];
    fVar20 = pfVar7[2];
  }
  else {
    fStack0000000000000024 = fVar24 / fVar17;
    fStack0000000000000020 = fStack0000000000000020 / fVar17;
    fVar20 = fVar20 / fVar17;
  }
  if (DAT_0738eca3 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6e7c0);
    DAT_0738eca3 = '\x01';
  }
  fVar24 = unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9 + fVar23 * fVar23;
  if (**(float **)(*(long *)puVar3 + 0xb8) <= fVar24) {
    fVar17 = unaff_s8 * unaff_s14 +
             unaff_s9 * fStack000000000000001c + fVar23 * fStack0000000000000018;
    fStack000000000000001c = fStack000000000000001c - (unaff_s9 * fVar17) / fVar24;
    fStack0000000000000018 = fStack0000000000000018 - (fVar23 * fVar17) / fVar24;
    unaff_s14 = unaff_s14 - (unaff_s8 * fVar17) / fVar24;
  }
  if (*(char *)(unaff_x23 + 0x668) == '\0') {
    FUN_02fe925c(PTR_DAT_06f6d508);
    *(undefined1 *)(unaff_x23 + 0x668) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  fVar24 = SQRT(unaff_s14 * unaff_s14 +
                fStack000000000000001c * fStack000000000000001c +
                fStack0000000000000018 * fStack0000000000000018);
  if (fVar24 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 0x669) == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      *(undefined1 *)(unaff_x24 + 0x669) = 1;
    }
    pfVar7 = *(float **)(*unaff_x22 + 0xb8);
    fStack000000000000001c = *pfVar7;
    fStack0000000000000018 = pfVar7[1];
    fVar24 = pfVar7[2];
  }
  else {
    fStack000000000000001c = fStack000000000000001c / fVar24;
    fStack0000000000000018 = fStack0000000000000018 / fVar24;
    fVar24 = unaff_s14 / fVar24;
  }
  uVar22 = in_stack_00000028 & 0xffffffff;
  fStack0000000000000004 = fVar23;
  fVar17 = (float)FUN_031e4528(fStack000000000000001c,fStack0000000000000018,fVar24,uVar22,
                               in_stack_00000028._4_4_,uStack0000000000000030,0);
  plVar13 = *(long **)(unaff_x19 + 0x28);
  if (plVar13 != (long *)0x0) {
    lVar8 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x21) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_05cfe63c;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02feb5b8(plVar13,*unaff_x21,0);
LAB_05cfe63c:
    iVar5 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    fVar23 = -fVar17;
    if (iVar5 != 1) {
      fVar23 = fVar17;
    }
    uVar21 = 0xc28c0000;
    uVar10 = (ulong)(uint)(fVar23 + 360.0);
    fVar17 = fVar23 + 360.0;
    if (-70.0 <= fVar23) {
      fVar17 = fVar23;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar17;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar18 = FUN_069042b4(*(long *)(unaff_x19 + 0x30),0);
      uVar19 = FUN_068ed124(0);
      in_stack_00000040 = 0;
      uStack0000000000000048 = 0;
      uStack000000000000004c = 0;
      in_stack_00000058 = 0;
      uStack0000000000000050 = 0;
      uStack0000000000000054 = 0;
      FUN_06902890(uVar18,uVar10,uVar21,uVar19,unaff_d10,uVar11,uVar22,&stack0x00000040,0);
      plVar13 = *(long **)(unaff_x19 + 0x48);
      *(float *)(unaff_x19 + 0x80) = fStack000000000000001c;
      *(float *)(unaff_x19 + 0x84) = fStack0000000000000018;
      *(float *)(unaff_x19 + 0x88) = fVar24;
      *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
      *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
      puVar3 = PTR_DAT_06f9acf0;
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06f9acf0) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05cfe75c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_02feb5b8(plVar13,*(long *)PTR_DAT_06f9acf0,0);
LAB_05cfe75c:
        uVar11 = (*(code *)*puVar6)(plVar13,puVar6[1]);
        if ((uVar11 & 1) == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(byte *)(unaff_x19 + 0x71) ^ 1;
        }
        plVar13 = *(long **)(unaff_x19 + 0x48);
        if (plVar13 != (long *)0x0) {
          lVar9 = *plVar13;
          lVar8 = *(long *)puVar3;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          fStack0000000000000020 = fStack000000000000000c * fStack0000000000000020;
          fVar20 = fStack0000000000000014 * fVar20;
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar8) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_05cfe808;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_02feb5b8(plVar13,lVar8,0);
LAB_05cfe808:
          bVar4 = (*(code *)*puVar6)(plVar13,puVar6[1]);
          puVar14 = (uint *)(unaff_x19 + 0x74);
          *(byte *)(unaff_x19 + 0x71) = bVar4 & 1;
          if ((uVar15 & 0.5 < (fVar20 + fVar16 * fStack0000000000000024 + fStack0000000000000020) *
                              0.5 + 0.5 & *puVar14 >> 0x1f) == 0) {
            if ((int)*puVar14 < 0) {
              return;
            }
            plVar13 = *(long **)(unaff_x19 + 0x58);
            if (plVar13 != (long *)0x0) {
              lVar9 = *plVar13;
              lVar8 = *(long *)puVar3;
              uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == lVar8) {
                    puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_05cfe8cc;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar6 = (undefined8 *)FUN_02feb5b8(plVar13,lVar8,0);
LAB_05cfe8cc:
              uVar11 = (*(code *)*puVar6)(plVar13,puVar6[1]);
              if ((uVar11 & 1) != 0) {
                FUN_05cfd9c4();
                *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
                *(undefined1 *)(unaff_x19 + 0xb0) = 0;
                return;
              }
              uVar15 = *puVar14;
              if ((int)uVar15 < 0) {
                return;
              }
              if (*(char *)(unaff_x19 + 0xb0) != '\0') {
                return;
              }
              lVar8 = *(long *)(unaff_x19 + 0x38);
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar8 + 0x18);
                if (uVar1 <= uVar15) goto LAB_05cfe9c0;
                lVar9 = *(long *)(lVar8 + (ulong)uVar15 * 8 + 0x20);
                if (lVar9 != 0) {
                  if (*(float *)(lVar9 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
                    if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar9 + 0x14)) {
                      return;
                    }
                    uVar2 = uVar1 - 1;
                    if ((int)(uVar15 + 1) <= (int)uVar2) {
                      uVar2 = uVar15 + 1;
                    }
                    *puVar14 = uVar2;
                    if (uVar1 <= uVar2) goto LAB_05cfe9c0;
                    uVar11 = (ulong)(int)uVar2;
                  }
                  else {
                    if ((int)uVar15 < 2) {
                      uVar15 = 1;
                    }
                    uVar15 = uVar15 - 1;
                    *puVar14 = uVar15;
                    if (uVar1 <= uVar15) {
LAB_05cfe9c0:
                    /* WARNING: Subroutine does not return */
                      FUN_02fe94f0();
                    }
                    uVar11 = (ulong)uVar15;
                  }
                  if (*(long *)(lVar8 + uVar11 * 8 + 0x20) != 0) goto LAB_05cfe85c;
                }
              }
            }
          }
          else {
            lVar8 = FUN_05cfe9c4(*(undefined4 *)(unaff_x19 + 0x7c));
            if (lVar8 != 0) {
              if (*(char *)(lVar8 + 0x18) == '\0') {
                *puVar14 = 0xffffffff;
                return;
              }
LAB_05cfe85c:
              FUN_05cfd9c4();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


