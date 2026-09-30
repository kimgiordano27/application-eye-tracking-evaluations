/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppShouldQuit
ENTRY_POINT: 076e0788
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetAppShouldQuit(float param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
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
  long *unaff_x21;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  float fStack000000000000002c;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  fVar15 = (float)FUN_0419f7f0(unaff_s12,unaff_s13,unaff_s14 / param_1,uStack0000000000000020,
                               uStack0000000000000024,uStack0000000000000028,0);
  plVar12 = *(long **)(unaff_x19 + 0x28);
  if (plVar12 != (long *)0x0) {
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x21) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_076e084c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_0406ae20(plVar12,*unaff_x21,0);
LAB_076e084c:
    iVar5 = (*(code *)*puVar6)(plVar12,puVar6[1]);
    uVar7 = 0xc28c0000;
    fVar16 = -fVar15;
    if (iVar5 != 1) {
      fVar16 = fVar15;
    }
    fVar19 = fVar16 + 360.0;
    fVar15 = fVar19;
    if (-70.0 <= fVar16) {
      fVar15 = fVar16;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar15;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar17 = FUN_08598884(*(long *)(unaff_x19 + 0x30),0);
      uVar18 = FUN_08575dd0(unaff_s9,unaff_s10,in_stack_00000038._4_4_,0);
      in_stack_00000040 = 0;
      uStack0000000000000048 = 0;
      uStack000000000000004c = 0;
      in_stack_00000058 = 0;
      uStack0000000000000050 = 0;
      uStack0000000000000054 = 0;
      FUN_08596724(uVar17,fVar19,uVar7,uVar18,unaff_s10,in_stack_00000038._4_4_,
                   uStack0000000000000020,&stack0x00000040,0);
      plVar12 = *(long **)(unaff_x19 + 0x48);
      *(undefined4 *)(unaff_x19 + 0x80) = unaff_s12;
      *(undefined4 *)(unaff_x19 + 0x84) = unaff_s13;
      *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
      *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
      *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      *(float *)(unaff_x19 + 0x88) = unaff_s14 / param_1;
      puVar3 = PTR_DAT_08f8e6f0;
      if (plVar12 != (long *)0x0) {
        lVar8 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f8e6f0) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_076e0974;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_0406ae20(plVar12,*(long *)PTR_DAT_08f8e6f0,0);
LAB_076e0974:
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
          lVar8 = *(long *)puVar3;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar8) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_076e0a18;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_0406ae20(plVar12,lVar8,0);
LAB_076e0a18:
          bVar4 = (*(code *)*puVar6)(plVar12,puVar6[1]);
          puVar13 = (uint *)(unaff_x19 + 0x74);
          *(byte *)(unaff_x19 + 0x71) = bVar4 & 1;
          if (((fStack0000000000000014 * fStack0000000000000010 +
               fStack000000000000001c * unaff_s15 + fStack0000000000000018 * fStack000000000000002c)
               * 0.5 + 0.5 <= 0.5) || ((uVar14 & *puVar13 >> 0x1f) == 0)) {
            if ((int)*puVar13 < 0) {
              return;
            }
            plVar12 = *(long **)(unaff_x19 + 0x58);
            if (plVar12 != (long *)0x0) {
              lVar9 = *plVar12;
              lVar8 = *(long *)puVar3;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == lVar8) {
                    puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_076e0ad8;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar6 = (undefined8 *)FUN_0406ae20(plVar12,lVar8,0);
LAB_076e0ad8:
              uVar10 = (*(code *)*puVar6)(plVar12,puVar6[1]);
              if ((uVar10 & 1) != 0) {
                FUN_076dfc50();
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
                if (uVar1 <= uVar14) goto LAB_076e0bcc;
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
                    if (uVar1 <= uVar2) goto LAB_076e0bcc;
                    uVar10 = (ulong)(int)uVar2;
                  }
                  else {
                    if ((int)uVar14 < 2) {
                      uVar14 = 1;
                    }
                    uVar14 = uVar14 - 1;
                    *puVar13 = uVar14;
                    if (uVar1 <= uVar14) {
LAB_076e0bcc:
                    /* WARNING: Subroutine does not return */
                      FUN_04031894();
                    }
                    uVar10 = (ulong)uVar14;
                  }
                  if (*(long *)(lVar8 + uVar10 * 8 + 0x20) != 0) goto LAB_076e0a68;
                }
              }
            }
          }
          else {
            lVar8 = FUN_076e0bd0(*(undefined4 *)(unaff_x19 + 0x7c));
            if (lVar8 != 0) {
              if (*(char *)(lVar8 + 0x18) == '\0') {
                *puVar13 = 0xffffffff;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


