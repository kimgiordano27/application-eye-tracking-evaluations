/*
FUNCTION_NAME: FUN_058fcbe0
ENTRY_POINT: 058fcbe0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_12;telemetry_or_network_hits_21;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_058fcbe0(undefined8 param_1,ulong param_2,long *param_3,long *param_4,undefined8 param_5,
                 undefined4 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  bool bVar21;
  bool bVar22;
  char cVar23;
  undefined2 uVar26;
  undefined4 uVar30;
  char cVar24;
  undefined4 uVar31;
  uint uVar32;
  uint uVar33;
  long *plVar36;
  ulong uVar37;
  undefined1 uVar25;
  undefined2 uVar27;
  short sVar28;
  short sVar29;
  byte extraout_var;
  int iVar34;
  int iVar35;
  char *pcVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  ulong uVar44;
  ulong uVar45;
  undefined1 *puVar46;
  undefined8 *puVar47;
  undefined8 uVar48;
  long *plVar49;
  long *plVar50;
  long *plVar51;
  float fVar52;
  float fVar53;
  double dVar54;
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [12];
  ulong local_2b0;
  long *local_2a8;
  double local_2a0;
  undefined8 uStack_298;
  undefined4 local_290;
  double local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  double local_260;
  undefined8 uStack_258;
  undefined4 local_250;
  double local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  double local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  double local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  double local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  double local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  double local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  double local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  double local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  double local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  double local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 local_100;
  undefined1 local_f8 [16];
  undefined1 local_e4 [4];
  undefined1 local_e0 [12];
  undefined1 local_d0 [12];
  undefined1 local_c0 [12];
  undefined1 local_b0 [12];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  if ((DAT_06dc0f38 & 1) == 0) {
    FUN_02d965b8(Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_TypeInfo);
    FUN_02d965b8(Zenva_VR_ButtonController_ButtonOption_TypeInfo);
    FUN_02d965b8(PTR_DAT_069ff7e0);
    FUN_02d965b8(PTR_DAT_06a1d5c0);
    FUN_02d965b8(System_Runtime_Serialization_XmlObjectSerializer_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fc268);
    FUN_02d965b8(PTR_DAT_069ff840);
    FUN_02d965b8(UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0d0f0);
    FUN_02d965b8(PTR_DAT_06a0d0f8);
    FUN_02d965b8(PTR_DAT_06a0d100);
    FUN_02d965b8(PTR_DAT_06a0d108);
    FUN_02d965b8(PTR_DAT_06a0d110);
    FUN_02d965b8(PTR_DAT_06a0d120);
    FUN_02d965b8(PTR_DAT_06a0d128);
    FUN_02d965b8(PTR_DAT_06a0d130);
    FUN_02d965b8(PTR_DAT_06a0d138);
    FUN_02d965b8(PTR_DAT_06a0d140);
    FUN_02d965b8(PTR_DAT_06a0d148);
    FUN_02d965b8(PTR_DAT_069fd8d8);
    DAT_06dc0f38 = 1;
  }
  puVar16 = PTR_DAT_06a1d5c0;
  local_b0._8_4_ = 0;
  local_b0._0_8_ = 0;
  local_c0._8_4_ = 0;
  local_c0._0_8_ = 0;
  local_d0._8_4_ = 0;
  local_d0._0_8_ = 0;
  local_e0._8_4_ = 0;
  local_e0._0_8_ = 0;
  local_e4[0] = 0;
  local_f8._0_8_ = 0;
  local_f8._8_8_ = 0;
  local_100 = 0;
  if ((0x27 < (uint)param_2) || ((1L << (param_2 & 0x3f) & 0x800c002020U) == 0)) {
    local_2a8 = (long *)FUN_05902bdc(param_3,param_5,param_6,param_7);
    plVar51 = (long *)FUN_05902bdc(param_4,param_5,param_6,param_7);
    plVar36 = plVar51;
    if ((local_2a8 == (long *)0x0) ||
       (plVar36 = (long *)thunk_FUN_02da6564(local_2a8,0), plVar51 == (long *)0x0))
    goto LAB_059016a0;
    uVar48 = thunk_FUN_02da6564(plVar51,0);
    puVar16 = System_Runtime_Serialization_XmlObjectSerializer_TypeInfo;
    if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo);
    }
    uVar30 = System_Runtime_Interop_UnsafeNativeMethods__EventUnregister(plVar36,0);
    uVar31 = System_Runtime_Interop_UnsafeNativeMethods__EventUnregister(uVar48,0);
    uVar32 = FUN_0596fb30(uVar30,0);
    uVar33 = FUN_0596fb30(uVar31,0);
    if ((uVar32 & 1) != 0) {
      if (*(int *)(*(long *)puVar16 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar37 = FUN_05970094(local_2a8,0);
      plVar49 = local_2a8;
      if ((uVar37 & 1) == 0) goto LAB_058fcfa0;
      goto LAB_058fe0dc;
    }
LAB_058fcfa0:
    if ((uVar33 & 1) != 0) {
      if (*(int *)(*(long *)puVar16 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar37 = FUN_05970094(plVar51,0);
      plVar49 = plVar51;
      if ((uVar37 & 1) != 0) goto LAB_058fe0dc;
    }
    puVar16 = PTR_DAT_06a1d5c0;
    plVar49 = *(long **)PTR_DAT_06a1d5c0;
    if (*(int *)((long)plVar49 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      plVar49 = *(long **)puVar16;
    }
    plVar50 = *(long **)plVar49[0x17];
    if (local_2a8 != plVar50) {
      if (*(int *)((long)plVar49 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        plVar49 = *(long **)PTR_DAT_06a1d5c0;
        plVar50 = *(long **)plVar49[0x17];
      }
      if (plVar51 != plVar50) {
        if (((uVar32 | uVar33) & 1) == 0) {
          if (param_3 == (long *)0x0) {
            bVar21 = false;
          }
          else {
            bVar21 = *param_3 == *(long *)Zenva_VR_ButtonController_ButtonOption_TypeInfo;
          }
          if (param_4 == (long *)0x0) {
            bVar22 = false;
          }
          else {
            bVar22 = *param_4 == *(long *)Zenva_VR_ButtonController_ButtonOption_TypeInfo;
          }
          plVar49 = (long *)FUN_059042d4(param_1,uVar30,uVar31,bVar21,bVar22,param_2 & 0xffffffff);
        }
        else {
          plVar49 = (long *)FUN_05903eec(param_1,uVar30,uVar31,0,0,param_2 & 0xffffffff);
        }
        local_2b0 = (ulong)plVar49 & 0xffffffff;
        if ((int)plVar49 != 0) {
          plVar36 = *(long **)PTR_DAT_06a1d5c0;
          goto LAB_058fcdac;
        }
        if (*(long *)(lVar4 + 0x28) != local_78) goto LAB_05902384;
        plVar36 = (long *)FUN_05902ae0(plVar49,param_2 & 0xffffffff,plVar36,uVar48);
        goto LAB_0590129c;
      }
    }
    if (*(int *)((long)plVar49 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      plVar49 = *(long **)PTR_DAT_06a1d5c0;
    }
    goto LAB_058fe0d4;
  }
  plVar36 = *(long **)PTR_DAT_06a1d5c0;
  if (*(int *)((long)plVar36 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    plVar36 = *(long **)puVar16;
  }
  local_2b0 = 0;
  plVar51 = *(long **)plVar36[0x17];
  local_2a8 = plVar51;
LAB_058fcdac:
  if (*(int *)((long)plVar36 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    plVar36 = *(long **)PTR_DAT_06a1d5c0;
  }
  puVar20 = UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo;
  puVar19 = System_Runtime_Serialization_XmlObjectSerializer_TypeInfo;
  puVar18 = PTR_DAT_06a0d100;
  puVar17 = PTR_DAT_069fd8d8;
  puVar16 = PTR_DAT_069fc268;
  switch((uint)param_2) {
  case 5:
    if ((param_4 == (long *)0x0) ||
       (*param_4 != *(long *)UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo)) {
      uVar48 = FUN_05904660();
      plVar49 = (long *)thunk_FUN_02dfd288(
                                          Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_TypeInfo
                                          );
      if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar48,plVar49);
      }
      goto LAB_05902384;
    }
    lVar39 = FUN_05902bdc(param_3,param_5,param_6,param_7);
    plVar49 = *(long **)PTR_DAT_06a1d5c0;
    if (*(int *)((long)plVar49 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      plVar49 = *(long **)PTR_DAT_06a1d5c0;
    }
    if (lVar39 == *(long *)plVar49[0x17]) {
LAB_058fce9c:
      if (*(int *)((long)plVar49 + 0xe4) != 0) goto LAB_058fe0d4;
      thunk_FUN_02df485c();
      goto FUN_058fe0c8;
    }
    if (param_3 == (long *)0x0) {
      if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_05902384;
    }
    uVar37 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
    if ((uVar37 & 1) != 0) {
      if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_02df485c();
      }
      uVar37 = FUN_05970094(lVar39,0);
      if ((uVar37 & 1) != 0) {
        plVar49 = *(long **)PTR_DAT_06a1d5c0;
        goto LAB_058fce9c;
      }
    }
    puVar16 = PTR_DAT_069fb9c0;
    local_a0._0_8_ = local_a0._0_8_ & 0xffffffffffffff00;
    plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x28),local_a0);
    puVar17 = System_Runtime_Serialization_XmlObjectSerializer_TypeInfo;
    if (*param_4 != *(long *)puVar20) {
      if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(param_4);
      }
      goto LAB_05902384;
    }
    if (0 < *(int *)((long)param_4 + 0x24)) {
      lVar40 = 0;
      plVar36 = plVar49;
      do {
        auVar15._8_8_ = local_a0._8_8_;
        auVar15._0_8_ = local_a0._0_8_;
        auVar14._8_8_ = local_a0._8_8_;
        auVar14._0_8_ = local_a0._0_8_;
        auVar13._8_4_ = local_b0._8_4_;
        auVar13._0_8_ = local_b0._0_8_;
        auVar12._8_4_ = local_b0._8_4_;
        auVar12._0_8_ = local_b0._0_8_;
        auVar11._8_4_ = local_c0._8_4_;
        auVar11._0_8_ = local_c0._0_8_;
        auVar10._8_4_ = local_c0._8_4_;
        auVar10._0_8_ = local_c0._0_8_;
        auVar9._8_4_ = local_d0._8_4_;
        auVar9._0_8_ = local_d0._0_8_;
        auVar8._8_4_ = local_d0._8_4_;
        auVar8._0_8_ = local_d0._0_8_;
        auVar7._8_4_ = local_e0._8_4_;
        auVar7._0_8_ = local_e0._0_8_;
        auVar58._8_4_ = local_e0._8_4_;
        auVar58._0_8_ = local_e0._0_8_;
        auVar6._8_8_ = local_f8._8_8_;
        auVar6._0_8_ = local_f8._0_8_;
        auVar5._8_8_ = local_f8._8_8_;
        auVar5._0_8_ = local_f8._0_8_;
        lVar41 = param_4[5];
        if (lVar41 == 0) {
          plVar49 = plVar36;
          if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          goto LAB_05902384;
        }
        if (*(uint *)(lVar41 + 0x18) <= (uint)lVar40) {
          plVar49 = plVar36;
          local_f8 = auVar6;
          local_e0 = auVar7;
          local_d0 = auVar9;
          local_c0 = auVar11;
          local_b0 = auVar13;
          local_a0 = auVar15;
          if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          goto LAB_05902384;
        }
        plVar36 = *(long **)(lVar41 + lVar40 * 8 + 0x20);
        if (plVar36 == (long *)0x0) {
          plVar49 = (long *)0x0;
          local_f8 = auVar5;
          local_e0 = auVar58;
          local_d0 = auVar8;
          local_c0 = auVar10;
          local_b0 = auVar12;
          local_a0 = auVar14;
          if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          goto LAB_05902384;
        }
        lVar41 = (**(code **)(*plVar36 + 0x198))(plVar36,*(undefined8 *)(*plVar36 + 0x1a0));
        plVar36 = *(long **)PTR_DAT_06a1d5c0;
        if (*(int *)((long)plVar36 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          plVar36 = *(long **)PTR_DAT_06a1d5c0;
        }
        if (lVar41 != *(long *)plVar36[0x17]) {
          plVar36 = (long *)(**(code **)(*param_4 + 0x178))
                                      (param_4,*(undefined8 *)(*param_4 + 0x180));
          if (((ulong)plVar36 & 1) != 0) {
            if (*(int *)(*(long *)puVar17 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            plVar36 = (long *)FUN_05970094(lVar41,0);
            if (((ulong)plVar36 & 1) != 0) goto LAB_058fda2c;
          }
          if (lVar39 == 0) {
            plVar49 = plVar36;
            if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            goto LAB_05902384;
          }
          uVar48 = thunk_FUN_02da6564(lVar39,0);
          if (*(int *)(*(long *)puVar17 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar30 = System_Runtime_Interop_UnsafeNativeMethods__EventUnregister(uVar48,0);
          plVar36 = (long *)FUN_05902c1c(param_1,lVar39,lVar41,uVar30,7,0);
          if ((int)plVar36 == 0) {
            local_a0[0] = 1;
            plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(puVar16 + 0x28),local_a0);
            break;
          }
        }
LAB_058fda2c:
        lVar40 = lVar40 + 1;
      } while ((int)lVar40 < *(int *)((long)param_4 + 0x24));
    }
    break;
  default:
    uVar48 = FUN_059046a0(param_2 & 0xffffffff);
    plVar49 = (long *)thunk_FUN_02dfd288(
                                        Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_TypeInfo
                                        );
    if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar48,plVar49);
    }
    goto LAB_05902384;
  case 7:
    if (*(int *)((long)plVar36 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      plVar36 = *(long **)PTR_DAT_06a1d5c0;
    }
    if (local_2a8 != *(long **)plVar36[0x17]) {
      if (param_3 == (long *)0x0) {
        plVar49 = plVar36;
        if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        goto LAB_05902384;
      }
      uVar37 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar37 & 1) != 0) {
        if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0
           ) {
          thunk_FUN_02df485c();
        }
        uVar37 = FUN_05970094(local_2a8,0);
        if ((uVar37 & 1) != 0) goto LAB_058fdfb8;
      }
      plVar49 = *(long **)PTR_DAT_06a1d5c0;
      if (*(int *)((long)plVar49 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        plVar49 = *(long **)PTR_DAT_06a1d5c0;
      }
      if (plVar51 != *(long **)plVar49[0x17]) {
        if (param_4 == (long *)0x0) {
          if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          goto LAB_05902384;
        }
        uVar37 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
        if ((uVar37 & 1) != 0) {
          if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) ==
              0) {
            thunk_FUN_02df485c();
          }
          uVar37 = FUN_05970094(plVar51,0);
          if ((uVar37 & 1) != 0) goto LAB_058fdfb8;
        }
        iVar34 = FUN_05902c1c(param_1,local_2a8,plVar51,(uint)local_2b0,7,0);
        local_a0[0] = iVar34 == 0;
        plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x28),local_a0);
        break;
      }
    }
LAB_058fdfb8:
    plVar49 = *(long **)PTR_DAT_06a1d5c0;
    if (*(int *)((long)plVar49 + 0xe4) == 0) {
      thunk_FUN_02df485c();
FUN_058fe0c8:
      plVar49 = *(long **)PTR_DAT_06a1d5c0;
    }
    goto LAB_058fe0d4;
  case 8:
    if (*(int *)((long)plVar36 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      plVar36 = *(long **)PTR_DAT_06a1d5c0;
    }
    if (local_2a8 != *(long **)plVar36[0x17]) {
      if (param_3 == (long *)0x0) {
        plVar49 = plVar36;
        if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        goto LAB_05902384;
      }
      uVar37 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar37 & 1) != 0) {
        if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0
           ) {
          thunk_FUN_02df485c();
        }
        uVar37 = FUN_05970094(local_2a8,0);
        if ((uVar37 & 1) != 0) goto System_Xml_XmlDictionaryWriter__WriteArray;
      }
      plVar49 = *(long **)PTR_DAT_06a1d5c0;
      if (*(int *)((long)plVar49 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        plVar49 = *(long **)PTR_DAT_06a1d5c0;
      }
      if (plVar51 != *(long **)plVar49[0x17]) {
        if (param_4 == (long *)0x0) {
          if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          goto LAB_05902384;
        }
        uVar37 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
        if ((uVar37 & 1) != 0) {
          if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) ==
              0) {
            thunk_FUN_02df485c();
          }
          uVar37 = FUN_05970094(plVar51,0);
          if ((uVar37 & 1) != 0) goto System_Xml_XmlDictionaryWriter__WriteArray;
        }
        iVar34 = FUN_05902c1c(param_1,local_2a8,plVar51,local_2b0,8,0);
        local_a0[0] = 0 < iVar34;
        plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x28),local_a0);
        break;
      }
    }
System_Xml_XmlDictionaryWriter__WriteArray:
    plVar49 = *(long **)PTR_DAT_06a1d5c0;
    if (*(int *)((long)plVar49 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      goto FUN_058fe0c8;
    }
    goto LAB_058fe0d4;
  case 9:
    if (*(int *)((long)plVar36 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      plVar36 = *(long **)PTR_DAT_06a1d5c0;
    }
    if (local_2a8 != *(long **)plVar36[0x17]) {
      if (param_3 == (long *)0x0) {
        plVar49 = plVar36;
        if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        goto LAB_05902384;
      }
      uVar37 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar37 & 1) != 0) {
        if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0
           ) {
          thunk_FUN_02df485c();
        }
        uVar37 = FUN_05970094(local_2a8,0);
        if ((uVar37 & 1) != 0) goto LAB_058fdec0;
      }
      plVar49 = *(long **)PTR_DAT_06a1d5c0;
      if (*(int *)((long)plVar49 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        plVar49 = *(long **)PTR_DAT_06a1d5c0;
      }
      if (plVar51 != *(long **)plVar49[0x17]) {
        if (param_4 == (long *)0x0) {
          if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          goto LAB_05902384;
        }
        uVar37 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
        if ((uVar37 & 1) != 0) {
          if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) ==
              0) {
            thunk_FUN_02df485c();
          }
          uVar37 = FUN_05970094(plVar51,0);
          if ((uVar37 & 1) != 0) goto LAB_058fdec0;
        }
        uVar37 = FUN_05902c1c(param_1,local_2a8,plVar51,(uint)local_2b0,9,0);
        local_a0._0_8_ = CONCAT71(local_a0._1_7_,(char)(uVar37 >> 0x1f)) & 0xffffffffffffff01;
        plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x28),local_a0);
        break;
      }
    }
LAB_058fdec0:
    plVar49 = *(long **)PTR_DAT_06a1d5c0;
    if (*(int *)((long)plVar49 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      goto FUN_058fe0c8;
    }
    goto LAB_058fe0d4;
  case 10:
    if (*(int *)((long)plVar36 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      plVar36 = *(long **)PTR_DAT_06a1d5c0;
    }
    if (local_2a8 != *(long **)plVar36[0x17]) {
      if (param_3 == (long *)0x0) {
LAB_0590129c:
        plVar49 = plVar36;
        if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        goto LAB_05902384;
      }
      uVar37 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar37 & 1) != 0) {
        if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0
           ) {
          thunk_FUN_02df485c();
        }
        uVar37 = FUN_05970094(local_2a8,0);
        if ((uVar37 & 1) != 0) goto LAB_058fdbd8;
      }
      plVar49 = *(long **)PTR_DAT_06a1d5c0;
      if (*(int *)((long)plVar49 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        plVar49 = *(long **)PTR_DAT_06a1d5c0;
      }
      if (plVar51 != *(long **)plVar49[0x17]) {
        if (param_4 == (long *)0x0) {
          if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          goto LAB_05902384;
        }
        uVar37 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
        if ((uVar37 & 1) != 0) {
          if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) ==
              0) {
            thunk_FUN_02df485c();
          }
          uVar37 = FUN_05970094(plVar51,0);
          if ((uVar37 & 1) != 0) goto LAB_058fdbd8;
        }
        FUN_05902c1c(param_1,local_2a8,plVar51,local_2b0,10,0);
        local_a0[0] = (byte)~extraout_var >> 7;
        plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x28),local_a0);
        break;
      }
    }
LAB_058fdbd8:
    plVar49 = *(long **)PTR_DAT_06a1d5c0;
    if (*(int *)((long)plVar49 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      goto FUN_058fe0c8;
    }
    goto LAB_058fe0d4;
  case 0xb:
    if (*(int *)((long)plVar36 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      plVar36 = *(long **)PTR_DAT_06a1d5c0;
    }
    if (local_2a8 != *(long **)plVar36[0x17]) {
      if (param_3 == (long *)0x0) {
        plVar49 = plVar36;
        if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        goto LAB_05902384;
      }
      uVar37 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar37 & 1) != 0) {
        if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0
           ) {
          thunk_FUN_02df485c();
        }
        uVar37 = FUN_05970094(local_2a8,0);
        if ((uVar37 & 1) != 0) goto LAB_058fdcd0;
      }
      plVar49 = *(long **)PTR_DAT_06a1d5c0;
      if (*(int *)((long)plVar49 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        plVar49 = *(long **)PTR_DAT_06a1d5c0;
      }
      if (plVar51 != *(long **)plVar49[0x17]) {
        if (param_4 == (long *)0x0) {
          if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          goto LAB_05902384;
        }
        uVar37 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
        if ((uVar37 & 1) != 0) {
          if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) ==
              0) {
            thunk_FUN_02df485c();
          }
          uVar37 = FUN_05970094(plVar51,0);
          if ((uVar37 & 1) != 0) goto LAB_058fdcd0;
        }
        iVar34 = FUN_05902c1c(param_1,local_2a8,plVar51,(uint)local_2b0,0xb,0);
        local_a0[0] = iVar34 < 1;
        plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x28),local_a0);
        break;
      }
    }
LAB_058fdcd0:
    plVar49 = *(long **)PTR_DAT_06a1d5c0;
    if (*(int *)((long)plVar49 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      goto FUN_058fe0c8;
    }
    goto LAB_058fe0d4;
  case 0xc:
    if (*(int *)((long)plVar36 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      plVar36 = *(long **)PTR_DAT_06a1d5c0;
    }
    if (local_2a8 != *(long **)plVar36[0x17]) {
      if (param_3 == (long *)0x0) {
        plVar49 = plVar36;
        if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        goto LAB_05902384;
      }
      uVar37 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar37 & 1) != 0) {
        if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0
           ) {
          thunk_FUN_02df485c();
        }
        uVar37 = FUN_05970094(local_2a8,0);
        if ((uVar37 & 1) != 0) goto LAB_058fe0b0;
      }
      plVar49 = *(long **)PTR_DAT_06a1d5c0;
      if (*(int *)((long)plVar49 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        plVar49 = *(long **)PTR_DAT_06a1d5c0;
      }
      if (plVar51 != *(long **)plVar49[0x17]) {
        if (param_4 == (long *)0x0) {
          if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          goto LAB_05902384;
        }
        uVar37 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
        if ((uVar37 & 1) != 0) {
          if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) ==
              0) {
            thunk_FUN_02df485c();
          }
          uVar37 = FUN_05970094(plVar51,0);
          if ((uVar37 & 1) != 0) goto LAB_058fe0b0;
        }
        iVar34 = FUN_05902c1c(param_1,local_2a8,plVar51,local_2b0,0xc,0);
        local_a0[0] = iVar34 != 0;
        plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x28),local_a0);
        break;
      }
    }
LAB_058fe0b0:
    plVar49 = *(long **)PTR_DAT_06a1d5c0;
    if (*(int *)((long)plVar49 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      goto FUN_058fe0c8;
    }
LAB_058fe0d4:
    plVar49 = *(long **)plVar49[0x17];
    break;
  case 0xd:
    lVar39 = FUN_05902bdc(param_3,param_5,param_6,param_7);
    plVar49 = *(long **)PTR_DAT_06a1d5c0;
    if (*(int *)((long)plVar49 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      plVar49 = *(long **)PTR_DAT_06a1d5c0;
    }
    if (lVar39 == *(long *)plVar49[0x17]) {
LAB_058fd768:
      local_a0[0] = 1;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x28),local_a0);
    }
    else {
      if (param_3 == (long *)0x0) {
        if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        goto LAB_05902384;
      }
      uVar37 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar37 & 1) != 0) {
        if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0
           ) {
          thunk_FUN_02df485c();
        }
        uVar37 = FUN_05970094(lVar39,0);
        if ((uVar37 & 1) != 0) goto LAB_058fd768;
      }
      local_a0._0_8_ = local_a0._0_8_ & 0xffffffffffffff00;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x28),local_a0);
    }
    break;
  case 0xf:
    switch((uint)local_2b0) {
    case 4:
    case 0x12:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar48 = FUN_0545f8d4(local_2a8,uVar48,0);
      uVar42 = FUN_05903c00(param_1);
      uVar42 = FUN_0545f8d4(plVar51,uVar42,0);
      plVar49 = (long *)FUN_05362cb4(uVar48,uVar42,0);
      break;
    case 5:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      cVar23 = FUN_0545c190(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      cVar24 = FUN_0545c190(plVar51,uVar48,0);
      puVar16 = PTR_DAT_069fb9c0;
      local_a0._0_4_ = (int)cVar24 + (int)cVar23;
      uVar48 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),local_a0);
      uVar42 = FUN_05903c00(param_1);
      uVar25 = FUN_0545c190(uVar48,uVar42,0);
      local_160 = (double)CONCAT71(local_160._1_7_,uVar25);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(puVar16 + 0x30),&local_160);
      break;
    case 6:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar32 = FUN_0545c808(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      uVar33 = FUN_0545c808(plVar51,uVar48,0);
      puVar16 = PTR_DAT_069fb9c0;
      local_a0._0_4_ = (uVar33 & 0xff) + (uVar32 & 0xff);
      uVar48 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),local_a0);
      uVar42 = FUN_05903c00(param_1);
      uVar25 = FUN_0545c808(uVar48,uVar42,0);
      local_160 = (double)CONCAT71(local_160._1_7_,uVar25);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(puVar16 + 0x18),&local_160);
      break;
    case 7:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      sVar28 = FUN_0545ce5c(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      sVar29 = FUN_0545ce5c(plVar51,uVar48,0);
      puVar16 = PTR_DAT_069fb9c0;
      local_a0._0_4_ = (int)sVar29 + (int)sVar28;
      uVar48 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),local_a0);
      uVar42 = FUN_05903c00(param_1);
      uVar26 = FUN_0545ce5c(uVar48,uVar42,0);
      local_160 = (double)CONCAT62(local_160._2_6_,uVar26);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(puVar16 + 0x38),&local_160);
      break;
    case 8:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar32 = FUN_0545d380(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      uVar33 = FUN_0545d380(plVar51,uVar48,0);
      puVar16 = PTR_DAT_069fb9c0;
      local_a0._0_4_ = (uVar33 & 0xffff) + (uVar32 & 0xffff);
      uVar48 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),local_a0);
      uVar42 = FUN_05903c00(param_1);
      uVar26 = FUN_0545d380(uVar48,uVar42,0);
      local_160 = (double)CONCAT62(local_160._2_6_,uVar26);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(puVar16 + 0x40),&local_160);
      break;
    case 9:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      iVar34 = FUN_0545d8f8(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      iVar35 = FUN_0545d8f8(plVar51,uVar48,0);
      if ((long)iVar34 + (long)iVar35 != (long)(int)((long)iVar34 + (long)iVar35)) {
        plVar49 = (long *)FUN_02d96870();
        if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(plVar49,*(undefined8 *)
                                Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_TypeInfo
                      );
        }
        goto LAB_05902384;
      }
      local_a0._0_4_ = iVar35 + iVar34;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),local_a0);
      break;
    case 10:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar32 = FUN_0545dd7c(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      uVar33 = FUN_0545dd7c(plVar51,uVar48,0);
      if ((ulong)uVar33 + (ulong)uVar32 >> 0x20 != 0) {
        plVar49 = (long *)FUN_02d96870();
        if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(plVar49,*(undefined8 *)
                                Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_TypeInfo
                      );
        }
        goto LAB_05902384;
      }
      local_a0._0_4_ = uVar33 + uVar32;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x50),local_a0);
      break;
    case 0xb:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      lVar39 = FUN_0545e2d8(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      uVar37 = FUN_0545e2d8(plVar51,uVar48,0);
      if (((-1 < (long)uVar37) && ((long)(uVar37 ^ 0x7fffffffffffffff) < lVar39)) ||
         ((lVar39 < 0 && ((long)uVar37 < -0x8000000000000000 - lVar39)))) {
        plVar49 = (long *)FUN_02d96870();
        if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(plVar49,*(undefined8 *)
                                Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_TypeInfo
                      );
        }
        goto LAB_05902384;
      }
      local_a0._0_8_ = uVar37 + lVar39;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x68),local_a0);
      break;
    case 0xc:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar37 = FUN_0545e7c4(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      uVar44 = FUN_0545e7c4(plVar51,uVar48,0);
      if (CARRY8(uVar44,uVar37)) {
        plVar49 = (long *)FUN_02d96870();
        if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(plVar49,*(undefined8 *)
                                Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_TypeInfo
                      );
        }
        goto LAB_05902384;
      }
      local_a0._0_8_ = uVar44 + uVar37;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),local_a0);
      break;
    case 0xd:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar52 = (float)FUN_0545ed20(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      fVar53 = (float)FUN_0545ed20(plVar51,uVar48,0);
      local_a0._0_4_ = fVar52 + fVar53;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x78),local_a0);
      break;
    case 0xe:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      dVar54 = (double)FUN_0545f064(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      dVar55 = (double)FUN_0545f064(plVar51,uVar48,0);
      local_a0._0_8_ = dVar54 + dVar55;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x80),local_a0);
      break;
    case 0xf:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      auVar56 = FUN_0545f238(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      auVar57 = FUN_0545f238(plVar51,uVar48,0);
      puVar16 = PTR_DAT_069ff840;
      if (*(int *)(*(long *)PTR_DAT_069ff840 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0 = FUN_05547984(auVar56._0_8_,auVar56._8_8_,auVar57._0_8_,auVar57._8_8_,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x10:
      if (local_2a8 != (long *)0x0) {
        lVar39 = *local_2a8;
        lVar40 = *(long *)PTR_DAT_069fc268;
        if (lVar39 == *(long *)PTR_DAT_069fd8d8) {
          if (plVar51 != (long *)0x0) {
            if (*plVar51 == lVar40) {
              if (*(int *)(lVar40 + 0xe4) == 0) {
                thunk_FUN_02df485c(lVar40);
                lVar40 = *(long *)puVar16;
              }
              puVar47 = (undefined8 *)FUN_02982d2c(plVar51,lVar40);
              uVar48 = *puVar47;
              puVar47 = (undefined8 *)FUN_02982d2c(local_2a8,*(undefined8 *)puVar17);
              local_a0._0_8_ = FUN_054ca3f4(uVar48,*puVar47,0);
              plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
              break;
            }
            goto LAB_059006c8;
          }
        }
        else {
LAB_059006c8:
          if (lVar39 != lVar40) goto LAB_0590139c;
          if (plVar51 != (long *)0x0) {
            if (*plVar51 != *(long *)PTR_DAT_069fd8d8) goto LAB_0590149c;
            if (*(int *)(lVar39 + 0xe4) == 0) {
              thunk_FUN_02df485c(lVar39);
              lVar39 = *(long *)puVar16;
            }
            puVar47 = (undefined8 *)FUN_02982d2c(local_2a8,lVar39);
            uVar48 = *puVar47;
            puVar47 = (undefined8 *)FUN_02982d2c(plVar51,*(undefined8 *)puVar17);
            local_a0._0_8_ = FUN_054ca3f4(uVar48,*puVar47,0);
            plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
            break;
          }
        }
LAB_05901694:
        plVar36 = (long *)thunk_FUN_02da6564(local_2a8,0);
      }
      goto LAB_059016a0;
    case 0x11:
      lVar39 = *(long *)PTR_DAT_069fd8d8;
      if (*(int *)(lVar39 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar39);
        lVar39 = *(long *)puVar17;
      }
      puVar47 = (undefined8 *)FUN_02982d2c(local_2a8,lVar39);
      uVar48 = *puVar47;
      puVar47 = (undefined8 *)FUN_02982d2c(plVar51,*(undefined8 *)puVar17);
      local_a0._0_8_ = FUN_054ffe7c(uVar48,*puVar47,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar17,local_a0);
      break;
    default:
switchD_058fd09c_caseD_10:
      plVar36 = (long *)0x0;
      if (local_2a8 == (long *)0x0) goto LAB_059016a0;
LAB_0590139c:
      plVar36 = (long *)thunk_FUN_02da6564(local_2a8,0);
      if (plVar51 != (long *)0x0) goto LAB_059014ac;
LAB_059016a0:
      plVar49 = plVar36;
      if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_05902384;
    case 0x1c:
      uVar26 = FUN_05979fe0(local_2a8,0);
      uVar27 = FUN_05979fe0(plVar51,0);
      puVar16 = PTR_DAT_06a0d0f8;
      if (*(int *)(*(long *)PTR_DAT_06a0d0f8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar26 = FUN_0594cf84(uVar26,uVar27,0);
      local_a0._0_2_ = uVar26;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x1f:
      if (local_2a8 == (long *)0x0) goto LAB_059016a0;
      if (((*local_2a8 == *(long *)PTR_DAT_069fd8d8) && (plVar51 != (long *)0x0)) &&
         (*plVar51 == *(long *)PTR_DAT_06a0d100)) {
        local_b0 = FUN_0597c404(plVar51,0);
        if (*(int *)(*(long *)puVar18 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar18);
        }
        uVar48 = FUN_0594fb2c(local_b0,0);
        puVar16 = PTR_DAT_069fc268;
        if (*(int *)(*(long *)PTR_DAT_069fc268 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        puVar47 = (undefined8 *)FUN_02982d2c(local_2a8,*(undefined8 *)puVar17);
        local_160 = (double)FUN_054ca3f4(uVar48,*puVar47,0);
        uVar48 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,&local_160);
        auVar58 = FUN_0597c404(uVar48,0);
        local_a0._0_8_ = auVar58._0_8_;
        local_a0._8_4_ = auVar58._8_4_;
        plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar18,local_a0);
        break;
      }
      if (*local_2a8 != *(long *)PTR_DAT_06a0d100) goto LAB_0590139c;
      if (plVar51 == (long *)0x0) goto LAB_05901694;
      if (*plVar51 == *(long *)PTR_DAT_069fd8d8) {
        local_c0 = FUN_0597c404(local_2a8,0);
        if (*(int *)(*(long *)puVar18 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar18);
        }
        uVar48 = FUN_0594fb2c(local_c0,0);
        puVar16 = PTR_DAT_069fc268;
        if (*(int *)(*(long *)PTR_DAT_069fc268 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        puVar47 = (undefined8 *)FUN_02982d2c(plVar51,*(undefined8 *)puVar17);
        local_160 = (double)FUN_054ca3f4(uVar48,*puVar47,0);
        uVar48 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,&local_160);
        auVar58 = FUN_0597c404(uVar48,0);
        local_a0._0_8_ = auVar58._0_8_;
        local_a0._8_4_ = auVar58._8_4_;
        plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar18,local_a0);
        break;
      }
LAB_0590149c:
      plVar36 = (long *)thunk_FUN_02da6564(local_2a8,0);
LAB_059014ac:
      uVar48 = thunk_FUN_02da6564(plVar51,0);
      uVar48 = FUN_05902b10(param_2 & 0xffffffff,plVar36,uVar48);
      plVar49 = (long *)thunk_FUN_02dfd288(
                                          System_Linq_Expressions_Interpreter_DivInstruction_DivDouble_TypeInfo
                                          );
      if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar48,plVar49);
      }
      goto LAB_05902384;
    case 0x20:
      FUN_0597b2bc(&local_160,local_2a8,0);
      local_a0._8_8_ = uStack_158;
      local_a0._0_8_ = local_160;
      local_90 = CONCAT44(local_90._4_4_,(undefined4)local_150);
      FUN_0597b2bc(&local_180,plVar51,0);
      puVar16 = PTR_DAT_06a0d108;
      uStack_158 = uStack_178;
      local_160 = local_180;
      local_150 = CONCAT44(local_150._4_4_,local_170);
      if (*(int *)(*(long *)PTR_DAT_06a0d108 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uStack_118 = local_a0._8_8_;
      local_120 = (double)local_a0._0_8_;
      local_110 = (undefined4)local_90;
      uStack_138 = uStack_158;
      local_140 = local_160;
      local_130 = (undefined4)local_150;
      FUN_05953194(&local_180,&local_120,&local_140,0);
      uStack_1d8 = uStack_178;
      local_1e0 = local_180;
      local_1d0 = CONCAT44(local_1d0._4_4_,local_170);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,&local_1e0);
      break;
    case 0x21:
      auVar56 = FUN_0597ac7c(local_2a8,0);
      auVar57 = FUN_0597ac7c(plVar51,0);
      puVar16 = PTR_DAT_06a0d110;
      if (*(int *)(*(long *)PTR_DAT_06a0d110 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0 = FUN_05957818(auVar56._0_8_,auVar56._8_8_,auVar57._0_8_,auVar57._8_8_,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x23:
      uVar30 = FUN_0597a1b4(local_2a8,0);
      uVar31 = FUN_0597a1b4(plVar51,0);
      puVar16 = PTR_DAT_06a0d120;
      if (*(int *)(*(long *)PTR_DAT_06a0d120 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0._0_4_ = FUN_05959bd4(uVar30,uVar31,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x24:
      uVar48 = FUN_0597a448(local_2a8,0);
      uVar42 = FUN_0597a448(plVar51,0);
      puVar16 = PTR_DAT_06a0d128;
      if (*(int *)(*(long *)PTR_DAT_06a0d128 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0._0_8_ = FUN_0595afc0(uVar48,uVar42,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x25:
      auVar56 = FUN_0597a7ec(local_2a8,0);
      auVar57 = FUN_0597a7ec(plVar51,0);
      puVar16 = PTR_DAT_06a0d130;
      if (*(int *)(*(long *)PTR_DAT_06a0d130 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0 = FUN_0595c4cc(auVar56._0_8_,auVar56._8_8_,auVar57._0_8_,auVar57._8_8_,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x26:
      auVar56 = FUN_0597be50(local_2a8,0);
      auVar57 = FUN_0597be50(plVar51,0);
      puVar16 = PTR_DAT_06a0d138;
      if (*(int *)(*(long *)PTR_DAT_06a0d138 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0 = FUN_0595de44(auVar56._0_8_,auVar56._8_8_,auVar57._0_8_,auVar57._8_8_,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x27:
      uVar48 = FUN_0597b888(local_2a8,0);
      uVar42 = FUN_0597b888(plVar51,0);
      puVar16 = PTR_DAT_06a0d140;
      if (*(int *)(*(long *)PTR_DAT_06a0d140 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0._0_8_ = FUN_0595f634(uVar48,uVar42,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x28:
      FUN_0597cb64(&local_160,local_2a8,0);
      local_a0._8_8_ = uStack_158;
      local_a0._0_8_ = local_160;
      uStack_88 = uStack_148;
      local_90 = local_150;
      FUN_0597cb64(&local_180,plVar51,0);
      puVar16 = PTR_DAT_06a0d148;
      local_150 = CONCAT44(uStack_16c,local_170);
      uStack_158 = uStack_178;
      local_160 = local_180;
      uStack_148 = uStack_168;
      if (*(int *)(*(long *)PTR_DAT_06a0d148 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uStack_198 = local_a0._8_8_;
      local_1a0 = (double)local_a0._0_8_;
      uStack_188 = uStack_88;
      uStack_190 = local_90;
      uStack_1b8 = uStack_158;
      local_1c0 = local_160;
      uStack_1a8 = uStack_148;
      uStack_1b0 = local_150;
      FUN_05961190(&local_180,&local_1a0,&local_1c0,0);
      local_1d0 = CONCAT44(uStack_16c,local_170);
      uStack_1d8 = uStack_178;
      local_1e0 = local_180;
      uStack_1c8 = uStack_168;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,&local_1e0);
    }
    break;
  case 0x10:
    switch((uint)local_2b0) {
    case 5:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      cVar23 = FUN_0545c190(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      cVar24 = FUN_0545c190(plVar51,uVar48,0);
      puVar16 = PTR_DAT_069fb9c0;
      local_a0._0_4_ = (int)cVar23 - (int)cVar24;
      uVar48 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),local_a0);
      uVar42 = FUN_05903c00(param_1);
      uVar25 = FUN_0545c190(uVar48,uVar42,0);
      local_160 = (double)CONCAT71(local_160._1_7_,uVar25);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(puVar16 + 0x30),&local_160);
      break;
    case 6:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar32 = FUN_0545c808(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      uVar33 = FUN_0545c808(plVar51,uVar48,0);
      puVar16 = PTR_DAT_069fb9c0;
      local_a0._0_4_ = (uVar32 & 0xff) - (uVar33 & 0xff);
      uVar48 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),local_a0);
      uVar42 = FUN_05903c00(param_1);
      uVar25 = FUN_0545c808(uVar48,uVar42,0);
      local_160 = (double)CONCAT71(local_160._1_7_,uVar25);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(puVar16 + 0x18),&local_160);
      break;
    case 7:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      sVar28 = FUN_0545ce5c(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      sVar29 = FUN_0545ce5c(plVar51,uVar48,0);
      puVar16 = PTR_DAT_069fb9c0;
      local_a0._0_4_ = (int)sVar28 - (int)sVar29;
      uVar48 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),local_a0);
      uVar42 = FUN_05903c00(param_1);
      uVar26 = FUN_0545ce5c(uVar48,uVar42,0);
      local_160 = (double)CONCAT62(local_160._2_6_,uVar26);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(puVar16 + 0x38),&local_160);
      break;
    case 8:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar32 = FUN_0545d380(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      uVar33 = FUN_0545d380(plVar51,uVar48,0);
      puVar16 = PTR_DAT_069fb9c0;
      local_a0._0_4_ = (uVar32 & 0xffff) - (uVar33 & 0xffff);
      uVar48 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),local_a0);
      uVar42 = FUN_05903c00(param_1);
      uVar26 = FUN_0545d380(uVar48,uVar42,0);
      local_160 = (double)CONCAT62(local_160._2_6_,uVar26);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(puVar16 + 0x40),&local_160);
      break;
    case 9:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      iVar34 = FUN_0545d8f8(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      iVar35 = FUN_0545d8f8(plVar51,uVar48,0);
      if ((long)iVar34 - (long)iVar35 != (long)(int)((long)iVar34 - (long)iVar35)) {
        plVar49 = (long *)FUN_02d96870();
        if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(plVar49,*(undefined8 *)
                                Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_TypeInfo
                      );
        }
        goto LAB_05902384;
      }
      local_a0._0_4_ = iVar34 - iVar35;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),local_a0);
      break;
    case 10:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar32 = FUN_0545dd7c(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      uVar33 = FUN_0545dd7c(plVar51,uVar48,0);
      if ((ulong)uVar32 - (ulong)uVar33 >> 0x20 != 0) {
        plVar49 = (long *)FUN_02d96870();
        if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(plVar49,*(undefined8 *)
                                Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_TypeInfo
                      );
        }
        goto LAB_05902384;
      }
      local_a0._0_4_ = uVar32 - uVar33;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x50),local_a0);
      break;
    case 0xb:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      lVar39 = FUN_0545e2d8(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      uVar37 = FUN_0545e2d8(plVar51,uVar48,0);
      if (((-1 < (long)uVar37) && (lVar39 < (long)(uVar37 | 0x8000000000000000))) ||
         (((long)uVar37 < 0 && ((long)(uVar37 + 0x7fffffffffffffff) < lVar39)))) {
        plVar49 = (long *)FUN_02d96870();
        if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(plVar49,*(undefined8 *)
                                Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_TypeInfo
                      );
        }
        goto LAB_05902384;
      }
      local_a0._0_8_ = lVar39 - uVar37;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x68),local_a0);
      break;
    case 0xc:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar37 = FUN_0545e7c4(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      uVar44 = FUN_0545e7c4(plVar51,uVar48,0);
      if (uVar37 < uVar44) {
        plVar49 = (long *)FUN_02d96870();
        if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(plVar49,*(undefined8 *)
                                Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_TypeInfo
                      );
        }
        goto LAB_05902384;
      }
      local_a0._0_8_ = uVar37 - uVar44;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),local_a0);
      break;
    case 0xd:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar52 = (float)FUN_0545ed20(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      fVar53 = (float)FUN_0545ed20(plVar51,uVar48,0);
      local_a0._0_4_ = fVar52 - fVar53;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x78),local_a0);
      break;
    case 0xe:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      dVar54 = (double)FUN_0545f064(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      dVar55 = (double)FUN_0545f064(plVar51,uVar48,0);
      local_a0._0_8_ = dVar54 - dVar55;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x80),local_a0);
      break;
    case 0xf:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      auVar56 = FUN_0545f238(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      auVar57 = FUN_0545f238(plVar51,uVar48,0);
      puVar16 = PTR_DAT_069ff840;
      if (*(int *)(*(long *)PTR_DAT_069ff840 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0 = FUN_05547a38(auVar56._0_8_,auVar56._8_8_,auVar57._0_8_,auVar57._8_8_,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x10:
      lVar39 = *(long *)PTR_DAT_069fc268;
      if (*(int *)(lVar39 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar39);
        lVar39 = *(long *)puVar16;
      }
      puVar47 = (undefined8 *)FUN_02982d2c(local_2a8,lVar39);
      uVar48 = *puVar47;
      puVar47 = (undefined8 *)FUN_02982d2c(plVar51,*(undefined8 *)PTR_DAT_069fd8d8);
      local_a0._0_8_ = FUN_054c5218(uVar48,*puVar47,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x11:
      if ((local_2a8 == (long *)0x0) || (lVar39 = *(long *)PTR_DAT_069fc268, *local_2a8 != lVar39))
      {
        lVar39 = *(long *)PTR_DAT_069fd8d8;
        if (*(int *)(lVar39 + 0xe4) == 0) {
          thunk_FUN_02df485c(lVar39);
          lVar39 = *(long *)puVar17;
        }
        puVar47 = (undefined8 *)FUN_02982d2c(local_2a8,lVar39);
        uVar48 = *puVar47;
        puVar47 = (undefined8 *)FUN_02982d2c(plVar51,*(undefined8 *)puVar17);
        local_a0._0_8_ = FUN_054ffe14(uVar48,*puVar47,0);
        plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar17,local_a0);
      }
      else {
        if (*(int *)(lVar39 + 0xe4) == 0) {
          thunk_FUN_02df485c(lVar39);
          lVar39 = *(long *)puVar16;
        }
        puVar47 = (undefined8 *)FUN_02982d2c(local_2a8,lVar39);
        uVar48 = *puVar47;
        puVar47 = (undefined8 *)FUN_02982d2c(plVar51,*(undefined8 *)puVar16);
        local_a0._0_8_ = FUN_054ca4f4(uVar48,*puVar47,0);
        plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)PTR_DAT_069fd8d8,local_a0);
      }
      break;
    default:
      goto switchD_058fd09c_caseD_10;
    case 0x1c:
      uVar26 = FUN_05979fe0(local_2a8,0);
      uVar27 = FUN_05979fe0(plVar51,0);
      puVar16 = PTR_DAT_06a0d0f8;
      if (*(int *)(*(long *)PTR_DAT_06a0d0f8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar26 = FUN_0594d09c(uVar26,uVar27,0);
      local_a0._0_2_ = uVar26;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x1f:
      if (local_2a8 == (long *)0x0) goto LAB_059016a0;
      if (((*local_2a8 == *(long *)PTR_DAT_069fd8d8) && (plVar51 != (long *)0x0)) &&
         (*plVar51 == *(long *)PTR_DAT_06a0d100)) {
        local_d0 = FUN_0597c404(plVar51,0);
        if (*(int *)(*(long *)puVar18 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar18);
        }
        uVar48 = FUN_0594fb2c(local_d0,0);
        puVar16 = PTR_DAT_069fc268;
        if (*(int *)(*(long *)PTR_DAT_069fc268 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        puVar47 = (undefined8 *)FUN_02982d2c(local_2a8,*(undefined8 *)puVar17);
        local_160 = (double)FUN_054c5218(uVar48,*puVar47,0);
        uVar48 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,&local_160);
        auVar58 = FUN_0597c404(uVar48,0);
        local_a0._0_8_ = auVar58._0_8_;
        local_a0._8_4_ = auVar58._8_4_;
        plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar18,local_a0);
      }
      else {
        if (*local_2a8 != *(long *)PTR_DAT_06a0d100) goto LAB_0590139c;
        if (plVar51 == (long *)0x0) goto LAB_05901694;
        if (*plVar51 != *(long *)PTR_DAT_069fd8d8) goto LAB_0590149c;
        local_e0 = FUN_0597c404(local_2a8,0);
        if (*(int *)(*(long *)puVar18 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar18);
        }
        uVar48 = FUN_0594fb2c(local_e0,0);
        puVar16 = PTR_DAT_069fc268;
        if (*(int *)(*(long *)PTR_DAT_069fc268 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        puVar47 = (undefined8 *)FUN_02982d2c(plVar51,*(undefined8 *)puVar17);
        local_160 = (double)FUN_054c5218(uVar48,*puVar47,0);
        uVar48 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,&local_160);
        auVar58 = FUN_0597c404(uVar48,0);
        local_a0._0_8_ = auVar58._0_8_;
        local_a0._8_4_ = auVar58._8_4_;
        plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar18,local_a0);
      }
      break;
    case 0x20:
      FUN_0597b2bc(&local_160,local_2a8,0);
      local_a0._8_8_ = uStack_158;
      local_a0._0_8_ = local_160;
      local_90 = CONCAT44(local_90._4_4_,(undefined4)local_150);
      FUN_0597b2bc(&local_180,plVar51,0);
      puVar16 = PTR_DAT_06a0d108;
      uStack_158 = uStack_178;
      local_160 = local_180;
      local_150 = CONCAT44(local_150._4_4_,local_170);
      if (*(int *)(*(long *)PTR_DAT_06a0d108 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uStack_1f8 = local_a0._8_8_;
      local_200 = (double)local_a0._0_8_;
      local_1f0 = (undefined4)local_90;
      uStack_218 = uStack_158;
      local_220 = local_160;
      local_210 = (undefined4)local_150;
      FUN_05953cac(&local_180,&local_200,&local_220,0);
      uStack_1d8 = uStack_178;
      local_1e0 = local_180;
      local_1d0 = CONCAT44(local_1d0._4_4_,local_170);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,&local_1e0);
      break;
    case 0x21:
      auVar56 = FUN_0597ac7c(local_2a8,0);
      auVar57 = FUN_0597ac7c(plVar51,0);
      puVar16 = PTR_DAT_06a0d110;
      if (*(int *)(*(long *)PTR_DAT_06a0d110 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0 = FUN_05957940(auVar56._0_8_,auVar56._8_8_,auVar57._0_8_,auVar57._8_8_,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x23:
      uVar30 = FUN_0597a1b4(local_2a8,0);
      uVar31 = FUN_0597a1b4(plVar51,0);
      puVar16 = PTR_DAT_06a0d120;
      if (*(int *)(*(long *)PTR_DAT_06a0d120 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0._0_4_ = FUN_05959ce4(uVar30,uVar31,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x24:
      uVar48 = FUN_0597a448(local_2a8,0);
      uVar42 = FUN_0597a448(plVar51,0);
      puVar16 = PTR_DAT_06a0d128;
      if (*(int *)(*(long *)PTR_DAT_06a0d128 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0._0_8_ = FUN_0595b0fc(uVar48,uVar42,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x25:
      auVar56 = FUN_0597a7ec(local_2a8,0);
      auVar57 = FUN_0597a7ec(plVar51,0);
      puVar16 = PTR_DAT_06a0d130;
      if (*(int *)(*(long *)PTR_DAT_06a0d130 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0 = FUN_0595c610(auVar56._0_8_,auVar56._8_8_,auVar57._0_8_,auVar57._8_8_,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x26:
      auVar56 = FUN_0597be50(local_2a8,0);
      auVar57 = FUN_0597be50(plVar51,0);
      puVar16 = PTR_DAT_06a0d138;
      if (*(int *)(*(long *)PTR_DAT_06a0d138 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0 = FUN_0595dfec(auVar56._0_8_,auVar56._8_8_,auVar57._0_8_,auVar57._8_8_,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x27:
      uVar48 = FUN_0597b888(local_2a8,0);
      uVar42 = FUN_0597b888(plVar51,0);
      puVar16 = PTR_DAT_06a0d140;
      if (*(int *)(*(long *)PTR_DAT_06a0d140 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0._0_8_ = FUN_0595f750(uVar48,uVar42,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
    }
    break;
  case 0x11:
    switch((uint)local_2b0) {
    case 5:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      cVar23 = FUN_0545c190(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      cVar24 = FUN_0545c190(plVar51,uVar48,0);
      puVar16 = PTR_DAT_069fb9c0;
      local_a0._0_4_ = (int)cVar24 * (int)cVar23;
      uVar48 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),local_a0);
      uVar42 = FUN_05903c00(param_1);
      uVar25 = FUN_0545c190(uVar48,uVar42,0);
      local_160 = (double)CONCAT71(local_160._1_7_,uVar25);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(puVar16 + 0x30),&local_160);
      break;
    case 6:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar32 = FUN_0545c808(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      uVar33 = FUN_0545c808(plVar51,uVar48,0);
      puVar16 = PTR_DAT_069fb9c0;
      local_a0._0_4_ = (uVar33 & 0xff) * (uVar32 & 0xff);
      uVar48 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),local_a0);
      uVar42 = FUN_05903c00(param_1);
      uVar25 = FUN_0545c808(uVar48,uVar42,0);
      local_160 = (double)CONCAT71(local_160._1_7_,uVar25);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(puVar16 + 0x18),&local_160);
      break;
    case 7:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      sVar28 = FUN_0545ce5c(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      sVar29 = FUN_0545ce5c(plVar51,uVar48,0);
      puVar16 = PTR_DAT_069fb9c0;
      local_a0._0_4_ = (int)sVar29 * (int)sVar28;
      uVar48 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),local_a0);
      uVar42 = FUN_05903c00(param_1);
      uVar26 = FUN_0545ce5c(uVar48,uVar42,0);
      local_160 = (double)CONCAT62(local_160._2_6_,uVar26);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(puVar16 + 0x38),&local_160);
      break;
    case 8:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar32 = FUN_0545d380(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      uVar33 = FUN_0545d380(plVar51,uVar48,0);
      puVar16 = PTR_DAT_069fb9c0;
      local_a0._0_4_ = (uVar33 & 0xffff) * (uVar32 & 0xffff);
      uVar48 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),local_a0);
      uVar42 = FUN_05903c00(param_1);
      uVar26 = FUN_0545d380(uVar48,uVar42,0);
      local_160 = (double)CONCAT62(local_160._2_6_,uVar26);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(puVar16 + 0x40),&local_160);
      break;
    case 9:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      iVar34 = FUN_0545d8f8(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      iVar35 = FUN_0545d8f8(plVar51,uVar48,0);
      if ((long)iVar35 * (long)iVar34 - (long)(int)((long)iVar35 * (long)iVar34) != 0) {
        plVar49 = (long *)FUN_02d96870();
        if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(plVar49,*(undefined8 *)
                                Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_TypeInfo
                      );
        }
        goto LAB_05902384;
      }
      local_a0._0_4_ = iVar35 * iVar34;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),local_a0);
      break;
    case 10:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar32 = FUN_0545dd7c(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      uVar33 = FUN_0545dd7c(plVar51,uVar48,0);
      if (((ulong)uVar32 * (ulong)uVar33 & 0xffffffff00000000) != 0) {
        plVar49 = (long *)FUN_02d96870();
        if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(plVar49,*(undefined8 *)
                                Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_TypeInfo
                      );
        }
        goto LAB_05902384;
      }
      local_a0._0_4_ = uVar33 * uVar32;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x50),local_a0);
      break;
    case 0xb:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar37 = FUN_0545e2d8(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      uVar44 = FUN_0545e2d8(plVar51,uVar48,0);
      if (uVar37 != 0) {
        uVar45 = -uVar37;
        if (-1 < (long)uVar37) {
          uVar45 = uVar37;
        }
        uVar2 = -uVar44;
        if (-1 < (long)uVar44) {
          uVar2 = uVar44;
        }
        uVar1 = 0x7fffffffffffffff;
        if ((0 < (long)uVar37 || 0 < (long)uVar44) && ((long)uVar44 < 1 || (long)uVar37 < 1)) {
          uVar1 = 0x8000000000000000;
        }
        uVar3 = 0;
        if (uVar45 != 0) {
          uVar3 = uVar1 / uVar45;
        }
        if (uVar3 < uVar2) {
          plVar49 = (long *)FUN_02d96870();
          if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96724(plVar49,*(undefined8 *)
                                  Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_TypeInfo
                        );
          }
          goto LAB_05902384;
        }
      }
      local_a0._0_8_ = uVar44 * uVar37;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x68),local_a0);
      break;
    case 0xc:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar37 = FUN_0545e7c4(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      uVar44 = FUN_0545e7c4(plVar51,uVar48,0);
      auVar56._8_8_ = 0;
      auVar56._0_8_ = uVar44;
      auVar57._8_8_ = 0;
      auVar57._0_8_ = uVar37;
      if (SUB168(auVar56 * auVar57,8) != 0) {
        plVar49 = (long *)FUN_02d96870();
        if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(plVar49,*(undefined8 *)
                                Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_TypeInfo
                      );
        }
        goto LAB_05902384;
      }
      local_a0._0_8_ = uVar44 * uVar37;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),local_a0);
      break;
    case 0xd:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar52 = (float)FUN_0545ed20(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      fVar53 = (float)FUN_0545ed20(plVar51,uVar48,0);
      local_a0._0_4_ = fVar52 * fVar53;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x78),local_a0);
      break;
    case 0xe:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      dVar54 = (double)FUN_0545f064(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      dVar55 = (double)FUN_0545f064(plVar51,uVar48,0);
      local_a0._0_8_ = dVar54 * dVar55;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x80),local_a0);
      break;
    case 0xf:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      auVar56 = FUN_0545f238(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      auVar57 = FUN_0545f238(plVar51,uVar48,0);
      puVar16 = PTR_DAT_069ff840;
      if (*(int *)(*(long *)PTR_DAT_069ff840 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0 = FUN_05547aec(auVar56._0_8_,auVar56._8_8_,auVar57._0_8_,auVar57._8_8_,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    default:
      goto switchD_058fd09c_caseD_10;
    case 0x1c:
      uVar26 = FUN_05979fe0(local_2a8,0);
      uVar27 = FUN_05979fe0(plVar51,0);
      puVar16 = PTR_DAT_06a0d0f8;
      if (*(int *)(*(long *)PTR_DAT_06a0d0f8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar26 = FUN_0594d1b0(uVar26,uVar27,0);
      local_a0._0_2_ = uVar26;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x20:
      FUN_0597b2bc(&local_160,local_2a8,0);
      local_a0._8_8_ = uStack_158;
      local_a0._0_8_ = local_160;
      local_90 = CONCAT44(local_90._4_4_,(undefined4)local_150);
      FUN_0597b2bc(&local_180,plVar51,0);
      puVar16 = PTR_DAT_06a0d108;
      uStack_158 = uStack_178;
      local_160 = local_180;
      local_150 = CONCAT44(local_150._4_4_,local_170);
      if (*(int *)(*(long *)PTR_DAT_06a0d108 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uStack_238 = local_a0._8_8_;
      local_240 = (double)local_a0._0_8_;
      local_230 = (undefined4)local_90;
      uStack_258 = uStack_158;
      local_260 = local_160;
      local_250 = (undefined4)local_150;
      FUN_05953d60(&local_180,&local_240,&local_260,0);
      uStack_1d8 = uStack_178;
      local_1e0 = local_180;
      local_1d0 = CONCAT44(local_1d0._4_4_,local_170);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,&local_1e0);
      break;
    case 0x21:
      auVar56 = FUN_0597ac7c(local_2a8,0);
      auVar57 = FUN_0597ac7c(plVar51,0);
      puVar16 = PTR_DAT_06a0d110;
      if (*(int *)(*(long *)PTR_DAT_06a0d110 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0 = FUN_05957a68(auVar56._0_8_,auVar56._8_8_,auVar57._0_8_,auVar57._8_8_,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x23:
      uVar30 = FUN_0597a1b4(local_2a8,0);
      uVar31 = FUN_0597a1b4(plVar51,0);
      puVar16 = PTR_DAT_06a0d120;
      if (*(int *)(*(long *)PTR_DAT_06a0d120 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0._0_4_ = FUN_05959df4(uVar30,uVar31,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x24:
      uVar48 = FUN_0597a448(local_2a8,0);
      uVar42 = FUN_0597a448(plVar51,0);
      puVar16 = PTR_DAT_06a0d128;
      if (*(int *)(*(long *)PTR_DAT_06a0d128 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0._0_8_ = FUN_0595b22c(uVar48,uVar42,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x25:
      auVar56 = FUN_0597a7ec(local_2a8,0);
      auVar57 = FUN_0597a7ec(plVar51,0);
      puVar16 = PTR_DAT_06a0d130;
      if (*(int *)(*(long *)PTR_DAT_06a0d130 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0 = FUN_0595c744(auVar56._0_8_,auVar56._8_8_,auVar57._0_8_,auVar57._8_8_,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x26:
      auVar56 = FUN_0597be50(local_2a8,0);
      auVar57 = FUN_0597be50(plVar51,0);
      puVar16 = PTR_DAT_06a0d138;
      if (*(int *)(*(long *)PTR_DAT_06a0d138 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0 = FUN_0595e194(auVar56._0_8_,auVar56._8_8_,auVar57._0_8_,auVar57._8_8_,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x27:
      uVar48 = FUN_0597b888(local_2a8,0);
      uVar42 = FUN_0597b888(plVar51,0);
      puVar16 = PTR_DAT_06a0d140;
      if (*(int *)(*(long *)PTR_DAT_06a0d140 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0._0_8_ = FUN_0595f86c(uVar48,uVar42,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
    }
    break;
  case 0x12:
    switch((uint)local_2b0) {
    case 5:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      cVar23 = FUN_0545c190(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      cVar24 = FUN_0545c190(plVar51,uVar48,0);
      puVar16 = PTR_DAT_069fb9c0;
      sVar28 = 0;
      if (cVar24 != '\0') {
        sVar28 = (short)cVar23 / (short)cVar24;
      }
      local_a0._0_4_ = (int)sVar28;
      uVar48 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),local_a0);
      uVar42 = FUN_05903c00(param_1);
      uVar25 = FUN_0545c190(uVar48,uVar42,0);
      local_160 = (double)CONCAT71(local_160._1_7_,uVar25);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(puVar16 + 0x30),&local_160);
      break;
    case 6:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar32 = FUN_0545c808(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      uVar33 = FUN_0545c808(plVar51,uVar48,0);
      puVar16 = PTR_DAT_069fb9c0;
      local_a0._0_4_ = 0;
      if ((uVar33 & 0xff) != 0) {
        local_a0._0_4_ = (uVar32 & 0xff) / (uVar33 & 0xff);
      }
      uVar48 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),local_a0);
      uVar42 = FUN_05903c00(param_1);
      uVar25 = FUN_0545c808(uVar48,uVar42,0);
      local_160 = (double)CONCAT71(local_160._1_7_,uVar25);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(puVar16 + 0x18),&local_160);
      break;
    case 7:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      sVar28 = FUN_0545ce5c(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      sVar29 = FUN_0545ce5c(plVar51,uVar48,0);
      puVar16 = PTR_DAT_069fb9c0;
      local_a0._0_4_ = 0;
      if (sVar29 != 0) {
        local_a0._0_4_ = (int)sVar28 / (int)sVar29;
      }
      uVar48 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),local_a0);
      uVar42 = FUN_05903c00(param_1);
      uVar26 = FUN_0545ce5c(uVar48,uVar42,0);
      local_160 = (double)CONCAT62(local_160._2_6_,uVar26);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(puVar16 + 0x38),&local_160);
      break;
    case 8:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar32 = FUN_0545d380(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      uVar33 = FUN_0545d380(plVar51,uVar48,0);
      puVar16 = PTR_DAT_069fb9c0;
      local_a0._0_4_ = 0;
      if ((uVar33 & 0xffff) != 0) {
        local_a0._0_4_ = (uVar32 & 0xffff) / (uVar33 & 0xffff);
      }
      uVar48 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),local_a0);
      uVar42 = FUN_05903c00(param_1);
      uVar26 = FUN_0545d380(uVar48,uVar42,0);
      local_160 = (double)CONCAT62(local_160._2_6_,uVar26);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(puVar16 + 0x40),&local_160);
      break;
    case 9:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      iVar34 = FUN_0545d8f8(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      iVar35 = FUN_0545d8f8(plVar51,uVar48,0);
      local_a0._0_4_ = 0;
      if (iVar35 != 0) {
        local_a0._0_4_ = iVar34 / iVar35;
      }
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),local_a0);
      break;
    case 10:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar32 = FUN_0545dd7c(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      uVar33 = FUN_0545dd7c(plVar51,uVar48,0);
      local_a0._0_4_ = 0;
      if (uVar33 != 0) {
        local_a0._0_4_ = uVar32 / uVar33;
      }
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x50),local_a0);
      break;
    case 0xb:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      lVar39 = FUN_0545e2d8(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      lVar40 = FUN_0545e2d8(plVar51,uVar48,0);
      local_a0._0_8_ = 0;
      if (lVar40 != 0) {
        local_a0._0_8_ = lVar39 / lVar40;
      }
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x68),local_a0);
      break;
    case 0xc:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar37 = FUN_0545e7c4(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      uVar44 = FUN_0545e7c4(plVar51,uVar48,0);
      local_a0._0_8_ = 0;
      if (uVar44 != 0) {
        local_a0._0_8_ = uVar37 / uVar44;
      }
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),local_a0);
      break;
    case 0xd:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar52 = (float)FUN_0545ed20(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      fVar53 = (float)FUN_0545ed20(plVar51,uVar48,0);
      local_a0._0_4_ = fVar52 / fVar53;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x78),local_a0);
      break;
    case 0xe:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      dVar54 = (double)FUN_0545f064(plVar51,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      dVar55 = (double)FUN_0545f064(local_2a8,uVar48,0);
      local_a0._0_8_ = dVar55 / dVar54;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x80),local_a0);
      break;
    case 0xf:
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      auVar56 = FUN_0545f238(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      auVar57 = FUN_0545f238(plVar51,uVar48,0);
      puVar16 = PTR_DAT_069ff840;
      if (*(int *)(*(long *)PTR_DAT_069ff840 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0 = FUN_05547b9c(auVar56._0_8_,auVar56._8_8_,auVar57._0_8_,auVar57._8_8_,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    default:
      goto switchD_058fd09c_caseD_10;
    case 0x1c:
      uVar26 = FUN_05979fe0(local_2a8,0);
      uVar27 = FUN_05979fe0(plVar51,0);
      puVar16 = PTR_DAT_06a0d0f8;
      if (*(int *)(*(long *)PTR_DAT_06a0d0f8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar26 = FUN_0594d2c8(uVar26,uVar27,0);
      local_a0._0_2_ = uVar26;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x20:
      FUN_0597b2bc(&local_160,local_2a8,0);
      local_a0._8_8_ = uStack_158;
      local_a0._0_8_ = local_160;
      local_90 = CONCAT44(local_90._4_4_,(undefined4)local_150);
      FUN_0597b2bc(&local_180,plVar51,0);
      puVar16 = PTR_DAT_06a0d108;
      uStack_158 = uStack_178;
      local_160 = local_180;
      local_150 = CONCAT44(local_150._4_4_,local_170);
      if (*(int *)(*(long *)PTR_DAT_06a0d108 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uStack_278 = local_a0._8_8_;
      local_280 = (double)local_a0._0_8_;
      local_270 = (undefined4)local_90;
      uStack_298 = uStack_158;
      local_2a0 = local_160;
      local_290 = (undefined4)local_150;
      FUN_05954718(&local_180,&local_280,&local_2a0,0);
      uStack_1d8 = uStack_178;
      local_1e0 = local_180;
      local_1d0 = CONCAT44(local_1d0._4_4_,local_170);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,&local_1e0);
      break;
    case 0x21:
      auVar56 = FUN_0597ac7c(local_2a8,0);
      auVar57 = FUN_0597ac7c(plVar51,0);
      puVar16 = PTR_DAT_06a0d110;
      if (*(int *)(*(long *)PTR_DAT_06a0d110 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0 = FUN_05957b90(auVar56._0_8_,auVar56._8_8_,auVar57._0_8_,auVar57._8_8_,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x23:
      uVar30 = FUN_0597a1b4(local_2a8,0);
      uVar31 = FUN_0597a1b4(plVar51,0);
      puVar16 = PTR_DAT_06a0d120;
      if (*(int *)(*(long *)PTR_DAT_06a0d120 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0._0_4_ = FUN_05959f3c(uVar30,uVar31,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x24:
      uVar48 = FUN_0597a448(local_2a8,0);
      uVar42 = FUN_0597a448(plVar51,0);
      puVar16 = PTR_DAT_06a0d128;
      if (*(int *)(*(long *)PTR_DAT_06a0d128 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0._0_8_ = FUN_0595b374(uVar48,uVar42,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x25:
      auVar56 = FUN_0597a7ec(local_2a8,0);
      auVar57 = FUN_0597a7ec(plVar51,0);
      puVar16 = PTR_DAT_06a0d130;
      if (*(int *)(*(long *)PTR_DAT_06a0d130 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0 = FUN_0595c8ac(auVar56._0_8_,auVar56._8_8_,auVar57._0_8_,auVar57._8_8_,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x26:
      auVar56 = FUN_0597be50(local_2a8,0);
      auVar57 = FUN_0597be50(plVar51,0);
      puVar16 = PTR_DAT_06a0d138;
      if (*(int *)(*(long *)PTR_DAT_06a0d138 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0 = FUN_0595e2cc(auVar56._0_8_,auVar56._8_8_,auVar57._0_8_,auVar57._8_8_,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
      break;
    case 0x27:
      uVar48 = FUN_0597b888(local_2a8,0);
      uVar42 = FUN_0597b888(plVar51,0);
      puVar16 = PTR_DAT_06a0d140;
      if (*(int *)(*(long *)PTR_DAT_06a0d140 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_a0._0_8_ = FUN_0595f988(uVar48,uVar42,0);
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
    }
    break;
  case 0x14:
    if (0x25 < (uint)local_2b0) goto switchD_058fd09c_caseD_10;
    if ((1L << (local_2b0 & 0x3f) & 0x3810000fe0U) == 0) {
      if (local_2b0 != 0xc) goto switchD_058fd09c_caseD_10;
      uVar48 = FUN_05903c00(param_1);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar44 = FUN_0545e7c4(local_2a8,uVar48,0);
      uVar48 = FUN_05903c00(param_1);
      uVar45 = FUN_0545e7c4(plVar51,uVar48,0);
      uVar37 = 0;
      if (uVar45 != 0) {
        uVar37 = uVar44 / uVar45;
      }
      local_a0._0_8_ = uVar44 - uVar37 * uVar45;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),local_a0);
    }
    else {
      if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_02df485c();
      }
      uVar37 = FUN_0596fb30(local_2b0,0);
      if ((uVar37 & 1) == 0) {
        uVar48 = FUN_05903c00(param_1);
        if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        lVar40 = FUN_0545e2d8(local_2a8,uVar48,0);
        uVar48 = FUN_05903c00(param_1);
        lVar41 = FUN_0545e2d8(plVar51,uVar48,0);
        lVar39 = 0;
        if (lVar41 != 0) {
          lVar39 = lVar40 / lVar41;
        }
        local_a0._0_8_ = lVar40 - lVar39 * lVar41;
        uVar48 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x68),local_a0);
        if (*(int *)(*(long *)puVar19 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar42 = FUN_0596fab4(local_2b0,0);
        uVar43 = FUN_05903c00(param_1);
        plVar49 = (long *)FUN_0545ac40(uVar48,uVar42,uVar43,0);
      }
      else {
        auVar56 = FUN_0597a7ec(local_2a8,0);
        auVar57 = FUN_0597a7ec(plVar51,0);
        puVar16 = PTR_DAT_06a0d130;
        if (*(int *)(*(long *)PTR_DAT_06a0d130 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        local_f8 = FUN_0595c9e4(auVar56._0_8_,auVar56._8_8_,auVar57._0_8_,auVar57._8_8_,0);
        if ((uint)local_2b0 == 0x1c) {
          if (*(int *)(*(long *)puVar16 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar26 = FUN_0595ce7c(local_f8,0);
          local_a0._0_2_ = uVar26;
          plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)PTR_DAT_06a0d0f8,local_a0);
        }
        else if ((uint)local_2b0 == 0x23) {
          if (*(int *)(*(long *)puVar16 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          local_a0._0_4_ = FUN_0595cf34(local_f8,0);
          plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)PTR_DAT_06a0d120,local_a0);
        }
        else if ((uint)local_2b0 == 0x24) {
          if (*(int *)(*(long *)puVar16 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          local_a0._0_8_ = FUN_0595cf90(local_f8,0);
          plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)PTR_DAT_06a0d128,local_a0);
        }
        else {
          local_a0 = local_f8;
          plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar16,local_a0);
        }
      }
    }
    break;
  case 0x1a:
    local_2a8 = (long *)FUN_05902bdc(param_3,param_5,param_6,param_7);
    plVar49 = *(long **)PTR_DAT_06a1d5c0;
    if (*(int *)((long)plVar49 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      plVar49 = *(long **)PTR_DAT_06a1d5c0;
    }
    if (local_2a8 == *(long **)plVar49[0x17]) {
LAB_058fd518:
      if (*(int *)((long)plVar49 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        goto FUN_058fe0c8;
      }
      goto LAB_058fe0d4;
    }
    if (param_3 == (long *)0x0) {
      if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_05902384;
    }
    uVar37 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
    if ((uVar37 & 1) != 0) {
      if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_02df485c();
      }
      uVar37 = FUN_05970094(local_2a8,0);
      if ((uVar37 & 1) != 0) {
        plVar49 = *(long **)PTR_DAT_06a1d5c0;
        goto LAB_058fd518;
      }
    }
    puVar17 = PTR_DAT_06a0d0f0;
    puVar16 = PTR_DAT_069fb9c0;
    if (local_2a8 == (long *)0x0) {
LAB_05901264:
      plVar51 = (long *)FUN_05902bdc(param_4,param_5,param_6,param_7);
      goto switchD_058fd09c_caseD_10;
    }
    if (*local_2a8 == *(long *)(PTR_DAT_069fb9c0 + 0x28)) {
      pcVar38 = (char *)FUN_02982d2c();
      if (*pcVar38 == '\0') {
        local_a0._0_8_ = local_a0._0_8_ & 0xffffffffffffff00;
        plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(puVar16 + 0x28),local_a0);
      }
      else {
LAB_058fe318:
        plVar51 = (long *)FUN_05902bdc(param_4,param_5,param_6,param_7);
        plVar49 = *(long **)PTR_DAT_06a1d5c0;
        if (*(int *)((long)plVar49 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          plVar49 = *(long **)PTR_DAT_06a1d5c0;
        }
        if (plVar51 == *(long **)plVar49[0x17]) {
LAB_058fe3b0:
          if (*(int *)((long)plVar49 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            goto FUN_058fe0c8;
          }
          goto LAB_058fe0d4;
        }
        if (param_4 == (long *)0x0) {
          if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          goto LAB_05902384;
        }
        uVar37 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
        if ((uVar37 & 1) != 0) {
          if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) ==
              0) {
            thunk_FUN_02df485c();
          }
          uVar37 = FUN_05970094(plVar51,0);
          if ((uVar37 & 1) != 0) {
            plVar49 = *(long **)PTR_DAT_06a1d5c0;
            goto LAB_058fe3b0;
          }
        }
        puVar17 = PTR_DAT_06a0d0f0;
        if (plVar51 == (long *)0x0) goto LAB_05901694;
        if (*plVar51 == *(long *)(puVar16 + 0x28)) {
          puVar46 = (undefined1 *)FUN_02982d2c(plVar51);
          local_a0[0] = *puVar46;
          plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(puVar16 + 0x28),local_a0);
        }
        else {
          if (*plVar51 != *(long *)PTR_DAT_06a0d0f0) goto LAB_0590149c;
          puVar46 = (undefined1 *)FUN_02982d2c(plVar51,*(undefined8 *)PTR_DAT_06a0d0f0);
          local_e4[0] = *puVar46;
          if (*(int *)(*(long *)puVar17 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar25 = FUN_0594c294(local_e4,0);
          local_a0._0_8_ = CONCAT71(local_a0._1_7_,uVar25) & 0xffffffffffffff01;
          plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(puVar16 + 0x28),local_a0);
        }
      }
    }
    else {
      if (*local_2a8 != *(long *)PTR_DAT_06a0d0f0) goto LAB_05901264;
      puVar46 = (undefined1 *)FUN_02982d2c(local_2a8,*(undefined8 *)PTR_DAT_06a0d0f0);
      local_e4[0] = *puVar46;
      if (*(int *)(*(long *)puVar17 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar37 = FUN_0594c2a4(local_e4,0);
      if ((uVar37 & 1) == 0) goto LAB_058fe318;
      local_a0._0_8_ = local_a0._0_8_ & 0xffffffffffffff00;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(puVar16 + 0x28),local_a0);
    }
    break;
  case 0x1b:
    local_2a8 = (long *)FUN_05902bdc(param_3,param_5,param_6,param_7);
    lVar39 = *(long *)PTR_DAT_06a1d5c0;
    if (*(int *)(lVar39 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar39 = *(long *)PTR_DAT_06a1d5c0;
    }
    if (local_2a8 != (long *)**(ulong **)(lVar39 + 0xb8)) {
      if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_02df485c();
      }
      uVar37 = FUN_05970094(local_2a8,0);
      puVar16 = PTR_DAT_069fb9c0;
      if ((uVar37 & 1) == 0) {
        if ((local_2a8 == (long *)0x0) ||
           ((*local_2a8 != *(long *)(PTR_DAT_069fb9c0 + 0x28) &&
            (*local_2a8 != *(long *)PTR_DAT_06a0d0f0)))) {
          plVar51 = (long *)FUN_05902bdc(param_4,param_5,param_6,param_7);
          goto switchD_058fd09c_caseD_10;
        }
        pcVar38 = (char *)FUN_02982d2c();
        if (*pcVar38 != '\0') {
          local_a0[0] = 1;
          plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(puVar16 + 0x28),local_a0);
          break;
        }
      }
    }
    plVar51 = (long *)FUN_05902bdc(param_4,param_5,param_6,param_7);
    lVar39 = *(long *)PTR_DAT_06a1d5c0;
    if (*(int *)(lVar39 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar39 = *(long *)PTR_DAT_06a1d5c0;
    }
    puVar16 = System_Runtime_Serialization_XmlObjectSerializer_TypeInfo;
    plVar49 = local_2a8;
    if (plVar51 != (long *)**(ulong **)(lVar39 + 0xb8)) {
      if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_02df485c();
      }
      uVar37 = FUN_05970094(plVar51,0);
      if ((uVar37 & 1) == 0) {
        lVar39 = *(long *)PTR_DAT_06a1d5c0;
        if (*(int *)(lVar39 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar39 = *(long *)PTR_DAT_06a1d5c0;
        }
        plVar49 = plVar51;
        if (local_2a8 != (long *)**(ulong **)(lVar39 + 0xb8)) {
          if (*(int *)(*(long *)puVar16 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar37 = FUN_05970094(local_2a8,0);
          puVar17 = PTR_DAT_06a0d0f0;
          puVar16 = PTR_DAT_069fb9c0;
          if ((uVar37 & 1) == 0) {
            if (plVar51 == (long *)0x0) goto switchD_058fd09c_caseD_10;
            if (*plVar51 == *(long *)(PTR_DAT_069fb9c0 + 0x28)) {
              pcVar38 = (char *)FUN_02982d2c(plVar51);
              uVar25 = *pcVar38 != '\0';
            }
            else {
              if (*plVar51 != *(long *)PTR_DAT_06a0d0f0) goto switchD_058fd09c_caseD_10;
              puVar46 = (undefined1 *)FUN_02982d2c(plVar51,*(undefined8 *)PTR_DAT_06a0d0f0);
              local_e4[0] = *puVar46;
              if (*(int *)(*(long *)puVar17 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar25 = FUN_0594c294(local_e4,0);
            }
            local_a0._0_8_ = CONCAT71(local_a0._1_7_,uVar25) & 0xffffffffffffff01;
            plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(puVar16 + 0x28),local_a0);
          }
        }
      }
    }
    break;
  case 0x27:
    lVar39 = FUN_05902bdc(param_3,param_5,param_6,param_7);
    plVar49 = *(long **)PTR_DAT_06a1d5c0;
    if (*(int *)((long)plVar49 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      plVar49 = *(long **)PTR_DAT_06a1d5c0;
    }
    if (lVar39 == *(long *)plVar49[0x17]) {
LAB_058fd698:
      local_a0._0_8_ = local_a0._0_8_ & 0xffffffffffffff00;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x28),local_a0);
    }
    else {
      if (param_3 == (long *)0x0) {
        if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        goto LAB_05902384;
      }
      uVar37 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar37 & 1) != 0) {
        if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0
           ) {
          thunk_FUN_02df485c();
        }
        uVar37 = FUN_05970094(lVar39,0);
        if ((uVar37 & 1) != 0) goto LAB_058fd698;
      }
      local_a0[0] = 1;
      plVar49 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x28),local_a0);
    }
  }
LAB_058fe0dc:
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
LAB_05902384:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar49);
}


