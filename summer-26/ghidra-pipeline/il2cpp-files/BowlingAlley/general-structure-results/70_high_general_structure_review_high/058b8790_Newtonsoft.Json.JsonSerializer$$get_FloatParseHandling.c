/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_FloatParseHandling
ENTRY_POINT: 058b8790
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


bool Newtonsoft_Json_JsonSerializer__get_FloatParseHandling(uint param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 in_ZR;
  bool bVar7;
  short sVar8;
  short sVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint in_w9;
  uint uVar14;
  uint in_w10;
  uint in_w11;
  uint in_w12;
  uint uVar15;
  uint uVar16;
  undefined8 unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  long lVar17;
  long unaff_x24;
  undefined8 unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  
code_r0x058b8790:
  *(uint *)(unaff_x29 + -0x74) = in_w12;
  uVar15 = (uint)unaff_x19;
  uVar13 = 0;
  uVar16 = param_1;
  if (param_1 <= uVar15) {
    uVar16 = uVar15;
  }
  uVar11 = (ulong)(int)unaff_w22;
  unaff_w22 = 0;
  *(uint *)(unaff_x29 + -0x78) = in_w9 | in_w11;
  *(uint *)(unaff_x29 + -100) = !(bool)in_ZR | in_w11;
  *(uint *)(unaff_x29 + -0x60) = (uint)((int)uVar15 <= (int)param_1) | in_w10 & in_w9 ^ 1;
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  *(ulong *)(unaff_x29 + -0x88) = uVar11;
  *(uint *)(unaff_x29 + -0x68) = param_1;
  do {
    uVar13 = (ulong)(int)uVar13;
    uVar2 = uVar13;
    if ((long)uVar13 <= (long)uVar11) {
      uVar2 = uVar11;
    }
    *(ulong *)(unaff_x29 + -0x80) = uVar2;
    in_w12 = param_1;
    do {
      if (uVar13 == *(ulong *)(unaff_x29 + -0x80)) {
        if (unaff_w22 == 0) {
          lVar17 = *(long *)(unaff_x29 + -0xa0);
          bVar7 = false;
          goto LAB_058b8be8;
        }
        uVar18 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar10 = *(undefined8 *)(unaff_x29 + -0x18);
        *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x30);
        *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x28);
        uVar16 = (uint)unaff_x19;
        *(undefined8 *)(unaff_x29 + -0x28) = uVar18;
        *(undefined8 *)(unaff_x29 + -0x30) = uVar10;
        if ((int)uVar16 <= *(int *)(unaff_x29 + -0x74)) {
          uVar15 = *(uint *)(unaff_x29 + -0x28);
LAB_058b8bbc:
          lVar17 = *(long *)(unaff_x29 + -0xa0);
          if (unaff_w22 - 1 < uVar15) {
            bVar7 = *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1) * 4) ==
                    *(int *)(unaff_x29 + -0x5c);
LAB_058b8be8:
            if (*(long *)(lVar17 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return bVar7;
          }
LAB_058b8c50:
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        if ((int)in_w12 < (int)uVar16) {
          if (uVar16 <= in_w12) goto LAB_058b8c50;
          uVar14 = (uint)*(ushort *)(unaff_x28 + (long)(int)in_w12 * 2);
          param_1 = in_w12 + 1;
        }
        else {
          uVar15 = *(uint *)(unaff_x29 + -0x28);
          if (uVar15 <= unaff_w22 - 1) goto LAB_058b8c50;
          uVar14 = *(uint *)(unaff_x29 + -0x94);
          param_1 = in_w12;
          if (*(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1) * 4) ==
              *(int *)(unaff_x29 + -0x5c)) goto LAB_058b8bbc;
        }
        *(uint *)(unaff_x29 + -0x94) = uVar14;
        in_w10 = (uint)((int)in_w12 < (int)uVar16);
        in_w11 = (uint)((int)uVar16 <= (int)in_w12);
        in_ZR = (uVar14 & 0xffff) == 0x2e;
        in_w9 = (uint)(byte)in_ZR;
        goto code_r0x058b8790;
      }
      if (*(uint *)(unaff_x29 + -0x28) <= (uint)uVar13) goto LAB_058b8c50;
      *(ulong *)(unaff_x29 + -0x70) = uVar13;
      iVar3 = *(int *)(*(long *)(unaff_x29 + -0x30) + uVar13 * 4);
      iVar1 = iVar3 + 2;
      if (-1 < iVar3 + 1) {
        iVar1 = iVar3 + 1;
      }
      if (iVar1 >> 1 < (int)unaff_x27) {
        lVar17 = (long)(iVar1 >> 1);
        do {
          puVar5 = PTR_DAT_0727aa68;
          uVar15 = (uint)lVar17;
          if ((uint)unaff_x27 <= uVar15) goto LAB_058b8c50;
          uVar4 = *(ushort *)(unaff_x21 + lVar17 * 2);
          if (*(int *)(unaff_x29 + -0x10) + -2 <= (int)unaff_w22) {
            iVar1 = *(int *)(unaff_x29 + -0x10) << 1;
            uVar10 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_0727aa68,iVar1);
            puVar6 = PTR_DAT_072970b0;
            auVar19 = FUN_049b37a4(uVar10,*(undefined8 *)PTR_DAT_072970b0);
            FUN_049b3278(unaff_x29 + -0x18,auVar19._0_8_,auVar19._8_8_,
                         *(undefined8 *)PTR_DAT_072970a0);
            uVar10 = *(undefined8 *)puVar5;
            *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar19;
            uVar10 = FUN_032d5d3c(uVar10,iVar1);
            auVar19 = FUN_049b37a4(uVar10,*(undefined8 *)puVar6);
            FUN_049b3278(unaff_x29 + -0x30,auVar19._0_8_,auVar19._8_8_,
                         *(undefined8 *)PTR_DAT_072970a0);
            *(undefined1 (*) [16])(unaff_x29 + -0x30) = auVar19;
            unaff_x21 = *(long *)(unaff_x29 + -0x50);
            unaff_x27 = *(undefined8 *)(unaff_x29 + -0x48);
            unaff_x24 = *(long *)(unaff_x29 + -0x40);
            unaff_x19 = *(undefined8 *)(unaff_x29 + -0x58);
          }
          uVar14 = uVar15 * 2;
          if (uVar4 == 0x2a) {
LAB_058b8984:
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
            uVar15 = unaff_w22 + 1;
            *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar14;
LAB_058b89a0:
            if (*(uint *)(unaff_x29 + -0x10) <= uVar15) goto LAB_058b8c50;
            unaff_w22 = uVar15 + 1;
            *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar15 * 4) = uVar14 | 1;
          }
          else {
            uVar12 = (uint)unaff_x19;
            if ((uVar4 == 0x3c) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
              if ((*(uint *)(unaff_x29 + -0x60) & 1) == 0) {
                uVar15 = *(uint *)(unaff_x29 + -0x68);
                do {
                  if (uVar16 == uVar15) goto LAB_058b8c50;
                  if (*(short *)(unaff_x28 + (long)(int)uVar15 * 2) == 0x2e) {
                    bVar7 = true;
                    goto LAB_058b8978;
                  }
                  uVar15 = uVar15 + 1;
                } while (uVar12 != uVar15);
              }
              bVar7 = false;
LAB_058b8978:
              uVar15 = unaff_w22;
              if (bVar7 || *(int *)(unaff_x29 + -100) != 0) goto LAB_058b8984;
              goto LAB_058b89a0;
            }
            if ((uVar4 == 0x3e) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
              if ((*(uint *)(unaff_x29 + -0x78) & 1) == 0) {
LAB_058b8a60:
                if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
                *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar14 + 2;
                unaff_w22 = unaff_w22 + 1;
                break;
              }
            }
            else {
              if ((uVar4 != 0x22) || ((*(uint *)(unaff_x29 + -0x34) & 1) == 0)) {
                if (uVar4 == 0x5c) {
                  uVar15 = uVar15 + 1;
                  if (uVar15 != (uint)unaff_x27) {
                    if (uVar15 < (uint)unaff_x27) {
                      uVar4 = *(ushort *)(unaff_x21 + (long)(int)uVar15 * 2);
                      uVar14 = uVar15 * 2;
                      goto LAB_058b8a90;
                    }
                    goto LAB_058b8c50;
                  }
                  if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
                  *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) =
                       *(undefined4 *)(unaff_x29 + -0x5c);
                }
                else {
LAB_058b8a90:
                  if ((int)uVar12 <= *(int *)(unaff_x29 + -0x74)) break;
                  if (uVar4 != 0x3f) {
                    if ((*(uint *)(unaff_x29 + -0x98) & 1) == 0) {
                      if ((uint)uVar4 != (*(uint *)(unaff_x29 + -0x94) & 0xffff)) break;
                    }
                    else {
                      if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                      }
                      sVar8 = FUN_058a4e4c(uVar4,0);
                      sVar9 = FUN_058a4e4c(*(undefined4 *)(unaff_x29 + -0x94),0);
                      if (sVar8 != sVar9) break;
                    }
                  }
                  if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
                  *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar14 + 2;
                }
                unaff_w22 = unaff_w22 + 1;
                break;
              }
              if (*(int *)(unaff_x29 + -0x74) < (int)uVar12) {
                if ((*(uint *)(unaff_x29 + -0x94) & 0xffff) == 0x2e) goto LAB_058b8a60;
                break;
              }
            }
          }
          lVar17 = lVar17 + 1;
          if (lVar17 == unaff_x24) {
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
            *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) =
                 *(undefined4 *)(unaff_x29 + -0x5c);
            unaff_w22 = unaff_w22 + 1;
          }
        } while (lVar17 != unaff_x24);
      }
      uVar11 = *(ulong *)(unaff_x29 + -0x88);
      param_1 = *(uint *)(unaff_x29 + -0x68);
      uVar13 = *(long *)(unaff_x29 + -0x70) + 1;
      in_w12 = param_1;
    } while (((long)uVar11 <= (long)uVar13) ||
            ((int)unaff_w22 <= (int)*(undefined8 *)(unaff_x29 + -0x90)));
    uVar15 = *(uint *)(unaff_x29 + -0x28);
    lVar17 = (long)(int)*(undefined8 *)(unaff_x29 + -0x90);
    uVar13 = uVar13 & 0xffffffff;
    do {
      uVar14 = (uint)uVar13;
      if ((int)uVar14 < (int)uVar15) {
        if (uVar14 <= uVar15) {
          uVar14 = uVar15;
        }
        do {
          uVar12 = (uint)uVar13;
          if ((uVar14 == uVar12) || (*(uint *)(unaff_x29 + -0x10) <= (uint)lVar17))
          goto LAB_058b8c50;
          if (*(int *)(*(long *)(unaff_x29 + -0x18) + lVar17 * 4) <=
              *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar12 * 4)) goto LAB_058b8b78;
          uVar13 = (ulong)(uVar12 + 1);
        } while (uVar15 != uVar12 + 1);
        uVar13 = (ulong)uVar15;
      }
LAB_058b8b78:
      lVar17 = lVar17 + 1;
    } while (lVar17 != (int)unaff_w22);
    *(ulong *)(unaff_x29 + -0x90) = (ulong)unaff_w22;
  } while( true );
}


