/*
FUNCTION_NAME: UnityEngine.UIElements.LongField.LongInput$$.ctor
ENTRY_POINT: 07dec634
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_19;weak_xr_or_state_hits_19;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_19
*/


void UnityEngine_UIElements_LongField_LongInput___ctor(long param_1,undefined8 param_2)

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
  undefined8 auStack_2a0 [2];
  undefined4 uStack_290;
  undefined8 auStack_280 [4];
  undefined8 auStack_260 [4];
  undefined8 auStack_240 [2];
  undefined4 uStack_230;
  undefined8 auStack_220 [2];
  undefined4 uStack_210;
  undefined8 auStack_200 [4];
  undefined8 auStack_1e0 [2];
  undefined4 uStack_1d0;
  undefined8 auStack_1c0 [4];
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined4 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lVar12 = tpidr_el0;
  lStack_8 = *(long *)(lVar12 + 0x28);
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
  uStack_78 = 0;
  uStack_10 = 0;
  uStack_100 = 0;
  puStack_f8 = (undefined8 *)0x0;
  uStack_f0 = 0;
  puStack_d8 = (undefined8 *)0x0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  puStack_98 = (undefined8 *)0x0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_120 = 0;
  puStack_118 = (undefined8 *)0x0;
  uStack_110 = 0;
  uStack_140 = 0;
  uStack_138._0_4_ = 0;
  uStack_138._4_4_ = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_160 = 0;
  puStack_158 = (undefined8 *)0x0;
  uStack_150 = 0;
  uStack_180 = 0;
  uStack_178._0_4_ = 0;
  uStack_178._4_4_ = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_1a0 = 0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  if (*(long *)(param_1 + 0x20) == 0) {
LAB_07ded140:
    lVar12 = *(long *)(lVar12 + 0x28);
  }
  else {
    uStack_78 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x268);
    lVar7 = FUN_07e13e44(&uStack_78,0);
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
      FUN_04e9b100(&uStack_58,*(long *)(param_1 + 0x10),*(undefined8 *)OVRPlugin_Quatf_TypeInfo);
      uStack_30 = uStack_58;
      uStack_28 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50);
      uStack_18 = CONCAT44(uStack_3c,uStack_40);
      uStack_20 = CONCAT44(uStack_44,uStack_48);
      uStack_50 = &uStack_30;
      uStack_58 = 0;
      uStack_10 = uStack_38;
      while (uVar9 = FUN_061dc36c(&uStack_30,*(undefined8 *)puVar3), (uVar9 & 1) != 0) {
        uStack_68 = uStack_18;
        uStack_70 = uStack_20;
        uStack_60 = uStack_10;
        FUN_07f708b8(param_2,&uStack_70,uVar8,0);
      }
      FUN_061dc368(&uStack_30,*(undefined8 *)puVar2);
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_04e9de50(&uStack_58,*(long *)(param_1 + 0x18),*(undefined8 *)puVar5);
        uStack_a0 = uStack_58;
        puStack_98 = uStack_50;
        uStack_88 = CONCAT44(uStack_3c,uStack_40);
        uStack_90 = CONCAT44(uStack_44,uStack_48);
        uStack_50 = &uStack_a0;
        uStack_58 = 0;
        while (uVar9 = FUN_061dc5b8(&uStack_a0,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
          FUN_07f71834(param_2,uStack_90,uStack_88,uVar8,0);
        }
        FUN_061dc5b4(&uStack_a0,*(undefined8 *)OVRPlugin_OVRP_1_96_0_TypeInfo);
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
        (*(code *)*puVar11)(&uStack_58,plVar10,puVar11[1]);
        puStack_b8 = uStack_50;
        uStack_a8 = CONCAT44(uStack_3c,uStack_40);
        uStack_b0 = CONCAT44(uStack_44,uStack_48);
        uStack_c0 = uStack_58;
        iVar6 = FUN_07e243d0(&uStack_c0,0);
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
          (*(code *)*puVar11)(&uStack_58,plVar10,puVar11[1]);
          puStack_b8 = uStack_50;
          uStack_a8 = CONCAT44(uStack_3c,uStack_40);
          uStack_b0 = CONCAT44(uStack_44,uStack_48);
          uStack_c0 = uStack_58;
          FUN_07e24360(auStack_1e0,&uStack_c0,0);
          auStack_1c0[0] = auStack_1e0[0];
          FUN_07f71c88(param_2,auStack_1c0,0);
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
          (*(code *)*puVar11)(&uStack_58,plVar10,puVar11[1]);
          puStack_d8 = uStack_50;
          uStack_c8 = CONCAT44(uStack_3c,uStack_40);
          uStack_d0 = CONCAT44(uStack_44,uStack_48);
          uStack_e0 = uStack_58;
          iVar6 = FUN_07e25948(&uStack_e0,0);
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
            (*(code *)*puVar11)(&uStack_58,plVar10,puVar11[1]);
            puStack_d8 = uStack_50;
            uStack_c8 = CONCAT44(uStack_3c,uStack_40);
            uStack_d0 = CONCAT44(uStack_44,uStack_48);
            uStack_e0 = uStack_58;
            FUN_07e258dc(auStack_1e0,&uStack_e0,0);
            auStack_200[0] = auStack_1e0[0];
            FUN_07f71cf4(param_2,auStack_200,0);
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
            (*(code *)*puVar11)(&uStack_58,plVar10,puVar11[1]);
            puStack_f8 = uStack_50;
            uStack_f0 = CONCAT44(uStack_44,uStack_48);
            uStack_100 = uStack_58;
            iVar6 = FUN_07e331a4(&uStack_100,0);
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
              (*(code *)*puVar11)(&uStack_58,plVar10,puVar11[1]);
              uStack_f0 = CONCAT44(uStack_44,uStack_48);
              puStack_f8 = uStack_50;
              uStack_100 = uStack_58;
              FUN_07e33148(auStack_1e0,&uStack_100,0);
              auStack_220[0] = auStack_1e0[0];
              uStack_210 = uStack_1d0;
              FUN_07f71d64(param_2,auStack_220,0);
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
              (*(code *)*puVar11)(&uStack_58,plVar10,puVar11[1]);
              uStack_110 = CONCAT44(uStack_44,uStack_48);
              puStack_118 = uStack_50;
              uStack_120 = uStack_58;
              FUN_07e25b9c(auStack_1e0,&uStack_120,0);
              auStack_240[0] = auStack_1e0[0];
              uStack_230 = uStack_1d0;
              FUN_07f80d64(param_2,auStack_240,0);
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
              (*(code *)*puVar11)(&uStack_58,plVar10,puVar11[1]);
              uStack_140 = uStack_58;
              uStack_12c = uStack_44;
              uStack_128 = uStack_40;
              uStack_130 = uStack_48;
              uStack_138 = uStack_50;
              FUN_07e25f3c(auStack_1e0,&uStack_140,0);
              auStack_260[0] = auStack_1e0[0];
              FUN_07f80dcc(param_2,auStack_260,0);
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
              (*(code *)*puVar11)(&uStack_58,plVar10,puVar11[1]);
              puStack_158 = uStack_50;
              uStack_160 = uStack_58;
              uStack_150 = uStack_48;
              auVar16 = FUN_07e255c0(&uStack_160,0);
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
              (*(code *)*puVar11)(&uStack_58,plVar10,puVar11[1]);
              uStack_180 = uStack_58;
              uStack_16c = uStack_44;
              uStack_168 = uStack_40;
              uStack_170 = uStack_48;
              uStack_178 = uStack_50;
              FUN_07e251f4(auStack_1e0,&uStack_180,0);
              auStack_280[0] = auStack_1e0[0];
              FUN_07f80e34(param_2,auStack_280,0);
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
              (*(code *)*puVar11)(&uStack_58,plVar10,puVar11[1]);
              uStack_190 = CONCAT44(uStack_44,uStack_48);
              puStack_198 = uStack_50;
              uStack_1a0 = uStack_58;
              FUN_07e23dcc(auStack_1e0,&uStack_1a0,0);
              auStack_2a0[0] = auStack_1e0[0];
              uStack_290 = uStack_1d0;
              FUN_07f80efc(param_2,auStack_2a0,0);
            }
            if (*(long *)(lVar12 + 0x28) == lStack_8) {
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
  if (lVar12 == lStack_8) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
LAB_07ded224:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


