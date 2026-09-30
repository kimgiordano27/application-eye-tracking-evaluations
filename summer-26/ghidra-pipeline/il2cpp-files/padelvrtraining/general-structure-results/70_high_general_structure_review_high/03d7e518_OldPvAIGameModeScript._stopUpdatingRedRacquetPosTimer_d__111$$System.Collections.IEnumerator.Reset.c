/*
FUNCTION_NAME: OldPvAIGameModeScript.<stopUpdatingRedRacquetPosTimer>d__111$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 03d7e518
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void OldPvAIGameModeScript_<stopUpdatingRedRacquetPosTimer>d__111__System_Collections_IEnumerator_Reset
               (ulong param_1,undefined1 param_2 [16],undefined1 param_3 [16],ulong param_4,
               ulong param_5,long param_6,ulong param_7,undefined8 param_8,ulong param_9,
               int *param_10,ulong param_11)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  ushort uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong in_x9;
  long lVar16;
  ulong in_x10;
  ulong uVar17;
  ulong uVar18;
  ulong in_x11;
  int iVar19;
  int *in_x12;
  ulong uVar20;
  int *in_x13;
  ulong uVar21;
  ulong in_x14;
  ulong in_x15;
  ulong uVar22;
  long lVar23;
  int *piVar24;
  ulong uVar25;
  char *pcVar26;
  int iVar27;
  ulong in_x17;
  ulong uVar28;
  ulong unaff_x19;
  ulong uVar29;
  ulong unaff_x20;
  ulong uVar30;
  long unaff_x21;
  ulong uVar31;
  ulong unaff_x22;
  long lVar32;
  long lVar33;
  ulong unaff_x24;
  ulong uVar34;
  ulong unaff_x27;
  ulong uVar35;
  ulong unaff_x30;
  int iVar36;
  undefined8 uVar37;
  long *in_stack_00000018;
  long *in_stack_00000020;
  ulong in_stack_00000028;
  long in_stack_00000030;
  ulong in_stack_00000038;
  long in_stack_00000040;
  long *in_stack_00000058;
  ulong in_stack_00000060;
  long in_stack_00000068;
  uint *in_stack_00000070;
  long in_stack_00000080;
  int iStack000000000000009c;
  ulong in_stack_000000b0;
  ulong uStack00000000000000b8;
  ulong in_stack_000000c0;
  long in_stack_000000c8;
  ulong uStack00000000000000d0;
  ulong in_stack_000000d8;
  long in_stack_000000e0;
  ulong in_stack_000000e8;
  ulong in_stack_000000f0;
  ulong in_stack_000000f8;
  ulong in_stack_00000100;
  long in_stack_00000108;
  ulong in_stack_00000110;
  long in_stack_00000118;
  
code_r0x03d7e518:
  unaff_x27 = unaff_x27 - 1;
  uVar22 = (ulong)*(uint *)(unaff_x21 + (unaff_x27 & unaff_x22) * 4);
  uVar35 = param_5 - uVar22;
  if (uVar35 <= in_x11) goto code_r0x03d7e530;
  goto OldPvAIGameModeScript_<throwAgainstWallLookTimer>d__101__System_Collections_IEnumerator_Reset
  ;
code_r0x03d7e530:
  if (in_x9 + in_x14 <= param_7) {
    uVar22 = uVar22 & param_7;
    uVar29 = uVar22 + in_x9;
    if ((uVar29 <= param_7) && (*(char *)(param_6 + in_x9 + in_x14) == *(char *)(param_6 + uVar29)))
    {
      lVar16 = param_6 + uVar22;
      if (in_x15 == 0) {
        piVar24 = in_x13;
        uVar22 = 0;
      }
      else {
        lVar23 = 0;
        uVar29 = in_x15;
        do {
          uVar22 = *(ulong *)(lVar16 + lVar23);
          if (*(ulong *)((long)in_x13 + lVar23) != uVar22) {
            uVar22 = uVar22 ^ *(ulong *)((long)in_x13 + lVar23);
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar29 = lVar23 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
            goto LAB_03d7e5a8;
          }
          uVar29 = uVar29 - 1;
          lVar23 = lVar23 + 8;
          piVar24 = in_x12;
          uVar22 = in_x10;
        } while (uVar29 != 0);
      }
      uVar29 = uVar22;
      if (param_4 != 0) {
        uVar6 = uVar22 | param_4;
        uVar30 = param_4;
        do {
          uVar29 = uVar22;
          if (*(char *)(lVar16 + uVar22) != (char)*piVar24) break;
          piVar24 = (int *)((long)piVar24 + 1);
          uVar30 = uVar30 - 1;
          uVar22 = uVar22 + 1;
          uVar29 = uVar6;
        } while (uVar30 != 0);
      }
LAB_03d7e5a8:
      if ((3 < uVar29) &&
         (uVar22 = (uVar29 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar35) ^ 0x1f) * 0x1e)) + 0x780,
         in_x17 < uVar22)) {
        param_11 = uVar29;
        param_1 = uVar35;
        in_x9 = uVar29;
        in_x17 = uVar22;
        in_stack_00000110 = uVar22;
      }
    }
  }
  if (unaff_x27 <= unaff_x24) {
OldPvAIGameModeScript_<throwAgainstWallLookTimer>d__101__System_Collections_IEnumerator_Reset:
    do {
      *(int *)(unaff_x21 + (unaff_x22 & unaff_x20) * 4) = (int)param_5;
      *(short *)(in_stack_00000108 + unaff_x19 * 2) = (short)unaff_x20 + 1;
      if (in_x17 == 0x7e4) {
        lVar16 = *(long *)(in_stack_00000080 + 0x50);
        iStack000000000000009c = 0;
        uVar22 = *(ulong *)(lVar16 + 8);
        uVar35 = *(ulong *)(lVar16 + 0x10);
        if (uVar22 >> 7 <= uVar35) {
          lVar8 = *(long *)(in_stack_00000118 + 0x78);
          lVar23 = 0;
          uVar29 = (ulong)((uint)(param_9 >> 0x11) & 0x7ffe);
          uVar30 = 0x7e4;
          do {
            uVar22 = uVar22 + 1;
            *(ulong *)(lVar16 + 8) = uVar22;
            bVar4 = *(byte *)(lVar8 + uVar29);
            uVar6 = (ulong)bVar4;
            if ((uVar6 != 0) && (uVar6 <= unaff_x30)) {
              lVar32 = *(long *)(in_stack_00000118 + 0x58);
              uVar20 = (ulong)*(ushort *)(*(long *)(in_stack_00000118 + 0x70) + uVar29 * 2);
              pcVar1 = (char *)(*(long *)(lVar32 + 0xa8) +
                               (ulong)*(uint *)(lVar32 + uVar6 * 4 + 0x20) + uVar20 * uVar6);
              if ((ulong)(bVar4 >> 3) == 0) {
                uVar10 = 0;
                pcVar26 = pcVar1;
              }
              else {
                uVar10 = uVar6 & 0xf8;
                lVar33 = 0;
                pcVar26 = pcVar1 + uVar10;
                do {
                  if (*(ulong *)(pcVar1 + lVar33) != *(ulong *)((long)in_x13 + lVar33)) {
                    uVar10 = *(ulong *)((long)in_x13 + lVar33) ^ *(ulong *)(pcVar1 + lVar33);
                    uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1
                    ;
                    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2
                    ;
                    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
                    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar10 & 0xffff0000ffff) << 0x10;
                    uVar31 = lVar33 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3);
                    goto LAB_03d7e728;
                  }
                  lVar33 = lVar33 + 8;
                } while ((ulong)(bVar4 >> 3) * 8 - lVar33 != 0);
              }
              uVar21 = uVar6 & 7;
              uVar31 = uVar10;
              if ((bVar4 & 7) != 0) {
                uVar34 = uVar10 | uVar21;
                do {
                  uVar31 = uVar10;
                  if (*(char *)((long)in_x13 + uVar10) != *pcVar26) break;
                  pcVar26 = pcVar26 + 1;
                  uVar21 = uVar21 - 1;
                  uVar10 = uVar10 + 1;
                  uVar31 = uVar34;
                } while (uVar21 != 0);
              }
LAB_03d7e728:
              if ((((uVar31 != 0) && (uVar6 < uVar31 + *(uint *)(in_stack_00000118 + 100))) &&
                  (uVar6 = in_stack_000000e8 + 1 + uVar20 +
                           ((*(ulong *)(in_stack_00000118 + 0x68) >>
                             (((uVar6 - uVar31) * 3 & 0x1f) << 1) & 0x3f) + (uVar6 - uVar31) * 4 <<
                           ((ulong)*(byte *)(lVar32 + uVar6) & 0x3f)), uVar6 <= in_stack_000000f0))
                 && (uVar20 = (uVar31 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar6) ^ 0x1f) * 0x1e)) +
                              0x780, uVar30 <= uVar20)) {
                iStack000000000000009c = (uint)bVar4 - (int)uVar31;
                uVar35 = uVar35 + 1;
                *(ulong *)(lVar16 + 0x10) = uVar35;
                param_11 = uVar31;
                uVar30 = uVar20;
                param_1 = uVar6;
                in_stack_00000110 = uVar20;
              }
            }
            lVar23 = lVar23 + 1;
            uVar29 = uVar29 + 1;
          } while (lVar23 != 2);
        }
      }
      else {
        iStack000000000000009c = 0;
      }
      if (in_stack_00000110 < 0x7e5) {
        uVar22 = param_5 + 1;
        in_stack_00000100 = in_stack_00000100 + 1;
        if (in_stack_000000f8 < uVar22) {
          if (in_stack_000000f8 + in_stack_00000040 < uVar22) {
            uVar35 = param_5 + 0x11;
            if (in_stack_00000028 <= param_5 + 0x11) {
              uVar35 = in_stack_00000028;
            }
            if (uVar22 < uVar35) {
              uVar12 = *(uint *)(in_stack_00000080 + 0x40);
              uVar15 = *(uint *)(in_stack_00000080 + 0x44);
              uVar2 = *(uint *)(in_stack_00000080 + 0x48);
              do {
                in_stack_00000100 = in_stack_00000100 + 4;
                uVar3 = (uint)(*(int *)(param_6 + (uVar22 & param_7)) * 0x1e35a7bd) >>
                        ((ulong)uVar12 & 0x3f);
                uVar11 = *(ushort *)(in_stack_00000108 + (ulong)uVar3 * 2);
                *(int *)(in_stack_000000e0 +
                        ((ulong)(uVar3 << (ulong)(uVar2 & 0x1f)) + ((ulong)uVar15 & (ulong)uVar11))
                        * 4) = (int)uVar22;
                uVar22 = uVar22 + 4;
                *(ushort *)(in_stack_00000108 + (ulong)uVar3 * 2) = uVar11 + 1;
              } while (uVar22 < uVar35);
            }
          }
          else {
            uVar35 = param_5 + 9;
            if (in_stack_00000038 <= param_5 + 9) {
              uVar35 = in_stack_00000038;
            }
            if (uVar22 < uVar35) {
              uVar12 = *(uint *)(in_stack_00000080 + 0x40);
              uVar15 = *(uint *)(in_stack_00000080 + 0x44);
              uVar2 = *(uint *)(in_stack_00000080 + 0x48);
              do {
                in_stack_00000100 = in_stack_00000100 + 2;
                uVar3 = (uint)(*(int *)(param_6 + (uVar22 & param_7)) * 0x1e35a7bd) >>
                        ((ulong)uVar12 & 0x3f);
                uVar11 = *(ushort *)(in_stack_00000108 + (ulong)uVar3 * 2);
                *(int *)(in_stack_000000e0 +
                        ((ulong)(uVar3 << (ulong)(uVar2 & 0x1f)) + ((ulong)uVar15 & (ulong)uVar11))
                        * 4) = (int)uVar22;
                uVar22 = uVar22 + 2;
                *(ushort *)(in_stack_00000108 + (ulong)uVar3 * 2) = uVar11 + 1;
              } while (uVar22 < uVar35);
            }
          }
        }
      }
      else {
        uVar12 = 0;
        uVar15 = *(uint *)(in_stack_00000080 + 0x48);
        iVar36 = *(int *)(in_stack_00000080 + 0x4c);
        uVar2 = *(uint *)(in_stack_00000080 + 0x40);
        uVar3 = *(uint *)(in_stack_00000080 + 0x44);
LAB_03d7e864:
        unaff_x30 = unaff_x30 - 1;
        uVar22 = param_11 - 1;
        if (unaff_x30 <= param_11 - 1) {
          uVar22 = unaff_x30;
        }
        in_stack_000000f8 = param_5 + 1;
        uStack00000000000000b8 = in_stack_000000f8 + in_stack_000000c8;
        if (4 < *(int *)(in_stack_00000118 + 4)) {
          uVar22 = 0;
        }
        uVar35 = in_stack_000000d8;
        if (in_stack_000000f8 < in_stack_000000d8) {
          uVar35 = param_5 + 1;
        }
        uVar30 = in_stack_000000f8 & param_7;
        uVar29 = uStack00000000000000b8;
        if (in_stack_000000d8 <= uStack00000000000000b8) {
          uVar29 = in_stack_000000d8;
        }
        uVar6 = 0;
        uVar20 = 0;
        if (iVar36 == 0) {
          uVar10 = 0x7e4;
          uVar31 = 0x7e4;
        }
        else {
          pcVar1 = (char *)(param_6 + uVar30);
          uVar21 = 0;
          uVar34 = unaff_x30 & 7;
          uVar10 = 0x7e4;
          uVar31 = 0x7e4;
          do {
            uVar17 = (ulong)param_10[uVar21];
            if (((uVar17 <= uVar35) && (in_stack_000000f8 - uVar17 < in_stack_000000f8)) &&
               (uVar22 + uVar30 <= param_7)) {
              uVar13 = in_stack_000000f8 - uVar17 & param_7;
              uVar14 = uVar13 + uVar22;
              if ((uVar14 <= param_7) &&
                 (*(char *)(param_6 + uVar22 + uVar30) == *(char *)(param_6 + uVar14))) {
                lVar16 = param_6 + uVar13;
                uVar14 = 0;
                pcVar26 = pcVar1;
                uVar13 = uVar14;
                for (uVar25 = unaff_x30 >> 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                  uVar13 = *(ulong *)(lVar16 + uVar14);
                  if (*(ulong *)(pcVar1 + uVar14) != uVar13) {
                    uVar13 = uVar13 ^ *(ulong *)(pcVar1 + uVar14);
                    uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1
                    ;
                    uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2
                    ;
                    uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                    uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar13 & 0xffff0000ffff) << 0x10;
                    uVar14 = uVar14 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
                    goto LAB_03d7e96c;
                  }
                  uVar14 = uVar14 + 8;
                  pcVar26 = pcVar1 + (unaff_x30 & 0xfffffffffffffff8);
                  uVar13 = unaff_x30 & 0xfffffffffffffff8;
                }
                uVar14 = uVar13;
                if (uVar34 != 0) {
                  uVar28 = uVar13 | uVar34;
                  uVar25 = uVar34;
                  do {
                    uVar14 = uVar13;
                    if (*(char *)(lVar16 + uVar13) != *pcVar26) break;
                    pcVar26 = pcVar26 + 1;
                    uVar25 = uVar25 - 1;
                    uVar13 = uVar13 + 1;
                    uVar14 = uVar28;
                  } while (uVar25 != 0);
                }
LAB_03d7e96c:
                if (((2 < uVar14) || ((uVar21 < 2 && (uVar14 == 2)))) &&
                   (uVar13 = uVar14 * 0x87 + 0x78f, uVar31 < uVar13)) {
                  if (uVar21 != 0) {
                    uVar13 = uVar13 - ((0x1ca10U >> (ulong)((uint)uVar21 & 0xe) & 0xe) + 0x27);
                  }
                  if (uVar31 < uVar13) {
                    uVar10 = uVar13;
                    uVar6 = uVar17;
                    uVar31 = uVar13;
                    uVar20 = uVar14;
                    uVar22 = uVar14;
                  }
                }
              }
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 < (ulong)(long)iVar36);
        }
        piVar24 = (int *)(param_6 + uVar30);
        iVar19 = *piVar24;
        uVar5 = (uint)(iVar19 * 0x1e35a7bd) >> ((ulong)uVar2 & 0x3f);
        uVar11 = *(ushort *)(in_stack_00000108 + (ulong)uVar5 * 2);
        uVar34 = (ulong)uVar11;
        uVar21 = 0;
        if (in_stack_000000c0 <= uVar34) {
          uVar21 = uVar34 - in_stack_000000c0;
        }
        lVar16 = in_stack_000000e0 + (ulong)(uVar5 << (ulong)(uVar15 & 0x1f)) * 4;
        if (uVar21 < uVar34) {
          uVar14 = unaff_x30 & 7;
          uVar17 = uVar34;
          do {
            uVar17 = uVar17 - 1;
            uVar25 = (ulong)*(uint *)(lVar16 + (uVar17 & uVar3) * 4);
            uVar13 = in_stack_000000f8 - uVar25;
            if (uVar35 < uVar13) break;
            if (uVar22 + uVar30 <= param_7) {
              uVar25 = uVar25 & param_7;
              uVar28 = uVar25 + uVar22;
              if ((uVar28 <= param_7) &&
                 (*(char *)(param_6 + uVar22 + uVar30) == *(char *)(param_6 + uVar28))) {
                lVar23 = param_6 + uVar25;
                uVar25 = 0;
                piVar9 = piVar24;
                uVar28 = uVar25;
                for (uVar18 = unaff_x30 >> 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                  uVar28 = *(ulong *)(lVar23 + uVar25);
                  if (*(ulong *)((long)piVar24 + uVar25) != uVar28) {
                    uVar28 = uVar28 ^ *(ulong *)((long)piVar24 + uVar25);
                    uVar28 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1
                    ;
                    uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2
                    ;
                    uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
                    uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar28 & 0xffff0000ffff) << 0x10;
                    uVar25 = uVar25 + ((ulong)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) >> 3);
                    goto LAB_03d7eb14;
                  }
                  uVar25 = uVar25 + 8;
                  piVar9 = (int *)((long)piVar24 + (unaff_x30 & 0xfffffffffffffff8));
                  uVar28 = unaff_x30 & 0xfffffffffffffff8;
                }
                uVar25 = uVar28;
                if (uVar14 != 0) {
                  uVar7 = uVar28 | uVar14;
                  uVar18 = uVar14;
                  do {
                    uVar25 = uVar28;
                    if (*(char *)(lVar23 + uVar28) != (char)*piVar9) break;
                    piVar9 = (int *)((long)piVar9 + 1);
                    uVar28 = uVar28 + 1;
                    uVar18 = uVar18 - 1;
                    uVar25 = uVar7;
                  } while (uVar18 != 0);
                }
LAB_03d7eb14:
                if ((3 < uVar25) &&
                   (uVar28 = (uVar25 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar13) ^ 0x1f) * 0x1e)) +
                             0x780, uVar31 < uVar28)) {
                  uVar10 = uVar28;
                  uVar6 = uVar13;
                  uVar31 = uVar28;
                  uVar20 = uVar25;
                  uVar22 = uVar25;
                }
              }
            }
          } while (uVar21 < uVar17);
        }
        *(int *)(lVar16 + (uVar3 & uVar34) * 4) = (int)in_stack_000000f8;
        *(ushort *)(in_stack_00000108 + (ulong)uVar5 * 2) = uVar11 + 1;
        if (uVar31 == 0x7e4) {
          iVar27 = 0;
          lVar16 = *(long *)(in_stack_00000080 + 0x50);
          uVar22 = *(ulong *)(lVar16 + 8);
          uVar35 = *(ulong *)(lVar16 + 0x10);
          if (uVar22 >> 7 <= uVar35) {
            uVar30 = (ulong)((uint)(iVar19 * 0x1e35a7bd) >> 0x11 & 0x7ffe);
            lVar8 = *(long *)(in_stack_00000118 + 0x78);
            lVar23 = 0;
            uStack00000000000000d0 = 0x7e4;
            do {
              uVar22 = uVar22 + 1;
              *(ulong *)(lVar16 + 8) = uVar22;
              bVar4 = *(byte *)(lVar8 + uVar30);
              uVar31 = (ulong)bVar4;
              if ((uVar31 != 0) && (uVar31 <= unaff_x30)) {
                lVar32 = *(long *)(in_stack_00000118 + 0x58);
                uVar21 = (ulong)*(ushort *)(*(long *)(in_stack_00000118 + 0x70) + uVar30 * 2);
                pcVar1 = (char *)(*(long *)(lVar32 + 0xa8) +
                                 (ulong)*(uint *)(lVar32 + uVar31 * 4 + 0x20) + uVar21 * uVar31);
                if ((ulong)(bVar4 >> 3) == 0) {
                  uVar34 = 0;
                  pcVar26 = pcVar1;
                }
                else {
                  uVar34 = uVar31 & 0xf8;
                  lVar33 = 0;
                  pcVar26 = pcVar1 + uVar34;
                  do {
                    if (*(ulong *)(pcVar1 + lVar33) != *(ulong *)((long)piVar24 + lVar33)) {
                      uVar34 = *(ulong *)((long)piVar24 + lVar33) ^ *(ulong *)(pcVar1 + lVar33);
                      uVar34 = (uVar34 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar34 & 0x5555555555555555) << 1;
                      uVar34 = (uVar34 & 0xcccccccccccccccc) >> 2 |
                               (uVar34 & 0x3333333333333333) << 2;
                      uVar34 = (uVar34 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar34 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar34 = (uVar34 & 0xff00ff00ff00ff00) >> 8 | (uVar34 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar34 & 0xffff0000ffff) << 0x10;
                      uVar17 = lVar33 + ((ulong)LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20) >> 3);
                      goto LAB_03d7ecd8;
                    }
                    lVar33 = lVar33 + 8;
                  } while ((ulong)(bVar4 >> 3) * 8 - lVar33 != 0);
                }
                uVar14 = uVar31 & 7;
                uVar17 = uVar34;
                if ((bVar4 & 7) != 0) {
                  uVar13 = uVar34 | uVar14;
                  do {
                    uVar17 = uVar34;
                    if (*(char *)((long)piVar24 + uVar34) != *pcVar26) break;
                    pcVar26 = pcVar26 + 1;
                    uVar14 = uVar14 - 1;
                    uVar34 = uVar34 + 1;
                    uVar17 = uVar13;
                  } while (uVar14 != 0);
                }
LAB_03d7ecd8:
                if ((((uVar17 != 0) && (uVar31 < uVar17 + *(uint *)(in_stack_00000118 + 100))) &&
                    (uVar31 = uVar29 + 1 + uVar21 +
                              ((*(ulong *)(in_stack_00000118 + 0x68) >>
                                (((uVar31 - uVar17) * 3 & 0x1f) << 1) & 0x3f) +
                               (uVar31 - uVar17) * 4 << ((ulong)*(byte *)(lVar32 + uVar31) & 0x3f)),
                    uVar31 <= in_stack_000000f0)) &&
                   (uVar21 = (uVar17 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar31) ^ 0x1f) * 0x1e)) +
                             0x780, uStack00000000000000d0 <= uVar21)) {
                  iVar27 = (uint)bVar4 - (int)uVar17;
                  uVar35 = uVar35 + 1;
                  *(ulong *)(lVar16 + 0x10) = uVar35;
                  uVar10 = uVar21;
                  uVar6 = uVar31;
                  uVar20 = uVar17;
                  uStack00000000000000d0 = uVar21;
                }
              }
              lVar23 = lVar23 + 1;
              uVar30 = uVar30 + 1;
            } while (lVar23 != 2);
          }
        }
        else {
          iVar27 = 0;
        }
        if (in_stack_00000110 + 0xaf <= uVar10) {
          in_stack_00000100 = in_stack_00000100 + 1;
          if ((2 < uVar12) ||
             (uVar22 = param_5 + 5, uVar12 = uVar12 + 1, param_5 = in_stack_000000f8,
             param_11 = uVar20, param_1 = uVar6, iStack000000000000009c = iVar27,
             in_stack_00000110 = uVar10, in_stack_000000b0 <= uVar22)) goto LAB_03d7eeb0;
          goto LAB_03d7e864;
        }
        uStack00000000000000b8 = param_5 + in_stack_000000c8;
        uVar6 = param_1;
        uVar20 = param_11;
        in_stack_000000f8 = param_5;
        iVar27 = iStack000000000000009c;
LAB_03d7eeb0:
        if (in_stack_000000d8 <= uStack00000000000000b8) {
          uStack00000000000000b8 = in_stack_000000d8;
        }
        if (uStack00000000000000b8 < uVar6) {
LAB_03d7eed8:
          uVar22 = uVar6 + 0xf;
LAB_03d7eedc:
          if ((uVar6 <= uStack00000000000000b8) && (uVar22 != 0)) {
            uVar37 = *(undefined8 *)param_10;
            iVar19 = (int)uVar6;
            *param_10 = iVar19;
            param_10[3] = param_10[2];
            *(undefined8 *)(param_10 + 1) = uVar37;
            iVar36 = *(int *)(in_stack_00000080 + 0x4c);
            if (4 < iVar36) {
              *(ulong *)(param_10 + 6) = CONCAT44(iVar19 + param_2._12_4_,iVar19 + param_2._8_4_);
              *(ulong *)(param_10 + 4) = CONCAT44(iVar19 + param_2._4_4_,iVar19 + param_2._0_4_);
              *(ulong *)(param_10 + 8) = CONCAT44(iVar19 + param_3._4_4_,iVar19 + param_3._0_4_);
              if (10 < iVar36) {
                iVar36 = (int)uVar37;
                *(ulong *)(param_10 + 0xc) =
                     CONCAT44(iVar36 + param_2._12_4_,iVar36 + param_2._8_4_);
                *(ulong *)(param_10 + 10) = CONCAT44(iVar36 + param_2._4_4_,iVar36 + param_2._0_4_);
                *(ulong *)(param_10 + 0xe) = CONCAT44(iVar36 + param_3._4_4_,iVar36 + param_3._0_4_)
                ;
              }
            }
          }
        }
        else {
          if (uVar6 != (long)*param_10) {
            if (uVar6 == (long)param_10[1]) {
              uVar22 = 1;
            }
            else {
              uVar22 = (uVar6 + 3) - (long)*param_10;
              if (uVar22 < 7) {
                uVar15 = (uint)uVar22;
                uVar12 = 0x9750468;
              }
              else {
                uVar22 = (uVar6 + 3) - (long)param_10[1];
                if (6 < uVar22) {
                  if (uVar6 == (long)param_10[2]) {
                    uVar22 = 2;
                  }
                  else {
                    if (uVar6 != (long)param_10[3]) goto LAB_03d7eed8;
                    uVar22 = 3;
                  }
                  goto LAB_03d7eedc;
                }
                uVar15 = (uint)uVar22;
                uVar12 = 0xfdb1ace;
              }
              uVar22 = (ulong)(uVar12 >> (ulong)((uVar15 & 7) << 2) & 0xf);
            }
            goto LAB_03d7eedc;
          }
          uVar22 = 0;
        }
        uVar12 = (uint)in_stack_00000100;
        *in_stack_00000070 = uVar12;
        in_stack_00000070[1] = (uint)uVar20 | iVar27 << 0x19;
        uVar35 = (ulong)*(uint *)(in_stack_00000118 + 0x44) + 0x10;
        if (uVar22 < uVar35) {
          uVar15 = 0;
        }
        else {
          uVar30 = (ulong)*(uint *)(in_stack_00000118 + 0x40);
          uVar29 = ((uVar22 - *(uint *)(in_stack_00000118 + 0x44)) + (4L << (uVar30 & 0x3f))) - 0x10
          ;
          uVar10 = (ulong)(((uint)LZCOUNT((uint)uVar29) ^ 0x1f) - 1);
          uVar31 = uVar29 >> (uVar10 & 0x3f);
          uVar22 = (ulong)(((uint)uVar29 &
                           (-1 << (ulong)(*(uint *)(in_stack_00000118 + 0x40) & 0x1f) ^ 0xffffffffU)
                           ) + (int)uVar35 +
                           (int)((uVar31 & 1 | (uVar10 - uVar30) * 2) - 2 << (uVar30 & 0x3f)) |
                          (int)(uVar10 - uVar30) << 10);
          uVar15 = (uint)(uVar29 - ((uVar31 & 1 | 2) << (uVar10 & 0x3f)) >> (uVar30 & 0x3f));
        }
        *(short *)((long)in_stack_00000070 + 0xe) = (short)uVar22;
        in_stack_00000070[2] = uVar15;
        if (5 < in_stack_00000100) {
          if (in_stack_00000100 < 0x82) {
            uVar12 = ((uint)LZCOUNT((int)(in_stack_00000100 - 2)) ^ 0x1f) - 1;
            uVar12 = (int)(in_stack_00000100 - 2 >> ((ulong)uVar12 & 0x3f)) + uVar12 * 2 + 2;
          }
          else if (in_stack_00000100 < 0x842) {
            uVar12 = ((uint)LZCOUNT(uVar12 - 0x42) ^ 0x1f) + 10;
          }
          else if (in_stack_00000100 >> 1 < 0xc21) {
            uVar12 = 0x15;
          }
          else {
            uVar12 = 0x16;
            if (0x5841 < in_stack_00000100) {
              uVar12 = 0x17;
            }
          }
        }
        uVar15 = iVar27 + (uint)uVar20;
        if (uVar15 < 10) {
          uVar15 = uVar15 - 2;
        }
        else if (uVar15 < 0x86) {
          uVar2 = ((uint)LZCOUNT((int)((long)(int)uVar15 - 6U)) ^ 0x1f) - 1;
          uVar15 = (int)((long)(int)uVar15 - 6U >> ((ulong)uVar2 & 0x3f)) + uVar2 * 2 + 4;
        }
        else if (uVar15 < 0x846) {
          uVar15 = ((uint)LZCOUNT(uVar15 - 0x46) ^ 0x1f) + 0xc;
        }
        else {
          uVar15 = 0x17;
        }
        uVar11 = (ushort)uVar15 & 7 | (ushort)((uVar12 & 7) << 3);
        if ((((uVar22 & 0x3ff) == 0) && ((uVar12 & 0xffff) < 8)) && ((uVar15 & 0xffff) < 0x10)) {
          if (7 < (uVar15 & 0xffff)) {
            uVar11 = uVar11 | 0x40;
          }
        }
        else {
          uVar12 = (uVar12 >> 3 & 0x1fff) * 3 + ((uVar15 & 0xfff8) >> 3);
          uVar11 = (((ushort)(0x520d40 >> (ulong)((uVar12 & 0xf) << 1)) & 0xc0) +
                    (short)uVar12 * 0x40 | uVar11) + 0x40;
        }
        *(ushort *)(in_stack_00000070 + 3) = uVar11;
        uVar22 = in_stack_000000f8 + uVar20;
        uVar35 = uVar22;
        if (in_stack_00000060 <= uVar22) {
          uVar35 = in_stack_00000060;
        }
        *in_stack_00000058 = *in_stack_00000058 + in_stack_00000100;
        uVar29 = in_stack_000000f8 + 2;
        if (uVar6 < uVar20 >> 2) {
          uVar6 = uVar22 + uVar6 * -4;
          uVar30 = uVar29;
          if (uVar29 <= uVar6) {
            uVar30 = uVar6;
          }
          uVar29 = uVar35;
          if (uVar30 <= uVar35) {
            uVar29 = uVar30;
          }
        }
        in_stack_00000070 = in_stack_00000070 + 4;
        in_stack_000000f8 = in_stack_00000068 + uVar20 * 2 + in_stack_000000f8;
        if (uVar29 < uVar35) {
          uVar12 = *(uint *)(in_stack_00000080 + 0x40);
          uVar15 = *(uint *)(in_stack_00000080 + 0x44);
          uVar2 = *(uint *)(in_stack_00000080 + 0x48);
          do {
            uVar3 = (uint)(*(int *)(param_6 + (uVar29 & param_7)) * 0x1e35a7bd) >>
                    ((ulong)uVar12 & 0x3f);
            uVar11 = *(ushort *)(in_stack_00000108 + (ulong)uVar3 * 2);
            *(int *)(in_stack_000000e0 +
                    ((ulong)(uVar3 << (ulong)(uVar2 & 0x1f)) + ((ulong)uVar15 & (ulong)uVar11)) * 4)
                 = (int)uVar29;
            uVar29 = uVar29 + 1;
            *(ushort *)(in_stack_00000108 + (ulong)uVar3 * 2) = uVar11 + 1;
          } while (uVar35 != uVar29);
        }
        in_stack_00000100 = 0;
      }
      param_5 = uVar22;
      unaff_x30 = in_stack_000000b0 - param_5;
      if (in_stack_000000b0 <= param_5 + 4) {
        *in_stack_00000020 = unaff_x30 + in_stack_00000100;
        *in_stack_00000018 = *in_stack_00000018 + ((long)in_stack_00000070 - in_stack_00000030 >> 4)
        ;
        return;
      }
      in_x14 = param_5 & param_7;
      in_stack_000000f0 = *(ulong *)(in_stack_00000118 + 0x50);
      in_x11 = param_5;
      if (in_stack_000000d8 <= param_5) {
        in_x11 = in_stack_000000d8;
      }
      in_stack_000000e8 = param_5 + in_stack_000000c8;
      if (in_stack_000000d8 <= param_5 + in_stack_000000c8) {
        in_stack_000000e8 = in_stack_000000d8;
      }
      in_x15 = unaff_x30 >> 3;
      param_1 = 0;
      param_11 = 0;
      in_x9 = 0;
      if (*(int *)(in_stack_00000080 + 0x4c) == 0) {
        in_stack_00000110 = 0x7e4;
        in_x17 = 0x7e4;
      }
      else {
        pcVar1 = (char *)(param_6 + in_x14);
        uVar22 = 0;
        uVar35 = unaff_x30 & 7;
        in_x17 = 0x7e4;
        in_stack_00000110 = 0x7e4;
        do {
          uVar29 = (ulong)param_10[uVar22];
          if (((uVar29 <= in_x11) && (param_5 - uVar29 < param_5)) && (in_x9 + in_x14 <= param_7)) {
            uVar6 = param_5 - uVar29 & param_7;
            uVar30 = uVar6 + in_x9;
            if ((uVar30 <= param_7) &&
               (*(char *)(param_6 + in_x9 + in_x14) == *(char *)(param_6 + uVar30))) {
              lVar16 = param_6 + uVar6;
              uVar30 = 0;
              pcVar26 = pcVar1;
              uVar6 = uVar30;
              for (uVar20 = in_x15; uVar20 != 0; uVar20 = uVar20 - 1) {
                uVar6 = *(ulong *)(lVar16 + uVar30);
                if (*(ulong *)(pcVar1 + uVar30) != uVar6) {
                  uVar6 = uVar6 ^ *(ulong *)(pcVar1 + uVar30);
                  uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
                  uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
                  uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
                  uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
                  uVar30 = uVar30 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3);
                  goto LAB_03d7e400;
                }
                uVar30 = uVar30 + 8;
                pcVar26 = pcVar1 + (unaff_x30 & 0xfffffffffffffff8);
                uVar6 = unaff_x30 & 0xfffffffffffffff8;
              }
              uVar30 = uVar6;
              if (uVar35 != 0) {
                uVar10 = uVar6 | uVar35;
                uVar20 = uVar35;
                do {
                  uVar30 = uVar6;
                  if (*(char *)(lVar16 + uVar6) != *pcVar26) break;
                  pcVar26 = pcVar26 + 1;
                  uVar20 = uVar20 - 1;
                  uVar6 = uVar6 + 1;
                  uVar30 = uVar10;
                } while (uVar20 != 0);
              }
LAB_03d7e400:
              if (((2 < uVar30) || ((uVar22 < 2 && (uVar30 == 2)))) &&
                 (uVar6 = uVar30 * 0x87 + 0x78f, in_x17 < uVar6)) {
                if (uVar22 != 0) {
                  uVar6 = uVar6 - ((0x1ca10U >> (ulong)((uint)uVar22 & 0xe) & 0xe) + 0x27);
                }
                if (in_x17 < uVar6) {
                  param_11 = uVar30;
                  param_1 = uVar29;
                  in_x9 = uVar30;
                  in_x17 = uVar6;
                  in_stack_00000110 = uVar6;
                }
              }
            }
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 < (ulong)(long)*(int *)(in_stack_00000080 + 0x4c));
      }
      in_x13 = (int *)(param_6 + in_x14);
      unaff_x22 = (ulong)*(uint *)(in_stack_00000080 + 0x44);
      param_9 = (ulong)(uint)(*in_x13 * 0x1e35a7bd);
      uVar12 = (uint)(*in_x13 * 0x1e35a7bd) >> ((ulong)*(uint *)(in_stack_00000080 + 0x40) & 0x3f);
      unaff_x19 = (ulong)uVar12;
      unaff_x20 = (ulong)*(ushort *)(in_stack_00000108 + unaff_x19 * 2);
      in_stack_000000c0 = *(ulong *)(in_stack_00000080 + 0x38);
      unaff_x21 = in_stack_000000e0 +
                  (ulong)(uVar12 << (ulong)(*(uint *)(in_stack_00000080 + 0x48) & 0x1f)) * 4;
      unaff_x24 = 0;
      if (in_stack_000000c0 <= unaff_x20) {
        unaff_x24 = unaff_x20 - in_stack_000000c0;
      }
    } while (unaff_x20 <= unaff_x24);
    in_x10 = unaff_x30 & 0xfffffffffffffff8;
    in_x12 = (int *)((long)in_x13 + in_x10);
    param_4 = unaff_x30 & 7;
    unaff_x27 = unaff_x20;
  }
  goto code_r0x03d7e518;
}


