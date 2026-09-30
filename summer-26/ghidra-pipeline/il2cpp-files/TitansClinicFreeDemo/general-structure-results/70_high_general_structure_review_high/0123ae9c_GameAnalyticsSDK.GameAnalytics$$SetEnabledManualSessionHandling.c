/*
FUNCTION_NAME: GameAnalyticsSDK.GameAnalytics$$SetEnabledManualSessionHandling
ENTRY_POINT: 0123ae9c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameAnalyticsSDK_GameAnalytics__SetEnabledManualSessionHandling
               (ulong param_1,ulong param_2,long param_3,ulong param_4,long param_5,long param_6,
               int *param_7,ulong *param_8)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  uint3 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong uVar24;
  ushort uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  char cVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  ulong uVar37;
  ulong *puVar38;
  long lVar39;
  long lVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  long lVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint *puStack0000000000000070;
  ulong uStack00000000000000b0;
  ulong uStack00000000000000c0;
  ulong uStack00000000000000c8;
  ulong uStack00000000000000d0;
  ulong uStack00000000000000d8;
  uint *in_stack_00000140;
  long *in_stack_00000148;
  long *in_stack_00000150;
  
  uVar16 = _UNK_00746a18;
  uVar15 = _DAT_00746a10;
  uVar14 = _UNK_00746918;
  uVar13 = _DAT_00746910;
  uVar2 = param_2 + param_1;
  uVar46 = *param_8;
  uVar33 = uVar2 - 7;
  uVar4 = uVar33;
  if (param_1 < 8) {
    uVar4 = param_2;
  }
  lVar5 = 0x40;
  if (8 < *(int *)(param_5 + 4)) {
    lVar5 = 0x200;
  }
  if (param_2 + 8 < uVar2) {
    lVar32 = *(long *)(param_5 + 0x10);
    lVar39 = *(long *)(param_6 + 0x38);
    lVar1 = param_3 + 8;
    uVar17 = lVar5 + param_2;
    uVar29 = (1L << ((ulong)*(uint *)(param_5 + 8) & 0x3f)) - 0x10;
    puStack0000000000000070 = in_stack_00000140;
    do {
      uVar48 = param_2 & param_4;
      uStack00000000000000b0 = (ulong)*param_7;
      puVar3 = (ulong *)(param_3 + uVar48);
      uVar19 = *puVar3;
      cVar30 = (char)*puVar3;
      uVar31 = param_2;
      if (uVar29 <= param_2) {
        uVar31 = uVar29;
      }
      lVar35 = uVar19 * 0x35a7bd1e35a7bd00;
      uVar34 = param_1 >> 3;
      if (param_2 - uStack00000000000000b0 < param_2) {
        uVar37 = param_4 & 0xffffffff & param_2 - uStack00000000000000b0;
        puVar23 = (ulong *)(param_3 + uVar37);
        if (cVar30 != (char)*puVar23) goto LAB_0123b00c;
        if (uVar34 == 0) {
          uVar36 = 0;
          puVar38 = puVar3;
LAB_0123bb70:
          uVar19 = param_1 & 7;
          uVar37 = uVar36;
          if (uVar19 != 0) {
            uVar44 = uVar36 | uVar19;
            do {
              uVar37 = uVar36;
              if (*(char *)((long)puVar23 + uVar36) != (char)*puVar38) break;
              puVar38 = (ulong *)((long)puVar38 + 1);
              uVar19 = uVar19 - 1;
              uVar36 = uVar36 + 1;
              uVar37 = uVar44;
            } while (uVar19 != 0);
          }
        }
        else {
          uVar44 = *puVar23;
          if (uVar19 == uVar44) {
            uVar36 = param_1 & 0xfffffffffffffff8;
            lVar40 = 0;
            uVar20 = uVar34;
            do {
              uVar20 = uVar20 - 1;
              puVar38 = (ulong *)((long)puVar3 + uVar36);
              if (uVar20 == 0) goto LAB_0123bb70;
              uVar19 = *(ulong *)(lVar1 + uVar48 + lVar40);
              uVar44 = *(ulong *)(lVar1 + uVar37 + lVar40);
              lVar40 = lVar40 + 8;
            } while (uVar19 == uVar44);
          }
          else {
            lVar40 = 0;
          }
          uVar19 = ((uVar44 ^ uVar19) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                   ((uVar44 ^ uVar19) & 0x5555555555555555) << 1;
          uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
          uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
          uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
          uVar37 = lVar40 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
        }
        if ((uVar37 < 4) || (uVar19 = uVar37 * 0x87 + 0x78f, uVar19 < 0x7e5)) goto LAB_0123b00c;
        cVar30 = *(char *)(param_3 + uVar37 + uVar48);
      }
      else {
LAB_0123b00c:
        uStack00000000000000b0 = 0;
        uVar37 = 0;
        uVar19 = 0x7e4;
      }
      uVar12 = (uint3)((ulong)lVar35 >> 0x28);
      uStack00000000000000c8 = (ulong)((uVar12 >> 4) + (int3)uVar14 & 0xfffff);
      uStack00000000000000c0 = (ulong)((uVar12 >> 4) + (int3)uVar13 & 0xfffff);
      uStack00000000000000d8 = (ulong)((uVar12 >> 4) + (int3)uVar16 & 0xfffff);
      uStack00000000000000d0 = (ulong)((uVar12 >> 4) + (int3)uVar15 & 0xfffff);
      uVar36 = param_1 & 0xfffffffffffffff8;
      lVar35 = 0;
      uVar44 = param_1 & 7;
      do {
        uVar20 = (ulong)*(uint *)(lVar39 + *(long *)((long)&stack0x000000c0 + lVar35 * 8) * 4);
        uVar24 = uVar20 & param_4;
        uVar20 = param_2 - uVar20;
        if (cVar30 == *(char *)(param_3 + uVar24 + uVar37) && uVar20 - 1 < uVar31) {
          lVar40 = param_3 + uVar24;
          uVar24 = 0;
          puVar23 = puVar3;
          uVar21 = uVar24;
          for (uVar47 = uVar34; uVar47 != 0; uVar47 = uVar47 - 1) {
            uVar21 = *(ulong *)(lVar40 + uVar24);
            if (*(ulong *)((long)puVar3 + uVar24) != uVar21) {
              uVar21 = uVar21 ^ *(ulong *)((long)puVar3 + uVar24);
              uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
              uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
              uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
              uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
              uVar24 = uVar24 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
              goto LAB_0123b0bc;
            }
            uVar24 = uVar24 + 8;
            puVar23 = (ulong *)((long)puVar3 + uVar36);
            uVar21 = uVar36;
          }
          uVar24 = uVar21;
          if (uVar44 != 0) {
            uVar18 = uVar21 | uVar44;
            uVar47 = uVar44;
            do {
              uVar24 = uVar21;
              if (*(char *)(lVar40 + uVar21) != (char)*puVar23) break;
              puVar23 = (ulong *)((long)puVar23 + 1);
              uVar47 = uVar47 - 1;
              uVar21 = uVar21 + 1;
              uVar24 = uVar18;
            } while (uVar47 != 0);
          }
LAB_0123b0bc:
          if ((3 < uVar24) &&
             (uVar21 = (uVar24 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar20) ^ 0x1f) * 0x1e)) + 0x780
             , uVar19 < uVar21)) {
            cVar30 = *(char *)(param_3 + uVar24 + uVar48);
            uVar37 = uVar24;
            uVar19 = uVar21;
            uStack00000000000000b0 = uVar20;
          }
        }
        lVar35 = lVar35 + 1;
      } while (lVar35 != 4);
      *(int *)(lVar39 + *(long *)((long)&stack0x000000c0 + (param_2 >> 3 & 3) * 8) * 4) =
           (int)param_2;
      if (((param_2 & 3) == 0) && (0x1f < param_1)) {
        uVar48 = *(ulong *)(param_6 + 0x50);
        if (uVar48 <= param_2) {
          iVar6 = *(int *)(param_6 + 0x5c);
          iVar7 = *(int *)(param_6 + 0x60);
          uVar28 = *(uint *)(param_6 + 0x40);
          do {
            bVar9 = *(byte *)(param_3 + (uVar48 & param_4));
            bVar10 = *(byte *)(param_3 + (uVar48 + 0x20 & param_4));
            if ((uVar28 >> 0x18 & 0x3f) == 0) {
              uVar26 = *(uint *)(*(long *)(param_6 + 0x48) + (ulong)(uVar28 & 0x3fffffff) * 4);
              *(int *)(*(long *)(param_6 + 0x48) + (ulong)(uVar28 & 0x3fffffff) * 4) = (int)uVar48;
              if ((uVar48 == param_2) && (uVar26 != 0xffffffff)) {
                uVar27 = (int)param_2 - uVar26;
                if (uVar27 <= uVar31) {
                  lVar35 = 0;
                  lVar40 = param_3 + (uVar26 & param_4);
                  uVar20 = uVar34;
                  do {
                    uVar24 = *(ulong *)(lVar40 + lVar35);
                    if (*(ulong *)((long)puVar3 + lVar35) != uVar24) {
                      uVar24 = uVar24 ^ *(ulong *)((long)puVar3 + lVar35);
                      uVar20 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar24 & 0x5555555555555555) << 1;
                      uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 |
                               (uVar20 & 0x3333333333333333) << 2;
                      uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar20 & 0xffff0000ffff) << 0x10;
                      uVar24 = lVar35 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
                      goto LAB_0123b264;
                    }
                    uVar20 = uVar20 - 1;
                    lVar35 = lVar35 + 8;
                    uVar21 = uVar36;
                    uVar24 = uVar36;
                    uVar47 = uVar44;
                  } while (uVar20 != 0);
                  for (; (uVar47 != 0 &&
                         (uVar24 = uVar21,
                         *(char *)(lVar40 + uVar21) == *(char *)((long)puVar3 + uVar21)));
                      uVar21 = uVar21 + 1) {
                    uVar24 = param_1;
                    uVar47 = uVar47 - 1;
                  }
LAB_0123b264:
                  if (((3 < uVar24) && (uVar37 < uVar24)) &&
                     (uVar20 = (uVar24 * 0x87 - (ulong)(((uint)LZCOUNT(uVar27) ^ 0x1f) * 0x1e)) +
                               0x780, uVar19 < uVar20)) {
                    uVar37 = uVar24;
                    uVar19 = uVar20;
                    uStack00000000000000b0 = (ulong)uVar27;
                  }
                }
              }
            }
            uVar48 = uVar48 + 4;
            uVar28 = (uint)bVar10 + uVar28 * iVar6 + iVar7 * ~(uint)bVar9 + 1;
          } while (uVar48 <= param_2);
          *(uint *)(param_6 + 0x40) = uVar28;
        }
        *(ulong *)(param_6 + 0x50) = param_2 + 4;
      }
      if (uVar19 < 0x7e5) {
        uVar31 = param_2 + 1;
        uVar46 = uVar46 + 1;
        if (uVar17 < uVar31) {
          if (uVar17 + lVar5 * 4 < uVar31) {
            uVar19 = param_2 + 0x11;
            if (uVar33 <= param_2 + 0x11) {
              uVar19 = uVar33;
            }
            for (; uVar31 < uVar19; uVar31 = uVar31 + 4) {
              uVar46 = uVar46 + 4;
              *(uint *)(lVar39 + ((ulong)((uint)((ulong)(*(long *)(param_3 + (uVar31 & param_4)) *
                                                        0x35a7bd1e35a7bd00) >> 0x2c) +
                                         ((uint)uVar31 & 0x18)) & 0xfffff) * 4) = (uint)uVar31;
            }
          }
          else {
            uVar19 = param_2 + 9;
            if (uVar33 <= param_2 + 9) {
              uVar19 = uVar33;
            }
            for (; uVar31 < uVar19; uVar31 = uVar31 + 2) {
              uVar46 = uVar46 + 2;
              *(uint *)(lVar39 + ((ulong)((uint)((ulong)(*(long *)(param_3 + (uVar31 & param_4)) *
                                                        0x35a7bd1e35a7bd00) >> 0x2c) +
                                         ((uint)uVar31 & 0x18)) & 0xfffff) * 4) = (uint)uVar31;
            }
          }
        }
      }
      else {
        iVar6 = *param_7;
        uVar28 = 0;
        uVar31 = param_1;
        do {
          uVar31 = uVar31 - 1;
          param_1 = param_1 - 1;
          uVar48 = uVar37 - 1;
          if (param_1 <= uVar37 - 1) {
            uVar48 = param_1;
          }
          if (4 < *(int *)(param_5 + 4)) {
            uVar48 = 0;
          }
          uVar34 = param_2 + 1;
          uVar44 = uVar34 & param_4;
          puVar3 = (ulong *)(param_3 + uVar44);
          uVar36 = *puVar3;
          uVar17 = uVar29;
          if (uVar34 < uVar29) {
            uVar17 = param_2 + 1;
          }
          cVar30 = *(char *)(param_3 + uVar48 + uVar44);
          uVar20 = uVar34 - (long)iVar6;
          lVar35 = uVar36 * 0x35a7bd1e35a7bd00;
          uVar24 = param_1 >> 3;
          if ((uVar20 < uVar34) &&
             (uVar20 = param_4 & 0xffffffff & uVar20, cVar30 == *(char *)(param_3 + uVar20 + uVar48)
             )) {
            if (uVar24 == 0) {
              uVar21 = 0;
              puVar23 = puVar3;
LAB_0123b6b0:
              uVar36 = param_1 & 7;
              uVar47 = uVar21;
              if (uVar36 != 0) {
                uVar18 = uVar21 | uVar36;
                do {
                  uVar47 = uVar21;
                  if (*(char *)((long)(param_3 + uVar20) + uVar21) != (char)*puVar23) break;
                  puVar23 = (ulong *)((long)puVar23 + 1);
                  uVar36 = uVar36 - 1;
                  uVar21 = uVar21 + 1;
                  uVar47 = uVar18;
                } while (uVar36 != 0);
              }
            }
            else {
              uVar47 = *(ulong *)(param_3 + uVar20);
              if (uVar36 == uVar47) {
                uVar18 = uVar31 >> 3;
                uVar21 = param_1 & 0xfffffffffffffff8;
                lVar40 = 0;
                do {
                  uVar18 = uVar18 - 1;
                  puVar23 = (ulong *)((long)puVar3 + uVar21);
                  if (uVar18 == 0) goto LAB_0123b6b0;
                  uVar36 = *(ulong *)(lVar1 + uVar44 + lVar40);
                  uVar47 = *(ulong *)(lVar1 + uVar20 + lVar40);
                  lVar40 = lVar40 + 8;
                } while (uVar36 == uVar47);
              }
              else {
                lVar40 = 0;
              }
              uVar36 = ((uVar47 ^ uVar36) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                       ((uVar47 ^ uVar36) & 0x5555555555555555) << 1;
              uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
              uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
              uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
              uVar47 = lVar40 + ((ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3);
            }
            if ((uVar47 < 4) || (uVar36 = uVar47 * 0x87 + 0x78f, uVar36 < 0x7e5)) goto LAB_0123b3a8;
            cVar30 = *(char *)(param_3 + uVar47 + uVar44);
            uVar20 = (long)iVar6;
            uVar48 = uVar47;
          }
          else {
LAB_0123b3a8:
            uVar20 = 0;
            uVar36 = 0x7e4;
          }
          uVar12 = (uint3)((ulong)lVar35 >> 0x28);
          uStack00000000000000c8 = (ulong)((uVar12 >> 4) + (int3)uVar14 & 0xfffff);
          uStack00000000000000c0 = (ulong)((uVar12 >> 4) + (int3)uVar13 & 0xfffff);
          uStack00000000000000d8 = (ulong)((uVar12 >> 4) + (int3)uVar16 & 0xfffff);
          uStack00000000000000d0 = (ulong)((uVar12 >> 4) + (int3)uVar15 & 0xfffff);
          uVar21 = param_1 & 0xfffffffffffffff8;
          lVar35 = 0;
          uVar47 = param_1 & 7;
          do {
            uVar18 = (ulong)*(uint *)(lVar39 + *(long *)((long)&stack0x000000c0 + lVar35 * 8) * 4);
            uVar41 = uVar18 & param_4;
            uVar18 = uVar34 - uVar18;
            if (cVar30 == *(char *)(param_3 + uVar41 + uVar48) && uVar18 - 1 < uVar17) {
              lVar40 = param_3 + uVar41;
              if (uVar24 == 0) {
                puVar23 = puVar3;
                uVar41 = 0;
              }
              else {
                lVar45 = 0;
                uVar42 = uVar24;
                do {
                  uVar41 = *(ulong *)(lVar40 + lVar45);
                  if (*(ulong *)((long)puVar3 + lVar45) != uVar41) {
                    uVar41 = uVar41 ^ *(ulong *)((long)puVar3 + lVar45);
                    uVar41 = (uVar41 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar41 & 0x5555555555555555) << 1
                    ;
                    uVar41 = (uVar41 & 0xcccccccccccccccc) >> 2 | (uVar41 & 0x3333333333333333) << 2
                    ;
                    uVar41 = (uVar41 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar41 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar41 = (uVar41 & 0xff00ff00ff00ff00) >> 8 | (uVar41 & 0xff00ff00ff00ff) << 8;
                    uVar41 = (uVar41 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar41 & 0xffff0000ffff) << 0x10;
                    uVar42 = lVar45 + ((ulong)LZCOUNT(uVar41 >> 0x20 | uVar41 << 0x20) >> 3);
                    goto LAB_0123b464;
                  }
                  uVar42 = uVar42 - 1;
                  lVar45 = lVar45 + 8;
                  puVar23 = (ulong *)((long)puVar3 + uVar21);
                  uVar41 = uVar21;
                } while (uVar42 != 0);
              }
              uVar42 = uVar41;
              if (uVar47 != 0) {
                uVar22 = uVar41 | uVar47;
                uVar43 = uVar47;
                do {
                  uVar42 = uVar41;
                  if (*(char *)(lVar40 + uVar41) != (char)*puVar23) break;
                  puVar23 = (ulong *)((long)puVar23 + 1);
                  uVar43 = uVar43 - 1;
                  uVar41 = uVar41 + 1;
                  uVar42 = uVar22;
                } while (uVar43 != 0);
              }
LAB_0123b464:
              if ((3 < uVar42) &&
                 (uVar41 = (uVar42 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar18) ^ 0x1f) * 0x1e)) +
                           0x780, uVar36 < uVar41)) {
                cVar30 = *(char *)(param_3 + uVar42 + uVar44);
                uVar20 = uVar18;
                uVar36 = uVar41;
                uVar48 = uVar42;
              }
            }
            lVar35 = lVar35 + 1;
          } while (lVar35 != 4);
          *(int *)(lVar39 + *(long *)((long)&stack0x000000c0 + (uVar34 >> 3 & 3) * 8) * 4) =
               (int)uVar34;
          if ((0x1f < param_1) && ((uVar34 & 3) == 0)) {
            uVar44 = *(ulong *)(param_6 + 0x50);
            if (uVar44 <= uVar34) {
              iVar7 = *(int *)(param_6 + 0x5c);
              iVar8 = *(int *)(param_6 + 0x60);
              uVar26 = *(uint *)(param_6 + 0x40);
              do {
                bVar9 = *(byte *)(param_3 + (uVar44 & param_4));
                bVar10 = *(byte *)(param_3 + (uVar44 + 0x20 & param_4));
                if ((uVar26 >> 0x18 & 0x3f) == 0) {
                  uVar27 = *(uint *)(*(long *)(param_6 + 0x48) + (ulong)(uVar26 & 0x3fffffff) * 4);
                  *(int *)(*(long *)(param_6 + 0x48) + (ulong)(uVar26 & 0x3fffffff) * 4) =
                       (int)uVar44;
                  if ((uVar44 == uVar34) && (uVar27 != 0xffffffff)) {
                    uVar11 = (int)uVar34 - uVar27;
                    if (uVar11 <= uVar17) {
                      lVar35 = 0;
                      lVar40 = param_3 + (uVar27 & param_4);
                      uVar18 = uVar24;
                      do {
                        uVar41 = *(ulong *)(lVar40 + lVar35);
                        if (*(ulong *)((long)puVar3 + lVar35) != uVar41) {
                          uVar41 = uVar41 ^ *(ulong *)((long)puVar3 + lVar35);
                          uVar18 = (uVar41 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar41 & 0x5555555555555555) << 1;
                          uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 |
                                   (uVar18 & 0x3333333333333333) << 2;
                          uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar18 & 0xff00ff00ff00ff) << 8;
                          uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar18 & 0xffff0000ffff) << 0x10;
                          uVar41 = lVar35 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
                          goto LAB_0123b5fc;
                        }
                        uVar18 = uVar18 - 1;
                        lVar35 = lVar35 + 8;
                        uVar41 = uVar21;
                        uVar42 = uVar21;
                        uVar43 = uVar47;
                      } while (uVar18 != 0);
                      for (; (uVar43 != 0 &&
                             (uVar41 = uVar42,
                             *(char *)(lVar40 + uVar42) == *(char *)((long)puVar3 + uVar42)));
                          uVar42 = uVar42 + 1) {
                        uVar41 = param_1;
                        uVar43 = uVar43 - 1;
                      }
LAB_0123b5fc:
                      if (((3 < uVar41) && (uVar48 < uVar41)) &&
                         (uVar18 = (uVar41 * 0x87 - (ulong)(((uint)LZCOUNT(uVar11) ^ 0x1f) * 0x1e))
                                   + 0x780, uVar36 < uVar18)) {
                        uVar20 = (ulong)uVar11;
                        uVar36 = uVar18;
                        uVar48 = uVar41;
                      }
                    }
                  }
                }
                uVar44 = uVar44 + 4;
                uVar26 = (uint)bVar10 + uVar26 * iVar7 + iVar8 * ~(uint)bVar9 + 1;
              } while (uVar44 <= uVar34);
              *(uint *)(param_6 + 0x40) = uVar26;
            }
            *(ulong *)(param_6 + 0x50) = param_2 + 5;
          }
          uVar17 = param_2;
        } while (((uVar19 + 0xaf <= uVar36) &&
                 (uVar46 = uVar46 + 1, uVar17 = uVar34, uStack00000000000000b0 = uVar20,
                 uVar37 = uVar48, uVar28 < 3)) &&
                (uVar48 = param_2 + 9, uVar28 = uVar28 + 1, param_2 = uVar34, uVar19 = uVar36,
                uVar48 < uVar2));
        uVar31 = uVar17 + lVar32;
        if (uVar29 <= uVar31) {
          uVar31 = uVar29;
        }
        if (uVar31 < uStack00000000000000b0) {
LAB_0123b7d4:
          uVar19 = uStack00000000000000b0 + 0xf;
LAB_0123b7d8:
          if ((uStack00000000000000b0 <= uVar31) && (uVar19 != 0)) {
            uVar49 = *(undefined8 *)param_7;
            *param_7 = (int)uStack00000000000000b0;
            param_7[3] = param_7[2];
            *(undefined8 *)(param_7 + 1) = uVar49;
          }
        }
        else {
          if (uStack00000000000000b0 != (long)*param_7) {
            if (uStack00000000000000b0 == (long)param_7[1]) {
              uVar19 = 1;
            }
            else {
              uVar19 = (uStack00000000000000b0 + 3) - (long)*param_7;
              if (uVar19 < 7) {
                uVar26 = (uint)uVar19;
                uVar28 = 0x9750468;
              }
              else {
                uVar19 = (uStack00000000000000b0 + 3) - (long)param_7[1];
                if (6 < uVar19) {
                  if (uStack00000000000000b0 == (long)param_7[2]) {
                    uVar19 = 2;
                  }
                  else {
                    if (uStack00000000000000b0 != (long)param_7[3]) goto LAB_0123b7d4;
                    uVar19 = 3;
                  }
                  goto LAB_0123b7d8;
                }
                uVar26 = (uint)uVar19;
                uVar28 = 0xfdb1ace;
              }
              uVar19 = (ulong)(uVar28 >> (ulong)((uVar26 & 7) << 2) & 0xf);
            }
            goto LAB_0123b7d8;
          }
          uVar19 = 0;
        }
        uVar28 = (uint)uVar46;
        uVar26 = (uint)uVar37;
        *puStack0000000000000070 = uVar28;
        puStack0000000000000070[1] = uVar26;
        uVar31 = (ulong)*(uint *)(param_5 + 0x44) + 0x10;
        if (uVar19 < uVar31) {
          uVar27 = 0;
        }
        else {
          uVar34 = (ulong)*(uint *)(param_5 + 0x40);
          uVar48 = ((uVar19 - *(uint *)(param_5 + 0x44)) + (4L << (uVar34 & 0x3f))) - 0x10;
          uVar36 = (ulong)(((uint)LZCOUNT((uint)uVar48) ^ 0x1f) - 1);
          uVar44 = uVar48 >> (uVar36 & 0x3f);
          uVar19 = (ulong)(((uint)uVar48 &
                           (-1 << (ulong)(*(uint *)(param_5 + 0x40) & 0x1f) ^ 0xffffffffU)) +
                           (int)uVar31 +
                           (int)((uVar44 & 1 | (uVar36 - uVar34) * 2) - 2 << (uVar34 & 0x3f)) |
                          (int)(uVar36 - uVar34) << 10);
          uVar27 = (uint)(uVar48 - ((uVar44 & 1 | 2) << (uVar36 & 0x3f)) >> (uVar34 & 0x3f));
        }
        *(short *)((long)puStack0000000000000070 + 0xe) = (short)uVar19;
        puStack0000000000000070[2] = uVar27;
        if (5 < uVar46) {
          if (uVar46 < 0x82) {
            uVar28 = ((uint)LZCOUNT((int)(uVar46 - 2)) ^ 0x1f) - 1;
            uVar28 = (int)(uVar46 - 2 >> ((ulong)uVar28 & 0x3f)) + uVar28 * 2 + 2;
          }
          else if (uVar46 < 0x842) {
            uVar28 = ((uint)LZCOUNT(uVar28 - 0x42) ^ 0x1f) + 10;
          }
          else if (uVar46 >> 1 < 0xc21) {
            uVar28 = 0x15;
          }
          else {
            uVar28 = 0x16;
            if (0x5841 < uVar46) {
              uVar28 = 0x17;
            }
          }
        }
        if (uVar26 < 10) {
          uVar26 = uVar26 - 2;
        }
        else if (uVar26 < 0x86) {
          uVar27 = ((uint)LZCOUNT((int)((long)(int)uVar26 - 6U)) ^ 0x1f) - 1;
          uVar26 = (int)((long)(int)uVar26 - 6U >> ((ulong)uVar27 & 0x3f)) + uVar27 * 2 + 4;
        }
        else if (uVar26 < 0x846) {
          uVar26 = ((uint)LZCOUNT(uVar26 - 0x46) ^ 0x1f) + 0xc;
        }
        else {
          uVar26 = 0x17;
        }
        uVar25 = (ushort)uVar26 & 7 | (ushort)((uVar28 & 7) << 3);
        if ((((uVar19 & 0x3ff) == 0) && ((uVar28 & 0xffff) < 8)) && ((uVar26 & 0xffff) < 0x10)) {
          if (7 < (uVar26 & 0xffff)) {
            uVar25 = uVar25 | 0x40;
          }
        }
        else {
          uVar28 = (uVar28 >> 3 & 0x1fff) * 3 + ((uVar26 & 0xfff8) >> 3);
          uVar25 = (((ushort)(0x520d40 >> (ulong)((uVar28 & 0xf) << 1)) & 0xc0) +
                    (short)uVar28 * 0x40 | uVar25) + 0x40;
        }
        *(ushort *)(puStack0000000000000070 + 3) = uVar25;
        uVar31 = uVar17 + uVar37;
        uVar19 = uVar31;
        if (uVar4 <= uVar31) {
          uVar19 = uVar4;
        }
        *in_stack_00000150 = *in_stack_00000150 + uVar46;
        uVar46 = uVar17 + 2;
        if (uStack00000000000000b0 < uVar37 >> 2) {
          uVar34 = uVar31 + uStack00000000000000b0 * -4;
          uVar48 = uVar46;
          if (uVar46 <= uVar34) {
            uVar48 = uVar34;
          }
          uVar46 = uVar19;
          if (uVar48 <= uVar19) {
            uVar46 = uVar48;
          }
        }
        puStack0000000000000070 = puStack0000000000000070 + 4;
        uVar17 = lVar5 + uVar37 * 2 + uVar17;
        if (uVar46 < uVar19) {
          do {
            *(uint *)(lVar39 + ((ulong)((uint)((ulong)(*(long *)(param_3 + (uVar46 & param_4)) *
                                                      0x35a7bd1e35a7bd00) >> 0x2c) +
                                       ((uint)uVar46 & 0x18)) & 0xfffff) * 4) = (uint)uVar46;
            uVar46 = uVar46 + 1;
          } while (uVar19 != uVar46);
        }
        uVar46 = 0;
      }
      param_2 = uVar31;
      param_1 = uVar2 - param_2;
    } while (param_2 + 8 < uVar2);
  }
  else {
    puStack0000000000000070 = in_stack_00000140;
  }
  *param_8 = param_1 + uVar46;
  *in_stack_00000148 =
       *in_stack_00000148 + ((long)puStack0000000000000070 - (long)in_stack_00000140 >> 4);
  return;
}


