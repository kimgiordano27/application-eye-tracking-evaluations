/*
FUNCTION_NAME: OVRManager$$IsUnityAlphaOrBetaVersion
ENTRY_POINT: 05cfe650
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__IsUnityAlphaOrBetaVersion
               (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  undefined *puVar4;
  bool in_ZR;
  byte bVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *plVar11;
  uint *puVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 unaff_d10;
  float unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000020;
  float fStack0000000000000024;
  ulong in_stack_00000030;
  float in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  in_stack_00000030 = in_stack_00000030 >> 0x20;
  if (!in_ZR) {
    param_1 = unaff_s11;
  }
  uVar16 = 0xc28c0000;
  uVar9 = (ulong)(uint)(param_1 + 360.0);
  fVar3 = param_1 + 360.0;
  if (-70.0 <= param_1) {
    fVar3 = param_1;
  }
  *(float *)(unaff_x19 + 0x7c) = fVar3;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    uVar14 = FUN_069042b4(*(long *)(unaff_x19 + 0x30),0);
    uVar15 = FUN_068ed124(0);
    in_stack_00000040 = 0;
    uStack0000000000000048 = 0;
    uStack000000000000004c = 0;
    in_stack_00000058 = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000054 = 0;
    FUN_06902890(uVar14,uVar9,uVar16,uVar15,unaff_d10,in_stack_00000030,param_4,&stack0x00000040,0);
    plVar11 = *(long **)(unaff_x19 + 0x48);
    *(undefined4 *)(unaff_x19 + 0x80) = unaff_s12;
    *(undefined4 *)(unaff_x19 + 0x84) = unaff_s13;
    *(undefined4 *)(unaff_x19 + 0x88) = unaff_s14;
    *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
    *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
    *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
    puVar4 = PTR_DAT_06f9acf0;
    if (plVar11 != (long *)0x0) {
      lVar7 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
                    /* try { // try from 05cfe730 to 05dfe733 has its CatchHandler @ 05cfe868 */
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06f9acf0) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05cfe75c;
          }
                    /* try { // try from 05cfe734 to 05dfe737 has its CatchHandler @ 05cfe85c */
          uVar9 = uVar9 - 1;
                    /* try { // try from 05cfe738 to 05dfe73b has its CatchHandler @ 05cfe858 */
          piVar10 = piVar10 + 4;
                    /* try { // try from 05cfe73c to 05dfe73f has its CatchHandler @ 05cfe854 */
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_02feb5b8(plVar11,*(long *)PTR_DAT_06f9acf0,0);
LAB_05cfe75c:
      uVar9 = (*(code *)*puVar6)(plVar11,puVar6[1]);
      if ((uVar9 & 1) == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(byte *)(unaff_x19 + 0x71) ^ 1;
      }
      plVar11 = *(long **)(unaff_x19 + 0x48);
      if (plVar11 != (long *)0x0) {
        lVar8 = *plVar11;
        lVar7 = *(long *)puVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_05cfe808;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_02feb5b8(plVar11,lVar7,0);
LAB_05cfe808:
        bVar5 = (*(code *)*puVar6)(plVar11,puVar6[1]);
        puVar12 = (uint *)(unaff_x19 + 0x74);
        *(byte *)(unaff_x19 + 0x71) = bVar5 & 1;
        if ((uVar13 & 0.5 < (fStack0000000000000014 * in_stack_00000038 +
                            fStack0000000000000010 * fStack0000000000000024 +
                            in_stack_00000008._4_4_ * fStack0000000000000020) * 0.5 + 0.5 &
            *puVar12 >> 0x1f) == 0) {
          if ((int)*puVar12 < 0) {
            return;
          }
          plVar11 = *(long **)(unaff_x19 + 0x58);
          if (plVar11 != (long *)0x0) {
            lVar8 = *plVar11;
            lVar7 = *(long *)puVar4;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == lVar7) {
                  puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_05cfe8cc;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)FUN_02feb5b8(plVar11,lVar7,0);
LAB_05cfe8cc:
            uVar9 = (*(code *)*puVar6)(plVar11,puVar6[1]);
            if ((uVar9 & 1) != 0) {
              FUN_05cfd9c4();
              *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
              *(undefined1 *)(unaff_x19 + 0xb0) = 0;
              return;
            }
            uVar13 = *puVar12;
            if ((int)uVar13 < 0) {
              return;
            }
            if (*(char *)(unaff_x19 + 0xb0) != '\0') {
              return;
            }
            lVar7 = *(long *)(unaff_x19 + 0x38);
            if (lVar7 != 0) {
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (uVar1 <= uVar13) goto LAB_05cfe9c0;
              lVar8 = *(long *)(lVar7 + (ulong)uVar13 * 8 + 0x20);
              if (lVar8 != 0) {
                if (*(float *)(lVar8 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
                  if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar8 + 0x14)) {
                    return;
                  }
                  uVar2 = uVar1 - 1;
                  if ((int)(uVar13 + 1) <= (int)uVar2) {
                    uVar2 = uVar13 + 1;
                  }
                  *puVar12 = uVar2;
                  if (uVar1 <= uVar2) goto LAB_05cfe9c0;
                  uVar9 = (ulong)(int)uVar2;
                }
                else {
                  if ((int)uVar13 < 2) {
                    uVar13 = 1;
                  }
                  uVar13 = uVar13 - 1;
                  *puVar12 = uVar13;
                  if (uVar1 <= uVar13) {
LAB_05cfe9c0:
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94f0();
                  }
                  uVar9 = (ulong)uVar13;
                }
                if (*(long *)(lVar7 + uVar9 * 8 + 0x20) != 0) goto LAB_05cfe85c;
              }
            }
          }
        }
        else {
          lVar7 = FUN_05cfe9c4(*(undefined4 *)(unaff_x19 + 0x7c));
          if (lVar7 != 0) {
            if (*(char *)(lVar7 + 0x18) == '\0') {
              *puVar12 = 0xffffffff;
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
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


