/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$_ovrp_GetAppLatencyTimings
ENTRY_POINT: 076e0850
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0___ovrp_GetAppLatencyTimings(code *param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *plVar13;
  uint *puVar14;
  uint uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 in_s3;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  float unaff_s11;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  float unaff_s15;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  iVar6 = (*param_1)();
  uVar8 = 0xc28c0000;
  fVar16 = -unaff_s11;
  if (iVar6 != 1) {
    fVar16 = unaff_s11;
  }
  fVar19 = fVar16 + 360.0;
  fVar3 = fVar19;
  if (-70.0 <= fVar16) {
    fVar3 = fVar16;
  }
  *(float *)(unaff_x19 + 0x7c) = fVar3;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    uVar17 = FUN_08598884(*(long *)(unaff_x19 + 0x30),0);
    uVar18 = FUN_08575dd0(unaff_s9,unaff_s10,uStack000000000000003c,0);
    in_stack_00000040 = 0;
    uStack0000000000000048 = 0;
    uStack000000000000004c = 0;
    in_stack_00000058 = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000054 = 0;
    FUN_08596724(uVar17,fVar19,uVar8,uVar18,unaff_s10,uStack000000000000003c,in_s3,&stack0x00000040,
                 0);
    plVar13 = *(long **)(unaff_x19 + 0x48);
    *(undefined4 *)(unaff_x19 + 0x80) = unaff_s13;
    *(undefined4 *)(unaff_x19 + 0x84) = unaff_s14;
    *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
    *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
    *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
    *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    *(undefined4 *)(unaff_x19 + 0x88) = uStack0000000000000038;
    puVar4 = PTR_DAT_08f8e6f0;
    if (plVar13 != (long *)0x0) {
      lVar9 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08f8e6f0) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_076e0974;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_0406ae20(plVar13,*(long *)PTR_DAT_08f8e6f0,0);
LAB_076e0974:
      uVar11 = (*(code *)*puVar7)(plVar13,puVar7[1]);
      if ((uVar11 & 1) == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(byte *)(unaff_x19 + 0x71) ^ 1;
      }
      plVar13 = *(long **)(unaff_x19 + 0x48);
      if (plVar13 != (long *)0x0) {
        lVar10 = *plVar13;
        lVar9 = *(long *)puVar4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_076e0a18;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_0406ae20(plVar13,lVar9,0);
LAB_076e0a18:
        bVar5 = (*(code *)*puVar7)(plVar13,puVar7[1]);
        puVar14 = (uint *)(unaff_x19 + 0x74);
        *(byte *)(unaff_x19 + 0x71) = bVar5 & 1;
        if (((fStack0000000000000014 * fStack0000000000000010 +
             fStack000000000000001c * unaff_s15 + fStack0000000000000018 * in_stack_00000028._4_4_)
             * 0.5 + 0.5 <= 0.5) || ((uVar15 & *puVar14 >> 0x1f) == 0)) {
          if ((int)*puVar14 < 0) {
            return;
          }
          plVar13 = *(long **)(unaff_x19 + 0x58);
          if (plVar13 != (long *)0x0) {
            lVar10 = *plVar13;
            lVar9 = *(long *)puVar4;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar9) {
                  puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_076e0ad8;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_0406ae20(plVar13,lVar9,0);
LAB_076e0ad8:
            uVar11 = (*(code *)*puVar7)(plVar13,puVar7[1]);
            if ((uVar11 & 1) != 0) {
              FUN_076dfc50();
              *(undefined1 *)(unaff_x19 + 0xb0) = 0;
              *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
              return;
            }
            uVar15 = *puVar14;
            if ((int)uVar15 < 0) {
              return;
            }
            if (*(char *)(unaff_x19 + 0xb0) != '\0') {
              return;
            }
            lVar9 = *(long *)(unaff_x19 + 0x38);
            if (lVar9 != 0) {
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 <= uVar15) goto LAB_076e0bcc;
              lVar10 = *(long *)(lVar9 + (ulong)uVar15 * 8 + 0x20);
              if (lVar10 != 0) {
                if (*(float *)(lVar10 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
                  if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar10 + 0x14)) {
                    return;
                  }
                  uVar2 = uVar1 - 1;
                  if ((int)(uVar15 + 1) <= (int)uVar2) {
                    uVar2 = uVar15 + 1;
                  }
                  *puVar14 = uVar2;
                  if (uVar1 <= uVar2) goto LAB_076e0bcc;
                  uVar11 = (ulong)(int)uVar2;
                }
                else {
                  if ((int)uVar15 < 2) {
                    uVar15 = 1;
                  }
                  uVar15 = uVar15 - 1;
                  *puVar14 = uVar15;
                  if (uVar1 <= uVar15) {
LAB_076e0bcc:
                    /* WARNING: Subroutine does not return */
                    FUN_04031894();
                  }
                  uVar11 = (ulong)uVar15;
                }
                if (*(long *)(lVar9 + uVar11 * 8 + 0x20) != 0) goto LAB_076e0a68;
              }
            }
          }
        }
        else {
          lVar9 = FUN_076e0bd0(*(undefined4 *)(unaff_x19 + 0x7c));
          if (lVar9 != 0) {
            if (*(char *)(lVar9 + 0x18) == '\0') {
              *puVar14 = 0xffffffff;
              return;
            }
LAB_076e0a68:
            FUN_076dfc50();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


