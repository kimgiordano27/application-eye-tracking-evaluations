/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_FloatParseHandling
ENTRY_POINT: 058b87cc
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


bool Newtonsoft_Json_JsonSerializer__set_FloatParseHandling
               (ulong param_1,uint param_2,ulong param_3)

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
  uint uVar11;
  uint uVar12;
  uint in_w9;
  uint uVar13;
  uint in_w11;
  undefined8 in_x14;
  undefined8 unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  uint uVar14;
  long lVar15;
  long unaff_x24;
  uint unaff_w25;
  undefined8 unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  
code_r0x058b87cc:
  *(uint *)(unaff_x29 + -100) = in_w11;
  *(uint *)(unaff_x29 + -0x60) = in_w9;
  *(undefined8 *)(unaff_x29 + -0x90) = in_x14;
  *(ulong *)(unaff_x29 + -0x88) = param_3;
  *(uint *)(unaff_x29 + -0x68) = param_2;
  do {
    param_1 = (ulong)(int)param_1;
    uVar2 = param_1;
    if ((long)param_1 <= (long)param_3) {
      uVar2 = param_3;
    }
    *(ulong *)(unaff_x29 + -0x80) = uVar2;
    uVar14 = param_2;
    do {
      if (param_1 == *(ulong *)(unaff_x29 + -0x80)) {
        if (unaff_w22 == 0) {
          lVar15 = *(long *)(unaff_x29 + -0xa0);
          bVar7 = false;
          goto LAB_058b8be8;
        }
        uVar16 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar10 = *(undefined8 *)(unaff_x29 + -0x18);
        *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x30);
        *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x28);
        uVar11 = (uint)unaff_x19;
        *(undefined8 *)(unaff_x29 + -0x28) = uVar16;
        *(undefined8 *)(unaff_x29 + -0x30) = uVar10;
        if ((int)uVar11 <= *(int *)(unaff_x29 + -0x74)) {
          uVar12 = *(uint *)(unaff_x29 + -0x28);
LAB_058b8bbc:
          lVar15 = *(long *)(unaff_x29 + -0xa0);
          if (unaff_w22 - 1 < uVar12) {
            bVar7 = *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1) * 4) ==
                    *(int *)(unaff_x29 + -0x5c);
LAB_058b8be8:
            if (*(long *)(lVar15 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return bVar7;
          }
LAB_058b8c50:
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        if ((int)uVar14 < (int)uVar11) {
          if (uVar11 <= uVar14) goto LAB_058b8c50;
          uVar13 = (uint)*(ushort *)(unaff_x28 + (long)(int)uVar14 * 2);
          param_2 = uVar14 + 1;
        }
        else {
          uVar12 = *(uint *)(unaff_x29 + -0x28);
          if (uVar12 <= unaff_w22 - 1) goto LAB_058b8c50;
          uVar13 = *(uint *)(unaff_x29 + -0x94);
          param_2 = uVar14;
          if (*(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1) * 4) ==
              *(int *)(unaff_x29 + -0x5c)) goto LAB_058b8bbc;
        }
        *(uint *)(unaff_x29 + -0x94) = uVar13;
        bVar7 = (uVar13 & 0xffff) == 0x2e;
        *(uint *)(unaff_x29 + -0x74) = uVar14;
        in_x14 = 0;
        param_1 = 0;
        in_w11 = (uint)(!bVar7 || (int)uVar11 <= (int)uVar14);
        unaff_w25 = param_2;
        if (param_2 <= uVar11) {
          unaff_w25 = uVar11;
        }
        param_3 = (ulong)(int)unaff_w22;
        in_w9 = (uint)((int)uVar11 <= (int)param_2) | ((int)uVar14 < (int)uVar11 && bVar7) ^ 1;
        unaff_w22 = 0;
        *(uint *)(unaff_x29 + -0x78) = (uint)(bVar7 || (int)uVar11 <= (int)uVar14);
        goto code_r0x058b87cc;
      }
      if (*(uint *)(unaff_x29 + -0x28) <= (uint)param_1) goto LAB_058b8c50;
      *(ulong *)(unaff_x29 + -0x70) = param_1;
      iVar3 = *(int *)(*(long *)(unaff_x29 + -0x30) + param_1 * 4);
      iVar1 = iVar3 + 2;
      if (-1 < iVar3 + 1) {
        iVar1 = iVar3 + 1;
      }
      if (iVar1 >> 1 < (int)unaff_x27) {
        lVar15 = (long)(iVar1 >> 1);
        do {
          puVar5 = PTR_DAT_0727aa68;
          uVar14 = (uint)lVar15;
          if ((uint)unaff_x27 <= uVar14) goto LAB_058b8c50;
          uVar4 = *(ushort *)(unaff_x21 + lVar15 * 2);
          if (*(int *)(unaff_x29 + -0x10) + -2 <= (int)unaff_w22) {
            iVar1 = *(int *)(unaff_x29 + -0x10) << 1;
            uVar10 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_0727aa68,iVar1);
            puVar6 = PTR_DAT_072970b0;
            auVar17 = FUN_049b37a4(uVar10,*(undefined8 *)PTR_DAT_072970b0);
            FUN_049b3278(unaff_x29 + -0x18,auVar17._0_8_,auVar17._8_8_,
                         *(undefined8 *)PTR_DAT_072970a0);
            uVar10 = *(undefined8 *)puVar5;
            *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar17;
            uVar10 = FUN_032d5d3c(uVar10,iVar1);
            auVar17 = FUN_049b37a4(uVar10,*(undefined8 *)puVar6);
            FUN_049b3278(unaff_x29 + -0x30,auVar17._0_8_,auVar17._8_8_,
                         *(undefined8 *)PTR_DAT_072970a0);
            *(undefined1 (*) [16])(unaff_x29 + -0x30) = auVar17;
            unaff_x21 = *(long *)(unaff_x29 + -0x50);
            unaff_x27 = *(undefined8 *)(unaff_x29 + -0x48);
            unaff_x24 = *(long *)(unaff_x29 + -0x40);
            unaff_x19 = *(undefined8 *)(unaff_x29 + -0x58);
          }
          uVar11 = uVar14 * 2;
          if (uVar4 == 0x2a) {
LAB_058b8984:
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
            uVar14 = unaff_w22 + 1;
            *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar11;
LAB_058b89a0:
            if (*(uint *)(unaff_x29 + -0x10) <= uVar14) goto LAB_058b8c50;
            unaff_w22 = uVar14 + 1;
            *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar14 * 4) = uVar11 | 1;
          }
          else {
            uVar12 = (uint)unaff_x19;
            if ((uVar4 == 0x3c) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
              if ((*(uint *)(unaff_x29 + -0x60) & 1) == 0) {
                uVar14 = *(uint *)(unaff_x29 + -0x68);
                do {
                  if (unaff_w25 == uVar14) goto LAB_058b8c50;
                  if (*(short *)(unaff_x28 + (long)(int)uVar14 * 2) == 0x2e) {
                    bVar7 = true;
                    goto LAB_058b8978;
                  }
                  uVar14 = uVar14 + 1;
                } while (uVar12 != uVar14);
              }
              bVar7 = false;
LAB_058b8978:
              uVar14 = unaff_w22;
              if (bVar7 || *(int *)(unaff_x29 + -100) != 0) goto LAB_058b8984;
              goto LAB_058b89a0;
            }
            if ((uVar4 == 0x3e) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
              if ((*(uint *)(unaff_x29 + -0x78) & 1) == 0) {
LAB_058b8a60:
                if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
                *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar11 + 2;
                unaff_w22 = unaff_w22 + 1;
                break;
              }
            }
            else {
              if ((uVar4 != 0x22) || ((*(uint *)(unaff_x29 + -0x34) & 1) == 0)) {
                if (uVar4 == 0x5c) {
                  uVar14 = uVar14 + 1;
                  if (uVar14 != (uint)unaff_x27) {
                    if (uVar14 < (uint)unaff_x27) {
                      uVar4 = *(ushort *)(unaff_x21 + (long)(int)uVar14 * 2);
                      uVar11 = uVar14 * 2;
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
                  *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar11 + 2;
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
          lVar15 = lVar15 + 1;
          if (lVar15 == unaff_x24) {
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
            *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) =
                 *(undefined4 *)(unaff_x29 + -0x5c);
            unaff_w22 = unaff_w22 + 1;
          }
        } while (lVar15 != unaff_x24);
      }
      param_3 = *(ulong *)(unaff_x29 + -0x88);
      param_2 = *(uint *)(unaff_x29 + -0x68);
      param_1 = *(long *)(unaff_x29 + -0x70) + 1;
      uVar14 = param_2;
    } while (((long)param_3 <= (long)param_1) ||
            ((int)unaff_w22 <= (int)*(undefined8 *)(unaff_x29 + -0x90)));
    uVar14 = *(uint *)(unaff_x29 + -0x28);
    lVar15 = (long)(int)*(undefined8 *)(unaff_x29 + -0x90);
    param_1 = param_1 & 0xffffffff;
    do {
      uVar11 = (uint)param_1;
      if ((int)uVar11 < (int)uVar14) {
        if (uVar11 <= uVar14) {
          uVar11 = uVar14;
        }
        do {
          uVar12 = (uint)param_1;
          if ((uVar11 == uVar12) || (*(uint *)(unaff_x29 + -0x10) <= (uint)lVar15))
          goto LAB_058b8c50;
          if (*(int *)(*(long *)(unaff_x29 + -0x18) + lVar15 * 4) <=
              *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar12 * 4)) goto LAB_058b8b78;
          param_1 = (ulong)(uVar12 + 1);
        } while (uVar14 != uVar12 + 1);
        param_1 = (ulong)uVar14;
      }
LAB_058b8b78:
      lVar15 = lVar15 + 1;
    } while (lVar15 != (int)unaff_w22);
    *(ulong *)(unaff_x29 + -0x90) = (ulong)unaff_w22;
  } while( true );
}


