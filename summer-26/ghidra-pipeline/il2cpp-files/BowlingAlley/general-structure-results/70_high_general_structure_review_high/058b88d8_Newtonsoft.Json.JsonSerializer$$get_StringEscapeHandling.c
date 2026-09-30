/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_StringEscapeHandling
ENTRY_POINT: 058b88d8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_JsonSerializer__get_StringEscapeHandling(void)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  short sVar7;
  short sVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 unaff_x21;
  uint unaff_w22;
  uint uVar18;
  long lVar19;
  long unaff_x23;
  long lVar20;
  uint unaff_w25;
  uint unaff_w26;
  uint uVar21;
  undefined8 unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  
  auVar24._8_8_ = unaff_x27;
  auVar24._0_8_ = unaff_x21;
  do {
    *(undefined1 (*) [16])(unaff_x29 + -0x30) = auVar24;
    lVar19 = *(long *)(unaff_x29 + -0x50);
    uVar9 = *(undefined8 *)(unaff_x29 + -0x48);
    lVar20 = *(long *)(unaff_x29 + -0x40);
    uVar17 = *(undefined8 *)(unaff_x29 + -0x58);
    do {
      uVar11 = (int)unaff_x23 * 2;
      uVar16 = (uint)uVar17;
      uVar21 = (uint)uVar9;
      if (unaff_w26 == 0x2a) {
LAB_058b8984:
        if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
        uVar18 = unaff_w22 + 1;
        *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar11;
LAB_058b89a0:
        if (*(uint *)(unaff_x29 + -0x10) <= uVar18) goto LAB_058b8c50;
        unaff_w22 = uVar18 + 1;
        *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar18 * 4) = uVar11 | 1;
LAB_058b89c0:
        unaff_x23 = unaff_x23 + 1;
        if (unaff_x23 == lVar20) {
          if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
          *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) =
               *(undefined4 *)(unaff_x29 + -0x5c);
          unaff_w22 = unaff_w22 + 1;
        }
        if (unaff_x23 == lVar20) goto LAB_058b89f4;
      }
      else {
        if ((unaff_w26 == 0x3c) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
          if ((*(uint *)(unaff_x29 + -0x60) & 1) == 0) {
            uVar18 = *(uint *)(unaff_x29 + -0x68);
            do {
              if (unaff_w25 == uVar18) goto LAB_058b8c50;
              if (*(short *)(unaff_x28 + (long)(int)uVar18 * 2) == 0x2e) {
                bVar6 = true;
                goto LAB_058b8978;
              }
              uVar18 = uVar18 + 1;
            } while (uVar16 != uVar18);
          }
          bVar6 = false;
LAB_058b8978:
          uVar18 = unaff_w22;
          if (bVar6 || *(int *)(unaff_x29 + -100) != 0) goto LAB_058b8984;
          goto LAB_058b89a0;
        }
        if ((unaff_w26 == 0x3e) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
          if ((*(uint *)(unaff_x29 + -0x78) & 1) == 0) {
LAB_058b8a60:
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
            *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar11 + 2;
            unaff_w22 = unaff_w22 + 1;
            goto LAB_058b89f4;
          }
          goto LAB_058b89c0;
        }
        if ((unaff_w26 == 0x22) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
          if ((int)uVar16 <= *(int *)(unaff_x29 + -0x74)) goto LAB_058b89c0;
          if ((*(uint *)(unaff_x29 + -0x94) & 0xffff) == 0x2e) goto LAB_058b8a60;
        }
        else if (unaff_w26 == 0x5c) {
          uVar11 = (int)unaff_x23 + 1;
          if (uVar11 != uVar21) {
            if (uVar21 <= uVar11) goto LAB_058b8c50;
            unaff_w26 = (uint)*(ushort *)(lVar19 + (long)(int)uVar11 * 2);
            uVar11 = uVar11 * 2;
            goto LAB_058b8a90;
          }
          if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
          *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) =
               *(undefined4 *)(unaff_x29 + -0x5c);
LAB_058b8ac0:
          unaff_w22 = unaff_w22 + 1;
        }
        else {
LAB_058b8a90:
          if (*(int *)(unaff_x29 + -0x74) < (int)uVar16) {
            if (unaff_w26 == 0x3f) {
LAB_058b8aa8:
              if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
              *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar11 + 2;
              goto LAB_058b8ac0;
            }
            if ((*(uint *)(unaff_x29 + -0x98) & 1) == 0) {
              if (unaff_w26 == (*(uint *)(unaff_x29 + -0x94) & 0xffff)) goto LAB_058b8aa8;
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              sVar7 = FUN_058a4e4c(unaff_w26,0);
              sVar8 = FUN_058a4e4c(*(undefined4 *)(unaff_x29 + -0x94),0);
              if (sVar7 == sVar8) goto LAB_058b8aa8;
            }
          }
        }
LAB_058b89f4:
        do {
          uVar10 = *(ulong *)(unaff_x29 + -0x88);
          uVar11 = *(uint *)(unaff_x29 + -0x68);
          uVar13 = *(long *)(unaff_x29 + -0x70) + 1;
          uVar18 = uVar11;
          if ((long)uVar10 <= (long)uVar13) goto LAB_058b87e8;
          if ((int)unaff_w22 <= (int)*(undefined8 *)(unaff_x29 + -0x90)) goto LAB_058b87e8;
          uVar18 = *(uint *)(unaff_x29 + -0x28);
          lVar15 = (long)(int)*(undefined8 *)(unaff_x29 + -0x90);
          uVar13 = uVar13 & 0xffffffff;
          do {
            uVar12 = (uint)uVar13;
            if ((int)uVar12 < (int)uVar18) {
              if (uVar12 <= uVar18) {
                uVar12 = uVar18;
              }
              do {
                uVar14 = (uint)uVar13;
                if ((uVar12 == uVar14) || (*(uint *)(unaff_x29 + -0x10) <= (uint)lVar15))
                goto LAB_058b8c50;
                if (*(int *)(*(long *)(unaff_x29 + -0x18) + lVar15 * 4) <=
                    *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar14 * 4))
                goto LAB_058b8b78;
                uVar13 = (ulong)(uVar14 + 1);
              } while (uVar18 != uVar14 + 1);
              uVar13 = (ulong)uVar18;
            }
LAB_058b8b78:
            lVar15 = lVar15 + 1;
          } while (lVar15 != (int)unaff_w22);
          *(ulong *)(unaff_x29 + -0x90) = (ulong)unaff_w22;
          while( true ) {
            uVar13 = (ulong)(int)uVar13;
            uVar2 = uVar13;
            if ((long)uVar13 <= (long)uVar10) {
              uVar2 = uVar10;
            }
            *(ulong *)(unaff_x29 + -0x80) = uVar2;
            uVar18 = uVar11;
LAB_058b87e8:
            if (uVar13 != *(ulong *)(unaff_x29 + -0x80)) break;
            if (unaff_w22 == 0) {
              lVar19 = *(long *)(unaff_x29 + -0xa0);
              bVar6 = false;
              goto LAB_058b8be8;
            }
            uVar23 = *(undefined8 *)(unaff_x29 + -0x10);
            uVar22 = *(undefined8 *)(unaff_x29 + -0x18);
            *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x30);
            *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x28);
            *(undefined8 *)(unaff_x29 + -0x28) = uVar23;
            *(undefined8 *)(unaff_x29 + -0x30) = uVar22;
            if ((int)uVar16 <= *(int *)(unaff_x29 + -0x74)) {
              uVar12 = *(uint *)(unaff_x29 + -0x28);
LAB_058b8bbc:
              lVar19 = *(long *)(unaff_x29 + -0xa0);
              if (unaff_w22 - 1 < uVar12) {
                bVar6 = *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1) * 4) ==
                        *(int *)(unaff_x29 + -0x5c);
LAB_058b8be8:
                if (*(long *)(lVar19 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
                }
                return bVar6;
              }
              goto LAB_058b8c50;
            }
            if ((int)uVar18 < (int)uVar16) {
              if (uVar16 <= uVar18) goto LAB_058b8c50;
              uVar14 = (uint)*(ushort *)(unaff_x28 + (long)(int)uVar18 * 2);
              uVar11 = uVar18 + 1;
            }
            else {
              uVar12 = *(uint *)(unaff_x29 + -0x28);
              if (uVar12 <= unaff_w22 - 1) goto LAB_058b8c50;
              uVar14 = *(uint *)(unaff_x29 + -0x94);
              uVar11 = uVar18;
              if (*(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1) * 4) ==
                  *(int *)(unaff_x29 + -0x5c)) goto LAB_058b8bbc;
            }
            *(uint *)(unaff_x29 + -0x94) = uVar14;
            bVar6 = (uVar14 & 0xffff) == 0x2e;
            *(uint *)(unaff_x29 + -0x74) = uVar18;
            uVar13 = 0;
            unaff_w25 = uVar11;
            if (uVar11 <= uVar16) {
              unaff_w25 = uVar16;
            }
            uVar10 = (ulong)(int)unaff_w22;
            unaff_w22 = 0;
            *(uint *)(unaff_x29 + -0x78) = (uint)(bVar6 || (int)uVar16 <= (int)uVar18);
            *(uint *)(unaff_x29 + -100) = (uint)(!bVar6 || (int)uVar16 <= (int)uVar18);
            *(uint *)(unaff_x29 + -0x60) =
                 (uint)((int)uVar16 <= (int)uVar11) | ((int)uVar18 < (int)uVar16 && bVar6) ^ 1;
            *(undefined8 *)(unaff_x29 + -0x90) = 0;
            *(ulong *)(unaff_x29 + -0x88) = uVar10;
            *(uint *)(unaff_x29 + -0x68) = uVar11;
          }
          if (*(uint *)(unaff_x29 + -0x28) <= (uint)uVar13) goto LAB_058b8c50;
          *(ulong *)(unaff_x29 + -0x70) = uVar13;
          iVar3 = *(int *)(*(long *)(unaff_x29 + -0x30) + uVar13 * 4);
          iVar1 = iVar3 + 2;
          if (-1 < iVar3 + 1) {
            iVar1 = iVar3 + 1;
          }
        } while ((int)uVar21 <= iVar1 >> 1);
        unaff_x23 = (long)(iVar1 >> 1);
      }
      puVar4 = PTR_DAT_0727aa68;
      if (uVar21 <= (uint)unaff_x23) {
LAB_058b8c50:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      unaff_w26 = (uint)*(ushort *)(lVar19 + unaff_x23 * 2);
    } while ((int)unaff_w22 < *(int *)(unaff_x29 + -0x10) + -2);
    iVar1 = *(int *)(unaff_x29 + -0x10) << 1;
    uVar9 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_0727aa68,iVar1);
    puVar5 = PTR_DAT_072970b0;
    auVar24 = FUN_049b37a4(uVar9,*(undefined8 *)PTR_DAT_072970b0);
    FUN_049b3278(unaff_x29 + -0x18,auVar24._0_8_,auVar24._8_8_,*(undefined8 *)PTR_DAT_072970a0);
    uVar9 = *(undefined8 *)puVar4;
    *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar24;
    uVar9 = FUN_032d5d3c(uVar9,iVar1);
    auVar24 = FUN_049b37a4(uVar9,*(undefined8 *)puVar5);
    FUN_049b3278(unaff_x29 + -0x30,auVar24._0_8_,auVar24._8_8_,*(undefined8 *)PTR_DAT_072970a0);
  } while( true );
}


