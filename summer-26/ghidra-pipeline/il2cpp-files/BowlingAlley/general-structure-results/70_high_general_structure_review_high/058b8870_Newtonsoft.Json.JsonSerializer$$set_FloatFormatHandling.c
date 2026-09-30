/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_FloatFormatHandling
ENTRY_POINT: 058b8870
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


bool Newtonsoft_Json_JsonSerializer__set_FloatFormatHandling(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  bool bVar4;
  short sVar5;
  short sVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 *unaff_x20;
  uint unaff_w22;
  uint uVar16;
  long lVar17;
  long unaff_x23;
  undefined8 *unaff_x24;
  long lVar18;
  uint unaff_w25;
  uint unaff_w26;
  int unaff_w27;
  uint uVar19;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  
  auVar22._8_8_ = param_2;
  auVar22._0_8_ = param_1;
  do {
    FUN_049b3278(unaff_x29 + -0x18,auVar22._0_8_,auVar22._8_8_,*(undefined8 *)PTR_DAT_072970a0);
    uVar7 = *unaff_x20;
    *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar22;
    uVar7 = FUN_032d5d3c(uVar7,unaff_w27);
    auVar22 = FUN_049b37a4(uVar7,*unaff_x24);
    FUN_049b3278(unaff_x29 + -0x30,auVar22._0_8_,auVar22._8_8_,*(undefined8 *)PTR_DAT_072970a0);
    *(undefined1 (*) [16])(unaff_x29 + -0x30) = auVar22;
    lVar17 = *(long *)(unaff_x29 + -0x50);
    uVar7 = *(undefined8 *)(unaff_x29 + -0x48);
    lVar18 = *(long *)(unaff_x29 + -0x40);
    uVar15 = *(undefined8 *)(unaff_x29 + -0x58);
    do {
      uVar9 = (int)unaff_x23 * 2;
      uVar14 = (uint)uVar15;
      uVar19 = (uint)uVar7;
      if (unaff_w26 == 0x2a) {
LAB_058b8984:
        if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
        uVar16 = unaff_w22 + 1;
        *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar9;
LAB_058b89a0:
        if (*(uint *)(unaff_x29 + -0x10) <= uVar16) goto LAB_058b8c50;
        unaff_w22 = uVar16 + 1;
        *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar16 * 4) = uVar9 | 1;
LAB_058b89c0:
        unaff_x23 = unaff_x23 + 1;
        if (unaff_x23 == lVar18) {
          if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
          *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) =
               *(undefined4 *)(unaff_x29 + -0x5c);
          unaff_w22 = unaff_w22 + 1;
        }
        if (unaff_x23 == lVar18) goto LAB_058b89f4;
      }
      else {
        if ((unaff_w26 == 0x3c) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
          if ((*(uint *)(unaff_x29 + -0x60) & 1) == 0) {
            uVar16 = *(uint *)(unaff_x29 + -0x68);
            do {
              if (unaff_w25 == uVar16) goto LAB_058b8c50;
              if (*(short *)(unaff_x28 + (long)(int)uVar16 * 2) == 0x2e) {
                bVar4 = true;
                goto LAB_058b8978;
              }
              uVar16 = uVar16 + 1;
            } while (uVar14 != uVar16);
          }
          bVar4 = false;
LAB_058b8978:
          uVar16 = unaff_w22;
          if (bVar4 || *(int *)(unaff_x29 + -100) != 0) goto LAB_058b8984;
          goto LAB_058b89a0;
        }
        if ((unaff_w26 == 0x3e) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
          if ((*(uint *)(unaff_x29 + -0x78) & 1) == 0) {
LAB_058b8a60:
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
            *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar9 + 2;
            unaff_w22 = unaff_w22 + 1;
            goto LAB_058b89f4;
          }
          goto LAB_058b89c0;
        }
        if ((unaff_w26 == 0x22) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
          if ((int)uVar14 <= *(int *)(unaff_x29 + -0x74)) goto LAB_058b89c0;
          if ((*(uint *)(unaff_x29 + -0x94) & 0xffff) == 0x2e) goto LAB_058b8a60;
        }
        else if (unaff_w26 == 0x5c) {
          uVar9 = (int)unaff_x23 + 1;
          if (uVar9 != uVar19) {
            if (uVar19 <= uVar9) goto LAB_058b8c50;
            unaff_w26 = (uint)*(ushort *)(lVar17 + (long)(int)uVar9 * 2);
            uVar9 = uVar9 * 2;
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
          if (*(int *)(unaff_x29 + -0x74) < (int)uVar14) {
            if (unaff_w26 == 0x3f) {
LAB_058b8aa8:
              if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
              *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar9 + 2;
              goto LAB_058b8ac0;
            }
            if ((*(uint *)(unaff_x29 + -0x98) & 1) == 0) {
              if (unaff_w26 == (*(uint *)(unaff_x29 + -0x94) & 0xffff)) goto LAB_058b8aa8;
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              sVar5 = FUN_058a4e4c(unaff_w26,0);
              sVar6 = FUN_058a4e4c(*(undefined4 *)(unaff_x29 + -0x94),0);
              if (sVar5 == sVar6) goto LAB_058b8aa8;
            }
          }
        }
LAB_058b89f4:
        do {
          uVar8 = *(ulong *)(unaff_x29 + -0x88);
          uVar9 = *(uint *)(unaff_x29 + -0x68);
          uVar11 = *(long *)(unaff_x29 + -0x70) + 1;
          uVar16 = uVar9;
          if ((long)uVar8 <= (long)uVar11) goto LAB_058b87e8;
          if ((int)unaff_w22 <= (int)*(undefined8 *)(unaff_x29 + -0x90)) goto LAB_058b87e8;
          uVar16 = *(uint *)(unaff_x29 + -0x28);
          lVar13 = (long)(int)*(undefined8 *)(unaff_x29 + -0x90);
          uVar11 = uVar11 & 0xffffffff;
          do {
            uVar10 = (uint)uVar11;
            if ((int)uVar10 < (int)uVar16) {
              if (uVar10 <= uVar16) {
                uVar10 = uVar16;
              }
              do {
                uVar12 = (uint)uVar11;
                if ((uVar10 == uVar12) || (*(uint *)(unaff_x29 + -0x10) <= (uint)lVar13))
                goto LAB_058b8c50;
                if (*(int *)(*(long *)(unaff_x29 + -0x18) + lVar13 * 4) <=
                    *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar12 * 4))
                goto LAB_058b8b78;
                uVar11 = (ulong)(uVar12 + 1);
              } while (uVar16 != uVar12 + 1);
              uVar11 = (ulong)uVar16;
            }
LAB_058b8b78:
            lVar13 = lVar13 + 1;
          } while (lVar13 != (int)unaff_w22);
          *(ulong *)(unaff_x29 + -0x90) = (ulong)unaff_w22;
          while( true ) {
            uVar11 = (ulong)(int)uVar11;
            uVar2 = uVar11;
            if ((long)uVar11 <= (long)uVar8) {
              uVar2 = uVar8;
            }
            *(ulong *)(unaff_x29 + -0x80) = uVar2;
            uVar16 = uVar9;
LAB_058b87e8:
            if (uVar11 != *(ulong *)(unaff_x29 + -0x80)) break;
            if (unaff_w22 == 0) {
              lVar17 = *(long *)(unaff_x29 + -0xa0);
              bVar4 = false;
              goto LAB_058b8be8;
            }
            uVar21 = *(undefined8 *)(unaff_x29 + -0x10);
            uVar20 = *(undefined8 *)(unaff_x29 + -0x18);
            *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x30);
            *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x28);
            *(undefined8 *)(unaff_x29 + -0x28) = uVar21;
            *(undefined8 *)(unaff_x29 + -0x30) = uVar20;
            if ((int)uVar14 <= *(int *)(unaff_x29 + -0x74)) {
              uVar10 = *(uint *)(unaff_x29 + -0x28);
LAB_058b8bbc:
              lVar17 = *(long *)(unaff_x29 + -0xa0);
              if (unaff_w22 - 1 < uVar10) {
                bVar4 = *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1) * 4) ==
                        *(int *)(unaff_x29 + -0x5c);
LAB_058b8be8:
                if (*(long *)(lVar17 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
                }
                return bVar4;
              }
              goto LAB_058b8c50;
            }
            if ((int)uVar16 < (int)uVar14) {
              if (uVar14 <= uVar16) goto LAB_058b8c50;
              uVar12 = (uint)*(ushort *)(unaff_x28 + (long)(int)uVar16 * 2);
              uVar9 = uVar16 + 1;
            }
            else {
              uVar10 = *(uint *)(unaff_x29 + -0x28);
              if (uVar10 <= unaff_w22 - 1) goto LAB_058b8c50;
              uVar12 = *(uint *)(unaff_x29 + -0x94);
              uVar9 = uVar16;
              if (*(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1) * 4) ==
                  *(int *)(unaff_x29 + -0x5c)) goto LAB_058b8bbc;
            }
            *(uint *)(unaff_x29 + -0x94) = uVar12;
            bVar4 = (uVar12 & 0xffff) == 0x2e;
            *(uint *)(unaff_x29 + -0x74) = uVar16;
            uVar11 = 0;
            unaff_w25 = uVar9;
            if (uVar9 <= uVar14) {
              unaff_w25 = uVar14;
            }
            uVar8 = (ulong)(int)unaff_w22;
            unaff_w22 = 0;
            *(uint *)(unaff_x29 + -0x78) = (uint)(bVar4 || (int)uVar14 <= (int)uVar16);
            *(uint *)(unaff_x29 + -100) = (uint)(!bVar4 || (int)uVar14 <= (int)uVar16);
            *(uint *)(unaff_x29 + -0x60) =
                 (uint)((int)uVar14 <= (int)uVar9) | ((int)uVar16 < (int)uVar14 && bVar4) ^ 1;
            *(undefined8 *)(unaff_x29 + -0x90) = 0;
            *(ulong *)(unaff_x29 + -0x88) = uVar8;
            *(uint *)(unaff_x29 + -0x68) = uVar9;
          }
          if (*(uint *)(unaff_x29 + -0x28) <= (uint)uVar11) goto LAB_058b8c50;
          *(ulong *)(unaff_x29 + -0x70) = uVar11;
          iVar3 = *(int *)(*(long *)(unaff_x29 + -0x30) + uVar11 * 4);
          iVar1 = iVar3 + 2;
          if (-1 < iVar3 + 1) {
            iVar1 = iVar3 + 1;
          }
        } while ((int)uVar19 <= iVar1 >> 1);
        unaff_x23 = (long)(iVar1 >> 1);
      }
      unaff_x20 = (undefined8 *)PTR_DAT_0727aa68;
      if (uVar19 <= (uint)unaff_x23) {
LAB_058b8c50:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      unaff_w26 = (uint)*(ushort *)(lVar17 + unaff_x23 * 2);
    } while ((int)unaff_w22 < *(int *)(unaff_x29 + -0x10) + -2);
    unaff_w27 = *(int *)(unaff_x29 + -0x10) << 1;
    uVar7 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_0727aa68,unaff_w27);
    unaff_x24 = (undefined8 *)PTR_DAT_072970b0;
    auVar22 = FUN_049b37a4(uVar7,*(undefined8 *)PTR_DAT_072970b0);
  } while( true );
}


