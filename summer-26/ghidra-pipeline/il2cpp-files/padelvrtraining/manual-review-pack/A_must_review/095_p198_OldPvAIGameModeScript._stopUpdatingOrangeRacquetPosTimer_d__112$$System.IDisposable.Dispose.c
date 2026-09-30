/*
FUNCTION_NAME: OldPvAIGameModeScript.<stopUpdatingOrangeRacquetPosTimer>d__112$$System.IDisposable.Dispose
ENTRY_POINT: 03d7e320
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OldPvAIGameModeScript_<stopUpdatingOrangeRacquetPosTimer>d__112__System_IDisposable_Dispose
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],ulong param_4,
               ulong param_5,long param_6,ulong param_7,undefined8 param_8,ulong param_9,
               int *param_10)

{
  char *pcVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  ushort uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  ulong in_x9;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong in_x10;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  ulong uVar25;
  ulong uVar26;
  ulong in_x13;
  ulong in_x14;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  char *pcVar30;
  int iVar31;
  ulong in_x17;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  long lVar38;
  int unaff_w27;
  long unaff_x28;
  long unaff_x29;
  int iVar39;
  undefined8 uVar40;
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
  long in_stack_000000c8;
  ulong uStack00000000000000d0;
  ulong in_stack_000000d8;
  long in_stack_000000e0;
  ulong uStack0000000000000100;
  long in_stack_00000108;
  ulong uStack0000000000000110;
  long in_stack_00000118;
  
  do {
    uVar21 = param_5;
    if (in_x10 <= param_5) {
      uVar21 = in_x10;
    }
    uVar11 = param_5 + param_1;
    if (in_x10 <= param_5 + param_1) {
      uVar11 = in_x10;
    }
    uVar27 = param_4 >> 3;
    uVar15 = 0;
    uVar12 = 0;
    uVar19 = 0;
    if ((int)in_x13 == 0) {
      uStack0000000000000110 = 0x7e4;
      uVar32 = 0x7e4;
    }
    else {
      pcVar1 = (char *)(param_6 + in_x14);
      uVar9 = 0;
      uVar35 = param_4 & 7;
      uVar32 = 0x7e4;
      uStack0000000000000110 = 0x7e4;
      do {
        uVar22 = (ulong)param_10[uVar9];
        if (((uVar22 <= uVar21) && (param_5 - uVar22 < param_5)) && (uVar19 + in_x14 <= param_7)) {
          uVar25 = param_5 - uVar22 & param_7;
          uVar26 = uVar25 + uVar19;
          if ((uVar26 <= param_7) &&
             (*(char *)(param_6 + uVar19 + in_x14) == *(char *)(param_6 + uVar26))) {
            lVar20 = param_6 + uVar25;
            uVar26 = 0;
            pcVar30 = pcVar1;
            uVar25 = uVar26;
            for (uVar28 = uVar27; uVar28 != 0; uVar28 = uVar28 - 1) {
              uVar25 = *(ulong *)(lVar20 + uVar26);
              if (*(ulong *)(pcVar1 + uVar26) != uVar25) {
                uVar25 = uVar25 ^ *(ulong *)(pcVar1 + uVar26);
                uVar25 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
                uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
                uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
                uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
                uVar26 = uVar26 + ((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3);
                goto LAB_03d7e400;
              }
              uVar26 = uVar26 + 8;
              pcVar30 = pcVar1 + (param_4 & 0xfffffffffffffff8);
              uVar25 = param_4 & 0xfffffffffffffff8;
            }
            uVar26 = uVar25;
            if (uVar35 != 0) {
              uVar37 = uVar25 | uVar35;
              uVar28 = uVar35;
              do {
                uVar26 = uVar25;
                if (*(char *)(lVar20 + uVar25) != *pcVar30) break;
                pcVar30 = pcVar30 + 1;
                uVar28 = uVar28 - 1;
                uVar25 = uVar25 + 1;
                uVar26 = uVar37;
              } while (uVar28 != 0);
            }
LAB_03d7e400:
            if (((2 < uVar26) || ((uVar9 < 2 && (uVar26 == 2)))) &&
               (uVar25 = uVar26 * 0x87 + 0x78f, uVar32 < uVar25)) {
              if (uVar9 != 0) {
                uVar25 = uVar25 - ((0x1ca10U >> (ulong)((uint)uVar9 & 0xe) & 0xe) + 0x27);
              }
              if (uVar32 < uVar25) {
                uVar12 = uVar26;
                uVar15 = uVar22;
                uVar19 = uVar26;
                uVar32 = uVar25;
                uStack0000000000000110 = uVar25;
              }
            }
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < in_x13);
    }
    piVar2 = (int *)(param_6 + in_x14);
    iVar39 = *piVar2;
    uVar14 = (uint)(iVar39 * unaff_w27) >> ((ulong)*(uint *)(in_stack_00000080 + 0x40) & 0x3f);
    uVar13 = *(ushort *)(unaff_x28 + (ulong)uVar14 * 2);
    uVar22 = (ulong)uVar13;
    uVar35 = *(ulong *)(in_stack_00000080 + 0x38);
    lVar20 = unaff_x29 + (ulong)(uVar14 << (ulong)(*(uint *)(in_stack_00000080 + 0x48) & 0x1f)) * 4;
    uVar9 = 0;
    if (uVar35 <= uVar22) {
      uVar9 = uVar22 - uVar35;
    }
    if (uVar9 < uVar22) {
      uVar25 = param_4 & 7;
      uVar26 = uVar22;
      do {
        uVar26 = uVar26 - 1;
        uVar28 = (ulong)*(uint *)(lVar20 + (uVar26 & *(uint *)(in_stack_00000080 + 0x44)) * 4);
        uVar37 = param_5 - uVar28;
        if (uVar21 < uVar37) break;
        if (uVar19 + in_x14 <= param_7) {
          uVar28 = uVar28 & param_7;
          uVar17 = uVar28 + uVar19;
          if ((uVar17 <= param_7) &&
             (*(char *)(param_6 + uVar19 + in_x14) == *(char *)(param_6 + uVar17))) {
            lVar33 = param_6 + uVar28;
            if (uVar27 == 0) {
              piVar10 = piVar2;
              uVar28 = 0;
            }
            else {
              lVar29 = 0;
              uVar17 = uVar27;
              do {
                uVar28 = *(ulong *)(lVar33 + lVar29);
                if (*(ulong *)((long)piVar2 + lVar29) != uVar28) {
                  uVar28 = uVar28 ^ *(ulong *)((long)piVar2 + lVar29);
                  uVar28 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
                  uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
                  uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
                  uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10
                  ;
                  uVar17 = lVar29 + ((ulong)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) >> 3);
                  goto LAB_03d7e5a8;
                }
                uVar17 = uVar17 - 1;
                lVar29 = lVar29 + 8;
                piVar10 = (int *)((long)piVar2 + (param_4 & 0xfffffffffffffff8));
                uVar28 = param_4 & 0xfffffffffffffff8;
              } while (uVar17 != 0);
            }
            uVar17 = uVar28;
            if (uVar25 != 0) {
              uVar7 = uVar28 | uVar25;
              uVar16 = uVar25;
              do {
                uVar17 = uVar28;
                if (*(char *)(lVar33 + uVar28) != (char)*piVar10) break;
                piVar10 = (int *)((long)piVar10 + 1);
                uVar16 = uVar16 - 1;
                uVar28 = uVar28 + 1;
                uVar17 = uVar7;
              } while (uVar16 != 0);
            }
LAB_03d7e5a8:
            if ((3 < uVar17) &&
               (uVar28 = (uVar17 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar37) ^ 0x1f) * 0x1e)) +
                         0x780, uVar32 < uVar28)) {
              uVar12 = uVar17;
              uVar15 = uVar37;
              uVar19 = uVar17;
              uVar32 = uVar28;
              uStack0000000000000110 = uVar28;
            }
          }
        }
      } while (uVar9 < uVar26);
    }
    *(int *)(lVar20 + (*(uint *)(in_stack_00000080 + 0x44) & uVar22) * 4) = (int)param_5;
    *(ushort *)(in_stack_00000108 + (ulong)uVar14 * 2) = uVar13 + 1;
    if (uVar32 == 0x7e4) {
      lVar20 = *(long *)(in_stack_00000080 + 0x50);
      iStack000000000000009c = 0;
      uVar21 = *(ulong *)(lVar20 + 8);
      uVar19 = *(ulong *)(lVar20 + 0x10);
      if (uVar21 >> 7 <= uVar19) {
        lVar29 = *(long *)(in_stack_00000118 + 0x78);
        lVar33 = 0;
        uVar27 = (ulong)((uint)(iVar39 * unaff_w27) >> 0x11 & 0x7ffe);
        uVar32 = 0x7e4;
        do {
          uVar21 = uVar21 + 1;
          *(ulong *)(lVar20 + 8) = uVar21;
          bVar5 = *(byte *)(lVar29 + uVar27);
          uVar9 = (ulong)bVar5;
          if ((uVar9 != 0) && (uVar9 <= param_4)) {
            lVar36 = *(long *)(in_stack_00000118 + 0x58);
            uVar22 = (ulong)*(ushort *)(*(long *)(in_stack_00000118 + 0x70) + uVar27 * 2);
            pcVar1 = (char *)(*(long *)(lVar36 + 0xa8) +
                             (ulong)*(uint *)(lVar36 + uVar9 * 4 + 0x20) + uVar22 * uVar9);
            if ((ulong)(bVar5 >> 3) == 0) {
              uVar26 = 0;
              pcVar30 = pcVar1;
            }
            else {
              uVar26 = uVar9 & 0xf8;
              lVar38 = 0;
              pcVar30 = pcVar1 + uVar26;
              do {
                if (*(ulong *)(pcVar1 + lVar38) != *(ulong *)((long)piVar2 + lVar38)) {
                  uVar26 = *(ulong *)((long)piVar2 + lVar38) ^ *(ulong *)(pcVar1 + lVar38);
                  uVar26 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
                  uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
                  uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
                  uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10
                  ;
                  uVar25 = lVar38 + ((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 3);
                  goto LAB_03d7e728;
                }
                lVar38 = lVar38 + 8;
              } while ((ulong)(bVar5 >> 3) * 8 - lVar38 != 0);
            }
            uVar28 = uVar9 & 7;
            uVar25 = uVar26;
            if ((bVar5 & 7) != 0) {
              uVar37 = uVar26 | uVar28;
              do {
                uVar25 = uVar26;
                if (*(char *)((long)piVar2 + uVar26) != *pcVar30) break;
                pcVar30 = pcVar30 + 1;
                uVar28 = uVar28 - 1;
                uVar26 = uVar26 + 1;
                uVar25 = uVar37;
              } while (uVar28 != 0);
            }
LAB_03d7e728:
            if ((((uVar25 != 0) && (uVar9 < uVar25 + *(uint *)(in_stack_00000118 + 100))) &&
                (uVar9 = uVar11 + 1 + uVar22 +
                         ((*(ulong *)(in_stack_00000118 + 0x68) >>
                           (((uVar9 - uVar25) * 3 & 0x1f) << 1) & 0x3f) + (uVar9 - uVar25) * 4 <<
                         ((ulong)*(byte *)(lVar36 + uVar9) & 0x3f)), uVar9 <= in_x9)) &&
               (uVar22 = (uVar25 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar9) ^ 0x1f) * 0x1e)) +
                         0x780, uVar32 <= uVar22)) {
              iStack000000000000009c = (uint)bVar5 - (int)uVar25;
              uVar19 = uVar19 + 1;
              *(ulong *)(lVar20 + 0x10) = uVar19;
              uVar12 = uVar25;
              uVar32 = uVar22;
              uVar15 = uVar9;
              uStack0000000000000110 = uVar22;
            }
          }
          lVar33 = lVar33 + 1;
          uVar27 = uVar27 + 1;
        } while (lVar33 != 2);
      }
    }
    else {
      iStack000000000000009c = 0;
    }
    if (uStack0000000000000110 < 0x7e5) {
      uVar21 = param_5 + 1;
      in_x17 = in_x17 + 1;
      if (param_9 < uVar21) {
        if (param_9 + in_stack_00000040 < uVar21) {
          uVar11 = param_5 + 0x11;
          if (in_stack_00000028 <= param_5 + 0x11) {
            uVar11 = in_stack_00000028;
          }
          if (uVar21 < uVar11) {
            uVar14 = *(uint *)(in_stack_00000080 + 0x40);
            uVar18 = *(uint *)(in_stack_00000080 + 0x44);
            uVar3 = *(uint *)(in_stack_00000080 + 0x48);
            do {
              in_x17 = in_x17 + 4;
              uVar4 = (uint)(*(int *)(param_6 + (uVar21 & param_7)) * 0x1e35a7bd) >>
                      ((ulong)uVar14 & 0x3f);
              uVar13 = *(ushort *)(in_stack_00000108 + (ulong)uVar4 * 2);
              *(int *)(in_stack_000000e0 +
                      ((ulong)(uVar4 << (ulong)(uVar3 & 0x1f)) + ((ulong)uVar18 & (ulong)uVar13)) *
                      4) = (int)uVar21;
              uVar21 = uVar21 + 4;
              *(ushort *)(in_stack_00000108 + (ulong)uVar4 * 2) = uVar13 + 1;
            } while (uVar21 < uVar11);
          }
        }
        else {
          uVar11 = param_5 + 9;
          if (in_stack_00000038 <= param_5 + 9) {
            uVar11 = in_stack_00000038;
          }
          if (uVar21 < uVar11) {
            uVar14 = *(uint *)(in_stack_00000080 + 0x40);
            uVar18 = *(uint *)(in_stack_00000080 + 0x44);
            uVar3 = *(uint *)(in_stack_00000080 + 0x48);
            do {
              in_x17 = in_x17 + 2;
              uVar4 = (uint)(*(int *)(param_6 + (uVar21 & param_7)) * 0x1e35a7bd) >>
                      ((ulong)uVar14 & 0x3f);
              uVar13 = *(ushort *)(in_stack_00000108 + (ulong)uVar4 * 2);
              *(int *)(in_stack_000000e0 +
                      ((ulong)(uVar4 << (ulong)(uVar3 & 0x1f)) + ((ulong)uVar18 & (ulong)uVar13)) *
                      4) = (int)uVar21;
              uVar21 = uVar21 + 2;
              *(ushort *)(in_stack_00000108 + (ulong)uVar4 * 2) = uVar13 + 1;
            } while (uVar21 < uVar11);
          }
        }
      }
    }
    else {
      uVar14 = 0;
      uVar18 = *(uint *)(in_stack_00000080 + 0x48);
      iVar39 = *(int *)(in_stack_00000080 + 0x4c);
      uVar3 = *(uint *)(in_stack_00000080 + 0x40);
      uVar4 = *(uint *)(in_stack_00000080 + 0x44);
      uStack0000000000000100 = in_x17;
LAB_03d7e864:
      param_4 = param_4 - 1;
      uVar21 = uVar12 - 1;
      if (param_4 <= uVar12 - 1) {
        uVar21 = param_4;
      }
      param_9 = param_5 + 1;
      uStack00000000000000b8 = param_9 + in_stack_000000c8;
      if (4 < *(int *)(in_stack_00000118 + 4)) {
        uVar21 = 0;
      }
      uVar11 = in_stack_000000d8;
      if (param_9 < in_stack_000000d8) {
        uVar11 = param_5 + 1;
      }
      uVar27 = param_9 & param_7;
      uVar19 = uStack00000000000000b8;
      if (in_stack_000000d8 <= uStack00000000000000b8) {
        uVar19 = in_stack_000000d8;
      }
      uVar32 = 0;
      uVar9 = 0;
      if (iVar39 == 0) {
        uVar22 = 0x7e4;
        uVar26 = 0x7e4;
      }
      else {
        pcVar1 = (char *)(param_6 + uVar27);
        uVar25 = 0;
        uVar28 = param_4 & 7;
        uVar22 = 0x7e4;
        uVar26 = 0x7e4;
        do {
          uVar37 = (ulong)param_10[uVar25];
          if (((uVar37 <= uVar11) && (param_9 - uVar37 < param_9)) && (uVar21 + uVar27 <= param_7))
          {
            uVar16 = param_9 - uVar37 & param_7;
            uVar17 = uVar16 + uVar21;
            if ((uVar17 <= param_7) &&
               (*(char *)(param_6 + uVar21 + uVar27) == *(char *)(param_6 + uVar17))) {
              lVar20 = param_6 + uVar16;
              uVar17 = 0;
              pcVar30 = pcVar1;
              uVar16 = uVar17;
              for (uVar7 = param_4 >> 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                uVar16 = *(ulong *)(lVar20 + uVar17);
                if (*(ulong *)(pcVar1 + uVar17) != uVar16) {
                  uVar16 = uVar16 ^ *(ulong *)(pcVar1 + uVar17);
                  uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
                  uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
                  uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                  uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10
                  ;
                  uVar17 = uVar17 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3);
                  goto LAB_03d7e96c;
                }
                uVar17 = uVar17 + 8;
                pcVar30 = pcVar1 + (param_4 & 0xfffffffffffffff8);
                uVar16 = param_4 & 0xfffffffffffffff8;
              }
              uVar17 = uVar16;
              if (uVar28 != 0) {
                uVar34 = uVar16 | uVar28;
                uVar7 = uVar28;
                do {
                  uVar17 = uVar16;
                  if (*(char *)(lVar20 + uVar16) != *pcVar30) break;
                  pcVar30 = pcVar30 + 1;
                  uVar7 = uVar7 - 1;
                  uVar16 = uVar16 + 1;
                  uVar17 = uVar34;
                } while (uVar7 != 0);
              }
LAB_03d7e96c:
              if (((2 < uVar17) || ((uVar25 < 2 && (uVar17 == 2)))) &&
                 (uVar16 = uVar17 * 0x87 + 0x78f, uVar26 < uVar16)) {
                if (uVar25 != 0) {
                  uVar16 = uVar16 - ((0x1ca10U >> (ulong)((uint)uVar25 & 0xe) & 0xe) + 0x27);
                }
                if (uVar26 < uVar16) {
                  uVar22 = uVar16;
                  uVar32 = uVar37;
                  uVar26 = uVar16;
                  uVar9 = uVar17;
                  uVar21 = uVar17;
                }
              }
            }
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 < (ulong)(long)iVar39);
      }
      piVar2 = (int *)(param_6 + uVar27);
      iVar24 = *piVar2;
      uVar6 = (uint)(iVar24 * 0x1e35a7bd) >> ((ulong)uVar3 & 0x3f);
      uVar13 = *(ushort *)(in_stack_00000108 + (ulong)uVar6 * 2);
      uVar28 = (ulong)uVar13;
      uVar25 = 0;
      if (uVar35 <= uVar28) {
        uVar25 = uVar28 - uVar35;
      }
      lVar20 = in_stack_000000e0 + (ulong)(uVar6 << (ulong)(uVar18 & 0x1f)) * 4;
      if (uVar25 < uVar28) {
        uVar17 = param_4 & 7;
        uVar37 = uVar28;
        do {
          uVar37 = uVar37 - 1;
          uVar7 = (ulong)*(uint *)(lVar20 + (uVar37 & uVar4) * 4);
          uVar16 = param_9 - uVar7;
          if (uVar11 < uVar16) break;
          if (uVar21 + uVar27 <= param_7) {
            uVar7 = uVar7 & param_7;
            uVar34 = uVar7 + uVar21;
            if ((uVar34 <= param_7) &&
               (*(char *)(param_6 + uVar21 + uVar27) == *(char *)(param_6 + uVar34))) {
              lVar33 = param_6 + uVar7;
              uVar7 = 0;
              piVar10 = piVar2;
              uVar34 = uVar7;
              for (uVar23 = param_4 >> 3; uVar23 != 0; uVar23 = uVar23 - 1) {
                uVar34 = *(ulong *)(lVar33 + uVar7);
                if (*(ulong *)((long)piVar2 + uVar7) != uVar34) {
                  uVar34 = uVar34 ^ *(ulong *)((long)piVar2 + uVar7);
                  uVar34 = (uVar34 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar34 & 0x5555555555555555) << 1;
                  uVar34 = (uVar34 & 0xcccccccccccccccc) >> 2 | (uVar34 & 0x3333333333333333) << 2;
                  uVar34 = (uVar34 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar34 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar34 = (uVar34 & 0xff00ff00ff00ff00) >> 8 | (uVar34 & 0xff00ff00ff00ff) << 8;
                  uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10
                  ;
                  uVar7 = uVar7 + ((ulong)LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20) >> 3);
                  goto LAB_03d7eb14;
                }
                uVar7 = uVar7 + 8;
                piVar10 = (int *)((long)piVar2 + (param_4 & 0xfffffffffffffff8));
                uVar34 = param_4 & 0xfffffffffffffff8;
              }
              uVar7 = uVar34;
              if (uVar17 != 0) {
                uVar8 = uVar34 | uVar17;
                uVar23 = uVar17;
                do {
                  uVar7 = uVar34;
                  if (*(char *)(lVar33 + uVar34) != (char)*piVar10) break;
                  piVar10 = (int *)((long)piVar10 + 1);
                  uVar34 = uVar34 + 1;
                  uVar23 = uVar23 - 1;
                  uVar7 = uVar8;
                } while (uVar23 != 0);
              }
LAB_03d7eb14:
              if ((3 < uVar7) &&
                 (uVar34 = (uVar7 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar16) ^ 0x1f) * 0x1e)) +
                           0x780, uVar26 < uVar34)) {
                uVar22 = uVar34;
                uVar32 = uVar16;
                uVar26 = uVar34;
                uVar9 = uVar7;
                uVar21 = uVar7;
              }
            }
          }
        } while (uVar25 < uVar37);
      }
      *(int *)(lVar20 + (uVar4 & uVar28) * 4) = (int)param_9;
      *(ushort *)(in_stack_00000108 + (ulong)uVar6 * 2) = uVar13 + 1;
      if (uVar26 == 0x7e4) {
        iVar31 = 0;
        lVar20 = *(long *)(in_stack_00000080 + 0x50);
        uVar21 = *(ulong *)(lVar20 + 8);
        uVar11 = *(ulong *)(lVar20 + 0x10);
        if (uVar21 >> 7 <= uVar11) {
          uVar27 = (ulong)((uint)(iVar24 * 0x1e35a7bd) >> 0x11 & 0x7ffe);
          lVar29 = *(long *)(in_stack_00000118 + 0x78);
          lVar33 = 0;
          uStack00000000000000d0 = 0x7e4;
          do {
            uVar21 = uVar21 + 1;
            *(ulong *)(lVar20 + 8) = uVar21;
            bVar5 = *(byte *)(lVar29 + uVar27);
            uVar26 = (ulong)bVar5;
            if ((uVar26 != 0) && (uVar26 <= param_4)) {
              lVar36 = *(long *)(in_stack_00000118 + 0x58);
              uVar25 = (ulong)*(ushort *)(*(long *)(in_stack_00000118 + 0x70) + uVar27 * 2);
              pcVar1 = (char *)(*(long *)(lVar36 + 0xa8) +
                               (ulong)*(uint *)(lVar36 + uVar26 * 4 + 0x20) + uVar25 * uVar26);
              if ((ulong)(bVar5 >> 3) == 0) {
                uVar28 = 0;
                pcVar30 = pcVar1;
              }
              else {
                uVar28 = uVar26 & 0xf8;
                lVar38 = 0;
                pcVar30 = pcVar1 + uVar28;
                do {
                  if (*(ulong *)(pcVar1 + lVar38) != *(ulong *)((long)piVar2 + lVar38)) {
                    uVar28 = *(ulong *)((long)piVar2 + lVar38) ^ *(ulong *)(pcVar1 + lVar38);
                    uVar28 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1
                    ;
                    uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2
                    ;
                    uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
                    uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar28 & 0xffff0000ffff) << 0x10;
                    uVar37 = lVar38 + ((ulong)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) >> 3);
                    goto LAB_03d7ecd8;
                  }
                  lVar38 = lVar38 + 8;
                } while ((ulong)(bVar5 >> 3) * 8 - lVar38 != 0);
              }
              uVar17 = uVar26 & 7;
              uVar37 = uVar28;
              if ((bVar5 & 7) != 0) {
                uVar16 = uVar28 | uVar17;
                do {
                  uVar37 = uVar28;
                  if (*(char *)((long)piVar2 + uVar28) != *pcVar30) break;
                  pcVar30 = pcVar30 + 1;
                  uVar17 = uVar17 - 1;
                  uVar28 = uVar28 + 1;
                  uVar37 = uVar16;
                } while (uVar17 != 0);
              }
LAB_03d7ecd8:
              if ((((uVar37 != 0) && (uVar26 < uVar37 + *(uint *)(in_stack_00000118 + 100))) &&
                  (uVar26 = uVar19 + 1 + uVar25 +
                            ((*(ulong *)(in_stack_00000118 + 0x68) >>
                              (((uVar26 - uVar37) * 3 & 0x1f) << 1) & 0x3f) + (uVar26 - uVar37) * 4
                            << ((ulong)*(byte *)(lVar36 + uVar26) & 0x3f)), uVar26 <= in_x9)) &&
                 (uVar25 = (uVar37 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar26) ^ 0x1f) * 0x1e)) +
                           0x780, uStack00000000000000d0 <= uVar25)) {
                iVar31 = (uint)bVar5 - (int)uVar37;
                uVar11 = uVar11 + 1;
                *(ulong *)(lVar20 + 0x10) = uVar11;
                uVar22 = uVar25;
                uVar32 = uVar26;
                uVar9 = uVar37;
                uStack00000000000000d0 = uVar25;
              }
            }
            lVar33 = lVar33 + 1;
            uVar27 = uVar27 + 1;
          } while (lVar33 != 2);
        }
      }
      else {
        iVar31 = 0;
      }
      if (uStack0000000000000110 + 0xaf <= uVar22) {
        uStack0000000000000100 = uStack0000000000000100 + 1;
        if ((2 < uVar14) ||
           (uVar21 = param_5 + 5, uVar14 = uVar14 + 1, param_5 = param_9, uVar12 = uVar9,
           uVar15 = uVar32, iStack000000000000009c = iVar31, uStack0000000000000110 = uVar22,
           in_stack_000000b0 <= uVar21)) goto LAB_03d7eeb0;
        goto LAB_03d7e864;
      }
      uStack00000000000000b8 = param_5 + in_stack_000000c8;
      uVar32 = uVar15;
      uVar9 = uVar12;
      param_9 = param_5;
      iVar31 = iStack000000000000009c;
LAB_03d7eeb0:
      if (in_stack_000000d8 <= uStack00000000000000b8) {
        uStack00000000000000b8 = in_stack_000000d8;
      }
      if (uStack00000000000000b8 < uVar32) {
LAB_03d7eed8:
        uVar21 = uVar32 + 0xf;
LAB_03d7eedc:
        if ((uVar32 <= uStack00000000000000b8) && (uVar21 != 0)) {
          uVar40 = *(undefined8 *)param_10;
          iVar24 = (int)uVar32;
          *param_10 = iVar24;
          param_10[3] = param_10[2];
          *(undefined8 *)(param_10 + 1) = uVar40;
          iVar39 = *(int *)(in_stack_00000080 + 0x4c);
          if (4 < iVar39) {
            *(ulong *)(param_10 + 6) = CONCAT44(iVar24 + param_2._12_4_,iVar24 + param_2._8_4_);
            *(ulong *)(param_10 + 4) = CONCAT44(iVar24 + param_2._4_4_,iVar24 + param_2._0_4_);
            *(ulong *)(param_10 + 8) = CONCAT44(iVar24 + param_3._4_4_,iVar24 + param_3._0_4_);
            if (10 < iVar39) {
              iVar39 = (int)uVar40;
              *(ulong *)(param_10 + 0xc) = CONCAT44(iVar39 + param_2._12_4_,iVar39 + param_2._8_4_);
              *(ulong *)(param_10 + 10) = CONCAT44(iVar39 + param_2._4_4_,iVar39 + param_2._0_4_);
              *(ulong *)(param_10 + 0xe) = CONCAT44(iVar39 + param_3._4_4_,iVar39 + param_3._0_4_);
            }
          }
        }
      }
      else {
        if (uVar32 != (long)*param_10) {
          if (uVar32 == (long)param_10[1]) {
            uVar21 = 1;
          }
          else {
            uVar21 = (uVar32 + 3) - (long)*param_10;
            if (uVar21 < 7) {
              uVar18 = (uint)uVar21;
              uVar14 = 0x9750468;
            }
            else {
              uVar21 = (uVar32 + 3) - (long)param_10[1];
              if (6 < uVar21) {
                if (uVar32 == (long)param_10[2]) {
                  uVar21 = 2;
                }
                else {
                  if (uVar32 != (long)param_10[3]) goto LAB_03d7eed8;
                  uVar21 = 3;
                }
                goto LAB_03d7eedc;
              }
              uVar18 = (uint)uVar21;
              uVar14 = 0xfdb1ace;
            }
            uVar21 = (ulong)(uVar14 >> (ulong)((uVar18 & 7) << 2) & 0xf);
          }
          goto LAB_03d7eedc;
        }
        uVar21 = 0;
      }
      uVar14 = (uint)uStack0000000000000100;
      *in_stack_00000070 = uVar14;
      in_stack_00000070[1] = (uint)uVar9 | iVar31 << 0x19;
      uVar11 = (ulong)*(uint *)(in_stack_00000118 + 0x44) + 0x10;
      if (uVar21 < uVar11) {
        uVar18 = 0;
      }
      else {
        uVar15 = (ulong)*(uint *)(in_stack_00000118 + 0x40);
        uVar12 = ((uVar21 - *(uint *)(in_stack_00000118 + 0x44)) + (4L << (uVar15 & 0x3f))) - 0x10;
        uVar19 = (ulong)(((uint)LZCOUNT((uint)uVar12) ^ 0x1f) - 1);
        uVar27 = uVar12 >> (uVar19 & 0x3f);
        uVar21 = (ulong)(((uint)uVar12 &
                         (-1 << (ulong)(*(uint *)(in_stack_00000118 + 0x40) & 0x1f) ^ 0xffffffffU))
                         + (int)uVar11 +
                         (int)((uVar27 & 1 | (uVar19 - uVar15) * 2) - 2 << (uVar15 & 0x3f)) |
                        (int)(uVar19 - uVar15) << 10);
        uVar18 = (uint)(uVar12 - ((uVar27 & 1 | 2) << (uVar19 & 0x3f)) >> (uVar15 & 0x3f));
      }
      *(short *)((long)in_stack_00000070 + 0xe) = (short)uVar21;
      in_stack_00000070[2] = uVar18;
      if (5 < uStack0000000000000100) {
        if (uStack0000000000000100 < 0x82) {
          uVar14 = ((uint)LZCOUNT((int)(uStack0000000000000100 - 2)) ^ 0x1f) - 1;
          uVar14 = (int)(uStack0000000000000100 - 2 >> ((ulong)uVar14 & 0x3f)) + uVar14 * 2 + 2;
        }
        else if (uStack0000000000000100 < 0x842) {
          uVar14 = ((uint)LZCOUNT(uVar14 - 0x42) ^ 0x1f) + 10;
        }
        else if (uStack0000000000000100 >> 1 < 0xc21) {
          uVar14 = 0x15;
        }
        else {
          uVar14 = 0x16;
          if (0x5841 < uStack0000000000000100) {
            uVar14 = 0x17;
          }
        }
      }
      uVar18 = iVar31 + (uint)uVar9;
      if (uVar18 < 10) {
        uVar18 = uVar18 - 2;
      }
      else if (uVar18 < 0x86) {
        uVar3 = ((uint)LZCOUNT((int)((long)(int)uVar18 - 6U)) ^ 0x1f) - 1;
        uVar18 = (int)((long)(int)uVar18 - 6U >> ((ulong)uVar3 & 0x3f)) + uVar3 * 2 + 4;
      }
      else if (uVar18 < 0x846) {
        uVar18 = ((uint)LZCOUNT(uVar18 - 0x46) ^ 0x1f) + 0xc;
      }
      else {
        uVar18 = 0x17;
      }
      uVar13 = (ushort)uVar18 & 7 | (ushort)((uVar14 & 7) << 3);
      if ((((uVar21 & 0x3ff) == 0) && ((uVar14 & 0xffff) < 8)) && ((uVar18 & 0xffff) < 0x10)) {
        if (7 < (uVar18 & 0xffff)) {
          uVar13 = uVar13 | 0x40;
        }
      }
      else {
        uVar14 = (uVar14 >> 3 & 0x1fff) * 3 + ((uVar18 & 0xfff8) >> 3);
        uVar13 = (((ushort)(0x520d40 >> (ulong)((uVar14 & 0xf) << 1)) & 0xc0) + (short)uVar14 * 0x40
                 | uVar13) + 0x40;
      }
      *(ushort *)(in_stack_00000070 + 3) = uVar13;
      uVar21 = param_9 + uVar9;
      uVar11 = uVar21;
      if (in_stack_00000060 <= uVar21) {
        uVar11 = in_stack_00000060;
      }
      *in_stack_00000058 = *in_stack_00000058 + uStack0000000000000100;
      uVar12 = param_9 + 2;
      if (uVar32 < uVar9 >> 2) {
        uVar19 = uVar21 + uVar32 * -4;
        uVar15 = uVar12;
        if (uVar12 <= uVar19) {
          uVar15 = uVar19;
        }
        uVar12 = uVar11;
        if (uVar15 <= uVar11) {
          uVar12 = uVar15;
        }
      }
      in_stack_00000070 = in_stack_00000070 + 4;
      param_9 = in_stack_00000068 + uVar9 * 2 + param_9;
      if (uVar12 < uVar11) {
        uVar14 = *(uint *)(in_stack_00000080 + 0x40);
        uVar18 = *(uint *)(in_stack_00000080 + 0x44);
        uVar3 = *(uint *)(in_stack_00000080 + 0x48);
        do {
          uVar4 = (uint)(*(int *)(param_6 + (uVar12 & param_7)) * 0x1e35a7bd) >>
                  ((ulong)uVar14 & 0x3f);
          uVar13 = *(ushort *)(in_stack_00000108 + (ulong)uVar4 * 2);
          *(int *)(in_stack_000000e0 +
                  ((ulong)(uVar4 << (ulong)(uVar3 & 0x1f)) + ((ulong)uVar18 & (ulong)uVar13)) * 4) =
               (int)uVar12;
          uVar12 = uVar12 + 1;
          *(ushort *)(in_stack_00000108 + (ulong)uVar4 * 2) = uVar13 + 1;
        } while (uVar11 != uVar12);
      }
      in_x17 = 0;
    }
    param_5 = uVar21;
    unaff_w27 = 0x1e35a7bd;
    param_4 = in_stack_000000b0 - param_5;
    if (in_stack_000000b0 <= param_5 + 4) {
      *in_stack_00000020 = param_4 + in_x17;
      *in_stack_00000018 = *in_stack_00000018 + ((long)in_stack_00000070 - in_stack_00000030 >> 4);
      return;
    }
    in_x14 = param_5 & param_7;
    in_x13 = (ulong)*(int *)(in_stack_00000080 + 0x4c);
    in_x9 = *(ulong *)(in_stack_00000118 + 0x50);
    param_1 = in_stack_000000c8;
    in_x10 = in_stack_000000d8;
    unaff_x28 = in_stack_00000108;
    unaff_x29 = in_stack_000000e0;
  } while( true );
}


