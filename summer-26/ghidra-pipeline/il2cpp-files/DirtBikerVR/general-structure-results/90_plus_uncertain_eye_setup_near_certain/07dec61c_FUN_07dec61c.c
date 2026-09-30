/*
FUNCTION_NAME: FUN_07dec61c
ENTRY_POINT: 07dec61c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_19;weak_xr_or_state_hits_19;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_19
*/


void FUN_07dec61c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 local_300 [2];
  undefined4 local_2f0;
  undefined8 local_2e0 [4];
  undefined8 local_2c0 [4];
  undefined8 local_2a0 [2];
  undefined4 local_290;
  undefined8 local_280 [2];
  undefined4 local_270;
  undefined8 local_260 [4];
  undefined8 local_240 [2];
  undefined4 local_230;
  undefined8 local_220 [4];
  undefined8 local_200;
  undefined8 *puStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 *puStack_1b8;
  undefined4 local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 *puStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 *puStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 *puStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar12 = tpidr_el0;
  local_68 = *(long *)(lVar12 + 0x28);
  if ((DAT_0899a1de & 1) == 0) {
    FUN_03a8a718(OVRPlugin_OVRP_1_95_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_96_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_97_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_98_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_99_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_9_0_TypeInfo);
    FUN_03a8a718(PTR_DAT_08492790);
    FUN_03a8a718(OVRPlugin_OverlayShape_TypeInfo);
    FUN_03a8a718(OVRPlugin_PoseStatef_TypeInfo);
    FUN_03a8a718(OVRPlugin_Posef_TypeInfo);
    FUN_03a8a718(OVRPlugin_Quatf_TypeInfo);
    FUN_03a8a718(PTR_DAT_08486738);
    DAT_0899a1de = 1;
  }
  puVar1 = PTR_DAT_08486738;
  local_d8 = 0;
  local_70 = 0;
  local_160 = 0;
  puStack_158 = (undefined8 *)0x0;
  local_150 = 0;
  puStack_138 = (undefined8 *)0x0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  puStack_118 = (undefined8 *)0x0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puStack_f8 = (undefined8 *)0x0;
  local_100 = 0;
  local_e8 = 0;
  local_f0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_180 = 0;
  puStack_178 = (undefined8 *)0x0;
  local_170 = 0;
  local_1a0 = 0;
  uStack_198._0_4_ = 0;
  uStack_198._4_4_ = 0;
  local_188 = 0;
  local_190 = 0;
  uStack_18c = 0;
  local_1c0 = 0;
  puStack_1b8 = (undefined8 *)0x0;
  local_1b0 = 0;
  local_1e0 = 0;
  uStack_1d8._0_4_ = 0;
  uStack_1d8._4_4_ = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  uStack_1cc = 0;
  local_200 = 0;
  puStack_1f8 = (undefined8 *)0x0;
  local_1f0 = 0;
  if (*(long *)(param_1 + 0x20) == 0) {
LAB_07ded140:
    lVar12 = *(long *)(lVar12 + 0x28);
  }
  else {
    local_d8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x268);
    lVar7 = FUN_07e13e44(&local_d8,0);
    if (lVar7 == 0) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar8 = FUN_07ea20f8(0);
    }
    else {
      FUN_07dfdfd8(lVar7,0);
      uVar8 = FUN_07dfdfd8(lVar7,0);
    }
    uVar14 = *(undefined8 *)(param_1 + 0x120);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar9 = FUN_07c9c218(uVar14,0,0);
    puVar1 = OVRPlugin_PoseStatef_TypeInfo;
    if ((uVar9 & 1) != 0) {
      lVar7 = *(long *)OVRPlugin_PoseStatef_TypeInfo;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar7 = *(long *)puVar1;
      }
      if (*(long *)(param_1 + 0x128) != 0) {
        uVar15 = *(undefined8 *)(param_1 + 0x120);
        lVar7 = **(long **)(lVar7 + 0xb8);
        uVar14 = FUN_07e2d9a0(*(long *)(param_1 + 0x128),0);
        if (lVar7 != 0) {
          FUN_07eaf1d0(0x3f800000,lVar7,uVar15,uVar14,*(undefined8 *)(param_1 + 0x130),0);
          FUN_07f6f240(param_2,**(undefined8 **)(*(long *)puVar1 + 0xb8),uVar8,0);
          goto LAB_07dec84c;
        }
      }
      goto LAB_07ded140;
    }
LAB_07dec84c:
    puVar5 = OVRPlugin_Posef_TypeInfo;
    puVar4 = OVRPlugin_OVRP_1_98_0_TypeInfo;
    puVar3 = OVRPlugin_OVRP_1_97_0_TypeInfo;
    puVar2 = OVRPlugin_OVRP_1_95_0_TypeInfo;
    puVar1 = PTR_DAT_08492790;
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_07ded148:
      lVar12 = *(long *)(lVar12 + 0x28);
    }
    else {
      FUN_04e9b100(&local_b8,*(long *)(param_1 + 0x10),*(undefined8 *)OVRPlugin_Quatf_TypeInfo);
      local_90 = local_b8;
      uStack_88 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
      uStack_78 = CONCAT44(uStack_9c,uStack_a0);
      local_80 = CONCAT44(uStack_a4,local_a8);
      uStack_b0 = &local_90;
      local_b8 = 0;
      local_70 = local_98;
      while (uVar9 = FUN_061dc36c(&local_90,*(undefined8 *)puVar3), (uVar9 & 1) != 0) {
        uStack_c8 = uStack_78;
        local_d0 = local_80;
        local_c0 = local_70;
        FUN_07f708b8(param_2,&local_d0,uVar8,0);
      }
      FUN_061dc368(&local_90,*(undefined8 *)puVar2);
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_04e9de50(&local_b8,*(long *)(param_1 + 0x18),*(undefined8 *)puVar5);
        local_100 = local_b8;
        puStack_f8 = uStack_b0;
        local_e8 = CONCAT44(uStack_9c,uStack_a0);
        local_f0 = CONCAT44(uStack_a4,local_a8);
        uStack_b0 = &local_100;
        local_b8 = 0;
        while (uVar9 = FUN_061dc5b8(&local_100,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
          FUN_07f71834(param_2,local_f0,local_e8,uVar8,0);
        }
        FUN_061dc5b4(&local_100,*(undefined8 *)OVRPlugin_OVRP_1_96_0_TypeInfo);
      }
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_07ded148;
      plVar10 = (long *)FUN_07e05b1c(*(long *)(param_1 + 0x20),0);
      if (plVar10 != (long *)0x0) {
        lVar7 = *plVar10;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
              puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0x2e) * 0x10 + 0x138);
              goto LAB_07dec9d0;
            }
            uVar9 = uVar9 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar1,0x2e);
LAB_07dec9d0:
        (*(code *)*puVar11)(&local_b8,plVar10,puVar11[1]);
        puStack_118 = uStack_b0;
        uStack_108 = CONCAT44(uStack_9c,uStack_a0);
        uStack_110 = CONCAT44(uStack_a4,local_a8);
        local_120 = local_b8;
        iVar6 = FUN_07e243d0(&local_120,0);
        if (iVar6 != 1) {
          if ((*(long *)(param_1 + 0x20) == 0) ||
             (plVar10 = (long *)FUN_07e05b1c(*(long *)(param_1 + 0x20),0), plVar10 == (long *)0x0))
          goto LAB_07ded12c;
          lVar7 = *plVar10;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0x2e) * 0x10 + 0x138);
                goto LAB_07deca64;
              }
              uVar9 = uVar9 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar9 != 0);
          }
          puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar1,0x2e);
LAB_07deca64:
          (*(code *)*puVar11)(&local_b8,plVar10,puVar11[1]);
          puStack_118 = uStack_b0;
          uStack_108 = CONCAT44(uStack_9c,uStack_a0);
          uStack_110 = CONCAT44(uStack_a4,local_a8);
          local_120 = local_b8;
          FUN_07e24360(local_240,&local_120,0);
          local_220[0] = local_240[0];
          FUN_07f71c88(param_2,local_220,0);
        }
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (plVar10 = (long *)FUN_07e05b1c(*(long *)(param_1 + 0x20),0), plVar10 != (long *)0x0)) {
          lVar7 = *plVar10;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0x6c) * 0x10 + 0x138);
                goto LAB_07decb14;
              }
              uVar9 = uVar9 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar9 != 0);
          }
          puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar1,0x6c);
LAB_07decb14:
          (*(code *)*puVar11)(&local_b8,plVar10,puVar11[1]);
          puStack_138 = uStack_b0;
          uStack_128 = CONCAT44(uStack_9c,uStack_a0);
          uStack_130 = CONCAT44(uStack_a4,local_a8);
          local_140 = local_b8;
          iVar6 = FUN_07e25948(&local_140,0);
          if (iVar6 != 1) {
            if ((*(long *)(param_1 + 0x20) == 0) ||
               (plVar10 = (long *)FUN_07e05b1c(*(long *)(param_1 + 0x20),0), plVar10 == (long *)0x0)
               ) goto LAB_07ded12c;
            lVar7 = *plVar10;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0x6c) * 0x10 + 0x138);
                  goto LAB_07decba8;
                }
                uVar9 = uVar9 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar9 != 0);
            }
            puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar1,0x6c);
LAB_07decba8:
            (*(code *)*puVar11)(&local_b8,plVar10,puVar11[1]);
            puStack_138 = uStack_b0;
            uStack_128 = CONCAT44(uStack_9c,uStack_a0);
            uStack_130 = CONCAT44(uStack_a4,local_a8);
            local_140 = local_b8;
            FUN_07e258dc(local_240,&local_140,0);
            local_260[0] = local_240[0];
            FUN_07f71cf4(param_2,local_260,0);
          }
          if ((*(long *)(param_1 + 0x20) != 0) &&
             (plVar10 = (long *)FUN_07e05b1c(*(long *)(param_1 + 0x20),0), plVar10 != (long *)0x0))
          {
            lVar7 = *plVar10;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0x98) * 0x10 + 0x138);
                  goto LAB_07decc58;
                }
                uVar9 = uVar9 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar9 != 0);
            }
            puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar1,0x98);
LAB_07decc58:
            (*(code *)*puVar11)(&local_b8,plVar10,puVar11[1]);
            puStack_158 = uStack_b0;
            local_150 = CONCAT44(uStack_a4,local_a8);
            local_160 = local_b8;
            iVar6 = FUN_07e331a4(&local_160,0);
            if (iVar6 != 1) {
              if ((*(long *)(param_1 + 0x20) == 0) ||
                 (plVar10 = (long *)FUN_07e05b1c(*(long *)(param_1 + 0x20),0),
                 plVar10 == (long *)0x0)) goto LAB_07ded12c;
              lVar7 = *plVar10;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0x98) * 0x10 + 0x138);
                    goto LAB_07deccf4;
                  }
                  uVar9 = uVar9 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar9 != 0);
              }
              puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar1,0x98);
LAB_07deccf4:
              (*(code *)*puVar11)(&local_b8,plVar10,puVar11[1]);
              local_150 = CONCAT44(uStack_a4,local_a8);
              puStack_158 = uStack_b0;
              local_160 = local_b8;
              FUN_07e33148(local_240,&local_160,0);
              local_280[0] = local_240[0];
              local_270 = local_230;
              FUN_07f71d64(param_2,local_280,0);
            }
            if (*(char *)(param_1 + 0x90) != '\0') {
              if ((*(long *)(param_1 + 0x20) == 0) ||
                 (plVar10 = (long *)FUN_07e05b1c(*(long *)(param_1 + 0x20),0),
                 plVar10 == (long *)0x0)) goto LAB_07ded12c;
              lVar7 = *plVar10;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0x70) * 0x10 + 0x138);
                    goto LAB_07decdb4;
                  }
                  uVar9 = uVar9 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar9 != 0);
              }
              puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar1,0x70);
LAB_07decdb4:
              (*(code *)*puVar11)(&local_b8,plVar10,puVar11[1]);
              local_170 = CONCAT44(uStack_a4,local_a8);
              puStack_178 = uStack_b0;
              local_180 = local_b8;
              FUN_07e25b9c(local_240,&local_180,0);
              local_2a0[0] = local_240[0];
              local_290 = local_230;
              FUN_07f80d64(param_2,local_2a0,0);
            }
            if (*(char *)(param_1 + 0xac) != '\0') {
              if ((*(long *)(param_1 + 0x20) == 0) ||
                 (plVar10 = (long *)FUN_07e05b1c(*(long *)(param_1 + 0x20),0),
                 plVar10 == (long *)0x0)) goto LAB_07ded12c;
              lVar7 = *plVar10;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0x7a) * 0x10 + 0x138);
                    goto LAB_07dece74;
                  }
                  uVar9 = uVar9 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar9 != 0);
              }
              puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar1,0x7a);
LAB_07dece74:
              (*(code *)*puVar11)(&local_b8,plVar10,puVar11[1]);
              local_1a0 = local_b8;
              uStack_18c = uStack_a4;
              local_188 = uStack_a0;
              local_190 = local_a8;
              uStack_198 = uStack_b0;
              FUN_07e25f3c(local_240,&local_1a0,0);
              local_2c0[0] = local_240[0];
              FUN_07f80dcc(param_2,local_2c0,0);
            }
            if (*(char *)(param_1 + 0xec) != '\0') {
              if ((*(long *)(param_1 + 0x20) == 0) ||
                 (plVar10 = (long *)FUN_07e05b1c(*(long *)(param_1 + 0x20),0),
                 plVar10 == (long *)0x0)) goto LAB_07ded12c;
              lVar7 = *plVar10;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0x68) * 0x10 + 0x138);
                    goto LAB_07decf34;
                  }
                  uVar9 = uVar9 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar9 != 0);
              }
              puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar1,0x68);
LAB_07decf34:
              (*(code *)*puVar11)(&local_b8,plVar10,puVar11[1]);
              puStack_1b8 = uStack_b0;
              local_1c0 = local_b8;
              local_1b0 = local_a8;
              auVar16 = FUN_07e255c0(&local_1c0,0);
              FUN_07f80e9c(param_2,auVar16._0_8_,auVar16._8_8_,0);
            }
            if (*(char *)(param_1 + 0xcc) != '\0') {
              if ((*(long *)(param_1 + 0x20) == 0) ||
                 (plVar10 = (long *)FUN_07e05b1c(*(long *)(param_1 + 0x20),0),
                 plVar10 == (long *)0x0)) goto LAB_07ded12c;
              lVar7 = *plVar10;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0x66) * 0x10 + 0x138);
                    goto LAB_07decfec;
                  }
                  uVar9 = uVar9 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar9 != 0);
              }
              puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar1,0x66);
LAB_07decfec:
              (*(code *)*puVar11)(&local_b8,plVar10,puVar11[1]);
              local_1e0 = local_b8;
              uStack_1cc = uStack_a4;
              local_1c8 = uStack_a0;
              local_1d0 = local_a8;
              uStack_1d8 = uStack_b0;
              FUN_07e251f4(local_240,&local_1e0,0);
              local_2e0[0] = local_240[0];
              FUN_07f80e34(param_2,local_2e0,0);
            }
            if (*(char *)(param_1 + 0x104) != '\0') {
              if ((*(long *)(param_1 + 0x20) == 0) ||
                 (plVar10 = (long *)FUN_07e05b1c(*(long *)(param_1 + 0x20),0),
                 plVar10 == (long *)0x0)) goto LAB_07ded12c;
              lVar7 = *plVar10;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0x10) * 0x10 + 0x138);
                    goto LAB_07ded0ac;
                  }
                  uVar9 = uVar9 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar9 != 0);
              }
              puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar1,0x10);
LAB_07ded0ac:
              (*(code *)*puVar11)(&local_b8,plVar10,puVar11[1]);
              local_1f0 = CONCAT44(uStack_a4,local_a8);
              puStack_1f8 = uStack_b0;
              local_200 = local_b8;
              FUN_07e23dcc(local_240,&local_200,0);
              local_300[0] = local_240[0];
              local_2f0 = local_230;
              FUN_07f80efc(param_2,local_300,0);
            }
            if (*(long *)(lVar12 + 0x28) == local_68) {
              return;
            }
            goto LAB_07ded224;
          }
        }
      }
LAB_07ded12c:
      lVar12 = *(long *)(lVar12 + 0x28);
    }
  }
  if (lVar12 == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
LAB_07ded224:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


