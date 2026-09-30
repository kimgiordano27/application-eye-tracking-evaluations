/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_DateTimeZoneHandling
ENTRY_POINT: 058b8670
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


byte Newtonsoft_Json_JsonSerializer__set_DateTimeZoneHandling(undefined8 *param_1)

{
  ulong uVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  ulong in_x9;
  uint uVar19;
  undefined8 unaff_x19;
  long unaff_x21;
  long unaff_x22;
  uint uVar20;
  long lVar21;
  long lVar22;
  int unaff_w25;
  undefined8 unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar23;
  undefined1 auVar24 [16];
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
  
  if ((in_x9 & 1) == 0) {
    param_1 = param_1 + 1;
  }
  FUN_0496e964(*param_1,*(undefined8 *)PTR_DAT_07290c08);
  iVar10 = FUN_058c6878();
  if (iVar10 != -1) {
    *(long *)(unaff_x29 + -0xa0) = unaff_x22;
    uVar12 = DAT_0139f550;
    uStack_18 = 0;
    uStack_20 = 0;
    uStack_8 = 0;
    uStack_10 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    *(undefined8 **)(unaff_x29 + -0x18) = &uStack_40;
    *(undefined8 *)(unaff_x29 + -0x10) = uVar12;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_78 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    *(int *)(unaff_x29 + -0x5c) = (int)unaff_x27 << 1;
    uVar20 = 0;
    lVar22 = (long)(int)unaff_x27;
    uVar17 = 1;
    *(undefined4 *)(unaff_x29 + -0x94) = 0;
    *(undefined8 **)(unaff_x29 + -0x30) = &uStack_80;
    *(undefined8 *)(unaff_x29 + -0x28) = uVar12;
    *(undefined8 *)(unaff_x29 + -0x48) = unaff_x27;
    *(long *)(unaff_x29 + -0x40) = lVar22;
    *(undefined8 *)(unaff_x29 + -0x58) = unaff_x19;
    *(long *)(unaff_x29 + -0x50) = unaff_x21;
Newtonsoft_Json_JsonSerializer__set_DateParseHandling:
    uVar14 = (uint)unaff_x19;
    if ((int)uVar20 < (int)uVar14) {
      if (uVar14 <= uVar20) goto LAB_058b8c50;
      uVar19 = (uint)*(ushort *)(unaff_x28 + (long)(int)uVar20 * 2);
      uVar11 = uVar20 + 1;
    }
    else {
      uVar18 = *(uint *)(unaff_x29 + -0x28);
      uVar15 = uVar17 - 1;
      if (uVar18 <= uVar15) goto LAB_058b8c50;
      uVar19 = *(uint *)(unaff_x29 + -0x94);
      uVar11 = uVar20;
      if (*(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar15 * 4) ==
          *(int *)(unaff_x29 + -0x5c)) goto LAB_058b8bbc;
    }
    *(uint *)(unaff_x29 + -0x94) = uVar19;
    bVar6 = (uVar19 & 0xffff) == 0x2e;
    *(uint *)(unaff_x29 + -0x74) = uVar20;
    uVar16 = 0;
    uVar18 = uVar11;
    if (uVar11 <= uVar14) {
      uVar18 = uVar14;
    }
    uVar13 = (ulong)(int)uVar17;
    uVar17 = 0;
    *(uint *)(unaff_x29 + -0x78) = (uint)(bVar6 || (int)uVar14 <= (int)uVar20);
    *(uint *)(unaff_x29 + -100) = (uint)(!bVar6 || (int)uVar14 <= (int)uVar20);
    *(uint *)(unaff_x29 + -0x60) =
         (uint)((int)uVar14 <= (int)uVar11) | ((int)uVar20 < (int)uVar14 && bVar6) ^ 1;
    *(undefined8 *)(unaff_x29 + -0x90) = 0;
    *(ulong *)(unaff_x29 + -0x88) = uVar13;
    *(uint *)(unaff_x29 + -0x68) = uVar11;
    do {
      uVar16 = (ulong)(int)uVar16;
      uVar1 = uVar16;
      if ((long)uVar16 <= (long)uVar13) {
        uVar1 = uVar13;
      }
      *(ulong *)(unaff_x29 + -0x80) = uVar1;
      uVar20 = uVar11;
      do {
        if (uVar16 == *(ulong *)(unaff_x29 + -0x80)) {
          if (uVar17 == 0) {
            unaff_x22 = *(long *)(unaff_x29 + -0xa0);
            goto LAB_058b8be4;
          }
          uVar23 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar12 = *(undefined8 *)(unaff_x29 + -0x18);
          *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x30);
          *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x28);
          *(undefined8 *)(unaff_x29 + -0x28) = uVar23;
          *(undefined8 *)(unaff_x29 + -0x30) = uVar12;
          if (*(int *)(unaff_x29 + -0x74) < (int)unaff_x19)
          goto Newtonsoft_Json_JsonSerializer__set_DateParseHandling;
          uVar18 = *(uint *)(unaff_x29 + -0x28);
          uVar15 = uVar17 - 1;
          goto LAB_058b8bbc;
        }
        if (*(uint *)(unaff_x29 + -0x28) <= (uint)uVar16) goto LAB_058b8c50;
        *(ulong *)(unaff_x29 + -0x70) = uVar16;
        iVar2 = *(int *)(*(long *)(unaff_x29 + -0x30) + uVar16 * 4);
        iVar10 = iVar2 + 2;
        if (-1 < iVar2 + 1) {
          iVar10 = iVar2 + 1;
        }
        if (iVar10 >> 1 < (int)unaff_x27) {
          lVar21 = (long)(iVar10 >> 1);
          do {
            puVar4 = PTR_DAT_0727aa68;
            uVar20 = (uint)lVar21;
            if ((uint)unaff_x27 <= uVar20) goto LAB_058b8c50;
            uVar3 = *(ushort *)(unaff_x21 + lVar21 * 2);
            if (*(int *)(unaff_x29 + -0x10) + -2 <= (int)uVar17) {
              iVar10 = *(int *)(unaff_x29 + -0x10) << 1;
              uVar12 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_0727aa68,iVar10);
              puVar5 = PTR_DAT_072970b0;
              auVar24 = FUN_049b37a4(uVar12,*(undefined8 *)PTR_DAT_072970b0);
              FUN_049b3278(unaff_x29 + -0x18,auVar24._0_8_,auVar24._8_8_,
                           *(undefined8 *)PTR_DAT_072970a0);
              uVar12 = *(undefined8 *)puVar4;
              *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar24;
              uVar12 = FUN_032d5d3c(uVar12,iVar10);
              auVar24 = FUN_049b37a4(uVar12,*(undefined8 *)puVar5);
              FUN_049b3278(unaff_x29 + -0x30,auVar24._0_8_,auVar24._8_8_,
                           *(undefined8 *)PTR_DAT_072970a0);
              *(undefined1 (*) [16])(unaff_x29 + -0x30) = auVar24;
              unaff_x21 = *(long *)(unaff_x29 + -0x50);
              unaff_x27 = *(undefined8 *)(unaff_x29 + -0x48);
              lVar22 = *(long *)(unaff_x29 + -0x40);
              unaff_x19 = *(undefined8 *)(unaff_x29 + -0x58);
            }
            uVar14 = uVar20 * 2;
            if (uVar3 == 0x2a) {
LAB_058b8984:
              if (*(uint *)(unaff_x29 + -0x10) <= uVar17) goto LAB_058b8c50;
              uVar20 = uVar17 + 1;
              *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar17 * 4) = uVar14;
LAB_058b89a0:
              if (*(uint *)(unaff_x29 + -0x10) <= uVar20) goto LAB_058b8c50;
              uVar17 = uVar20 + 1;
              *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar20 * 4) = uVar14 | 1;
            }
            else {
              uVar15 = (uint)unaff_x19;
              if ((uVar3 == 0x3c) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
                if ((*(uint *)(unaff_x29 + -0x60) & 1) == 0) {
                  uVar20 = *(uint *)(unaff_x29 + -0x68);
                  do {
                    if (uVar18 == uVar20) goto LAB_058b8c50;
                    if (*(short *)(unaff_x28 + (long)(int)uVar20 * 2) == 0x2e) {
                      bVar6 = true;
                      goto LAB_058b8978;
                    }
                    uVar20 = uVar20 + 1;
                  } while (uVar15 != uVar20);
                }
                bVar6 = false;
LAB_058b8978:
                uVar20 = uVar17;
                if (bVar6 || *(int *)(unaff_x29 + -100) != 0) goto LAB_058b8984;
                goto LAB_058b89a0;
              }
              if ((uVar3 == 0x3e) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
                if ((*(uint *)(unaff_x29 + -0x78) & 1) == 0) {
LAB_058b8a60:
                  if (*(uint *)(unaff_x29 + -0x10) <= uVar17) goto LAB_058b8c50;
                  *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar17 * 4) = uVar14 + 2;
                  uVar17 = uVar17 + 1;
                  break;
                }
              }
              else {
                if ((uVar3 != 0x22) || ((*(uint *)(unaff_x29 + -0x34) & 1) == 0)) {
                  if (uVar3 == 0x5c) {
                    uVar20 = uVar20 + 1;
                    if (uVar20 != (uint)unaff_x27) {
                      if (uVar20 < (uint)unaff_x27) {
                        uVar3 = *(ushort *)(unaff_x21 + (long)(int)uVar20 * 2);
                        uVar14 = uVar20 * 2;
                        goto LAB_058b8a90;
                      }
                      goto LAB_058b8c50;
                    }
                    if (*(uint *)(unaff_x29 + -0x10) <= uVar17) goto LAB_058b8c50;
                    *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar17 * 4) =
                         *(undefined4 *)(unaff_x29 + -0x5c);
                  }
                  else {
LAB_058b8a90:
                    if ((int)uVar15 <= *(int *)(unaff_x29 + -0x74)) break;
                    if (uVar3 != 0x3f) {
                      if ((*(uint *)(unaff_x29 + -0x98) & 1) == 0) {
                        if ((uint)uVar3 != (*(uint *)(unaff_x29 + -0x94) & 0xffff)) break;
                      }
                      else {
                        if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                          thunk_FUN_032cd7c0();
                        }
                        sVar8 = FUN_058a4e4c(uVar3,0);
                        sVar9 = FUN_058a4e4c(*(undefined4 *)(unaff_x29 + -0x94),0);
                        if (sVar8 != sVar9) break;
                      }
                    }
                    if (*(uint *)(unaff_x29 + -0x10) <= uVar17) goto LAB_058b8c50;
                    *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar17 * 4) = uVar14 + 2;
                  }
                  uVar17 = uVar17 + 1;
                  break;
                }
                if (*(int *)(unaff_x29 + -0x74) < (int)uVar15) {
                  if ((*(uint *)(unaff_x29 + -0x94) & 0xffff) == 0x2e) goto LAB_058b8a60;
                  break;
                }
              }
            }
            lVar21 = lVar21 + 1;
            if (lVar21 == lVar22) {
              if (*(uint *)(unaff_x29 + -0x10) <= uVar17) goto LAB_058b8c50;
              *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar17 * 4) =
                   *(undefined4 *)(unaff_x29 + -0x5c);
              uVar17 = uVar17 + 1;
            }
          } while (lVar21 != lVar22);
        }
        uVar13 = *(ulong *)(unaff_x29 + -0x88);
        uVar11 = *(uint *)(unaff_x29 + -0x68);
        uVar16 = *(long *)(unaff_x29 + -0x70) + 1;
        uVar20 = uVar11;
      } while (((long)uVar13 <= (long)uVar16) ||
              ((int)uVar17 <= (int)*(undefined8 *)(unaff_x29 + -0x90)));
      uVar20 = *(uint *)(unaff_x29 + -0x28);
      lVar21 = (long)(int)*(undefined8 *)(unaff_x29 + -0x90);
      uVar16 = uVar16 & 0xffffffff;
      do {
        uVar14 = (uint)uVar16;
        if ((int)uVar14 < (int)uVar20) {
          if (uVar14 <= uVar20) {
            uVar14 = uVar20;
          }
          do {
            uVar15 = (uint)uVar16;
            if ((uVar14 == uVar15) || (*(uint *)(unaff_x29 + -0x10) <= (uint)lVar21))
            goto LAB_058b8c50;
            if (*(int *)(*(long *)(unaff_x29 + -0x18) + lVar21 * 4) <=
                *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar15 * 4)) goto LAB_058b8b78;
            uVar16 = (ulong)(uVar15 + 1);
          } while (uVar20 != uVar15 + 1);
          uVar16 = (ulong)uVar20;
        }
LAB_058b8b78:
        lVar21 = lVar21 + 1;
      } while (lVar21 != (int)uVar17);
      *(ulong *)(unaff_x29 + -0x90) = (ulong)uVar17;
    } while( true );
  }
  if ((int)unaff_x19 < unaff_w25) {
LAB_058b8be4:
    bVar7 = 0;
  }
  else {
    bVar7 = FUN_059254d4();
  }
LAB_058b8be8:
  if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return bVar7 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_058b8bbc:
  unaff_x22 = *(long *)(unaff_x29 + -0xa0);
  if (uVar18 <= uVar15) {
LAB_058b8c50:
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
  bVar7 = *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar15 * 4) ==
          *(int *)(unaff_x29 + -0x5c);
  goto LAB_058b8be8;
}


