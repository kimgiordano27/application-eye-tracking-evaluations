/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 04f481f0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_19;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__InitPermissionRequest(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  int in_w8;
  undefined4 uVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
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
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar23;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000020;
  float fStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  if (in_w8 == 0) {
    FUN_02b3c81c(PTR_DAT_06312c90);
    *(undefined1 *)(unaff_x23 + 0xd9d) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  fVar22 = SQRT(unaff_s14 * unaff_s14 + unaff_s11 * unaff_s11 + unaff_s13 * unaff_s13);
  if (fVar22 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 0xd97) == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      *(undefined1 *)(unaff_x24 + 0xd97) = 1;
    }
    pfVar8 = *(float **)(*unaff_x22 + 0xb8);
    fVar16 = *pfVar8;
    fVar23 = pfVar8[1];
    fVar22 = pfVar8[2];
  }
  else {
    fVar16 = unaff_s11 / fVar22;
    fVar23 = unaff_s13 / fVar22;
    fVar22 = unaff_s14 / fVar22;
  }
  fVar17 = (float)FUN_02cdfa10(fVar16,fVar23,fVar22,uStack0000000000000028,uStack000000000000002c,
                               uStack0000000000000030,0);
  plVar13 = *(long **)(unaff_x19 + 0x28);
  if (plVar13 != (long *)0x0) {
    lVar9 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    fStack0000000000000024 = unaff_s12;
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x21) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_04f482f8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_02b7654c(plVar13,*unaff_x21,0);
LAB_04f482f8:
    iVar5 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    uVar7 = 0xc28c0000;
    fVar18 = -fVar17;
    if (iVar5 != 1) {
      fVar18 = fVar17;
    }
    fVar21 = fVar18 + 360.0;
    fVar17 = fVar21;
    if (-70.0 <= fVar18) {
      fVar17 = fVar18;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar17;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar19 = FUN_05c9bf94(*(long *)(unaff_x19 + 0x30),0);
      uVar20 = FUN_05c7bb74(uStack0000000000000034,unaff_s9,0);
      in_stack_00000040 = 0;
      uStack0000000000000048 = 0;
      uStack000000000000004c = 0;
      in_stack_00000058 = 0;
      uStack0000000000000050 = 0;
      uStack0000000000000054 = 0;
      FUN_05c99d80(uVar19,fVar21,uVar7,uVar20,unaff_s9,unaff_s10,uStack0000000000000028,
                   &stack0x00000040,0);
      plVar13 = *(long **)(unaff_x19 + 0x48);
      *(float *)(unaff_x19 + 0x88) = fVar22;
      *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
      *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
      *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      *(float *)(unaff_x19 + 0x80) = fVar16;
      *(float *)(unaff_x19 + 0x84) = fVar23;
      puVar3 = PTR_DAT_06322e08;
      if (plVar13 != (long *)0x0) {
        lVar9 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06322e08) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_04f48424;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_02b7654c(plVar13,*(long *)PTR_DAT_06322e08,0);
LAB_04f48424:
        uVar11 = (*(code *)*puVar6)(plVar13,puVar6[1]);
        if ((uVar11 & 1) == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(byte *)(unaff_x19 + 0x71) ^ 1;
        }
        plVar13 = *(long **)(unaff_x19 + 0x48);
        if (plVar13 != (long *)0x0) {
          lVar10 = *plVar13;
          lVar9 = *(long *)puVar3;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar9) {
                puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_04f484cc;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_02b7654c(plVar13,lVar9,0);
LAB_04f484cc:
          bVar4 = (*(code *)*puVar6)(plVar13,puVar6[1]);
          puVar14 = (uint *)(unaff_x19 + 0x74);
          *(byte *)(unaff_x19 + 0x71) = bVar4 & 1;
          if (((fStack0000000000000010 * in_stack_00000020 +
               unaff_s15 * fStack0000000000000038 + fStack0000000000000014 * fStack0000000000000024)
               * 0.5 + 0.5 <= 0.5) || ((uVar15 & *puVar14 >> 0x1f) == 0)) {
            if ((int)*puVar14 < 0) {
              return;
            }
            plVar13 = *(long **)(unaff_x19 + 0x58);
            if (plVar13 != (long *)0x0) {
              lVar10 = *plVar13;
              lVar9 = *(long *)puVar3;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == lVar9) {
                    puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_04f4858c;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar6 = (undefined8 *)FUN_02b7654c(plVar13,lVar9,0);
LAB_04f4858c:
              uVar11 = (*(code *)*puVar6)(plVar13,puVar6[1]);
              if ((uVar11 & 1) != 0) {
                FUN_04f47690();
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
                if (uVar1 <= uVar15) goto LAB_04f48680;
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
                    if (uVar1 <= uVar2) goto LAB_04f48680;
                    uVar11 = (ulong)(int)uVar2;
                  }
                  else {
                    if ((int)uVar15 < 2) {
                      uVar15 = 1;
                    }
                    uVar15 = uVar15 - 1;
                    *puVar14 = uVar15;
                    if (uVar1 <= uVar15) {
LAB_04f48680:
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cacc();
                    }
                    uVar11 = (ulong)uVar15;
                  }
                  if (*(long *)(lVar9 + uVar11 * 8 + 0x20) != 0) goto LAB_04f4851c;
                }
              }
            }
          }
          else {
            lVar9 = FUN_04f48684(*(undefined4 *)(unaff_x19 + 0x7c));
            if (lVar9 != 0) {
              if (*(char *)(lVar9 + 0x18) == '\0') {
                *puVar14 = 0xffffffff;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


