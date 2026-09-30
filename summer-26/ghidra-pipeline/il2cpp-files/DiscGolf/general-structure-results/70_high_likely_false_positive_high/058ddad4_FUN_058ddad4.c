/*
FUNCTION_NAME: FUN_058ddad4
ENTRY_POINT: 058ddad4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 84
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_11;eye_or_gaze_keyword_boost_only
*/


long FUN_058ddad4(long param_1,undefined4 param_2,long *param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  bool bVar17;
  byte bVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  undefined8 *puVar26;
  int *piVar27;
  double *pdVar28;
  undefined1 *puVar29;
  undefined8 uVar30;
  undefined4 *puVar31;
  undefined *puVar32;
  long lVar33;
  undefined8 uVar34;
  int iVar35;
  long lVar36;
  long *plVar37;
  undefined8 uVar38;
  long lVar39;
  undefined1 auVar40 [16];
  undefined8 local_b8;
  double local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60 [8];
  undefined8 uStack_58;
  long local_48;
  
  lVar25 = tpidr_el0;
  local_48 = *(long *)(lVar25 + 0x28);
  if ((DAT_06dc0e3e & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069ff7e0);
    FUN_02d965b8(PTR_DAT_06a1d5c0);
    FUN_02d965b8(System_Runtime_Serialization_XmlObjectSerializer_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0ac28);
    FUN_02d965b8(PTR_DAT_069fc268);
    FUN_02d965b8(PTR_DAT_06a0ad50);
    FUN_02d965b8(PTR_DAT_069ff840);
    FUN_02d965b8(PTR_DAT_069ff848);
    FUN_02d965b8(PTR_DAT_069fbb48);
    FUN_02d965b8(PTR_DAT_06a0d148);
    FUN_02d965b8(PTR_DAT_069fd8d8);
    DAT_06dc0e3e = 1;
  }
  puVar16 = UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo;
  puVar15 = System_Runtime_Serialization_XmlObjectSerializer_TypeInfo;
  puVar32 = PTR_DAT_06a1d5c0;
  puVar14 = PTR_DAT_06a0d148;
  puVar13 = PTR_DAT_069fb9c0;
  local_98._8_8_ = 0;
  local_88 = 0;
  local_a0 = 0;
  local_98._0_8_ = 0;
  auVar40 = ZEXT816(0);
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  switch(param_2) {
  case 2:
    if (param_3 != (long *)0x0) {
      if ((int)param_3[3] == 0) goto LAB_058deddc;
      plVar37 = param_3 + 4;
      lVar33 = *plVar37;
      if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_02df485c();
      }
      uVar24 = FUN_0596fff4(lVar33,0);
      auVar40._8_8_ = local_98._8_8_;
      auVar40._0_8_ = local_98._0_8_;
      if ((uVar24 & 1) != 0) {
LAB_058de424:
        puVar13 = PTR_DAT_06a1d5c0;
        lVar33 = *(long *)PTR_DAT_06a1d5c0;
        if (*(int *)(lVar33 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar33 = *(long *)puVar13;
        }
LAB_058de6ec:
        plVar37 = *(long **)(lVar33 + 0xb8);
LAB_058de6f0:
        lVar33 = *plVar37;
        goto LAB_058de8c0;
      }
      if ((*(uint *)(param_3 + 3) & 0xfffffffe) == 0) goto LAB_058deddc;
      plVar22 = param_3 + 5;
      lVar33 = *plVar22;
      if (*(int *)(*(long *)puVar15 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar24 = FUN_0596fff4(lVar33,0);
      puVar13 = PTR_DAT_06a0d148;
      auVar40._8_8_ = local_98._8_8_;
      auVar40._0_8_ = local_98._0_8_;
      if ((uVar24 & 1) != 0) goto LAB_058de424;
      uVar24 = (ulong)*(uint *)(param_3 + 3);
      if (uVar24 == 0) goto LAB_058deddc;
      if (((long *)*plVar37 != (long *)0x0) && (*(long *)*plVar37 == *(long *)PTR_DAT_06a0d148)) {
        puVar26 = (undefined8 *)thunk_FUN_02dd328c();
        uStack_78 = puVar26[1];
        local_80 = *puVar26;
        uStack_68 = puVar26[3];
        uStack_70 = puVar26[2];
        if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        lVar33 = FUN_05960fec(&local_80,0);
        if ((lVar33 == 0) ||
           (lVar39 = thunk_FUN_02dd3048(lVar33,*(undefined8 *)(*param_3 + 0x40)), lVar39 != 0)) {
          auVar40._8_8_ = local_98._8_8_;
          auVar40._0_8_ = local_98._0_8_;
          if ((int)param_3[3] == 0) goto LAB_058deddc;
          param_3[4] = lVar33;
          LeanTween__value(plVar37,lVar33);
          uVar24 = param_3[3];
          goto LAB_058ddcd0;
        }
LAB_058df044:
        uVar38 = thunk_FUN_02de0bec();
        auVar12._8_8_ = uStack_58;
        auVar12._0_8_ = local_60;
        auVar40._8_8_ = local_98._8_8_;
        auVar40._0_8_ = local_98._0_8_;
        if (*(long *)(lVar25 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar38,0);
        }
        goto LAB_058df088;
      }
LAB_058ddcd0:
      puVar13 = PTR_DAT_06a0d148;
      auVar40._8_8_ = local_98._8_8_;
      auVar40._0_8_ = local_98._0_8_;
      if ((uVar24 & 0xfffffffe) == 0) goto LAB_058deddc;
      if (((long *)*plVar22 != (long *)0x0) && (*(long *)*plVar22 == *(long *)PTR_DAT_06a0d148)) {
        puVar26 = (undefined8 *)thunk_FUN_02dd328c();
        uStack_78 = puVar26[1];
        local_80 = *puVar26;
        uStack_68 = puVar26[3];
        uStack_70 = puVar26[2];
        if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        lVar33 = FUN_05960fec(&local_80,0);
        if ((lVar33 != 0) &&
           (lVar39 = thunk_FUN_02dd3048(lVar33,*(undefined8 *)(*param_3 + 0x40)), lVar39 == 0))
        goto LAB_058df044;
        auVar40._8_8_ = local_98._8_8_;
        auVar40._0_8_ = local_98._0_8_;
        if ((*(uint *)(param_3 + 3) & 0xfffffffe) == 0) goto LAB_058deddc;
        param_3[5] = lVar33;
        LeanTween__value(plVar22,lVar33);
        uVar24 = param_3[3];
      }
      puVar13 = PTR_DAT_069fb9c0;
      auVar12._8_8_ = uStack_58;
      auVar12._0_8_ = local_60;
      auVar40._8_8_ = local_98._8_8_;
      auVar40._0_8_ = local_98._0_8_;
      if ((uVar24 & 0xfffffffe) == 0) goto LAB_058deddc;
      plVar22 = (long *)*plVar22;
      if (plVar22 != (long *)0x0) {
        if (*plVar22 != *(long *)(PTR_DAT_069fb9c0 + 0x90)) goto LAB_058dee04;
        plVar37 = (long *)*plVar37;
        if ((plVar37 != (long *)0x0) && (*plVar37 != *(long *)(PTR_DAT_069fb9c0 + 0x90))) {
          if (*(long *)(lVar25 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0(plVar37);
          }
          goto LAB_058df088;
        }
        uVar20 = FUN_0537232c(plVar22,plVar37,4,0);
        uVar38 = *(undefined8 *)(puVar13 + 0x48);
        goto LAB_058de598;
      }
    }
    break;
  default:
    thunk_FUN_02dfd288(UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo);
    FUN_0297e1b4();
    lVar33 = thunk_FUN_02dfd288(puVar16);
    iVar21 = *(int *)(param_1 + 0x20);
    uVar38 = **(undefined8 **)(lVar33 + 0xb8);
    FUN_02979e58(uVar38);
    lVar33 = FUN_0297be74(uVar38,(long)iVar21);
    FUN_02979e58();
    uVar38 = FUN_058fc010(*(undefined8 *)(lVar33 + 0x10),0);
    goto LAB_058defc4;
  case 4:
    if (param_3 != (long *)0x0) {
      iVar21 = (int)param_3[3];
      auVar40 = ZEXT816(0);
      if (iVar21 != 0) {
        plVar37 = param_3 + 4;
        if (((long *)*plVar37 == (long *)0x0) || (*(long *)*plVar37 != *(long *)PTR_DAT_06a0d148)) {
LAB_058de1a8:
          auVar40._8_8_ = local_98._8_8_;
          auVar40._0_8_ = local_98._0_8_;
          if (iVar21 != 0) {
            plVar37 = (long *)*plVar37;
            if (plVar37 != (long *)0x0) {
              if (*plVar37 != *(long *)(PTR_DAT_069fb9c0 + 0x90)) goto LAB_058dee04;
              uVar38 = *(undefined8 *)(PTR_DAT_069fb9c0 + 0x48);
              local_60._0_4_ = (int)plVar37[2];
              goto LAB_058de75c;
            }
            break;
          }
        }
        else {
          puVar26 = (undefined8 *)thunk_FUN_02dd328c();
          uStack_78 = puVar26[1];
          local_80 = *puVar26;
          uStack_68 = puVar26[3];
          uStack_70 = puVar26[2];
          if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar24 = FUN_05960fdc(&local_80,0);
          auVar40._8_8_ = local_98._8_8_;
          auVar40._0_8_ = local_98._0_8_;
          if ((uVar24 & 1) != 0) goto LAB_058de424;
          if ((int)param_3[3] != 0) {
            if ((long *)*plVar37 == (long *)0x0) break;
            if (*(long *)(*(long *)*plVar37 + 0x40) != *(long *)(*(long *)puVar14 + 0x40))
            goto LAB_058dee04;
            puVar26 = (undefined8 *)thunk_FUN_02dd328c();
            uStack_78 = puVar26[1];
            local_80 = *puVar26;
            uStack_68 = puVar26[3];
            uStack_70 = puVar26[2];
            if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            lVar33 = FUN_05960fec(&local_80,0);
            if ((lVar33 != 0) &&
               (lVar39 = thunk_FUN_02dd3048(lVar33,*(undefined8 *)(*param_3 + 0x40)), lVar39 == 0))
            goto LAB_058df044;
            auVar40._8_8_ = local_98._8_8_;
            auVar40._0_8_ = local_98._0_8_;
            if ((int)param_3[3] != 0) {
              param_3[4] = lVar33;
              LeanTween__value(plVar37,lVar33);
              iVar21 = (int)param_3[3];
              goto LAB_058de1a8;
            }
          }
        }
      }
      goto LAB_058deddc;
    }
    break;
  case 0x10:
    if (param_3 != (long *)0x0) {
      auVar40 = ZEXT816(0);
      if ((*(uint *)(param_3 + 3) & 0xfffffffe) == 0) goto LAB_058deddc;
      if ((long *)param_3[5] == (long *)0x0) break;
      if (*(long *)(*(long *)param_3[5] + 0x40) ==
          *(long *)(*(long *)(PTR_DAT_069fb9c0 + 0x48) + 0x40)) {
        piVar27 = (int *)thunk_FUN_02dd328c();
        auVar40._8_8_ = local_98._8_8_;
        auVar40._0_8_ = local_98._0_8_;
        if (2 < *(uint *)(param_3 + 3)) {
          if ((long *)param_3[6] == (long *)0x0) break;
          if (*(long *)(*(long *)param_3[6] + 0x40) != *(long *)(*(long *)(puVar13 + 0x48) + 0x40))
          goto LAB_058dee04;
          iVar21 = *piVar27 + -1;
          piVar27 = (int *)thunk_FUN_02dd328c();
          puVar14 = PTR_DAT_06a0d148;
          auVar40._8_8_ = local_98._8_8_;
          auVar40._0_8_ = local_98._0_8_;
          puVar32 = PTR_DAT_06a0d1d0;
          if ((iVar21 < 0) || (iVar19 = *piVar27, puVar32 = PTR_DAT_06a0d398, iVar19 < 0)) {
            uVar38 = thunk_FUN_02dfd288(puVar32);
            uVar34 = thunk_FUN_02dfd288(Oculus_Avatar2_CAPI_EyePoseCallback_TypeInfo);
            uVar38 = FUN_0590989c(uVar38,uVar34,0);
            goto LAB_058defc4;
          }
          if (iVar19 == 0) {
            lVar33 = *(long *)(puVar13 + 0x90);
            goto LAB_058de808;
          }
          iVar35 = (int)param_3[3];
          if (iVar35 != 0) {
            if (((long *)param_3[4] != (long *)0x0) &&
               (*(long *)param_3[4] == *(long *)PTR_DAT_06a0d148)) {
              puVar26 = (undefined8 *)FUN_02982d2c();
              uStack_78 = puVar26[1];
              local_80 = *puVar26;
              uStack_68 = puVar26[3];
              uStack_70 = puVar26[2];
              if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar38 = FUN_05960fec(&local_80,0);
              FUN_0297c314(param_3,uVar38);
              FUN_02978e90(param_3,0,uVar38);
              iVar35 = (int)param_3[3];
            }
            auVar40._8_8_ = local_98._8_8_;
            auVar40._0_8_ = local_98._0_8_;
            if (iVar35 != 0) {
              plVar37 = (long *)param_3[4];
              if (plVar37 == (long *)0x0) break;
              if (*plVar37 == *(long *)(puVar13 + 0x90)) {
                iVar35 = (int)plVar37[2];
                if (iVar21 <= iVar35) {
                  iVar1 = iVar35 - iVar21;
                  if (iVar19 + iVar21 <= iVar35) {
                    iVar1 = iVar19;
                  }
                  lVar33 = FUN_0536f444(plVar37,iVar21,iVar1,0);
                  goto LAB_058de8c0;
                }
                goto LAB_058de424;
              }
              goto LAB_058dee04;
            }
          }
        }
        goto LAB_058deddc;
      }
LAB_058dee04:
      auVar12._8_8_ = uStack_58;
      auVar12._0_8_ = local_60;
      auVar40._8_8_ = local_98._8_8_;
      auVar40._0_8_ = local_98._0_8_;
      if (*(long *)(lVar25 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0();
      }
      goto LAB_058df088;
    }
    break;
  case 0x12:
    if (param_3 != (long *)0x0) {
      auVar40 = ZEXT816(0);
      if ((int)param_3[3] != 0) {
        lVar33 = param_3[4];
        if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0
           ) {
          thunk_FUN_02df485c();
        }
        uVar24 = FUN_0596fff4(lVar33,0);
        auVar40._8_8_ = local_98._8_8_;
        auVar40._0_8_ = local_98._0_8_;
        uVar2 = *(uint *)(param_3 + 3);
        auVar11 = local_98;
        if ((uVar24 & 1) == 0) {
joined_r0x058dea14:
          auVar40 = auVar11;
          if (uVar2 != 0) {
            lVar33 = param_3[4];
            goto LAB_058de8c0;
          }
        }
        else if ((uVar2 & 0xfffffffe) != 0) {
          lVar33 = param_3[5];
          goto LAB_058de8c0;
        }
      }
LAB_058deddc:
      auVar12._8_8_ = uStack_58;
      auVar12._0_8_ = local_60;
      if (*(long *)(lVar25 + 0x28) == local_48) {
        local_98 = auVar40;
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      goto LAB_058df088;
    }
    break;
  case 0x13:
    lVar33 = *(long *)(param_1 + 0x28);
    if (lVar33 != 0) {
      auVar40 = ZEXT816(0);
      if (*(int *)(lVar33 + 0x18) == 0) goto LAB_058deddc;
      plVar37 = *(long **)(lVar33 + 0x20);
      if (plVar37 != (long *)0x0) {
        uVar38 = (**(code **)(*plVar37 + 0x1a8))
                           (plVar37,param_4,param_5,*(undefined8 *)(*plVar37 + 0x1b0));
        uVar24 = FUN_05903c6c(uVar38,0);
        auVar12._8_8_ = uStack_58;
        auVar12._0_8_ = local_60;
        auVar10._8_8_ = local_98._8_8_;
        auVar10._0_8_ = local_98._0_8_;
        auVar40._8_8_ = local_98._8_8_;
        auVar40._0_8_ = local_98._0_8_;
        lVar33 = *(long *)(param_1 + 0x28);
        if ((uVar24 & 1) == 0) {
          if (lVar33 != 0) {
            auVar40 = auVar10;
            if (2 < *(uint *)(lVar33 + 0x18)) {
              plVar37 = *(long **)(lVar33 + 0x30);
              goto joined_r0x058de778;
            }
            goto LAB_058deddc;
          }
        }
        else if (lVar33 != 0) {
          if ((*(uint *)(lVar33 + 0x18) & 0xfffffffe) == 0) goto LAB_058deddc;
          plVar37 = *(long **)(lVar33 + 0x28);
joined_r0x058de778:
          if (plVar37 != (long *)0x0) {
            auVar40 = auVar10;
            if (*(long *)(lVar25 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x058de7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar25 = (**(code **)(*plVar37 + 0x1a8))
                                 (plVar37,param_4,param_5,*(undefined8 *)(*plVar37 + 0x1b0));
              return lVar25;
            }
            goto LAB_058df088;
          }
        }
      }
    }
    break;
  case 0x14:
    if (*(int *)(param_1 + 0x24) != 2) {
      uVar38 = FUN_05909904(*(undefined8 *)(param_1 + 0x18),0);
      goto LAB_058defc4;
    }
    if (param_3 != (long *)0x0) {
      auVar40 = ZEXT816(0);
      if ((int)param_3[3] != 0) {
        lVar33 = param_3[4];
        lVar39 = *(long *)PTR_DAT_06a1d5c0;
        if (*(int *)(lVar39 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar39 = *(long *)puVar32;
        }
        puVar13 = PTR_DAT_069fb9c0;
        if (lVar33 == **(long **)(lVar39 + 0xb8)) {
          if (*(int *)(lVar39 + 0xe4) != 0) goto LAB_058de8c0;
          thunk_FUN_02df485c();
          lVar33 = *(long *)puVar32;
LAB_058de808:
          plVar37 = *(long **)(lVar33 + 0xb8);
          goto LAB_058de6f0;
        }
        auVar40 = local_98;
        if ((*(uint *)(param_3 + 3) & 0xfffffffe) != 0) {
          uVar38 = FUN_02979eb8(param_3[5],*(undefined8 *)(PTR_DAT_069fb9c0 + 0xe0));
          if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) ==
              0) {
            thunk_FUN_02df485c(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo);
          }
          iVar21 = System_Runtime_Interop_UnsafeNativeMethods__EventUnregister(uVar38,0);
          auVar40._8_8_ = local_98._8_8_;
          auVar40._0_8_ = local_98._0_8_;
          if ((int)param_3[3] != 0) {
            if (param_3[4] == 0) break;
            uVar34 = thunk_FUN_02da6564(param_3[4],0);
            iVar19 = System_Runtime_Interop_UnsafeNativeMethods__EventUnregister(uVar34,0);
            auVar11._8_8_ = local_98._8_8_;
            auVar11._0_8_ = local_98._0_8_;
            auVar40._8_8_ = local_98._8_8_;
            auVar40._0_8_ = local_98._0_8_;
            auVar7._8_8_ = local_98._8_8_;
            auVar7._0_8_ = local_98._0_8_;
            if ((iVar21 == 0x17) && (iVar19 == 0x12)) {
              auVar40 = auVar7;
              if ((int)param_3[3] != 0) {
                plVar37 = (long *)param_3[4];
                uVar38 = FUN_05903c00(param_1,0);
                if ((plVar37 != (long *)0x0) && (*plVar37 != *(long *)(puVar13 + 0x90)))
                goto LAB_058df008;
                _local_60 = FUN_0597cfcc(plVar37,uVar38,0);
                puVar26 = (undefined8 *)PTR_DAT_06a0ac28;
                goto LAB_058de2f4;
              }
            }
            else {
              if (iVar21 == 1) {
                uVar2 = *(uint *)(param_3 + 3);
                goto joined_r0x058dea14;
              }
              if ((iVar21 == 0x13) && (iVar19 == 0x12)) {
                if ((int)param_3[3] != 0) {
                  plVar37 = (long *)param_3[4];
                  local_60 = (undefined1  [8])0x0;
                  uStack_58 = 0.0;
                  auVar12 = ZEXT816(0);
                  if ((plVar37 != (long *)0x0) && (*plVar37 != *(long *)(puVar13 + 0x90))) {
                    auVar40 = auVar11;
                    if (*(long *)(lVar25 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96be0(plVar37,*(long *)(puVar13 + 0x90));
                    }
                    goto LAB_058df088;
                  }
                  FUN_054e027c(local_60,plVar37,0);
                  puVar26 = (undefined8 *)PTR_DAT_069ff848;
LAB_058decb0:
                  uStack_a8 = uStack_58;
                  local_b0 = (double)local_60;
                  uVar38 = *puVar26;
                  pdVar28 = &local_b0;
                  goto LAB_058de8b8;
                }
              }
              else {
                uVar24 = FUN_059074e8(iVar19,0);
                if ((uVar24 & 1) != 0) {
                  uVar24 = FUN_05904640(iVar21,0);
                  auVar40._8_8_ = local_98._8_8_;
                  auVar40._0_8_ = local_98._0_8_;
                  auVar9._8_8_ = local_98._8_8_;
                  auVar9._0_8_ = local_98._0_8_;
                  auVar8._8_8_ = local_98._8_8_;
                  auVar8._0_8_ = local_98._0_8_;
                  if ((uVar24 & 1) != 0) {
                    if (iVar19 == 0xf) {
                      if ((int)param_3[3] != 0) {
                        lVar33 = param_3[4];
                        uVar34 = *(undefined8 *)PTR_DAT_06a0ad50;
                        if (*(int *)(*(long *)(puVar13 + 0xe0) + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        uVar34 = FUN_054f73b4(uVar34,0);
                        uVar30 = FUN_05903c00(param_1,0);
                        uVar34 = FUN_0597d1f4(lVar33,0xf,uVar34,uVar30,0);
                        puVar13 = PTR_DAT_069ff840;
                        pdVar28 = (double *)FUN_02982d2c(uVar34,*(undefined8 *)PTR_DAT_069ff840);
                        uStack_58 = pdVar28[1];
                        local_60 = (undefined1  [8])*pdVar28;
                        uVar34 = *(undefined8 *)puVar13;
LAB_058deda8:
                        uVar34 = thunk_FUN_02dd2d7c(uVar34,local_60);
                        uVar30 = FUN_05903c00(param_1,0);
                        lVar33 = FUN_0597d1f4(uVar34,iVar21,uVar38,uVar30,0);
                        goto LAB_058de8c0;
                      }
                    }
                    else if (iVar19 == 0xe) {
                      auVar40 = auVar9;
                      if ((int)param_3[3] != 0) {
                        lVar33 = param_3[4];
                        lVar39 = *(long *)(puVar13 + 0x80);
                        if (*(int *)(*(long *)(puVar13 + 0xe0) + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        uVar34 = FUN_054f73b4(lVar39 + 0x20,0);
                        uVar30 = FUN_05903c00(param_1,0);
                        uVar34 = FUN_0597d1f4(lVar33,0xe,uVar34,uVar30,0);
                        pdVar28 = (double *)FUN_02982d2c(uVar34,*(undefined8 *)(puVar13 + 0x80));
                        local_60 = (undefined1  [8])*pdVar28;
                        uVar34 = *(undefined8 *)(puVar13 + 0x80);
                        goto LAB_058deda8;
                      }
                    }
                    else {
                      if (iVar19 != 0xd) goto LAB_058de9bc;
                      auVar40 = auVar8;
                      if ((int)param_3[3] != 0) {
                        lVar33 = param_3[4];
                        lVar39 = *(long *)(puVar13 + 0x78);
                        if (*(int *)(*(long *)(puVar13 + 0xe0) + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        uVar34 = FUN_054f73b4(lVar39 + 0x20,0);
                        uVar30 = FUN_05903c00(param_1,0);
                        uVar34 = FUN_0597d1f4(lVar33,0xd,uVar34,uVar30,0);
                        puVar31 = (undefined4 *)FUN_02982d2c(uVar34,*(undefined8 *)(puVar13 + 0x78))
                        ;
                        uVar34 = *(undefined8 *)(puVar13 + 0x78);
                        local_60._0_4_ = *puVar31;
                        goto LAB_058deda8;
                      }
                    }
                    goto LAB_058deddc;
                  }
                }
LAB_058de9bc:
                auVar40._8_8_ = local_98._8_8_;
                auVar40._0_8_ = local_98._0_8_;
                if ((int)param_3[3] != 0) {
                  lVar33 = param_3[4];
                  uVar34 = FUN_05903c00(param_1,0);
                  auVar12._8_8_ = uStack_58;
                  auVar12._0_8_ = local_60;
                  auVar40._8_8_ = local_98._8_8_;
                  auVar40._0_8_ = local_98._0_8_;
                  if (*(long *)(lVar25 + 0x28) == local_48) {
                    lVar25 = FUN_0597d1f4(lVar33,iVar21,uVar38,uVar34,0);
                    return lVar25;
                  }
                  goto LAB_058df088;
                }
              }
            }
          }
        }
      }
      goto LAB_058deddc;
    }
    break;
  case 0x15:
    if (param_3 != (long *)0x0) {
      auVar40 = ZEXT816(0);
      if ((int)param_3[3] == 0) goto LAB_058deddc;
      lVar33 = param_3[4];
      uVar38 = FUN_05903c00(param_1,0);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_069ff7e0);
      }
      uVar20 = FUN_0545d8f8(lVar33,uVar38,0);
      uVar38 = *(undefined8 *)(PTR_DAT_069fb9c0 + 0x48);
LAB_058de598:
      local_60._0_4_ = uVar20;
LAB_058de8b0:
      pdVar28 = (double *)local_60;
LAB_058de8b8:
      lVar33 = thunk_FUN_02dd2d7c(uVar38,pdVar28);
LAB_058de8c0:
      auVar40 = local_98;
      auVar12 = _local_60;
      if (*(long *)(lVar25 + 0x28) == local_48) {
        return lVar33;
      }
      goto LAB_058df088;
    }
    break;
  case 0x16:
    if (param_3 != (long *)0x0) {
      auVar40 = ZEXT816(0);
      if ((int)param_3[3] != 0) {
        if (param_3[4] == 0) break;
        uVar38 = thunk_FUN_02da6564(param_3[4],0);
        if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0
           ) {
          thunk_FUN_02df485c(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo);
        }
        iVar21 = System_Runtime_Interop_UnsafeNativeMethods__EventUnregister(uVar38,0);
        puVar13 = PTR_DAT_069fb9c0;
        auVar40._8_8_ = local_98._8_8_;
        auVar40._0_8_ = local_98._0_8_;
        auVar6._8_8_ = local_98._8_8_;
        auVar6._0_8_ = local_98._0_8_;
        auVar5._8_8_ = local_98._8_8_;
        auVar5._0_8_ = local_98._0_8_;
        auVar4._8_8_ = local_98._8_8_;
        auVar4._0_8_ = local_98._0_8_;
        if (iVar21 < 10) {
          if (iVar21 == 3) {
            if ((int)param_3[3] != 0) {
              puVar29 = (undefined1 *)
                        FUN_02982d2c(param_3[4],*(undefined8 *)(PTR_DAT_069fb9c0 + 0x28));
              uVar38 = *(undefined8 *)(puVar13 + 0x28);
              local_60[0] = *puVar29;
              goto LAB_058de75c;
            }
          }
          else {
            if (iVar21 != 9) goto LAB_058def0c;
            auVar40 = auVar6;
            if ((int)param_3[3] != 0) {
              piVar27 = (int *)FUN_02982d2c(param_3[4],*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48));
              uVar38 = *(undefined8 *)(puVar13 + 0x28);
              bVar17 = *piVar27 == 0;
              goto LAB_058de8a8;
            }
          }
        }
        else if (iVar21 == 0xe) {
          auVar40 = auVar5;
          if ((int)param_3[3] != 0) {
            pdVar28 = (double *)FUN_02982d2c(param_3[4],*(undefined8 *)(PTR_DAT_069fb9c0 + 0x80));
            uVar38 = *(undefined8 *)(puVar13 + 0x28);
            bVar17 = false;
            if (!NAN(*pdVar28)) {
              bVar17 = *pdVar28 == 0.0;
            }
LAB_058de8a8:
            bVar17 = !bVar17;
LAB_058de8ac:
            local_60[0] = bVar17;
            goto LAB_058de8b0;
          }
        }
        else {
          if (iVar21 != 0x12) {
LAB_058def0c:
            FUN_02979e58(param_3);
            uVar38 = FUN_0297be74(param_3,0);
            FUN_02979e58();
            uVar38 = thunk_FUN_02da6564(uVar38,0);
            lVar33 = *(long *)(PTR_DAT_069fb9c0 + 0x28);
            FUN_0297e1b4(*(undefined8 *)(PTR_DAT_069fb9c0 + 0xe0));
            uVar34 = FUN_054f73b4(lVar33 + 0x20,0);
            uVar38 = FUN_05909954(uVar38,uVar34,0);
            goto LAB_058defc4;
          }
          auVar40 = auVar4;
          if ((int)param_3[3] != 0) {
            plVar37 = (long *)param_3[4];
            if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x28) + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            if ((plVar37 != (long *)0x0) && (*plVar37 != *(long *)(puVar13 + 0x90))) {
LAB_058df008:
              auVar12._8_8_ = uStack_58;
              auVar12._0_8_ = local_60;
              auVar40._8_8_ = local_98._8_8_;
              auVar40._0_8_ = local_98._0_8_;
              if (*(long *)(lVar25 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96be0(plVar37);
              }
              goto LAB_058df088;
            }
            bVar18 = FUN_05455938(plVar37,0);
            uVar38 = *(undefined8 *)(puVar13 + 0x28);
            bVar17 = (bool)(bVar18 & 1);
            goto LAB_058de8ac;
          }
        }
      }
      goto LAB_058deddc;
    }
    break;
  case 0x17:
    if (param_3 != (long *)0x0) {
      auVar40 = ZEXT816(0);
      if ((int)param_3[3] == 0) goto LAB_058deddc;
      lVar33 = param_3[4];
      uVar38 = FUN_05903c00(param_1,0);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_069ff7e0);
      }
      uVar38 = FUN_0545f714(lVar33,uVar38,0);
      local_60 = (undefined1  [8])uVar38;
      puVar26 = (undefined8 *)PTR_DAT_069fc268;
LAB_058de2f4:
      uVar38 = *puVar26;
      goto LAB_058de8b0;
    }
    break;
  case 0x18:
    if (param_3 != (long *)0x0) {
      auVar40 = ZEXT816(0);
      if ((int)param_3[3] == 0) goto LAB_058deddc;
      lVar33 = param_3[4];
      uVar38 = FUN_05903c00(param_1,0);
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_069ff7e0);
      }
      local_60 = (undefined1  [8])FUN_0545f064(lVar33,uVar38,0);
      uVar38 = *(undefined8 *)(PTR_DAT_069fb9c0 + 0x80);
LAB_058de75c:
      pdVar28 = (double *)local_60;
      goto LAB_058de8b8;
    }
    break;
  case 0x19:
    if (param_3 != (long *)0x0) {
      auVar40 = ZEXT816(0);
      if ((int)param_3[3] != 0) {
        lVar33 = param_3[4];
        uVar38 = FUN_05903c00(param_1,0);
        if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)PTR_DAT_069ff7e0);
        }
        auVar12._8_8_ = uStack_58;
        auVar12._0_8_ = local_60;
        auVar40._8_8_ = local_98._8_8_;
        auVar40._0_8_ = local_98._0_8_;
        if (*(long *)(lVar25 + 0x28) == local_48) {
          lVar25 = FUN_0545f8d4(lVar33,uVar38,0);
          return lVar25;
        }
        goto LAB_058df088;
      }
      goto LAB_058deddc;
    }
    break;
  case 0x1a:
    if (param_3 != (long *)0x0) {
      auVar40 = ZEXT816(0);
      if ((int)param_3[3] != 0) {
        if (param_3[4] == 0) break;
        uVar38 = thunk_FUN_02da6564(param_3[4],0);
        if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0
           ) {
          thunk_FUN_02df485c(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo);
        }
        uVar24 = System_Runtime_Interop_UnsafeNativeMethods__EventUnregister(uVar38,0);
        uVar23 = FUN_059049b0(uVar24,0);
        auVar40._8_8_ = local_98._8_8_;
        auVar40._0_8_ = local_98._0_8_;
        if ((uVar23 & 1) == 0) {
          uVar24 = FUN_059049a0(uVar24 & 0xffffffff,0);
          puVar13 = UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo;
          auVar40._8_8_ = local_98._8_8_;
          auVar40._0_8_ = local_98._0_8_;
          if ((uVar24 & 1) == 0) {
            thunk_FUN_02dfd288(UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo);
            FUN_0297e1b4();
            lVar33 = thunk_FUN_02dfd288(puVar13);
            iVar21 = *(int *)(param_1 + 0x20);
            uVar38 = **(undefined8 **)(lVar33 + 0xb8);
            FUN_02979e58(uVar38);
            lVar33 = FUN_0297be74(uVar38,(long)iVar21);
            FUN_02979e58();
            uVar38 = FUN_05909b78(*(undefined8 *)(lVar33 + 0x10),1,0);
            goto LAB_058defc4;
          }
          if ((int)param_3[3] != 0) {
            lVar33 = param_3[4];
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            puVar13 = PTR_DAT_069fb9c0;
            pdVar28 = (double *)FUN_02982d2c(lVar33,*(undefined8 *)(PTR_DAT_069fb9c0 + 0x80));
            uVar38 = *(undefined8 *)(puVar13 + 0x80);
            local_60 = (undefined1  [8])ABS(*pdVar28);
            goto LAB_058de75c;
          }
        }
        else if ((int)param_3[3] != 0) {
          lVar33 = param_3[4];
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          puVar13 = PTR_DAT_069fb9c0;
          plVar37 = (long *)FUN_02982d2c(lVar33,*(undefined8 *)(PTR_DAT_069fb9c0 + 0x68));
          lVar33 = *plVar37;
          auVar3._8_8_ = uStack_58;
          auVar3._0_8_ = lVar33;
          uVar38 = *(undefined8 *)(puVar13 + 0x68);
          local_60 = (undefined1  [8])-lVar33;
          if (-1 < lVar33) {
            _local_60 = auVar3;
          }
          goto LAB_058de8b0;
        }
      }
      goto LAB_058deddc;
    }
    break;
  case 0x1c:
    thunk_FUN_02dfd288(UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo);
    FUN_0297e1b4();
    lVar33 = thunk_FUN_02dfd288(puVar16);
    iVar21 = *(int *)(param_1 + 0x20);
    uVar38 = **(undefined8 **)(lVar33 + 0xb8);
    FUN_02979e58(uVar38);
    lVar33 = FUN_0297be74(uVar38,(long)iVar21);
    FUN_02979e58();
    uVar38 = FUN_059097fc(*(undefined8 *)(lVar33 + 0x10),0);
LAB_058defc4:
    auVar12._8_8_ = uStack_58;
    auVar12._0_8_ = local_60;
    auVar40._8_8_ = local_98._8_8_;
    auVar40._0_8_ = local_98._0_8_;
    if (*(long *)(lVar25 + 0x28) == local_48) {
      uVar34 = thunk_FUN_02dfd288(Oculus_Avatar2_CAPI_FacePoseCallback_TypeInfo);
LAB_058defe4:
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar38,uVar34);
    }
    goto LAB_058df088;
  case 0x1d:
    if (param_3 != (long *)0x0) {
      auVar40 = ZEXT816(0);
      if ((int)param_3[3] != 0) {
        lVar33 = param_3[4];
        if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0
           ) {
          thunk_FUN_02df485c();
        }
        uVar24 = FUN_0596fff4(lVar33,0);
        puVar13 = PTR_DAT_06a0d148;
        auVar40._8_8_ = local_98._8_8_;
        auVar40._0_8_ = local_98._0_8_;
        if ((uVar24 & 1) != 0) goto LAB_058de424;
        iVar21 = (int)param_3[3];
        if (iVar21 != 0) {
          if (((long *)param_3[4] != (long *)0x0) &&
             (*(long *)param_3[4] == *(long *)PTR_DAT_06a0d148)) {
            puVar26 = (undefined8 *)FUN_02982d2c();
            uStack_78 = puVar26[1];
            local_80 = *puVar26;
            uStack_68 = puVar26[3];
            uStack_70 = puVar26[2];
            if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar38 = FUN_05960fec(&local_80,0);
            FUN_0297c314(param_3,uVar38);
            FUN_02978e90(param_3,0,uVar38);
            iVar21 = (int)param_3[3];
          }
          auVar40._8_8_ = local_98._8_8_;
          auVar40._0_8_ = local_98._0_8_;
          if (iVar21 != 0) {
            plVar37 = (long *)param_3[4];
            if (plVar37 != (long *)0x0) {
              if (*plVar37 != *(long *)(PTR_DAT_069fb9c0 + 0x90)) goto LAB_058dee04;
              lVar33 = FUN_05371f5c(plVar37,0);
              goto LAB_058de8c0;
            }
            break;
          }
        }
      }
      goto LAB_058deddc;
    }
    break;
  case 0x26:
    if (param_3 != (long *)0x0) {
      auVar40 = ZEXT816(0);
      if ((int)param_3[3] != 0) {
        lVar39 = param_3[4];
        lVar33 = *(long *)PTR_DAT_06a1d5c0;
        if (*(int *)(lVar33 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar33 = *(long *)puVar32;
        }
        auVar40._8_8_ = local_98._8_8_;
        auVar40._0_8_ = local_98._0_8_;
        lVar36 = **(long **)(lVar33 + 0xb8);
        if (lVar39 == lVar36) {
LAB_058de6dc:
          if (*(int *)(lVar33 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar33 = *(long *)puVar32;
          }
          goto LAB_058de6ec;
        }
        if ((*(uint *)(param_3 + 3) & 0xfffffffe) != 0) {
          lVar39 = param_3[5];
          if (*(int *)(lVar33 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar33 = *(long *)puVar32;
            lVar36 = **(long **)(lVar33 + 0xb8);
          }
          auVar40._8_8_ = local_98._8_8_;
          auVar40._0_8_ = local_98._0_8_;
          if (lVar39 == lVar36) goto LAB_058de6dc;
          if (2 < *(uint *)(param_3 + 3)) {
            lVar39 = param_3[6];
            if (*(int *)(lVar33 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar33 = *(long *)puVar32;
              lVar36 = **(long **)(lVar33 + 0xb8);
            }
            puVar13 = PTR_DAT_069fc268;
            auVar40._8_8_ = local_98._8_8_;
            auVar40._0_8_ = local_98._0_8_;
            if (lVar39 == lVar36) goto LAB_058de6dc;
            if ((int)param_3[3] != 0) {
              puVar26 = (undefined8 *)FUN_02982d2c(param_3[4],*(undefined8 *)PTR_DAT_069fc268);
              local_88 = *puVar26;
              if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              iVar21 = FUN_054c555c(&local_88,0);
              puVar32 = PTR_DAT_06a0ac28;
              puVar14 = PTR_DAT_069fb9c0;
              if (iVar21 == 2) {
                if (*(int *)(*(long *)PTR_DAT_06a0ac28 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                local_98 = FUN_054cb9dc(0);
                local_a0 = FUN_054cbd6c(local_98,0);
                puVar15 = PTR_DAT_069fd8d8;
                if (*(int *)(*(long *)PTR_DAT_069fd8d8 + 0xe4) == 0) {
                  thunk_FUN_02df485c(*(long *)PTR_DAT_069fd8d8);
                }
                iVar21 = Oculus_Skinning_GpuSkinning_OvrGpuCombinerDrawCall___cctor(&local_a0,0);
                auVar40 = local_98;
                if ((*(uint *)(param_3 + 3) & 0xfffffffe) != 0) {
                  piVar27 = (int *)FUN_02982d2c(param_3[5],*(undefined8 *)(puVar14 + 0x48));
                  if (iVar21 == *piVar27) goto LAB_058deb14;
                  if (*(int *)(*(long *)puVar32 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  auVar40 = FUN_054cb9dc(0);
                  local_98 = auVar40;
                  local_a0 = FUN_054cbd6c(local_98,0);
                  if (*(int *)(*(long *)puVar15 + 0xe4) == 0) {
                    thunk_FUN_02df485c(*(long *)puVar15);
                  }
                  iVar21 = FUN_054ff114(&local_a0,0);
                  auVar40 = local_98;
                  if (2 < *(uint *)(param_3 + 3)) {
                    piVar27 = (int *)FUN_02982d2c(param_3[6],*(undefined8 *)(puVar14 + 0x48));
                    if (iVar21 == *piVar27) goto LAB_058deb14;
LAB_058df060:
                    uVar38 = FUN_05909dcc(0);
                    goto LAB_058df068;
                  }
                }
              }
              else {
                if (iVar21 == 1) {
                  auVar40 = local_98;
                  if ((*(uint *)(param_3 + 3) & 0xfffffffe) == 0) goto LAB_058deddc;
                  piVar27 = (int *)FUN_02982d2c(param_3[5],*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48))
                  ;
                  if (*piVar27 != 0) {
                    auVar40 = local_98;
                    if (*(uint *)(param_3 + 3) < 3) goto LAB_058deddc;
                    piVar27 = (int *)FUN_02982d2c(param_3[6],*(undefined8 *)(puVar14 + 0x48));
                    if (*piVar27 != 0) goto LAB_058df060;
                  }
                }
LAB_058deb14:
                auVar40 = local_98;
                if ((*(uint *)(param_3 + 3) & 0xfffffffe) != 0) {
                  piVar27 = (int *)FUN_02982d2c(param_3[5],*(undefined8 *)(puVar14 + 0x48));
                  if (*piVar27 < -0xe) {
LAB_058deff0:
                    uVar38 = FUN_05909d0c(0);
LAB_058df068:
                    uVar34 = thunk_FUN_02dfd288(Oculus_Avatar2_CAPI_FacePoseCallback_TypeInfo);
                    auVar12._8_8_ = uStack_58;
                    auVar12._0_8_ = local_60;
                    auVar40 = local_98;
                    if (*(long *)(lVar25 + 0x28) == local_48) goto LAB_058defe4;
                    goto LAB_058df088;
                  }
                  auVar40 = local_98;
                  if ((*(uint *)(param_3 + 3) & 0xfffffffe) != 0) {
                    piVar27 = (int *)FUN_02982d2c(param_3[5],*(undefined8 *)(puVar14 + 0x48));
                    if (0xe < *piVar27) goto LAB_058deff0;
                    auVar40 = local_98;
                    if (2 < *(uint *)(param_3 + 3)) {
                      piVar27 = (int *)FUN_02982d2c(param_3[6],*(undefined8 *)(puVar14 + 0x48));
                      if (*piVar27 < -0x3b) {
LAB_058deffc:
                        uVar38 = FUN_05909d4c(0);
                        goto LAB_058df068;
                      }
                      auVar40 = local_98;
                      if (2 < *(uint *)(param_3 + 3)) {
                        piVar27 = (int *)FUN_02982d2c(param_3[6],*(undefined8 *)(puVar14 + 0x48));
                        if (0x3b < *piVar27) goto LAB_058deffc;
                        auVar40 = local_98;
                        if ((*(uint *)(param_3 + 3) & 0xfffffffe) != 0) {
                          piVar27 = (int *)FUN_02982d2c(param_3[5],*(undefined8 *)(puVar14 + 0x48));
                          if (*piVar27 == 0xe) {
                            auVar40 = local_98;
                            if (2 < *(uint *)(param_3 + 3)) {
                              piVar27 = (int *)FUN_02982d2c(param_3[6],
                                                            *(undefined8 *)(puVar14 + 0x48));
                              if (*piVar27 < 1) goto LAB_058debec;
LAB_058df020:
                              uVar38 = FUN_05909d8c(0);
                              goto LAB_058df068;
                            }
                          }
                          else {
LAB_058debec:
                            auVar40 = local_98;
                            if ((*(uint *)(param_3 + 3) & 0xfffffffe) != 0) {
                              piVar27 = (int *)FUN_02982d2c(param_3[5],
                                                            *(undefined8 *)(puVar14 + 0x48));
                              if (*piVar27 == -0xe) {
                                auVar40 = local_98;
                                if (*(uint *)(param_3 + 3) < 3) goto LAB_058deddc;
                                piVar27 = (int *)FUN_02982d2c(param_3[6],
                                                              *(undefined8 *)(puVar14 + 0x48));
                                if (*piVar27 < 0) goto LAB_058df020;
                              }
                              uVar2 = *(uint *)(param_3 + 3);
                              auVar40 = local_98;
                              if (((uVar2 != 0) && (uVar2 != 1)) && (2 < uVar2)) {
                                lVar33 = param_3[4];
                                lVar39 = param_3[6];
                                local_b8 = 0;
                                puVar31 = (undefined4 *)
                                          FUN_02982d2c(param_3[5],*(undefined8 *)(puVar14 + 0x48));
                                uVar20 = *puVar31;
                                puVar31 = (undefined4 *)
                                          FUN_02982d2c(lVar39,*(undefined8 *)(puVar14 + 0x48));
                                FUN_054feecc(&local_b8,uVar20,*puVar31,0,0);
                                local_60 = (undefined1  [8])0x0;
                                uStack_58 = 0.0;
                                puVar26 = (undefined8 *)FUN_02982d2c(lVar33,*(undefined8 *)puVar13);
                                FUN_054cb558(local_60,*puVar26,local_b8,0);
                                puVar26 = (undefined8 *)PTR_DAT_06a0ac28;
                                goto LAB_058decb0;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_058deddc;
    }
  }
  auVar12._8_8_ = uStack_58;
  auVar12._0_8_ = local_60;
  auVar40._8_8_ = local_98._8_8_;
  auVar40._0_8_ = local_98._0_8_;
  if (*(long *)(lVar25 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
LAB_058df088:
  local_98 = auVar40;
  _local_60 = auVar12;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


