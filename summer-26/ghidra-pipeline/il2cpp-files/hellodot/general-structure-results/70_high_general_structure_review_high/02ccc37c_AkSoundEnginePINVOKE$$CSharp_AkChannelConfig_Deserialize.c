/*
FUNCTION_NAME: AkSoundEnginePINVOKE$$CSharp_AkChannelConfig_Deserialize
ENTRY_POINT: 02ccc37c
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AkSoundEnginePINVOKE__CSharp_AkChannelConfig_Deserialize
               (ulong param_1,double param_2,double param_3,undefined1 param_4 [16],
               undefined1 param_5 [16])

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint *puVar9;
  int *piVar10;
  uint *puVar11;
  void *pvVar12;
  double *pdVar13;
  void *pvVar14;
  void *pvVar15;
  ushort uVar16;
  void *pvVar17;
  long lVar18;
  uint *puVar19;
  ushort *puVar20;
  void *pvVar21;
  ulong in_x9;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  uint *puVar27;
  undefined2 *puVar28;
  double *in_x10;
  int iVar29;
  long lVar30;
  long lVar31;
  uint uVar32;
  long lVar33;
  int *piVar34;
  ulong uVar35;
  ulong uVar36;
  long in_x14;
  long lVar37;
  long in_x15;
  long unaff_x19;
  double *pdVar38;
  long unaff_x20;
  ulong uVar39;
  ulong unaff_x21;
  void *unaff_x22;
  size_t sVar40;
  ulong unaff_x23;
  ulong uVar41;
  int unaff_w24;
  void *unaff_x25;
  ulong unaff_x26;
  double *unaff_x27;
  size_t unaff_x28;
  void *unaff_x29;
  undefined8 uVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  ulong uVar47;
  undefined8 uVar48;
  ulong uVar49;
  undefined8 uVar50;
  double dVar51;
  double dVar52;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  double unaff_d12;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  ulong in_stack_00000050;
  long in_stack_00000058;
  void *in_stack_00000060;
  long in_stack_00000068;
  uint *in_stack_00000070;
  uint *in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  void *in_stack_00000090;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  undefined2 *in_stack_000000b0;
  ulong in_stack_000000b8;
  uint *puStack00000000000000c0;
  ulong uStack00000000000000c8;
  void *in_stack_000000d0;
  ulong in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  undefined8 in_stack_00000100;
  long in_stack_00000108;
  double *in_stack_00000110;
  void *in_stack_00000118;
  
  lVar18 = param_5._8_8_;
  lVar24 = param_5._0_8_;
code_r0x02ccc37c:
  *(double *)((long)unaff_x22 + in_x9 * 8) = param_3;
  if (param_3 < param_2) {
    *(char *)((long)unaff_x25 + param_1) = (char)in_x9;
    param_2 = param_3;
  }
  in_x9 = in_x9 + 1;
  if (unaff_x26 == in_x9) {
    dVar46 = unaff_d9;
    if (param_1 < 2000) {
      dVar46 = (((double)param_1 * unaff_d10) / unaff_d11 + unaff_d12) * unaff_d9;
    }
    uVar22 = 0;
    do {
      dVar51 = *(double *)((long)unaff_x22 + uVar22 * 8) - param_2;
      *(double *)((long)unaff_x22 + uVar22 * 8) = dVar51;
      if (dVar46 <= dVar51) {
        *(double *)((long)unaff_x22 + uVar22 * 8) = dVar46;
        lVar30 = param_1 * unaff_x21 + (uVar22 >> 3);
        *(byte *)((long)unaff_x29 + lVar30) =
             *(byte *)((long)unaff_x29 + lVar30) | (byte)(unaff_w24 << (uVar22 & 7));
      }
      uVar22 = uVar22 + 1;
    } while (unaff_x26 != uVar22);
    param_1 = param_1 + 1;
    if (param_1 == unaff_x28) {
      if (in_stack_00000080 == 0) goto LAB_02ccc474;
      uVar23 = (ulong)*(byte *)((long)unaff_x25 + in_stack_00000080);
      uVar22 = 1;
      pvVar17 = (void *)((long)unaff_x29 + in_stack_00000058 * unaff_x21);
      lVar30 = unaff_x19;
      do {
        if ((*(byte *)((long)pvVar17 + (uVar23 >> 3)) >> (uVar23 & 7) & 1) != 0) {
          if ((uint)*(byte *)(in_x15 + lVar30) != (uint)uVar23) {
            uVar22 = uVar22 + 1;
          }
          uVar23 = (ulong)(uint)*(byte *)(in_x15 + lVar30);
        }
        *(char *)(in_x15 + lVar30) = (char)uVar23;
        lVar30 = lVar30 + -1;
        pvVar17 = (void *)((long)pvVar17 - unaff_x21);
      } while (lVar30 != 1);
      do {
        if (in_stack_000000b8 != 0) {
          uVar23 = in_stack_000000b8 + 1 & 0xfffffffffffffffe;
          puVar28 = in_stack_000000b0;
          uVar47 = in_stack_000000a0;
          uVar49 = in_stack_000000a8;
          do {
            if (uVar47 <= unaff_x23) {
              puVar28[-1] = 0x100;
            }
            if (uVar49 <= unaff_x23) {
              *puVar28 = 0x100;
            }
            uVar47 = uVar47 + lVar24;
            uVar49 = uVar49 + lVar18;
            uVar23 = uVar23 - 2;
            puVar28 = puVar28 + 2;
          } while (uVar23 != 0);
        }
        lVar24 = 0;
        uVar16 = 0;
        do {
          if (*(short *)(unaff_x20 + (ulong)*(byte *)((long)unaff_x25 + lVar24) * 2) == 0x100) {
            *(ushort *)(unaff_x20 + (ulong)*(byte *)((long)unaff_x25 + lVar24) * 2) = uVar16;
            uVar16 = uVar16 + 1;
          }
          lVar24 = lVar24 + 1;
        } while (unaff_x19 != lVar24);
        lVar24 = 0;
        do {
          *(char *)((long)unaff_x25 + lVar24) =
               (char)*(undefined2 *)(unaff_x20 + (ulong)*(byte *)((long)unaff_x25 + lVar24) * 2);
          lVar24 = lVar24 + 1;
        } while (unaff_x19 != lVar24);
        in_stack_000000b8 = (ulong)uVar16;
        uVar23 = in_stack_000000b8;
        pvVar17 = in_stack_00000060;
        if (uVar16 != 0) {
          do {
            memset(pvVar17,0,0x408);
            *(undefined8 *)((long)pvVar17 + 0x408) = 0x7ff0000000000000;
            uVar23 = uVar23 - 1;
            pvVar17 = (void *)((long)pvVar17 + 0x410);
          } while (uVar23 != 0);
        }
        lVar24 = 0;
        do {
          bVar3 = *(byte *)((long)unaff_x25 + lVar24);
          pbVar1 = (byte *)(in_stack_00000108 + lVar24);
          lVar24 = lVar24 + 1;
          *(int *)((long)in_stack_00000060 + (ulong)*pbVar1 * 4 + (ulong)bVar3 * 0x410) =
               *(int *)((long)in_stack_00000060 + (ulong)*pbVar1 * 4 + (ulong)bVar3 * 0x410) + 1;
          *(long *)((long)in_stack_00000060 + (ulong)bVar3 * 0x410 + 0x400) =
               *(long *)((long)in_stack_00000060 + (ulong)bVar3 * 0x410 + 0x400) + 1;
        } while (in_stack_000000f0 != lVar24);
        in_stack_000000f8 = in_stack_000000f8 + 1;
        if ((void *)in_stack_000000f8 == in_stack_000000d0) {
          FUN_02cd98fc(in_stack_00000100,in_stack_00000110);
          FUN_02cd98fc(in_stack_00000100);
          FUN_02cd98fc(in_stack_00000100);
          FUN_02cd98fc(in_stack_00000100,unaff_x20);
          FUN_02cd98fc(in_stack_00000100,in_stack_00000060);
          sVar40 = uVar22 << 2;
          if (uVar22 == 0) {
            puVar9 = (uint *)0x0;
            piVar10 = (int *)0x0;
            in_stack_000000e0 = 0xf;
            lVar24 = 0x3cf0;
LAB_02ccc634:
            in_stack_00000090 = (void *)FUN_02cd98d8(in_stack_00000100,lVar24);
            in_stack_000000d0 = (void *)FUN_02cd98d8(in_stack_00000100,in_stack_000000e0 << 2);
          }
          else {
            puVar9 = (uint *)FUN_02cd98d8(in_stack_00000100,sVar40);
            piVar10 = (int *)FUN_02cd98d8(in_stack_00000100,sVar40);
            in_stack_000000e0 = uVar22 * 0x10 + 0x3f0 >> 6;
            if (in_stack_000000e0 != 0) {
              lVar24 = in_stack_000000e0 * 0x410;
              goto LAB_02ccc634;
            }
            in_stack_00000090 = (void *)0x0;
            in_stack_000000e0 = 0;
            in_stack_000000d0 = (void *)0x0;
          }
          uVar23 = uVar22;
          if (0x3f < uVar22) {
            uVar23 = 0x40;
          }
          if (uVar23 == 0) {
            lVar24 = 0;
          }
          else {
            lVar24 = FUN_02cd98d8(in_stack_00000100,uVar23 * 0x410);
          }
          in_stack_00000078 = (uint *)FUN_02cd98d8(in_stack_00000100,0xc018);
          memset(&stack0x00000420,0,0x100);
          memset(&stack0x00000320,0,0x100);
          memset(&stack0x00000220,0,0x100);
          memset(&stack0x00000120,0,0x100);
          memset(piVar10,0,sVar40);
          lVar18 = 0;
          lVar30 = 0;
          do {
            piVar10[lVar18] = piVar10[lVar18] + 1;
            if ((in_stack_00000018 + in_stack_00000020 + -1 == lVar30) ||
               (*(char *)((long)unaff_x25 + lVar30) != ((char *)((long)unaff_x25 + lVar30))[1])) {
              lVar18 = lVar18 + 1;
            }
            lVar30 = lVar30 + 1;
          } while (in_stack_00000018 + in_stack_00000020 != lVar30);
          if (uVar22 == 0) {
            uVar23 = 0;
          }
          else {
            uVar47 = 0;
            uVar23 = 0;
            lVar18 = 0;
            in_stack_000000f0 = 0;
            in_stack_000000f8 = 0;
            uStack00000000000000c8 = in_stack_000000e0;
            uVar49 = uVar22;
            puVar11 = puVar9;
            do {
              uVar41 = uVar49 - 0x40;
              uVar25 = uVar22 - uVar47;
              if (0x3f < uVar49) {
                uVar49 = 0x40;
              }
              if (0x3f < uVar25) {
                uVar25 = 0x40;
              }
              if (uVar25 != 0) {
                uVar39 = 0;
                do {
                  pvVar17 = (void *)(lVar24 + uVar39 * 0x410);
                  memset(pvVar17,0,0x408);
                  *(undefined8 *)((long)pvVar17 + 0x408) = 0x7ff0000000000000;
                  if (piVar10[uVar39 + uVar47] != 0) {
                    lVar30 = lVar24 + uVar39 * 0x410;
                    lVar31 = *(long *)(lVar30 + 0x400);
                    uVar26 = 0;
                    do {
                      uVar35 = (ulong)*(byte *)(in_stack_00000108 + lVar18 + uVar26);
                      lVar37 = lVar24 + uVar39 * 0x410;
                      lVar33 = lVar31 + 1 + uVar26;
                      uVar26 = uVar26 + 1;
                      *(int *)(lVar37 + uVar35 * 4) = *(int *)(lVar37 + uVar35 * 4) + 1;
                      *(long *)(lVar30 + 0x400) = lVar33;
                    } while (uVar26 < (uint)piVar10[uVar39 + uVar47]);
                    lVar18 = lVar18 + uVar26;
                  }
                  uVar42 = FUN_02c854ac(pvVar17);
                  *(undefined8 *)((long)pvVar17 + 0x408) = uVar42;
                  *(int *)(&stack0x00000220 + uVar39 * 4) = (int)uVar39;
                  *(int *)(&stack0x00000320 + uVar39 * 4) = (int)uVar39;
                  *(undefined4 *)(&stack0x00000420 + uVar39 * 4) = 1;
                  uVar39 = uVar39 + 1;
                } while (uVar39 != uVar49);
              }
              lVar30 = FUN_02cdee8c(lVar24,&stack0x00000420,&stack0x00000220,&stack0x00000320,
                                    in_stack_00000078,uVar25,uVar25,0x40);
              uVar39 = lVar30 + in_stack_000000f8;
              if (in_stack_000000e0 < uVar39) {
                uVar26 = uVar39;
                if (in_stack_000000e0 != 0) {
                  uVar26 = in_stack_000000e0;
                }
                do {
                  uVar35 = uVar26;
                  uVar26 = uVar35 << 1;
                } while (uVar35 < uVar39);
                if (uVar35 == 0) {
                  pvVar17 = (void *)0x0;
                }
                else {
                  pvVar17 = (void *)FUN_02cd98d8(in_stack_00000100,uVar35 * 0x410);
                }
                if (in_stack_000000e0 != 0) {
                  memcpy(pvVar17,in_stack_00000090,in_stack_000000e0 * 0x410);
                }
                FUN_02cd98fc(in_stack_00000100,in_stack_00000090);
                in_stack_000000e0 = uVar35;
                in_stack_00000090 = pvVar17;
              }
              uVar39 = lVar30 + in_stack_000000f0;
              if (uStack00000000000000c8 < uVar39) {
                uVar26 = uVar39;
                if (uStack00000000000000c8 != 0) {
                  uVar26 = uStack00000000000000c8;
                }
                do {
                  uVar35 = uVar26;
                  uVar26 = uVar35 << 1;
                } while (uVar35 < uVar39);
                if (uVar35 == 0) {
                  pvVar17 = (void *)0x0;
                }
                else {
                  pvVar17 = (void *)FUN_02cd98d8(in_stack_00000100,uVar35 << 2);
                }
                if (uStack00000000000000c8 != 0) {
                  memcpy(pvVar17,in_stack_000000d0,uStack00000000000000c8 << 2);
                }
                FUN_02cd98fc(in_stack_00000100,in_stack_000000d0);
                in_stack_000000d0 = pvVar17;
                uStack00000000000000c8 = uVar35;
              }
              if (lVar30 != 0) {
                lVar31 = 0;
                pvVar17 = (void *)((long)in_stack_00000090 + in_stack_000000f8 * 0x410);
                do {
                  uVar32 = *(uint *)(&stack0x00000320 + lVar31 * 4);
                  memcpy(pvVar17,(void *)(lVar24 + (ulong)uVar32 * 0x410),0x410);
                  pvVar17 = (void *)((long)pvVar17 + 0x410);
                  *(undefined4 *)((long)in_stack_000000d0 + lVar31 * 4 + in_stack_000000f0 * 4) =
                       *(undefined4 *)(&stack0x00000420 + (ulong)uVar32 * 4);
                  *(int *)(&stack0x00000120 + (ulong)*(uint *)(&stack0x00000320 + lVar31 * 4) * 4) =
                       (int)lVar31;
                  lVar31 = lVar31 + 1;
                } while (lVar30 != lVar31);
                in_stack_000000f8 = in_stack_000000f8 + lVar31;
                in_stack_000000f0 = in_stack_000000f0 + lVar31;
              }
              if (uVar25 != 0) {
                puVar19 = (uint *)&stack0x00000220;
                puVar27 = puVar11;
                do {
                  uVar49 = uVar49 - 1;
                  *puVar27 = *(int *)(&stack0x00000120 + (ulong)*puVar19 * 4) + (int)uVar23;
                  puVar19 = puVar19 + 1;
                  puVar27 = puVar27 + 1;
                } while (uVar49 != 0);
              }
              uVar47 = uVar47 + 0x40;
              uVar23 = lVar30 + uVar23;
              puVar11 = puVar11 + 0x40;
              uVar49 = uVar41;
            } while (uVar47 < uVar22);
          }
          FUN_02cd98fc(in_stack_00000100,lVar24);
          uVar49 = (uVar23 >> 1) * uVar23;
          uVar47 = uVar23 << 6;
          if (uVar49 <= uVar23 << 6) {
            uVar47 = uVar49;
          }
          if (0x801 < uVar47 + 1) {
            FUN_02cd98fc(in_stack_00000100,in_stack_00000078);
            in_stack_00000078 = (uint *)FUN_02cd98d8(in_stack_00000100,(uVar47 + 1) * 0x18);
          }
          sVar40 = uVar23 << 2;
          if (uVar23 == 0) {
            puVar11 = (uint *)0x0;
          }
          else {
            puVar11 = (uint *)FUN_02cd98d8(uVar23,in_stack_00000100,sVar40);
            uVar47 = 0;
            do {
              puVar11[uVar47] = (uint)uVar47;
              uVar47 = uVar47 + 1;
            } while (uVar23 != uVar47);
          }
          lVar24 = FUN_02cdee8c(in_stack_00000090,in_stack_000000d0,puVar9,puVar11,in_stack_00000078
                                ,uVar23,uVar22,0x100);
          FUN_02cd98fc(in_stack_00000100,in_stack_00000078);
          FUN_02cd98fc(in_stack_00000100,in_stack_000000d0);
          if (uVar23 == 0) {
            in_stack_00000118 = (void *)0x0;
          }
          else {
            in_stack_00000118 = (void *)FUN_02cd98d8(in_stack_00000100,sVar40);
            memset(in_stack_00000118,0xff,sVar40);
          }
          if (uVar22 != 0) {
            uVar23 = 0;
            lVar18 = 0;
            iVar29 = 0;
            do {
              memset(&stack0x00000520,0,0x408);
              if (piVar10[uVar23] != 0) {
                uVar47 = 0;
                do {
                  uVar49 = (ulong)*(byte *)(in_stack_00000108 + lVar18 + uVar47);
                  uVar47 = uVar47 + 1;
                  *(int *)(&stack0x00000520 + uVar49 * 4) =
                       *(int *)(&stack0x00000520 + uVar49 * 4) + 1;
                } while (uVar47 < (uint)piVar10[uVar23]);
                lVar18 = lVar18 + uVar47;
              }
              puVar19 = puVar9;
              if (uVar23 != 0) {
                puVar19 = puVar9 + (uVar23 - 1);
              }
              uVar47 = (ulong)*puVar19;
              dVar46 = (double)FUN_02cdf160(&stack0x00000520,
                                            (void *)((long)in_stack_00000090 + uVar47 * 0x410));
              puVar19 = puVar11;
              for (lVar30 = lVar24; lVar30 != 0; lVar30 = lVar30 + -1) {
                dVar51 = (double)FUN_02cdf160(&stack0x00000520,
                                              (void *)((long)in_stack_00000090 +
                                                      (ulong)*puVar19 * 0x410));
                if (dVar51 < dVar46) {
                  uVar47 = (ulong)*puVar19;
                  dVar46 = dVar51;
                }
                puVar19 = puVar19 + 1;
              }
              puVar9[uVar23] = (uint)uVar47;
              if (*(int *)((long)in_stack_00000118 + uVar47 * 4) == -1) {
                *(int *)((long)in_stack_00000118 + uVar47 * 4) = iVar29;
                iVar29 = iVar29 + 1;
              }
              uVar23 = uVar23 + 1;
            } while (uVar23 != uVar22);
          }
          FUN_02cd98fc(in_stack_00000100,puVar11);
          FUN_02cd98fc(in_stack_00000100,in_stack_00000090);
          sVar40 = in_stack_00000048[4];
          if (sVar40 < uVar22) {
            uVar23 = uVar22;
            if (sVar40 != 0) {
              uVar23 = sVar40;
            }
            do {
              uVar47 = uVar23;
              uVar23 = uVar47 << 1;
            } while (uVar47 < uVar22);
            if (uVar47 == 0) {
              pvVar17 = (void *)0x0;
            }
            else {
              pvVar17 = (void *)FUN_02cd98d8(in_stack_00000100,uVar47);
              sVar40 = in_stack_00000048[4];
            }
            if (sVar40 != 0) {
              memcpy(pvVar17,(void *)in_stack_00000048[2],sVar40);
            }
            FUN_02cd98fc(in_stack_00000100,in_stack_00000048[2]);
            in_stack_00000048[2] = (long)pvVar17;
            in_stack_00000048[4] = uVar47;
          }
          uVar23 = in_stack_00000048[5];
          if (uVar23 < uVar22) {
            uVar47 = uVar22;
            if (uVar23 != 0) {
              uVar47 = uVar23;
            }
            do {
              uVar49 = uVar47;
              uVar47 = uVar49 << 1;
            } while (uVar49 < uVar22);
            if (uVar49 == 0) {
              pvVar17 = (void *)0x0;
            }
            else {
              pvVar17 = (void *)FUN_02cd98d8(in_stack_00000100,uVar49 << 2);
              uVar23 = in_stack_00000048[5];
            }
            if (uVar23 != 0) {
              memcpy(pvVar17,(void *)in_stack_00000048[3],uVar23 << 2);
            }
            FUN_02cd98fc(in_stack_00000100,in_stack_00000048[3]);
            in_stack_00000048[5] = uVar49;
            in_stack_00000048[3] = (long)pvVar17;
          }
          if (uVar22 == 0) {
            lVar24 = 0;
            uVar23 = 0;
          }
          else {
            uVar23 = 0;
            lVar24 = 0;
            iVar29 = 0;
            piVar34 = piVar10;
            puVar11 = puVar9;
            do {
              iVar29 = *piVar34 + iVar29;
              if ((uVar22 == 1) || (*puVar11 != puVar11[1])) {
                uVar2 = *(uint *)((long)in_stack_00000118 + (ulong)*puVar11 * 4);
                *(char *)(in_stack_00000048[2] + lVar24) = (char)uVar2;
                uVar32 = (uint)uVar23;
                if (((uint)uVar23 & 0xff) <= (uVar2 & 0xff)) {
                  uVar32 = uVar2;
                }
                uVar23 = (ulong)uVar32;
                *(int *)(in_stack_00000048[3] + lVar24 * 4) = iVar29;
                lVar24 = lVar24 + 1;
                iVar29 = 0;
              }
              uVar22 = uVar22 - 1;
              piVar34 = piVar34 + 1;
              puVar11 = puVar11 + 1;
            } while (uVar22 != 0);
          }
          *in_stack_00000048 = (uVar23 & 0xff) + 1;
          in_stack_00000048[1] = lVar24;
          FUN_02cd98fc(in_stack_00000100);
          FUN_02cd98fc(in_stack_00000100,piVar10);
          FUN_02cd98fc(in_stack_00000100,puVar9);
          FUN_02cd98fc(in_stack_00000100);
          FUN_02cd98fc(in_stack_00000100,in_stack_00000108);
          if (in_stack_00000050 == 0) {
            lVar24 = 0;
LAB_02ccd008:
            *in_stack_00000038 = 1;
            FUN_02cd98fc(in_stack_00000100,lVar24);
            lVar24 = 0;
          }
          else {
            uVar23 = in_stack_00000050 << 1;
            lVar24 = FUN_02cd98d8(in_stack_00000100,uVar23);
            uVar22 = 0;
            puVar28 = (undefined2 *)(in_stack_00000028 + 0xc);
            do {
              *(undefined2 *)(lVar24 + uVar22 * 2) = *puVar28;
              uVar22 = uVar22 + 1;
              puVar28 = puVar28 + 8;
            } while (in_stack_00000050 != uVar22);
            uVar22 = 0x32;
            if (in_stack_00000050 < 0x6784) {
              uVar22 = in_stack_00000050 / 0x212 + 1;
            }
            if (in_stack_00000050 == 0) goto LAB_02ccd008;
            if (in_stack_00000050 < 0x80) {
              lVar18 = in_stack_00000038[1];
              sVar40 = in_stack_00000038[4];
              uVar22 = lVar18 + 1;
              if (sVar40 < uVar22) {
                uVar47 = uVar22;
                if (sVar40 != 0) {
                  uVar47 = sVar40;
                }
                do {
                  uVar49 = uVar47;
                  uVar47 = uVar49 << 1;
                } while (uVar49 < uVar22);
                if (uVar49 == 0) {
                  pvVar17 = (void *)0x0;
                }
                else {
                  pvVar17 = (void *)FUN_02cd98d8(in_stack_00000100,uVar49);
                  sVar40 = in_stack_00000038[4];
                }
                if (sVar40 != 0) {
                  memcpy(pvVar17,(void *)in_stack_00000038[2],sVar40);
                }
                FUN_02cd98fc(in_stack_00000100,in_stack_00000038[2]);
                lVar18 = in_stack_00000038[1];
                in_stack_00000038[2] = (long)pvVar17;
                in_stack_00000038[4] = uVar49;
                uVar22 = lVar18 + 1;
              }
              uVar47 = in_stack_00000038[5];
              if (uVar47 < uVar22) {
                uVar49 = uVar22;
                if (uVar47 != 0) {
                  uVar49 = uVar47;
                }
                do {
                  uVar25 = uVar49;
                  uVar49 = uVar25 << 1;
                } while (uVar25 < uVar22);
                if (uVar25 == 0) {
                  pvVar17 = (void *)0x0;
                }
                else {
                  pvVar17 = (void *)FUN_02cd98d8(in_stack_00000100,uVar25 << 2);
                  uVar47 = in_stack_00000038[5];
                }
                if (uVar47 != 0) {
                  memcpy(pvVar17,(void *)in_stack_00000038[3],uVar47 << 2);
                }
                FUN_02cd98fc(in_stack_00000100,in_stack_00000038[3]);
                lVar18 = in_stack_00000038[1];
                in_stack_00000038[3] = (long)pvVar17;
                in_stack_00000038[5] = uVar25;
              }
              *in_stack_00000038 = 1;
              *(undefined1 *)(in_stack_00000038[2] + lVar18) = 0;
              lVar18 = in_stack_00000038[1];
              *(int *)(in_stack_00000038[3] + lVar18 * 4) = (int)in_stack_00000050;
              in_stack_00000038[1] = lVar18 + 1;
            }
            else {
              pvVar12 = (void *)FUN_02cd98d8(in_stack_00000100,uVar22 * 0xb10);
              pvVar17 = pvVar12;
              uVar47 = uVar22;
              do {
                memset(pvVar17,0,0xb08);
                *(undefined8 *)((long)pvVar17 + 0xb08) = 0x7ff0000000000000;
                uVar47 = uVar47 - 1;
                pvVar17 = (void *)((long)pvVar17 + 0xb10);
              } while (uVar47 != 0);
              uVar47 = 0;
              uVar49 = 0;
              if (uVar22 != 0) {
                uVar49 = in_stack_00000050 / uVar22;
              }
              uVar25 = 7;
              do {
                uVar41 = 0;
                if (uVar22 != 0) {
                  uVar41 = (uVar47 * in_stack_00000050) / uVar22;
                }
                if (uVar47 != 0) {
                  uVar25 = (ulong)(uint)((int)uVar25 * 0x41a7);
                  uVar39 = 0;
                  if (uVar49 != 0) {
                    uVar39 = uVar25 / uVar49;
                  }
                  uVar41 = (uVar25 - uVar39 * uVar49) + uVar41;
                }
                if (in_stack_00000050 <= uVar41 + 0x28) {
                  uVar41 = in_stack_00000050 - 0x29;
                }
                lVar18 = 0;
                *(long *)((long)pvVar12 + uVar47 * 0xb10 + 0xb00) =
                     *(long *)((long)pvVar12 + uVar47 * 0xb10 + 0xb00) + 0x28;
                do {
                  uVar39 = (ulong)*(ushort *)(lVar24 + uVar41 * 2 + lVar18);
                  lVar18 = lVar18 + 2;
                  *(int *)((long)pvVar12 + uVar39 * 4 + uVar47 * 0xb10) =
                       *(int *)((long)pvVar12 + uVar39 * 4 + uVar47 * 0xb10) + 1;
                } while (lVar18 != 0x50);
                uVar47 = uVar47 + 1;
              } while (uVar47 != uVar22);
              uVar47 = 0;
              if (uVar22 != 0) {
                uVar47 = (uVar22 + uVar23 / 0x28 + 99) / uVar22;
              }
              if (uVar47 * uVar22 != 0) {
                uVar49 = 0;
                uVar25 = in_stack_00000050 - 0x27;
                uVar41 = 7;
                do {
                  memset(&stack0x00000520,0,0xb08);
                  uVar41 = (ulong)(uint)((int)uVar41 * 0x41a7);
                  uVar39 = 0;
                  if (uVar25 != 0) {
                    uVar39 = uVar41 / uVar25;
                  }
                  lVar18 = -0x28;
                  puVar20 = (ushort *)(lVar24 + (uVar41 - uVar39 * uVar25) * 2);
                  do {
                    bVar8 = lVar18 != -1;
                    lVar18 = lVar18 + 1;
                    *(int *)(&stack0x00000520 + (ulong)*puVar20 * 4) =
                         *(int *)(&stack0x00000520 + (ulong)*puVar20 * 4) + 1;
                    puVar20 = puVar20 + 1;
                  } while (bVar8);
                  uVar39 = 0;
                  if (uVar22 != 0) {
                    uVar39 = uVar49 / uVar22;
                  }
                  lVar31 = uVar49 - uVar39 * uVar22;
                  lVar18 = 0;
                  lVar30 = 0;
                  *(long *)((long)pvVar12 + lVar31 * 0xb10 + 0xb00) =
                       *(long *)((long)pvVar12 + lVar31 * 0xb10 + 0xb00) + 0x28;
                  do {
                    lVar33 = lVar30 * 4;
                    puVar5 = (undefined8 *)(&stack0x00000528 + lVar18);
                    uVar42 = *(undefined8 *)(&stack0x00000520 + lVar18);
                    puVar4 = (undefined8 *)((long)pvVar12 + lVar33 + lVar31 * 0xb10);
                    uVar50 = puVar4[1];
                    uVar48 = *puVar4;
                    lVar18 = lVar18 + 0x10;
                    lVar30 = lVar30 + 4;
                    puVar4 = (undefined8 *)((long)pvVar12 + lVar33 + lVar31 * 0xb10);
                    puVar4[1] = CONCAT44((int)((ulong)uVar50 >> 0x20) +
                                         (int)((ulong)*puVar5 >> 0x20),(int)uVar50 + (int)*puVar5);
                    *puVar4 = CONCAT44((int)((ulong)uVar48 >> 0x20) + (int)((ulong)uVar42 >> 0x20),
                                       (int)uVar48 + (int)uVar42);
                  } while (lVar18 != 0xb00);
                  uVar49 = uVar49 + 1;
                } while (uVar49 != uVar47 * uVar22);
              }
              pvVar17 = (void *)FUN_02cd98d8(in_stack_00000100,in_stack_00000050);
              pdVar13 = (double *)FUN_02cd98d8(in_stack_00000100,uVar22 * 0x1600);
              pvVar14 = (void *)FUN_02cd98d8(in_stack_00000100,uVar22 << 3);
              if ((uVar22 + 7 >> 3) * in_stack_00000050 == 0) {
                pvVar15 = (void *)0x0;
              }
              else {
                pvVar15 = (void *)FUN_02cd98d8(in_stack_00000100);
              }
              lVar31 = FUN_02cd98d8(in_stack_00000100,uVar22 << 1);
              uVar49 = _UNK_013da728;
              uVar47 = _DAT_013da720;
              dVar7 = DAT_0137f700;
              dVar6 = DAT_0137efc0;
              dVar51 = DAT_0137e660;
              dVar46 = DAT_0137e530;
              uVar25 = in_stack_00000050 - 1;
              lVar18 = 0;
              lVar30 = 10;
              if (*(int *)(in_stack_00000030 + 4) < 0xb) {
                lVar30 = 3;
              }
              do {
                if (uVar22 < 2) {
                  memset(pvVar17,0,in_stack_00000050);
LAB_02ccd5a0:
                  uVar41 = 1;
                }
                else {
                  uVar39 = uVar22 + 7 >> 3;
                  memset(pdVar13,0,uVar22 * 0x1600);
                  uVar41 = 0;
                  puVar9 = (uint *)((long)pvVar12 + 0xb00);
                  do {
                    uVar26 = (ulong)*puVar9;
                    if (uVar26 < 0x100) {
                      dVar43 = (double)(&DAT_01a812e8)[uVar26];
                    }
                    else {
                      dVar43 = log2((double)uVar26);
                    }
                    pdVar13[uVar41] = dVar43;
                    uVar41 = uVar41 + 1;
                    puVar9 = puVar9 + 0x2c4;
                  } while (uVar22 != uVar41);
                  lVar33 = uVar22 * 0x15f8;
                  uVar41 = uVar22;
                  if (uVar22 < 2) {
                    uVar41 = 1;
                  }
                  lVar37 = 0x2c0;
                  puVar9 = (uint *)((long)pvVar12 + 0xafc);
                  do {
                    lVar37 = lVar37 + -1;
                    pdVar38 = pdVar13;
                    puVar11 = puVar9;
                    uVar26 = uVar41;
                    do {
                      uVar32 = *puVar11;
                      dVar43 = *pdVar38;
                      if (uVar32 == 0) {
                        dVar44 = -2.0;
                      }
                      else if (uVar32 < 0x100) {
                        dVar44 = (double)(&DAT_01a812e8)[uVar32];
                      }
                      else {
                        dVar44 = log2((double)uVar32);
                      }
                      uVar26 = uVar26 - 1;
                      *(double *)((long)pdVar38 + lVar33) = dVar43 - dVar44;
                      pdVar38 = pdVar38 + 1;
                      puVar11 = puVar11 + 0x2c4;
                    } while (uVar26 != 0);
                    puVar9 = puVar9 + -1;
                    lVar33 = lVar33 + uVar22 * -8;
                  } while (lVar37 != 0);
                  memset(pvVar14,0,uVar22 * 8);
                  memset(pvVar15,0,uVar39 * in_stack_00000050);
                  uVar26 = 0;
                  do {
                    uVar16 = *(ushort *)(lVar24 + uVar26 * 2);
                    uVar35 = 0;
                    dVar43 = dVar6;
                    do {
                      dVar44 = *(double *)((long)pdVar13 + uVar35 * 8 + uVar22 * 8 * (ulong)uVar16)
                               + *(double *)((long)pvVar14 + uVar35 * 8);
                      *(double *)((long)pvVar14 + uVar35 * 8) = dVar44;
                      if (dVar44 < dVar43) {
                        *(char *)((long)pvVar17 + uVar26) = (char)uVar35;
                        dVar43 = dVar44;
                      }
                      uVar35 = uVar35 + 1;
                    } while (uVar41 != uVar35);
                    dVar44 = 13.5;
                    if (uVar26 < 2000) {
                      dVar44 = (((double)uVar26 * dVar51) / dVar46 + dVar7) * 13.5;
                    }
                    uVar35 = 0;
                    do {
                      dVar45 = *(double *)((long)pvVar14 + uVar35 * 8) - dVar43;
                      *(double *)((long)pvVar14 + uVar35 * 8) = dVar45;
                      if (dVar44 <= dVar45) {
                        *(double *)((long)pvVar14 + uVar35 * 8) = dVar44;
                        lVar33 = uVar26 * uVar39 + (uVar35 >> 3);
                        *(byte *)((long)pvVar15 + lVar33) =
                             *(byte *)((long)pvVar15 + lVar33) | (byte)(1 << (uVar35 & 7));
                      }
                      uVar35 = uVar35 + 1;
                    } while (uVar41 != uVar35);
                    uVar26 = uVar26 + 1;
                  } while (uVar26 != in_stack_00000050);
                  if (uVar25 == 0) goto LAB_02ccd5a0;
                  uVar35 = (ulong)*(byte *)((long)pvVar17 + uVar25);
                  pvVar21 = (void *)((long)pvVar15 + (in_stack_00000050 - 2) * uVar39);
                  uVar41 = 1;
                  uVar26 = in_stack_00000050;
                  do {
                    if ((*(byte *)((long)pvVar21 + (uVar35 >> 3)) >> (uVar35 & 7) & 1) != 0) {
                      uVar32 = (uint)*(byte *)((long)pvVar17 + (uVar26 - 2));
                      if (uVar32 != (uint)uVar35) {
                        uVar41 = uVar41 + 1;
                      }
                      uVar35 = (ulong)uVar32;
                    }
                    *(char *)((long)pvVar17 + (uVar26 - 2)) = (char)uVar35;
                    uVar26 = uVar26 - 1;
                    pvVar21 = (void *)((long)pvVar21 - uVar39);
                  } while (uVar26 != 1);
                }
                if (uVar22 != 0) {
                  uVar39 = uVar22 + 1 & 0xfffffffffffffffe;
                  puVar28 = (undefined2 *)(lVar31 + 2);
                  uVar26 = uVar47;
                  uVar35 = uVar49;
                  do {
                    if (uVar26 <= uVar22 - 1) {
                      puVar28[-1] = 0x100;
                    }
                    if (uVar35 <= uVar22 - 1) {
                      *puVar28 = 0x100;
                    }
                    uVar26 = uVar26 + 2;
                    uVar35 = uVar35 + 2;
                    uVar39 = uVar39 - 2;
                    puVar28 = puVar28 + 2;
                  } while (uVar39 != 0);
                }
                uVar22 = 0;
                uVar16 = 0;
                do {
                  if (*(short *)(lVar31 + (ulong)*(byte *)((long)pvVar17 + uVar22) * 2) == 0x100) {
                    *(ushort *)(lVar31 + (ulong)*(byte *)((long)pvVar17 + uVar22) * 2) = uVar16;
                    uVar16 = uVar16 + 1;
                  }
                  uVar22 = uVar22 + 1;
                } while (in_stack_00000050 != uVar22);
                uVar22 = 0;
                do {
                  *(char *)((long)pvVar17 + uVar22) =
                       (char)*(undefined2 *)(lVar31 + (ulong)*(byte *)((long)pvVar17 + uVar22) * 2);
                  uVar22 = uVar22 + 1;
                } while (in_stack_00000050 != uVar22);
                uVar22 = (ulong)uVar16;
                pvVar21 = pvVar12;
                uVar39 = uVar22;
                if (uVar16 != 0) {
                  do {
                    memset(pvVar21,0,0xb08);
                    *(undefined8 *)((long)pvVar21 + 0xb08) = 0x7ff0000000000000;
                    uVar39 = uVar39 - 1;
                    pvVar21 = (void *)((long)pvVar21 + 0xb10);
                  } while (uVar39 != 0);
                }
                uVar39 = 0;
                do {
                  bVar3 = *(byte *)((long)pvVar17 + uVar39);
                  uVar26 = (ulong)*(ushort *)(lVar24 + uVar39 * 2);
                  uVar39 = uVar39 + 1;
                  *(int *)((long)pvVar12 + uVar26 * 4 + (ulong)bVar3 * 0xb10) =
                       *(int *)((long)pvVar12 + uVar26 * 4 + (ulong)bVar3 * 0xb10) + 1;
                  *(long *)((long)pvVar12 + (ulong)bVar3 * 0xb10 + 0xb00) =
                       *(long *)((long)pvVar12 + (ulong)bVar3 * 0xb10 + 0xb00) + 1;
                } while (in_stack_00000050 != uVar39);
                lVar18 = lVar18 + 1;
              } while (lVar18 != lVar30);
              FUN_02cd98fc(in_stack_00000100,pdVar13);
              FUN_02cd98fc(in_stack_00000100,pvVar14);
              FUN_02cd98fc(in_stack_00000100,pvVar15);
              FUN_02cd98fc(in_stack_00000100,lVar31);
              FUN_02cd98fc(in_stack_00000100,pvVar12);
              sVar40 = uVar41 << 2;
              if (uVar41 == 0) {
                puVar9 = (uint *)0x0;
                piVar10 = (int *)0x0;
                in_stack_000000e0 = 0xf;
                lVar18 = 0xa5f0;
LAB_02ccd754:
                in_stack_00000090 = (void *)FUN_02cd98d8(in_stack_00000100,lVar18);
                in_stack_000000d0 = (void *)FUN_02cd98d8(in_stack_00000100,in_stack_000000e0 << 2);
              }
              else {
                puVar9 = (uint *)FUN_02cd98d8(in_stack_00000100,sVar40);
                piVar10 = (int *)FUN_02cd98d8(in_stack_00000100,sVar40);
                in_stack_000000e0 = uVar41 * 0x10 + 0x3f0 >> 6;
                if (in_stack_000000e0 != 0) {
                  lVar18 = in_stack_000000e0 * 0xb10;
                  goto LAB_02ccd754;
                }
                in_stack_00000090 = (void *)0x0;
                in_stack_000000e0 = 0;
                in_stack_000000d0 = (void *)0x0;
              }
              uVar22 = uVar41;
              if (0x3f < uVar41) {
                uVar22 = 0x40;
              }
              if (uVar22 == 0) {
                lVar18 = 0;
              }
              else {
                lVar18 = FUN_02cd98d8(in_stack_00000100,uVar22 * 0xb10);
              }
              in_stack_00000078 = (uint *)FUN_02cd98d8(in_stack_00000100,0xc018);
              memset(&stack0x00000420,0,0x100);
              memset(&stack0x00000320,0,0x100);
              memset(&stack0x00000220,0,0x100);
              memset(&stack0x00000120,0,0x100);
              memset(piVar10,0,sVar40);
              lVar30 = 0;
              uVar22 = 0;
              do {
                piVar10[lVar30] = piVar10[lVar30] + 1;
                if ((uVar25 == uVar22) ||
                   (*(char *)((long)pvVar17 + uVar22) != ((char *)((long)pvVar17 + uVar22))[1])) {
                  lVar30 = lVar30 + 1;
                }
                uVar22 = uVar22 + 1;
              } while (in_stack_00000050 != uVar22);
              if (uVar41 == 0) {
                uVar22 = 0;
              }
              else {
                uVar47 = 0;
                uVar22 = 0;
                lVar30 = 0;
                in_stack_00000108 = 0;
                in_stack_000000f0 = 0;
                uStack00000000000000c8 = in_stack_000000e0;
                uVar49 = uVar41;
                puVar11 = puVar9;
                do {
                  uVar39 = uVar49 - 0x40;
                  uVar25 = uVar41 - uVar47;
                  if (0x3f < uVar49) {
                    uVar49 = 0x40;
                  }
                  if (0x3f < uVar25) {
                    uVar25 = 0x40;
                  }
                  if (uVar25 != 0) {
                    uVar26 = 0;
                    do {
                      pvVar12 = (void *)(lVar18 + uVar26 * 0xb10);
                      memset(pvVar12,0,0xb08);
                      *(undefined8 *)((long)pvVar12 + 0xb08) = 0x7ff0000000000000;
                      if (piVar10[uVar26 + uVar47] != 0) {
                        lVar31 = lVar18 + uVar26 * 0xb10;
                        lVar33 = *(long *)(lVar31 + 0xb00);
                        uVar35 = 0;
                        do {
                          uVar36 = (ulong)*(ushort *)(lVar24 + lVar30 * 2 + uVar35 * 2);
                          lVar37 = lVar18 + uVar26 * 0xb10;
                          uVar35 = uVar35 + 1;
                          *(int *)(lVar37 + uVar36 * 4) = *(int *)(lVar37 + uVar36 * 4) + 1;
                        } while (uVar35 < (uint)piVar10[uVar26 + uVar47]);
                        lVar30 = lVar30 + uVar35;
                        *(ulong *)(lVar31 + 0xb00) = lVar33 + uVar35;
                      }
                      uVar42 = FUN_02c85878(pvVar12);
                      *(undefined8 *)((long)pvVar12 + 0xb08) = uVar42;
                      *(int *)(&stack0x00000220 + uVar26 * 4) = (int)uVar26;
                      *(int *)(&stack0x00000320 + uVar26 * 4) = (int)uVar26;
                      *(undefined4 *)(&stack0x00000420 + uVar26 * 4) = 1;
                      uVar26 = uVar26 + 1;
                    } while (uVar26 != uVar49);
                  }
                  lVar31 = FUN_02cdfa54(lVar18,&stack0x00000420,&stack0x00000220,&stack0x00000320,
                                        in_stack_00000078,uVar25,uVar25,0x40);
                  uVar26 = lVar31 + in_stack_00000108;
                  if (in_stack_000000e0 < uVar26) {
                    uVar35 = uVar26;
                    if (in_stack_000000e0 != 0) {
                      uVar35 = in_stack_000000e0;
                    }
                    do {
                      uVar36 = uVar35;
                      uVar35 = uVar36 << 1;
                    } while (uVar36 < uVar26);
                    if (uVar36 == 0) {
                      pvVar12 = (void *)0x0;
                    }
                    else {
                      pvVar12 = (void *)FUN_02cd98d8(in_stack_00000100,uVar36 * 0xb10);
                    }
                    if (in_stack_000000e0 != 0) {
                      memcpy(pvVar12,in_stack_00000090,in_stack_000000e0 * 0xb10);
                    }
                    FUN_02cd98fc(in_stack_00000100,in_stack_00000090);
                    in_stack_000000e0 = uVar36;
                    in_stack_00000090 = pvVar12;
                  }
                  uVar26 = lVar31 + in_stack_000000f0;
                  if (uStack00000000000000c8 < uVar26) {
                    uVar35 = uVar26;
                    if (uStack00000000000000c8 != 0) {
                      uVar35 = uStack00000000000000c8;
                    }
                    do {
                      uVar36 = uVar35;
                      uVar35 = uVar36 << 1;
                    } while (uVar36 < uVar26);
                    if (uVar36 == 0) {
                      pvVar12 = (void *)0x0;
                    }
                    else {
                      pvVar12 = (void *)FUN_02cd98d8(in_stack_00000100,uVar36 << 2);
                    }
                    if (uStack00000000000000c8 != 0) {
                      memcpy(pvVar12,in_stack_000000d0,uStack00000000000000c8 << 2);
                    }
                    FUN_02cd98fc(in_stack_00000100,in_stack_000000d0);
                    in_stack_000000d0 = pvVar12;
                    uStack00000000000000c8 = uVar36;
                  }
                  if (lVar31 != 0) {
                    lVar33 = 0;
                    pvVar12 = (void *)((long)in_stack_00000090 + in_stack_00000108 * 0xb10);
                    do {
                      uVar32 = *(uint *)(&stack0x00000320 + lVar33 * 4);
                      memcpy(pvVar12,(void *)(lVar18 + (ulong)uVar32 * 0xb10),0xb10);
                      pvVar12 = (void *)((long)pvVar12 + 0xb10);
                      *(undefined4 *)((long)in_stack_000000d0 + lVar33 * 4 + in_stack_000000f0 * 4)
                           = *(undefined4 *)(&stack0x00000420 + (ulong)uVar32 * 4);
                      *(int *)(&stack0x00000120 +
                              (ulong)*(uint *)(&stack0x00000320 + lVar33 * 4) * 4) = (int)lVar33;
                      lVar33 = lVar33 + 1;
                    } while (lVar31 != lVar33);
                    in_stack_00000108 = in_stack_00000108 + lVar33;
                    in_stack_000000f0 = in_stack_000000f0 + lVar33;
                  }
                  if (uVar25 != 0) {
                    puVar19 = (uint *)&stack0x00000220;
                    puVar27 = puVar11;
                    do {
                      uVar49 = uVar49 - 1;
                      *puVar27 = *(int *)(&stack0x00000120 + (ulong)*puVar19 * 4) + (int)uVar22;
                      puVar19 = puVar19 + 1;
                      puVar27 = puVar27 + 1;
                    } while (uVar49 != 0);
                  }
                  uVar47 = uVar47 + 0x40;
                  uVar22 = lVar31 + uVar22;
                  puVar11 = puVar11 + 0x40;
                  uVar49 = uVar39;
                } while (uVar47 < uVar41);
              }
              FUN_02cd98fc(in_stack_00000100,lVar18);
              uVar49 = (uVar22 >> 1) * uVar22;
              uVar47 = uVar22 << 6;
              if (uVar49 <= uVar22 << 6) {
                uVar47 = uVar49;
              }
              if (0x801 < uVar47 + 1) {
                FUN_02cd98fc(in_stack_00000100,in_stack_00000078);
                in_stack_00000078 = (uint *)FUN_02cd98d8(in_stack_00000100,(uVar47 + 1) * 0x18);
              }
              if (uVar22 == 0) {
                puVar11 = (uint *)0x0;
              }
              else {
                puVar11 = (uint *)FUN_02cd98d8(uVar22,in_stack_00000100);
                uVar47 = 0;
                do {
                  puVar11[uVar47] = (uint)uVar47;
                  uVar47 = uVar47 + 1;
                } while (uVar22 != uVar47);
              }
              lVar18 = FUN_02cdfa54(in_stack_00000090,in_stack_000000d0,puVar9,puVar11,
                                    in_stack_00000078,uVar22,uVar41,0x100);
              FUN_02cd98fc(in_stack_00000100,in_stack_00000078);
              FUN_02cd98fc(in_stack_00000100,in_stack_000000d0);
              if (uVar22 == 0) {
                in_stack_00000118 = (void *)0x0;
              }
              else {
                in_stack_00000118 = (void *)FUN_02cd98d8(in_stack_00000100,uVar22 << 2);
                memset(in_stack_00000118,0xff,uVar22 << 2);
              }
              if (uVar41 != 0) {
                uVar22 = 0;
                lVar30 = 0;
                iVar29 = 0;
                do {
                  memset(&stack0x00000520,0,0xb08);
                  if (piVar10[uVar22] != 0) {
                    uVar47 = 0;
                    do {
                      uVar49 = (ulong)*(ushort *)(lVar24 + lVar30 * 2 + uVar47 * 2);
                      uVar47 = uVar47 + 1;
                      *(int *)(&stack0x00000520 + uVar49 * 4) =
                           *(int *)(&stack0x00000520 + uVar49 * 4) + 1;
                    } while (uVar47 < (uint)piVar10[uVar22]);
                    lVar30 = lVar30 + uVar47;
                  }
                  puVar19 = puVar9;
                  if (uVar22 != 0) {
                    puVar19 = puVar9 + (uVar22 - 1);
                  }
                  uVar47 = (ulong)*puVar19;
                  dVar46 = (double)FUN_02cdfd28(&stack0x00000520,
                                                (void *)((long)in_stack_00000090 + uVar47 * 0xb10));
                  puVar19 = puVar11;
                  for (lVar31 = lVar18; lVar31 != 0; lVar31 = lVar31 + -1) {
                    dVar51 = (double)FUN_02cdfd28(&stack0x00000520,
                                                  (void *)((long)in_stack_00000090 +
                                                          (ulong)*puVar19 * 0xb10));
                    if (dVar51 < dVar46) {
                      uVar47 = (ulong)*puVar19;
                      dVar46 = dVar51;
                    }
                    puVar19 = puVar19 + 1;
                  }
                  puVar9[uVar22] = (uint)uVar47;
                  if (*(int *)((long)in_stack_00000118 + uVar47 * 4) == -1) {
                    *(int *)((long)in_stack_00000118 + uVar47 * 4) = iVar29;
                    iVar29 = iVar29 + 1;
                  }
                  uVar22 = uVar22 + 1;
                } while (uVar22 != uVar41);
              }
              FUN_02cd98fc(in_stack_00000100,puVar11);
              FUN_02cd98fc(in_stack_00000100,in_stack_00000090);
              sVar40 = in_stack_00000038[4];
              if (sVar40 < uVar41) {
                uVar22 = uVar41;
                if (sVar40 != 0) {
                  uVar22 = sVar40;
                }
                do {
                  uVar47 = uVar22;
                  uVar22 = uVar47 << 1;
                } while (uVar47 < uVar41);
                if (uVar47 == 0) {
                  pvVar12 = (void *)0x0;
                }
                else {
                  pvVar12 = (void *)FUN_02cd98d8(in_stack_00000100,uVar47);
                  sVar40 = in_stack_00000038[4];
                }
                if (sVar40 != 0) {
                  memcpy(pvVar12,(void *)in_stack_00000038[2],sVar40);
                }
                FUN_02cd98fc(in_stack_00000100,in_stack_00000038[2]);
                in_stack_00000038[2] = (long)pvVar12;
                in_stack_00000038[4] = uVar47;
              }
              uVar22 = in_stack_00000038[5];
              if (uVar22 < uVar41) {
                uVar47 = uVar41;
                if (uVar22 != 0) {
                  uVar47 = uVar22;
                }
                do {
                  uVar49 = uVar47;
                  uVar47 = uVar49 << 1;
                } while (uVar49 < uVar41);
                if (uVar49 == 0) {
                  pvVar12 = (void *)0x0;
                }
                else {
                  pvVar12 = (void *)FUN_02cd98d8(in_stack_00000100,uVar49 << 2);
                  uVar22 = in_stack_00000038[5];
                }
                if (uVar22 != 0) {
                  memcpy(pvVar12,(void *)in_stack_00000038[3],uVar22 << 2);
                }
                FUN_02cd98fc(in_stack_00000100,in_stack_00000038[3]);
                in_stack_00000038[3] = (long)pvVar12;
                in_stack_00000038[5] = uVar49;
              }
              if (uVar41 == 0) {
                lVar18 = 0;
                uVar22 = 0;
              }
              else {
                uVar22 = 0;
                lVar18 = 0;
                iVar29 = 0;
                piVar34 = piVar10;
                puVar11 = puVar9;
                do {
                  iVar29 = *piVar34 + iVar29;
                  if ((uVar41 == 1) || (*puVar11 != puVar11[1])) {
                    uVar2 = *(uint *)((long)in_stack_00000118 + (ulong)*puVar11 * 4);
                    *(char *)(in_stack_00000038[2] + lVar18) = (char)uVar2;
                    uVar32 = (uint)uVar22;
                    if (((uint)uVar22 & 0xff) <= (uVar2 & 0xff)) {
                      uVar32 = uVar2;
                    }
                    uVar22 = (ulong)uVar32;
                    *(int *)(in_stack_00000038[3] + lVar18 * 4) = iVar29;
                    lVar18 = lVar18 + 1;
                    iVar29 = 0;
                  }
                  uVar41 = uVar41 - 1;
                  piVar34 = piVar34 + 1;
                  puVar11 = puVar11 + 1;
                } while (uVar41 != 0);
              }
              *in_stack_00000038 = (uVar22 & 0xff) + 1;
              in_stack_00000038[1] = lVar18;
              FUN_02cd98fc(in_stack_00000100);
              FUN_02cd98fc(in_stack_00000100,piVar10);
              FUN_02cd98fc(in_stack_00000100,puVar9);
              FUN_02cd98fc(in_stack_00000100,pvVar17);
            }
            FUN_02cd98fc(in_stack_00000100,lVar24);
            lVar24 = FUN_02cd98d8(in_stack_00000100,uVar23);
            if (in_stack_00000050 != 0) {
              puVar20 = (ushort *)(in_stack_00000028 + 0xc);
              uVar22 = 0;
              do {
                uVar23 = uVar22;
                if (((*(uint *)(puVar20 + -4) & 0x1ffffff) != 0) && (0x7f < *puVar20)) {
                  uVar23 = uVar22 + 1;
                  *(ushort *)(lVar24 + uVar22 * 2) = puVar20[1] & 0x3ff;
                }
                in_stack_00000050 = in_stack_00000050 - 1;
                puVar20 = puVar20 + 8;
                uVar22 = uVar23;
              } while (in_stack_00000050 != 0);
              if (uVar23 >> 6 < 0x1a9) {
                if (uVar23 == 0) goto LAB_02ccd01c;
                if (uVar23 < 0x80) {
                  lVar18 = in_stack_00000040[1];
                  sVar40 = in_stack_00000040[4];
                  uVar22 = lVar18 + 1;
                  if (sVar40 < uVar22) {
                    uVar47 = uVar22;
                    if (sVar40 != 0) {
                      uVar47 = sVar40;
                    }
                    do {
                      uVar49 = uVar47;
                      uVar47 = uVar49 << 1;
                    } while (uVar49 < uVar22);
                    if (uVar49 == 0) {
                      pvVar17 = (void *)0x0;
                    }
                    else {
                      pvVar17 = (void *)FUN_02cd98d8(in_stack_00000100,uVar49);
                      sVar40 = in_stack_00000040[4];
                    }
                    if (sVar40 != 0) {
                      memcpy(pvVar17,(void *)in_stack_00000040[2],sVar40);
                    }
                    FUN_02cd98fc(in_stack_00000100,in_stack_00000040[2]);
                    lVar18 = in_stack_00000040[1];
                    in_stack_00000040[2] = (long)pvVar17;
                    in_stack_00000040[4] = uVar49;
                    uVar22 = lVar18 + 1;
                  }
                  uVar47 = in_stack_00000040[5];
                  if (uVar47 < uVar22) {
                    uVar49 = uVar22;
                    if (uVar47 != 0) {
                      uVar49 = uVar47;
                    }
                    do {
                      uVar25 = uVar49;
                      uVar49 = uVar25 << 1;
                    } while (uVar25 < uVar22);
                    if (uVar25 == 0) {
                      pvVar17 = (void *)0x0;
                    }
                    else {
                      pvVar17 = (void *)FUN_02cd98d8(in_stack_00000100,uVar25 << 2);
                      uVar47 = in_stack_00000040[5];
                    }
                    if (uVar47 != 0) {
                      memcpy(pvVar17,(void *)in_stack_00000040[3],uVar47 << 2);
                    }
                    FUN_02cd98fc(in_stack_00000100,in_stack_00000040[3]);
                    lVar18 = in_stack_00000040[1];
                    in_stack_00000040[5] = uVar25;
                    in_stack_00000040[3] = (long)pvVar17;
                  }
                  *in_stack_00000040 = 1;
                  *(undefined1 *)(in_stack_00000040[2] + lVar18) = 0;
                  lVar18 = in_stack_00000040[1];
                  *(int *)(in_stack_00000040[3] + lVar18 * 4) = (int)uVar23;
                  in_stack_00000040[1] = lVar18 + 1;
                  goto LAB_02ccd024;
                }
                uVar22 = uVar23 / 0x220 + 1;
              }
              else {
                uVar22 = 0x32;
              }
              pvVar12 = (void *)FUN_02cd98d8(in_stack_00000100,uVar22 * 0x890);
              pvVar17 = pvVar12;
              uVar47 = uVar22;
              do {
                memset(pvVar17,0,0x888);
                *(undefined8 *)((long)pvVar17 + 0x888) = 0x7ff0000000000000;
                uVar47 = uVar47 - 1;
                pvVar17 = (void *)((long)pvVar17 + 0x890);
              } while (uVar47 != 0);
              uVar47 = 0;
              uVar49 = 0;
              if (uVar22 != 0) {
                uVar49 = uVar23 / uVar22;
              }
              uVar25 = 7;
              do {
                uVar41 = 0;
                if (uVar22 != 0) {
                  uVar41 = (uVar47 * uVar23) / uVar22;
                }
                if (uVar47 != 0) {
                  uVar25 = (ulong)(uint)((int)uVar25 * 0x41a7);
                  uVar39 = 0;
                  if (uVar49 != 0) {
                    uVar39 = uVar25 / uVar49;
                  }
                  uVar41 = (uVar25 - uVar39 * uVar49) + uVar41;
                }
                if (uVar23 <= uVar41 + 0x28) {
                  uVar41 = uVar23 - 0x29;
                }
                lVar18 = 0;
                *(long *)((long)pvVar12 + uVar47 * 0x890 + 0x880) =
                     *(long *)((long)pvVar12 + uVar47 * 0x890 + 0x880) + 0x28;
                do {
                  uVar39 = (ulong)*(ushort *)(lVar24 + uVar41 * 2 + lVar18);
                  lVar18 = lVar18 + 2;
                  *(int *)((long)pvVar12 + uVar39 * 4 + uVar47 * 0x890) =
                       *(int *)((long)pvVar12 + uVar39 * 4 + uVar47 * 0x890) + 1;
                } while (lVar18 != 0x50);
                uVar47 = uVar47 + 1;
              } while (uVar47 != uVar22);
              uVar47 = 0;
              if (uVar22 != 0) {
                uVar47 = (uVar22 + (uVar23 << 1) / 0x28 + 99) / uVar22;
              }
              if (uVar47 * uVar22 != 0) {
                uVar49 = 0;
                uVar25 = uVar23 - 0x27;
                uVar41 = 7;
                do {
                  memset(&stack0x00000520,0,0x888);
                  uVar41 = (ulong)(uint)((int)uVar41 * 0x41a7);
                  uVar39 = 0;
                  if (uVar25 != 0) {
                    uVar39 = uVar41 / uVar25;
                  }
                  lVar18 = -0x28;
                  puVar20 = (ushort *)(lVar24 + (uVar41 - uVar39 * uVar25) * 2);
                  do {
                    bVar8 = lVar18 != -1;
                    lVar18 = lVar18 + 1;
                    *(int *)(&stack0x00000520 + (ulong)*puVar20 * 4) =
                         *(int *)(&stack0x00000520 + (ulong)*puVar20 * 4) + 1;
                    puVar20 = puVar20 + 1;
                  } while (bVar8);
                  uVar39 = 0;
                  if (uVar22 != 0) {
                    uVar39 = uVar49 / uVar22;
                  }
                  lVar31 = uVar49 - uVar39 * uVar22;
                  lVar18 = 0;
                  lVar30 = 0;
                  *(long *)((long)pvVar12 + lVar31 * 0x890 + 0x880) =
                       *(long *)((long)pvVar12 + lVar31 * 0x890 + 0x880) + 0x28;
                  do {
                    lVar33 = lVar30 * 4;
                    puVar5 = (undefined8 *)(&stack0x00000528 + lVar18);
                    uVar42 = *(undefined8 *)(&stack0x00000520 + lVar18);
                    puVar4 = (undefined8 *)((long)pvVar12 + lVar33 + lVar31 * 0x890);
                    uVar50 = puVar4[1];
                    uVar48 = *puVar4;
                    lVar18 = lVar18 + 0x10;
                    lVar30 = lVar30 + 4;
                    puVar4 = (undefined8 *)((long)pvVar12 + lVar33 + lVar31 * 0x890);
                    puVar4[1] = CONCAT44((int)((ulong)uVar50 >> 0x20) +
                                         (int)((ulong)*puVar5 >> 0x20),(int)uVar50 + (int)*puVar5);
                    *puVar4 = CONCAT44((int)((ulong)uVar48 >> 0x20) + (int)((ulong)uVar42 >> 0x20),
                                       (int)uVar48 + (int)uVar42);
                  } while (lVar18 != 0x880);
                  uVar49 = uVar49 + 1;
                } while (uVar49 != uVar47 * uVar22);
              }
              pvVar17 = (void *)FUN_02cd98d8(in_stack_00000100,uVar23);
              pdVar13 = (double *)FUN_02cd98d8(in_stack_00000100,uVar22 * 0x1100);
              pvVar14 = (void *)FUN_02cd98d8(in_stack_00000100,uVar22 << 3);
              if ((uVar22 + 7 >> 3) * uVar23 == 0) {
                pvVar15 = (void *)0x0;
              }
              else {
                pvVar15 = (void *)FUN_02cd98d8(in_stack_00000100);
              }
              lVar31 = FUN_02cd98d8(in_stack_00000100,uVar22 << 1);
              uVar49 = _UNK_013da728;
              uVar47 = _DAT_013da720;
              dVar43 = DAT_0137f700;
              dVar7 = DAT_0137efc0;
              dVar6 = DAT_0137eaa0;
              dVar51 = DAT_0137e660;
              dVar46 = DAT_0137e530;
              uVar25 = uVar23 - 1;
              lVar18 = 0;
              lVar30 = 10;
              if (*(int *)(in_stack_00000030 + 4) < 0xb) {
                lVar30 = 3;
              }
              do {
                if (uVar22 < 2) {
                  memset(pvVar17,0,uVar23);
LAB_02cce5b8:
                  uVar41 = 1;
                }
                else {
                  uVar39 = uVar22 + 7 >> 3;
                  memset(pdVar13,0,uVar22 * 0x1100);
                  uVar41 = 0;
                  puVar9 = (uint *)((long)pvVar12 + 0x880);
                  do {
                    uVar26 = (ulong)*puVar9;
                    if (uVar26 < 0x100) {
                      dVar44 = (double)(&DAT_01a812e8)[uVar26];
                    }
                    else {
                      dVar44 = log2((double)uVar26);
                    }
                    pdVar13[uVar41] = dVar44;
                    uVar41 = uVar41 + 1;
                    puVar9 = puVar9 + 0x224;
                  } while (uVar22 != uVar41);
                  lVar33 = uVar22 * 0x10f8;
                  uVar41 = uVar22;
                  if (uVar22 < 2) {
                    uVar41 = 1;
                  }
                  lVar37 = 0x220;
                  puVar9 = (uint *)((long)pvVar12 + 0x87c);
                  do {
                    lVar37 = lVar37 + -1;
                    pdVar38 = pdVar13;
                    puVar11 = puVar9;
                    uVar26 = uVar41;
                    do {
                      uVar32 = *puVar11;
                      dVar44 = *pdVar38;
                      if (uVar32 == 0) {
                        dVar45 = -2.0;
                      }
                      else if (uVar32 < 0x100) {
                        dVar45 = (double)(&DAT_01a812e8)[uVar32];
                      }
                      else {
                        dVar45 = log2((double)uVar32);
                      }
                      uVar26 = uVar26 - 1;
                      *(double *)((long)pdVar38 + lVar33) = dVar44 - dVar45;
                      pdVar38 = pdVar38 + 1;
                      puVar11 = puVar11 + 0x224;
                    } while (uVar26 != 0);
                    lVar33 = lVar33 + uVar22 * -8;
                    puVar9 = puVar9 + -1;
                  } while (lVar37 != 0);
                  memset(pvVar14,0,uVar22 * 8);
                  memset(pvVar15,0,uVar39 * uVar23);
                  uVar26 = 0;
                  do {
                    uVar16 = *(ushort *)(lVar24 + uVar26 * 2);
                    uVar35 = 0;
                    dVar44 = dVar7;
                    do {
                      dVar45 = *(double *)((long)pdVar13 + uVar35 * 8 + uVar22 * 8 * (ulong)uVar16)
                               + *(double *)((long)pvVar14 + uVar35 * 8);
                      *(double *)((long)pvVar14 + uVar35 * 8) = dVar45;
                      if (dVar45 < dVar44) {
                        *(char *)((long)pvVar17 + uVar26) = (char)uVar35;
                        dVar44 = dVar45;
                      }
                      uVar35 = uVar35 + 1;
                    } while (uVar41 != uVar35);
                    dVar45 = dVar6;
                    if (uVar26 < 2000) {
                      dVar45 = (((double)uVar26 * dVar51) / dVar46 + dVar43) * dVar6;
                    }
                    uVar35 = 0;
                    do {
                      dVar52 = *(double *)((long)pvVar14 + uVar35 * 8) - dVar44;
                      *(double *)((long)pvVar14 + uVar35 * 8) = dVar52;
                      if (dVar45 <= dVar52) {
                        *(double *)((long)pvVar14 + uVar35 * 8) = dVar45;
                        lVar33 = uVar26 * uVar39 + (uVar35 >> 3);
                        *(byte *)((long)pvVar15 + lVar33) =
                             *(byte *)((long)pvVar15 + lVar33) | (byte)(1 << (uVar35 & 7));
                      }
                      uVar35 = uVar35 + 1;
                    } while (uVar41 != uVar35);
                    uVar26 = uVar26 + 1;
                  } while (uVar26 != uVar23);
                  if (uVar25 == 0) goto LAB_02cce5b8;
                  uVar35 = (ulong)*(byte *)((long)pvVar17 + uVar25);
                  pvVar21 = (void *)((long)pvVar15 + (uVar23 - 2) * uVar39);
                  uVar41 = 1;
                  uVar26 = uVar23;
                  do {
                    if ((*(byte *)((long)pvVar21 + (uVar35 >> 3)) >> (uVar35 & 7) & 1) != 0) {
                      uVar32 = (uint)*(byte *)((long)pvVar17 + (uVar26 - 2));
                      if (uVar32 != (uint)uVar35) {
                        uVar41 = uVar41 + 1;
                      }
                      uVar35 = (ulong)uVar32;
                    }
                    *(char *)((long)pvVar17 + (uVar26 - 2)) = (char)uVar35;
                    uVar26 = uVar26 - 1;
                    pvVar21 = (void *)((long)pvVar21 - uVar39);
                  } while (uVar26 != 1);
                }
                if (uVar22 != 0) {
                  uVar39 = uVar22 + 1 & 0xfffffffffffffffe;
                  puVar28 = (undefined2 *)(lVar31 + 2);
                  uVar26 = uVar47;
                  uVar35 = uVar49;
                  do {
                    if (uVar26 <= uVar22 - 1) {
                      puVar28[-1] = 0x100;
                    }
                    if (uVar35 <= uVar22 - 1) {
                      *puVar28 = 0x100;
                    }
                    uVar26 = uVar26 + 2;
                    uVar35 = uVar35 + 2;
                    uVar39 = uVar39 - 2;
                    puVar28 = puVar28 + 2;
                  } while (uVar39 != 0);
                }
                uVar22 = 0;
                uVar16 = 0;
                do {
                  if (*(short *)(lVar31 + (ulong)*(byte *)((long)pvVar17 + uVar22) * 2) == 0x100) {
                    *(ushort *)(lVar31 + (ulong)*(byte *)((long)pvVar17 + uVar22) * 2) = uVar16;
                    uVar16 = uVar16 + 1;
                  }
                  uVar22 = uVar22 + 1;
                } while (uVar23 != uVar22);
                uVar22 = 0;
                do {
                  *(char *)((long)pvVar17 + uVar22) =
                       (char)*(undefined2 *)(lVar31 + (ulong)*(byte *)((long)pvVar17 + uVar22) * 2);
                  uVar22 = uVar22 + 1;
                } while (uVar23 != uVar22);
                uVar22 = (ulong)uVar16;
                uVar39 = uVar22;
                pvVar21 = pvVar12;
                if (uVar16 != 0) {
                  do {
                    memset(pvVar21,0,0x888);
                    *(undefined8 *)((long)pvVar21 + 0x888) = 0x7ff0000000000000;
                    uVar39 = uVar39 - 1;
                    pvVar21 = (void *)((long)pvVar21 + 0x890);
                  } while (uVar39 != 0);
                }
                uVar39 = 0;
                do {
                  bVar3 = *(byte *)((long)pvVar17 + uVar39);
                  uVar26 = (ulong)*(ushort *)(lVar24 + uVar39 * 2);
                  uVar39 = uVar39 + 1;
                  *(int *)((long)pvVar12 + uVar26 * 4 + (ulong)bVar3 * 0x890) =
                       *(int *)((long)pvVar12 + uVar26 * 4 + (ulong)bVar3 * 0x890) + 1;
                  *(long *)((long)pvVar12 + (ulong)bVar3 * 0x890 + 0x880) =
                       *(long *)((long)pvVar12 + (ulong)bVar3 * 0x890 + 0x880) + 1;
                } while (uVar23 != uVar39);
                lVar18 = lVar18 + 1;
              } while (lVar18 != lVar30);
              FUN_02cd98fc(in_stack_00000100,pdVar13);
              FUN_02cd98fc(in_stack_00000100,pvVar14);
              FUN_02cd98fc(in_stack_00000100,pvVar15);
              FUN_02cd98fc(in_stack_00000100,lVar31);
              FUN_02cd98fc(in_stack_00000100,pvVar12);
              sVar40 = uVar41 << 2;
              if (uVar41 == 0) {
                puVar9 = (uint *)0x0;
                piVar10 = (int *)0x0;
                in_stack_000000b8 = 0xf;
                lVar18 = 0x8070;
LAB_02cce770:
                in_stack_00000110 = (double *)FUN_02cd98d8(in_stack_00000100,lVar18);
                in_stack_00000090 = (void *)FUN_02cd98d8(in_stack_00000100,in_stack_000000b8 << 2);
              }
              else {
                puVar9 = (uint *)FUN_02cd98d8(in_stack_00000100,sVar40);
                piVar10 = (int *)FUN_02cd98d8(in_stack_00000100,sVar40);
                in_stack_000000b8 = uVar41 * 0x10 + 0x3f0 >> 6;
                if (in_stack_000000b8 != 0) {
                  lVar18 = in_stack_000000b8 * 0x890;
                  goto LAB_02cce770;
                }
                in_stack_00000110 = (void *)0x0;
                in_stack_000000b8 = 0;
                in_stack_00000090 = (void *)0x0;
              }
              uVar22 = uVar41;
              if (0x3f < uVar41) {
                uVar22 = 0x40;
              }
              if (uVar22 == 0) {
                lVar18 = 0;
              }
              else {
                lVar18 = FUN_02cd98d8(in_stack_00000100,uVar22 * 0x890);
              }
              in_stack_00000080 = FUN_02cd98d8(in_stack_00000100,0xc018);
              memset(&stack0x00000420,0,0x100);
              memset(&stack0x00000320,0,0x100);
              memset(&stack0x00000220,0,0x100);
              memset(&stack0x00000120,0,0x100);
              memset(piVar10,0,sVar40);
              lVar30 = 0;
              uVar22 = 0;
              do {
                piVar10[lVar30] = piVar10[lVar30] + 1;
                if ((uVar25 == uVar22) ||
                   (*(char *)((long)pvVar17 + uVar22) != ((char *)((long)pvVar17 + uVar22))[1])) {
                  lVar30 = lVar30 + 1;
                }
                uVar22 = uVar22 + 1;
              } while (uVar23 != uVar22);
              if (uVar41 == 0) {
                uVar22 = 0;
              }
              else {
                uVar23 = 0;
                uVar22 = 0;
                in_stack_00000118 = (void *)0x0;
                uStack00000000000000c8 = 0;
                in_stack_000000d0 = (void *)0x0;
                in_stack_000000b0 = (undefined2 *)in_stack_000000b8;
                uVar47 = uVar41;
                puStack00000000000000c0 = puVar9;
                do {
                  uVar25 = uVar47 - 0x40;
                  uVar49 = uVar41 - uVar23;
                  if (0x3f < uVar47) {
                    uVar47 = 0x40;
                  }
                  if (0x3f < uVar49) {
                    uVar49 = 0x40;
                  }
                  if (uVar49 != 0) {
                    uVar39 = 0;
                    do {
                      pvVar12 = (void *)(lVar18 + uVar39 * 0x890);
                      memset(pvVar12,0,0x888);
                      *(undefined8 *)((long)pvVar12 + 0x888) = 0x7ff0000000000000;
                      if (piVar10[uVar39 + uVar23] != 0) {
                        lVar30 = lVar18 + uVar39 * 0x890;
                        lVar31 = *(long *)(lVar30 + 0x880);
                        uVar26 = 0;
                        do {
                          uVar35 = (ulong)*(ushort *)
                                           (lVar24 + (long)in_stack_00000118 * 2 + uVar26 * 2);
                          lVar33 = lVar18 + uVar39 * 0x890;
                          uVar26 = uVar26 + 1;
                          *(int *)(lVar33 + uVar35 * 4) = *(int *)(lVar33 + uVar35 * 4) + 1;
                        } while (uVar26 < (uint)piVar10[uVar39 + uVar23]);
                        in_stack_00000118 = (void *)((long)in_stack_00000118 + uVar26);
                        *(ulong *)(lVar30 + 0x880) = lVar31 + uVar26;
                      }
                      uVar42 = FUN_02c85c44(pvVar12);
                      *(undefined8 *)((long)pvVar12 + 0x888) = uVar42;
                      *(int *)(&stack0x00000220 + uVar39 * 4) = (int)uVar39;
                      *(int *)(&stack0x00000320 + uVar39 * 4) = (int)uVar39;
                      *(undefined4 *)(&stack0x00000420 + uVar39 * 4) = 1;
                      uVar39 = uVar39 + 1;
                    } while (uVar39 != uVar47);
                  }
                  lVar30 = FUN_02ce0004(lVar18,&stack0x00000420,&stack0x00000220,&stack0x00000320,
                                        in_stack_00000080,uVar49,uVar49,0x40);
                  uVar39 = lVar30 + (long)in_stack_000000d0;
                  uVar26 = in_stack_000000b8;
                  if (in_stack_000000b8 < uVar39) {
                    uVar35 = uVar39;
                    if (in_stack_000000b8 != 0) {
                      uVar35 = in_stack_000000b8;
                    }
                    do {
                      uVar26 = uVar35;
                      uVar35 = uVar26 << 1;
                    } while (uVar26 < uVar39);
                    if (uVar26 == 0) {
                      pvVar12 = (void *)0x0;
                    }
                    else {
                      pvVar12 = (void *)FUN_02cd98d8(in_stack_00000100,uVar26 * 0x890);
                    }
                    if (in_stack_000000b8 != 0) {
                      memcpy(pvVar12,in_stack_00000110,in_stack_000000b8 * 0x890);
                    }
                    FUN_02cd98fc(in_stack_00000100,in_stack_00000110);
                    in_stack_00000110 = pvVar12;
                  }
                  uVar39 = lVar30 + uStack00000000000000c8;
                  uVar35 = (ulong)in_stack_000000b0;
                  if (in_stack_000000b0 < uVar39) {
                    uVar36 = uVar39;
                    if (in_stack_000000b0 != (undefined2 *)0x0) {
                      uVar36 = (ulong)in_stack_000000b0;
                    }
                    do {
                      uVar35 = uVar36;
                      uVar36 = uVar35 << 1;
                    } while (uVar35 < uVar39);
                    if (uVar35 == 0) {
                      pvVar12 = (void *)0x0;
                    }
                    else {
                      pvVar12 = (void *)FUN_02cd98d8(in_stack_00000100,uVar35 << 2);
                    }
                    if (in_stack_000000b0 != (undefined2 *)0x0) {
                      memcpy(pvVar12,in_stack_00000090,(long)in_stack_000000b0 << 2);
                    }
                    FUN_02cd98fc(in_stack_00000100,in_stack_00000090);
                    in_stack_00000090 = pvVar12;
                  }
                  if (lVar30 != 0) {
                    lVar31 = 0;
                    pvVar12 = (void *)((long)in_stack_00000110 + (long)in_stack_000000d0 * 0x890);
                    do {
                      uVar32 = *(uint *)(&stack0x00000320 + lVar31 * 4);
                      memcpy(pvVar12,(void *)(lVar18 + (ulong)uVar32 * 0x890),0x890);
                      pvVar12 = (void *)((long)pvVar12 + 0x890);
                      *(undefined4 *)
                       ((long)in_stack_00000090 + lVar31 * 4 + uStack00000000000000c8 * 4) =
                           *(undefined4 *)(&stack0x00000420 + (ulong)uVar32 * 4);
                      *(int *)(&stack0x00000120 +
                              (ulong)*(uint *)(&stack0x00000320 + lVar31 * 4) * 4) = (int)lVar31;
                      lVar31 = lVar31 + 1;
                    } while (lVar30 != lVar31);
                    in_stack_000000d0 = (void *)((long)in_stack_000000d0 + lVar31);
                    uStack00000000000000c8 = uStack00000000000000c8 + lVar31;
                  }
                  if (uVar49 != 0) {
                    puVar11 = (uint *)&stack0x00000220;
                    puVar19 = puStack00000000000000c0;
                    do {
                      uVar47 = uVar47 - 1;
                      *puVar19 = *(int *)(&stack0x00000120 + (ulong)*puVar11 * 4) + (int)uVar22;
                      puVar11 = puVar11 + 1;
                      puVar19 = puVar19 + 1;
                    } while (uVar47 != 0);
                  }
                  uVar22 = lVar30 + uVar22;
                  puStack00000000000000c0 = puStack00000000000000c0 + 0x40;
                  uVar23 = uVar23 + 0x40;
                  uVar47 = uVar25;
                  in_stack_000000b0 = (undefined2 *)uVar35;
                  in_stack_000000b8 = uVar26;
                } while (uVar23 < uVar41);
              }
              FUN_02cd98fc(in_stack_00000100,lVar18);
              uVar47 = (uVar22 >> 1) * uVar22;
              uVar23 = uVar22 << 6;
              if (uVar47 <= uVar22 << 6) {
                uVar23 = uVar47;
              }
              if (0x801 < uVar23 + 1) {
                FUN_02cd98fc(in_stack_00000100,in_stack_00000080);
                in_stack_00000080 = FUN_02cd98d8(in_stack_00000100,(uVar23 + 1) * 0x18);
              }
              sVar40 = uVar22 << 2;
              if (uVar22 == 0) {
                puVar11 = (uint *)0x0;
              }
              else {
                puVar11 = (uint *)FUN_02cd98d8(in_stack_00000100,sVar40);
                uVar23 = 0;
                do {
                  puVar11[uVar23] = (uint)uVar23;
                  uVar23 = uVar23 + 1;
                } while (uVar22 != uVar23);
              }
              lVar18 = FUN_02ce0004(in_stack_00000110,in_stack_00000090,puVar9,puVar11,
                                    in_stack_00000080,uVar22,uVar41,0x100);
              FUN_02cd98fc(in_stack_00000100,in_stack_00000080);
              FUN_02cd98fc(in_stack_00000100,in_stack_00000090);
              if (uVar22 == 0) {
                pvVar12 = (void *)0x0;
              }
              else {
                pvVar12 = (void *)FUN_02cd98d8(in_stack_00000100,sVar40);
                memset(pvVar12,0xff,sVar40);
              }
              if (uVar41 != 0) {
                uVar22 = 0;
                lVar30 = 0;
                iVar29 = 0;
                do {
                  memset(&stack0x00000520,0,0x888);
                  if (piVar10[uVar22] != 0) {
                    uVar23 = 0;
                    do {
                      uVar47 = (ulong)*(ushort *)(lVar24 + lVar30 * 2 + uVar23 * 2);
                      uVar23 = uVar23 + 1;
                      *(int *)(&stack0x00000520 + uVar47 * 4) =
                           *(int *)(&stack0x00000520 + uVar47 * 4) + 1;
                    } while (uVar23 < (uint)piVar10[uVar22]);
                    lVar30 = lVar30 + uVar23;
                  }
                  puVar19 = puVar9;
                  if (uVar22 != 0) {
                    puVar19 = puVar9 + (uVar22 - 1);
                  }
                  uVar23 = (ulong)*puVar19;
                  dVar46 = (double)FUN_02ce02d8(&stack0x00000520,
                                                (void *)((long)in_stack_00000110 + uVar23 * 0x890));
                  puVar19 = puVar11;
                  for (lVar31 = lVar18; lVar31 != 0; lVar31 = lVar31 + -1) {
                    dVar51 = (double)FUN_02ce02d8(&stack0x00000520,
                                                  (void *)((long)in_stack_00000110 +
                                                          (ulong)*puVar19 * 0x890));
                    if (dVar51 < dVar46) {
                      uVar23 = (ulong)*puVar19;
                      dVar46 = dVar51;
                    }
                    puVar19 = puVar19 + 1;
                  }
                  puVar9[uVar22] = (uint)uVar23;
                  if (*(int *)((long)pvVar12 + uVar23 * 4) == -1) {
                    *(int *)((long)pvVar12 + uVar23 * 4) = iVar29;
                    iVar29 = iVar29 + 1;
                  }
                  uVar22 = uVar22 + 1;
                } while (uVar22 != uVar41);
              }
              FUN_02cd98fc(in_stack_00000100,puVar11);
              FUN_02cd98fc(in_stack_00000100,in_stack_00000110);
              sVar40 = in_stack_00000040[4];
              if (sVar40 < uVar41) {
                uVar22 = uVar41;
                if (sVar40 != 0) {
                  uVar22 = sVar40;
                }
                do {
                  uVar23 = uVar22;
                  uVar22 = uVar23 << 1;
                } while (uVar23 < uVar41);
                if (uVar23 == 0) {
                  pvVar14 = (void *)0x0;
                }
                else {
                  pvVar14 = (void *)FUN_02cd98d8(in_stack_00000100,uVar23);
                  sVar40 = in_stack_00000040[4];
                }
                if (sVar40 != 0) {
                  memcpy(pvVar14,(void *)in_stack_00000040[2],sVar40);
                }
                FUN_02cd98fc(in_stack_00000100,in_stack_00000040[2]);
                in_stack_00000040[4] = uVar23;
                in_stack_00000040[2] = (long)pvVar14;
              }
              uVar22 = in_stack_00000040[5];
              if (uVar22 < uVar41) {
                uVar23 = uVar41;
                if (uVar22 != 0) {
                  uVar23 = uVar22;
                }
                do {
                  uVar47 = uVar23;
                  uVar23 = uVar47 << 1;
                } while (uVar47 < uVar41);
                if (uVar47 == 0) {
                  pvVar14 = (void *)0x0;
                }
                else {
                  pvVar14 = (void *)FUN_02cd98d8(in_stack_00000100,uVar47 << 2);
                  uVar22 = in_stack_00000040[5];
                }
                if (uVar22 != 0) {
                  memcpy(pvVar14,(void *)in_stack_00000040[3],uVar22 << 2);
                }
                FUN_02cd98fc(in_stack_00000100,in_stack_00000040[3]);
                in_stack_00000040[5] = uVar47;
                in_stack_00000040[3] = (long)pvVar14;
              }
              if (uVar41 == 0) {
                lVar18 = 0;
                uVar22 = 0;
              }
              else {
                uVar22 = 0;
                lVar18 = 0;
                iVar29 = 0;
                piVar34 = piVar10;
                puVar11 = puVar9;
                do {
                  iVar29 = *piVar34 + iVar29;
                  if ((uVar41 == 1) || (*puVar11 != puVar11[1])) {
                    uVar2 = *(uint *)((long)pvVar12 + (ulong)*puVar11 * 4);
                    *(char *)(in_stack_00000040[2] + lVar18) = (char)uVar2;
                    uVar32 = (uint)uVar22;
                    if (((uint)uVar22 & 0xff) <= (uVar2 & 0xff)) {
                      uVar32 = uVar2;
                    }
                    uVar22 = (ulong)uVar32;
                    *(int *)(in_stack_00000040[3] + lVar18 * 4) = iVar29;
                    lVar18 = lVar18 + 1;
                    iVar29 = 0;
                  }
                  uVar41 = uVar41 - 1;
                  piVar34 = piVar34 + 1;
                  puVar11 = puVar11 + 1;
                } while (uVar41 != 0);
              }
              *in_stack_00000040 = (uVar22 & 0xff) + 1;
              in_stack_00000040[1] = lVar18;
              FUN_02cd98fc(in_stack_00000100,pvVar12);
              FUN_02cd98fc(in_stack_00000100,piVar10);
              FUN_02cd98fc(in_stack_00000100,puVar9);
              FUN_02cd98fc(in_stack_00000100,pvVar17);
              goto LAB_02ccd024;
            }
          }
LAB_02ccd01c:
          *in_stack_00000040 = 1;
LAB_02ccd024:
          FUN_02cd98fc(in_stack_00000100,lVar24);
          return;
        }
        unaff_x23 = in_stack_000000b8 - 1;
        unaff_x19 = in_stack_000000f0;
        lVar24 = in_stack_000000e0;
        lVar18 = in_stack_000000e8;
        if (in_stack_000000b8 != 0 && unaff_x23 != 0) goto LAB_02ccc228;
        memset(unaff_x25,0,unaff_x28);
LAB_02ccc474:
        uVar22 = 1;
      } while( true );
    }
    goto LAB_02ccc35c;
  }
  goto LAB_02ccc370;
LAB_02ccc228:
  unaff_x21 = in_stack_000000b8 + 7 >> 3;
  memset(in_stack_00000110,0,in_stack_000000b8 << 0xb);
  uVar22 = 0;
  puVar9 = in_stack_00000078;
  do {
    uVar23 = (ulong)*puVar9;
    if (uVar23 < 0x100) {
      dVar46 = (double)(&DAT_01a812e8)[uVar23];
    }
    else {
      dVar46 = log2((double)uVar23);
    }
    in_stack_00000110[uVar22] = dVar46;
    uVar22 = uVar22 + 1;
    puVar9 = puVar9 + 0x104;
  } while (in_stack_000000b8 != uVar22);
  lVar30 = in_stack_000000b8 * 0x7f8;
  in_stack_00000118 = (void *)(in_stack_000000b8 * 8);
  unaff_x26 = in_stack_000000b8;
  if (in_stack_000000b8 < 2) {
    unaff_x26 = 1;
  }
  lVar31 = 0x100;
  puVar9 = in_stack_00000070;
  do {
    lVar31 = lVar31 + -1;
    uVar22 = unaff_x26;
    pdVar13 = in_stack_00000110;
    puVar11 = puVar9;
    do {
      uVar32 = *puVar11;
      dVar46 = *pdVar13;
      if (uVar32 == 0) {
        dVar51 = -2.0;
      }
      else if (uVar32 < 0x100) {
        dVar51 = (double)(&DAT_01a812e8)[uVar32];
      }
      else {
        dVar51 = log2((double)uVar32);
      }
      uVar22 = uVar22 - 1;
      *(double *)((long)pdVar13 + lVar30) = dVar46 - dVar51;
      pdVar13 = pdVar13 + 1;
      puVar11 = puVar11 + 0x104;
    } while (uVar22 != 0);
    puVar9 = puVar9 + -1;
    lVar30 = lVar30 + in_stack_000000b8 * -8;
  } while (lVar31 != 0);
  memset(unaff_x22,0,(size_t)in_stack_00000118);
  memset(unaff_x29,0,unaff_x21 * (long)in_stack_00000090);
  param_1 = 0;
  in_x14 = in_stack_00000108;
  in_x15 = in_stack_00000068;
  unaff_x20 = in_stack_00000088;
  unaff_x27 = in_stack_00000110;
  unaff_x28 = (size_t)in_stack_00000090;
LAB_02ccc35c:
  in_x9 = 0;
  in_x10 = (double *)
           ((long)unaff_x27 + (long)in_stack_00000118 * (ulong)*(byte *)(in_x14 + param_1));
  param_2 = unaff_d8;
LAB_02ccc370:
  param_3 = in_x10[in_x9] + *(double *)((long)unaff_x22 + in_x9 * 8);
  goto code_r0x02ccc37c;
}


