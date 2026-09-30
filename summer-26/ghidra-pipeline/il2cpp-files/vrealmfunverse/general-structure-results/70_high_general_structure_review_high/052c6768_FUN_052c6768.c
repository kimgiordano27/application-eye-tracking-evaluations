/*
FUNCTION_NAME: FUN_052c6768
ENTRY_POINT: 052c6768
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


long FUN_052c6768(long param_1,undefined4 param_2,long *param_3,undefined8 param_4,
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
  if ((DAT_066d018a & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631a6c0);
    FUN_02b3c81c(PTR_DAT_0632e6c8);
    FUN_02b3c81c(System_Xml_XmlBaseReader_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631da78);
    FUN_02b3c81c(PTR_DAT_06313c50);
    FUN_02b3c81c(PTR_DAT_0632ce70);
    FUN_02b3c81c(PTR_DAT_0631c498);
    FUN_02b3c81c(PTR_DAT_0631fac8);
    FUN_02b3c81c(PTR_DAT_06312c90);
    FUN_02b3c81c(PTR_DAT_0631ecd8);
    FUN_02b3c81c(PTR_DAT_06317490);
    DAT_066d018a = 1;
  }
  puVar16 = Unity_Burst_BurstCompiler_<>c_TypeInfo;
  puVar15 = System_Xml_XmlBaseReader_TypeInfo;
  puVar32 = PTR_DAT_0632e6c8;
  puVar14 = PTR_DAT_0631ecd8;
  puVar13 = PTR_DAT_06312310;
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
      if ((int)param_3[3] == 0) goto LAB_052c7a70;
      plVar37 = param_3 + 4;
      lVar33 = *plVar37;
      if (*(int *)(*(long *)System_Xml_XmlBaseReader_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar24 = FUN_05358aac(lVar33,0);
      auVar40._8_8_ = local_98._8_8_;
      auVar40._0_8_ = local_98._0_8_;
      if ((uVar24 & 1) != 0) {
LAB_052c70b8:
        puVar13 = PTR_DAT_0632e6c8;
        lVar33 = *(long *)PTR_DAT_0632e6c8;
        if (*(int *)(lVar33 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar33 = *(long *)puVar13;
        }
LAB_052c7380:
        plVar37 = *(long **)(lVar33 + 0xb8);
LAB_052c7384:
        lVar33 = *plVar37;
        goto LAB_052c7554;
      }
      if ((*(uint *)(param_3 + 3) & 0xfffffffe) == 0) goto LAB_052c7a70;
      plVar22 = param_3 + 5;
      lVar33 = *plVar22;
      if (*(int *)(*(long *)puVar15 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar24 = FUN_05358aac(lVar33,0);
      puVar13 = PTR_DAT_0631ecd8;
      auVar40._8_8_ = local_98._8_8_;
      auVar40._0_8_ = local_98._0_8_;
      if ((uVar24 & 1) != 0) goto LAB_052c70b8;
      uVar24 = (ulong)*(uint *)(param_3 + 3);
      if (uVar24 == 0) goto LAB_052c7a70;
      if (((long *)*plVar37 != (long *)0x0) && (*(long *)*plVar37 == *(long *)PTR_DAT_0631ecd8)) {
        puVar26 = (undefined8 *)thunk_FUN_02b7978c();
        uStack_78 = puVar26[1];
        local_80 = *puVar26;
        uStack_68 = puVar26[3];
        uStack_70 = puVar26[2];
        if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        lVar33 = FUN_05349b40(&local_80,0);
        if ((lVar33 == 0) ||
           (lVar39 = thunk_FUN_02b79548(lVar33,*(undefined8 *)(*param_3 + 0x40)), lVar39 != 0)) {
          auVar40._8_8_ = local_98._8_8_;
          auVar40._0_8_ = local_98._0_8_;
          if ((int)param_3[3] == 0) goto LAB_052c7a70;
          param_3[4] = lVar33;
          thunk_FUN_02bb0e9c(plVar37,lVar33);
          uVar24 = param_3[3];
          goto LAB_052c6964;
        }
LAB_052c7cd8:
        uVar38 = thunk_FUN_02b870ec();
        auVar12._8_8_ = uStack_58;
        auVar12._0_8_ = local_60;
        auVar40._8_8_ = local_98._8_8_;
        auVar40._0_8_ = local_98._0_8_;
        if (*(long *)(lVar25 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar38,0);
        }
        goto LAB_052c7d1c;
      }
LAB_052c6964:
      puVar13 = PTR_DAT_0631ecd8;
      auVar40._8_8_ = local_98._8_8_;
      auVar40._0_8_ = local_98._0_8_;
      if ((uVar24 & 0xfffffffe) == 0) goto LAB_052c7a70;
      if (((long *)*plVar22 != (long *)0x0) && (*(long *)*plVar22 == *(long *)PTR_DAT_0631ecd8)) {
        puVar26 = (undefined8 *)thunk_FUN_02b7978c();
        uStack_78 = puVar26[1];
        local_80 = *puVar26;
        uStack_68 = puVar26[3];
        uStack_70 = puVar26[2];
        if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        lVar33 = FUN_05349b40(&local_80,0);
        if ((lVar33 != 0) &&
           (lVar39 = thunk_FUN_02b79548(lVar33,*(undefined8 *)(*param_3 + 0x40)), lVar39 == 0))
        goto LAB_052c7cd8;
        auVar40._8_8_ = local_98._8_8_;
        auVar40._0_8_ = local_98._0_8_;
        if ((*(uint *)(param_3 + 3) & 0xfffffffe) == 0) goto LAB_052c7a70;
        param_3[5] = lVar33;
        thunk_FUN_02bb0e9c(plVar22,lVar33);
        uVar24 = param_3[3];
      }
      puVar13 = PTR_DAT_06312310;
      auVar12._8_8_ = uStack_58;
      auVar12._0_8_ = local_60;
      auVar40._8_8_ = local_98._8_8_;
      auVar40._0_8_ = local_98._0_8_;
      if ((uVar24 & 0xfffffffe) == 0) goto LAB_052c7a70;
      plVar22 = (long *)*plVar22;
      if (plVar22 != (long *)0x0) {
        if (*plVar22 != *(long *)(PTR_DAT_06312310 + 0x90)) goto LAB_052c7a98;
        plVar37 = (long *)*plVar37;
        if ((plVar37 != (long *)0x0) && (*plVar37 != *(long *)(PTR_DAT_06312310 + 0x90))) {
          if (*(long *)(lVar25 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3ce44(plVar37);
          }
          goto LAB_052c7d1c;
        }
        uVar20 = FUN_04c0ec4c(plVar22,plVar37,4,0);
        uVar38 = *(undefined8 *)(puVar13 + 0x48);
        goto LAB_052c722c;
      }
    }
    break;
  default:
    thunk_FUN_02ba3594(Unity_Burst_BurstCompiler_<>c_TypeInfo);
    FUN_0275e12c();
    lVar33 = thunk_FUN_02ba3594(puVar16);
    iVar21 = *(int *)(param_1 + 0x20);
    uVar38 = **(undefined8 **)(lVar33 + 0xb8);
    FUN_0275e13c(uVar38);
    lVar33 = FUN_02a9a298(uVar38,(long)iVar21);
    FUN_0275e13c();
    uVar38 = FUN_052e4b6c(*(undefined8 *)(lVar33 + 0x10),0);
    goto LAB_052c7c58;
  case 4:
    if (param_3 != (long *)0x0) {
      iVar21 = (int)param_3[3];
      auVar40 = ZEXT816(0);
      if (iVar21 != 0) {
        plVar37 = param_3 + 4;
        if (((long *)*plVar37 == (long *)0x0) || (*(long *)*plVar37 != *(long *)PTR_DAT_0631ecd8)) {
LAB_052c6e3c:
          auVar40._8_8_ = local_98._8_8_;
          auVar40._0_8_ = local_98._0_8_;
          if (iVar21 != 0) {
            plVar37 = (long *)*plVar37;
            if (plVar37 != (long *)0x0) {
              if (*plVar37 != *(long *)(PTR_DAT_06312310 + 0x90)) goto LAB_052c7a98;
              uVar38 = *(undefined8 *)(PTR_DAT_06312310 + 0x48);
              local_60._0_4_ = (int)plVar37[2];
              goto LAB_052c73f0;
            }
            break;
          }
        }
        else {
          puVar26 = (undefined8 *)thunk_FUN_02b7978c();
          uStack_78 = puVar26[1];
          local_80 = *puVar26;
          uStack_68 = puVar26[3];
          uStack_70 = puVar26[2];
          if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar24 = FUN_05349b30(&local_80,0);
          auVar40._8_8_ = local_98._8_8_;
          auVar40._0_8_ = local_98._0_8_;
          if ((uVar24 & 1) != 0) goto LAB_052c70b8;
          if ((int)param_3[3] != 0) {
            if ((long *)*plVar37 == (long *)0x0) break;
            if (*(long *)(*(long *)*plVar37 + 0x40) != *(long *)(*(long *)puVar14 + 0x40))
            goto LAB_052c7a98;
            puVar26 = (undefined8 *)thunk_FUN_02b7978c();
            uStack_78 = puVar26[1];
            local_80 = *puVar26;
            uStack_68 = puVar26[3];
            uStack_70 = puVar26[2];
            if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            lVar33 = FUN_05349b40(&local_80,0);
            if ((lVar33 != 0) &&
               (lVar39 = thunk_FUN_02b79548(lVar33,*(undefined8 *)(*param_3 + 0x40)), lVar39 == 0))
            goto LAB_052c7cd8;
            auVar40._8_8_ = local_98._8_8_;
            auVar40._0_8_ = local_98._0_8_;
            if ((int)param_3[3] != 0) {
              param_3[4] = lVar33;
              thunk_FUN_02bb0e9c(plVar37,lVar33);
              iVar21 = (int)param_3[3];
              goto LAB_052c6e3c;
            }
          }
        }
      }
      goto LAB_052c7a70;
    }
    break;
  case 0x10:
    if (param_3 != (long *)0x0) {
      auVar40 = ZEXT816(0);
      if ((*(uint *)(param_3 + 3) & 0xfffffffe) == 0) goto LAB_052c7a70;
      if ((long *)param_3[5] == (long *)0x0) break;
      if (*(long *)(*(long *)param_3[5] + 0x40) ==
          *(long *)(*(long *)(PTR_DAT_06312310 + 0x48) + 0x40)) {
        piVar27 = (int *)thunk_FUN_02b7978c();
        auVar40._8_8_ = local_98._8_8_;
        auVar40._0_8_ = local_98._0_8_;
        if (2 < *(uint *)(param_3 + 3)) {
          if ((long *)param_3[6] == (long *)0x0) break;
          if (*(long *)(*(long *)param_3[6] + 0x40) != *(long *)(*(long *)(puVar13 + 0x48) + 0x40))
          goto LAB_052c7a98;
          iVar21 = *piVar27 + -1;
          piVar27 = (int *)thunk_FUN_02b7978c();
          puVar14 = PTR_DAT_0631ecd8;
          auVar40._8_8_ = local_98._8_8_;
          auVar40._0_8_ = local_98._0_8_;
          puVar32 = PTR_DAT_0631eb88;
          if ((iVar21 < 0) || (iVar19 = *piVar27, puVar32 = PTR_DAT_0631ed70, iVar19 < 0)) {
            uVar38 = thunk_FUN_02ba3594(puVar32);
            uVar34 = thunk_FUN_02ba3594(
                                       UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_0000034B_BurstDirectCall_TypeInfo
                                       );
            uVar38 = FUN_052f23f4(uVar38,uVar34,0);
            goto LAB_052c7c58;
          }
          if (iVar19 == 0) {
            lVar33 = *(long *)(puVar13 + 0x90);
            goto LAB_052c749c;
          }
          iVar35 = (int)param_3[3];
          if (iVar35 != 0) {
            if (((long *)param_3[4] != (long *)0x0) &&
               (*(long *)param_3[4] == *(long *)PTR_DAT_0631ecd8)) {
              puVar26 = (undefined8 *)FUN_027629a4();
              uStack_78 = puVar26[1];
              local_80 = *puVar26;
              uStack_68 = puVar26[3];
              uStack_70 = puVar26[2];
              if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              uVar38 = FUN_05349b40(&local_80,0);
              FUN_0275a400(param_3,uVar38);
              FUN_0275a434(param_3,0,uVar38);
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
                  lVar33 = FUN_04c0c288(plVar37,iVar21,iVar1,0);
                  goto LAB_052c7554;
                }
                goto LAB_052c70b8;
              }
              goto LAB_052c7a98;
            }
          }
        }
        goto LAB_052c7a70;
      }
LAB_052c7a98:
      auVar12._8_8_ = uStack_58;
      auVar12._0_8_ = local_60;
      auVar40._8_8_ = local_98._8_8_;
      auVar40._0_8_ = local_98._0_8_;
      if (*(long *)(lVar25 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44();
      }
      goto LAB_052c7d1c;
    }
    break;
  case 0x12:
    if (param_3 != (long *)0x0) {
      auVar40 = ZEXT816(0);
      if ((int)param_3[3] != 0) {
        lVar33 = param_3[4];
        if (*(int *)(*(long *)System_Xml_XmlBaseReader_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar24 = FUN_05358aac(lVar33,0);
        auVar40._8_8_ = local_98._8_8_;
        auVar40._0_8_ = local_98._0_8_;
        uVar2 = *(uint *)(param_3 + 3);
        auVar11 = local_98;
        if ((uVar24 & 1) == 0) {
joined_r0x052c76a8:
          auVar40 = auVar11;
          if (uVar2 != 0) {
            lVar33 = param_3[4];
            goto LAB_052c7554;
          }
        }
        else if ((uVar2 & 0xfffffffe) != 0) {
          lVar33 = param_3[5];
          goto LAB_052c7554;
        }
      }
LAB_052c7a70:
      auVar12._8_8_ = uStack_58;
      auVar12._0_8_ = local_60;
      if (*(long *)(lVar25 + 0x28) == local_48) {
        local_98 = auVar40;
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      goto LAB_052c7d1c;
    }
    break;
  case 0x13:
    lVar33 = *(long *)(param_1 + 0x28);
    if (lVar33 != 0) {
      auVar40 = ZEXT816(0);
      if (*(int *)(lVar33 + 0x18) == 0) goto LAB_052c7a70;
      plVar37 = *(long **)(lVar33 + 0x20);
      if (plVar37 != (long *)0x0) {
        uVar38 = (**(code **)(*plVar37 + 0x1a8))
                           (plVar37,param_4,param_5,*(undefined8 *)(*plVar37 + 0x1b0));
        uVar24 = FUN_052ec7c8(uVar38,0);
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
              goto joined_r0x052c740c;
            }
            goto LAB_052c7a70;
          }
        }
        else if (lVar33 != 0) {
          if ((*(uint *)(lVar33 + 0x18) & 0xfffffffe) == 0) goto LAB_052c7a70;
          plVar37 = *(long **)(lVar33 + 0x28);
joined_r0x052c740c:
          if (plVar37 != (long *)0x0) {
            auVar40 = auVar10;
            if (*(long *)(lVar25 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x052c7444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar25 = (**(code **)(*plVar37 + 0x1a8))
                                 (plVar37,param_4,param_5,*(undefined8 *)(*plVar37 + 0x1b0));
              return lVar25;
            }
            goto LAB_052c7d1c;
          }
        }
      }
    }
    break;
  case 0x14:
    if (*(int *)(param_1 + 0x24) != 2) {
      uVar38 = FUN_052f245c(*(undefined8 *)(param_1 + 0x18),0);
      goto LAB_052c7c58;
    }
    if (param_3 != (long *)0x0) {
      auVar40 = ZEXT816(0);
      if ((int)param_3[3] != 0) {
        lVar33 = param_3[4];
        lVar39 = *(long *)PTR_DAT_0632e6c8;
        if (*(int *)(lVar39 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar39 = *(long *)puVar32;
        }
        puVar13 = PTR_DAT_06312310;
        if (lVar33 == **(long **)(lVar39 + 0xb8)) {
          if (*(int *)(lVar39 + 0xe4) != 0) goto LAB_052c7554;
          thunk_FUN_02b9ad44();
          lVar33 = *(long *)puVar32;
LAB_052c749c:
          plVar37 = *(long **)(lVar33 + 0xb8);
          goto LAB_052c7384;
        }
        auVar40 = local_98;
        if ((*(uint *)(param_3 + 3) & 0xfffffffe) != 0) {
          uVar38 = FUN_02762a58(param_3[5],*(undefined8 *)(PTR_DAT_06312310 + 0xe0));
          if (*(int *)(*(long *)System_Xml_XmlBaseReader_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02b9ad44(*(long *)System_Xml_XmlBaseReader_TypeInfo);
          }
          iVar21 = FUN_0534cfe8(uVar38,0);
          auVar40._8_8_ = local_98._8_8_;
          auVar40._0_8_ = local_98._0_8_;
          if ((int)param_3[3] != 0) {
            if (param_3[4] == 0) break;
            uVar34 = thunk_FUN_02b4c898(param_3[4],0);
            iVar19 = FUN_0534cfe8(uVar34,0);
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
                uVar38 = FUN_052ec75c(param_1,0);
                if ((plVar37 != (long *)0x0) && (*plVar37 != *(long *)(puVar13 + 0x90)))
                goto System_Xml_XmlExceptionHelper__ThrowInvalidBinaryFormat;
                _local_60 = FUN_05365a84(plVar37,uVar38,0);
                puVar26 = (undefined8 *)PTR_DAT_0631da78;
                goto LAB_052c6f88;
              }
            }
            else {
              if (iVar21 == 1) {
                uVar2 = *(uint *)(param_3 + 3);
                goto joined_r0x052c76a8;
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
                      FUN_02b3ce44(plVar37,*(long *)(puVar13 + 0x90));
                    }
                    goto LAB_052c7d1c;
                  }
                  FUN_04d7393c(local_60,plVar37,0);
                  puVar26 = (undefined8 *)PTR_DAT_0631fac8;
LAB_052c7944:
                  uStack_a8 = uStack_58;
                  local_b0 = (double)local_60;
                  uVar38 = *puVar26;
                  pdVar28 = &local_b0;
                  goto LAB_052c754c;
                }
              }
              else {
                uVar24 = FUN_052f0040(iVar19,0);
                if ((uVar24 & 1) != 0) {
                  uVar24 = FUN_052ed19c(iVar21,0);
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
                        uVar34 = *(undefined8 *)PTR_DAT_0632ce70;
                        if (*(int *)(*(long *)(puVar13 + 0xe0) + 0xe4) == 0) {
                          thunk_FUN_02b9ad44();
                        }
                        uVar34 = FUN_04d8a7b0(uVar34,0);
                        uVar30 = FUN_052ec75c(param_1,0);
                        uVar34 = FUN_05365cac(lVar33,0xf,uVar34,uVar30,0);
                        puVar13 = PTR_DAT_0631c498;
                        pdVar28 = (double *)FUN_027629a4(uVar34,*(undefined8 *)PTR_DAT_0631c498);
                        uStack_58 = pdVar28[1];
                        local_60 = (undefined1  [8])*pdVar28;
                        uVar34 = *(undefined8 *)puVar13;
LAB_052c7a3c:
                        uVar34 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                           (uVar34,local_60);
                        uVar30 = FUN_052ec75c(param_1,0);
                        lVar33 = FUN_05365cac(uVar34,iVar21,uVar38,uVar30,0);
                        goto LAB_052c7554;
                      }
                    }
                    else if (iVar19 == 0xe) {
                      auVar40 = auVar9;
                      if ((int)param_3[3] != 0) {
                        lVar33 = param_3[4];
                        lVar39 = *(long *)(puVar13 + 0x80);
                        if (*(int *)(*(long *)(puVar13 + 0xe0) + 0xe4) == 0) {
                          thunk_FUN_02b9ad44();
                        }
                        uVar34 = FUN_04d8a7b0(lVar39 + 0x20,0);
                        uVar30 = FUN_052ec75c(param_1,0);
                        uVar34 = FUN_05365cac(lVar33,0xe,uVar34,uVar30,0);
                        pdVar28 = (double *)FUN_027629a4(uVar34,*(undefined8 *)(puVar13 + 0x80));
                        local_60 = (undefined1  [8])*pdVar28;
                        uVar34 = *(undefined8 *)(puVar13 + 0x80);
                        goto LAB_052c7a3c;
                      }
                    }
                    else {
                      if (iVar19 != 0xd) goto LAB_052c7650;
                      auVar40 = auVar8;
                      if ((int)param_3[3] != 0) {
                        lVar33 = param_3[4];
                        lVar39 = *(long *)(puVar13 + 0x78);
                        if (*(int *)(*(long *)(puVar13 + 0xe0) + 0xe4) == 0) {
                          thunk_FUN_02b9ad44();
                        }
                        uVar34 = FUN_04d8a7b0(lVar39 + 0x20,0);
                        uVar30 = FUN_052ec75c(param_1,0);
                        uVar34 = FUN_05365cac(lVar33,0xd,uVar34,uVar30,0);
                        puVar31 = (undefined4 *)FUN_027629a4(uVar34,*(undefined8 *)(puVar13 + 0x78))
                        ;
                        uVar34 = *(undefined8 *)(puVar13 + 0x78);
                        local_60._0_4_ = *puVar31;
                        goto LAB_052c7a3c;
                      }
                    }
                    goto LAB_052c7a70;
                  }
                }
LAB_052c7650:
                auVar40._8_8_ = local_98._8_8_;
                auVar40._0_8_ = local_98._0_8_;
                if ((int)param_3[3] != 0) {
                  lVar33 = param_3[4];
                  uVar34 = FUN_052ec75c(param_1,0);
                  auVar12._8_8_ = uStack_58;
                  auVar12._0_8_ = local_60;
                  auVar40._8_8_ = local_98._8_8_;
                  auVar40._0_8_ = local_98._0_8_;
                  if (*(long *)(lVar25 + 0x28) == local_48) {
                    lVar25 = FUN_05365cac(lVar33,iVar21,uVar38,uVar34,0);
                    return lVar25;
                  }
                  goto LAB_052c7d1c;
                }
              }
            }
          }
        }
      }
      goto LAB_052c7a70;
    }
    break;
  case 0x15:
    if (param_3 != (long *)0x0) {
      auVar40 = ZEXT816(0);
      if ((int)param_3[3] == 0) goto LAB_052c7a70;
      lVar33 = param_3[4];
      uVar38 = FUN_052ec75c(param_1,0);
      if (*(int *)(*(long *)PTR_DAT_0631a6c0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)PTR_DAT_0631a6c0);
      }
      uVar20 = FUN_04cff80c(lVar33,uVar38,0);
      uVar38 = *(undefined8 *)(PTR_DAT_06312310 + 0x48);
LAB_052c722c:
      local_60._0_4_ = uVar20;
LAB_052c7544:
      pdVar28 = (double *)local_60;
LAB_052c754c:
      lVar33 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(uVar38,pdVar28);
LAB_052c7554:
      auVar40 = local_98;
      auVar12 = _local_60;
      if (*(long *)(lVar25 + 0x28) == local_48) {
        return lVar33;
      }
      goto LAB_052c7d1c;
    }
    break;
  case 0x16:
    if (param_3 != (long *)0x0) {
      auVar40 = ZEXT816(0);
      if ((int)param_3[3] != 0) {
        if (param_3[4] == 0) break;
        uVar38 = thunk_FUN_02b4c898(param_3[4],0);
        if (*(int *)(*(long *)System_Xml_XmlBaseReader_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)System_Xml_XmlBaseReader_TypeInfo);
        }
        iVar21 = FUN_0534cfe8(uVar38,0);
        puVar13 = PTR_DAT_06312310;
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
                        FUN_027629a4(param_3[4],*(undefined8 *)(PTR_DAT_06312310 + 0x28));
              uVar38 = *(undefined8 *)(puVar13 + 0x28);
              local_60[0] = *puVar29;
              goto LAB_052c73f0;
            }
          }
          else {
            if (iVar21 != 9) goto LAB_052c7ba0;
            auVar40 = auVar6;
            if ((int)param_3[3] != 0) {
              piVar27 = (int *)FUN_027629a4(param_3[4],*(undefined8 *)(PTR_DAT_06312310 + 0x48));
              uVar38 = *(undefined8 *)(puVar13 + 0x28);
              bVar17 = *piVar27 == 0;
              goto LAB_052c753c;
            }
          }
        }
        else if (iVar21 == 0xe) {
          auVar40 = auVar5;
          if ((int)param_3[3] != 0) {
            pdVar28 = (double *)FUN_027629a4(param_3[4],*(undefined8 *)(PTR_DAT_06312310 + 0x80));
            uVar38 = *(undefined8 *)(puVar13 + 0x28);
            bVar17 = false;
            if (!NAN(*pdVar28)) {
              bVar17 = *pdVar28 == 0.0;
            }
LAB_052c753c:
            bVar17 = !bVar17;
LAB_052c7540:
            local_60[0] = bVar17;
            goto LAB_052c7544;
          }
        }
        else {
          if (iVar21 != 0x12) {
LAB_052c7ba0:
            FUN_0275e13c(param_3);
            uVar38 = FUN_02a9a298(param_3,0);
            FUN_0275e13c();
            uVar38 = thunk_FUN_02b4c898(uVar38,0);
            lVar33 = *(long *)(PTR_DAT_06312310 + 0x28);
            FUN_0275e12c(*(undefined8 *)(PTR_DAT_06312310 + 0xe0));
            uVar34 = FUN_04d8a7b0(lVar33 + 0x20,0);
            uVar38 = FUN_052f24ac(uVar38,uVar34,0);
            goto LAB_052c7c58;
          }
          auVar40 = auVar4;
          if ((int)param_3[3] != 0) {
            plVar37 = (long *)param_3[4];
            if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x28) + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            if ((plVar37 != (long *)0x0) && (*plVar37 != *(long *)(puVar13 + 0x90))) {
System_Xml_XmlExceptionHelper__ThrowInvalidBinaryFormat:
              auVar12._8_8_ = uStack_58;
              auVar12._0_8_ = local_60;
              auVar40._8_8_ = local_98._8_8_;
              auVar40._0_8_ = local_98._0_8_;
              if (*(long *)(lVar25 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3ce44(plVar37);
              }
              goto LAB_052c7d1c;
            }
            bVar18 = FUN_04cf79d8(plVar37,0);
            uVar38 = *(undefined8 *)(puVar13 + 0x28);
            bVar17 = (bool)(bVar18 & 1);
            goto LAB_052c7540;
          }
        }
      }
      goto LAB_052c7a70;
    }
    break;
  case 0x17:
    if (param_3 != (long *)0x0) {
      auVar40 = ZEXT816(0);
      if ((int)param_3[3] == 0) goto LAB_052c7a70;
      lVar33 = param_3[4];
      uVar38 = FUN_052ec75c(param_1,0);
      if (*(int *)(*(long *)PTR_DAT_0631a6c0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)PTR_DAT_0631a6c0);
      }
      uVar38 = NaughtyAttributes_EnableIfAttributeBase___ctor(lVar33,uVar38,0);
      local_60 = (undefined1  [8])uVar38;
      puVar26 = (undefined8 *)PTR_DAT_06313c50;
LAB_052c6f88:
      uVar38 = *puVar26;
      goto LAB_052c7544;
    }
    break;
  case 0x18:
    if (param_3 != (long *)0x0) {
      auVar40 = ZEXT816(0);
      if ((int)param_3[3] == 0) goto LAB_052c7a70;
      lVar33 = param_3[4];
      uVar38 = FUN_052ec75c(param_1,0);
      if (*(int *)(*(long *)PTR_DAT_0631a6c0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)PTR_DAT_0631a6c0);
      }
      local_60 = (undefined1  [8])FUN_04d00f80(lVar33,uVar38,0);
      uVar38 = *(undefined8 *)(PTR_DAT_06312310 + 0x80);
LAB_052c73f0:
      pdVar28 = (double *)local_60;
      goto LAB_052c754c;
    }
    break;
  case 0x19:
    if (param_3 != (long *)0x0) {
      auVar40 = ZEXT816(0);
      if ((int)param_3[3] != 0) {
        lVar33 = param_3[4];
        uVar38 = FUN_052ec75c(param_1,0);
        if (*(int *)(*(long *)PTR_DAT_0631a6c0 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)PTR_DAT_0631a6c0);
        }
        auVar12._8_8_ = uStack_58;
        auVar12._0_8_ = local_60;
        auVar40._8_8_ = local_98._8_8_;
        auVar40._0_8_ = local_98._0_8_;
        if (*(long *)(lVar25 + 0x28) == local_48) {
          lVar25 = NaughtyAttributes_HideIfAttribute___ctor(lVar33,uVar38,0);
          return lVar25;
        }
        goto LAB_052c7d1c;
      }
      goto LAB_052c7a70;
    }
    break;
  case 0x1a:
    if (param_3 != (long *)0x0) {
      auVar40 = ZEXT816(0);
      if ((int)param_3[3] != 0) {
        if (param_3[4] == 0) break;
        uVar38 = thunk_FUN_02b4c898(param_3[4],0);
        if (*(int *)(*(long *)System_Xml_XmlBaseReader_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)System_Xml_XmlBaseReader_TypeInfo);
        }
        uVar24 = FUN_0534cfe8(uVar38,0);
        uVar23 = FUN_052ed508(uVar24,0);
        auVar40._8_8_ = local_98._8_8_;
        auVar40._0_8_ = local_98._0_8_;
        if ((uVar23 & 1) == 0) {
          uVar24 = FUN_052ed4f8(uVar24 & 0xffffffff,0);
          puVar13 = Unity_Burst_BurstCompiler_<>c_TypeInfo;
          auVar40._8_8_ = local_98._8_8_;
          auVar40._0_8_ = local_98._0_8_;
          if ((uVar24 & 1) == 0) {
            thunk_FUN_02ba3594(Unity_Burst_BurstCompiler_<>c_TypeInfo);
            FUN_0275e12c();
            lVar33 = thunk_FUN_02ba3594(puVar13);
            iVar21 = *(int *)(param_1 + 0x20);
            uVar38 = **(undefined8 **)(lVar33 + 0xb8);
            FUN_0275e13c(uVar38);
            lVar33 = FUN_02a9a298(uVar38,(long)iVar21);
            FUN_0275e13c();
            uVar38 = FUN_052f26d0(*(undefined8 *)(lVar33 + 0x10),1,0);
            goto LAB_052c7c58;
          }
          if ((int)param_3[3] != 0) {
            lVar33 = param_3[4];
            if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            puVar13 = PTR_DAT_06312310;
            pdVar28 = (double *)FUN_027629a4(lVar33,*(undefined8 *)(PTR_DAT_06312310 + 0x80));
            uVar38 = *(undefined8 *)(puVar13 + 0x80);
            local_60 = (undefined1  [8])ABS(*pdVar28);
            goto LAB_052c73f0;
          }
        }
        else if ((int)param_3[3] != 0) {
          lVar33 = param_3[4];
          if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          puVar13 = PTR_DAT_06312310;
          plVar37 = (long *)FUN_027629a4(lVar33,*(undefined8 *)(PTR_DAT_06312310 + 0x68));
          lVar33 = *plVar37;
          auVar3._8_8_ = uStack_58;
          auVar3._0_8_ = lVar33;
          uVar38 = *(undefined8 *)(puVar13 + 0x68);
          local_60 = (undefined1  [8])-lVar33;
          if (-1 < lVar33) {
            _local_60 = auVar3;
          }
          goto LAB_052c7544;
        }
      }
      goto LAB_052c7a70;
    }
    break;
  case 0x1c:
    thunk_FUN_02ba3594(Unity_Burst_BurstCompiler_<>c_TypeInfo);
    FUN_0275e12c();
    lVar33 = thunk_FUN_02ba3594(puVar16);
    iVar21 = *(int *)(param_1 + 0x20);
    uVar38 = **(undefined8 **)(lVar33 + 0xb8);
    FUN_0275e13c(uVar38);
    lVar33 = FUN_02a9a298(uVar38,(long)iVar21);
    FUN_0275e13c();
    uVar38 = FUN_052f2354(*(undefined8 *)(lVar33 + 0x10),0);
LAB_052c7c58:
    auVar12._8_8_ = uStack_58;
    auVar12._0_8_ = local_60;
    auVar40._8_8_ = local_98._8_8_;
    auVar40._0_8_ = local_98._0_8_;
    if (*(long *)(lVar25 + 0x28) == local_48) {
      uVar34 = thunk_FUN_02ba3594(
                                 UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_0000034B_PostfixBurstDelegate_TypeInfo
                                 );
LAB_052c7c78:
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar38,uVar34);
    }
    goto LAB_052c7d1c;
  case 0x1d:
    if (param_3 != (long *)0x0) {
      auVar40 = ZEXT816(0);
      if ((int)param_3[3] != 0) {
        lVar33 = param_3[4];
        if (*(int *)(*(long *)System_Xml_XmlBaseReader_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar24 = FUN_05358aac(lVar33,0);
        puVar13 = PTR_DAT_0631ecd8;
        auVar40._8_8_ = local_98._8_8_;
        auVar40._0_8_ = local_98._0_8_;
        if ((uVar24 & 1) != 0) goto LAB_052c70b8;
        iVar21 = (int)param_3[3];
        if (iVar21 != 0) {
          if (((long *)param_3[4] != (long *)0x0) &&
             (*(long *)param_3[4] == *(long *)PTR_DAT_0631ecd8)) {
            puVar26 = (undefined8 *)FUN_027629a4();
            uStack_78 = puVar26[1];
            local_80 = *puVar26;
            uStack_68 = puVar26[3];
            uStack_70 = puVar26[2];
            if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar38 = FUN_05349b40(&local_80,0);
            FUN_0275a400(param_3,uVar38);
            FUN_0275a434(param_3,0,uVar38);
            iVar21 = (int)param_3[3];
          }
          auVar40._8_8_ = local_98._8_8_;
          auVar40._0_8_ = local_98._0_8_;
          if (iVar21 != 0) {
            plVar37 = (long *)param_3[4];
            if (plVar37 != (long *)0x0) {
              if (*plVar37 != *(long *)(PTR_DAT_06312310 + 0x90)) goto LAB_052c7a98;
              lVar33 = FUN_04c0e89c(plVar37,0);
              goto LAB_052c7554;
            }
            break;
          }
        }
      }
      goto LAB_052c7a70;
    }
    break;
  case 0x26:
    if (param_3 != (long *)0x0) {
      auVar40 = ZEXT816(0);
      if ((int)param_3[3] != 0) {
        lVar39 = param_3[4];
        lVar33 = *(long *)PTR_DAT_0632e6c8;
        if (*(int *)(lVar33 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar33 = *(long *)puVar32;
        }
        auVar40._8_8_ = local_98._8_8_;
        auVar40._0_8_ = local_98._0_8_;
        lVar36 = **(long **)(lVar33 + 0xb8);
        if (lVar39 == lVar36) {
LAB_052c7370:
          if (*(int *)(lVar33 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar33 = *(long *)puVar32;
          }
          goto LAB_052c7380;
        }
        if ((*(uint *)(param_3 + 3) & 0xfffffffe) != 0) {
          lVar39 = param_3[5];
          if (*(int *)(lVar33 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar33 = *(long *)puVar32;
            lVar36 = **(long **)(lVar33 + 0xb8);
          }
          auVar40._8_8_ = local_98._8_8_;
          auVar40._0_8_ = local_98._0_8_;
          if (lVar39 == lVar36) goto LAB_052c7370;
          if (2 < *(uint *)(param_3 + 3)) {
            lVar39 = param_3[6];
            if (*(int *)(lVar33 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar33 = *(long *)puVar32;
              lVar36 = **(long **)(lVar33 + 0xb8);
            }
            puVar13 = PTR_DAT_06313c50;
            auVar40._8_8_ = local_98._8_8_;
            auVar40._0_8_ = local_98._0_8_;
            if (lVar39 == lVar36) goto LAB_052c7370;
            if ((int)param_3[3] != 0) {
              puVar26 = (undefined8 *)FUN_027629a4(param_3[4],*(undefined8 *)PTR_DAT_06313c50);
              local_88 = *puVar26;
              if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              iVar21 = FUN_04d59b4c(&local_88,0);
              puVar32 = PTR_DAT_0631da78;
              puVar14 = PTR_DAT_06312310;
              if (iVar21 == 2) {
                if (*(int *)(*(long *)PTR_DAT_0631da78 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                local_98 = FUN_04d5fb48(0);
                local_a0 = FUN_04d5fe6c(local_98,0);
                puVar15 = PTR_DAT_06317490;
                if (*(int *)(*(long *)PTR_DAT_06317490 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44(*(long *)PTR_DAT_06317490);
                }
                iVar21 = FUN_04d92468(&local_a0,0);
                auVar40 = local_98;
                if ((*(uint *)(param_3 + 3) & 0xfffffffe) != 0) {
                  piVar27 = (int *)FUN_027629a4(param_3[5],*(undefined8 *)(puVar14 + 0x48));
                  if (iVar21 == *piVar27) goto LAB_052c77a8;
                  if (*(int *)(*(long *)puVar32 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  auVar40 = FUN_04d5fb48(0);
                  local_98 = auVar40;
                  local_a0 = FUN_04d5fe6c(local_98,0);
                  if (*(int *)(*(long *)puVar15 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44(*(long *)puVar15);
                  }
                  iVar21 = FUN_04d924ac(&local_a0,0);
                  auVar40 = local_98;
                  if (2 < *(uint *)(param_3 + 3)) {
                    piVar27 = (int *)FUN_027629a4(param_3[6],*(undefined8 *)(puVar14 + 0x48));
                    if (iVar21 == *piVar27) goto LAB_052c77a8;
LAB_052c7cf4:
                    uVar38 = FUN_052f2924(0);
                    goto LAB_052c7cfc;
                  }
                }
              }
              else {
                if (iVar21 == 1) {
                  auVar40 = local_98;
                  if ((*(uint *)(param_3 + 3) & 0xfffffffe) == 0) goto LAB_052c7a70;
                  piVar27 = (int *)FUN_027629a4(param_3[5],*(undefined8 *)(PTR_DAT_06312310 + 0x48))
                  ;
                  if (*piVar27 != 0) {
                    auVar40 = local_98;
                    if (*(uint *)(param_3 + 3) < 3) goto LAB_052c7a70;
                    piVar27 = (int *)FUN_027629a4(param_3[6],*(undefined8 *)(puVar14 + 0x48));
                    if (*piVar27 != 0) goto LAB_052c7cf4;
                  }
                }
LAB_052c77a8:
                auVar40 = local_98;
                if ((*(uint *)(param_3 + 3) & 0xfffffffe) != 0) {
                  piVar27 = (int *)FUN_027629a4(param_3[5],*(undefined8 *)(puVar14 + 0x48));
                  if (*piVar27 < -0xe) {
LAB_052c7c84:
                    uVar38 = FUN_052f2864(0);
LAB_052c7cfc:
                    uVar34 = thunk_FUN_02ba3594(
                                               UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_0000034B_PostfixBurstDelegate_TypeInfo
                                               );
                    auVar12._8_8_ = uStack_58;
                    auVar12._0_8_ = local_60;
                    auVar40 = local_98;
                    if (*(long *)(lVar25 + 0x28) == local_48) goto LAB_052c7c78;
                    goto LAB_052c7d1c;
                  }
                  auVar40 = local_98;
                  if ((*(uint *)(param_3 + 3) & 0xfffffffe) != 0) {
                    piVar27 = (int *)FUN_027629a4(param_3[5],*(undefined8 *)(puVar14 + 0x48));
                    if (0xe < *piVar27) goto LAB_052c7c84;
                    auVar40 = local_98;
                    if (2 < *(uint *)(param_3 + 3)) {
                      piVar27 = (int *)FUN_027629a4(param_3[6],*(undefined8 *)(puVar14 + 0x48));
                      if (*piVar27 < -0x3b) {
LAB_052c7c90:
                        uVar38 = FUN_052f28a4(0);
                        goto LAB_052c7cfc;
                      }
                      auVar40 = local_98;
                      if (2 < *(uint *)(param_3 + 3)) {
                        piVar27 = (int *)FUN_027629a4(param_3[6],*(undefined8 *)(puVar14 + 0x48));
                        if (0x3b < *piVar27) goto LAB_052c7c90;
                        auVar40 = local_98;
                        if ((*(uint *)(param_3 + 3) & 0xfffffffe) != 0) {
                          piVar27 = (int *)FUN_027629a4(param_3[5],*(undefined8 *)(puVar14 + 0x48));
                          if (*piVar27 == 0xe) {
                            auVar40 = local_98;
                            if (2 < *(uint *)(param_3 + 3)) {
                              piVar27 = (int *)FUN_027629a4(param_3[6],
                                                            *(undefined8 *)(puVar14 + 0x48));
                              if (*piVar27 < 1) goto LAB_052c7880;
LAB_052c7cb4:
                              uVar38 = FUN_052f28e4(0);
                              goto LAB_052c7cfc;
                            }
                          }
                          else {
LAB_052c7880:
                            auVar40 = local_98;
                            if ((*(uint *)(param_3 + 3) & 0xfffffffe) != 0) {
                              piVar27 = (int *)FUN_027629a4(param_3[5],
                                                            *(undefined8 *)(puVar14 + 0x48));
                              if (*piVar27 == -0xe) {
                                auVar40 = local_98;
                                if (*(uint *)(param_3 + 3) < 3) goto LAB_052c7a70;
                                piVar27 = (int *)FUN_027629a4(param_3[6],
                                                              *(undefined8 *)(puVar14 + 0x48));
                                if (*piVar27 < 0) goto LAB_052c7cb4;
                              }
                              uVar2 = *(uint *)(param_3 + 3);
                              auVar40 = local_98;
                              if (((uVar2 != 0) && (uVar2 != 1)) && (2 < uVar2)) {
                                lVar33 = param_3[4];
                                lVar39 = param_3[6];
                                local_b8 = 0;
                                puVar31 = (undefined4 *)
                                          FUN_027629a4(param_3[5],*(undefined8 *)(puVar14 + 0x48));
                                uVar20 = *puVar31;
                                puVar31 = (undefined4 *)
                                          FUN_027629a4(lVar39,*(undefined8 *)(puVar14 + 0x48));
                                FUN_04d92264(&local_b8,uVar20,*puVar31,0,0);
                                local_60 = (undefined1  [8])0x0;
                                uStack_58 = 0.0;
                                puVar26 = (undefined8 *)FUN_027629a4(lVar33,*(undefined8 *)puVar13);
                                FUN_04d5f6c4(local_60,*puVar26,local_b8,0);
                                puVar26 = (undefined8 *)PTR_DAT_0631da78;
                                goto LAB_052c7944;
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
      goto LAB_052c7a70;
    }
  }
  auVar12._8_8_ = uStack_58;
  auVar12._0_8_ = local_60;
  auVar40._8_8_ = local_98._8_8_;
  auVar40._0_8_ = local_98._0_8_;
  if (*(long *)(lVar25 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_052c7d1c:
  local_98 = auVar40;
  _local_60 = auVar12;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


