/*
FUNCTION_NAME: FUN_068f96cc
ENTRY_POINT: 068f96cc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x068fa83c) */
/* WARNING: Removing unreachable block (ram,0x068fa86c) */
/* WARNING: Removing unreachable block (ram,0x068fa870) */
/* WARNING: Removing unreachable block (ram,0x068fa204) */

void FUN_068f96cc(uint *param_1,long param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  uint *puVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined8 local_120;
  ulong uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  
  if ((DAT_0983fe7e & 1) == 0) {
    FUN_03d2d2b0(PTR_StringLiteral_51768_091fdfd0);
    FUN_03d2d2b0(PTR_DAT_091b1398);
    FUN_03d2d2b0(PTR_DAT_091ff4d0);
    FUN_03d2d2b0(PTR_DAT_091ff4d8);
    FUN_03d2d2b0(PTR_DAT_091ff4e0);
    FUN_03d2d2b0(PTR_DAT_091fbd40);
    FUN_03d2d2b0(PTR_DAT_091a1008);
    FUN_03d2d2b0(PTR_DAT_091ff4e8);
    FUN_03d2d2b0(PTR_DAT_091ff4f0);
    FUN_03d2d2b0(PTR_DAT_091ff4f8);
    FUN_03d2d2b0(PTR_DAT_091ff500);
    FUN_03d2d2b0(PTR_DAT_091d7258);
    FUN_03d2d2b0(PTR_DAT_091ff508);
    DAT_0983fe7e = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  uVar21 = *param_1;
  lVar17 = *(long *)(param_1 + 0xe);
  if (6 < uVar21) {
    lVar12 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03d8f26c();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03d8f26c();
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar12 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03d8f26c();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03d8f26c();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
    if (lVar12 == 0) {
      lVar12 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03d8f26c();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03d8f26c();
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar12 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03d8f26c();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03d8f26c();
      }
      uVar19 = **(undefined8 **)(lVar12 + 0xb8);
      lVar12 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_StringLiteral_51768_091fdfd0);
      lVar13 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03d8f26c();
      }
      FUN_06af096c(lVar12,uVar19,*(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x18),0);
      lVar13 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03d8f26c();
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03d8f26c();
      }
      *(long *)(*(long *)(lVar13 + 0xb8) + 8) = lVar12;
      lVar13 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03d8f26c();
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03d8f26c();
      }
      thunk_FUN_03d1023c(*(long *)(lVar13 + 0xb8) + 8,lVar12);
    }
    if (*(int *)(*(long *)PTR_DAT_091b1398 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_071df11c(&local_e0,param_1 + 0xc,lVar12,lVar17,0);
    uStack_b8 = uStack_d8;
    local_c0 = local_e0;
    local_b0 = local_d0;
    *(undefined8 *)(param_1 + 0x1a) = local_d0;
    *(ulong *)(param_1 + 0x18) = uStack_d8;
    *(undefined8 *)(param_1 + 0x16) = local_e0;
    thunk_FUN_03d1023c(param_1 + 0x16,0);
  }
  puVar7 = PTR_DAT_091ff4f0;
  switch(uVar21) {
  case 0:
    local_70 = *(undefined1 (*) [16])(param_1 + 0x24);
    uVar21 = 0xffffffff;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    *param_1 = 0xffffffff;
    do {
      FUN_0708d63c(local_70,0);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      do {
        auVar22 = FUN_05d33244(lVar17 + 0x38,*(undefined8 *)PTR_DAT_091ff4f8);
        uVar11 = *(int *)(lVar17 + 0x88) + 1;
        local_80 = auVar22;
        if (auVar22._8_4_ <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        bVar2 = *(byte *)(auVar22._0_8_ + (long)(int)uVar11) & 0x7f;
        if ((*(char *)(lVar17 + 0x18) != '\0') || (0x7d < bVar2)) {
          iVar15 = 2;
          iVar9 = iVar15;
          if (*(char *)(lVar17 + 0x18) != '\0') {
            iVar9 = 6;
          }
          if (bVar2 != 0x7e) {
            iVar15 = 8;
          }
          iVar3 = 0;
          if (0x7d < bVar2) {
            iVar3 = iVar15;
          }
          lVar12 = FUN_07c2e9b4(lVar17,iVar3 + iVar9,*(undefined8 *)(param_1 + 0xc),1,0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          auVar22 = FUN_071f1178(lVar12,0,0);
          local_70 = auVar22;
          uVar14 = FUN_0708d5f0(local_70,0);
          if ((uVar14 & 1) == 0) {
            *param_1 = 1;
            *(undefined1 (*) [16])(param_1 + 0x24) = local_70;
            thunk_FUN_03d1023c(param_1 + 0x24,0);
            lVar17 = *(long *)(param_2 + 0x20);
            if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
              lVar17 = FUN_03d8f26c();
            }
            FUN_04e29b3c(param_1 + 2,local_70,param_1,
                         *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x28));
            return;
          }
LAB_068f9bb4:
          FUN_0708d63c(local_70,0);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
        }
        do {
          uVar14 = FUN_07c2e6c0(lVar17,param_1 + 0x1c,0);
          if ((uVar14 & 1) == 0) {
            lVar12 = FUN_07c2e5a4(lVar17,0x3ea,2,0,0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            auVar22 = FUN_071f1178(lVar12,0,0);
            local_70 = auVar22;
            uVar14 = FUN_0708d5f0(local_70,0);
            if ((uVar14 & 1) == 0) {
              *param_1 = 2;
              *(undefined1 (*) [16])(param_1 + 0x24) = local_70;
              thunk_FUN_03d1023c(param_1 + 0x24,0);
              lVar17 = *(long *)(param_2 + 0x20);
              if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                lVar17 = FUN_03d8f26c();
              }
              FUN_04e29b3c(param_1 + 2,local_70,param_1,
                           *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x28));
              return;
            }
LAB_068f9c14:
            FUN_0708d63c(local_70,0);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
          }
          *(undefined4 *)(lVar17 + 0x90) = 0;
          do {
            puVar16 = param_1 + 0x1c;
            bVar2 = (byte)*puVar16;
            if (1 < bVar2 - 9) {
              if (bVar2 == 0) {
                *(undefined1 *)puVar16 = *(undefined1 *)(lVar17 + 0x70);
              }
              else if (bVar2 == 8) {
                local_110 = *(undefined8 *)(param_1 + 0x20);
                uStack_118 = *(ulong *)(param_1 + 0x1e);
                local_120 = *(undefined8 *)puVar16;
                local_c0 = local_120;
                uStack_b8 = uStack_118;
                local_b0 = local_110;
                lVar12 = FUN_07c2e234(lVar17,&local_120,*(undefined8 *)(param_1 + 0xc),0);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03d2d548();
                }
                auVar22 = FUN_071f1178(lVar12,0,0);
                local_70 = auVar22;
                uVar14 = FUN_0708d5f0(local_70,0);
                if ((uVar14 & 1) == 0) {
                  *param_1 = 4;
                  *(undefined1 (*) [16])(param_1 + 0x24) = local_70;
                  thunk_FUN_03d1023c(param_1 + 0x24,0);
                  lVar17 = *(long *)(param_2 + 0x20);
                  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                    lVar17 = FUN_03d8f26c();
                  }
                  FUN_04e29b3c(param_1 + 2,local_70,param_1,
                               *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x28));
                  return;
                }
                goto LAB_068f9cf8;
              }
              if (*(long *)(param_1 + 0x1e) != 0) {
                puVar1 = param_1 + 0x12;
                iVar9 = FUN_05d209c8(puVar1,*(undefined8 *)puVar7);
                if (iVar9 != 0) {
                  param_1[0x22] = 0;
                  if (*(int *)(lVar17 + 0x8c) < 1) {
                    uVar11 = 0;
                    goto LAB_068fa410;
                  }
                  uVar10 = FUN_05d209c8(puVar1,*(undefined8 *)puVar7);
                  uVar19 = *(undefined8 *)(param_1 + 0x1e);
                  iVar9 = *(int *)(lVar17 + 0x8c);
                  if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
                    thunk_FUN_03db619c();
                  }
                  uVar19 = FUN_07179478(uVar19,(long)iVar9,0);
                  uVar11 = FUN_0717946c(uVar10,uVar19,0);
                  auVar22 = FUN_05d33244(lVar17 + 0x38,*(undefined8 *)PTR_DAT_091ff4f8);
                  uVar6 = *(uint *)(lVar17 + 0x88);
                  lVar12 = *(long *)PTR_DAT_091d7258;
                  local_80 = auVar22;
                  if ((auVar22._8_4_ < uVar6) || (auVar22._8_4_ - uVar6 < uVar11)) {
                    FUN_0719919c(0);
                  }
                  uVar19 = local_80._0_8_;
                  if ((*(byte *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
                    FUN_03d8f26c();
                  }
                  local_80._0_8_ = uVar19 + (long)(int)uVar6;
                  local_80._8_8_ = (ulong)uVar11;
                  auVar22 = FUN_05d33244(puVar1,*(undefined8 *)PTR_DAT_091ff4f8);
                  FUN_062bc3c0(local_80,auVar22._0_8_,auVar22._8_8_,*(undefined8 *)PTR_DAT_091ff500)
                  ;
                  FUN_07c2e904(lVar17,(ulong)uVar11,0);
                  uVar11 = param_1[0x22] + uVar11;
                  goto LAB_068fa40c;
                }
              }
              uStack_b8 = *(ulong *)(param_1 + 0x1e);
              local_c0 = *(undefined8 *)puVar16;
              local_b0 = *(undefined8 *)(param_1 + 0x20);
              *(undefined8 *)(lVar17 + 0x80) = local_b0;
              *(ulong *)(lVar17 + 0x78) = uStack_b8;
              *(undefined8 *)(lVar17 + 0x70) = local_c0;
              uVar11 = param_1[0x1c];
              if (*(char *)((long)param_1 + 0x71) == '\0') {
                bVar8 = false;
              }
              else {
                bVar8 = *(long *)(param_1 + 0x1e) == 0;
              }
              lVar17 = *(long *)(param_2 + 0x20);
              if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                lVar17 = FUN_03d8f26c();
              }
              uVar19 = FUN_07c2f3d0(param_1 + 0x10,0,(char)uVar11 != '\x01',bVar8,0,0,
                                    *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x50));
              goto LAB_068fa198;
            }
            local_f0 = *(undefined8 *)(param_1 + 0x20);
            uStack_f8 = *(ulong *)(param_1 + 0x1e);
            local_100 = *(undefined8 *)puVar16;
            local_c0 = local_100;
            uStack_b8 = uStack_f8;
            local_b0 = local_f0;
            lVar12 = FUN_07c2e44c(lVar17,&local_100,*(undefined8 *)(param_1 + 0xc),0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            auVar22 = FUN_071f1178(lVar12,0,0);
            local_70 = auVar22;
            uVar14 = FUN_0708d5f0(local_70,0);
            if ((uVar14 & 1) == 0) {
              *param_1 = 3;
              *(undefined1 (*) [16])(param_1 + 0x24) = local_70;
              thunk_FUN_03d1023c(param_1 + 0x24,0);
              lVar17 = *(long *)(param_2 + 0x20);
              if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                lVar17 = FUN_03d8f26c();
              }
              FUN_04e29b3c(param_1 + 2,local_70,param_1,
                           *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x28));
              return;
            }
LAB_068f9c8c:
            FUN_0708d63c(local_70,0);
switchD_068f9998_default:
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            uVar20 = *(undefined8 *)(lVar17 + 0x70);
            uVar19 = *(undefined8 *)(lVar17 + 0x80);
            *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(lVar17 + 0x78);
            *(undefined8 *)(param_1 + 0x1c) = uVar20;
            *(undefined8 *)(param_1 + 0x20) = uVar19;
          } while (*(long *)(param_1 + 0x1e) != 0);
          iVar9 = 10;
          if (*(char *)(lVar17 + 0x18) != '\0') {
            iVar9 = 0xe;
          }
        } while (iVar9 <= *(int *)(lVar17 + 0x8c));
      } while (1 < *(int *)(lVar17 + 0x8c));
      lVar12 = FUN_07c2e9b4(lVar17,2,*(undefined8 *)(param_1 + 0xc),1,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      auVar22 = FUN_071f1178(lVar12,0,0);
      local_70 = auVar22;
      uVar14 = FUN_0708d5f0(local_70,0);
      if ((uVar14 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x24) = local_70;
        thunk_FUN_03d1023c(param_1 + 0x24,0);
        lVar17 = *(long *)(param_2 + 0x20);
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = FUN_03d8f26c();
        }
        FUN_04e29b3c(param_1 + 2,local_70,param_1,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x28));
        return;
      }
    } while( true );
  case 1:
    local_70 = *(undefined1 (*) [16])(param_1 + 0x24);
    uVar21 = 0xffffffff;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    *param_1 = 0xffffffff;
    goto LAB_068f9bb4;
  case 2:
    local_70 = *(undefined1 (*) [16])(param_1 + 0x24);
    uVar21 = 0xffffffff;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    *param_1 = 0xffffffff;
    goto LAB_068f9c14;
  case 3:
    local_70 = *(undefined1 (*) [16])(param_1 + 0x24);
    uVar21 = 0xffffffff;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    *param_1 = 0xffffffff;
    goto LAB_068f9c8c;
  case 4:
    local_70 = *(undefined1 (*) [16])(param_1 + 0x24);
    uVar21 = 0xffffffff;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    *param_1 = 0xffffffff;
LAB_068f9cf8:
    FUN_0708d63c(local_70,0);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar12 = *(long *)(param_2 + 0x20);
    uVar19 = *(undefined8 *)(lVar17 + 0x60);
    uVar20 = *(undefined8 *)(lVar17 + 0x68);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03d8f26c();
    }
    uVar19 = FUN_07c2f3d0(param_1 + 0x10,0,2,1,uVar19,uVar20,
                          *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x50));
    goto LAB_068fa198;
  case 5:
    uStack_88 = *(ulong *)(param_1 + 0x2a);
    local_90 = *(undefined8 *)(param_1 + 0x28);
    uVar21 = 0xffffffff;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    *param_1 = 0xffffffff;
    goto LAB_068fa3d0;
  case 6:
    local_70 = *(undefined1 (*) [16])(param_1 + 0x24);
    uVar21 = 0xffffffff;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    *param_1 = 0xffffffff;
    break;
  default:
    goto switchD_068f9998_default;
  }
LAB_068f9a40:
  FUN_0708d63c(local_70,0);
  goto TMPro_TweenRunner_<Start>d__2<FloatTween>__System_IDisposable_Dispose;
LAB_068fa40c:
  param_1[0x22] = uVar11;
LAB_068fa410:
  iVar9 = FUN_05d209c8(param_1 + 0x12,*(undefined8 *)puVar7);
  if ((iVar9 <= (int)uVar11) ||
     (uVar11 = param_1[0x22], *(long *)(param_1 + 0x1e) <= (long)(int)uVar11)) {
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    goto LAB_068fa454;
  }
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  plVar18 = *(long **)(lVar17 + 0x10);
  iVar9 = FUN_05d209c8(param_1 + 0x12,*(undefined8 *)puVar7);
  uVar19 = *(undefined8 *)(param_1 + 0x1e);
  if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  iVar9 = FUN_07179478((long)iVar9,uVar19,0);
  uVar4 = param_1[0x15];
  uVar5 = param_1[0x22];
  lVar12 = *(long *)PTR_DAT_091ff4e8;
  uVar6 = uVar4 & 0x7fffffff;
  if ((uVar6 < uVar11) || (uVar6 - uVar11 < iVar9 - uVar5)) {
    FUN_0719919c(0);
  }
  uVar19 = *(undefined8 *)(param_1 + 0x12);
  uVar6 = param_1[0x14];
  uStack_b8 = 0;
  if ((*(byte *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  local_c0 = uVar19;
  thunk_FUN_03d1023c(&local_c0,uVar19);
  uStack_b8 = CONCAT44(uVar4 & 0x80000000 | iVar9 - uVar5,uVar6 + uVar11);
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  auVar22 = (**(code **)(*plVar18 + 0x2f8))
                      (plVar18,local_c0,uStack_b8,*(undefined8 *)(param_1 + 0xc),
                       *(undefined8 *)(*plVar18 + 0x300));
  uStack_d8 = 0;
  lVar12 = *(long *)PTR_DAT_091ff508;
  if ((*(byte *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  local_e0 = auVar22._0_8_;
  thunk_FUN_03d1023c(&local_e0,auVar22._0_8_);
  uVar19 = local_e0;
  uVar14 = uStack_d8 >> 0x30;
  uStack_d8._0_6_ = auVar22._8_6_;
  uStack_d8 = CONCAT26((short)uVar14,(undefined6)uStack_d8) & 0xff00ffffffffffff;
  uVar14 = uStack_d8;
  local_c0 = 0;
  uStack_b8 = 0;
  if ((*(byte *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  uStack_b8 = uVar14;
  local_c0 = uVar19;
  thunk_FUN_03d1023c(&local_c0,0);
  uVar14 = uStack_b8;
  uVar19 = local_c0;
  if ((*(byte *)(*(long *)(*(long *)PTR_DAT_091ff4d0 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  local_c0 = uVar19;
  uStack_b8 = uVar14;
  thunk_FUN_03d1023c(&local_c0,0);
  local_90 = local_c0;
  uStack_88 = uStack_b8;
  lVar12 = *(long *)(*(long *)PTR_DAT_091ff4e0 + 0x20);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_03d8f26c();
  }
  uVar14 = FUN_0650f094(&local_90,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x10));
  if ((uVar14 & 1) == 0) {
    *param_1 = 5;
    *(ulong *)(param_1 + 0x2a) = uStack_88;
    *(undefined8 *)(param_1 + 0x28) = local_90;
    thunk_FUN_03d1023c(param_1 + 0x28,0);
    lVar17 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = FUN_03d8f26c();
    }
    FUN_04e29ab4(param_1 + 2,&local_90,param_1,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x60));
    return;
  }
LAB_068fa3d0:
  lVar12 = *(long *)(*(long *)PTR_DAT_091ff4d8 + 0x20);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_03d8f26c();
  }
  iVar9 = FUN_0650f1b0(&local_90,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x20));
  if (iVar9 < 1) goto LAB_068fa440;
  uVar11 = param_1[0x22] + iVar9;
  goto LAB_068fa40c;
LAB_068fa440:
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  UnityWebSocketSharp_Server_HttpRequestEventArgs__get_User(lVar17,1,0);
LAB_068fa454:
  if (*(char *)(lVar17 + 0x18) != '\0') {
    auVar22 = FUN_05d33244(param_1 + 0x12,*(undefined8 *)PTR_DAT_091ff4f8);
    uVar11 = param_1[0x22];
    lVar12 = *(long *)PTR_DAT_091d7258;
    local_80 = auVar22;
    if (auVar22._8_4_ < uVar11) {
      FUN_0719919c(0);
    }
    uVar19 = local_80._0_8_;
    if ((*(byte *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    uVar6 = param_1[0x20];
    uVar10 = *(undefined4 *)(lVar17 + 0x90);
    if (*(int *)(*(long *)PTR_DAT_091fbd40 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar10 = FUN_07c2ec68(uVar19,uVar11,uVar6,uVar10,0);
    *(undefined4 *)(lVar17 + 0x90) = uVar10;
  }
  *(long *)(param_1 + 0x1e) = *(long *)(param_1 + 0x1e) - (long)(int)param_1[0x22];
  if ((char)param_1[0x1c] == '\x01') {
    auVar22 = FUN_05d33244(param_1 + 0x12,*(undefined8 *)PTR_DAT_091ff4f8);
    uVar11 = param_1[0x22];
    lVar12 = *(long *)PTR_DAT_091d7258;
    local_80 = auVar22;
    if (auVar22._8_4_ < uVar11) {
      FUN_0719919c(0);
    }
    uVar19 = local_80._0_8_;
    if ((*(byte *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    if (*(char *)((long)param_1 + 0x71) == '\0') {
      bVar8 = false;
    }
    else {
      bVar8 = *(long *)(param_1 + 0x1e) == 0;
    }
    uVar20 = *(undefined8 *)(lVar17 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_091fbd40 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar14 = FUN_07c2edd0(uVar19,uVar11,bVar8,uVar20,0);
    if ((uVar14 & 1) == 0) {
      lVar12 = FUN_07c2e5a4(lVar17,0x3ef,2,0,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      auVar22 = FUN_071f1178(lVar12,0,0);
      local_70 = auVar22;
      uVar14 = FUN_0708d5f0(local_70,0);
      if ((uVar14 & 1) == 0) {
        *param_1 = 6;
        *(undefined1 (*) [16])(param_1 + 0x24) = local_70;
        thunk_FUN_03d1023c(param_1 + 0x24,0);
        lVar17 = *(long *)(param_2 + 0x20);
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = FUN_03d8f26c();
        }
        FUN_04e29b3c(param_1 + 2,local_70,param_1,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x28));
        return;
      }
      goto LAB_068f9a40;
    }
  }
TMPro_TweenRunner_<Start>d__2<FloatTween>__System_IDisposable_Dispose:
  local_b0 = *(undefined8 *)(param_1 + 0x20);
  uStack_b8 = *(ulong *)(param_1 + 0x1e);
  local_c0 = *(undefined8 *)(param_1 + 0x1c);
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  *(undefined8 *)(lVar17 + 0x80) = local_b0;
  *(ulong *)(lVar17 + 0x78) = uStack_b8;
  *(undefined8 *)(lVar17 + 0x70) = local_c0;
  uVar11 = param_1[0x1c];
  if (*(char *)((long)param_1 + 0x71) == '\0') {
    bVar8 = false;
  }
  else {
    bVar8 = *(long *)(param_1 + 0x1e) == 0;
  }
  lVar17 = *(long *)(param_2 + 0x20);
  uVar6 = param_1[0x22];
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = FUN_03d8f26c();
  }
  uVar19 = FUN_07c2f3d0(param_1 + 0x10,uVar6,(char)uVar11 != '\x01',bVar8,0,0,
                        *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x50));
LAB_068fa198:
  if ((int)uVar21 < 0) {
    FUN_071e0d78(param_1 + 0x16,0);
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *param_1 = 0xfffffffe;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  lVar17 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = FUN_03d8f26c();
  }
  FUN_062302e4(param_1 + 2,uVar19,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x70));
  return;
}


