/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$SetPostValueState
ENTRY_POINT: 07094620
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


bool Newtonsoft_Json_JsonReader__SetPostValueState(ulong param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  short sVar8;
  short sVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  undefined8 unaff_x19;
  int unaff_w20;
  long unaff_x21;
  uint unaff_w22;
  uint uVar18;
  long unaff_x24;
  uint unaff_w25;
  undefined8 unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  
code_r0x07094620:
  sVar8 = FUN_0706b3cc(param_1,param_2);
  sVar9 = FUN_0706b3cc(*(undefined4 *)(unaff_x29 + -0x94),0);
  if (sVar8 != sVar9) goto Newtonsoft_Json_JsonReader__ValidateEnd;
LAB_070945d8:
  if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) {
LAB_07094780:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  *(int *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = unaff_w20;
LAB_070945f0:
  unaff_w22 = unaff_w22 + 1;
Newtonsoft_Json_JsonReader__ValidateEnd:
  do {
    uVar11 = *(ulong *)(unaff_x29 + -0x88);
    uVar18 = *(uint *)(unaff_x29 + -0x68);
    uVar15 = *(long *)(unaff_x29 + -0x70) + 1;
    uVar12 = uVar18;
    if ((long)uVar11 <= (long)uVar15) goto LAB_07094318;
    if ((int)unaff_w22 <= (int)*(undefined8 *)(unaff_x29 + -0x90)) goto LAB_07094318;
    uVar12 = *(uint *)(unaff_x29 + -0x28);
    lVar17 = (long)(int)*(undefined8 *)(unaff_x29 + -0x90);
    uVar15 = uVar15 & 0xffffffff;
    do {
      uVar13 = (uint)uVar15;
      if ((int)uVar13 < (int)uVar12) {
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        do {
          uVar14 = (uint)uVar15;
          if ((uVar13 == uVar14) || (*(uint *)(unaff_x29 + -0x10) <= (uint)lVar17))
          goto LAB_07094780;
          if (*(int *)(*(long *)(unaff_x29 + -0x18) + lVar17 * 4) <=
              *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar14 * 4)) goto LAB_070946a8;
          uVar15 = (ulong)(uVar14 + 1);
        } while (uVar12 != uVar14 + 1);
        uVar15 = (ulong)uVar12;
      }
LAB_070946a8:
      lVar17 = lVar17 + 1;
    } while (lVar17 != (int)unaff_w22);
    *(ulong *)(unaff_x29 + -0x90) = (ulong)unaff_w22;
    while( true ) {
      uVar15 = (ulong)(int)uVar15;
      uVar2 = uVar15;
      if ((long)uVar15 <= (long)uVar11) {
        uVar2 = uVar11;
      }
      *(ulong *)(unaff_x29 + -0x80) = uVar2;
      uVar12 = uVar18;
LAB_07094318:
      if (uVar15 != *(ulong *)(unaff_x29 + -0x80)) break;
      if (unaff_w22 == 0) {
        lVar17 = *(long *)(unaff_x29 + -0xa0);
        bVar7 = false;
        goto LAB_07094718;
      }
      uVar19 = *(undefined8 *)(unaff_x29 + -0x10);
      uVar10 = *(undefined8 *)(unaff_x29 + -0x18);
      *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x30);
      *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x28);
      uVar13 = (uint)unaff_x19;
      *(undefined8 *)(unaff_x29 + -0x28) = uVar19;
      *(undefined8 *)(unaff_x29 + -0x30) = uVar10;
      if ((int)uVar13 <= *(int *)(unaff_x29 + -0x74)) {
        uVar14 = *(uint *)(unaff_x29 + -0x28);
LAB_070946ec:
        lVar17 = *(long *)(unaff_x29 + -0xa0);
        if (unaff_w22 - 1 < uVar14) {
          bVar7 = *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1) * 4) ==
                  *(int *)(unaff_x29 + -0x5c);
LAB_07094718:
          if (*(long *)(lVar17 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return bVar7;
        }
        goto LAB_07094780;
      }
      if ((int)uVar12 < (int)uVar13) {
        if (uVar13 <= uVar12) goto LAB_07094780;
        uVar16 = (uint)*(ushort *)(unaff_x28 + (long)(int)uVar12 * 2);
        uVar18 = uVar12 + 1;
      }
      else {
        uVar14 = *(uint *)(unaff_x29 + -0x28);
        if (uVar14 <= unaff_w22 - 1) goto LAB_07094780;
        uVar16 = *(uint *)(unaff_x29 + -0x94);
        uVar18 = uVar12;
        if (*(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1) * 4) ==
            *(int *)(unaff_x29 + -0x5c)) goto LAB_070946ec;
      }
      *(uint *)(unaff_x29 + -0x94) = uVar16;
      bVar7 = (uVar16 & 0xffff) == 0x2e;
      *(uint *)(unaff_x29 + -0x74) = uVar12;
      uVar15 = 0;
      unaff_w25 = uVar18;
      if (uVar18 <= uVar13) {
        unaff_w25 = uVar13;
      }
      uVar11 = (ulong)(int)unaff_w22;
      unaff_w22 = 0;
      *(uint *)(unaff_x29 + -0x78) = (uint)(bVar7 || (int)uVar13 <= (int)uVar12);
      *(uint *)(unaff_x29 + -100) = (uint)(!bVar7 || (int)uVar13 <= (int)uVar12);
      *(uint *)(unaff_x29 + -0x60) =
           (uint)((int)uVar13 <= (int)uVar18) | ((int)uVar12 < (int)uVar13 && bVar7) ^ 1;
      *(undefined8 *)(unaff_x29 + -0x90) = 0;
      *(ulong *)(unaff_x29 + -0x88) = uVar11;
      *(uint *)(unaff_x29 + -0x68) = uVar18;
    }
    if (*(uint *)(unaff_x29 + -0x28) <= (uint)uVar15) goto LAB_07094780;
    *(ulong *)(unaff_x29 + -0x70) = uVar15;
    iVar3 = *(int *)(*(long *)(unaff_x29 + -0x30) + uVar15 * 4);
    iVar1 = iVar3 + 2;
    if (-1 < iVar3 + 1) {
      iVar1 = iVar3 + 1;
    }
    if (iVar1 >> 1 < (int)unaff_x27) {
      lVar17 = (long)(iVar1 >> 1);
      do {
        puVar5 = PTR_DAT_08e6baa0;
        uVar18 = (uint)lVar17;
        if ((uint)unaff_x27 <= uVar18) goto LAB_07094780;
        uVar4 = *(ushort *)(unaff_x21 + lVar17 * 2);
        if (*(int *)(unaff_x29 + -0x10) + -2 <= (int)unaff_w22) {
          iVar1 = *(int *)(unaff_x29 + -0x10) << 1;
          uVar10 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e6baa0,iVar1);
          puVar6 = PTR_DAT_08ea27e0;
          auVar20 = FUN_05a7f6a4(uVar10,*(undefined8 *)PTR_DAT_08ea27e0);
          FUN_05a7f178(unaff_x29 + -0x18,auVar20._0_8_,auVar20._8_8_,*(undefined8 *)PTR_DAT_08ea27d8
                      );
          uVar10 = *(undefined8 *)puVar5;
          *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar20;
          uVar10 = FUN_03c8f97c(uVar10,iVar1);
          auVar20 = FUN_05a7f6a4(uVar10,*(undefined8 *)puVar6);
          FUN_05a7f178(unaff_x29 + -0x30,auVar20._0_8_,auVar20._8_8_,*(undefined8 *)PTR_DAT_08ea27d8
                      );
          *(undefined1 (*) [16])(unaff_x29 + -0x30) = auVar20;
          unaff_x21 = *(long *)(unaff_x29 + -0x50);
          unaff_x27 = *(undefined8 *)(unaff_x29 + -0x48);
          unaff_x24 = *(long *)(unaff_x29 + -0x40);
          unaff_x19 = *(undefined8 *)(unaff_x29 + -0x58);
        }
        uVar12 = uVar18 * 2;
        if (uVar4 == 0x2a) {
LAB_070944b4:
          if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_07094780;
          uVar18 = unaff_w22 + 1;
          *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar12;
LAB_070944d0:
          if (*(uint *)(unaff_x29 + -0x10) <= uVar18) goto LAB_07094780;
          unaff_w22 = uVar18 + 1;
          *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar18 * 4) = uVar12 | 1;
        }
        else {
          uVar13 = (uint)unaff_x19;
          if ((uVar4 == 0x3c) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
            if ((*(uint *)(unaff_x29 + -0x60) & 1) == 0) {
              uVar18 = *(uint *)(unaff_x29 + -0x68);
              do {
                if (unaff_w25 == uVar18) goto LAB_07094780;
                if (*(short *)(unaff_x28 + (long)(int)uVar18 * 2) == 0x2e) {
                  bVar7 = true;
                  goto LAB_070944a8;
                }
                uVar18 = uVar18 + 1;
              } while (uVar13 != uVar18);
            }
            bVar7 = false;
LAB_070944a8:
            uVar18 = unaff_w22;
            if (bVar7 || *(int *)(unaff_x29 + -100) != 0) goto LAB_070944b4;
            goto LAB_070944d0;
          }
          if ((uVar4 == 0x3e) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
            if ((*(uint *)(unaff_x29 + -0x78) & 1) == 0) {
LAB_07094590:
              if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_07094780;
              *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar12 + 2;
              unaff_w22 = unaff_w22 + 1;
              break;
            }
          }
          else {
            if ((uVar4 != 0x22) || ((*(uint *)(unaff_x29 + -0x34) & 1) == 0)) {
              if (uVar4 == 0x5c) {
                uVar18 = uVar18 + 1;
                if (uVar18 == (uint)unaff_x27) {
                  if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_07094780;
                  *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) =
                       *(undefined4 *)(unaff_x29 + -0x5c);
                  goto LAB_070945f0;
                }
                if ((uint)unaff_x27 <= uVar18) goto LAB_07094780;
                uVar4 = *(ushort *)(unaff_x21 + (long)(int)uVar18 * 2);
                uVar12 = uVar18 * 2;
              }
              param_1 = (ulong)uVar4;
              if (*(int *)(unaff_x29 + -0x74) < (int)uVar13) {
                unaff_w20 = uVar12 + 2;
                if (uVar4 == 0x3f) goto LAB_070945d8;
                if ((*(uint *)(unaff_x29 + -0x98) & 1) != 0) {
                  if (*(int *)(*(long *)PTR_DAT_08e6b4b0 + 0xe0) == 0) {
                    thunk_FUN_03cd7500();
                  }
                  param_2 = 0;
                  goto code_r0x07094620;
                }
                if ((uint)uVar4 == (*(uint *)(unaff_x29 + -0x94) & 0xffff)) goto LAB_070945d8;
              }
              break;
            }
            if (*(int *)(unaff_x29 + -0x74) < (int)uVar13) {
              if ((*(uint *)(unaff_x29 + -0x94) & 0xffff) == 0x2e) goto LAB_07094590;
              break;
            }
          }
        }
        lVar17 = lVar17 + 1;
        if (lVar17 == unaff_x24) {
          if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_07094780;
          *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) =
               *(undefined4 *)(unaff_x29 + -0x5c);
          unaff_w22 = unaff_w22 + 1;
        }
      } while (lVar17 != unaff_x24);
    }
  } while( true );
}


