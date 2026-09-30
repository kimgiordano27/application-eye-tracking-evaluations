/*
FUNCTION_NAME: OldPvAIGameModeScript.<throwAgainstWallLookTimer>d__101$$System.IDisposable.Dispose
ENTRY_POINT: 03d7e580
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OldPvAIGameModeScript_<throwAgainstWallLookTimer>d__101__System_IDisposable_Dispose
               (ulong param_1,undefined1 param_2 [16],undefined1 param_3 [16],ulong param_4,
               ulong param_5,long param_6,ulong param_7,undefined8 param_8,ulong param_9,
               int *param_10,long param_11)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  ushort uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  ulong in_x9;
  long lVar17;
  ulong in_x10;
  ulong uVar18;
  ulong uVar19;
  ulong in_x11;
  int iVar20;
  int *in_x12;
  ulong uVar21;
  int *in_x13;
  ulong uVar22;
  ulong in_x14;
  ulong in_x15;
  long in_x16;
  int *piVar23;
  ulong uVar24;
  char *pcVar25;
  int iVar26;
  ulong in_x17;
  long lVar27;
  ulong uVar28;
  ulong unaff_x19;
  ulong uVar29;
  ulong unaff_x20;
  long unaff_x21;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong unaff_x22;
  long lVar33;
  ulong unaff_x23;
  long lVar34;
  ulong unaff_x24;
  ulong uVar35;
  ulong unaff_x27;
  ulong unaff_x28;
  ulong unaff_x29;
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
  
code_r0x03d7e580:
  unaff_x23 = unaff_x23 - 1;
  in_x16 = in_x16 + 8;
  piVar23 = in_x12;
  uVar8 = in_x10;
  if (unaff_x23 != 0) goto LAB_03d7e570;
LAB_03d7e604:
  uVar32 = uVar8;
  if (param_4 != 0) {
    uVar6 = uVar8 | param_4;
    uVar29 = param_4;
    do {
      uVar32 = uVar8;
      if (*(char *)(param_11 + uVar8) != (char)*piVar23) break;
      piVar23 = (int *)((long)piVar23 + 1);
      uVar29 = uVar29 - 1;
      uVar8 = uVar8 + 1;
      uVar32 = uVar6;
    } while (uVar29 != 0);
  }
  do {
    if ((3 < uVar32) &&
       (uVar8 = (uVar32 * 0x87 - (ulong)(((uint)LZCOUNT((int)unaff_x28) ^ 0x1f) * 0x1e)) + 0x780,
       in_x17 < uVar8)) {
      unaff_x29 = uVar32;
      param_1 = unaff_x28;
      in_x9 = uVar32;
      in_x17 = uVar8;
      in_stack_00000110 = uVar8;
    }
    do {
      do {
        if (unaff_x24 < unaff_x27)
        goto 
        OldPvAIGameModeScript_<stopUpdatingRedRacquetPosTimer>d__111__System_Collections_IEnumerator_Reset
        ;
        do {
          do {
            *(int *)(unaff_x21 + (unaff_x22 & unaff_x20) * 4) = (int)param_5;
            *(short *)(in_stack_00000108 + unaff_x19 * 2) = (short)unaff_x20 + 1;
            if (in_x17 == 0x7e4) {
              lVar17 = *(long *)(in_stack_00000080 + 0x50);
              iStack000000000000009c = 0;
              uVar8 = *(ulong *)(lVar17 + 8);
              uVar32 = *(ulong *)(lVar17 + 0x10);
              if (uVar8 >> 7 <= uVar32) {
                lVar9 = *(long *)(in_stack_00000118 + 0x78);
                lVar27 = 0;
                uVar29 = (ulong)((uint)(param_9 >> 0x11) & 0x7ffe);
                uVar6 = 0x7e4;
                do {
                  uVar8 = uVar8 + 1;
                  *(ulong *)(lVar17 + 8) = uVar8;
                  bVar4 = *(byte *)(lVar9 + uVar29);
                  uVar30 = (ulong)bVar4;
                  if ((uVar30 != 0) && (uVar30 <= unaff_x30)) {
                    lVar33 = *(long *)(in_stack_00000118 + 0x58);
                    uVar21 = (ulong)*(ushort *)(*(long *)(in_stack_00000118 + 0x70) + uVar29 * 2);
                    pcVar1 = (char *)(*(long *)(lVar33 + 0xa8) +
                                     (ulong)*(uint *)(lVar33 + uVar30 * 4 + 0x20) + uVar21 * uVar30)
                    ;
                    if ((ulong)(bVar4 >> 3) == 0) {
                      uVar11 = 0;
                      pcVar25 = pcVar1;
                    }
                    else {
                      uVar11 = uVar30 & 0xf8;
                      lVar34 = 0;
                      pcVar25 = pcVar1 + uVar11;
                      do {
                        if (*(ulong *)(pcVar1 + lVar34) != *(ulong *)((long)in_x13 + lVar34)) {
                          uVar11 = *(ulong *)((long)in_x13 + lVar34) ^ *(ulong *)(pcVar1 + lVar34);
                          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar11 & 0x5555555555555555) << 1;
                          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 |
                                   (uVar11 & 0x3333333333333333) << 2;
                          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar11 & 0xff00ff00ff00ff) << 8;
                          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar11 & 0xffff0000ffff) << 0x10;
                          uVar31 = lVar34 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
                          goto LAB_03d7e728;
                        }
                        lVar34 = lVar34 + 8;
                      } while ((ulong)(bVar4 >> 3) * 8 - lVar34 != 0);
                    }
                    uVar22 = uVar30 & 7;
                    uVar31 = uVar11;
                    if ((bVar4 & 7) != 0) {
                      uVar35 = uVar11 | uVar22;
                      do {
                        uVar31 = uVar11;
                        if (*(char *)((long)in_x13 + uVar11) != *pcVar25) break;
                        pcVar25 = pcVar25 + 1;
                        uVar22 = uVar22 - 1;
                        uVar11 = uVar11 + 1;
                        uVar31 = uVar35;
                      } while (uVar22 != 0);
                    }
LAB_03d7e728:
                    if ((((uVar31 != 0) && (uVar30 < uVar31 + *(uint *)(in_stack_00000118 + 100)))
                        && (uVar30 = in_stack_000000e8 + 1 + uVar21 +
                                     ((*(ulong *)(in_stack_00000118 + 0x68) >>
                                       (((uVar30 - uVar31) * 3 & 0x1f) << 1) & 0x3f) +
                                      (uVar30 - uVar31) * 4 <<
                                     ((ulong)*(byte *)(lVar33 + uVar30) & 0x3f)),
                           uVar30 <= in_stack_000000f0)) &&
                       (uVar21 = (uVar31 * 0x87 -
                                 (ulong)(((uint)LZCOUNT((int)uVar30) ^ 0x1f) * 0x1e)) + 0x780,
                       uVar6 <= uVar21)) {
                      iStack000000000000009c = (uint)bVar4 - (int)uVar31;
                      uVar32 = uVar32 + 1;
                      *(ulong *)(lVar17 + 0x10) = uVar32;
                      unaff_x29 = uVar31;
                      uVar6 = uVar21;
                      param_1 = uVar30;
                      in_stack_00000110 = uVar21;
                    }
                  }
                  lVar27 = lVar27 + 1;
                  uVar29 = uVar29 + 1;
                } while (lVar27 != 2);
              }
            }
            else {
              iStack000000000000009c = 0;
            }
            if (in_stack_00000110 < 0x7e5) {
              uVar8 = param_5 + 1;
              in_stack_00000100 = in_stack_00000100 + 1;
              if (in_stack_000000f8 < uVar8) {
                if (in_stack_000000f8 + in_stack_00000040 < uVar8) {
                  uVar32 = param_5 + 0x11;
                  if (in_stack_00000028 <= param_5 + 0x11) {
                    uVar32 = in_stack_00000028;
                  }
                  if (uVar8 < uVar32) {
                    uVar13 = *(uint *)(in_stack_00000080 + 0x40);
                    uVar16 = *(uint *)(in_stack_00000080 + 0x44);
                    uVar2 = *(uint *)(in_stack_00000080 + 0x48);
                    do {
                      in_stack_00000100 = in_stack_00000100 + 4;
                      uVar3 = (uint)(*(int *)(param_6 + (uVar8 & param_7)) * 0x1e35a7bd) >>
                              ((ulong)uVar13 & 0x3f);
                      uVar12 = *(ushort *)(in_stack_00000108 + (ulong)uVar3 * 2);
                      *(int *)(in_stack_000000e0 +
                              ((ulong)(uVar3 << (ulong)(uVar2 & 0x1f)) +
                              ((ulong)uVar16 & (ulong)uVar12)) * 4) = (int)uVar8;
                      uVar8 = uVar8 + 4;
                      *(ushort *)(in_stack_00000108 + (ulong)uVar3 * 2) = uVar12 + 1;
                    } while (uVar8 < uVar32);
                  }
                }
                else {
                  uVar32 = param_5 + 9;
                  if (in_stack_00000038 <= param_5 + 9) {
                    uVar32 = in_stack_00000038;
                  }
                  if (uVar8 < uVar32) {
                    uVar13 = *(uint *)(in_stack_00000080 + 0x40);
                    uVar16 = *(uint *)(in_stack_00000080 + 0x44);
                    uVar2 = *(uint *)(in_stack_00000080 + 0x48);
                    do {
                      in_stack_00000100 = in_stack_00000100 + 2;
                      uVar3 = (uint)(*(int *)(param_6 + (uVar8 & param_7)) * 0x1e35a7bd) >>
                              ((ulong)uVar13 & 0x3f);
                      uVar12 = *(ushort *)(in_stack_00000108 + (ulong)uVar3 * 2);
                      *(int *)(in_stack_000000e0 +
                              ((ulong)(uVar3 << (ulong)(uVar2 & 0x1f)) +
                              ((ulong)uVar16 & (ulong)uVar12)) * 4) = (int)uVar8;
                      uVar8 = uVar8 + 2;
                      *(ushort *)(in_stack_00000108 + (ulong)uVar3 * 2) = uVar12 + 1;
                    } while (uVar8 < uVar32);
                  }
                }
              }
            }
            else {
              uVar13 = 0;
              uVar16 = *(uint *)(in_stack_00000080 + 0x48);
              iVar36 = *(int *)(in_stack_00000080 + 0x4c);
              uVar2 = *(uint *)(in_stack_00000080 + 0x40);
              uVar3 = *(uint *)(in_stack_00000080 + 0x44);
LAB_03d7e864:
              unaff_x30 = unaff_x30 - 1;
              uVar8 = unaff_x29 - 1;
              if (unaff_x30 <= unaff_x29 - 1) {
                uVar8 = unaff_x30;
              }
              in_stack_000000f8 = param_5 + 1;
              uStack00000000000000b8 = in_stack_000000f8 + in_stack_000000c8;
              if (4 < *(int *)(in_stack_00000118 + 4)) {
                uVar8 = 0;
              }
              uVar32 = in_stack_000000d8;
              if (in_stack_000000f8 < in_stack_000000d8) {
                uVar32 = param_5 + 1;
              }
              uVar6 = in_stack_000000f8 & param_7;
              uVar29 = uStack00000000000000b8;
              if (in_stack_000000d8 <= uStack00000000000000b8) {
                uVar29 = in_stack_000000d8;
              }
              uVar30 = 0;
              uVar21 = 0;
              if (iVar36 == 0) {
                uVar11 = 0x7e4;
                uVar31 = 0x7e4;
              }
              else {
                pcVar1 = (char *)(param_6 + uVar6);
                uVar22 = 0;
                uVar35 = unaff_x30 & 7;
                uVar11 = 0x7e4;
                uVar31 = 0x7e4;
                do {
                  uVar18 = (ulong)param_10[uVar22];
                  if (((uVar18 <= uVar32) && (in_stack_000000f8 - uVar18 < in_stack_000000f8)) &&
                     (uVar8 + uVar6 <= param_7)) {
                    uVar14 = in_stack_000000f8 - uVar18 & param_7;
                    uVar15 = uVar14 + uVar8;
                    if ((uVar15 <= param_7) &&
                       (*(char *)(param_6 + uVar8 + uVar6) == *(char *)(param_6 + uVar15))) {
                      lVar17 = param_6 + uVar14;
                      uVar15 = 0;
                      pcVar25 = pcVar1;
                      uVar14 = uVar15;
                      for (uVar24 = unaff_x30 >> 3; uVar24 != 0; uVar24 = uVar24 - 1) {
                        uVar14 = *(ulong *)(lVar17 + uVar15);
                        if (*(ulong *)(pcVar1 + uVar15) != uVar14) {
                          uVar14 = uVar14 ^ *(ulong *)(pcVar1 + uVar15);
                          uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar14 & 0x5555555555555555) << 1;
                          uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 |
                                   (uVar14 & 0x3333333333333333) << 2;
                          uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar14 & 0xff00ff00ff00ff) << 8;
                          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar14 & 0xffff0000ffff) << 0x10;
                          uVar15 = uVar15 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3);
                          goto LAB_03d7e96c;
                        }
                        uVar15 = uVar15 + 8;
                        pcVar25 = pcVar1 + (unaff_x30 & 0xfffffffffffffff8);
                        uVar14 = unaff_x30 & 0xfffffffffffffff8;
                      }
                      uVar15 = uVar14;
                      if (uVar35 != 0) {
                        uVar28 = uVar14 | uVar35;
                        uVar24 = uVar35;
                        do {
                          uVar15 = uVar14;
                          if (*(char *)(lVar17 + uVar14) != *pcVar25) break;
                          pcVar25 = pcVar25 + 1;
                          uVar24 = uVar24 - 1;
                          uVar14 = uVar14 + 1;
                          uVar15 = uVar28;
                        } while (uVar24 != 0);
                      }
LAB_03d7e96c:
                      if (((2 < uVar15) || ((uVar22 < 2 && (uVar15 == 2)))) &&
                         (uVar14 = uVar15 * 0x87 + 0x78f, uVar31 < uVar14)) {
                        if (uVar22 != 0) {
                          uVar14 = uVar14 - ((0x1ca10U >> (ulong)((uint)uVar22 & 0xe) & 0xe) + 0x27)
                          ;
                        }
                        if (uVar31 < uVar14) {
                          uVar11 = uVar14;
                          uVar30 = uVar18;
                          uVar31 = uVar14;
                          uVar21 = uVar15;
                          uVar8 = uVar15;
                        }
                      }
                    }
                  }
                  uVar22 = uVar22 + 1;
                } while (uVar22 < (ulong)(long)iVar36);
              }
              piVar23 = (int *)(param_6 + uVar6);
              iVar20 = *piVar23;
              uVar5 = (uint)(iVar20 * 0x1e35a7bd) >> ((ulong)uVar2 & 0x3f);
              uVar12 = *(ushort *)(in_stack_00000108 + (ulong)uVar5 * 2);
              uVar35 = (ulong)uVar12;
              uVar22 = 0;
              if (in_stack_000000c0 <= uVar35) {
                uVar22 = uVar35 - in_stack_000000c0;
              }
              lVar17 = in_stack_000000e0 + (ulong)(uVar5 << (ulong)(uVar16 & 0x1f)) * 4;
              if (uVar22 < uVar35) {
                uVar15 = unaff_x30 & 7;
                uVar18 = uVar35;
                do {
                  uVar18 = uVar18 - 1;
                  uVar24 = (ulong)*(uint *)(lVar17 + (uVar18 & uVar3) * 4);
                  uVar14 = in_stack_000000f8 - uVar24;
                  if (uVar32 < uVar14) break;
                  if (uVar8 + uVar6 <= param_7) {
                    uVar24 = uVar24 & param_7;
                    uVar28 = uVar24 + uVar8;
                    if ((uVar28 <= param_7) &&
                       (*(char *)(param_6 + uVar8 + uVar6) == *(char *)(param_6 + uVar28))) {
                      lVar27 = param_6 + uVar24;
                      uVar24 = 0;
                      piVar10 = piVar23;
                      uVar28 = uVar24;
                      for (uVar19 = unaff_x30 >> 3; uVar19 != 0; uVar19 = uVar19 - 1) {
                        uVar28 = *(ulong *)(lVar27 + uVar24);
                        if (*(ulong *)((long)piVar23 + uVar24) != uVar28) {
                          uVar28 = uVar28 ^ *(ulong *)((long)piVar23 + uVar24);
                          uVar28 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar28 & 0x5555555555555555) << 1;
                          uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 |
                                   (uVar28 & 0x3333333333333333) << 2;
                          uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar28 & 0xff00ff00ff00ff) << 8;
                          uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar28 & 0xffff0000ffff) << 0x10;
                          uVar24 = uVar24 + ((ulong)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) >> 3);
                          goto LAB_03d7eb14;
                        }
                        uVar24 = uVar24 + 8;
                        piVar10 = (int *)((long)piVar23 + (unaff_x30 & 0xfffffffffffffff8));
                        uVar28 = unaff_x30 & 0xfffffffffffffff8;
                      }
                      uVar24 = uVar28;
                      if (uVar15 != 0) {
                        uVar7 = uVar28 | uVar15;
                        uVar19 = uVar15;
                        do {
                          uVar24 = uVar28;
                          if (*(char *)(lVar27 + uVar28) != (char)*piVar10) break;
                          piVar10 = (int *)((long)piVar10 + 1);
                          uVar28 = uVar28 + 1;
                          uVar19 = uVar19 - 1;
                          uVar24 = uVar7;
                        } while (uVar19 != 0);
                      }
LAB_03d7eb14:
                      if ((3 < uVar24) &&
                         (uVar28 = (uVar24 * 0x87 -
                                   (ulong)(((uint)LZCOUNT((int)uVar14) ^ 0x1f) * 0x1e)) + 0x780,
                         uVar31 < uVar28)) {
                        uVar11 = uVar28;
                        uVar30 = uVar14;
                        uVar31 = uVar28;
                        uVar21 = uVar24;
                        uVar8 = uVar24;
                      }
                    }
                  }
                } while (uVar22 < uVar18);
              }
              *(int *)(lVar17 + (uVar3 & uVar35) * 4) = (int)in_stack_000000f8;
              *(ushort *)(in_stack_00000108 + (ulong)uVar5 * 2) = uVar12 + 1;
              if (uVar31 == 0x7e4) {
                iVar26 = 0;
                lVar17 = *(long *)(in_stack_00000080 + 0x50);
                uVar8 = *(ulong *)(lVar17 + 8);
                uVar32 = *(ulong *)(lVar17 + 0x10);
                if (uVar8 >> 7 <= uVar32) {
                  uVar6 = (ulong)((uint)(iVar20 * 0x1e35a7bd) >> 0x11 & 0x7ffe);
                  lVar9 = *(long *)(in_stack_00000118 + 0x78);
                  lVar27 = 0;
                  uStack00000000000000d0 = 0x7e4;
                  do {
                    uVar8 = uVar8 + 1;
                    *(ulong *)(lVar17 + 8) = uVar8;
                    bVar4 = *(byte *)(lVar9 + uVar6);
                    uVar31 = (ulong)bVar4;
                    if ((uVar31 != 0) && (uVar31 <= unaff_x30)) {
                      lVar33 = *(long *)(in_stack_00000118 + 0x58);
                      uVar22 = (ulong)*(ushort *)(*(long *)(in_stack_00000118 + 0x70) + uVar6 * 2);
                      pcVar1 = (char *)(*(long *)(lVar33 + 0xa8) +
                                       (ulong)*(uint *)(lVar33 + uVar31 * 4 + 0x20) +
                                       uVar22 * uVar31);
                      if ((ulong)(bVar4 >> 3) == 0) {
                        uVar35 = 0;
                        pcVar25 = pcVar1;
                      }
                      else {
                        uVar35 = uVar31 & 0xf8;
                        lVar34 = 0;
                        pcVar25 = pcVar1 + uVar35;
                        do {
                          if (*(ulong *)(pcVar1 + lVar34) != *(ulong *)((long)piVar23 + lVar34)) {
                            uVar35 = *(ulong *)((long)piVar23 + lVar34) ^
                                     *(ulong *)(pcVar1 + lVar34);
                            uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                     (uVar35 & 0x5555555555555555) << 1;
                            uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 |
                                     (uVar35 & 0x3333333333333333) << 2;
                            uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                     (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 |
                                     (uVar35 & 0xff00ff00ff00ff) << 8;
                            uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 |
                                     (uVar35 & 0xffff0000ffff) << 0x10;
                            uVar18 = lVar34 + ((ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3)
                            ;
                            goto LAB_03d7ecd8;
                          }
                          lVar34 = lVar34 + 8;
                        } while ((ulong)(bVar4 >> 3) * 8 - lVar34 != 0);
                      }
                      uVar15 = uVar31 & 7;
                      uVar18 = uVar35;
                      if ((bVar4 & 7) != 0) {
                        uVar14 = uVar35 | uVar15;
                        do {
                          uVar18 = uVar35;
                          if (*(char *)((long)piVar23 + uVar35) != *pcVar25) break;
                          pcVar25 = pcVar25 + 1;
                          uVar15 = uVar15 - 1;
                          uVar35 = uVar35 + 1;
                          uVar18 = uVar14;
                        } while (uVar15 != 0);
                      }
LAB_03d7ecd8:
                      if ((((uVar18 != 0) && (uVar31 < uVar18 + *(uint *)(in_stack_00000118 + 100)))
                          && (uVar31 = uVar29 + 1 + uVar22 +
                                       ((*(ulong *)(in_stack_00000118 + 0x68) >>
                                         (((uVar31 - uVar18) * 3 & 0x1f) << 1) & 0x3f) +
                                        (uVar31 - uVar18) * 4 <<
                                       ((ulong)*(byte *)(lVar33 + uVar31) & 0x3f)),
                             uVar31 <= in_stack_000000f0)) &&
                         (uVar22 = (uVar18 * 0x87 -
                                   (ulong)(((uint)LZCOUNT((int)uVar31) ^ 0x1f) * 0x1e)) + 0x780,
                         uStack00000000000000d0 <= uVar22)) {
                        iVar26 = (uint)bVar4 - (int)uVar18;
                        uVar32 = uVar32 + 1;
                        *(ulong *)(lVar17 + 0x10) = uVar32;
                        uVar11 = uVar22;
                        uVar30 = uVar31;
                        uVar21 = uVar18;
                        uStack00000000000000d0 = uVar22;
                      }
                    }
                    lVar27 = lVar27 + 1;
                    uVar6 = uVar6 + 1;
                  } while (lVar27 != 2);
                }
              }
              else {
                iVar26 = 0;
              }
              if (in_stack_00000110 + 0xaf <= uVar11) {
                in_stack_00000100 = in_stack_00000100 + 1;
                if ((2 < uVar13) ||
                   (uVar8 = param_5 + 5, uVar13 = uVar13 + 1, param_5 = in_stack_000000f8,
                   unaff_x29 = uVar21, param_1 = uVar30, iStack000000000000009c = iVar26,
                   in_stack_00000110 = uVar11, in_stack_000000b0 <= uVar8)) goto LAB_03d7eeb0;
                goto LAB_03d7e864;
              }
              uStack00000000000000b8 = param_5 + in_stack_000000c8;
              uVar30 = param_1;
              uVar21 = unaff_x29;
              in_stack_000000f8 = param_5;
              iVar26 = iStack000000000000009c;
LAB_03d7eeb0:
              if (in_stack_000000d8 <= uStack00000000000000b8) {
                uStack00000000000000b8 = in_stack_000000d8;
              }
              if (uStack00000000000000b8 < uVar30) {
LAB_03d7eed8:
                uVar8 = uVar30 + 0xf;
LAB_03d7eedc:
                if ((uVar30 <= uStack00000000000000b8) && (uVar8 != 0)) {
                  uVar37 = *(undefined8 *)param_10;
                  iVar20 = (int)uVar30;
                  *param_10 = iVar20;
                  param_10[3] = param_10[2];
                  *(undefined8 *)(param_10 + 1) = uVar37;
                  iVar36 = *(int *)(in_stack_00000080 + 0x4c);
                  if (4 < iVar36) {
                    *(ulong *)(param_10 + 6) =
                         CONCAT44(iVar20 + param_2._12_4_,iVar20 + param_2._8_4_);
                    *(ulong *)(param_10 + 4) =
                         CONCAT44(iVar20 + param_2._4_4_,iVar20 + param_2._0_4_);
                    *(ulong *)(param_10 + 8) =
                         CONCAT44(iVar20 + param_3._4_4_,iVar20 + param_3._0_4_);
                    if (10 < iVar36) {
                      iVar36 = (int)uVar37;
                      *(ulong *)(param_10 + 0xc) =
                           CONCAT44(iVar36 + param_2._12_4_,iVar36 + param_2._8_4_);
                      *(ulong *)(param_10 + 10) =
                           CONCAT44(iVar36 + param_2._4_4_,iVar36 + param_2._0_4_);
                      *(ulong *)(param_10 + 0xe) =
                           CONCAT44(iVar36 + param_3._4_4_,iVar36 + param_3._0_4_);
                    }
                  }
                }
              }
              else {
                if (uVar30 != (long)*param_10) {
                  if (uVar30 == (long)param_10[1]) {
                    uVar8 = 1;
                  }
                  else {
                    uVar8 = (uVar30 + 3) - (long)*param_10;
                    if (uVar8 < 7) {
                      uVar16 = (uint)uVar8;
                      uVar13 = 0x9750468;
                    }
                    else {
                      uVar8 = (uVar30 + 3) - (long)param_10[1];
                      if (6 < uVar8) {
                        if (uVar30 == (long)param_10[2]) {
                          uVar8 = 2;
                        }
                        else {
                          if (uVar30 != (long)param_10[3]) goto LAB_03d7eed8;
                          uVar8 = 3;
                        }
                        goto LAB_03d7eedc;
                      }
                      uVar16 = (uint)uVar8;
                      uVar13 = 0xfdb1ace;
                    }
                    uVar8 = (ulong)(uVar13 >> (ulong)((uVar16 & 7) << 2) & 0xf);
                  }
                  goto LAB_03d7eedc;
                }
                uVar8 = 0;
              }
              uVar13 = (uint)in_stack_00000100;
              *in_stack_00000070 = uVar13;
              in_stack_00000070[1] = (uint)uVar21 | iVar26 << 0x19;
              uVar32 = (ulong)*(uint *)(in_stack_00000118 + 0x44) + 0x10;
              if (uVar8 < uVar32) {
                uVar16 = 0;
              }
              else {
                uVar6 = (ulong)*(uint *)(in_stack_00000118 + 0x40);
                uVar29 = ((uVar8 - *(uint *)(in_stack_00000118 + 0x44)) + (4L << (uVar6 & 0x3f))) -
                         0x10;
                uVar11 = (ulong)(((uint)LZCOUNT((uint)uVar29) ^ 0x1f) - 1);
                uVar31 = uVar29 >> (uVar11 & 0x3f);
                uVar8 = (ulong)(((uint)uVar29 &
                                (-1 << (ulong)(*(uint *)(in_stack_00000118 + 0x40) & 0x1f) ^
                                0xffffffffU)) + (int)uVar32 +
                                (int)((uVar31 & 1 | (uVar11 - uVar6) * 2) - 2 << (uVar6 & 0x3f)) |
                               (int)(uVar11 - uVar6) << 10);
                uVar16 = (uint)(uVar29 - ((uVar31 & 1 | 2) << (uVar11 & 0x3f)) >> (uVar6 & 0x3f));
              }
              *(short *)((long)in_stack_00000070 + 0xe) = (short)uVar8;
              in_stack_00000070[2] = uVar16;
              if (5 < in_stack_00000100) {
                if (in_stack_00000100 < 0x82) {
                  uVar13 = ((uint)LZCOUNT((int)(in_stack_00000100 - 2)) ^ 0x1f) - 1;
                  uVar13 = (int)(in_stack_00000100 - 2 >> ((ulong)uVar13 & 0x3f)) + uVar13 * 2 + 2;
                }
                else if (in_stack_00000100 < 0x842) {
                  uVar13 = ((uint)LZCOUNT(uVar13 - 0x42) ^ 0x1f) + 10;
                }
                else if (in_stack_00000100 >> 1 < 0xc21) {
                  uVar13 = 0x15;
                }
                else {
                  uVar13 = 0x16;
                  if (0x5841 < in_stack_00000100) {
                    uVar13 = 0x17;
                  }
                }
              }
              uVar16 = iVar26 + (uint)uVar21;
              if (uVar16 < 10) {
                uVar16 = uVar16 - 2;
              }
              else if (uVar16 < 0x86) {
                uVar2 = ((uint)LZCOUNT((int)((long)(int)uVar16 - 6U)) ^ 0x1f) - 1;
                uVar16 = (int)((long)(int)uVar16 - 6U >> ((ulong)uVar2 & 0x3f)) + uVar2 * 2 + 4;
              }
              else if (uVar16 < 0x846) {
                uVar16 = ((uint)LZCOUNT(uVar16 - 0x46) ^ 0x1f) + 0xc;
              }
              else {
                uVar16 = 0x17;
              }
              uVar12 = (ushort)uVar16 & 7 | (ushort)((uVar13 & 7) << 3);
              if ((((uVar8 & 0x3ff) == 0) && ((uVar13 & 0xffff) < 8)) && ((uVar16 & 0xffff) < 0x10))
              {
                if (7 < (uVar16 & 0xffff)) {
                  uVar12 = uVar12 | 0x40;
                }
              }
              else {
                uVar13 = (uVar13 >> 3 & 0x1fff) * 3 + ((uVar16 & 0xfff8) >> 3);
                uVar12 = (((ushort)(0x520d40 >> (ulong)((uVar13 & 0xf) << 1)) & 0xc0) +
                          (short)uVar13 * 0x40 | uVar12) + 0x40;
              }
              *(ushort *)(in_stack_00000070 + 3) = uVar12;
              uVar8 = in_stack_000000f8 + uVar21;
              uVar32 = uVar8;
              if (in_stack_00000060 <= uVar8) {
                uVar32 = in_stack_00000060;
              }
              *in_stack_00000058 = *in_stack_00000058 + in_stack_00000100;
              uVar29 = in_stack_000000f8 + 2;
              if (uVar30 < uVar21 >> 2) {
                uVar30 = uVar8 + uVar30 * -4;
                uVar6 = uVar29;
                if (uVar29 <= uVar30) {
                  uVar6 = uVar30;
                }
                uVar29 = uVar32;
                if (uVar6 <= uVar32) {
                  uVar29 = uVar6;
                }
              }
              in_stack_00000070 = in_stack_00000070 + 4;
              in_stack_000000f8 = in_stack_00000068 + uVar21 * 2 + in_stack_000000f8;
              if (uVar29 < uVar32) {
                uVar13 = *(uint *)(in_stack_00000080 + 0x40);
                uVar16 = *(uint *)(in_stack_00000080 + 0x44);
                uVar2 = *(uint *)(in_stack_00000080 + 0x48);
                do {
                  uVar3 = (uint)(*(int *)(param_6 + (uVar29 & param_7)) * 0x1e35a7bd) >>
                          ((ulong)uVar13 & 0x3f);
                  uVar12 = *(ushort *)(in_stack_00000108 + (ulong)uVar3 * 2);
                  *(int *)(in_stack_000000e0 +
                          ((ulong)(uVar3 << (ulong)(uVar2 & 0x1f)) + ((ulong)uVar16 & (ulong)uVar12)
                          ) * 4) = (int)uVar29;
                  uVar29 = uVar29 + 1;
                  *(ushort *)(in_stack_00000108 + (ulong)uVar3 * 2) = uVar12 + 1;
                } while (uVar32 != uVar29);
              }
              in_stack_00000100 = 0;
            }
            param_5 = uVar8;
            unaff_x30 = in_stack_000000b0 - param_5;
            if (in_stack_000000b0 <= param_5 + 4) {
              *in_stack_00000020 = unaff_x30 + in_stack_00000100;
              *in_stack_00000018 =
                   *in_stack_00000018 + ((long)in_stack_00000070 - in_stack_00000030 >> 4);
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
            unaff_x29 = 0;
            in_x9 = 0;
            if (*(int *)(in_stack_00000080 + 0x4c) == 0) {
              in_stack_00000110 = 0x7e4;
              in_x17 = 0x7e4;
            }
            else {
              pcVar1 = (char *)(param_6 + in_x14);
              uVar8 = 0;
              uVar32 = unaff_x30 & 7;
              in_x17 = 0x7e4;
              in_stack_00000110 = 0x7e4;
              do {
                uVar29 = (ulong)param_10[uVar8];
                if (((uVar29 <= in_x11) && (param_5 - uVar29 < param_5)) &&
                   (in_x9 + in_x14 <= param_7)) {
                  uVar30 = param_5 - uVar29 & param_7;
                  uVar6 = uVar30 + in_x9;
                  if ((uVar6 <= param_7) &&
                     (*(char *)(param_6 + in_x9 + in_x14) == *(char *)(param_6 + uVar6))) {
                    lVar17 = param_6 + uVar30;
                    uVar6 = 0;
                    pcVar25 = pcVar1;
                    uVar30 = uVar6;
                    for (uVar21 = in_x15; uVar21 != 0; uVar21 = uVar21 - 1) {
                      uVar30 = *(ulong *)(lVar17 + uVar6);
                      if (*(ulong *)(pcVar1 + uVar6) != uVar30) {
                        uVar30 = uVar30 ^ *(ulong *)(pcVar1 + uVar6);
                        uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar30 & 0x5555555555555555) << 1;
                        uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 |
                                 (uVar30 & 0x3333333333333333) << 2;
                        uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar30 & 0xff00ff00ff00ff) << 8;
                        uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar30 & 0xffff0000ffff) << 0x10;
                        uVar6 = uVar6 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
                        goto LAB_03d7e400;
                      }
                      uVar6 = uVar6 + 8;
                      pcVar25 = pcVar1 + (unaff_x30 & 0xfffffffffffffff8);
                      uVar30 = unaff_x30 & 0xfffffffffffffff8;
                    }
                    uVar6 = uVar30;
                    if (uVar32 != 0) {
                      uVar11 = uVar30 | uVar32;
                      uVar21 = uVar32;
                      do {
                        uVar6 = uVar30;
                        if (*(char *)(lVar17 + uVar30) != *pcVar25) break;
                        pcVar25 = pcVar25 + 1;
                        uVar21 = uVar21 - 1;
                        uVar30 = uVar30 + 1;
                        uVar6 = uVar11;
                      } while (uVar21 != 0);
                    }
LAB_03d7e400:
                    if (((2 < uVar6) || ((uVar8 < 2 && (uVar6 == 2)))) &&
                       (uVar30 = uVar6 * 0x87 + 0x78f, in_x17 < uVar30)) {
                      if (uVar8 != 0) {
                        uVar30 = uVar30 - ((0x1ca10U >> (ulong)((uint)uVar8 & 0xe) & 0xe) + 0x27);
                      }
                      if (in_x17 < uVar30) {
                        unaff_x29 = uVar6;
                        param_1 = uVar29;
                        in_x9 = uVar6;
                        in_x17 = uVar30;
                        in_stack_00000110 = uVar30;
                      }
                    }
                  }
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < (ulong)(long)*(int *)(in_stack_00000080 + 0x4c));
            }
            in_x13 = (int *)(param_6 + in_x14);
            unaff_x22 = (ulong)*(uint *)(in_stack_00000080 + 0x44);
            param_9 = (ulong)(uint)(*in_x13 * 0x1e35a7bd);
            uVar13 = (uint)(*in_x13 * 0x1e35a7bd) >>
                     ((ulong)*(uint *)(in_stack_00000080 + 0x40) & 0x3f);
            unaff_x19 = (ulong)uVar13;
            unaff_x20 = (ulong)*(ushort *)(in_stack_00000108 + unaff_x19 * 2);
            in_stack_000000c0 = *(ulong *)(in_stack_00000080 + 0x38);
            unaff_x21 = in_stack_000000e0 +
                        (ulong)(uVar13 << (ulong)(*(uint *)(in_stack_00000080 + 0x48) & 0x1f)) * 4;
            unaff_x24 = 0;
            if (in_stack_000000c0 <= unaff_x20) {
              unaff_x24 = unaff_x20 - in_stack_000000c0;
            }
          } while (unaff_x20 <= unaff_x24);
          in_x10 = unaff_x30 & 0xfffffffffffffff8;
          in_x12 = (int *)((long)in_x13 + in_x10);
          param_4 = unaff_x30 & 7;
          unaff_x27 = unaff_x20;
OldPvAIGameModeScript_<stopUpdatingRedRacquetPosTimer>d__111__System_Collections_IEnumerator_Reset:
          unaff_x27 = unaff_x27 - 1;
          uVar8 = (ulong)*(uint *)(unaff_x21 + (unaff_x27 & unaff_x22) * 4);
          unaff_x28 = param_5 - uVar8;
        } while (in_x11 < unaff_x28);
      } while (param_7 < in_x9 + in_x14);
      uVar8 = uVar8 & param_7;
      uVar32 = uVar8 + in_x9;
    } while ((param_7 < uVar32) ||
            (*(char *)(param_6 + in_x9 + in_x14) != *(char *)(param_6 + uVar32)));
    param_11 = param_6 + uVar8;
    if (in_x15 == 0) break;
    in_x16 = 0;
    unaff_x23 = in_x15;
LAB_03d7e570:
    if (*(ulong *)((long)in_x13 + in_x16) == *(ulong *)(param_11 + in_x16)) goto code_r0x03d7e580;
    uVar8 = *(ulong *)(param_11 + in_x16) ^ *(ulong *)((long)in_x13 + in_x16);
    uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar32 = in_x16 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3);
  } while( true );
  piVar23 = in_x13;
  uVar8 = 0;
  goto LAB_03d7e604;
}


