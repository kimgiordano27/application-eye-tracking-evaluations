/*
FUNCTION_NAME: OldPvAIGameModeScript.<stopUpdatingCyanRacquetPosTimer>d__113$$MoveNext
ENTRY_POINT: 03d7e1f4
PROGRAM: padelvrtraining-libil2cpp.so
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

void OldPvAIGameModeScript_<stopUpdatingCyanRacquetPosTimer>d__113__MoveNext
               (ulong param_1,ulong param_2,long param_3,ulong param_4,long param_5,long param_6,
               int *param_7,ulong *param_8)

{
  ulong uVar1;
  char *pcVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  ulong uVar19;
  ulong uVar20;
  ushort uVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  int iVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  long lVar42;
  ulong uVar43;
  char *pcVar44;
  ulong uVar45;
  long lVar46;
  ulong uVar47;
  long lVar48;
  ulong uVar49;
  long lVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  undefined8 uVar59;
  uint *puStack0000000000000070;
  int iStack000000000000009c;
  ulong uStack00000000000000b8;
  ulong uStack00000000000000d0;
  ulong uStack0000000000000100;
  ulong uStack0000000000000110;
  uint *in_stack_00000180;
  long *in_stack_00000188;
  long *in_stack_00000190;
  
  uStack0000000000000100 = *param_8;
  iVar58 = *(int *)(param_6 + 0x4c);
  lVar23 = *(long *)(param_5 + 0x10);
  uVar1 = param_2 + param_1;
  uVar38 = uVar1 - 3;
  uVar22 = *(uint *)(param_5 + 8);
  uVar4 = uVar38;
  if (param_1 < 4) {
    uVar4 = param_2;
  }
  lVar5 = 0x40;
  if (8 < *(int *)(param_5 + 4)) {
    lVar5 = 0x200;
  }
  if (4 < iVar58) {
    iVar35 = *param_7;
    iVar51 = (int)_DAT_01917bf0;
    iVar52 = (int)((ulong)_DAT_01917bf0 >> 0x20);
    iVar53 = (int)_UNK_01917bf8;
    iVar54 = (int)((ulong)_UNK_01917bf8 >> 0x20);
    iVar55 = (int)DAT_019115b8;
    iVar56 = (int)((ulong)DAT_019115b8 >> 0x20);
    *(ulong *)(param_7 + 6) = CONCAT44(iVar35 + iVar54,iVar35 + iVar53);
    *(ulong *)(param_7 + 4) = CONCAT44(iVar35 + iVar52,iVar35 + iVar51);
    *(ulong *)(param_7 + 8) = CONCAT44(iVar35 + iVar56,iVar35 + iVar55);
    if (10 < iVar58) {
      iVar58 = param_7[1];
      *(ulong *)(param_7 + 0xc) = CONCAT44(iVar58 + iVar54,iVar58 + iVar53);
      *(ulong *)(param_7 + 10) = CONCAT44(iVar58 + iVar52,iVar58 + iVar51);
      *(ulong *)(param_7 + 0xe) = CONCAT44(iVar58 + iVar56,iVar58 + iVar55);
    }
  }
  uVar14 = _UNK_01917bf8;
  uVar13 = _DAT_01917bf0;
  uVar12 = DAT_019115b8;
  if (param_2 + 4 < uVar1) {
    uVar24 = (1L << ((ulong)uVar22 & 0x3f)) - 0x10;
    lVar8 = *(long *)(param_6 + 0x58);
    lVar9 = *(long *)(param_6 + 0x60);
    uVar19 = lVar5 + param_2;
    puStack0000000000000070 = in_stack_00000180;
    do {
      uVar39 = param_2 & param_4;
      uVar28 = *(ulong *)(param_5 + 0x50);
      uVar31 = param_2;
      if (uVar24 <= param_2) {
        uVar31 = uVar24;
      }
      uVar34 = param_2 + lVar23;
      if (uVar24 <= param_2 + lVar23) {
        uVar34 = uVar24;
      }
      uVar40 = param_1 >> 3;
      uVar25 = 0;
      uVar20 = 0;
      uVar29 = 0;
      if (*(int *)(param_6 + 0x4c) == 0) {
        uStack0000000000000110 = 0x7e4;
        uVar45 = 0x7e4;
      }
      else {
        pcVar2 = (char *)(param_3 + uVar39);
        uVar17 = 0;
        uVar47 = param_1 & 7;
        uVar45 = 0x7e4;
        uStack0000000000000110 = 0x7e4;
        do {
          uVar32 = (ulong)param_7[uVar17];
          if (((uVar32 <= uVar31) && (param_2 - uVar32 < param_2)) && (uVar29 + uVar39 <= param_4))
          {
            uVar36 = param_2 - uVar32 & param_4;
            uVar37 = uVar36 + uVar29;
            if ((uVar37 <= param_4) &&
               (*(char *)(param_3 + uVar29 + uVar39) == *(char *)(param_3 + uVar37))) {
              lVar30 = param_3 + uVar36;
              uVar37 = 0;
              pcVar44 = pcVar2;
              uVar36 = uVar37;
              for (uVar41 = uVar40; uVar41 != 0; uVar41 = uVar41 - 1) {
                uVar36 = *(ulong *)(lVar30 + uVar37);
                if (*(ulong *)(pcVar2 + uVar37) != uVar36) {
                  uVar36 = uVar36 ^ *(ulong *)(pcVar2 + uVar37);
                  uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
                  uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
                  uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
                  uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10
                  ;
                  uVar37 = uVar37 + ((ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3);
                  goto LAB_03d7e400;
                }
                uVar37 = uVar37 + 8;
                pcVar44 = pcVar2 + (param_1 & 0xfffffffffffffff8);
                uVar36 = param_1 & 0xfffffffffffffff8;
              }
              uVar37 = uVar36;
              if (uVar47 != 0) {
                uVar49 = uVar36 | uVar47;
                uVar41 = uVar47;
                do {
                  uVar37 = uVar36;
                  if (*(char *)(lVar30 + uVar36) != *pcVar44) break;
                  pcVar44 = pcVar44 + 1;
                  uVar41 = uVar41 - 1;
                  uVar36 = uVar36 + 1;
                  uVar37 = uVar49;
                } while (uVar41 != 0);
              }
LAB_03d7e400:
              if (((2 < uVar37) || ((uVar17 < 2 && (uVar37 == 2)))) &&
                 (uVar36 = uVar37 * 0x87 + 0x78f, uVar45 < uVar36)) {
                if (uVar17 != 0) {
                  uVar36 = uVar36 - ((0x1ca10U >> (ulong)((uint)uVar17 & 0xe) & 0xe) + 0x27);
                }
                if (uVar45 < uVar36) {
                  uVar20 = uVar37;
                  uVar25 = uVar32;
                  uVar29 = uVar37;
                  uVar45 = uVar36;
                  uStack0000000000000110 = uVar36;
                }
              }
            }
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < (ulong)(long)*(int *)(param_6 + 0x4c));
      }
      piVar3 = (int *)(param_3 + uVar39);
      iVar58 = *piVar3;
      uVar22 = (uint)(iVar58 * 0x1e35a7bd) >> ((ulong)*(uint *)(param_6 + 0x40) & 0x3f);
      uVar21 = *(ushort *)(lVar8 + (ulong)uVar22 * 2);
      uVar32 = (ulong)uVar21;
      uVar47 = *(ulong *)(param_6 + 0x38);
      lVar30 = lVar9 + (ulong)(uVar22 << (ulong)(*(uint *)(param_6 + 0x48) & 0x1f)) * 4;
      uVar17 = 0;
      if (uVar47 <= uVar32) {
        uVar17 = uVar32 - uVar47;
      }
      if (uVar17 < uVar32) {
        uVar36 = param_1 & 7;
        uVar37 = uVar32;
        do {
          uVar37 = uVar37 - 1;
          uVar41 = (ulong)*(uint *)(lVar30 + (uVar37 & *(uint *)(param_6 + 0x44)) * 4);
          uVar49 = param_2 - uVar41;
          if (uVar31 < uVar49) break;
          if (uVar29 + uVar39 <= param_4) {
            uVar41 = uVar41 & param_4;
            uVar26 = uVar41 + uVar29;
            if ((uVar26 <= param_4) &&
               (*(char *)(param_3 + uVar29 + uVar39) == *(char *)(param_3 + uVar26))) {
              lVar46 = param_3 + uVar41;
              if (uVar40 == 0) {
                piVar18 = piVar3;
                uVar41 = 0;
              }
              else {
                lVar42 = 0;
                uVar26 = uVar40;
                do {
                  uVar41 = *(ulong *)(lVar46 + lVar42);
                  if (*(ulong *)((long)piVar3 + lVar42) != uVar41) {
                    uVar41 = uVar41 ^ *(ulong *)((long)piVar3 + lVar42);
                    uVar41 = (uVar41 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar41 & 0x5555555555555555) << 1
                    ;
                    uVar41 = (uVar41 & 0xcccccccccccccccc) >> 2 | (uVar41 & 0x3333333333333333) << 2
                    ;
                    uVar41 = (uVar41 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar41 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar41 = (uVar41 & 0xff00ff00ff00ff00) >> 8 | (uVar41 & 0xff00ff00ff00ff) << 8;
                    uVar41 = (uVar41 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar41 & 0xffff0000ffff) << 0x10;
                    uVar26 = lVar42 + ((ulong)LZCOUNT(uVar41 >> 0x20 | uVar41 << 0x20) >> 3);
                    goto LAB_03d7e5a8;
                  }
                  uVar26 = uVar26 - 1;
                  lVar42 = lVar42 + 8;
                  piVar18 = (int *)((long)piVar3 + (param_1 & 0xfffffffffffffff8));
                  uVar41 = param_1 & 0xfffffffffffffff8;
                } while (uVar26 != 0);
              }
              uVar26 = uVar41;
              if (uVar36 != 0) {
                uVar15 = uVar41 | uVar36;
                uVar43 = uVar36;
                do {
                  uVar26 = uVar41;
                  if (*(char *)(lVar46 + uVar41) != (char)*piVar18) break;
                  piVar18 = (int *)((long)piVar18 + 1);
                  uVar43 = uVar43 - 1;
                  uVar41 = uVar41 + 1;
                  uVar26 = uVar15;
                } while (uVar43 != 0);
              }
LAB_03d7e5a8:
              if ((3 < uVar26) &&
                 (uVar41 = (uVar26 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar49) ^ 0x1f) * 0x1e)) +
                           0x780, uVar45 < uVar41)) {
                uVar20 = uVar26;
                uVar25 = uVar49;
                uVar29 = uVar26;
                uVar45 = uVar41;
                uStack0000000000000110 = uVar41;
              }
            }
          }
        } while (uVar17 < uVar37);
      }
      *(int *)(lVar30 + (*(uint *)(param_6 + 0x44) & uVar32) * 4) = (int)param_2;
      *(ushort *)(lVar8 + (ulong)uVar22 * 2) = uVar21 + 1;
      if (uVar45 == 0x7e4) {
        lVar30 = *(long *)(param_6 + 0x50);
        iStack000000000000009c = 0;
        uVar31 = *(ulong *)(lVar30 + 8);
        uVar39 = *(ulong *)(lVar30 + 0x10);
        if (uVar31 >> 7 <= uVar39) {
          lVar42 = *(long *)(param_5 + 0x78);
          lVar46 = 0;
          uVar29 = (ulong)((uint)(iVar58 * 0x1e35a7bd) >> 0x11 & 0x7ffe);
          uVar40 = 0x7e4;
          do {
            uVar31 = uVar31 + 1;
            *(ulong *)(lVar30 + 8) = uVar31;
            bVar10 = *(byte *)(lVar42 + uVar29);
            uVar45 = (ulong)bVar10;
            if ((uVar45 != 0) && (uVar45 <= param_1)) {
              lVar48 = *(long *)(param_5 + 0x58);
              uVar17 = (ulong)*(ushort *)(*(long *)(param_5 + 0x70) + uVar29 * 2);
              pcVar2 = (char *)(*(long *)(lVar48 + 0xa8) +
                               (ulong)*(uint *)(lVar48 + uVar45 * 4 + 0x20) + uVar17 * uVar45);
              if ((ulong)(bVar10 >> 3) == 0) {
                uVar32 = 0;
                pcVar44 = pcVar2;
              }
              else {
                uVar32 = uVar45 & 0xf8;
                lVar50 = 0;
                pcVar44 = pcVar2 + uVar32;
                do {
                  if (*(ulong *)(pcVar2 + lVar50) != *(ulong *)((long)piVar3 + lVar50)) {
                    uVar32 = *(ulong *)((long)piVar3 + lVar50) ^ *(ulong *)(pcVar2 + lVar50);
                    uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1
                    ;
                    uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2
                    ;
                    uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                    uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar32 & 0xffff0000ffff) << 0x10;
                    uVar37 = lVar50 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
                    goto LAB_03d7e728;
                  }
                  lVar50 = lVar50 + 8;
                } while ((ulong)(bVar10 >> 3) * 8 - lVar50 != 0);
              }
              uVar36 = uVar45 & 7;
              uVar37 = uVar32;
              if ((bVar10 & 7) != 0) {
                uVar41 = uVar32 | uVar36;
                do {
                  uVar37 = uVar32;
                  if (*(char *)((long)piVar3 + uVar32) != *pcVar44) break;
                  pcVar44 = pcVar44 + 1;
                  uVar36 = uVar36 - 1;
                  uVar32 = uVar32 + 1;
                  uVar37 = uVar41;
                } while (uVar36 != 0);
              }
LAB_03d7e728:
              if ((((uVar37 != 0) && (uVar45 < uVar37 + *(uint *)(param_5 + 100))) &&
                  (uVar45 = uVar34 + 1 + uVar17 +
                            ((*(ulong *)(param_5 + 0x68) >> (((uVar45 - uVar37) * 3 & 0x1f) << 1) &
                             0x3f) + (uVar45 - uVar37) * 4 <<
                            ((ulong)*(byte *)(lVar48 + uVar45) & 0x3f)), uVar45 <= uVar28)) &&
                 (uVar17 = (uVar37 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar45) ^ 0x1f) * 0x1e)) +
                           0x780, uVar40 <= uVar17)) {
                iStack000000000000009c = (uint)bVar10 - (int)uVar37;
                uVar39 = uVar39 + 1;
                *(ulong *)(lVar30 + 0x10) = uVar39;
                uVar20 = uVar37;
                uVar40 = uVar17;
                uVar25 = uVar45;
                uStack0000000000000110 = uVar17;
              }
            }
            lVar46 = lVar46 + 1;
            uVar29 = uVar29 + 1;
          } while (lVar46 != 2);
        }
      }
      else {
        iStack000000000000009c = 0;
      }
      if (uStack0000000000000110 < 0x7e5) {
        uVar31 = param_2 + 1;
        uStack0000000000000100 = uStack0000000000000100 + 1;
        if (uVar19 < uVar31) {
          if (uVar19 + lVar5 * 4 < uVar31) {
            uVar28 = param_2 + 0x11;
            if (uVar1 - 4 <= param_2 + 0x11) {
              uVar28 = uVar1 - 4;
            }
            if (uVar31 < uVar28) {
              uVar22 = *(uint *)(param_6 + 0x40);
              uVar27 = *(uint *)(param_6 + 0x44);
              uVar6 = *(uint *)(param_6 + 0x48);
              do {
                uStack0000000000000100 = uStack0000000000000100 + 4;
                uVar7 = (uint)(*(int *)(param_3 + (uVar31 & param_4)) * 0x1e35a7bd) >>
                        ((ulong)uVar22 & 0x3f);
                uVar21 = *(ushort *)(lVar8 + (ulong)uVar7 * 2);
                *(int *)(lVar9 + ((ulong)(uVar7 << (ulong)(uVar6 & 0x1f)) +
                                 ((ulong)uVar27 & (ulong)uVar21)) * 4) = (int)uVar31;
                uVar31 = uVar31 + 4;
                *(ushort *)(lVar8 + (ulong)uVar7 * 2) = uVar21 + 1;
              } while (uVar31 < uVar28);
            }
          }
          else {
            uVar28 = param_2 + 9;
            if (uVar38 <= param_2 + 9) {
              uVar28 = uVar38;
            }
            if (uVar31 < uVar28) {
              uVar22 = *(uint *)(param_6 + 0x40);
              uVar27 = *(uint *)(param_6 + 0x44);
              uVar6 = *(uint *)(param_6 + 0x48);
              do {
                uStack0000000000000100 = uStack0000000000000100 + 2;
                uVar7 = (uint)(*(int *)(param_3 + (uVar31 & param_4)) * 0x1e35a7bd) >>
                        ((ulong)uVar22 & 0x3f);
                uVar21 = *(ushort *)(lVar8 + (ulong)uVar7 * 2);
                *(int *)(lVar9 + ((ulong)(uVar7 << (ulong)(uVar6 & 0x1f)) +
                                 ((ulong)uVar27 & (ulong)uVar21)) * 4) = (int)uVar31;
                uVar31 = uVar31 + 2;
                *(ushort *)(lVar8 + (ulong)uVar7 * 2) = uVar21 + 1;
              } while (uVar31 < uVar28);
            }
          }
        }
      }
      else {
        uVar22 = 0;
        uVar27 = *(uint *)(param_6 + 0x48);
        iVar58 = *(int *)(param_6 + 0x4c);
        uVar6 = *(uint *)(param_6 + 0x40);
        uVar7 = *(uint *)(param_6 + 0x44);
LAB_03d7e864:
        param_1 = param_1 - 1;
        uVar31 = uVar20 - 1;
        if (param_1 <= uVar20 - 1) {
          uVar31 = param_1;
        }
        uVar19 = param_2 + 1;
        uStack00000000000000b8 = uVar19 + lVar23;
        if (4 < *(int *)(param_5 + 4)) {
          uVar31 = 0;
        }
        uVar39 = uVar24;
        if (uVar19 < uVar24) {
          uVar39 = param_2 + 1;
        }
        uVar29 = uVar19 & param_4;
        uVar34 = uStack00000000000000b8;
        if (uVar24 <= uStack00000000000000b8) {
          uVar34 = uVar24;
        }
        uVar40 = 0;
        uVar45 = 0;
        if (iVar58 == 0) {
          uVar17 = 0x7e4;
          uVar32 = 0x7e4;
        }
        else {
          pcVar2 = (char *)(param_3 + uVar29);
          uVar37 = 0;
          uVar36 = param_1 & 7;
          uVar17 = 0x7e4;
          uVar32 = 0x7e4;
          do {
            uVar41 = (ulong)param_7[uVar37];
            if (((uVar41 <= uVar39) && (uVar19 - uVar41 < uVar19)) && (uVar31 + uVar29 <= param_4))
            {
              uVar26 = uVar19 - uVar41 & param_4;
              uVar49 = uVar26 + uVar31;
              if ((uVar49 <= param_4) &&
                 (*(char *)(param_3 + uVar31 + uVar29) == *(char *)(param_3 + uVar49))) {
                lVar30 = param_3 + uVar26;
                uVar49 = 0;
                pcVar44 = pcVar2;
                uVar26 = uVar49;
                for (uVar43 = param_1 >> 3; uVar43 != 0; uVar43 = uVar43 - 1) {
                  uVar26 = *(ulong *)(lVar30 + uVar49);
                  if (*(ulong *)(pcVar2 + uVar49) != uVar26) {
                    uVar26 = uVar26 ^ *(ulong *)(pcVar2 + uVar49);
                    uVar26 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1
                    ;
                    uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2
                    ;
                    uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
                    uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar26 & 0xffff0000ffff) << 0x10;
                    uVar49 = uVar49 + ((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 3);
                    goto LAB_03d7e96c;
                  }
                  uVar49 = uVar49 + 8;
                  pcVar44 = pcVar2 + (param_1 & 0xfffffffffffffff8);
                  uVar26 = param_1 & 0xfffffffffffffff8;
                }
                uVar49 = uVar26;
                if (uVar36 != 0) {
                  uVar15 = uVar26 | uVar36;
                  uVar43 = uVar36;
                  do {
                    uVar49 = uVar26;
                    if (*(char *)(lVar30 + uVar26) != *pcVar44) break;
                    pcVar44 = pcVar44 + 1;
                    uVar43 = uVar43 - 1;
                    uVar26 = uVar26 + 1;
                    uVar49 = uVar15;
                  } while (uVar43 != 0);
                }
LAB_03d7e96c:
                if (((2 < uVar49) || ((uVar37 < 2 && (uVar49 == 2)))) &&
                   (uVar26 = uVar49 * 0x87 + 0x78f, uVar32 < uVar26)) {
                  if (uVar37 != 0) {
                    uVar26 = uVar26 - ((0x1ca10U >> (ulong)((uint)uVar37 & 0xe) & 0xe) + 0x27);
                  }
                  if (uVar32 < uVar26) {
                    uVar17 = uVar26;
                    uVar40 = uVar41;
                    uVar32 = uVar26;
                    uVar45 = uVar49;
                    uVar31 = uVar49;
                  }
                }
              }
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 < (ulong)(long)iVar58);
        }
        piVar3 = (int *)(param_3 + uVar29);
        iVar35 = *piVar3;
        uVar11 = (uint)(iVar35 * 0x1e35a7bd) >> ((ulong)uVar6 & 0x3f);
        uVar21 = *(ushort *)(lVar8 + (ulong)uVar11 * 2);
        uVar36 = (ulong)uVar21;
        uVar37 = 0;
        if (uVar47 <= uVar36) {
          uVar37 = uVar36 - uVar47;
        }
        lVar30 = lVar9 + (ulong)(uVar11 << (ulong)(uVar27 & 0x1f)) * 4;
        if (uVar37 < uVar36) {
          uVar49 = param_1 & 7;
          uVar41 = uVar36;
          do {
            uVar41 = uVar41 - 1;
            uVar43 = (ulong)*(uint *)(lVar30 + (uVar41 & uVar7) * 4);
            uVar26 = uVar19 - uVar43;
            if (uVar39 < uVar26) break;
            if (uVar31 + uVar29 <= param_4) {
              uVar43 = uVar43 & param_4;
              uVar15 = uVar43 + uVar31;
              if ((uVar15 <= param_4) &&
                 (*(char *)(param_3 + uVar31 + uVar29) == *(char *)(param_3 + uVar15))) {
                lVar46 = param_3 + uVar43;
                uVar43 = 0;
                piVar18 = piVar3;
                uVar15 = uVar43;
                for (uVar33 = param_1 >> 3; uVar33 != 0; uVar33 = uVar33 - 1) {
                  uVar15 = *(ulong *)(lVar46 + uVar43);
                  if (*(ulong *)((long)piVar3 + uVar43) != uVar15) {
                    uVar15 = uVar15 ^ *(ulong *)((long)piVar3 + uVar43);
                    uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1
                    ;
                    uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2
                    ;
                    uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar15 & 0xffff0000ffff) << 0x10;
                    uVar43 = uVar43 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3);
                    goto LAB_03d7eb14;
                  }
                  uVar43 = uVar43 + 8;
                  piVar18 = (int *)((long)piVar3 + (param_1 & 0xfffffffffffffff8));
                  uVar15 = param_1 & 0xfffffffffffffff8;
                }
                uVar43 = uVar15;
                if (uVar49 != 0) {
                  uVar16 = uVar15 | uVar49;
                  uVar33 = uVar49;
                  do {
                    uVar43 = uVar15;
                    if (*(char *)(lVar46 + uVar15) != (char)*piVar18) break;
                    piVar18 = (int *)((long)piVar18 + 1);
                    uVar15 = uVar15 + 1;
                    uVar33 = uVar33 - 1;
                    uVar43 = uVar16;
                  } while (uVar33 != 0);
                }
LAB_03d7eb14:
                if ((3 < uVar43) &&
                   (uVar15 = (uVar43 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar26) ^ 0x1f) * 0x1e)) +
                             0x780, uVar32 < uVar15)) {
                  uVar17 = uVar15;
                  uVar40 = uVar26;
                  uVar32 = uVar15;
                  uVar45 = uVar43;
                  uVar31 = uVar43;
                }
              }
            }
          } while (uVar37 < uVar41);
        }
        *(int *)(lVar30 + (uVar7 & uVar36) * 4) = (int)uVar19;
        *(ushort *)(lVar8 + (ulong)uVar11 * 2) = uVar21 + 1;
        if (uVar32 == 0x7e4) {
          iVar51 = 0;
          lVar30 = *(long *)(param_6 + 0x50);
          uVar31 = *(ulong *)(lVar30 + 8);
          uVar39 = *(ulong *)(lVar30 + 0x10);
          if (uVar31 >> 7 <= uVar39) {
            uVar29 = (ulong)((uint)(iVar35 * 0x1e35a7bd) >> 0x11 & 0x7ffe);
            lVar42 = *(long *)(param_5 + 0x78);
            lVar46 = 0;
            uStack00000000000000d0 = 0x7e4;
            do {
              uVar31 = uVar31 + 1;
              *(ulong *)(lVar30 + 8) = uVar31;
              bVar10 = *(byte *)(lVar42 + uVar29);
              uVar32 = (ulong)bVar10;
              if ((uVar32 != 0) && (uVar32 <= param_1)) {
                lVar48 = *(long *)(param_5 + 0x58);
                uVar37 = (ulong)*(ushort *)(*(long *)(param_5 + 0x70) + uVar29 * 2);
                pcVar2 = (char *)(*(long *)(lVar48 + 0xa8) +
                                 (ulong)*(uint *)(lVar48 + uVar32 * 4 + 0x20) + uVar37 * uVar32);
                if ((ulong)(bVar10 >> 3) == 0) {
                  uVar36 = 0;
                  pcVar44 = pcVar2;
                }
                else {
                  uVar36 = uVar32 & 0xf8;
                  lVar50 = 0;
                  pcVar44 = pcVar2 + uVar36;
                  do {
                    if (*(ulong *)(pcVar2 + lVar50) != *(ulong *)((long)piVar3 + lVar50)) {
                      uVar36 = *(ulong *)((long)piVar3 + lVar50) ^ *(ulong *)(pcVar2 + lVar50);
                      uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar36 & 0x5555555555555555) << 1;
                      uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 |
                               (uVar36 & 0x3333333333333333) << 2;
                      uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar36 & 0xffff0000ffff) << 0x10;
                      uVar41 = lVar50 + ((ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3);
                      goto LAB_03d7ecd8;
                    }
                    lVar50 = lVar50 + 8;
                  } while ((ulong)(bVar10 >> 3) * 8 - lVar50 != 0);
                }
                uVar49 = uVar32 & 7;
                uVar41 = uVar36;
                if ((bVar10 & 7) != 0) {
                  uVar26 = uVar36 | uVar49;
                  do {
                    uVar41 = uVar36;
                    if (*(char *)((long)piVar3 + uVar36) != *pcVar44) break;
                    pcVar44 = pcVar44 + 1;
                    uVar49 = uVar49 - 1;
                    uVar36 = uVar36 + 1;
                    uVar41 = uVar26;
                  } while (uVar49 != 0);
                }
LAB_03d7ecd8:
                if ((((uVar41 != 0) && (uVar32 < uVar41 + *(uint *)(param_5 + 100))) &&
                    (uVar32 = uVar34 + 1 + uVar37 +
                              ((*(ulong *)(param_5 + 0x68) >> (((uVar32 - uVar41) * 3 & 0x1f) << 1)
                               & 0x3f) + (uVar32 - uVar41) * 4 <<
                              ((ulong)*(byte *)(lVar48 + uVar32) & 0x3f)), uVar32 <= uVar28)) &&
                   (uVar37 = (uVar41 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar32) ^ 0x1f) * 0x1e)) +
                             0x780, uStack00000000000000d0 <= uVar37)) {
                  iVar51 = (uint)bVar10 - (int)uVar41;
                  uVar39 = uVar39 + 1;
                  *(ulong *)(lVar30 + 0x10) = uVar39;
                  uVar17 = uVar37;
                  uVar40 = uVar32;
                  uVar45 = uVar41;
                  uStack00000000000000d0 = uVar37;
                }
              }
              lVar46 = lVar46 + 1;
              uVar29 = uVar29 + 1;
            } while (lVar46 != 2);
          }
        }
        else {
          iVar51 = 0;
        }
        if (uStack0000000000000110 + 0xaf <= uVar17) {
          uStack0000000000000100 = uStack0000000000000100 + 1;
          if ((2 < uVar22) ||
             (uVar31 = param_2 + 5, uVar22 = uVar22 + 1, param_2 = uVar19, uVar20 = uVar45,
             uVar25 = uVar40, iStack000000000000009c = iVar51, uStack0000000000000110 = uVar17,
             uVar1 <= uVar31)) goto LAB_03d7eeb0;
          goto LAB_03d7e864;
        }
        uStack00000000000000b8 = param_2 + lVar23;
        uVar40 = uVar25;
        uVar45 = uVar20;
        uVar19 = param_2;
        iVar51 = iStack000000000000009c;
LAB_03d7eeb0:
        if (uVar24 <= uStack00000000000000b8) {
          uStack00000000000000b8 = uVar24;
        }
        if (uStack00000000000000b8 < uVar40) {
LAB_03d7eed8:
          uVar31 = uVar40 + 0xf;
LAB_03d7eedc:
          if ((uVar40 <= uStack00000000000000b8) && (uVar31 != 0)) {
            uVar59 = *(undefined8 *)param_7;
            iVar35 = (int)uVar40;
            *param_7 = iVar35;
            param_7[3] = param_7[2];
            *(undefined8 *)(param_7 + 1) = uVar59;
            iVar58 = *(int *)(param_6 + 0x4c);
            if (4 < iVar58) {
              iVar52 = (int)uVar13;
              iVar53 = (int)((ulong)uVar13 >> 0x20);
              iVar54 = (int)uVar14;
              iVar55 = (int)((ulong)uVar14 >> 0x20);
              iVar56 = (int)uVar12;
              iVar57 = (int)((ulong)uVar12 >> 0x20);
              *(ulong *)(param_7 + 6) = CONCAT44(iVar35 + iVar55,iVar35 + iVar54);
              *(ulong *)(param_7 + 4) = CONCAT44(iVar35 + iVar53,iVar35 + iVar52);
              *(ulong *)(param_7 + 8) = CONCAT44(iVar35 + iVar57,iVar35 + iVar56);
              if (10 < iVar58) {
                iVar58 = (int)uVar59;
                *(ulong *)(param_7 + 0xc) = CONCAT44(iVar58 + iVar55,iVar58 + iVar54);
                *(ulong *)(param_7 + 10) = CONCAT44(iVar58 + iVar53,iVar58 + iVar52);
                *(ulong *)(param_7 + 0xe) = CONCAT44(iVar58 + iVar57,iVar58 + iVar56);
              }
            }
          }
        }
        else {
          if (uVar40 != (long)*param_7) {
            if (uVar40 == (long)param_7[1]) {
              uVar31 = 1;
            }
            else {
              uVar31 = (uVar40 + 3) - (long)*param_7;
              if (uVar31 < 7) {
                uVar27 = (uint)uVar31;
                uVar22 = 0x9750468;
              }
              else {
                uVar31 = (uVar40 + 3) - (long)param_7[1];
                if (6 < uVar31) {
                  if (uVar40 == (long)param_7[2]) {
                    uVar31 = 2;
                  }
                  else {
                    if (uVar40 != (long)param_7[3]) goto LAB_03d7eed8;
                    uVar31 = 3;
                  }
                  goto LAB_03d7eedc;
                }
                uVar27 = (uint)uVar31;
                uVar22 = 0xfdb1ace;
              }
              uVar31 = (ulong)(uVar22 >> (ulong)((uVar27 & 7) << 2) & 0xf);
            }
            goto LAB_03d7eedc;
          }
          uVar31 = 0;
        }
        uVar22 = (uint)uStack0000000000000100;
        *puStack0000000000000070 = uVar22;
        puStack0000000000000070[1] = (uint)uVar45 | iVar51 << 0x19;
        uVar28 = (ulong)*(uint *)(param_5 + 0x44) + 0x10;
        if (uVar31 < uVar28) {
          uVar27 = 0;
        }
        else {
          uVar34 = (ulong)*(uint *)(param_5 + 0x40);
          uVar39 = ((uVar31 - *(uint *)(param_5 + 0x44)) + (4L << (uVar34 & 0x3f))) - 0x10;
          uVar20 = (ulong)(((uint)LZCOUNT((uint)uVar39) ^ 0x1f) - 1);
          uVar25 = uVar39 >> (uVar20 & 0x3f);
          uVar31 = (ulong)(((uint)uVar39 &
                           (-1 << (ulong)(*(uint *)(param_5 + 0x40) & 0x1f) ^ 0xffffffffU)) +
                           (int)uVar28 +
                           (int)((uVar25 & 1 | (uVar20 - uVar34) * 2) - 2 << (uVar34 & 0x3f)) |
                          (int)(uVar20 - uVar34) << 10);
          uVar27 = (uint)(uVar39 - ((uVar25 & 1 | 2) << (uVar20 & 0x3f)) >> (uVar34 & 0x3f));
        }
        *(short *)((long)puStack0000000000000070 + 0xe) = (short)uVar31;
        puStack0000000000000070[2] = uVar27;
        if (5 < uStack0000000000000100) {
          if (uStack0000000000000100 < 0x82) {
            uVar22 = ((uint)LZCOUNT((int)(uStack0000000000000100 - 2)) ^ 0x1f) - 1;
            uVar22 = (int)(uStack0000000000000100 - 2 >> ((ulong)uVar22 & 0x3f)) + uVar22 * 2 + 2;
          }
          else if (uStack0000000000000100 < 0x842) {
            uVar22 = ((uint)LZCOUNT(uVar22 - 0x42) ^ 0x1f) + 10;
          }
          else if (uStack0000000000000100 >> 1 < 0xc21) {
            uVar22 = 0x15;
          }
          else {
            uVar22 = 0x16;
            if (0x5841 < uStack0000000000000100) {
              uVar22 = 0x17;
            }
          }
        }
        uVar27 = iVar51 + (uint)uVar45;
        if (uVar27 < 10) {
          uVar27 = uVar27 - 2;
        }
        else if (uVar27 < 0x86) {
          uVar6 = ((uint)LZCOUNT((int)((long)(int)uVar27 - 6U)) ^ 0x1f) - 1;
          uVar27 = (int)((long)(int)uVar27 - 6U >> ((ulong)uVar6 & 0x3f)) + uVar6 * 2 + 4;
        }
        else if (uVar27 < 0x846) {
          uVar27 = ((uint)LZCOUNT(uVar27 - 0x46) ^ 0x1f) + 0xc;
        }
        else {
          uVar27 = 0x17;
        }
        uVar21 = (ushort)uVar27 & 7 | (ushort)((uVar22 & 7) << 3);
        if ((((uVar31 & 0x3ff) == 0) && ((uVar22 & 0xffff) < 8)) && ((uVar27 & 0xffff) < 0x10)) {
          if (7 < (uVar27 & 0xffff)) {
            uVar21 = uVar21 | 0x40;
          }
        }
        else {
          uVar22 = (uVar22 >> 3 & 0x1fff) * 3 + ((uVar27 & 0xfff8) >> 3);
          uVar21 = (((ushort)(0x520d40 >> (ulong)((uVar22 & 0xf) << 1)) & 0xc0) +
                    (short)uVar22 * 0x40 | uVar21) + 0x40;
        }
        *(ushort *)(puStack0000000000000070 + 3) = uVar21;
        uVar31 = uVar19 + uVar45;
        uVar28 = uVar31;
        if (uVar4 <= uVar31) {
          uVar28 = uVar4;
        }
        *in_stack_00000190 = *in_stack_00000190 + uStack0000000000000100;
        uVar39 = uVar19 + 2;
        if (uVar40 < uVar45 >> 2) {
          uVar20 = uVar31 + uVar40 * -4;
          uVar34 = uVar39;
          if (uVar39 <= uVar20) {
            uVar34 = uVar20;
          }
          uVar39 = uVar28;
          if (uVar34 <= uVar28) {
            uVar39 = uVar34;
          }
        }
        puStack0000000000000070 = puStack0000000000000070 + 4;
        uVar19 = lVar5 + uVar45 * 2 + uVar19;
        if (uVar39 < uVar28) {
          uVar22 = *(uint *)(param_6 + 0x40);
          uVar27 = *(uint *)(param_6 + 0x44);
          uVar6 = *(uint *)(param_6 + 0x48);
          do {
            uVar7 = (uint)(*(int *)(param_3 + (uVar39 & param_4)) * 0x1e35a7bd) >>
                    ((ulong)uVar22 & 0x3f);
            uVar21 = *(ushort *)(lVar8 + (ulong)uVar7 * 2);
            *(int *)(lVar9 + ((ulong)(uVar7 << (ulong)(uVar6 & 0x1f)) +
                             ((ulong)uVar27 & (ulong)uVar21)) * 4) = (int)uVar39;
            uVar39 = uVar39 + 1;
            *(ushort *)(lVar8 + (ulong)uVar7 * 2) = uVar21 + 1;
          } while (uVar28 != uVar39);
        }
        uStack0000000000000100 = 0;
      }
      param_2 = uVar31;
      param_1 = uVar1 - param_2;
    } while (param_2 + 4 < uVar1);
  }
  else {
    puStack0000000000000070 = in_stack_00000180;
  }
  *param_8 = param_1 + uStack0000000000000100;
  *in_stack_00000188 =
       *in_stack_00000188 + ((long)puStack0000000000000070 - (long)in_stack_00000180 >> 4);
  return;
}


