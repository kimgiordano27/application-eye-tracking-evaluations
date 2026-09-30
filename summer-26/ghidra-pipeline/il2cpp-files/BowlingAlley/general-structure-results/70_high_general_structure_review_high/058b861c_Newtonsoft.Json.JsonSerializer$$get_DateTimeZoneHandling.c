/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_DateTimeZoneHandling
ENTRY_POINT: 058b861c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


byte Newtonsoft_Json_JsonSerializer__get_DateTimeZoneHandling(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  ushort uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  byte bVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 unaff_x19;
  long unaff_x21;
  long unaff_x22;
  uint uVar22;
  long lVar23;
  int iVar24;
  undefined8 unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  iVar24 = (int)unaff_x27;
  iVar4 = iVar24 + -1;
  if (iVar4 == 0) {
    bVar8 = 1;
  }
  else {
    if ((*(byte *)(*(long *)(*(long *)PTR_DAT_07296c98 + 0x20) + 0x135) & 1) == 0) {
      FUN_032934b8();
    }
    puVar5 = PTR_DAT_07296f10;
    lVar13 = *(long *)PTR_DAT_07296f10;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar13 = *(long *)puVar5;
    }
    puVar1 = *(undefined8 **)(lVar13 + 0xb8);
    if ((*(uint *)(unaff_x29 + -0x34) & 1) == 0) {
      puVar1 = *(undefined8 **)(lVar13 + 0xb8) + 1;
    }
    auVar26 = FUN_0496e964(*puVar1,*(undefined8 *)PTR_DAT_07290c08);
    iVar11 = FUN_058c6878(unaff_x21 + 2,iVar4,auVar26._0_8_,auVar26._8_8_,
                          *(undefined8 *)PTR_DAT_07297098);
    if (iVar11 != -1) {
      *(long *)(unaff_x29 + -0xa0) = unaff_x22;
      uVar14 = DAT_0139f550;
      uStack_18 = 0;
      uStack_20 = 0;
      uStack_8 = 0;
      uStack_10 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_28 = 0;
      uStack_30 = 0;
      *(undefined8 **)(unaff_x29 + -0x18) = &uStack_40;
      *(undefined8 *)(unaff_x29 + -0x10) = uVar14;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_78 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_80 = 0;
      *(int *)(unaff_x29 + -0x5c) = iVar24 << 1;
      uVar22 = 0;
      lVar13 = (long)iVar24;
      uVar19 = 1;
      *(undefined4 *)(unaff_x29 + -0x94) = 0;
      *(undefined8 **)(unaff_x29 + -0x30) = &uStack_80;
      *(undefined8 *)(unaff_x29 + -0x28) = uVar14;
      *(undefined8 *)(unaff_x29 + -0x48) = unaff_x27;
      *(long *)(unaff_x29 + -0x40) = lVar13;
      *(undefined8 *)(unaff_x29 + -0x58) = unaff_x19;
      *(long *)(unaff_x29 + -0x50) = unaff_x21;
Newtonsoft_Json_JsonSerializer__set_DateParseHandling:
      uVar16 = (uint)unaff_x19;
      if ((int)uVar22 < (int)uVar16) {
        if (uVar16 <= uVar22) goto LAB_058b8c50;
        uVar21 = (uint)*(ushort *)(unaff_x28 + (long)(int)uVar22 * 2);
        uVar12 = uVar22 + 1;
      }
      else {
        uVar20 = *(uint *)(unaff_x29 + -0x28);
        uVar17 = uVar19 - 1;
        if (uVar20 <= uVar17) goto LAB_058b8c50;
        uVar21 = *(uint *)(unaff_x29 + -0x94);
        uVar12 = uVar22;
        if (*(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar17 * 4) ==
            *(int *)(unaff_x29 + -0x5c)) goto LAB_058b8bbc;
      }
      *(uint *)(unaff_x29 + -0x94) = uVar21;
      bVar7 = (uVar21 & 0xffff) == 0x2e;
      *(uint *)(unaff_x29 + -0x74) = uVar22;
      uVar18 = 0;
      uVar20 = uVar12;
      if (uVar12 <= uVar16) {
        uVar20 = uVar16;
      }
      uVar15 = (ulong)(int)uVar19;
      uVar19 = 0;
      *(uint *)(unaff_x29 + -0x78) = (uint)(bVar7 || (int)uVar16 <= (int)uVar22);
      *(uint *)(unaff_x29 + -100) = (uint)(!bVar7 || (int)uVar16 <= (int)uVar22);
      *(uint *)(unaff_x29 + -0x60) =
           (uint)((int)uVar16 <= (int)uVar12) | ((int)uVar22 < (int)uVar16 && bVar7) ^ 1;
      *(undefined8 *)(unaff_x29 + -0x90) = 0;
      *(ulong *)(unaff_x29 + -0x88) = uVar15;
      *(uint *)(unaff_x29 + -0x68) = uVar12;
      do {
        uVar18 = (ulong)(int)uVar18;
        uVar2 = uVar18;
        if ((long)uVar18 <= (long)uVar15) {
          uVar2 = uVar15;
        }
        *(ulong *)(unaff_x29 + -0x80) = uVar2;
        uVar22 = uVar12;
        do {
          if (uVar18 == *(ulong *)(unaff_x29 + -0x80)) {
            if (uVar19 == 0) {
              unaff_x22 = *(long *)(unaff_x29 + -0xa0);
              goto LAB_058b8be4;
            }
            uVar25 = *(undefined8 *)(unaff_x29 + -0x10);
            uVar14 = *(undefined8 *)(unaff_x29 + -0x18);
            *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x30);
            *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x28);
            *(undefined8 *)(unaff_x29 + -0x28) = uVar25;
            *(undefined8 *)(unaff_x29 + -0x30) = uVar14;
            if (*(int *)(unaff_x29 + -0x74) < (int)unaff_x19)
            goto Newtonsoft_Json_JsonSerializer__set_DateParseHandling;
            uVar20 = *(uint *)(unaff_x29 + -0x28);
            uVar17 = uVar19 - 1;
            goto LAB_058b8bbc;
          }
          if (*(uint *)(unaff_x29 + -0x28) <= (uint)uVar18) goto LAB_058b8c50;
          *(ulong *)(unaff_x29 + -0x70) = uVar18;
          iVar24 = *(int *)(*(long *)(unaff_x29 + -0x30) + uVar18 * 4);
          iVar4 = iVar24 + 2;
          if (-1 < iVar24 + 1) {
            iVar4 = iVar24 + 1;
          }
          if (iVar4 >> 1 < (int)unaff_x27) {
            lVar23 = (long)(iVar4 >> 1);
            do {
              puVar5 = PTR_DAT_0727aa68;
              uVar22 = (uint)lVar23;
              if ((uint)unaff_x27 <= uVar22) goto LAB_058b8c50;
              uVar3 = *(ushort *)(unaff_x21 + lVar23 * 2);
              if (*(int *)(unaff_x29 + -0x10) + -2 <= (int)uVar19) {
                iVar4 = *(int *)(unaff_x29 + -0x10) << 1;
                uVar14 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_0727aa68,iVar4);
                puVar6 = PTR_DAT_072970b0;
                auVar26 = FUN_049b37a4(uVar14,*(undefined8 *)PTR_DAT_072970b0);
                FUN_049b3278(unaff_x29 + -0x18,auVar26._0_8_,auVar26._8_8_,
                             *(undefined8 *)PTR_DAT_072970a0);
                uVar14 = *(undefined8 *)puVar5;
                *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar26;
                uVar14 = FUN_032d5d3c(uVar14,iVar4);
                auVar26 = FUN_049b37a4(uVar14,*(undefined8 *)puVar6);
                FUN_049b3278(unaff_x29 + -0x30,auVar26._0_8_,auVar26._8_8_,
                             *(undefined8 *)PTR_DAT_072970a0);
                *(undefined1 (*) [16])(unaff_x29 + -0x30) = auVar26;
                unaff_x21 = *(long *)(unaff_x29 + -0x50);
                unaff_x27 = *(undefined8 *)(unaff_x29 + -0x48);
                lVar13 = *(long *)(unaff_x29 + -0x40);
                unaff_x19 = *(undefined8 *)(unaff_x29 + -0x58);
              }
              uVar16 = uVar22 * 2;
              if (uVar3 == 0x2a) {
LAB_058b8984:
                if (*(uint *)(unaff_x29 + -0x10) <= uVar19) goto LAB_058b8c50;
                uVar22 = uVar19 + 1;
                *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar19 * 4) = uVar16;
LAB_058b89a0:
                if (*(uint *)(unaff_x29 + -0x10) <= uVar22) goto LAB_058b8c50;
                uVar19 = uVar22 + 1;
                *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar22 * 4) = uVar16 | 1;
              }
              else {
                uVar17 = (uint)unaff_x19;
                if ((uVar3 == 0x3c) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
                  if ((*(uint *)(unaff_x29 + -0x60) & 1) == 0) {
                    uVar22 = *(uint *)(unaff_x29 + -0x68);
                    do {
                      if (uVar20 == uVar22) goto LAB_058b8c50;
                      if (*(short *)(unaff_x28 + (long)(int)uVar22 * 2) == 0x2e) {
                        bVar7 = true;
                        goto LAB_058b8978;
                      }
                      uVar22 = uVar22 + 1;
                    } while (uVar17 != uVar22);
                  }
                  bVar7 = false;
LAB_058b8978:
                  uVar22 = uVar19;
                  if (bVar7 || *(int *)(unaff_x29 + -100) != 0) goto LAB_058b8984;
                  goto LAB_058b89a0;
                }
                if ((uVar3 == 0x3e) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
                  if ((*(uint *)(unaff_x29 + -0x78) & 1) == 0) {
LAB_058b8a60:
                    if (*(uint *)(unaff_x29 + -0x10) <= uVar19) goto LAB_058b8c50;
                    *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar19 * 4) = uVar16 + 2;
                    uVar19 = uVar19 + 1;
                    break;
                  }
                }
                else {
                  if ((uVar3 != 0x22) || ((*(uint *)(unaff_x29 + -0x34) & 1) == 0)) {
                    if (uVar3 == 0x5c) {
                      uVar22 = uVar22 + 1;
                      if (uVar22 != (uint)unaff_x27) {
                        if (uVar22 < (uint)unaff_x27) {
                          uVar3 = *(ushort *)(unaff_x21 + (long)(int)uVar22 * 2);
                          uVar16 = uVar22 * 2;
                          goto LAB_058b8a90;
                        }
                        goto LAB_058b8c50;
                      }
                      if (*(uint *)(unaff_x29 + -0x10) <= uVar19) goto LAB_058b8c50;
                      *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar19 * 4) =
                           *(undefined4 *)(unaff_x29 + -0x5c);
                    }
                    else {
LAB_058b8a90:
                      if ((int)uVar17 <= *(int *)(unaff_x29 + -0x74)) break;
                      if (uVar3 != 0x3f) {
                        if ((*(uint *)(unaff_x29 + -0x98) & 1) == 0) {
                          if ((uint)uVar3 != (*(uint *)(unaff_x29 + -0x94) & 0xffff)) break;
                        }
                        else {
                          if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                            thunk_FUN_032cd7c0();
                          }
                          sVar9 = FUN_058a4e4c(uVar3,0);
                          sVar10 = FUN_058a4e4c(*(undefined4 *)(unaff_x29 + -0x94),0);
                          if (sVar9 != sVar10) break;
                        }
                      }
                      if (*(uint *)(unaff_x29 + -0x10) <= uVar19) goto LAB_058b8c50;
                      *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar19 * 4) = uVar16 + 2;
                    }
                    uVar19 = uVar19 + 1;
                    break;
                  }
                  if (*(int *)(unaff_x29 + -0x74) < (int)uVar17) {
                    if ((*(uint *)(unaff_x29 + -0x94) & 0xffff) == 0x2e) goto LAB_058b8a60;
                    break;
                  }
                }
              }
              lVar23 = lVar23 + 1;
              if (lVar23 == lVar13) {
                if (*(uint *)(unaff_x29 + -0x10) <= uVar19) goto LAB_058b8c50;
                *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar19 * 4) =
                     *(undefined4 *)(unaff_x29 + -0x5c);
                uVar19 = uVar19 + 1;
              }
            } while (lVar23 != lVar13);
          }
          uVar15 = *(ulong *)(unaff_x29 + -0x88);
          uVar12 = *(uint *)(unaff_x29 + -0x68);
          uVar18 = *(long *)(unaff_x29 + -0x70) + 1;
          uVar22 = uVar12;
        } while (((long)uVar15 <= (long)uVar18) ||
                ((int)uVar19 <= (int)*(undefined8 *)(unaff_x29 + -0x90)));
        uVar22 = *(uint *)(unaff_x29 + -0x28);
        lVar23 = (long)(int)*(undefined8 *)(unaff_x29 + -0x90);
        uVar18 = uVar18 & 0xffffffff;
        do {
          uVar16 = (uint)uVar18;
          if ((int)uVar16 < (int)uVar22) {
            if (uVar16 <= uVar22) {
              uVar16 = uVar22;
            }
            do {
              uVar17 = (uint)uVar18;
              if ((uVar16 == uVar17) || (*(uint *)(unaff_x29 + -0x10) <= (uint)lVar23))
              goto LAB_058b8c50;
              if (*(int *)(*(long *)(unaff_x29 + -0x18) + lVar23 * 4) <=
                  *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar17 * 4)) goto LAB_058b8b78;
              uVar18 = (ulong)(uVar17 + 1);
            } while (uVar22 != uVar17 + 1);
            uVar18 = (ulong)uVar22;
          }
LAB_058b8b78:
          lVar23 = lVar23 + 1;
        } while (lVar23 != (int)uVar19);
        *(ulong *)(unaff_x29 + -0x90) = (ulong)uVar19;
      } while( true );
    }
    if ((int)unaff_x19 < iVar4) {
LAB_058b8be4:
      bVar8 = 0;
    }
    else {
      bVar8 = FUN_059254d4();
    }
  }
LAB_058b8be8:
  if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return bVar8 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_058b8bbc:
  unaff_x22 = *(long *)(unaff_x29 + -0xa0);
  if (uVar20 <= uVar17) {
LAB_058b8c50:
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
  bVar8 = *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar17 * 4) ==
          *(int *)(unaff_x29 + -0x5c);
  goto LAB_058b8be8;
}


