/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_DateParseHandling
ENTRY_POINT: 058b86d8
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


bool Newtonsoft_Json_JsonSerializer__get_DateParseHandling
               (long param_1,undefined1 param_2 [16],undefined8 param_3)

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
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 in_x9;
  uint uVar18;
  undefined8 unaff_x19;
  long unaff_x21;
  uint uVar19;
  long lVar20;
  long lVar21;
  undefined8 unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  ulong auStack_40 [2];
  ulong uStack_30;
  ulong uStack_20;
  ulong uStack_10;
  
  uStack_30 = param_2._0_8_;
  *(long *)(param_1 + -0x38) = param_2._8_8_;
  *(ulong *)(param_1 + -0x40) = uStack_30;
  *(long *)(param_1 + -0x28) = param_2._8_8_;
  *(ulong *)(param_1 + -0x30) = uStack_30;
  *(undefined8 *)(unaff_x29 + -0x18) = in_x9;
  *(undefined8 *)(unaff_x29 + -0x10) = param_3;
  auStack_40[0] = uStack_30 & 0xffffffff00000000;
  *(int *)(unaff_x29 + -0x5c) = (int)unaff_x27 << 1;
  uVar19 = 0;
  lVar21 = (long)(int)unaff_x27;
  uVar16 = 1;
  *(undefined4 *)(unaff_x29 + -0x94) = 0;
  *(ulong **)(unaff_x29 + -0x30) = auStack_40;
  *(undefined8 *)(unaff_x29 + -0x28) = param_3;
  *(undefined8 *)(unaff_x29 + -0x48) = unaff_x27;
  *(long *)(unaff_x29 + -0x40) = lVar21;
  *(undefined8 *)(unaff_x29 + -0x58) = unaff_x19;
  *(long *)(unaff_x29 + -0x50) = unaff_x21;
  uStack_20 = uStack_30;
  uStack_10 = uStack_30;
Newtonsoft_Json_JsonSerializer__set_DateParseHandling:
  uVar13 = (uint)unaff_x19;
  if ((int)uVar19 < (int)uVar13) {
    if (uVar13 <= uVar19) goto LAB_058b8c50;
    uVar18 = (uint)*(ushort *)(unaff_x28 + (long)(int)uVar19 * 2);
    uVar10 = uVar19 + 1;
  }
  else {
    uVar17 = *(uint *)(unaff_x29 + -0x28);
    uVar14 = uVar16 - 1;
    if (uVar17 <= uVar14) goto LAB_058b8c50;
    uVar18 = *(uint *)(unaff_x29 + -0x94);
    uVar10 = uVar19;
    if (*(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar14 * 4) ==
        *(int *)(unaff_x29 + -0x5c)) goto LAB_058b8bbc;
  }
  *(uint *)(unaff_x29 + -0x94) = uVar18;
  bVar7 = (uVar18 & 0xffff) == 0x2e;
  *(uint *)(unaff_x29 + -0x74) = uVar19;
  uVar15 = 0;
  uVar17 = uVar10;
  if (uVar10 <= uVar13) {
    uVar17 = uVar13;
  }
  uVar12 = (ulong)(int)uVar16;
  uVar16 = 0;
  *(uint *)(unaff_x29 + -0x78) = (uint)(bVar7 || (int)uVar13 <= (int)uVar19);
  *(uint *)(unaff_x29 + -100) = (uint)(!bVar7 || (int)uVar13 <= (int)uVar19);
  *(uint *)(unaff_x29 + -0x60) =
       (uint)((int)uVar13 <= (int)uVar10) | ((int)uVar19 < (int)uVar13 && bVar7) ^ 1;
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  *(ulong *)(unaff_x29 + -0x88) = uVar12;
  *(uint *)(unaff_x29 + -0x68) = uVar10;
  do {
    uVar15 = (ulong)(int)uVar15;
    uVar2 = uVar15;
    if ((long)uVar15 <= (long)uVar12) {
      uVar2 = uVar12;
    }
    *(ulong *)(unaff_x29 + -0x80) = uVar2;
    uVar19 = uVar10;
    do {
      if (uVar15 == *(ulong *)(unaff_x29 + -0x80)) {
        if (uVar16 == 0) {
          lVar21 = *(long *)(unaff_x29 + -0xa0);
          bVar7 = false;
          goto LAB_058b8be8;
        }
        uVar22 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar11 = *(undefined8 *)(unaff_x29 + -0x18);
        *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x30);
        *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x28);
        *(undefined8 *)(unaff_x29 + -0x28) = uVar22;
        *(undefined8 *)(unaff_x29 + -0x30) = uVar11;
        if (*(int *)(unaff_x29 + -0x74) < (int)unaff_x19)
        goto Newtonsoft_Json_JsonSerializer__set_DateParseHandling;
        uVar17 = *(uint *)(unaff_x29 + -0x28);
        uVar14 = uVar16 - 1;
        goto LAB_058b8bbc;
      }
      if (*(uint *)(unaff_x29 + -0x28) <= (uint)uVar15) goto LAB_058b8c50;
      *(ulong *)(unaff_x29 + -0x70) = uVar15;
      iVar3 = *(int *)(*(long *)(unaff_x29 + -0x30) + uVar15 * 4);
      iVar1 = iVar3 + 2;
      if (-1 < iVar3 + 1) {
        iVar1 = iVar3 + 1;
      }
      if (iVar1 >> 1 < (int)unaff_x27) {
        lVar20 = (long)(iVar1 >> 1);
        do {
          puVar5 = PTR_DAT_0727aa68;
          uVar19 = (uint)lVar20;
          if ((uint)unaff_x27 <= uVar19) goto LAB_058b8c50;
          uVar4 = *(ushort *)(unaff_x21 + lVar20 * 2);
          if (*(int *)(unaff_x29 + -0x10) + -2 <= (int)uVar16) {
            iVar1 = *(int *)(unaff_x29 + -0x10) << 1;
            uVar11 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_0727aa68,iVar1);
            puVar6 = PTR_DAT_072970b0;
            auVar23 = FUN_049b37a4(uVar11,*(undefined8 *)PTR_DAT_072970b0);
            FUN_049b3278(unaff_x29 + -0x18,auVar23._0_8_,auVar23._8_8_,
                         *(undefined8 *)PTR_DAT_072970a0);
            uVar11 = *(undefined8 *)puVar5;
            *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar23;
            uVar11 = FUN_032d5d3c(uVar11,iVar1);
            auVar23 = FUN_049b37a4(uVar11,*(undefined8 *)puVar6);
            FUN_049b3278(unaff_x29 + -0x30,auVar23._0_8_,auVar23._8_8_,
                         *(undefined8 *)PTR_DAT_072970a0);
            *(undefined1 (*) [16])(unaff_x29 + -0x30) = auVar23;
            unaff_x21 = *(long *)(unaff_x29 + -0x50);
            unaff_x27 = *(undefined8 *)(unaff_x29 + -0x48);
            lVar21 = *(long *)(unaff_x29 + -0x40);
            unaff_x19 = *(undefined8 *)(unaff_x29 + -0x58);
          }
          uVar13 = uVar19 * 2;
          if (uVar4 == 0x2a) {
LAB_058b8984:
            if (*(uint *)(unaff_x29 + -0x10) <= uVar16) goto LAB_058b8c50;
            uVar19 = uVar16 + 1;
            *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar16 * 4) = uVar13;
LAB_058b89a0:
            if (*(uint *)(unaff_x29 + -0x10) <= uVar19) goto LAB_058b8c50;
            uVar16 = uVar19 + 1;
            *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar19 * 4) = uVar13 | 1;
          }
          else {
            uVar14 = (uint)unaff_x19;
            if ((uVar4 == 0x3c) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
              if ((*(uint *)(unaff_x29 + -0x60) & 1) == 0) {
                uVar19 = *(uint *)(unaff_x29 + -0x68);
                do {
                  if (uVar17 == uVar19) goto LAB_058b8c50;
                  if (*(short *)(unaff_x28 + (long)(int)uVar19 * 2) == 0x2e) {
                    bVar7 = true;
                    goto LAB_058b8978;
                  }
                  uVar19 = uVar19 + 1;
                } while (uVar14 != uVar19);
              }
              bVar7 = false;
LAB_058b8978:
              uVar19 = uVar16;
              if (bVar7 || *(int *)(unaff_x29 + -100) != 0) goto LAB_058b8984;
              goto LAB_058b89a0;
            }
            if ((uVar4 == 0x3e) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
              if ((*(uint *)(unaff_x29 + -0x78) & 1) == 0) {
LAB_058b8a60:
                if (*(uint *)(unaff_x29 + -0x10) <= uVar16) goto LAB_058b8c50;
                *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar16 * 4) = uVar13 + 2;
                uVar16 = uVar16 + 1;
                break;
              }
            }
            else {
              if ((uVar4 != 0x22) || ((*(uint *)(unaff_x29 + -0x34) & 1) == 0)) {
                if (uVar4 == 0x5c) {
                  uVar19 = uVar19 + 1;
                  if (uVar19 != (uint)unaff_x27) {
                    if (uVar19 < (uint)unaff_x27) {
                      uVar4 = *(ushort *)(unaff_x21 + (long)(int)uVar19 * 2);
                      uVar13 = uVar19 * 2;
                      goto LAB_058b8a90;
                    }
                    goto LAB_058b8c50;
                  }
                  if (*(uint *)(unaff_x29 + -0x10) <= uVar16) goto LAB_058b8c50;
                  *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar16 * 4) =
                       *(undefined4 *)(unaff_x29 + -0x5c);
                }
                else {
LAB_058b8a90:
                  if ((int)uVar14 <= *(int *)(unaff_x29 + -0x74)) break;
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
                  if (*(uint *)(unaff_x29 + -0x10) <= uVar16) goto LAB_058b8c50;
                  *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar16 * 4) = uVar13 + 2;
                }
                uVar16 = uVar16 + 1;
                break;
              }
              if (*(int *)(unaff_x29 + -0x74) < (int)uVar14) {
                if ((*(uint *)(unaff_x29 + -0x94) & 0xffff) == 0x2e) goto LAB_058b8a60;
                break;
              }
            }
          }
          lVar20 = lVar20 + 1;
          if (lVar20 == lVar21) {
            if (*(uint *)(unaff_x29 + -0x10) <= uVar16) goto LAB_058b8c50;
            *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar16 * 4) =
                 *(undefined4 *)(unaff_x29 + -0x5c);
            uVar16 = uVar16 + 1;
          }
        } while (lVar20 != lVar21);
      }
      uVar12 = *(ulong *)(unaff_x29 + -0x88);
      uVar10 = *(uint *)(unaff_x29 + -0x68);
      uVar15 = *(long *)(unaff_x29 + -0x70) + 1;
      uVar19 = uVar10;
    } while (((long)uVar12 <= (long)uVar15) ||
            ((int)uVar16 <= (int)*(undefined8 *)(unaff_x29 + -0x90)));
    uVar19 = *(uint *)(unaff_x29 + -0x28);
    lVar20 = (long)(int)*(undefined8 *)(unaff_x29 + -0x90);
    uVar15 = uVar15 & 0xffffffff;
    do {
      uVar13 = (uint)uVar15;
      if ((int)uVar13 < (int)uVar19) {
        if (uVar13 <= uVar19) {
          uVar13 = uVar19;
        }
        do {
          uVar14 = (uint)uVar15;
          if ((uVar13 == uVar14) || (*(uint *)(unaff_x29 + -0x10) <= (uint)lVar20))
          goto LAB_058b8c50;
          if (*(int *)(*(long *)(unaff_x29 + -0x18) + lVar20 * 4) <=
              *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar14 * 4)) goto LAB_058b8b78;
          uVar15 = (ulong)(uVar14 + 1);
        } while (uVar19 != uVar14 + 1);
        uVar15 = (ulong)uVar19;
      }
LAB_058b8b78:
      lVar20 = lVar20 + 1;
    } while (lVar20 != (int)uVar16);
    *(ulong *)(unaff_x29 + -0x90) = (ulong)uVar16;
  } while( true );
LAB_058b8bbc:
  lVar21 = *(long *)(unaff_x29 + -0xa0);
  if (uVar14 < uVar17) {
    bVar7 = *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar14 * 4) ==
            *(int *)(unaff_x29 + -0x5c);
LAB_058b8be8:
    if (*(long *)(lVar21 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return bVar7;
  }
LAB_058b8c50:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


