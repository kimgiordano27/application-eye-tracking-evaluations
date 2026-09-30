/*
FUNCTION_NAME: OVRPlugin$$RequestSceneCapture
ENTRY_POINT: 03162660
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestSceneCapture(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 in_w8;
  undefined4 *puVar7;
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
  long unaff_x24;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  ulong in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  *(undefined1 *)(unaff_x24 + 599) = in_w8;
  puVar7 = *(undefined4 **)(*unaff_x22 + 0xb8);
  uVar21 = *puVar7;
  uVar23 = puVar7[1];
  uVar22 = puVar7[2];
  uVar11 = in_stack_00000028 & 0xffffffff;
  uStack0000000000000004 = (undefined4)unaff_d9;
  uStack0000000000000008 = (undefined4)unaff_d8;
  fVar16 = (float)FUN_01bf693c(uVar21,uVar23,uVar22,uVar11,in_stack_00000028._4_4_,
                               uStack0000000000000034,0);
  plVar13 = *(long **)(unaff_x19 + 0x28);
  if (plVar13 != (long *)0x0) {
    lVar8 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x21) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_031626f0;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ae9f78(plVar13,*unaff_x21,0);
LAB_031626f0:
    iVar5 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    fVar17 = -fVar16;
    if (iVar5 != 1) {
      fVar17 = fVar16;
    }
    uVar20 = 0xc28c0000;
    uVar10 = (ulong)(uint)(fVar17 + 360.0);
    fVar16 = fVar17 + 360.0;
    if (-70.0 <= fVar17) {
      fVar16 = fVar17;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar16;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar18 = FUN_03928d34(*(long *)(unaff_x19 + 0x30),0);
                    /* try { // try from 0316273c to 032628ab has its CatchHandler @ 0316273c
                       catch() { ... } // from try @ 0316273c with catch @ 0316273c
                       catch() { ... } // from try @ 031628b4 with catch @ 0316273c
                       catch() { ... } // from try @ 031628f0 with catch @ 0316273c
                       catch() { ... } // from try @ 03162b5c with catch @ 0316273c
                       catch() { ... } // from try @ 03162b8c with catch @ 0316273c
                       catch() { ... } // from try @ 03162bc0 with catch @ 0316273c
                       catch() { ... } // from try @ 03162bec with catch @ 0316273c
                       catch() { ... } // from try @ 03162c38 with catch @ 0316273c */
      uVar19 = FUN_039148b4(uStack0000000000000030,0);
      in_stack_00000040 = 0;
      uStack0000000000000048 = 0;
      uStack000000000000004c = 0;
      in_stack_00000058 = 0;
      uStack0000000000000050 = 0;
      uStack0000000000000054 = 0;
      FUN_03927140(uVar18,uVar10,uVar20,uVar19,unaff_d9,unaff_d8,uVar11,&stack0x00000040,0);
      plVar13 = *(long **)(unaff_x19 + 0x48);
      *(undefined4 *)(unaff_x19 + 0x80) = uVar21;
      *(undefined4 *)(unaff_x19 + 0x84) = uVar23;
      *(undefined4 *)(unaff_x19 + 0x88) = uVar22;
      *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
      *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
      puVar3 = StringLiteral_3771;
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_3771) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03162810;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ae9f78(plVar13,*(long *)StringLiteral_3771,0);
LAB_03162810:
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
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar8) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_031628b8;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ae9f78(plVar13,lVar8,0);
LAB_031628b8:
          bVar4 = (*(code *)*puVar6)(plVar13,puVar6[1]);
          puVar14 = (uint *)(unaff_x19 + 0x74);
          *(byte *)(unaff_x19 + 0x71) = bVar4 & 1;
          if ((uVar15 & 0.5 < (fStack0000000000000014 * fStack0000000000000010 +
                              fStack000000000000001c * fStack0000000000000024 +
                              fStack0000000000000018 * fStack0000000000000020) * 0.5 + 0.5 &
              *puVar14 >> 0x1f) == 0) {
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
                    goto FUN_03162978;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar6 = (undefined8 *)FUN_01ae9f78(plVar13,lVar8,0);
FUN_03162978:
              uVar11 = (*(code *)*puVar6)(plVar13,puVar6[1]);
              if ((uVar11 & 1) != 0) {
                *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
                goto LAB_03162998;
              }
              lVar8 = *(long *)(unaff_x19 + 0x38);
              if (lVar8 != 0) {
                uVar1 = *(uint *)(unaff_x19 + 0x74);
                uVar15 = *(uint *)(lVar8 + 0x18);
                if (uVar15 <= uVar1) goto LAB_03162a58;
                lVar9 = *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                if (lVar9 != 0) {
                  if (*(float *)(lVar9 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
                    if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar9 + 0x14)) {
                      return;
                    }
                    uVar2 = uVar15 - 1;
                    if ((int)(uVar1 + 1) <= (int)uVar2) {
                      uVar2 = uVar1 + 1;
                    }
                    *puVar14 = uVar2;
                    if (uVar15 <= uVar2) goto LAB_03162a58;
                    uVar11 = (ulong)(int)uVar2;
                  }
                  else {
                    uVar1 = uVar1 - 1 & ((int)(uVar1 - 1) >> 0x1f ^ 0xffffffffU);
                    *puVar14 = uVar1;
                    if (uVar15 <= uVar1) {
LAB_03162a58:
                    /* WARNING: Subroutine does not return */
                      FUN_01b48180();
                    }
                    uVar11 = (ulong)uVar1;
                  }
                  if (*(long *)(lVar8 + uVar11 * 8 + 0x20) != 0) goto LAB_03162998;
                }
              }
            }
          }
          else {
            lVar8 = FUN_03162a5c(*(undefined4 *)(unaff_x19 + 0x7c));
            if (lVar8 != 0) {
              if (*(char *)(lVar8 + 0x18) == '\0') {
                *puVar14 = 0xffffffff;
                return;
              }
LAB_03162998:
              FUN_03161b4c();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


