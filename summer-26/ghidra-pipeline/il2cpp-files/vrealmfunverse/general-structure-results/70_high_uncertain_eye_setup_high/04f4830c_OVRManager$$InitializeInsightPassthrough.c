/*
FUNCTION_NAME: OVRManager$$InitializeInsightPassthrough
ENTRY_POINT: 04f4830c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__InitializeInsightPassthrough
               (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined4 param_4,
               int param_5)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  undefined *puVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *plVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  float unaff_s11;
  float unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined8 in_stack_00000030;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  uVar7 = 0xc28c0000;
  if (param_5 != 1) {
    param_1 = unaff_s11;
  }
  fVar17 = param_1 + 360.0;
  fVar3 = fVar17;
  if (-70.0 <= param_1) {
    fVar3 = param_1;
  }
  *(float *)(unaff_x19 + 0x7c) = fVar3;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    uVar15 = FUN_05c9bf94(*(long *)(unaff_x19 + 0x30),0);
    uVar16 = FUN_05c7bb74(in_stack_00000030._4_4_,unaff_s9,0);
    in_stack_00000040 = 0;
    uStack0000000000000048 = 0;
    uStack000000000000004c = 0;
    in_stack_00000058 = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000054 = 0;
    FUN_05c99d80(uVar15,fVar17,uVar7,uVar16,unaff_s9,unaff_s10,param_4,&stack0x00000040,0);
    plVar12 = *(long **)(unaff_x19 + 0x48);
    *(undefined4 *)(unaff_x19 + 0x88) = unaff_s14;
    *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
    *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
    *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
    *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    *(undefined4 *)(unaff_x19 + 0x80) = uStack000000000000003c;
    *(undefined4 *)(unaff_x19 + 0x84) = unaff_s13;
    puVar4 = PTR_DAT_06322e08;
    if (plVar12 != (long *)0x0) {
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06322e08) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04f48424;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02b7654c(plVar12,*(long *)PTR_DAT_06322e08,0);
LAB_04f48424:
      uVar10 = (*(code *)*puVar6)(plVar12,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(byte *)(unaff_x19 + 0x71) ^ 1;
      }
      plVar12 = *(long **)(unaff_x19 + 0x48);
      if (plVar12 != (long *)0x0) {
        lVar9 = *plVar12;
        lVar8 = *(long *)puVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_04f484cc;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_02b7654c(plVar12,lVar8,0);
LAB_04f484cc:
        bVar5 = (*(code *)*puVar6)(plVar12,puVar6[1]);
        puVar13 = (uint *)(unaff_x19 + 0x74);
        *(byte *)(unaff_x19 + 0x71) = bVar5 & 1;
        if (((fStack0000000000000010 * fStack0000000000000020 +
             unaff_s12 * fStack0000000000000038 + fStack0000000000000014 * fStack0000000000000024) *
             0.5 + 0.5 <= 0.5) || ((uVar14 & *puVar13 >> 0x1f) == 0)) {
          if ((int)*puVar13 < 0) {
            return;
          }
          plVar12 = *(long **)(unaff_x19 + 0x58);
          if (plVar12 != (long *)0x0) {
            lVar9 = *plVar12;
            lVar8 = *(long *)puVar4;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar8) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_04f4858c;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar6 = (undefined8 *)FUN_02b7654c(plVar12,lVar8,0);
LAB_04f4858c:
            uVar10 = (*(code *)*puVar6)(plVar12,puVar6[1]);
            if ((uVar10 & 1) != 0) {
              FUN_04f47690();
              *(undefined1 *)(unaff_x19 + 0xb0) = 0;
              *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
              return;
            }
            uVar14 = *puVar13;
            if ((int)uVar14 < 0) {
              return;
            }
            if (*(char *)(unaff_x19 + 0xb0) != '\0') {
              return;
            }
            lVar8 = *(long *)(unaff_x19 + 0x38);
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar8 + 0x18);
              if (uVar1 <= uVar14) goto LAB_04f48680;
              lVar9 = *(long *)(lVar8 + (ulong)uVar14 * 8 + 0x20);
              if (lVar9 != 0) {
                if (*(float *)(lVar9 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
                  if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar9 + 0x14)) {
                    return;
                  }
                  uVar2 = uVar1 - 1;
                  if ((int)(uVar14 + 1) <= (int)uVar2) {
                    uVar2 = uVar14 + 1;
                  }
                  *puVar13 = uVar2;
                  if (uVar1 <= uVar2) goto LAB_04f48680;
                  uVar10 = (ulong)(int)uVar2;
                }
                else {
                  if ((int)uVar14 < 2) {
                    uVar14 = 1;
                  }
                  uVar14 = uVar14 - 1;
                  *puVar13 = uVar14;
                  if (uVar1 <= uVar14) {
LAB_04f48680:
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cacc();
                  }
                  uVar10 = (ulong)uVar14;
                }
                if (*(long *)(lVar8 + uVar10 * 8 + 0x20) != 0) goto LAB_04f4851c;
              }
            }
          }
        }
        else {
          lVar8 = FUN_04f48684(*(undefined4 *)(unaff_x19 + 0x7c));
          if (lVar8 != 0) {
            if (*(char *)(lVar8 + 0x18) == '\0') {
              *puVar13 = 0xffffffff;
              return;
            }
LAB_04f4851c:
            FUN_04f47690();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


