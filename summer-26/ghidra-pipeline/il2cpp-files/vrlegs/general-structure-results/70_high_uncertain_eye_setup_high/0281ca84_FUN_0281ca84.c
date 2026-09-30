/*
FUNCTION_NAME: FUN_0281ca84
ENTRY_POINT: 0281ca84
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_12;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_0281ca84(char *param_1,uint param_2,int param_3,undefined1 (*param_4) [16])

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  ushort uVar5;
  short sVar6;
  long lVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined2 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  bool bVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  long *plVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulong local_d8;
  int local_cc;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined2 local_b0 [2];
  undefined2 local_ac [2];
  undefined2 local_a8 [2];
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  pcVar9 = param_1;
  if ((DAT_041253a4 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc5358);
    FUN_01ab69ac(PTR_DAT_03cfe4f8);
    FUN_01ab69ac(PTR_DAT_03cbfdd8);
    FUN_01ab69ac(PTR_DAT_03cc1820);
    FUN_01ab69ac(PTR_DAT_03cc1828);
    FUN_01ab69ac(PTR_DAT_03cbffe8);
    FUN_01ab69ac(PTR_DAT_03cfe590);
    FUN_01ab69ac(PTR_DAT_03cbfff0);
    FUN_01ab69ac(PTR_DAT_03cfe4f0);
    pcVar9 = (char *)FUN_01ab69ac(PTR_DAT_03cc1790);
    DAT_041253a4 = 1;
  }
  local_ac[0] = 0;
  local_b0[0] = 0;
  local_b8 = 0;
  local_bc = 0;
  local_80 = 0;
  uStack_78 = 0;
  *(undefined8 *)*param_4 = 0;
  *(undefined8 *)(*param_4 + 8) = 0;
  if (param_3 == 0) {
LAB_0281cb94:
    pcVar9 = (char *)0x3;
    goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
  }
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar17 = *(ulong *)(param_1 + 0x18);
  if ((uint)uVar17 <= param_2) goto LAB_0281d5e4;
  sVar4 = *(short *)(param_1 + (long)(int)param_2 * 2 + 0x20);
  if (sVar4 == 0x2d) {
    param_3 = param_3 + -1;
    if (param_3 == 0) goto LAB_0281cb94;
    param_2 = param_2 + 1;
  }
  uVar2 = param_2 + param_3;
  local_a4 = 0;
  local_a8[0] = 0;
  uVar26 = uVar2;
  uVar25 = uVar2;
  if ((int)param_2 < (int)uVar2) {
    if (param_2 < (uint)uVar17) {
      local_cc = 0;
      local_d8 = 0;
      uVar1 = param_2 + 1;
      iVar19 = 0;
      uVar18 = 0;
      iVar21 = 0;
      plVar13 = (long *)PTR_DAT_03cbfff0;
      plVar20 = (long *)PTR_DAT_03cfe4f0;
      uVar24 = param_2;
      do {
        uVar5 = *(ushort *)(param_1 + (long)(int)uVar24 * 2 + 0x20);
        uVar16 = (uint)uVar17;
        if ((uVar5 == 0x65) || (uVar5 == 0x45)) {
LAB_0281ccdc:
          pcVar9 = (char *)0x3;
          if ((uVar24 == param_2) || (uVar24 == uVar25))
          goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
          uVar23 = uVar24 + 1;
          if (uVar23 == uVar2) goto LAB_0281cb94;
          uVar3 = uVar24;
          if ((int)uVar2 <= (int)uVar25) {
            uVar3 = uVar26;
          }
          if (uVar16 <= uVar23) break;
          if (*(short *)(param_1 + (long)(int)uVar23 * 2 + 0x20) == 0x2b) {
            bVar15 = false;
            uVar23 = uVar24 + 2;
          }
          else if (*(short *)(param_1 + (long)(int)uVar23 * 2 + 0x20) == 0x2d) {
            uVar23 = uVar24 + 2;
            bVar15 = true;
          }
          else {
            bVar15 = false;
          }
          uVar24 = uVar23;
          if ((int)uVar23 < (int)uVar2) {
            iVar22 = iVar21;
            uVar26 = uVar23;
            if (uVar23 <= uVar16) {
              uVar26 = uVar16;
            }
            do {
              if (uVar26 == uVar23) goto LAB_0281d5e4;
              if (9 < *(ushort *)(param_1 + (long)(int)uVar23 * 2 + 0x20) - 0x30) goto LAB_0281cb94;
              iVar21 = (uint)*(ushort *)(param_1 + (long)(int)uVar23 * 2 + 0x20) + iVar22 * 10 +
                       -0x30;
              uVar23 = uVar23 + 1;
              if (iVar21 <= iVar22) {
                iVar21 = iVar22;
              }
              iVar22 = iVar21;
              uVar24 = uVar2;
            } while (uVar2 != uVar23);
          }
          iVar22 = -iVar21;
          uVar26 = uVar3;
          if (!bVar15) {
            iVar22 = iVar21;
          }
        }
        else {
          uVar23 = (uint)uVar5;
          iVar22 = iVar21;
          if (uVar23 == 0x2e) {
            if (uVar24 == param_2) goto LAB_0281cb94;
          }
          else {
            if (9 < uVar23 - 0x30) goto LAB_0281cb94;
            if ((uVar24 != param_2 || uVar23 != 0x30) || (uVar24 = uVar2, param_3 == 1)) {
              if (0x1c < local_cc) {
LAB_0281cf54:
                lVar11 = *(long *)(*plVar20 + 0x20);
                if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                  lVar11 = FUN_01a46ff8();
                }
                pcVar9 = (char *)thunk_FUN_01a59484(&local_a4,
                                                    *(undefined8 *)
                                                     (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80
                                                     ));
                if (*pcVar9 == '\0') {
                  local_90 = CONCAT62(local_90._2_6_,uVar5);
                  pcVar9 = (char *)FUN_02241190(&local_a4,&local_90,*(undefined8 *)PTR_DAT_03cfe590)
                  ;
                }
                iVar19 = iVar19 + 1;
                plVar13 = (long *)PTR_DAT_03cbfff0;
                plVar20 = (long *)PTR_DAT_03cfe4f0;
                goto LAB_0281cd98;
              }
              if (local_cc == 0x1c) {
                local_ac[0] = local_a8[0];
                lVar11 = *(long *)(*plVar13 + 0x20);
                if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                  lVar11 = FUN_01a46ff8();
                }
                pcVar9 = (char *)thunk_FUN_01a59484(local_ac,*(undefined8 *)
                                                              (*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                        8) + 0x80));
                if (*pcVar9 == '\0') {
                  if (local_d8 < 0x6df37f675ef6eae0) {
                    if (local_d8 == 0x6df37f675ef6eadf) {
                      if (uVar18 < 0x151fa39a) {
                        if (uVar18 == 0x151fa399) {
                          bVar15 = 0x35 < uVar23;
                        }
                        else {
                          bVar15 = false;
                        }
                      }
                      else {
                        bVar15 = true;
                      }
                    }
                    else {
                      bVar15 = false;
                    }
                  }
                  else {
                    bVar15 = true;
                  }
                  local_90 = CONCAT71(local_90._1_7_,bVar15);
                  FUN_02241190(local_a8,&local_90,*(undefined8 *)PTR_DAT_03cbffe8);
                  puVar10 = local_b0;
                  local_b0[0] = local_a8[0];
                  uVar12 = *(undefined8 *)PTR_DAT_03cbfdd8;
                }
                else {
                  puVar10 = local_ac;
                  uVar12 = *(undefined8 *)PTR_DAT_03cbfdd8;
                }
                pcVar9 = (char *)FUN_01ba9478(puVar10,&local_90,uVar12);
                plVar13 = (long *)PTR_DAT_03cbfff0;
                plVar20 = (long *)PTR_DAT_03cfe4f0;
                if ((char)local_90 != '\0') goto LAB_0281cf54;
LAB_0281cfd0:
                uVar18 = ((ulong)uVar5 + uVar18 * 10) - 0x30;
              }
              else {
                if (0x12 < local_cc) goto LAB_0281cfd0;
                local_d8 = ((ulong)uVar5 + local_d8 * 10) - 0x30;
              }
              local_cc = local_cc + 1;
              goto LAB_0281cd98;
            }
            if (uVar16 <= uVar1) break;
            sVar6 = *(short *)(param_1 + (long)(int)uVar1 * 2 + 0x20);
            uVar24 = uVar1;
            if (sVar6 != 0x2e) {
              if ((sVar6 == 0x45) || (sVar6 == 0x65)) goto LAB_0281ccdc;
              goto LAB_0281cb94;
            }
          }
          pcVar9 = (char *)0x3;
          if ((uVar25 != uVar2) || (uVar25 = uVar24 + 1, uVar25 == uVar2))
          goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
        }
LAB_0281cd98:
        iVar21 = iVar22;
        uVar24 = uVar24 + 1;
        if ((int)uVar2 <= (int)uVar24) goto LAB_0281d004;
        uVar17 = (ulong)*(uint *)(param_1 + 0x18);
      } while (uVar24 < *(uint *)(param_1 + 0x18));
    }
LAB_0281d5e4:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44(pcVar9);
  }
  iVar19 = 0;
  local_cc = 0;
  uVar18 = 0;
  local_d8 = 0;
  iVar21 = 0;
LAB_0281d004:
  puVar8 = PTR_DAT_03cc5358;
  if (*(int *)(*(long *)PTR_DAT_03cc5358 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  iVar19 = iVar21 + iVar19 + (uVar25 - uVar26);
  auVar27 = FUN_027d361c(local_d8,0);
  if (local_cc + -0x13 == 0 || local_cc < 0x13) {
    *(long *)*param_4 = auVar27._0_8_;
  }
  else {
    local_90 = 0;
    uStack_88 = 0;
    FUN_027cf91c(&local_90,1,0,0,0,local_cc + -0x13,0);
    auVar27 = FUN_027d3e50(auVar27._0_8_,auVar27._8_8_,local_90,uStack_88,0);
    auVar28 = FUN_027d361c(uVar18,0);
    auVar27 = FUN_027d3c38(auVar27._0_8_,auVar27._8_8_,auVar28._0_8_,auVar28._8_8_,0);
    *(long *)*param_4 = auVar27._0_8_;
  }
  uVar12 = auVar27._8_8_;
  uVar14 = auVar27._0_8_;
  *(undefined8 *)(*param_4 + 8) = uVar12;
  if (iVar19 < 1) {
    local_bc = local_a4;
    lVar11 = *(long *)(*(long *)PTR_DAT_03cfe4f0 + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01a46ff8();
    }
    pcVar9 = (char *)thunk_FUN_01a59484(&local_bc,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
    if (*pcVar9 == '\0') {
      local_b8 = 0;
    }
    else {
      FUN_01ba9478(&local_bc,&local_90,*(undefined8 *)PTR_DAT_03cfe4f8);
      uVar5 = (ushort)local_90;
      local_90 = 0;
      local_a0 = CONCAT44(local_a0._4_4_,(uint)uVar5);
      FUN_02241190(&local_90,&local_a0,*(undefined8 *)PTR_DAT_03cc1828);
      local_b8 = local_90;
    }
    FUN_01ba9478(&local_b8,&local_90,*(undefined8 *)PTR_DAT_03cc1820);
    iVar21 = (int)local_90;
    lVar11 = *(long *)(*(long *)PTR_DAT_03cc1790 + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01a46ff8();
    }
    pcVar9 = (char *)thunk_FUN_01a59484(&local_b8,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
    if (((-0x1d < iVar19) && (0x34 < iVar21)) && (*pcVar9 != '\0')) {
      uVar12 = *(undefined8 *)*param_4;
      uVar14 = *(undefined8 *)(*param_4 + 8);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      auVar27 = FUN_027d3bc8(uVar12,uVar14,0);
      *param_4 = auVar27;
    }
    if (-1 < iVar19) goto LAB_0281d598;
    if (0 < iVar19 + local_cc + 0x1c) {
      uVar12 = *(undefined8 *)*param_4;
      uVar14 = *(undefined8 *)(*param_4 + 8);
      auVar28 = *param_4;
      auVar27 = *param_4;
      if (iVar19 < -0x1c) {
        local_90 = 0;
        uStack_88 = 0;
        FUN_027cf91c(&local_90,0x10000000,0x3e250261,0x204fce5e,0,0,0);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        auVar27 = FUN_027d3e50(uVar12,uVar14,local_90,uStack_88,0);
        *param_4 = auVar27;
        local_a0 = 0;
        uStack_98 = 0;
        FUN_027cf91c(&local_a0,1,0,0,0,-0x1c - iVar19,0);
        uVar12 = local_a0;
        uVar14 = uStack_98;
      }
      else {
        local_90 = 0;
        uStack_88 = 0;
        FUN_027cf91c(&local_90,1,0,0,0,-iVar19,0);
        uVar12 = local_90;
        uVar14 = uStack_88;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          uVar12 = local_90;
          uVar14 = uStack_88;
          auVar27 = auVar28;
        }
      }
      goto LAB_0281d58c;
    }
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uStack_78 = (*(undefined8 **)(*(long *)puVar8 + 0xb8))[1];
    local_80 = **(undefined8 **)(*(long *)puVar8 + 0xb8);
    *(undefined8 *)(*param_4 + 8) = uStack_78;
    *(undefined8 *)*param_4 = local_80;
  }
  else {
    if (0x1d < iVar19 + local_cc) {
LAB_0281d54c:
      pcVar9 = (char *)0x2;
      goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
    }
    if (iVar19 + local_cc == 0x1d) {
      if (iVar19 < 2) {
        local_90 = 0;
        uStack_88 = 0;
        FUN_027cf91c(&local_90,0x99999999,0x99999999,0x19999999,0,0,0);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_027d432c(uVar14,uVar12,local_90,uStack_88,0);
        if ((uVar17 & 1) != 0) {
          local_bc = local_a4;
          lVar11 = *(long *)(*(long *)PTR_DAT_03cfe4f0 + 0x20);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01a46ff8();
          }
          pcVar9 = (char *)thunk_FUN_01a59484(&local_bc,
                                              *(undefined8 *)
                                               (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
          if (*pcVar9 == '\0') {
            local_b8 = 0;
          }
          else {
            FUN_01ba9478(&local_bc,&local_90,*(undefined8 *)PTR_DAT_03cfe4f8);
            uVar5 = (ushort)local_90;
            local_90 = 0;
            local_a0 = CONCAT44(local_a0._4_4_,(uint)uVar5);
            FUN_02241190(&local_90,&local_a0,*(undefined8 *)PTR_DAT_03cc1828);
            local_b8 = local_90;
          }
          FUN_01ba9478(&local_b8,&local_90,*(undefined8 *)PTR_DAT_03cc1820);
          iVar19 = (int)local_90;
          lVar11 = *(long *)(*(long *)PTR_DAT_03cc1790 + 0x20);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01a46ff8();
          }
          pcVar9 = (char *)thunk_FUN_01a59484(&local_b8,
                                              *(undefined8 *)
                                               (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
          if ((0x35 < iVar19) && (*pcVar9 != '\0')) goto LAB_0281d54c;
        }
      }
      else {
        local_90 = 0;
        uStack_88 = 0;
        FUN_027cf91c(&local_90,1,0,0,0,iVar19 + -1,0);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        auVar27 = FUN_027d3e50(uVar14,uVar12,local_90,uStack_88,0);
        *param_4 = auVar27;
        local_a0 = 0;
        uStack_98 = 0;
        FUN_027cf91c(&local_a0,0x99999999,0x99999999,0x19999999,0,0,0);
        uVar17 = FUN_027d4568(auVar27._0_8_,auVar27._8_8_,local_a0,uStack_98,0);
        if ((uVar17 & 1) != 0) goto LAB_0281d54c;
      }
      auVar28 = *param_4;
      auVar27 = *param_4;
      local_90 = 0;
      uStack_88 = 0;
      FUN_027cee20(&local_90,10,0);
      uVar12 = local_90;
      uVar14 = uStack_88;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        uVar12 = local_90;
        uVar14 = uStack_88;
        auVar27 = auVar28;
      }
LAB_0281d58c:
      auVar27 = FUN_027d3da0(auVar27._0_8_,auVar27._8_8_,uVar12,uVar14,0);
    }
    else {
      local_90 = 0;
      uStack_88 = 0;
      FUN_027cf91c(&local_90,1,0,0,0,iVar19,0);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      auVar27 = FUN_027d3e50(uVar14,uVar12,local_90,uStack_88,0);
    }
    *param_4 = auVar27;
LAB_0281d598:
    if (sVar4 == 0x2d) {
      uVar12 = *(undefined8 *)*param_4;
      uVar14 = *(undefined8 *)(*param_4 + 8);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      auVar27 = FUN_027d3bc0(uVar12,uVar14,0);
      *param_4 = auVar27;
      pcVar9 = (char *)0x1;
      goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
    }
  }
  pcVar9 = (char *)0x1;
OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported:
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pcVar9);
  }
  return;
}


