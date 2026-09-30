/*
FUNCTION_NAME: AkSoundEnginePINVOKE$$CSharp_AkChannelConfig_Serialize
ENTRY_POINT: 02ccc300
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

void AkSoundEnginePINVOKE__CSharp_AkChannelConfig_Serialize(void)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  double dVar6;
  undefined1 in_ZR;
  bool bVar7;
  uint *puVar8;
  int *piVar9;
  uint *puVar10;
  void *pvVar11;
  double *pdVar12;
  void *pvVar13;
  void *pvVar14;
  ushort uVar15;
  ulong uVar16;
  void *pvVar17;
  long lVar18;
  uint *puVar19;
  ushort *puVar20;
  void *pvVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  uint *puVar26;
  undefined2 *puVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  uint uVar31;
  long lVar32;
  int *piVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  long unaff_x19;
  double *pdVar37;
  long unaff_x20;
  ulong uVar38;
  ulong unaff_x21;
  void *unaff_x22;
  size_t sVar39;
  uint *unaff_x23;
  ulong uVar40;
  int unaff_w24;
  void *unaff_x25;
  ulong unaff_x26;
  double *unaff_x27;
  uint *unaff_x28;
  void *unaff_x29;
  undefined8 uVar41;
  double dVar42;
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
  uint *in_stack_000000c0;
  ulong in_stack_000000c8;
  void *in_stack_000000d0;
  ulong in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  undefined8 in_stack_00000100;
  long in_stack_00000108;
  double *in_stack_00000110;
  void *in_stack_00000118;
  
code_r0x02ccc300:
  unaff_x28 = unaff_x28 + 0x104;
  if ((bool)in_ZR) {
    unaff_x20 = unaff_x20 - (long)in_stack_00000118;
    unaff_x23 = unaff_x23 + -1;
    unaff_x21 = unaff_x26;
    if (unaff_x19 == 0) {
      memset(unaff_x22,0,(size_t)in_stack_00000118);
      memset(unaff_x29,0,(long)in_stack_000000c0 * (long)in_stack_00000090);
      uVar16 = 0;
      do {
        bVar3 = *(byte *)(in_stack_00000108 + uVar16);
        uVar22 = 0;
        dVar45 = unaff_d8;
        do {
          dVar46 = *(double *)
                    ((long)in_stack_00000110 + uVar22 * 8 + (long)in_stack_00000118 * (ulong)bVar3)
                   + *(double *)((long)unaff_x22 + uVar22 * 8);
          *(double *)((long)unaff_x22 + uVar22 * 8) = dVar46;
          if (dVar46 < dVar45) {
            *(char *)((long)unaff_x25 + uVar16) = (char)uVar22;
            dVar45 = dVar46;
          }
          uVar22 = uVar22 + 1;
        } while (unaff_x26 != uVar22);
        dVar46 = unaff_d9;
        if (uVar16 < 2000) {
          dVar46 = (((double)uVar16 * unaff_d10) / unaff_d11 + unaff_d12) * unaff_d9;
        }
        uVar22 = 0;
        do {
          dVar51 = *(double *)((long)unaff_x22 + uVar22 * 8) - dVar45;
          *(double *)((long)unaff_x22 + uVar22 * 8) = dVar51;
          if (dVar46 <= dVar51) {
            *(double *)((long)unaff_x22 + uVar22 * 8) = dVar46;
            lVar29 = uVar16 * (long)in_stack_000000c0 + (uVar22 >> 3);
            *(byte *)((long)unaff_x29 + lVar29) =
                 *(byte *)((long)unaff_x29 + lVar29) | (byte)(unaff_w24 << (uVar22 & 7));
          }
          uVar22 = uVar22 + 1;
        } while (unaff_x26 != uVar22);
        uVar16 = uVar16 + 1;
      } while ((void *)uVar16 != in_stack_00000090);
      if (in_stack_00000080 == 0) goto LAB_02ccc474;
      uVar22 = (ulong)*(byte *)((long)unaff_x25 + in_stack_00000080);
      uVar16 = 1;
      pvVar17 = (void *)((long)unaff_x29 + in_stack_00000058 * (long)in_stack_000000c0);
      lVar29 = in_stack_000000f0;
      do {
        if ((*(byte *)((long)pvVar17 + (uVar22 >> 3)) >> (uVar22 & 7) & 1) != 0) {
          if ((uint)*(byte *)(in_stack_00000068 + lVar29) != (uint)uVar22) {
            uVar16 = uVar16 + 1;
          }
          uVar22 = (ulong)(uint)*(byte *)(in_stack_00000068 + lVar29);
        }
        *(char *)(in_stack_00000068 + lVar29) = (char)uVar22;
        lVar29 = lVar29 + -1;
        pvVar17 = (void *)((long)pvVar17 - (long)in_stack_000000c0);
      } while (lVar29 != 1);
      do {
        if (in_stack_000000b8 != 0) {
          uVar22 = in_stack_000000b8 + 1 & 0xfffffffffffffffe;
          puVar27 = in_stack_000000b0;
          uVar47 = in_stack_000000a0;
          uVar49 = in_stack_000000a8;
          do {
            if (uVar47 <= in_stack_000000c8) {
              puVar27[-1] = 0x100;
            }
            if (uVar49 <= in_stack_000000c8) {
              *puVar27 = 0x100;
            }
            uVar47 = uVar47 + in_stack_000000e0;
            uVar49 = uVar49 + in_stack_000000e8;
            uVar22 = uVar22 - 2;
            puVar27 = puVar27 + 2;
          } while (uVar22 != 0);
        }
        lVar29 = 0;
        uVar15 = 0;
        do {
          if (*(short *)(in_stack_00000088 + (ulong)*(byte *)((long)unaff_x25 + lVar29) * 2) ==
              0x100) {
            *(ushort *)(in_stack_00000088 + (ulong)*(byte *)((long)unaff_x25 + lVar29) * 2) = uVar15
            ;
            uVar15 = uVar15 + 1;
          }
          lVar29 = lVar29 + 1;
        } while (in_stack_000000f0 != lVar29);
        lVar29 = 0;
        do {
          *(char *)((long)unaff_x25 + lVar29) =
               (char)*(undefined2 *)
                      (in_stack_00000088 + (ulong)*(byte *)((long)unaff_x25 + lVar29) * 2);
          lVar29 = lVar29 + 1;
        } while (in_stack_000000f0 != lVar29);
        in_stack_000000b8 = (ulong)uVar15;
        uVar22 = in_stack_000000b8;
        pvVar17 = in_stack_00000060;
        if (uVar15 != 0) {
          do {
            memset(pvVar17,0,0x408);
            *(undefined8 *)((long)pvVar17 + 0x408) = 0x7ff0000000000000;
            uVar22 = uVar22 - 1;
            pvVar17 = (void *)((long)pvVar17 + 0x410);
          } while (uVar22 != 0);
        }
        lVar29 = 0;
        do {
          bVar3 = *(byte *)((long)unaff_x25 + lVar29);
          pbVar1 = (byte *)(in_stack_00000108 + lVar29);
          lVar29 = lVar29 + 1;
          *(int *)((long)in_stack_00000060 + (ulong)*pbVar1 * 4 + (ulong)bVar3 * 0x410) =
               *(int *)((long)in_stack_00000060 + (ulong)*pbVar1 * 4 + (ulong)bVar3 * 0x410) + 1;
          *(long *)((long)in_stack_00000060 + (ulong)bVar3 * 0x410 + 0x400) =
               *(long *)((long)in_stack_00000060 + (ulong)bVar3 * 0x410 + 0x400) + 1;
        } while (in_stack_000000f0 != lVar29);
        in_stack_000000f8 = in_stack_000000f8 + 1;
        if ((void *)in_stack_000000f8 == in_stack_000000d0) {
          FUN_02cd98fc(in_stack_00000100,in_stack_00000110);
          FUN_02cd98fc(in_stack_00000100);
          FUN_02cd98fc(in_stack_00000100);
          FUN_02cd98fc(in_stack_00000100,in_stack_00000088);
          FUN_02cd98fc(in_stack_00000100,in_stack_00000060);
          sVar39 = uVar16 << 2;
          if (uVar16 == 0) {
            puVar8 = (uint *)0x0;
            piVar9 = (int *)0x0;
            in_stack_000000e0 = 0xf;
            lVar29 = 0x3cf0;
LAB_02ccc634:
            in_stack_00000090 = (void *)FUN_02cd98d8(in_stack_00000100,lVar29);
            in_stack_000000d0 = (void *)FUN_02cd98d8(in_stack_00000100,in_stack_000000e0 << 2);
          }
          else {
            puVar8 = (uint *)FUN_02cd98d8(in_stack_00000100,sVar39);
            piVar9 = (int *)FUN_02cd98d8(in_stack_00000100,sVar39);
            in_stack_000000e0 = uVar16 * 0x10 + 0x3f0 >> 6;
            if (in_stack_000000e0 != 0) {
              lVar29 = in_stack_000000e0 * 0x410;
              goto LAB_02ccc634;
            }
            in_stack_00000090 = (void *)0x0;
            in_stack_000000e0 = 0;
            in_stack_000000d0 = (void *)0x0;
          }
          uVar22 = uVar16;
          if (0x3f < uVar16) {
            uVar22 = 0x40;
          }
          if (uVar22 == 0) {
            lVar29 = 0;
          }
          else {
            lVar29 = FUN_02cd98d8(in_stack_00000100,uVar22 * 0x410);
          }
          in_stack_00000078 = (uint *)FUN_02cd98d8(in_stack_00000100,0xc018);
          memset(&stack0x00000420,0,0x100);
          memset(&stack0x00000320,0,0x100);
          memset(&stack0x00000220,0,0x100);
          memset(&stack0x00000120,0,0x100);
          memset(piVar9,0,sVar39);
          lVar18 = 0;
          lVar23 = 0;
          do {
            piVar9[lVar18] = piVar9[lVar18] + 1;
            if ((in_stack_00000018 + in_stack_00000020 + -1 == lVar23) ||
               (*(char *)((long)unaff_x25 + lVar23) != ((char *)((long)unaff_x25 + lVar23))[1])) {
              lVar18 = lVar18 + 1;
            }
            lVar23 = lVar23 + 1;
          } while (in_stack_00000018 + in_stack_00000020 != lVar23);
          if (uVar16 == 0) {
            uVar22 = 0;
          }
          else {
            uVar47 = 0;
            uVar22 = 0;
            lVar18 = 0;
            in_stack_000000f0 = 0;
            in_stack_000000f8 = 0;
            in_stack_000000c8 = in_stack_000000e0;
            uVar49 = uVar16;
            puVar10 = puVar8;
            do {
              uVar40 = uVar49 - 0x40;
              uVar24 = uVar16 - uVar47;
              if (0x3f < uVar49) {
                uVar49 = 0x40;
              }
              if (0x3f < uVar24) {
                uVar24 = 0x40;
              }
              if (uVar24 != 0) {
                uVar38 = 0;
                do {
                  pvVar17 = (void *)(lVar29 + uVar38 * 0x410);
                  memset(pvVar17,0,0x408);
                  *(undefined8 *)((long)pvVar17 + 0x408) = 0x7ff0000000000000;
                  if (piVar9[uVar38 + uVar47] != 0) {
                    lVar23 = lVar29 + uVar38 * 0x410;
                    lVar30 = *(long *)(lVar23 + 0x400);
                    uVar25 = 0;
                    do {
                      uVar34 = (ulong)*(byte *)(in_stack_00000108 + lVar18 + uVar25);
                      lVar36 = lVar29 + uVar38 * 0x410;
                      lVar32 = lVar30 + 1 + uVar25;
                      uVar25 = uVar25 + 1;
                      *(int *)(lVar36 + uVar34 * 4) = *(int *)(lVar36 + uVar34 * 4) + 1;
                      *(long *)(lVar23 + 0x400) = lVar32;
                    } while (uVar25 < (uint)piVar9[uVar38 + uVar47]);
                    lVar18 = lVar18 + uVar25;
                  }
                  uVar41 = FUN_02c854ac(pvVar17);
                  *(undefined8 *)((long)pvVar17 + 0x408) = uVar41;
                  *(int *)(&stack0x00000220 + uVar38 * 4) = (int)uVar38;
                  *(int *)(&stack0x00000320 + uVar38 * 4) = (int)uVar38;
                  *(undefined4 *)(&stack0x00000420 + uVar38 * 4) = 1;
                  uVar38 = uVar38 + 1;
                } while (uVar38 != uVar49);
              }
              lVar23 = FUN_02cdee8c(lVar29,&stack0x00000420,&stack0x00000220,&stack0x00000320,
                                    in_stack_00000078,uVar24,uVar24,0x40);
              uVar38 = lVar23 + in_stack_000000f8;
              if (in_stack_000000e0 < uVar38) {
                uVar25 = uVar38;
                if (in_stack_000000e0 != 0) {
                  uVar25 = in_stack_000000e0;
                }
                do {
                  uVar34 = uVar25;
                  uVar25 = uVar34 << 1;
                } while (uVar34 < uVar38);
                if (uVar34 == 0) {
                  pvVar17 = (void *)0x0;
                }
                else {
                  pvVar17 = (void *)FUN_02cd98d8(in_stack_00000100,uVar34 * 0x410);
                }
                if (in_stack_000000e0 != 0) {
                  memcpy(pvVar17,in_stack_00000090,in_stack_000000e0 * 0x410);
                }
                FUN_02cd98fc(in_stack_00000100,in_stack_00000090);
                in_stack_000000e0 = uVar34;
                in_stack_00000090 = pvVar17;
              }
              uVar38 = lVar23 + in_stack_000000f0;
              if (in_stack_000000c8 < uVar38) {
                uVar25 = uVar38;
                if (in_stack_000000c8 != 0) {
                  uVar25 = in_stack_000000c8;
                }
                do {
                  uVar34 = uVar25;
                  uVar25 = uVar34 << 1;
                } while (uVar34 < uVar38);
                if (uVar34 == 0) {
                  pvVar17 = (void *)0x0;
                }
                else {
                  pvVar17 = (void *)FUN_02cd98d8(in_stack_00000100,uVar34 << 2);
                }
                if (in_stack_000000c8 != 0) {
                  memcpy(pvVar17,in_stack_000000d0,in_stack_000000c8 << 2);
                }
                FUN_02cd98fc(in_stack_00000100,in_stack_000000d0);
                in_stack_000000d0 = pvVar17;
                in_stack_000000c8 = uVar34;
              }
              if (lVar23 != 0) {
                lVar30 = 0;
                pvVar17 = (void *)((long)in_stack_00000090 + in_stack_000000f8 * 0x410);
                do {
                  uVar31 = *(uint *)(&stack0x00000320 + lVar30 * 4);
                  memcpy(pvVar17,(void *)(lVar29 + (ulong)uVar31 * 0x410),0x410);
                  pvVar17 = (void *)((long)pvVar17 + 0x410);
                  *(undefined4 *)((long)in_stack_000000d0 + lVar30 * 4 + in_stack_000000f0 * 4) =
                       *(undefined4 *)(&stack0x00000420 + (ulong)uVar31 * 4);
                  *(int *)(&stack0x00000120 + (ulong)*(uint *)(&stack0x00000320 + lVar30 * 4) * 4) =
                       (int)lVar30;
                  lVar30 = lVar30 + 1;
                } while (lVar23 != lVar30);
                in_stack_000000f8 = in_stack_000000f8 + lVar30;
                in_stack_000000f0 = in_stack_000000f0 + lVar30;
              }
              if (uVar24 != 0) {
                puVar19 = (uint *)&stack0x00000220;
                puVar26 = puVar10;
                do {
                  uVar49 = uVar49 - 1;
                  *puVar26 = *(int *)(&stack0x00000120 + (ulong)*puVar19 * 4) + (int)uVar22;
                  puVar19 = puVar19 + 1;
                  puVar26 = puVar26 + 1;
                } while (uVar49 != 0);
              }
              uVar47 = uVar47 + 0x40;
              uVar22 = lVar23 + uVar22;
              puVar10 = puVar10 + 0x40;
              uVar49 = uVar40;
            } while (uVar47 < uVar16);
          }
          FUN_02cd98fc(in_stack_00000100,lVar29);
          uVar49 = (uVar22 >> 1) * uVar22;
          uVar47 = uVar22 << 6;
          if (uVar49 <= uVar22 << 6) {
            uVar47 = uVar49;
          }
          if (0x801 < uVar47 + 1) {
            FUN_02cd98fc(in_stack_00000100,in_stack_00000078);
            in_stack_00000078 = (uint *)FUN_02cd98d8(in_stack_00000100,(uVar47 + 1) * 0x18);
          }
          sVar39 = uVar22 << 2;
          if (uVar22 == 0) {
            puVar10 = (uint *)0x0;
          }
          else {
            puVar10 = (uint *)FUN_02cd98d8(uVar22,in_stack_00000100,sVar39);
            uVar47 = 0;
            do {
              puVar10[uVar47] = (uint)uVar47;
              uVar47 = uVar47 + 1;
            } while (uVar22 != uVar47);
          }
          lVar29 = FUN_02cdee8c(in_stack_00000090,in_stack_000000d0,puVar8,puVar10,in_stack_00000078
                                ,uVar22,uVar16,0x100);
          FUN_02cd98fc(in_stack_00000100,in_stack_00000078);
          FUN_02cd98fc(in_stack_00000100,in_stack_000000d0);
          if (uVar22 == 0) {
            in_stack_00000118 = (void *)0x0;
          }
          else {
            in_stack_00000118 = (void *)FUN_02cd98d8(in_stack_00000100,sVar39);
            memset(in_stack_00000118,0xff,sVar39);
          }
          if (uVar16 != 0) {
            uVar22 = 0;
            lVar18 = 0;
            iVar28 = 0;
            do {
              memset(&stack0x00000520,0,0x408);
              if (piVar9[uVar22] != 0) {
                uVar47 = 0;
                do {
                  uVar49 = (ulong)*(byte *)(in_stack_00000108 + lVar18 + uVar47);
                  uVar47 = uVar47 + 1;
                  *(int *)(&stack0x00000520 + uVar49 * 4) =
                       *(int *)(&stack0x00000520 + uVar49 * 4) + 1;
                } while (uVar47 < (uint)piVar9[uVar22]);
                lVar18 = lVar18 + uVar47;
              }
              puVar19 = puVar8;
              if (uVar22 != 0) {
                puVar19 = puVar8 + (uVar22 - 1);
              }
              uVar47 = (ulong)*puVar19;
              dVar45 = (double)FUN_02cdf160(&stack0x00000520,
                                            (void *)((long)in_stack_00000090 + uVar47 * 0x410));
              puVar19 = puVar10;
              for (lVar23 = lVar29; lVar23 != 0; lVar23 = lVar23 + -1) {
                dVar46 = (double)FUN_02cdf160(&stack0x00000520,
                                              (void *)((long)in_stack_00000090 +
                                                      (ulong)*puVar19 * 0x410));
                if (dVar46 < dVar45) {
                  uVar47 = (ulong)*puVar19;
                  dVar45 = dVar46;
                }
                puVar19 = puVar19 + 1;
              }
              puVar8[uVar22] = (uint)uVar47;
              if (*(int *)((long)in_stack_00000118 + uVar47 * 4) == -1) {
                *(int *)((long)in_stack_00000118 + uVar47 * 4) = iVar28;
                iVar28 = iVar28 + 1;
              }
              uVar22 = uVar22 + 1;
            } while (uVar22 != uVar16);
          }
          FUN_02cd98fc(in_stack_00000100,puVar10);
          FUN_02cd98fc(in_stack_00000100,in_stack_00000090);
          sVar39 = in_stack_00000048[4];
          if (sVar39 < uVar16) {
            uVar22 = uVar16;
            if (sVar39 != 0) {
              uVar22 = sVar39;
            }
            do {
              uVar47 = uVar22;
              uVar22 = uVar47 << 1;
            } while (uVar47 < uVar16);
            if (uVar47 == 0) {
              pvVar17 = (void *)0x0;
            }
            else {
              pvVar17 = (void *)FUN_02cd98d8(in_stack_00000100,uVar47);
              sVar39 = in_stack_00000048[4];
            }
            if (sVar39 != 0) {
              memcpy(pvVar17,(void *)in_stack_00000048[2],sVar39);
            }
            FUN_02cd98fc(in_stack_00000100,in_stack_00000048[2]);
            in_stack_00000048[2] = (long)pvVar17;
            in_stack_00000048[4] = uVar47;
          }
          uVar22 = in_stack_00000048[5];
          if (uVar22 < uVar16) {
            uVar47 = uVar16;
            if (uVar22 != 0) {
              uVar47 = uVar22;
            }
            do {
              uVar49 = uVar47;
              uVar47 = uVar49 << 1;
            } while (uVar49 < uVar16);
            if (uVar49 == 0) {
              pvVar17 = (void *)0x0;
            }
            else {
              pvVar17 = (void *)FUN_02cd98d8(in_stack_00000100,uVar49 << 2);
              uVar22 = in_stack_00000048[5];
            }
            if (uVar22 != 0) {
              memcpy(pvVar17,(void *)in_stack_00000048[3],uVar22 << 2);
            }
            FUN_02cd98fc(in_stack_00000100,in_stack_00000048[3]);
            in_stack_00000048[5] = uVar49;
            in_stack_00000048[3] = (long)pvVar17;
          }
          if (uVar16 == 0) {
            lVar29 = 0;
            uVar22 = 0;
          }
          else {
            uVar22 = 0;
            lVar29 = 0;
            iVar28 = 0;
            piVar33 = piVar9;
            puVar10 = puVar8;
            do {
              iVar28 = *piVar33 + iVar28;
              if ((uVar16 == 1) || (*puVar10 != puVar10[1])) {
                uVar2 = *(uint *)((long)in_stack_00000118 + (ulong)*puVar10 * 4);
                *(char *)(in_stack_00000048[2] + lVar29) = (char)uVar2;
                uVar31 = (uint)uVar22;
                if (((uint)uVar22 & 0xff) <= (uVar2 & 0xff)) {
                  uVar31 = uVar2;
                }
                uVar22 = (ulong)uVar31;
                *(int *)(in_stack_00000048[3] + lVar29 * 4) = iVar28;
                lVar29 = lVar29 + 1;
                iVar28 = 0;
              }
              uVar16 = uVar16 - 1;
              piVar33 = piVar33 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar16 != 0);
          }
          *in_stack_00000048 = (uVar22 & 0xff) + 1;
          in_stack_00000048[1] = lVar29;
          FUN_02cd98fc(in_stack_00000100);
          FUN_02cd98fc(in_stack_00000100,piVar9);
          FUN_02cd98fc(in_stack_00000100,puVar8);
          FUN_02cd98fc(in_stack_00000100);
          FUN_02cd98fc(in_stack_00000100,in_stack_00000108);
          if (in_stack_00000050 == 0) {
            lVar29 = 0;
LAB_02ccd008:
            *in_stack_00000038 = 1;
            FUN_02cd98fc(in_stack_00000100,lVar29);
            lVar29 = 0;
          }
          else {
            uVar22 = in_stack_00000050 << 1;
            lVar29 = FUN_02cd98d8(in_stack_00000100,uVar22);
            uVar16 = 0;
            puVar27 = (undefined2 *)(in_stack_00000028 + 0xc);
            do {
              *(undefined2 *)(lVar29 + uVar16 * 2) = *puVar27;
              uVar16 = uVar16 + 1;
              puVar27 = puVar27 + 8;
            } while (in_stack_00000050 != uVar16);
            uVar16 = 0x32;
            if (in_stack_00000050 < 0x6784) {
              uVar16 = in_stack_00000050 / 0x212 + 1;
            }
            if (in_stack_00000050 == 0) goto LAB_02ccd008;
            if (in_stack_00000050 < 0x80) {
              lVar18 = in_stack_00000038[1];
              sVar39 = in_stack_00000038[4];
              uVar16 = lVar18 + 1;
              if (sVar39 < uVar16) {
                uVar47 = uVar16;
                if (sVar39 != 0) {
                  uVar47 = sVar39;
                }
                do {
                  uVar49 = uVar47;
                  uVar47 = uVar49 << 1;
                } while (uVar49 < uVar16);
                if (uVar49 == 0) {
                  pvVar17 = (void *)0x0;
                }
                else {
                  pvVar17 = (void *)FUN_02cd98d8(in_stack_00000100,uVar49);
                  sVar39 = in_stack_00000038[4];
                }
                if (sVar39 != 0) {
                  memcpy(pvVar17,(void *)in_stack_00000038[2],sVar39);
                }
                FUN_02cd98fc(in_stack_00000100,in_stack_00000038[2]);
                lVar18 = in_stack_00000038[1];
                in_stack_00000038[2] = (long)pvVar17;
                in_stack_00000038[4] = uVar49;
                uVar16 = lVar18 + 1;
              }
              uVar47 = in_stack_00000038[5];
              if (uVar47 < uVar16) {
                uVar49 = uVar16;
                if (uVar47 != 0) {
                  uVar49 = uVar47;
                }
                do {
                  uVar24 = uVar49;
                  uVar49 = uVar24 << 1;
                } while (uVar24 < uVar16);
                if (uVar24 == 0) {
                  pvVar17 = (void *)0x0;
                }
                else {
                  pvVar17 = (void *)FUN_02cd98d8(in_stack_00000100,uVar24 << 2);
                  uVar47 = in_stack_00000038[5];
                }
                if (uVar47 != 0) {
                  memcpy(pvVar17,(void *)in_stack_00000038[3],uVar47 << 2);
                }
                FUN_02cd98fc(in_stack_00000100,in_stack_00000038[3]);
                lVar18 = in_stack_00000038[1];
                in_stack_00000038[3] = (long)pvVar17;
                in_stack_00000038[5] = uVar24;
              }
              *in_stack_00000038 = 1;
              *(undefined1 *)(in_stack_00000038[2] + lVar18) = 0;
              lVar18 = in_stack_00000038[1];
              *(int *)(in_stack_00000038[3] + lVar18 * 4) = (int)in_stack_00000050;
              in_stack_00000038[1] = lVar18 + 1;
            }
            else {
              pvVar11 = (void *)FUN_02cd98d8(in_stack_00000100,uVar16 * 0xb10);
              pvVar17 = pvVar11;
              uVar47 = uVar16;
              do {
                memset(pvVar17,0,0xb08);
                *(undefined8 *)((long)pvVar17 + 0xb08) = 0x7ff0000000000000;
                uVar47 = uVar47 - 1;
                pvVar17 = (void *)((long)pvVar17 + 0xb10);
              } while (uVar47 != 0);
              uVar47 = 0;
              uVar49 = 0;
              if (uVar16 != 0) {
                uVar49 = in_stack_00000050 / uVar16;
              }
              uVar24 = 7;
              do {
                uVar40 = 0;
                if (uVar16 != 0) {
                  uVar40 = (uVar47 * in_stack_00000050) / uVar16;
                }
                if (uVar47 != 0) {
                  uVar24 = (ulong)(uint)((int)uVar24 * 0x41a7);
                  uVar38 = 0;
                  if (uVar49 != 0) {
                    uVar38 = uVar24 / uVar49;
                  }
                  uVar40 = (uVar24 - uVar38 * uVar49) + uVar40;
                }
                if (in_stack_00000050 <= uVar40 + 0x28) {
                  uVar40 = in_stack_00000050 - 0x29;
                }
                lVar18 = 0;
                *(long *)((long)pvVar11 + uVar47 * 0xb10 + 0xb00) =
                     *(long *)((long)pvVar11 + uVar47 * 0xb10 + 0xb00) + 0x28;
                do {
                  uVar38 = (ulong)*(ushort *)(lVar29 + uVar40 * 2 + lVar18);
                  lVar18 = lVar18 + 2;
                  *(int *)((long)pvVar11 + uVar38 * 4 + uVar47 * 0xb10) =
                       *(int *)((long)pvVar11 + uVar38 * 4 + uVar47 * 0xb10) + 1;
                } while (lVar18 != 0x50);
                uVar47 = uVar47 + 1;
              } while (uVar47 != uVar16);
              uVar47 = 0;
              if (uVar16 != 0) {
                uVar47 = (uVar16 + uVar22 / 0x28 + 99) / uVar16;
              }
              if (uVar47 * uVar16 != 0) {
                uVar49 = 0;
                uVar24 = in_stack_00000050 - 0x27;
                uVar40 = 7;
                do {
                  memset(&stack0x00000520,0,0xb08);
                  uVar40 = (ulong)(uint)((int)uVar40 * 0x41a7);
                  uVar38 = 0;
                  if (uVar24 != 0) {
                    uVar38 = uVar40 / uVar24;
                  }
                  lVar18 = -0x28;
                  puVar20 = (ushort *)(lVar29 + (uVar40 - uVar38 * uVar24) * 2);
                  do {
                    bVar7 = lVar18 != -1;
                    lVar18 = lVar18 + 1;
                    *(int *)(&stack0x00000520 + (ulong)*puVar20 * 4) =
                         *(int *)(&stack0x00000520 + (ulong)*puVar20 * 4) + 1;
                    puVar20 = puVar20 + 1;
                  } while (bVar7);
                  uVar38 = 0;
                  if (uVar16 != 0) {
                    uVar38 = uVar49 / uVar16;
                  }
                  lVar30 = uVar49 - uVar38 * uVar16;
                  lVar18 = 0;
                  lVar23 = 0;
                  *(long *)((long)pvVar11 + lVar30 * 0xb10 + 0xb00) =
                       *(long *)((long)pvVar11 + lVar30 * 0xb10 + 0xb00) + 0x28;
                  do {
                    lVar32 = lVar23 * 4;
                    puVar5 = (undefined8 *)(&stack0x00000528 + lVar18);
                    uVar41 = *(undefined8 *)(&stack0x00000520 + lVar18);
                    puVar4 = (undefined8 *)((long)pvVar11 + lVar32 + lVar30 * 0xb10);
                    uVar50 = puVar4[1];
                    uVar48 = *puVar4;
                    lVar18 = lVar18 + 0x10;
                    lVar23 = lVar23 + 4;
                    puVar4 = (undefined8 *)((long)pvVar11 + lVar32 + lVar30 * 0xb10);
                    puVar4[1] = CONCAT44((int)((ulong)uVar50 >> 0x20) +
                                         (int)((ulong)*puVar5 >> 0x20),(int)uVar50 + (int)*puVar5);
                    *puVar4 = CONCAT44((int)((ulong)uVar48 >> 0x20) + (int)((ulong)uVar41 >> 0x20),
                                       (int)uVar48 + (int)uVar41);
                  } while (lVar18 != 0xb00);
                  uVar49 = uVar49 + 1;
                } while (uVar49 != uVar47 * uVar16);
              }
              pvVar17 = (void *)FUN_02cd98d8(in_stack_00000100,in_stack_00000050);
              pdVar12 = (double *)FUN_02cd98d8(in_stack_00000100,uVar16 * 0x1600);
              pvVar13 = (void *)FUN_02cd98d8(in_stack_00000100,uVar16 << 3);
              if ((uVar16 + 7 >> 3) * in_stack_00000050 == 0) {
                pvVar14 = (void *)0x0;
              }
              else {
                pvVar14 = (void *)FUN_02cd98d8(in_stack_00000100);
              }
              lVar30 = FUN_02cd98d8(in_stack_00000100,uVar16 << 1);
              uVar49 = _UNK_013da728;
              uVar47 = _DAT_013da720;
              dVar6 = DAT_0137f700;
              dVar51 = DAT_0137efc0;
              dVar46 = DAT_0137e660;
              dVar45 = DAT_0137e530;
              uVar24 = in_stack_00000050 - 1;
              lVar18 = 0;
              lVar23 = 10;
              if (*(int *)(in_stack_00000030 + 4) < 0xb) {
                lVar23 = 3;
              }
              do {
                if (uVar16 < 2) {
                  memset(pvVar17,0,in_stack_00000050);
LAB_02ccd5a0:
                  uVar40 = 1;
                }
                else {
                  uVar38 = uVar16 + 7 >> 3;
                  memset(pdVar12,0,uVar16 * 0x1600);
                  uVar40 = 0;
                  puVar8 = (uint *)((long)pvVar11 + 0xb00);
                  do {
                    uVar25 = (ulong)*puVar8;
                    if (uVar25 < 0x100) {
                      dVar42 = (double)(&DAT_01a812e8)[uVar25];
                    }
                    else {
                      dVar42 = log2((double)uVar25);
                    }
                    pdVar12[uVar40] = dVar42;
                    uVar40 = uVar40 + 1;
                    puVar8 = puVar8 + 0x2c4;
                  } while (uVar16 != uVar40);
                  lVar32 = uVar16 * 0x15f8;
                  uVar40 = uVar16;
                  if (uVar16 < 2) {
                    uVar40 = 1;
                  }
                  lVar36 = 0x2c0;
                  puVar8 = (uint *)((long)pvVar11 + 0xafc);
                  do {
                    lVar36 = lVar36 + -1;
                    pdVar37 = pdVar12;
                    puVar10 = puVar8;
                    uVar25 = uVar40;
                    do {
                      uVar31 = *puVar10;
                      dVar42 = *pdVar37;
                      if (uVar31 == 0) {
                        dVar43 = -2.0;
                      }
                      else if (uVar31 < 0x100) {
                        dVar43 = (double)(&DAT_01a812e8)[uVar31];
                      }
                      else {
                        dVar43 = log2((double)uVar31);
                      }
                      uVar25 = uVar25 - 1;
                      *(double *)((long)pdVar37 + lVar32) = dVar42 - dVar43;
                      pdVar37 = pdVar37 + 1;
                      puVar10 = puVar10 + 0x2c4;
                    } while (uVar25 != 0);
                    puVar8 = puVar8 + -1;
                    lVar32 = lVar32 + uVar16 * -8;
                  } while (lVar36 != 0);
                  memset(pvVar13,0,uVar16 * 8);
                  memset(pvVar14,0,uVar38 * in_stack_00000050);
                  uVar25 = 0;
                  do {
                    uVar15 = *(ushort *)(lVar29 + uVar25 * 2);
                    uVar34 = 0;
                    dVar42 = dVar51;
                    do {
                      dVar43 = *(double *)((long)pdVar12 + uVar34 * 8 + uVar16 * 8 * (ulong)uVar15)
                               + *(double *)((long)pvVar13 + uVar34 * 8);
                      *(double *)((long)pvVar13 + uVar34 * 8) = dVar43;
                      if (dVar43 < dVar42) {
                        *(char *)((long)pvVar17 + uVar25) = (char)uVar34;
                        dVar42 = dVar43;
                      }
                      uVar34 = uVar34 + 1;
                    } while (uVar40 != uVar34);
                    dVar43 = 13.5;
                    if (uVar25 < 2000) {
                      dVar43 = (((double)uVar25 * dVar46) / dVar45 + dVar6) * 13.5;
                    }
                    uVar34 = 0;
                    do {
                      dVar44 = *(double *)((long)pvVar13 + uVar34 * 8) - dVar42;
                      *(double *)((long)pvVar13 + uVar34 * 8) = dVar44;
                      if (dVar43 <= dVar44) {
                        *(double *)((long)pvVar13 + uVar34 * 8) = dVar43;
                        lVar32 = uVar25 * uVar38 + (uVar34 >> 3);
                        *(byte *)((long)pvVar14 + lVar32) =
                             *(byte *)((long)pvVar14 + lVar32) | (byte)(1 << (uVar34 & 7));
                      }
                      uVar34 = uVar34 + 1;
                    } while (uVar40 != uVar34);
                    uVar25 = uVar25 + 1;
                  } while (uVar25 != in_stack_00000050);
                  if (uVar24 == 0) goto LAB_02ccd5a0;
                  uVar34 = (ulong)*(byte *)((long)pvVar17 + uVar24);
                  pvVar21 = (void *)((long)pvVar14 + (in_stack_00000050 - 2) * uVar38);
                  uVar40 = 1;
                  uVar25 = in_stack_00000050;
                  do {
                    if ((*(byte *)((long)pvVar21 + (uVar34 >> 3)) >> (uVar34 & 7) & 1) != 0) {
                      uVar31 = (uint)*(byte *)((long)pvVar17 + (uVar25 - 2));
                      if (uVar31 != (uint)uVar34) {
                        uVar40 = uVar40 + 1;
                      }
                      uVar34 = (ulong)uVar31;
                    }
                    *(char *)((long)pvVar17 + (uVar25 - 2)) = (char)uVar34;
                    uVar25 = uVar25 - 1;
                    pvVar21 = (void *)((long)pvVar21 - uVar38);
                  } while (uVar25 != 1);
                }
                if (uVar16 != 0) {
                  uVar38 = uVar16 + 1 & 0xfffffffffffffffe;
                  puVar27 = (undefined2 *)(lVar30 + 2);
                  uVar25 = uVar47;
                  uVar34 = uVar49;
                  do {
                    if (uVar25 <= uVar16 - 1) {
                      puVar27[-1] = 0x100;
                    }
                    if (uVar34 <= uVar16 - 1) {
                      *puVar27 = 0x100;
                    }
                    uVar25 = uVar25 + 2;
                    uVar34 = uVar34 + 2;
                    uVar38 = uVar38 - 2;
                    puVar27 = puVar27 + 2;
                  } while (uVar38 != 0);
                }
                uVar16 = 0;
                uVar15 = 0;
                do {
                  if (*(short *)(lVar30 + (ulong)*(byte *)((long)pvVar17 + uVar16) * 2) == 0x100) {
                    *(ushort *)(lVar30 + (ulong)*(byte *)((long)pvVar17 + uVar16) * 2) = uVar15;
                    uVar15 = uVar15 + 1;
                  }
                  uVar16 = uVar16 + 1;
                } while (in_stack_00000050 != uVar16);
                uVar16 = 0;
                do {
                  *(char *)((long)pvVar17 + uVar16) =
                       (char)*(undefined2 *)(lVar30 + (ulong)*(byte *)((long)pvVar17 + uVar16) * 2);
                  uVar16 = uVar16 + 1;
                } while (in_stack_00000050 != uVar16);
                uVar16 = (ulong)uVar15;
                pvVar21 = pvVar11;
                uVar38 = uVar16;
                if (uVar15 != 0) {
                  do {
                    memset(pvVar21,0,0xb08);
                    *(undefined8 *)((long)pvVar21 + 0xb08) = 0x7ff0000000000000;
                    uVar38 = uVar38 - 1;
                    pvVar21 = (void *)((long)pvVar21 + 0xb10);
                  } while (uVar38 != 0);
                }
                uVar38 = 0;
                do {
                  bVar3 = *(byte *)((long)pvVar17 + uVar38);
                  uVar25 = (ulong)*(ushort *)(lVar29 + uVar38 * 2);
                  uVar38 = uVar38 + 1;
                  *(int *)((long)pvVar11 + uVar25 * 4 + (ulong)bVar3 * 0xb10) =
                       *(int *)((long)pvVar11 + uVar25 * 4 + (ulong)bVar3 * 0xb10) + 1;
                  *(long *)((long)pvVar11 + (ulong)bVar3 * 0xb10 + 0xb00) =
                       *(long *)((long)pvVar11 + (ulong)bVar3 * 0xb10 + 0xb00) + 1;
                } while (in_stack_00000050 != uVar38);
                lVar18 = lVar18 + 1;
              } while (lVar18 != lVar23);
              FUN_02cd98fc(in_stack_00000100,pdVar12);
              FUN_02cd98fc(in_stack_00000100,pvVar13);
              FUN_02cd98fc(in_stack_00000100,pvVar14);
              FUN_02cd98fc(in_stack_00000100,lVar30);
              FUN_02cd98fc(in_stack_00000100,pvVar11);
              sVar39 = uVar40 << 2;
              if (uVar40 == 0) {
                puVar8 = (uint *)0x0;
                piVar9 = (int *)0x0;
                in_stack_000000e0 = 0xf;
                lVar18 = 0xa5f0;
LAB_02ccd754:
                in_stack_00000090 = (void *)FUN_02cd98d8(in_stack_00000100,lVar18);
                in_stack_000000d0 = (void *)FUN_02cd98d8(in_stack_00000100,in_stack_000000e0 << 2);
              }
              else {
                puVar8 = (uint *)FUN_02cd98d8(in_stack_00000100,sVar39);
                piVar9 = (int *)FUN_02cd98d8(in_stack_00000100,sVar39);
                in_stack_000000e0 = uVar40 * 0x10 + 0x3f0 >> 6;
                if (in_stack_000000e0 != 0) {
                  lVar18 = in_stack_000000e0 * 0xb10;
                  goto LAB_02ccd754;
                }
                in_stack_00000090 = (void *)0x0;
                in_stack_000000e0 = 0;
                in_stack_000000d0 = (void *)0x0;
              }
              uVar16 = uVar40;
              if (0x3f < uVar40) {
                uVar16 = 0x40;
              }
              if (uVar16 == 0) {
                lVar18 = 0;
              }
              else {
                lVar18 = FUN_02cd98d8(in_stack_00000100,uVar16 * 0xb10);
              }
              in_stack_00000078 = (uint *)FUN_02cd98d8(in_stack_00000100,0xc018);
              memset(&stack0x00000420,0,0x100);
              memset(&stack0x00000320,0,0x100);
              memset(&stack0x00000220,0,0x100);
              memset(&stack0x00000120,0,0x100);
              memset(piVar9,0,sVar39);
              lVar23 = 0;
              uVar16 = 0;
              do {
                piVar9[lVar23] = piVar9[lVar23] + 1;
                if ((uVar24 == uVar16) ||
                   (*(char *)((long)pvVar17 + uVar16) != ((char *)((long)pvVar17 + uVar16))[1])) {
                  lVar23 = lVar23 + 1;
                }
                uVar16 = uVar16 + 1;
              } while (in_stack_00000050 != uVar16);
              if (uVar40 == 0) {
                uVar16 = 0;
              }
              else {
                uVar47 = 0;
                uVar16 = 0;
                lVar23 = 0;
                in_stack_00000108 = 0;
                in_stack_000000f0 = 0;
                in_stack_000000c8 = in_stack_000000e0;
                uVar49 = uVar40;
                puVar10 = puVar8;
                do {
                  uVar38 = uVar49 - 0x40;
                  uVar24 = uVar40 - uVar47;
                  if (0x3f < uVar49) {
                    uVar49 = 0x40;
                  }
                  if (0x3f < uVar24) {
                    uVar24 = 0x40;
                  }
                  if (uVar24 != 0) {
                    uVar25 = 0;
                    do {
                      pvVar11 = (void *)(lVar18 + uVar25 * 0xb10);
                      memset(pvVar11,0,0xb08);
                      *(undefined8 *)((long)pvVar11 + 0xb08) = 0x7ff0000000000000;
                      if (piVar9[uVar25 + uVar47] != 0) {
                        lVar30 = lVar18 + uVar25 * 0xb10;
                        lVar32 = *(long *)(lVar30 + 0xb00);
                        uVar34 = 0;
                        do {
                          uVar35 = (ulong)*(ushort *)(lVar29 + lVar23 * 2 + uVar34 * 2);
                          lVar36 = lVar18 + uVar25 * 0xb10;
                          uVar34 = uVar34 + 1;
                          *(int *)(lVar36 + uVar35 * 4) = *(int *)(lVar36 + uVar35 * 4) + 1;
                        } while (uVar34 < (uint)piVar9[uVar25 + uVar47]);
                        lVar23 = lVar23 + uVar34;
                        *(ulong *)(lVar30 + 0xb00) = lVar32 + uVar34;
                      }
                      uVar41 = FUN_02c85878(pvVar11);
                      *(undefined8 *)((long)pvVar11 + 0xb08) = uVar41;
                      *(int *)(&stack0x00000220 + uVar25 * 4) = (int)uVar25;
                      *(int *)(&stack0x00000320 + uVar25 * 4) = (int)uVar25;
                      *(undefined4 *)(&stack0x00000420 + uVar25 * 4) = 1;
                      uVar25 = uVar25 + 1;
                    } while (uVar25 != uVar49);
                  }
                  lVar30 = FUN_02cdfa54(lVar18,&stack0x00000420,&stack0x00000220,&stack0x00000320,
                                        in_stack_00000078,uVar24,uVar24,0x40);
                  uVar25 = lVar30 + in_stack_00000108;
                  if (in_stack_000000e0 < uVar25) {
                    uVar34 = uVar25;
                    if (in_stack_000000e0 != 0) {
                      uVar34 = in_stack_000000e0;
                    }
                    do {
                      uVar35 = uVar34;
                      uVar34 = uVar35 << 1;
                    } while (uVar35 < uVar25);
                    if (uVar35 == 0) {
                      pvVar11 = (void *)0x0;
                    }
                    else {
                      pvVar11 = (void *)FUN_02cd98d8(in_stack_00000100,uVar35 * 0xb10);
                    }
                    if (in_stack_000000e0 != 0) {
                      memcpy(pvVar11,in_stack_00000090,in_stack_000000e0 * 0xb10);
                    }
                    FUN_02cd98fc(in_stack_00000100,in_stack_00000090);
                    in_stack_000000e0 = uVar35;
                    in_stack_00000090 = pvVar11;
                  }
                  uVar25 = lVar30 + in_stack_000000f0;
                  if (in_stack_000000c8 < uVar25) {
                    uVar34 = uVar25;
                    if (in_stack_000000c8 != 0) {
                      uVar34 = in_stack_000000c8;
                    }
                    do {
                      uVar35 = uVar34;
                      uVar34 = uVar35 << 1;
                    } while (uVar35 < uVar25);
                    if (uVar35 == 0) {
                      pvVar11 = (void *)0x0;
                    }
                    else {
                      pvVar11 = (void *)FUN_02cd98d8(in_stack_00000100,uVar35 << 2);
                    }
                    if (in_stack_000000c8 != 0) {
                      memcpy(pvVar11,in_stack_000000d0,in_stack_000000c8 << 2);
                    }
                    FUN_02cd98fc(in_stack_00000100,in_stack_000000d0);
                    in_stack_000000d0 = pvVar11;
                    in_stack_000000c8 = uVar35;
                  }
                  if (lVar30 != 0) {
                    lVar32 = 0;
                    pvVar11 = (void *)((long)in_stack_00000090 + in_stack_00000108 * 0xb10);
                    do {
                      uVar31 = *(uint *)(&stack0x00000320 + lVar32 * 4);
                      memcpy(pvVar11,(void *)(lVar18 + (ulong)uVar31 * 0xb10),0xb10);
                      pvVar11 = (void *)((long)pvVar11 + 0xb10);
                      *(undefined4 *)((long)in_stack_000000d0 + lVar32 * 4 + in_stack_000000f0 * 4)
                           = *(undefined4 *)(&stack0x00000420 + (ulong)uVar31 * 4);
                      *(int *)(&stack0x00000120 +
                              (ulong)*(uint *)(&stack0x00000320 + lVar32 * 4) * 4) = (int)lVar32;
                      lVar32 = lVar32 + 1;
                    } while (lVar30 != lVar32);
                    in_stack_00000108 = in_stack_00000108 + lVar32;
                    in_stack_000000f0 = in_stack_000000f0 + lVar32;
                  }
                  if (uVar24 != 0) {
                    puVar19 = (uint *)&stack0x00000220;
                    puVar26 = puVar10;
                    do {
                      uVar49 = uVar49 - 1;
                      *puVar26 = *(int *)(&stack0x00000120 + (ulong)*puVar19 * 4) + (int)uVar16;
                      puVar19 = puVar19 + 1;
                      puVar26 = puVar26 + 1;
                    } while (uVar49 != 0);
                  }
                  uVar47 = uVar47 + 0x40;
                  uVar16 = lVar30 + uVar16;
                  puVar10 = puVar10 + 0x40;
                  uVar49 = uVar38;
                } while (uVar47 < uVar40);
              }
              FUN_02cd98fc(in_stack_00000100,lVar18);
              uVar49 = (uVar16 >> 1) * uVar16;
              uVar47 = uVar16 << 6;
              if (uVar49 <= uVar16 << 6) {
                uVar47 = uVar49;
              }
              if (0x801 < uVar47 + 1) {
                FUN_02cd98fc(in_stack_00000100,in_stack_00000078);
                in_stack_00000078 = (uint *)FUN_02cd98d8(in_stack_00000100,(uVar47 + 1) * 0x18);
              }
              if (uVar16 == 0) {
                puVar10 = (uint *)0x0;
              }
              else {
                puVar10 = (uint *)FUN_02cd98d8(uVar16,in_stack_00000100);
                uVar47 = 0;
                do {
                  puVar10[uVar47] = (uint)uVar47;
                  uVar47 = uVar47 + 1;
                } while (uVar16 != uVar47);
              }
              lVar18 = FUN_02cdfa54(in_stack_00000090,in_stack_000000d0,puVar8,puVar10,
                                    in_stack_00000078,uVar16,uVar40,0x100);
              FUN_02cd98fc(in_stack_00000100,in_stack_00000078);
              FUN_02cd98fc(in_stack_00000100,in_stack_000000d0);
              if (uVar16 == 0) {
                in_stack_00000118 = (void *)0x0;
              }
              else {
                in_stack_00000118 = (void *)FUN_02cd98d8(in_stack_00000100,uVar16 << 2);
                memset(in_stack_00000118,0xff,uVar16 << 2);
              }
              if (uVar40 != 0) {
                uVar16 = 0;
                lVar23 = 0;
                iVar28 = 0;
                do {
                  memset(&stack0x00000520,0,0xb08);
                  if (piVar9[uVar16] != 0) {
                    uVar47 = 0;
                    do {
                      uVar49 = (ulong)*(ushort *)(lVar29 + lVar23 * 2 + uVar47 * 2);
                      uVar47 = uVar47 + 1;
                      *(int *)(&stack0x00000520 + uVar49 * 4) =
                           *(int *)(&stack0x00000520 + uVar49 * 4) + 1;
                    } while (uVar47 < (uint)piVar9[uVar16]);
                    lVar23 = lVar23 + uVar47;
                  }
                  puVar19 = puVar8;
                  if (uVar16 != 0) {
                    puVar19 = puVar8 + (uVar16 - 1);
                  }
                  uVar47 = (ulong)*puVar19;
                  dVar45 = (double)FUN_02cdfd28(&stack0x00000520,
                                                (void *)((long)in_stack_00000090 + uVar47 * 0xb10));
                  puVar19 = puVar10;
                  for (lVar30 = lVar18; lVar30 != 0; lVar30 = lVar30 + -1) {
                    dVar46 = (double)FUN_02cdfd28(&stack0x00000520,
                                                  (void *)((long)in_stack_00000090 +
                                                          (ulong)*puVar19 * 0xb10));
                    if (dVar46 < dVar45) {
                      uVar47 = (ulong)*puVar19;
                      dVar45 = dVar46;
                    }
                    puVar19 = puVar19 + 1;
                  }
                  puVar8[uVar16] = (uint)uVar47;
                  if (*(int *)((long)in_stack_00000118 + uVar47 * 4) == -1) {
                    *(int *)((long)in_stack_00000118 + uVar47 * 4) = iVar28;
                    iVar28 = iVar28 + 1;
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar16 != uVar40);
              }
              FUN_02cd98fc(in_stack_00000100,puVar10);
              FUN_02cd98fc(in_stack_00000100,in_stack_00000090);
              sVar39 = in_stack_00000038[4];
              if (sVar39 < uVar40) {
                uVar16 = uVar40;
                if (sVar39 != 0) {
                  uVar16 = sVar39;
                }
                do {
                  uVar47 = uVar16;
                  uVar16 = uVar47 << 1;
                } while (uVar47 < uVar40);
                if (uVar47 == 0) {
                  pvVar11 = (void *)0x0;
                }
                else {
                  pvVar11 = (void *)FUN_02cd98d8(in_stack_00000100,uVar47);
                  sVar39 = in_stack_00000038[4];
                }
                if (sVar39 != 0) {
                  memcpy(pvVar11,(void *)in_stack_00000038[2],sVar39);
                }
                FUN_02cd98fc(in_stack_00000100,in_stack_00000038[2]);
                in_stack_00000038[2] = (long)pvVar11;
                in_stack_00000038[4] = uVar47;
              }
              uVar16 = in_stack_00000038[5];
              if (uVar16 < uVar40) {
                uVar47 = uVar40;
                if (uVar16 != 0) {
                  uVar47 = uVar16;
                }
                do {
                  uVar49 = uVar47;
                  uVar47 = uVar49 << 1;
                } while (uVar49 < uVar40);
                if (uVar49 == 0) {
                  pvVar11 = (void *)0x0;
                }
                else {
                  pvVar11 = (void *)FUN_02cd98d8(in_stack_00000100,uVar49 << 2);
                  uVar16 = in_stack_00000038[5];
                }
                if (uVar16 != 0) {
                  memcpy(pvVar11,(void *)in_stack_00000038[3],uVar16 << 2);
                }
                FUN_02cd98fc(in_stack_00000100,in_stack_00000038[3]);
                in_stack_00000038[3] = (long)pvVar11;
                in_stack_00000038[5] = uVar49;
              }
              if (uVar40 == 0) {
                lVar18 = 0;
                uVar16 = 0;
              }
              else {
                uVar16 = 0;
                lVar18 = 0;
                iVar28 = 0;
                piVar33 = piVar9;
                puVar10 = puVar8;
                do {
                  iVar28 = *piVar33 + iVar28;
                  if ((uVar40 == 1) || (*puVar10 != puVar10[1])) {
                    uVar2 = *(uint *)((long)in_stack_00000118 + (ulong)*puVar10 * 4);
                    *(char *)(in_stack_00000038[2] + lVar18) = (char)uVar2;
                    uVar31 = (uint)uVar16;
                    if (((uint)uVar16 & 0xff) <= (uVar2 & 0xff)) {
                      uVar31 = uVar2;
                    }
                    uVar16 = (ulong)uVar31;
                    *(int *)(in_stack_00000038[3] + lVar18 * 4) = iVar28;
                    lVar18 = lVar18 + 1;
                    iVar28 = 0;
                  }
                  uVar40 = uVar40 - 1;
                  piVar33 = piVar33 + 1;
                  puVar10 = puVar10 + 1;
                } while (uVar40 != 0);
              }
              *in_stack_00000038 = (uVar16 & 0xff) + 1;
              in_stack_00000038[1] = lVar18;
              FUN_02cd98fc(in_stack_00000100);
              FUN_02cd98fc(in_stack_00000100,piVar9);
              FUN_02cd98fc(in_stack_00000100,puVar8);
              FUN_02cd98fc(in_stack_00000100,pvVar17);
            }
            FUN_02cd98fc(in_stack_00000100,lVar29);
            lVar29 = FUN_02cd98d8(in_stack_00000100,uVar22);
            if (in_stack_00000050 != 0) {
              puVar20 = (ushort *)(in_stack_00000028 + 0xc);
              uVar16 = 0;
              do {
                uVar22 = uVar16;
                if (((*(uint *)(puVar20 + -4) & 0x1ffffff) != 0) && (0x7f < *puVar20)) {
                  uVar22 = uVar16 + 1;
                  *(ushort *)(lVar29 + uVar16 * 2) = puVar20[1] & 0x3ff;
                }
                in_stack_00000050 = in_stack_00000050 - 1;
                puVar20 = puVar20 + 8;
                uVar16 = uVar22;
              } while (in_stack_00000050 != 0);
              if (uVar22 >> 6 < 0x1a9) {
                if (uVar22 == 0) goto LAB_02ccd01c;
                if (uVar22 < 0x80) {
                  lVar18 = in_stack_00000040[1];
                  sVar39 = in_stack_00000040[4];
                  uVar16 = lVar18 + 1;
                  if (sVar39 < uVar16) {
                    uVar47 = uVar16;
                    if (sVar39 != 0) {
                      uVar47 = sVar39;
                    }
                    do {
                      uVar49 = uVar47;
                      uVar47 = uVar49 << 1;
                    } while (uVar49 < uVar16);
                    if (uVar49 == 0) {
                      pvVar17 = (void *)0x0;
                    }
                    else {
                      pvVar17 = (void *)FUN_02cd98d8(in_stack_00000100,uVar49);
                      sVar39 = in_stack_00000040[4];
                    }
                    if (sVar39 != 0) {
                      memcpy(pvVar17,(void *)in_stack_00000040[2],sVar39);
                    }
                    FUN_02cd98fc(in_stack_00000100,in_stack_00000040[2]);
                    lVar18 = in_stack_00000040[1];
                    in_stack_00000040[2] = (long)pvVar17;
                    in_stack_00000040[4] = uVar49;
                    uVar16 = lVar18 + 1;
                  }
                  uVar47 = in_stack_00000040[5];
                  if (uVar47 < uVar16) {
                    uVar49 = uVar16;
                    if (uVar47 != 0) {
                      uVar49 = uVar47;
                    }
                    do {
                      uVar24 = uVar49;
                      uVar49 = uVar24 << 1;
                    } while (uVar24 < uVar16);
                    if (uVar24 == 0) {
                      pvVar17 = (void *)0x0;
                    }
                    else {
                      pvVar17 = (void *)FUN_02cd98d8(in_stack_00000100,uVar24 << 2);
                      uVar47 = in_stack_00000040[5];
                    }
                    if (uVar47 != 0) {
                      memcpy(pvVar17,(void *)in_stack_00000040[3],uVar47 << 2);
                    }
                    FUN_02cd98fc(in_stack_00000100,in_stack_00000040[3]);
                    lVar18 = in_stack_00000040[1];
                    in_stack_00000040[5] = uVar24;
                    in_stack_00000040[3] = (long)pvVar17;
                  }
                  *in_stack_00000040 = 1;
                  *(undefined1 *)(in_stack_00000040[2] + lVar18) = 0;
                  lVar18 = in_stack_00000040[1];
                  *(int *)(in_stack_00000040[3] + lVar18 * 4) = (int)uVar22;
                  in_stack_00000040[1] = lVar18 + 1;
                  goto LAB_02ccd024;
                }
                uVar16 = uVar22 / 0x220 + 1;
              }
              else {
                uVar16 = 0x32;
              }
              pvVar11 = (void *)FUN_02cd98d8(in_stack_00000100,uVar16 * 0x890);
              pvVar17 = pvVar11;
              uVar47 = uVar16;
              do {
                memset(pvVar17,0,0x888);
                *(undefined8 *)((long)pvVar17 + 0x888) = 0x7ff0000000000000;
                uVar47 = uVar47 - 1;
                pvVar17 = (void *)((long)pvVar17 + 0x890);
              } while (uVar47 != 0);
              uVar47 = 0;
              uVar49 = 0;
              if (uVar16 != 0) {
                uVar49 = uVar22 / uVar16;
              }
              uVar24 = 7;
              do {
                uVar40 = 0;
                if (uVar16 != 0) {
                  uVar40 = (uVar47 * uVar22) / uVar16;
                }
                if (uVar47 != 0) {
                  uVar24 = (ulong)(uint)((int)uVar24 * 0x41a7);
                  uVar38 = 0;
                  if (uVar49 != 0) {
                    uVar38 = uVar24 / uVar49;
                  }
                  uVar40 = (uVar24 - uVar38 * uVar49) + uVar40;
                }
                if (uVar22 <= uVar40 + 0x28) {
                  uVar40 = uVar22 - 0x29;
                }
                lVar18 = 0;
                *(long *)((long)pvVar11 + uVar47 * 0x890 + 0x880) =
                     *(long *)((long)pvVar11 + uVar47 * 0x890 + 0x880) + 0x28;
                do {
                  uVar38 = (ulong)*(ushort *)(lVar29 + uVar40 * 2 + lVar18);
                  lVar18 = lVar18 + 2;
                  *(int *)((long)pvVar11 + uVar38 * 4 + uVar47 * 0x890) =
                       *(int *)((long)pvVar11 + uVar38 * 4 + uVar47 * 0x890) + 1;
                } while (lVar18 != 0x50);
                uVar47 = uVar47 + 1;
              } while (uVar47 != uVar16);
              uVar47 = 0;
              if (uVar16 != 0) {
                uVar47 = (uVar16 + (uVar22 << 1) / 0x28 + 99) / uVar16;
              }
              if (uVar47 * uVar16 != 0) {
                uVar49 = 0;
                uVar24 = uVar22 - 0x27;
                uVar40 = 7;
                do {
                  memset(&stack0x00000520,0,0x888);
                  uVar40 = (ulong)(uint)((int)uVar40 * 0x41a7);
                  uVar38 = 0;
                  if (uVar24 != 0) {
                    uVar38 = uVar40 / uVar24;
                  }
                  lVar18 = -0x28;
                  puVar20 = (ushort *)(lVar29 + (uVar40 - uVar38 * uVar24) * 2);
                  do {
                    bVar7 = lVar18 != -1;
                    lVar18 = lVar18 + 1;
                    *(int *)(&stack0x00000520 + (ulong)*puVar20 * 4) =
                         *(int *)(&stack0x00000520 + (ulong)*puVar20 * 4) + 1;
                    puVar20 = puVar20 + 1;
                  } while (bVar7);
                  uVar38 = 0;
                  if (uVar16 != 0) {
                    uVar38 = uVar49 / uVar16;
                  }
                  lVar30 = uVar49 - uVar38 * uVar16;
                  lVar18 = 0;
                  lVar23 = 0;
                  *(long *)((long)pvVar11 + lVar30 * 0x890 + 0x880) =
                       *(long *)((long)pvVar11 + lVar30 * 0x890 + 0x880) + 0x28;
                  do {
                    lVar32 = lVar23 * 4;
                    puVar5 = (undefined8 *)(&stack0x00000528 + lVar18);
                    uVar41 = *(undefined8 *)(&stack0x00000520 + lVar18);
                    puVar4 = (undefined8 *)((long)pvVar11 + lVar32 + lVar30 * 0x890);
                    uVar50 = puVar4[1];
                    uVar48 = *puVar4;
                    lVar18 = lVar18 + 0x10;
                    lVar23 = lVar23 + 4;
                    puVar4 = (undefined8 *)((long)pvVar11 + lVar32 + lVar30 * 0x890);
                    puVar4[1] = CONCAT44((int)((ulong)uVar50 >> 0x20) +
                                         (int)((ulong)*puVar5 >> 0x20),(int)uVar50 + (int)*puVar5);
                    *puVar4 = CONCAT44((int)((ulong)uVar48 >> 0x20) + (int)((ulong)uVar41 >> 0x20),
                                       (int)uVar48 + (int)uVar41);
                  } while (lVar18 != 0x880);
                  uVar49 = uVar49 + 1;
                } while (uVar49 != uVar47 * uVar16);
              }
              pvVar17 = (void *)FUN_02cd98d8(in_stack_00000100,uVar22);
              pdVar12 = (double *)FUN_02cd98d8(in_stack_00000100,uVar16 * 0x1100);
              pvVar13 = (void *)FUN_02cd98d8(in_stack_00000100,uVar16 << 3);
              if ((uVar16 + 7 >> 3) * uVar22 == 0) {
                pvVar14 = (void *)0x0;
              }
              else {
                pvVar14 = (void *)FUN_02cd98d8(in_stack_00000100);
              }
              lVar30 = FUN_02cd98d8(in_stack_00000100,uVar16 << 1);
              uVar49 = _UNK_013da728;
              uVar47 = _DAT_013da720;
              dVar42 = DAT_0137f700;
              dVar6 = DAT_0137efc0;
              dVar51 = DAT_0137eaa0;
              dVar46 = DAT_0137e660;
              dVar45 = DAT_0137e530;
              uVar24 = uVar22 - 1;
              lVar18 = 0;
              lVar23 = 10;
              if (*(int *)(in_stack_00000030 + 4) < 0xb) {
                lVar23 = 3;
              }
              do {
                if (uVar16 < 2) {
                  memset(pvVar17,0,uVar22);
LAB_02cce5b8:
                  uVar40 = 1;
                }
                else {
                  uVar38 = uVar16 + 7 >> 3;
                  memset(pdVar12,0,uVar16 * 0x1100);
                  uVar40 = 0;
                  puVar8 = (uint *)((long)pvVar11 + 0x880);
                  do {
                    uVar25 = (ulong)*puVar8;
                    if (uVar25 < 0x100) {
                      dVar43 = (double)(&DAT_01a812e8)[uVar25];
                    }
                    else {
                      dVar43 = log2((double)uVar25);
                    }
                    pdVar12[uVar40] = dVar43;
                    uVar40 = uVar40 + 1;
                    puVar8 = puVar8 + 0x224;
                  } while (uVar16 != uVar40);
                  lVar32 = uVar16 * 0x10f8;
                  uVar40 = uVar16;
                  if (uVar16 < 2) {
                    uVar40 = 1;
                  }
                  lVar36 = 0x220;
                  puVar8 = (uint *)((long)pvVar11 + 0x87c);
                  do {
                    lVar36 = lVar36 + -1;
                    pdVar37 = pdVar12;
                    puVar10 = puVar8;
                    uVar25 = uVar40;
                    do {
                      uVar31 = *puVar10;
                      dVar43 = *pdVar37;
                      if (uVar31 == 0) {
                        dVar44 = -2.0;
                      }
                      else if (uVar31 < 0x100) {
                        dVar44 = (double)(&DAT_01a812e8)[uVar31];
                      }
                      else {
                        dVar44 = log2((double)uVar31);
                      }
                      uVar25 = uVar25 - 1;
                      *(double *)((long)pdVar37 + lVar32) = dVar43 - dVar44;
                      pdVar37 = pdVar37 + 1;
                      puVar10 = puVar10 + 0x224;
                    } while (uVar25 != 0);
                    lVar32 = lVar32 + uVar16 * -8;
                    puVar8 = puVar8 + -1;
                  } while (lVar36 != 0);
                  memset(pvVar13,0,uVar16 * 8);
                  memset(pvVar14,0,uVar38 * uVar22);
                  uVar25 = 0;
                  do {
                    uVar15 = *(ushort *)(lVar29 + uVar25 * 2);
                    uVar34 = 0;
                    dVar43 = dVar6;
                    do {
                      dVar44 = *(double *)((long)pdVar12 + uVar34 * 8 + uVar16 * 8 * (ulong)uVar15)
                               + *(double *)((long)pvVar13 + uVar34 * 8);
                      *(double *)((long)pvVar13 + uVar34 * 8) = dVar44;
                      if (dVar44 < dVar43) {
                        *(char *)((long)pvVar17 + uVar25) = (char)uVar34;
                        dVar43 = dVar44;
                      }
                      uVar34 = uVar34 + 1;
                    } while (uVar40 != uVar34);
                    dVar44 = dVar51;
                    if (uVar25 < 2000) {
                      dVar44 = (((double)uVar25 * dVar46) / dVar45 + dVar42) * dVar51;
                    }
                    uVar34 = 0;
                    do {
                      dVar52 = *(double *)((long)pvVar13 + uVar34 * 8) - dVar43;
                      *(double *)((long)pvVar13 + uVar34 * 8) = dVar52;
                      if (dVar44 <= dVar52) {
                        *(double *)((long)pvVar13 + uVar34 * 8) = dVar44;
                        lVar32 = uVar25 * uVar38 + (uVar34 >> 3);
                        *(byte *)((long)pvVar14 + lVar32) =
                             *(byte *)((long)pvVar14 + lVar32) | (byte)(1 << (uVar34 & 7));
                      }
                      uVar34 = uVar34 + 1;
                    } while (uVar40 != uVar34);
                    uVar25 = uVar25 + 1;
                  } while (uVar25 != uVar22);
                  if (uVar24 == 0) goto LAB_02cce5b8;
                  uVar34 = (ulong)*(byte *)((long)pvVar17 + uVar24);
                  pvVar21 = (void *)((long)pvVar14 + (uVar22 - 2) * uVar38);
                  uVar40 = 1;
                  uVar25 = uVar22;
                  do {
                    if ((*(byte *)((long)pvVar21 + (uVar34 >> 3)) >> (uVar34 & 7) & 1) != 0) {
                      uVar31 = (uint)*(byte *)((long)pvVar17 + (uVar25 - 2));
                      if (uVar31 != (uint)uVar34) {
                        uVar40 = uVar40 + 1;
                      }
                      uVar34 = (ulong)uVar31;
                    }
                    *(char *)((long)pvVar17 + (uVar25 - 2)) = (char)uVar34;
                    uVar25 = uVar25 - 1;
                    pvVar21 = (void *)((long)pvVar21 - uVar38);
                  } while (uVar25 != 1);
                }
                if (uVar16 != 0) {
                  uVar38 = uVar16 + 1 & 0xfffffffffffffffe;
                  puVar27 = (undefined2 *)(lVar30 + 2);
                  uVar25 = uVar47;
                  uVar34 = uVar49;
                  do {
                    if (uVar25 <= uVar16 - 1) {
                      puVar27[-1] = 0x100;
                    }
                    if (uVar34 <= uVar16 - 1) {
                      *puVar27 = 0x100;
                    }
                    uVar25 = uVar25 + 2;
                    uVar34 = uVar34 + 2;
                    uVar38 = uVar38 - 2;
                    puVar27 = puVar27 + 2;
                  } while (uVar38 != 0);
                }
                uVar16 = 0;
                uVar15 = 0;
                do {
                  if (*(short *)(lVar30 + (ulong)*(byte *)((long)pvVar17 + uVar16) * 2) == 0x100) {
                    *(ushort *)(lVar30 + (ulong)*(byte *)((long)pvVar17 + uVar16) * 2) = uVar15;
                    uVar15 = uVar15 + 1;
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar22 != uVar16);
                uVar16 = 0;
                do {
                  *(char *)((long)pvVar17 + uVar16) =
                       (char)*(undefined2 *)(lVar30 + (ulong)*(byte *)((long)pvVar17 + uVar16) * 2);
                  uVar16 = uVar16 + 1;
                } while (uVar22 != uVar16);
                uVar16 = (ulong)uVar15;
                uVar38 = uVar16;
                pvVar21 = pvVar11;
                if (uVar15 != 0) {
                  do {
                    memset(pvVar21,0,0x888);
                    *(undefined8 *)((long)pvVar21 + 0x888) = 0x7ff0000000000000;
                    uVar38 = uVar38 - 1;
                    pvVar21 = (void *)((long)pvVar21 + 0x890);
                  } while (uVar38 != 0);
                }
                uVar38 = 0;
                do {
                  bVar3 = *(byte *)((long)pvVar17 + uVar38);
                  uVar25 = (ulong)*(ushort *)(lVar29 + uVar38 * 2);
                  uVar38 = uVar38 + 1;
                  *(int *)((long)pvVar11 + uVar25 * 4 + (ulong)bVar3 * 0x890) =
                       *(int *)((long)pvVar11 + uVar25 * 4 + (ulong)bVar3 * 0x890) + 1;
                  *(long *)((long)pvVar11 + (ulong)bVar3 * 0x890 + 0x880) =
                       *(long *)((long)pvVar11 + (ulong)bVar3 * 0x890 + 0x880) + 1;
                } while (uVar22 != uVar38);
                lVar18 = lVar18 + 1;
              } while (lVar18 != lVar23);
              FUN_02cd98fc(in_stack_00000100,pdVar12);
              FUN_02cd98fc(in_stack_00000100,pvVar13);
              FUN_02cd98fc(in_stack_00000100,pvVar14);
              FUN_02cd98fc(in_stack_00000100,lVar30);
              FUN_02cd98fc(in_stack_00000100,pvVar11);
              sVar39 = uVar40 << 2;
              if (uVar40 == 0) {
                puVar8 = (uint *)0x0;
                piVar9 = (int *)0x0;
                in_stack_000000b8 = 0xf;
                lVar18 = 0x8070;
LAB_02cce770:
                in_stack_00000110 = (double *)FUN_02cd98d8(in_stack_00000100,lVar18);
                in_stack_00000090 = (void *)FUN_02cd98d8(in_stack_00000100,in_stack_000000b8 << 2);
              }
              else {
                puVar8 = (uint *)FUN_02cd98d8(in_stack_00000100,sVar39);
                piVar9 = (int *)FUN_02cd98d8(in_stack_00000100,sVar39);
                in_stack_000000b8 = uVar40 * 0x10 + 0x3f0 >> 6;
                if (in_stack_000000b8 != 0) {
                  lVar18 = in_stack_000000b8 * 0x890;
                  goto LAB_02cce770;
                }
                in_stack_00000110 = (void *)0x0;
                in_stack_000000b8 = 0;
                in_stack_00000090 = (void *)0x0;
              }
              uVar16 = uVar40;
              if (0x3f < uVar40) {
                uVar16 = 0x40;
              }
              if (uVar16 == 0) {
                lVar18 = 0;
              }
              else {
                lVar18 = FUN_02cd98d8(in_stack_00000100,uVar16 * 0x890);
              }
              in_stack_00000080 = FUN_02cd98d8(in_stack_00000100,0xc018);
              memset(&stack0x00000420,0,0x100);
              memset(&stack0x00000320,0,0x100);
              memset(&stack0x00000220,0,0x100);
              memset(&stack0x00000120,0,0x100);
              memset(piVar9,0,sVar39);
              lVar23 = 0;
              uVar16 = 0;
              do {
                piVar9[lVar23] = piVar9[lVar23] + 1;
                if ((uVar24 == uVar16) ||
                   (*(char *)((long)pvVar17 + uVar16) != ((char *)((long)pvVar17 + uVar16))[1])) {
                  lVar23 = lVar23 + 1;
                }
                uVar16 = uVar16 + 1;
              } while (uVar22 != uVar16);
              if (uVar40 == 0) {
                uVar16 = 0;
              }
              else {
                uVar22 = 0;
                uVar16 = 0;
                in_stack_00000118 = (void *)0x0;
                in_stack_000000c8 = 0;
                in_stack_000000d0 = (void *)0x0;
                in_stack_000000b0 = (undefined2 *)in_stack_000000b8;
                uVar47 = uVar40;
                in_stack_000000c0 = puVar8;
                do {
                  uVar24 = uVar47 - 0x40;
                  uVar49 = uVar40 - uVar22;
                  if (0x3f < uVar47) {
                    uVar47 = 0x40;
                  }
                  if (0x3f < uVar49) {
                    uVar49 = 0x40;
                  }
                  if (uVar49 != 0) {
                    uVar38 = 0;
                    do {
                      pvVar11 = (void *)(lVar18 + uVar38 * 0x890);
                      memset(pvVar11,0,0x888);
                      *(undefined8 *)((long)pvVar11 + 0x888) = 0x7ff0000000000000;
                      if (piVar9[uVar38 + uVar22] != 0) {
                        lVar23 = lVar18 + uVar38 * 0x890;
                        lVar30 = *(long *)(lVar23 + 0x880);
                        uVar25 = 0;
                        do {
                          uVar34 = (ulong)*(ushort *)
                                           (lVar29 + (long)in_stack_00000118 * 2 + uVar25 * 2);
                          lVar32 = lVar18 + uVar38 * 0x890;
                          uVar25 = uVar25 + 1;
                          *(int *)(lVar32 + uVar34 * 4) = *(int *)(lVar32 + uVar34 * 4) + 1;
                        } while (uVar25 < (uint)piVar9[uVar38 + uVar22]);
                        in_stack_00000118 = (void *)((long)in_stack_00000118 + uVar25);
                        *(ulong *)(lVar23 + 0x880) = lVar30 + uVar25;
                      }
                      uVar41 = FUN_02c85c44(pvVar11);
                      *(undefined8 *)((long)pvVar11 + 0x888) = uVar41;
                      *(int *)(&stack0x00000220 + uVar38 * 4) = (int)uVar38;
                      *(int *)(&stack0x00000320 + uVar38 * 4) = (int)uVar38;
                      *(undefined4 *)(&stack0x00000420 + uVar38 * 4) = 1;
                      uVar38 = uVar38 + 1;
                    } while (uVar38 != uVar47);
                  }
                  lVar23 = FUN_02ce0004(lVar18,&stack0x00000420,&stack0x00000220,&stack0x00000320,
                                        in_stack_00000080,uVar49,uVar49,0x40);
                  uVar38 = lVar23 + (long)in_stack_000000d0;
                  uVar25 = in_stack_000000b8;
                  if (in_stack_000000b8 < uVar38) {
                    uVar34 = uVar38;
                    if (in_stack_000000b8 != 0) {
                      uVar34 = in_stack_000000b8;
                    }
                    do {
                      uVar25 = uVar34;
                      uVar34 = uVar25 << 1;
                    } while (uVar25 < uVar38);
                    if (uVar25 == 0) {
                      pvVar11 = (void *)0x0;
                    }
                    else {
                      pvVar11 = (void *)FUN_02cd98d8(in_stack_00000100,uVar25 * 0x890);
                    }
                    if (in_stack_000000b8 != 0) {
                      memcpy(pvVar11,in_stack_00000110,in_stack_000000b8 * 0x890);
                    }
                    FUN_02cd98fc(in_stack_00000100,in_stack_00000110);
                    in_stack_00000110 = pvVar11;
                  }
                  uVar38 = lVar23 + in_stack_000000c8;
                  uVar34 = (ulong)in_stack_000000b0;
                  if (in_stack_000000b0 < uVar38) {
                    uVar35 = uVar38;
                    if (in_stack_000000b0 != (undefined2 *)0x0) {
                      uVar35 = (ulong)in_stack_000000b0;
                    }
                    do {
                      uVar34 = uVar35;
                      uVar35 = uVar34 << 1;
                    } while (uVar34 < uVar38);
                    if (uVar34 == 0) {
                      pvVar11 = (void *)0x0;
                    }
                    else {
                      pvVar11 = (void *)FUN_02cd98d8(in_stack_00000100,uVar34 << 2);
                    }
                    if (in_stack_000000b0 != (undefined2 *)0x0) {
                      memcpy(pvVar11,in_stack_00000090,(long)in_stack_000000b0 << 2);
                    }
                    FUN_02cd98fc(in_stack_00000100,in_stack_00000090);
                    in_stack_00000090 = pvVar11;
                  }
                  if (lVar23 != 0) {
                    lVar30 = 0;
                    pvVar11 = (void *)((long)in_stack_00000110 + (long)in_stack_000000d0 * 0x890);
                    do {
                      uVar31 = *(uint *)(&stack0x00000320 + lVar30 * 4);
                      memcpy(pvVar11,(void *)(lVar18 + (ulong)uVar31 * 0x890),0x890);
                      pvVar11 = (void *)((long)pvVar11 + 0x890);
                      *(undefined4 *)((long)in_stack_00000090 + lVar30 * 4 + in_stack_000000c8 * 4)
                           = *(undefined4 *)(&stack0x00000420 + (ulong)uVar31 * 4);
                      *(int *)(&stack0x00000120 +
                              (ulong)*(uint *)(&stack0x00000320 + lVar30 * 4) * 4) = (int)lVar30;
                      lVar30 = lVar30 + 1;
                    } while (lVar23 != lVar30);
                    in_stack_000000d0 = (void *)((long)in_stack_000000d0 + lVar30);
                    in_stack_000000c8 = in_stack_000000c8 + lVar30;
                  }
                  if (uVar49 != 0) {
                    puVar10 = (uint *)&stack0x00000220;
                    puVar19 = in_stack_000000c0;
                    do {
                      uVar47 = uVar47 - 1;
                      *puVar19 = *(int *)(&stack0x00000120 + (ulong)*puVar10 * 4) + (int)uVar16;
                      puVar10 = puVar10 + 1;
                      puVar19 = puVar19 + 1;
                    } while (uVar47 != 0);
                  }
                  uVar16 = lVar23 + uVar16;
                  in_stack_000000c0 = in_stack_000000c0 + 0x40;
                  uVar22 = uVar22 + 0x40;
                  uVar47 = uVar24;
                  in_stack_000000b0 = (undefined2 *)uVar34;
                  in_stack_000000b8 = uVar25;
                } while (uVar22 < uVar40);
              }
              FUN_02cd98fc(in_stack_00000100,lVar18);
              uVar47 = (uVar16 >> 1) * uVar16;
              uVar22 = uVar16 << 6;
              if (uVar47 <= uVar16 << 6) {
                uVar22 = uVar47;
              }
              if (0x801 < uVar22 + 1) {
                FUN_02cd98fc(in_stack_00000100,in_stack_00000080);
                in_stack_00000080 = FUN_02cd98d8(in_stack_00000100,(uVar22 + 1) * 0x18);
              }
              sVar39 = uVar16 << 2;
              if (uVar16 == 0) {
                puVar10 = (uint *)0x0;
              }
              else {
                puVar10 = (uint *)FUN_02cd98d8(in_stack_00000100,sVar39);
                uVar22 = 0;
                do {
                  puVar10[uVar22] = (uint)uVar22;
                  uVar22 = uVar22 + 1;
                } while (uVar16 != uVar22);
              }
              lVar18 = FUN_02ce0004(in_stack_00000110,in_stack_00000090,puVar8,puVar10,
                                    in_stack_00000080,uVar16,uVar40,0x100);
              FUN_02cd98fc(in_stack_00000100,in_stack_00000080);
              FUN_02cd98fc(in_stack_00000100,in_stack_00000090);
              if (uVar16 == 0) {
                pvVar11 = (void *)0x0;
              }
              else {
                pvVar11 = (void *)FUN_02cd98d8(in_stack_00000100,sVar39);
                memset(pvVar11,0xff,sVar39);
              }
              if (uVar40 != 0) {
                uVar16 = 0;
                lVar23 = 0;
                iVar28 = 0;
                do {
                  memset(&stack0x00000520,0,0x888);
                  if (piVar9[uVar16] != 0) {
                    uVar22 = 0;
                    do {
                      uVar47 = (ulong)*(ushort *)(lVar29 + lVar23 * 2 + uVar22 * 2);
                      uVar22 = uVar22 + 1;
                      *(int *)(&stack0x00000520 + uVar47 * 4) =
                           *(int *)(&stack0x00000520 + uVar47 * 4) + 1;
                    } while (uVar22 < (uint)piVar9[uVar16]);
                    lVar23 = lVar23 + uVar22;
                  }
                  puVar19 = puVar8;
                  if (uVar16 != 0) {
                    puVar19 = puVar8 + (uVar16 - 1);
                  }
                  uVar22 = (ulong)*puVar19;
                  dVar45 = (double)FUN_02ce02d8(&stack0x00000520,
                                                (void *)((long)in_stack_00000110 + uVar22 * 0x890));
                  puVar19 = puVar10;
                  for (lVar30 = lVar18; lVar30 != 0; lVar30 = lVar30 + -1) {
                    dVar46 = (double)FUN_02ce02d8(&stack0x00000520,
                                                  (void *)((long)in_stack_00000110 +
                                                          (ulong)*puVar19 * 0x890));
                    if (dVar46 < dVar45) {
                      uVar22 = (ulong)*puVar19;
                      dVar45 = dVar46;
                    }
                    puVar19 = puVar19 + 1;
                  }
                  puVar8[uVar16] = (uint)uVar22;
                  if (*(int *)((long)pvVar11 + uVar22 * 4) == -1) {
                    *(int *)((long)pvVar11 + uVar22 * 4) = iVar28;
                    iVar28 = iVar28 + 1;
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar16 != uVar40);
              }
              FUN_02cd98fc(in_stack_00000100,puVar10);
              FUN_02cd98fc(in_stack_00000100,in_stack_00000110);
              sVar39 = in_stack_00000040[4];
              if (sVar39 < uVar40) {
                uVar16 = uVar40;
                if (sVar39 != 0) {
                  uVar16 = sVar39;
                }
                do {
                  uVar22 = uVar16;
                  uVar16 = uVar22 << 1;
                } while (uVar22 < uVar40);
                if (uVar22 == 0) {
                  pvVar13 = (void *)0x0;
                }
                else {
                  pvVar13 = (void *)FUN_02cd98d8(in_stack_00000100,uVar22);
                  sVar39 = in_stack_00000040[4];
                }
                if (sVar39 != 0) {
                  memcpy(pvVar13,(void *)in_stack_00000040[2],sVar39);
                }
                FUN_02cd98fc(in_stack_00000100,in_stack_00000040[2]);
                in_stack_00000040[4] = uVar22;
                in_stack_00000040[2] = (long)pvVar13;
              }
              uVar16 = in_stack_00000040[5];
              if (uVar16 < uVar40) {
                uVar22 = uVar40;
                if (uVar16 != 0) {
                  uVar22 = uVar16;
                }
                do {
                  uVar47 = uVar22;
                  uVar22 = uVar47 << 1;
                } while (uVar47 < uVar40);
                if (uVar47 == 0) {
                  pvVar13 = (void *)0x0;
                }
                else {
                  pvVar13 = (void *)FUN_02cd98d8(in_stack_00000100,uVar47 << 2);
                  uVar16 = in_stack_00000040[5];
                }
                if (uVar16 != 0) {
                  memcpy(pvVar13,(void *)in_stack_00000040[3],uVar16 << 2);
                }
                FUN_02cd98fc(in_stack_00000100,in_stack_00000040[3]);
                in_stack_00000040[5] = uVar47;
                in_stack_00000040[3] = (long)pvVar13;
              }
              if (uVar40 == 0) {
                lVar18 = 0;
                uVar16 = 0;
              }
              else {
                uVar16 = 0;
                lVar18 = 0;
                iVar28 = 0;
                piVar33 = piVar9;
                puVar10 = puVar8;
                do {
                  iVar28 = *piVar33 + iVar28;
                  if ((uVar40 == 1) || (*puVar10 != puVar10[1])) {
                    uVar2 = *(uint *)((long)pvVar11 + (ulong)*puVar10 * 4);
                    *(char *)(in_stack_00000040[2] + lVar18) = (char)uVar2;
                    uVar31 = (uint)uVar16;
                    if (((uint)uVar16 & 0xff) <= (uVar2 & 0xff)) {
                      uVar31 = uVar2;
                    }
                    uVar16 = (ulong)uVar31;
                    *(int *)(in_stack_00000040[3] + lVar18 * 4) = iVar28;
                    lVar18 = lVar18 + 1;
                    iVar28 = 0;
                  }
                  uVar40 = uVar40 - 1;
                  piVar33 = piVar33 + 1;
                  puVar10 = puVar10 + 1;
                } while (uVar40 != 0);
              }
              *in_stack_00000040 = (uVar16 & 0xff) + 1;
              in_stack_00000040[1] = lVar18;
              FUN_02cd98fc(in_stack_00000100,pvVar11);
              FUN_02cd98fc(in_stack_00000100,piVar9);
              FUN_02cd98fc(in_stack_00000100,puVar8);
              FUN_02cd98fc(in_stack_00000100,pvVar17);
              goto LAB_02ccd024;
            }
          }
LAB_02ccd01c:
          *in_stack_00000040 = 1;
LAB_02ccd024:
          FUN_02cd98fc(in_stack_00000100,lVar29);
          return;
        }
        in_stack_000000c8 = in_stack_000000b8 - 1;
        if (in_stack_000000b8 != 0 && in_stack_000000c8 != 0) goto LAB_02ccc228;
        memset(unaff_x25,0,(size_t)in_stack_00000090);
LAB_02ccc474:
        uVar16 = 1;
      } while( true );
    }
    goto LAB_02ccc2b0;
  }
  goto LAB_02ccc2bc;
LAB_02ccc228:
  in_stack_000000c0 = (uint *)(in_stack_000000b8 + 7 >> 3);
  memset(in_stack_00000110,0,in_stack_000000b8 << 0xb);
  uVar16 = 0;
  puVar8 = in_stack_00000078;
  do {
    uVar22 = (ulong)*puVar8;
    if (uVar22 < 0x100) {
      dVar45 = (double)(&DAT_01a812e8)[uVar22];
    }
    else {
      dVar45 = log2((double)uVar22);
    }
    in_stack_00000110[uVar16] = dVar45;
    uVar16 = uVar16 + 1;
    puVar8 = puVar8 + 0x104;
  } while (in_stack_000000b8 != uVar16);
  unaff_x20 = in_stack_000000b8 * 0x7f8;
  in_stack_00000118 = (void *)(in_stack_000000b8 << 3);
  unaff_x21 = in_stack_000000b8;
  if (in_stack_000000b8 < 2) {
    unaff_x21 = 1;
  }
  unaff_x19 = 0x100;
  unaff_x23 = in_stack_00000070;
LAB_02ccc2b0:
  unaff_x19 = unaff_x19 + -1;
  unaff_x26 = unaff_x21;
  unaff_x27 = in_stack_00000110;
  unaff_x28 = unaff_x23;
LAB_02ccc2bc:
  uVar31 = *unaff_x28;
  dVar45 = *unaff_x27;
  if (uVar31 == 0) {
    dVar46 = -2.0;
  }
  else if (uVar31 < 0x100) {
    dVar46 = (double)(&DAT_01a812e8)[uVar31];
  }
  else {
    dVar46 = log2((double)uVar31);
  }
  unaff_x21 = unaff_x21 - 1;
  in_ZR = unaff_x21 == 0;
  *(double *)((long)unaff_x27 + unaff_x20) = dVar45 - dVar46;
  unaff_x27 = unaff_x27 + 1;
  goto code_r0x02ccc300;
}


