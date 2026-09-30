/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_CheckAdditionalContent
ENTRY_POINT: 058b8b64
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


bool Newtonsoft_Json_JsonSerializer__set_CheckAdditionalContent
               (ulong param_1,uint param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  char in_NG;
  char in_OV;
  bool bVar7;
  short sVar8;
  short sVar9;
  undefined8 uVar10;
  uint in_w9;
  uint uVar11;
  uint uVar12;
  uint in_w10;
  long in_x11;
  long in_x12;
  long in_x13;
  long in_x14;
  uint in_w15;
  uint uVar13;
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
  
  do {
    uVar14 = param_2;
    if (in_NG == in_OV) {
LAB_058b8b78:
      do {
        in_x13 = in_x13 + 1;
        param_2 = uVar14;
        if (in_x13 == in_x14) {
          *(ulong *)(unaff_x29 + -0x90) = (ulong)unaff_w22;
          do {
            param_1 = (ulong)(int)param_1;
            uVar2 = param_1;
            if ((long)param_1 <= (long)param_3) {
              uVar2 = param_3;
            }
            *(ulong *)(unaff_x29 + -0x80) = uVar2;
            param_2 = uVar14;
            while (param_1 != *(ulong *)(unaff_x29 + -0x80)) {
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
                  uVar13 = uVar14 * 2;
                  if (uVar4 == 0x2a) {
LAB_058b8984:
                    if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
                    uVar14 = unaff_w22 + 1;
                    *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar13;
LAB_058b89a0:
                    if (*(uint *)(unaff_x29 + -0x10) <= uVar14) goto LAB_058b8c50;
                    unaff_w22 = uVar14 + 1;
                    *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar14 * 4) = uVar13 | 1;
                  }
                  else {
                    uVar11 = (uint)unaff_x19;
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
                        } while (uVar11 != uVar14);
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
                        *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) =
                             uVar13 + 2;
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
                              uVar13 = uVar14 * 2;
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
                          if ((int)uVar11 <= *(int *)(unaff_x29 + -0x74)) break;
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
                          *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) =
                               uVar13 + 2;
                        }
                        unaff_w22 = unaff_w22 + 1;
                        break;
                      }
                      if (*(int *)(unaff_x29 + -0x74) < (int)uVar11) {
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
              if (((long)param_1 < (long)param_3) &&
                 ((int)*(undefined8 *)(unaff_x29 + -0x90) < (int)unaff_w22)) {
                in_w9 = *(uint *)(unaff_x29 + -0x28);
                in_w10 = *(uint *)(unaff_x29 + -0x10);
                in_x11 = *(long *)(unaff_x29 + -0x18);
                in_x12 = *(long *)(unaff_x29 + -0x30);
                in_x13 = (long)(int)*(undefined8 *)(unaff_x29 + -0x90);
                in_x14 = (long)(int)unaff_w22;
                param_1 = param_1 & 0xffffffff;
                goto LAB_058b8b3c;
              }
            }
            if (unaff_w22 == 0) {
              lVar15 = *(long *)(unaff_x29 + -0xa0);
              bVar7 = false;
              goto LAB_058b8be8;
            }
            uVar16 = *(undefined8 *)(unaff_x29 + -0x10);
            uVar10 = *(undefined8 *)(unaff_x29 + -0x18);
            *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x30);
            *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x28);
            uVar13 = (uint)unaff_x19;
            *(undefined8 *)(unaff_x29 + -0x28) = uVar16;
            *(undefined8 *)(unaff_x29 + -0x30) = uVar10;
            if ((int)uVar13 <= *(int *)(unaff_x29 + -0x74)) {
              uVar11 = *(uint *)(unaff_x29 + -0x28);
LAB_058b8bbc:
              lVar15 = *(long *)(unaff_x29 + -0xa0);
              if (unaff_w22 - 1 < uVar11) {
                bVar7 = *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1) * 4) ==
                        *(int *)(unaff_x29 + -0x5c);
LAB_058b8be8:
                if (*(long *)(lVar15 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
                }
                return bVar7;
              }
              goto LAB_058b8c50;
            }
            if ((int)param_2 < (int)uVar13) {
              if (uVar13 <= param_2) goto LAB_058b8c50;
              uVar12 = (uint)*(ushort *)(unaff_x28 + (long)(int)param_2 * 2);
              uVar14 = param_2 + 1;
            }
            else {
              uVar11 = *(uint *)(unaff_x29 + -0x28);
              if (uVar11 <= unaff_w22 - 1) goto LAB_058b8c50;
              uVar12 = *(uint *)(unaff_x29 + -0x94);
              uVar14 = param_2;
              if (*(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1) * 4) ==
                  *(int *)(unaff_x29 + -0x5c)) goto LAB_058b8bbc;
            }
            *(uint *)(unaff_x29 + -0x94) = uVar12;
            bVar7 = (uVar12 & 0xffff) == 0x2e;
            *(uint *)(unaff_x29 + -0x74) = param_2;
            param_1 = 0;
            unaff_w25 = uVar14;
            if (uVar14 <= uVar13) {
              unaff_w25 = uVar13;
            }
            param_3 = (ulong)(int)unaff_w22;
            unaff_w22 = 0;
            *(uint *)(unaff_x29 + -0x78) = (uint)(bVar7 || (int)uVar13 <= (int)param_2);
            *(uint *)(unaff_x29 + -100) = (uint)(!bVar7 || (int)uVar13 <= (int)param_2);
            *(uint *)(unaff_x29 + -0x60) =
                 (uint)((int)uVar13 <= (int)uVar14) | ((int)param_2 < (int)uVar13 && bVar7) ^ 1;
            *(undefined8 *)(unaff_x29 + -0x90) = 0;
            *(ulong *)(unaff_x29 + -0x88) = param_3;
            *(uint *)(unaff_x29 + -0x68) = uVar14;
          } while( true );
        }
LAB_058b8b3c:
        in_w15 = (uint)param_1;
        uVar14 = param_2;
      } while ((int)in_w9 <= (int)in_w15);
      if (in_w15 <= in_w9) {
        in_w15 = in_w9;
      }
    }
    else {
      uVar13 = (int)param_1 + 1;
      param_1 = (ulong)uVar13;
      if (in_w9 == uVar13) {
        param_1 = (ulong)in_w9;
        goto LAB_058b8b78;
      }
    }
    if ((in_w15 == (uint)param_1) || (in_w10 <= (uint)in_x13)) {
LAB_058b8c50:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    iVar1 = *(int *)(in_x12 + (long)(int)(uint)param_1 * 4);
    iVar3 = *(int *)(in_x11 + in_x13 * 4);
    in_OV = SBORROW4(iVar1,iVar3);
    in_NG = iVar1 - iVar3 < 0;
  } while( true );
}


