/*
FUNCTION_NAME: Normal.Realtime.Serialization.SerializerResolver$$Register<Vector2,-Vector2Serializer>
ENTRY_POINT: 0464e048
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0464eeb4) */
/* WARNING: Removing unreachable block (ram,0x0464ef44) */
/* WARNING: Removing unreachable block (ram,0x0464ec78) */
/* WARNING: Removing unreachable block (ram,0x0464efe8) */
/* WARNING: Removing unreachable block (ram,0x0464effc) */
/* WARNING: Removing unreachable block (ram,0x0464f004) */
/* WARNING: Removing unreachable block (ram,0x0464f018) */

void Normal_Realtime_Serialization_SerializerResolver__Register<Vector2,_Vector2Serializer>
               (long *param_1,undefined4 param_2,long *****param_3)

{
  byte bVar1;
  undefined *puVar2;
  ulong __n;
  long *****ppppplVar3;
  long *****ppppplVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long ***ppplVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long ****pppplVar16;
  long ****pppplVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  int *piVar21;
  long ***ppplVar22;
  long ******__src;
  ulong uVar23;
  long ******__dest;
  void *__s;
  ulong uVar24;
  ulong uVar25;
  void *__s_00;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  long ****apppplStack_1d0 [3];
  void *local_1b8;
  undefined4 local_1ac;
  long local_1a8;
  ulong local_1a0;
  ulong local_198;
  long ****local_190;
  long ****pppplStack_188;
  long *****local_180;
  long *****ppppplStack_178;
  long ****local_170;
  void **ppvStack_168;
  ulong local_160;
  undefined8 uStack_158;
  ulong local_150;
  undefined8 uStack_148;
  long *****local_140;
  long *****ppppplStack_138;
  long *****local_130;
  long *****ppppplStack_128;
  ulong local_120;
  undefined8 uStack_118;
  long ****local_110;
  ulong local_108;
  undefined8 uStack_100;
  void *local_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  void *local_e0;
  ulong local_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  undefined8 uStack_c0;
  long ***local_b8;
  long ***local_b0;
  long ****local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  long *****local_90;
  long *****ppppplStack_88;
  int local_7c;
  long local_78;
  
  local_1a8 = tpidr_el0;
  local_78 = *(long *)(local_1a8 + 0x28);
  pppplVar16 = param_3[7];
  local_1ac = param_2;
  local_a8 = (long ****)param_3;
  if (pppplVar16 == (long ****)0x0) {
    FUN_03a8a718(PTR_DAT_08488550);
    FUN_03a8a718(PTR_DAT_08488568);
    pppplVar16 = param_3[7];
    if (pppplVar16 == (long ****)0x0) {
      FUN_03ac40ec(param_3);
      pppplVar16 = param_3[7];
    }
  }
  local_198 = (ulong)*(uint *)((long)pppplVar16[0xd] + 0xfc);
  uVar18 = *(uint *)((long)pppplVar16[0x12] + 0xfc);
  uVar24 = (ulong)uVar18;
  local_1a0 = (ulong)*(uint *)((long)pppplVar16[0x19] + 0xfc);
  if ((*(ushort *)((long)pppplVar16[0x12] + 0x135) & 1) == 0) {
    lVar10 = FUN_03ac4090();
    pppplVar16 = param_3[7];
    uVar18 = *(uint *)(lVar10 + 0xfc);
  }
  pppplVar17 = (long ****)((long)apppplStack_1d0 - ((ulong)(uVar18 + 0x10) + 0xf & 0x1fffffff0));
  ppplVar11 = pppplVar16[0x19];
  local_b0 = (long ***)pppplVar17;
  if ((*(ushort *)((long)ppplVar11 + 0x135) & 1) == 0) {
    ppplVar11 = (long ***)FUN_03ac4090();
  }
  __n = local_198;
  uVar20 = local_1a0;
  local_b8 = (long ***)
             ((long)pppplVar17 -
             ((ulong)(*(int *)((long)ppplVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0));
  uVar23 = local_198 + 0xf & 0x1fffffff0;
  __src = (long ******)((long)local_b8 - uVar23);
  __dest = (long ******)((long)__src - uVar23);
  uVar19 = uVar24 + 0xf & 0x1fffffff0;
  apppplStack_1d0[2] = (long ****)((long)__dest - uVar19);
  uVar25 = local_1a0 + 0xf & 0x1fffffff0;
  apppplStack_1d0[1] = (long ****)((long)apppplStack_1d0[2] - uVar25);
  local_c8 = 0;
  uStack_c0 = 0;
  __s = (void *)((long)apppplStack_1d0[1] - uVar19);
  local_d8 = 0;
  uStack_d0 = 0;
  local_e0 = __s;
  memset(__s,0,uVar24);
  local_f0 = 0;
  uStack_e8 = 0;
  __s_00 = (void *)((long)__s - uVar25);
  local_f8 = __s_00;
  memset(__s_00,0,uVar20);
  local_108 = 0;
  uStack_100 = 0;
  local_1b8 = (void *)((long)__s_00 - uVar23);
  local_110 = (long ****)0x0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = (long *****)0x0;
  ppppplStack_128 = (long *****)0x0;
  memset(local_1b8,0,__n);
  local_140 = (long *****)0x0;
  ppppplStack_138 = (long *****)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  uStack_158 = 0;
  if (param_1 == (long *)0x0) {
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar14 = thunk_FUN_03ac74bc();
    uVar15 = thunk_FUN_03af1434(PTR_DAT_08492c80);
    uVar15 = FUN_066af6a0(uVar14,uVar15,0);
    auVar28._8_8_ = local_a8;
    auVar28._0_8_ = uVar15;
    if (*(long *)(local_1a8 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar14,local_a8);
    }
  }
  else {
    ppplVar11 = (long ***)local_a8[7][1];
    if ((*(ushort *)((long)ppplVar11 + 0x135) & 1) == 0) {
      ppplVar11 = (long ***)FUN_03ac4090(ppplVar11);
    }
    lVar10 = thunk_FUN_03ac73c0(param_1,ppplVar11);
    if (lVar10 == 0) {
      ppplVar11 = (long ***)local_a8[7][2];
      if ((*(ushort *)((long)ppplVar11 + 0x135) & 1) == 0) {
        ppplVar11 = (long ***)FUN_03ac4090(ppplVar11);
      }
      plVar12 = (long *)thunk_FUN_03ac73c0(param_1,ppplVar11);
      if (plVar12 == (long *)0x0) {
        ppplVar11 = (long ***)local_a8[7][3];
        if ((*(ushort *)((long)ppplVar11 + 0x135) & 1) == 0) {
          ppplVar11 = (long ***)FUN_03ac4090();
        }
        lVar10 = *param_1;
        bVar1 = *(byte *)(lVar10 + 0x130);
        if ((bVar1 < *(byte *)(ppplVar11 + 0x26)) ||
           (*(long ****)(*(long *)(lVar10 + 200) + (ulong)*(byte *)(ppplVar11 + 0x26) * 8 + -8) !=
            ppplVar11)) {
          ppplVar11 = (long ***)local_a8[7][4];
          if ((*(ushort *)((long)ppplVar11 + 0x135) & 1) == 0) {
            ppplVar11 = (long ***)FUN_03ac4090();
            lVar10 = *param_1;
            bVar1 = *(byte *)(lVar10 + 0x130);
          }
          uVar24 = local_198;
          if ((bVar1 < *(byte *)(ppplVar11 + 0x26)) ||
             (*(long ****)(*(long *)(lVar10 + 200) + (ulong)*(byte *)(ppplVar11 + 0x26) * 8 + -8) !=
              ppplVar11)) {
            ppplVar11 = (long ***)local_a8[7][5];
            if ((*(ushort *)((long)ppplVar11 + 0x135) & 1) == 0) {
              ppplVar11 = (long ***)FUN_03ac4090(ppplVar11);
            }
            lVar10 = thunk_FUN_03ac73c0(param_1,ppplVar11);
            if (lVar10 == 0) {
              ppplVar11 = (long ***)local_a8[7][6];
              if ((*(ushort *)((long)ppplVar11 + 0x135) & 1) == 0) {
                ppplVar11 = (long ***)FUN_03ac4090(ppplVar11);
              }
              lVar10 = thunk_FUN_03ac73c0(param_1,ppplVar11);
              if (lVar10 == 0) {
                (*(code *)*local_a8[7][10])(&local_130,4,2,0);
                ppplVar11 = (long ***)*local_a8[7];
                if ((*(ushort *)((long)ppplVar11 + 0x135) & 1) == 0) {
                  ppplVar11 = (long ***)FUN_03ac4090(ppplVar11);
                }
                auVar29 = FUN_0351a5ac(0,ppplVar11,param_1);
                puVar2 = PTR_DAT_08488568;
                local_110 = auVar29._0_8_;
                pppplStack_188 = (long ****)&local_110;
                local_190 = (long ****)0x0;
                if ((long *****)local_110 == (long *****)0x0) {
                  uVar14 = 0;
                }
                else {
                  iVar8 = 4;
                  iVar9 = 0;
                  do {
                    pppplVar17 = local_110;
                    pppplVar16 = (long ****)*local_110;
                    uVar24 = (ulong)*(ushort *)((long)pppplVar16 + 0x12e);
                    if (uVar24 != 0) {
                      ppplVar11 = pppplVar16[0x16] + 1;
                      do {
                        if (ppplVar11[-1] == *(long ***)puVar2) {
                          pppplVar16 = pppplVar16 + (long)*(int *)ppplVar11 * 2 + 0x27;
                          goto LAB_0464ed48;
                        }
                        uVar24 = uVar24 - 1;
                        ppplVar11 = ppplVar11 + 2;
                      } while (uVar24 != 0);
                    }
                    pppplVar16 = (long ****)FUN_03ac43c4(local_110,*(long ***)puVar2,0);
LAB_0464ed48:
                    auVar28 = (*(code *)*pppplVar16)(pppplVar17,pppplVar16[1]);
                    pppplVar16 = local_110;
                    if ((auVar28._0_8_ & 1) == 0) {
                      FUN_0350b2a4(&local_190);
                      ppppplStack_178 = (long *****)&local_140;
                      local_180 = (long *****)0x0;
                      local_170 = (long ****)&local_a8;
                      ppppplStack_138 = ppppplStack_128;
                      local_140 = local_130;
                      (*(code *)*local_a8[7][10])(&local_150,iVar9,local_1ac,0);
                      (*(code *)*local_a8[7][0x22])
                                (local_130,ppppplStack_128,local_150,uStack_148,iVar9);
                      uStack_158 = uStack_148;
                      local_160 = local_150;
                      FUN_035221e8(&local_180);
                      local_a0 = local_160;
                      uStack_98 = uStack_158;
                      goto LAB_0464e498;
                    }
                    if ((long *****)local_110 == (long *****)0x0) {
                      if (*(long *)(local_1a8 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                        FUN_03a8a9c0();
                      }
                      goto LAB_0464f298;
                    }
                    ppplVar11 = (long ***)local_a8[7][0x1f];
                    if ((*(ushort *)((long)ppplVar11 + 0x135) & 1) == 0) {
                      ppplVar11 = (long ***)FUN_03ac4090(ppplVar11);
                    }
                    pppplVar17 = (long ****)*pppplVar16;
                    uVar24 = (ulong)*(ushort *)((long)pppplVar17 + 0x12e);
                    if (uVar24 != 0) {
                      ppplVar22 = pppplVar17[0x16] + 1;
                      do {
                        if ((long ***)ppplVar22[-1] == ppplVar11) {
                          pppplVar17 = pppplVar17 + (long)*(int *)ppplVar22 * 2 + 0x27;
                          goto LAB_0464edcc;
                        }
                        uVar24 = uVar24 - 1;
                        ppplVar22 = ppplVar22 + 2;
                      } while (uVar24 != 0);
                    }
                    pppplVar17 = (long ****)FUN_03ac43c4(pppplVar16,ppplVar11,0);
LAB_0464edcc:
                    ppplVar11 = pppplVar17[1];
                    local_90 = (long *****)__src;
                    (*(code *)ppplVar11[2])(ppplVar11[1],ppplVar11,pppplVar16,&local_90,__src);
                    memcpy(local_1b8,__src,local_198);
                    if (iVar9 == iVar8) {
                      ppppplStack_178 = (long *****)&local_140;
                      local_170 = (long ****)&local_a8;
                      local_180 = (long *****)0x0;
                      iVar8 = iVar9 << 1;
                      ppppplStack_138 = ppppplStack_128;
                      local_140 = local_130;
                      local_90 = (long *****)0x0;
                      ppppplStack_88 = (long *****)0x0;
                      FUN_051703e4(&local_90,iVar8,2,0,local_a8[7][10]);
                      ppppplVar6 = ppppplStack_88;
                      ppppplVar5 = local_90;
                      ppppplVar4 = ppppplStack_128;
                      ppppplVar3 = local_130;
                      uVar7 = (*(code *)*local_a8[7][0xf])(&local_130);
                      (*(code *)*local_a8[7][0x22])
                                (ppppplVar3,ppppplVar4,ppppplVar5,ppppplVar6,uVar7);
                      FUN_05170bb0(&local_140,local_a8[7][0x23]);
                      local_130 = ppppplVar5;
                      ppppplStack_128 = ppppplVar6;
                    }
                    memcpy(__src,local_1b8,local_198);
                    local_90 = (long *****)&local_7c;
                    ppplVar11 = (long ***)local_a8[7][0xe];
                    ppppplStack_88 = (long *****)__src;
                    local_7c = iVar9;
                    auVar28 = (*(code *)ppplVar11[2])
                                        (*ppplVar11,ppplVar11,&local_130,&local_90,__src);
                    auVar29._8_8_ = auVar28._8_8_;
                    auVar29._0_8_ = local_110;
                    uVar14 = auVar28._0_8_;
                    iVar9 = iVar9 + 1;
                  } while ((long *****)local_110 != (long *****)0x0);
                }
                local_110 = auVar29._0_8_;
                auVar28._8_8_ = auVar29._8_8_;
                auVar28._0_8_ = uVar14;
                if (*(long *)(local_1a8 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
              }
              else {
                ppplVar11 = (long ***)local_a8[7][6];
                if ((*(ushort *)((long)ppplVar11 + 0x135) & 1) == 0) {
                  ppplVar11 = (long ***)FUN_03ac4090(ppplVar11);
                }
                uVar7 = FUN_0351a5ac(0,ppplVar11,lVar10);
                (*(code *)*local_a8[7][10])(&local_120,uVar7,local_1ac,0);
                ppplVar11 = (long ***)*local_a8[7];
                if ((*(ushort *)((long)ppplVar11 + 0x135) & 1) == 0) {
                  ppplVar11 = (long ***)FUN_03ac4090(ppplVar11);
                }
                auVar26 = FUN_0351a5ac(0,ppplVar11,lVar10);
                puVar2 = PTR_DAT_08488568;
                local_110 = auVar26._0_8_;
                ppppplStack_88 = &local_110;
                local_90 = (long *****)0x0;
                uVar14 = 0;
                if ((long *****)local_110 != (long *****)0x0) {
                  iVar8 = 0;
                  do {
                    pppplVar17 = local_110;
                    pppplVar16 = (long ****)*local_110;
                    uVar20 = (ulong)*(ushort *)((long)pppplVar16 + 0x12e);
                    if (uVar20 != 0) {
                      ppplVar11 = pppplVar16[0x16] + 1;
                      do {
                        if (ppplVar11[-1] == *(long ***)puVar2) {
                          pppplVar16 = pppplVar16 + (long)*(int *)ppplVar11 * 2 + 0x27;
                          goto LAB_0464e708;
                        }
                        uVar20 = uVar20 - 1;
                        ppplVar11 = ppplVar11 + 2;
                      } while (uVar20 != 0);
                    }
                    pppplVar16 = (long ****)FUN_03ac43c4(local_110,*(long ***)puVar2,0);
LAB_0464e708:
                    auVar28 = (*(code *)*pppplVar16)(pppplVar17,pppplVar16[1]);
                    pppplVar16 = local_110;
                    if ((auVar28._0_8_ & 1) == 0) {
                      FUN_0350b2a4(&local_90);
                      local_a0 = local_120;
                      uStack_98 = uStack_118;
                      goto LAB_0464e498;
                    }
                    if ((long *****)local_110 == (long *****)0x0) {
                      if (*(long *)(local_1a8 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                        FUN_03a8a9c0();
                      }
                      goto LAB_0464f298;
                    }
                    ppplVar11 = (long ***)local_a8[7][0x1f];
                    if ((*(ushort *)((long)ppplVar11 + 0x135) & 1) == 0) {
                      ppplVar11 = (long ***)FUN_03ac4090(ppplVar11);
                    }
                    pppplVar17 = (long ****)*pppplVar16;
                    uVar20 = (ulong)*(ushort *)((long)pppplVar17 + 0x12e);
                    if (uVar20 != 0) {
                      ppplVar22 = pppplVar17[0x16] + 1;
                      do {
                        if ((long ***)ppplVar22[-1] == ppplVar11) {
                          pppplVar17 = pppplVar17 + (long)*(int *)ppplVar22 * 2 + 0x27;
                          goto LAB_0464e78c;
                        }
                        uVar20 = uVar20 - 1;
                        ppplVar22 = ppplVar22 + 2;
                      } while (uVar20 != 0);
                    }
                    pppplVar17 = (long ****)FUN_03ac43c4(pppplVar16,ppplVar11,0);
LAB_0464e78c:
                    ppplVar11 = pppplVar17[1];
                    local_180 = (long *****)__src;
                    (*(code *)ppplVar11[2])(ppplVar11[1],ppplVar11,pppplVar16,&local_180,__src);
                    memcpy(__dest,__src,uVar24);
                    ppplVar11 = (long ***)local_a8[7][0xe];
                    local_190 = (long ****)CONCAT44(local_190._4_4_,iVar8);
                    local_180 = &local_190;
                    ppppplStack_178 = (long *****)__dest;
                    auVar28 = (*(code *)ppplVar11[2])
                                        (*ppplVar11,ppplVar11,&local_120,&local_180,__dest);
                    auVar26._8_8_ = auVar28._8_8_;
                    auVar26._0_8_ = local_110;
                    uVar14 = auVar28._0_8_;
                    iVar8 = iVar8 + 1;
                  } while ((long *****)local_110 != (long *****)0x0);
                }
                auVar28._8_8_ = auVar26._8_8_;
                auVar28._0_8_ = uVar14;
                local_110 = auVar26._0_8_;
                if (*(long *)(local_1a8 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
              }
            }
            else {
              ppplVar11 = (long ***)local_a8[7][5];
              if ((*(ushort *)((long)ppplVar11 + 0x135) & 1) == 0) {
                ppplVar11 = (long ***)FUN_03ac4090(ppplVar11);
              }
              uVar7 = FUN_0351a5ac(0,ppplVar11,lVar10);
              (*(code *)*local_a8[7][10])(&local_108,uVar7,local_1ac,0);
              ppplVar11 = (long ***)*local_a8[7];
              if ((*(ushort *)((long)ppplVar11 + 0x135) & 1) == 0) {
                ppplVar11 = (long ***)FUN_03ac4090(ppplVar11);
              }
              auVar27 = FUN_0351a5ac(0,ppplVar11,lVar10);
              puVar2 = PTR_DAT_08488568;
              local_110 = auVar27._0_8_;
              ppppplStack_88 = &local_110;
              local_90 = (long *****)0x0;
              uVar14 = 0;
              if ((long *****)local_110 != (long *****)0x0) {
                iVar8 = 0;
                do {
                  pppplVar17 = local_110;
                  pppplVar16 = (long ****)*local_110;
                  uVar20 = (ulong)*(ushort *)((long)pppplVar16 + 0x12e);
                  if (uVar20 != 0) {
                    ppplVar11 = pppplVar16[0x16] + 1;
                    do {
                      if (ppplVar11[-1] == *(long ***)puVar2) {
                        pppplVar16 = pppplVar16 + (long)*(int *)ppplVar11 * 2 + 0x27;
                        goto LAB_0464e888;
                      }
                      uVar20 = uVar20 - 1;
                      ppplVar11 = ppplVar11 + 2;
                    } while (uVar20 != 0);
                  }
                  pppplVar16 = (long ****)FUN_03ac43c4(local_110,*(long ***)puVar2,0);
LAB_0464e888:
                  auVar28 = (*(code *)*pppplVar16)(pppplVar17,pppplVar16[1]);
                  pppplVar16 = local_110;
                  if ((auVar28._0_8_ & 1) == 0) {
                    FUN_0350b2a4(&local_90);
                    local_a0 = local_108;
                    uStack_98 = uStack_100;
                    goto LAB_0464e498;
                  }
                  if ((long *****)local_110 == (long *****)0x0) {
                    if (*(long *)(local_1a8 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                      FUN_03a8a9c0();
                    }
                    goto LAB_0464f298;
                  }
                  ppplVar11 = (long ***)local_a8[7][0x1f];
                  if ((*(ushort *)((long)ppplVar11 + 0x135) & 1) == 0) {
                    ppplVar11 = (long ***)FUN_03ac4090(ppplVar11);
                  }
                  pppplVar17 = (long ****)*pppplVar16;
                  uVar20 = (ulong)*(ushort *)((long)pppplVar17 + 0x12e);
                  if (uVar20 != 0) {
                    ppplVar22 = pppplVar17[0x16] + 1;
                    do {
                      if ((long ***)ppplVar22[-1] == ppplVar11) {
                        pppplVar17 = pppplVar17 + (long)*(int *)ppplVar22 * 2 + 0x27;
                        goto LAB_0464e90c;
                      }
                      uVar20 = uVar20 - 1;
                      ppplVar22 = ppplVar22 + 2;
                    } while (uVar20 != 0);
                  }
                  pppplVar17 = (long ****)FUN_03ac43c4(pppplVar16,ppplVar11,0);
LAB_0464e90c:
                  ppplVar11 = pppplVar17[1];
                  local_180 = (long *****)__src;
                  (*(code *)ppplVar11[2])(ppplVar11[1],ppplVar11,pppplVar16,&local_180,__src);
                  memcpy(__dest,__src,uVar24);
                  ppplVar11 = (long ***)local_a8[7][0xe];
                  local_190 = (long ****)CONCAT44(local_190._4_4_,iVar8);
                  local_180 = &local_190;
                  ppppplStack_178 = (long *****)__dest;
                  auVar28 = (*(code *)ppplVar11[2])
                                      (*ppplVar11,ppplVar11,&local_108,&local_180,__dest);
                  auVar27._8_8_ = auVar28._8_8_;
                  auVar27._0_8_ = local_110;
                  uVar14 = auVar28._0_8_;
                  iVar8 = iVar8 + 1;
                } while ((long *****)local_110 != (long *****)0x0);
              }
              local_110 = auVar27._0_8_;
              auVar28._8_8_ = auVar27._8_8_;
              auVar28._0_8_ = uVar14;
              if (*(long *)(local_1a8 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
            }
            goto LAB_0464f298;
          }
          uVar7 = (*(code *)*local_a8[7][0x17])(param_1);
          (*(code *)*local_a8[7][10])(&local_f0,uVar7,local_1ac,0);
          pppplVar16 = apppplStack_1d0[1];
          ppplVar11 = (long ***)local_a8[7][0x18];
          local_180 = (long *****)apppplStack_1d0[1];
          (*(code *)ppplVar11[2])(*ppplVar11,ppplVar11,param_1,&local_180,apppplStack_1d0[1]);
          memcpy(__s_00,pppplVar16,local_1a0);
          uVar24 = local_198;
          ppppplStack_178 = &local_a8;
          local_170 = &local_b8;
          local_180 = (long *****)0x0;
          ppvStack_168 = &local_f8;
          iVar8 = 0;
          while (uVar20 = (*(code *)*local_a8[7][0x1c])(__s_00), (uVar20 & 1) != 0) {
            ppplVar11 = (long ***)local_a8[7][0x1a];
            local_90 = (long *****)__src;
            (*(code *)ppplVar11[2])(*ppplVar11,ppplVar11,local_f8,&local_90,__src);
            memcpy(__dest,__src,uVar24);
            ppplVar11 = (long ***)local_a8[7][0xe];
            local_190 = (long ****)CONCAT44(local_190._4_4_,iVar8);
            local_90 = &local_190;
            ppppplStack_88 = (long *****)__dest;
            (*(code *)ppplVar11[2])(*ppplVar11,ppplVar11,&local_f0,&local_90,__dest);
            iVar8 = iVar8 + 1;
            __s_00 = local_f8;
          }
          pppplVar16 = (long ****)local_a8[7];
          ppplVar11 = pppplVar16[0x19];
          if ((*(ushort *)((long)ppplVar11 + 0x135) & 1) == 0) {
            ppplVar11 = (long ***)FUN_03ac4090();
            pppplVar16 = (long ****)local_a8[7];
          }
          FUN_03a8b394(ppplVar11,pppplVar16[0x1d],*local_170,*ppvStack_168,0,0);
          local_a0 = local_f0;
          uStack_98 = uStack_e8;
        }
        else {
          uVar7 = (*(code *)*local_a8[7][0x10])(param_1);
          (*(code *)*local_a8[7][10])(&local_d8,uVar7,local_1ac,0);
          pppplVar16 = apppplStack_1d0[2];
          ppplVar11 = (long ***)local_a8[7][0x11];
          local_180 = (long *****)apppplStack_1d0[2];
          (*(code *)ppplVar11[2])(*ppplVar11,ppplVar11,param_1,&local_180,apppplStack_1d0[2]);
          memcpy(__s,pppplVar16,uVar24);
          uVar24 = local_198;
          ppppplStack_178 = &local_a8;
          local_170 = &local_b0;
          local_180 = (long *****)0x0;
          ppvStack_168 = &local_e0;
          iVar8 = 0;
          while (uVar20 = (*(code *)*local_a8[7][0x15])(__s), (uVar20 & 1) != 0) {
            ppplVar11 = (long ***)local_a8[7][0x13];
            local_90 = (long *****)__src;
            (*(code *)ppplVar11[2])(*ppplVar11,ppplVar11,local_e0,&local_90,__src);
            memcpy(__dest,__src,uVar24);
            ppplVar11 = (long ***)local_a8[7][0xe];
            local_190 = (long ****)CONCAT44(local_190._4_4_,iVar8);
            local_90 = &local_190;
            ppppplStack_88 = (long *****)__dest;
            (*(code *)ppplVar11[2])(*ppplVar11,ppplVar11,&local_d8,&local_90,__dest);
            iVar8 = iVar8 + 1;
            __s = local_e0;
          }
          pppplVar16 = (long ****)local_a8[7];
          ppplVar11 = pppplVar16[0x12];
          if ((*(ushort *)((long)ppplVar11 + 0x135) & 1) == 0) {
            ppplVar11 = (long ***)FUN_03ac4090();
            pppplVar16 = (long ****)local_a8[7];
          }
          FUN_03a8b394(ppplVar11,pppplVar16[0x16],*local_170,*ppvStack_168,0,0);
          local_a0 = local_d8;
          uStack_98 = uStack_d0;
        }
      }
      else {
        ppplVar11 = (long ***)local_a8[7][5];
        if ((*(ushort *)((long)ppplVar11 + 0x135) & 1) == 0) {
          ppplVar11 = (long ***)FUN_03ac4090(ppplVar11);
        }
        lVar10 = *plVar12;
        uVar24 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar24 != 0) {
          piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long ****)(piVar21 + -2) == ppplVar11) {
              puVar13 = (undefined8 *)(lVar10 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_0464e35c;
            }
            uVar24 = uVar24 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar24 != 0);
        }
        puVar13 = (undefined8 *)FUN_03ac43c4(plVar12,ppplVar11,0);
LAB_0464e35c:
        uVar7 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        (*(code *)*local_a8[7][10])(&local_c8,uVar7,local_1ac,0);
        iVar8 = (*(code *)*local_a8[7][0xf])(&local_c8);
        local_a0 = local_c8;
        uStack_98 = uStack_c0;
        if (0 < iVar8) {
          iVar8 = 0;
          do {
            ppplVar11 = (long ***)local_a8[7][2];
            if ((*(ushort *)((long)ppplVar11 + 0x135) & 1) == 0) {
              ppplVar11 = (long ***)FUN_03ac4090(ppplVar11);
            }
            lVar10 = *plVar12;
            uVar24 = (ulong)*(ushort *)(lVar10 + 0x12e);
            local_90._0_4_ = iVar8;
            if (uVar24 != 0) {
              piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long ****)(piVar21 + -2) == ppplVar11) {
                  lVar10 = lVar10 + (long)*piVar21 * 0x10 + 0x138;
                  goto LAB_0464e424;
                }
                uVar24 = uVar24 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar24 != 0);
            }
            lVar10 = FUN_03ac43c4(plVar12,ppplVar11,0);
LAB_0464e424:
            lVar10 = *(long *)(lVar10 + 8);
            local_180 = (long *****)&local_90;
            ppppplStack_178 = (long *****)__src;
            (**(code **)(lVar10 + 0x10))
                      (*(undefined8 *)(lVar10 + 8),lVar10,plVar12,&local_180,__src);
            ppplVar11 = (long ***)local_a8[7][0xe];
            local_90 = (long *****)CONCAT44(local_90._4_4_,iVar8);
            local_180 = (long *****)&local_90;
            ppppplStack_178 = (long *****)__src;
            (*(code *)ppplVar11[2])(*ppplVar11,ppplVar11,&local_c8,&local_180,__src);
            iVar8 = iVar8 + 1;
            iVar9 = (*(code *)*local_a8[7][0xf])(&local_c8);
            local_a0 = local_c8;
            uStack_98 = uStack_c0;
          } while (iVar8 < iVar9);
        }
      }
    }
    else {
      local_a0 = 0;
      uStack_98 = 0;
      FUN_05170558(&local_a0,lVar10,local_1ac,local_a8[7][8]);
    }
LAB_0464e498:
    auVar28._8_8_ = uStack_98;
    auVar28._0_8_ = local_a0;
    if (*(long *)(local_1a8 + 0x28) == local_78) {
      return;
    }
  }
LAB_0464f298:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar28._0_8_,auVar28._8_8_);
}


