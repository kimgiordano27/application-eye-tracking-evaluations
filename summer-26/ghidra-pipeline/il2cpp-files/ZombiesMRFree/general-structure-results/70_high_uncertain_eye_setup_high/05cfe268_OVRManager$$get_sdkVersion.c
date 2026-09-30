/*
FUNCTION_NAME: OVRManager$$get_sdkVersion
ENTRY_POINT: 05cfe268
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


void OVRManager__get_sdkVersion(float param_1,float param_2,float param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x19;
  int unaff_w20;
  long *plVar18;
  uint *puVar19;
  uint uVar20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float unaff_s8;
  float unaff_s9;
  float fVar28;
  ulong unaff_d10;
  float fVar29;
  float fVar30;
  float fVar31;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  ulong in_stack_00000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  undefined4 in_stack_00000078;
  
  uVar7 = in_stack_00000078;
  puVar5 = PTR_DAT_06fb4a78;
  fVar31 = fStack0000000000000074;
  fVar30 = fStack0000000000000070;
  uVar6 = in_stack_00000068._4_4_;
  in_stack_00000030 = in_stack_00000030 >> 0x20;
  lVar11 = *(long *)PTR_DAT_06fb4a78;
  fStack0000000000000028 = param_1;
  fStack000000000000002c = param_2;
  if (unaff_w20 != 1) {
    fStack0000000000000028 = -param_1;
    fStack000000000000002c = -param_2;
    param_3 = -param_3;
  }
                    /* try { // try from 05cfe29c to 05dfe2a3 has its CatchHandler @ 05cfe7c0 */
  if (*(int *)(lVar11 + 0xe0) == 0) {
                    /* try { // try from 05cfe2a8 to 05dfe2af has its CatchHandler @ 05cfe828 */
    thunk_FUN_02fdcff0();
    lVar11 = *(long *)puVar5;
  }
  lVar13 = *(long *)(lVar11 + 0xb8);
                    /* try { // try from 05cfe2b4 to 05dfe2bb has its CatchHandler @ 05cfe7e4 */
  bVar8 = unaff_w20 != 1;
  lVar11 = 0x2c;
  if (bVar8) {
    lVar11 = 0x74;
  }
  lVar1 = 0x28;
  if (bVar8) {
    lVar1 = 0x70;
  }
  lVar2 = 0x24;
  if (bVar8) {
    lVar2 = 0x6c;
  }
  fStack000000000000001c =
       (float)FUN_068ed2ec(uVar6,fVar30,fVar31,uVar7,*(undefined4 *)(lVar13 + lVar2),
                           *(undefined4 *)(lVar13 + lVar1),*(undefined4 *)(lVar13 + lVar11),0);
  uVar6 = in_stack_00000078;
  fStack000000000000000c = fStack0000000000000070;
  lVar11 = *(long *)puVar5;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar11 = *(long *)puVar5;
  }
  lVar13 = *(long *)(lVar11 + 0xb8);
  bVar8 = unaff_w20 != 1;
  lVar11 = 0x14;
  if (bVar8) {
    lVar11 = 0x5c;
  }
  lVar1 = 0x10;
  if (bVar8) {
    lVar1 = 0x58;
  }
  lVar2 = 0xc;
  if (bVar8) {
    lVar2 = 0x54;
  }
  fStack0000000000000014 = fStack0000000000000074;
  fVar21 = (float)FUN_068ed2ec(in_stack_00000068._4_4_,fStack000000000000000c,fStack0000000000000074
                               ,uVar6,*(undefined4 *)(lVar13 + lVar2),
                               *(undefined4 *)(lVar13 + lVar1),*(undefined4 *)(lVar13 + lVar11),0);
  if (DAT_0738eca3 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6e7c0);
    DAT_0738eca3 = '\x01';
  }
  puVar5 = PTR_DAT_06f6e7c0;
  fVar22 = fStack0000000000000024 * fStack0000000000000024 +
           fStack0000000000000038 * fStack0000000000000038 +
           fStack0000000000000020 * fStack0000000000000020;
  fVar28 = (float)unaff_d10;
  uVar16 = unaff_d10;
  fVar29 = unaff_s9;
  fVar25 = unaff_s8;
  if (**(float **)(*(long *)PTR_DAT_06f6e7c0 + 0xb8) <= fVar22) {
    fVar25 = fStack0000000000000024 * unaff_s8 +
             fStack0000000000000038 * unaff_s9 + fStack0000000000000020 * fVar28;
    fVar29 = unaff_s9 - (fStack0000000000000038 * fVar25) / fVar22;
    uVar16 = (ulong)(uint)(fVar28 - (fStack0000000000000020 * fVar25) / fVar22);
    fVar25 = unaff_s8 - (fStack0000000000000024 * fVar25) / fVar22;
  }
  if (*(char *)(unaff_x23 + 0x668) == '\0') {
    FUN_02fe925c(PTR_DAT_06f6d508);
    *(undefined1 *)(unaff_x23 + 0x668) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  fStack0000000000000020 = (float)uVar16;
  fVar22 = SQRT(fVar25 * fVar25 + fVar29 * fVar29 + fStack0000000000000020 * fStack0000000000000020)
  ;
  if (fVar22 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 0x669) == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      *(undefined1 *)(unaff_x24 + 0x669) = 1;
    }
    pfVar14 = *(float **)(*unaff_x22 + 0xb8);
    fStack0000000000000024 = *pfVar14;
    fStack0000000000000020 = pfVar14[1];
    fVar25 = pfVar14[2];
  }
  else {
    fStack0000000000000024 = fVar29 / fVar22;
    fStack0000000000000020 = fStack0000000000000020 / fVar22;
    fVar25 = fVar25 / fVar22;
  }
  fVar29 = fStack000000000000001c;
  if (DAT_0738eca3 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6e7c0);
    DAT_0738eca3 = '\x01';
  }
  fVar22 = unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9 + fVar28 * fVar28;
  if (**(float **)(*(long *)puVar5 + 0xb8) <= fVar22) {
    fVar26 = unaff_s8 * fVar31 + unaff_s9 * fVar29 + fVar28 * fVar30;
    fVar29 = fVar29 - (unaff_s9 * fVar26) / fVar22;
    fVar30 = fVar30 - (fVar28 * fVar26) / fVar22;
    fVar31 = fVar31 - (unaff_s8 * fVar26) / fVar22;
  }
  if (*(char *)(unaff_x23 + 0x668) == '\0') {
    FUN_02fe925c(PTR_DAT_06f6d508);
    *(undefined1 *)(unaff_x23 + 0x668) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  fVar22 = SQRT(fVar31 * fVar31 + fVar29 * fVar29 + fVar30 * fVar30);
  if (fVar22 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 0x669) == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      *(undefined1 *)(unaff_x24 + 0x669) = 1;
    }
    pfVar14 = *(float **)(*unaff_x22 + 0xb8);
    fVar29 = *pfVar14;
    fVar30 = pfVar14[1];
    fVar31 = pfVar14[2];
  }
  else {
    fVar29 = fVar29 / fVar22;
    fVar30 = fVar30 / fVar22;
    fVar31 = fVar31 / fVar22;
  }
  uVar16 = (ulong)(uint)fStack0000000000000028;
  fStack0000000000000004 = fVar28;
  fVar22 = (float)FUN_031e4528(fVar29,fVar30,fVar31,uVar16,fStack000000000000002c,param_3,0);
  plVar18 = *(long **)(unaff_x19 + 0x28);
  if (plVar18 != (long *)0x0) {
    lVar11 = *plVar18;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x21) {
          puVar12 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_05cfe63c;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar12 = (undefined8 *)FUN_02feb5b8(plVar18,*unaff_x21,0);
LAB_05cfe63c:
    iVar10 = (*(code *)*puVar12)(plVar18,puVar12[1]);
    fVar28 = -fVar22;
    if (iVar10 != 1) {
      fVar28 = fVar22;
    }
    uVar27 = 0xc28c0000;
    uVar15 = (ulong)(uint)(fVar28 + 360.0);
    fVar22 = fVar28 + 360.0;
    if (-70.0 <= fVar28) {
      fVar22 = fVar28;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar22;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar23 = FUN_069042b4(*(long *)(unaff_x19 + 0x30),0);
      uVar24 = FUN_068ed124(0);
      in_stack_00000040 = 0;
      uStack0000000000000048 = 0;
      uStack000000000000004c = 0;
      in_stack_00000058 = 0;
      uStack0000000000000050 = 0;
      uStack0000000000000054 = 0;
      FUN_06902890(uVar23,uVar15,uVar27,uVar24,unaff_d10,in_stack_00000030,uVar16,&stack0x00000040,0
                  );
      plVar18 = *(long **)(unaff_x19 + 0x48);
      *(float *)(unaff_x19 + 0x80) = fVar29;
      *(float *)(unaff_x19 + 0x84) = fVar30;
      *(float *)(unaff_x19 + 0x88) = fVar31;
      *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
      *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
      puVar5 = PTR_DAT_06f9acf0;
      if (plVar18 != (long *)0x0) {
        lVar11 = *plVar18;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_06f9acf0) {
              puVar12 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_05cfe75c;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)FUN_02feb5b8(plVar18,*(long *)PTR_DAT_06f9acf0,0);
LAB_05cfe75c:
        uVar16 = (*(code *)*puVar12)(plVar18,puVar12[1]);
        if ((uVar16 & 1) == 0) {
          uVar20 = 0;
        }
        else {
          uVar20 = *(byte *)(unaff_x19 + 0x71) ^ 1;
        }
        plVar18 = *(long **)(unaff_x19 + 0x48);
        if (plVar18 != (long *)0x0) {
          lVar13 = *plVar18;
          lVar11 = *(long *)puVar5;
          uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
          fStack0000000000000020 = fStack000000000000000c * fStack0000000000000020;
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar11) {
                puVar12 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_05cfe808;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar12 = (undefined8 *)FUN_02feb5b8(plVar18,lVar11,0);
LAB_05cfe808:
          bVar9 = (*(code *)*puVar12)(plVar18,puVar12[1]);
          puVar19 = (uint *)(unaff_x19 + 0x74);
          *(byte *)(unaff_x19 + 0x71) = bVar9 & 1;
          if ((uVar20 & 0.5 < (fStack0000000000000014 * fVar25 +
                              fVar21 * fStack0000000000000024 + fStack0000000000000020) * 0.5 + 0.5
              & *puVar19 >> 0x1f) == 0) {
            if ((int)*puVar19 < 0) {
              return;
            }
            plVar18 = *(long **)(unaff_x19 + 0x58);
            if (plVar18 != (long *)0x0) {
              lVar13 = *plVar18;
              lVar11 = *(long *)puVar5;
              uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == lVar11) {
                    puVar12 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_05cfe8cc;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              puVar12 = (undefined8 *)FUN_02feb5b8(plVar18,lVar11,0);
LAB_05cfe8cc:
              uVar16 = (*(code *)*puVar12)(plVar18,puVar12[1]);
              if ((uVar16 & 1) != 0) {
                FUN_05cfd9c4();
                *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
                *(undefined1 *)(unaff_x19 + 0xb0) = 0;
                return;
              }
              uVar20 = *puVar19;
              if ((int)uVar20 < 0) {
                return;
              }
              if (*(char *)(unaff_x19 + 0xb0) != '\0') {
                return;
              }
              lVar11 = *(long *)(unaff_x19 + 0x38);
              if (lVar11 != 0) {
                uVar3 = *(uint *)(lVar11 + 0x18);
                if (uVar3 <= uVar20) goto LAB_05cfe9c0;
                lVar13 = *(long *)(lVar11 + (ulong)uVar20 * 8 + 0x20);
                if (lVar13 != 0) {
                  if (*(float *)(lVar13 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
                    if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar13 + 0x14)) {
                      return;
                    }
                    uVar4 = uVar3 - 1;
                    if ((int)(uVar20 + 1) <= (int)uVar4) {
                      uVar4 = uVar20 + 1;
                    }
                    *puVar19 = uVar4;
                    if (uVar3 <= uVar4) goto LAB_05cfe9c0;
                    uVar16 = (ulong)(int)uVar4;
                  }
                  else {
                    if ((int)uVar20 < 2) {
                      uVar20 = 1;
                    }
                    uVar20 = uVar20 - 1;
                    *puVar19 = uVar20;
                    if (uVar3 <= uVar20) {
LAB_05cfe9c0:
                    /* WARNING: Subroutine does not return */
                      FUN_02fe94f0();
                    }
                    uVar16 = (ulong)uVar20;
                  }
                  if (*(long *)(lVar11 + uVar16 * 8 + 0x20) != 0) goto LAB_05cfe85c;
                }
              }
            }
          }
          else {
            lVar11 = FUN_05cfe9c4(*(undefined4 *)(unaff_x19 + 0x7c));
            if (lVar11 != 0) {
              if (*(char *)(lVar11 + 0x18) == '\0') {
                *puVar19 = 0xffffffff;
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


