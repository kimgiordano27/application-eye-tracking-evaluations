/*
FUNCTION_NAME: FUN_055668f8
ENTRY_POINT: 055668f8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1
*/


long * FUN_055668f8(undefined8 param_1,uint param_2,long *param_3,long param_4,uint *param_5,
                   undefined8 param_6,long param_7,uint param_8)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  long *plVar22;
  uint uVar23;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar20 = tpidr_el0;
  local_68 = *(long *)(lVar20 + 0x28);
  local_80 = param_7;
  if ((DAT_06a54129 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06649f60);
    FUN_02d4dc40(System_Linq_Expressions_Interpreter_OrInstruction_OrInt16_TypeInfo);
    FUN_02d4dc40(System_Xml_XPath_XPathItem_TypeInfo);
    FUN_02d4dc40(Newtonsoft_Json_Converters_XCommentWrapper_TypeInfo);
    FUN_02d4dc40(MS_Internal_Xml_XPath_XPathScanner_TypeInfo);
    FUN_02d4dc40(System_Xml_XPath_XPathNavigator_TypeInfo);
    FUN_02d4dc40(System_Linq_Expressions_Interpreter_OrInstruction_OrInt32_TypeInfo);
    FUN_02d4dc40(Mono_Xml_SecurityParser_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664d098);
    DAT_06a54129 = 1;
  }
  puVar19 = PTR_DAT_0664d098;
  if (param_3 == (long *)0x0) goto LAB_05567554;
  uVar10 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
  uVar11 = thunk_FUN_04e7e884(uVar10,*(undefined8 *)puVar19,0);
  if ((uVar11 & 1) != 0) {
    thunk_FUN_02db45e8(Photon_Pun_UtilityScripts_OnClickDestroy_<DestroyRpc>d__4_TypeInfo);
    uVar10 = thunk_FUN_02d8a638();
    puVar19 = UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_TypeInfo;
LAB_055678b0:
    uVar21 = thunk_FUN_02db45e8(puVar19);
    FUN_05561358(uVar10,uVar21,0,0);
    lVar20 = *(long *)(lVar20 + 0x28);
LAB_055678cc:
    if (lVar20 == local_68) {
      uVar21 = thunk_FUN_02db45e8(System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar10,uVar21);
    }
    goto LAB_05567938;
  }
  uVar3 = *param_5;
  plVar12 = (long *)thunk_FUN_02d8a638(*(undefined8 *)MS_Internal_Xml_XPath_XPathScanner_TypeInfo);
  FUN_055b79e4(plVar12,0);
  puVar19 = System_Linq_Expressions_Interpreter_OrInstruction_OrInt32_TypeInfo;
  if ((param_4 == 0) || (*(long *)(param_4 + 0xa0) == 0)) goto LAB_05567554;
  uVar10 = thunk_FUN_02d5dae8(*(long *)(param_4 + 0xa0),0);
  puVar6 = PTR_DAT_066462a0;
  uVar21 = *(undefined8 *)puVar19;
  if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98(*(long *)(PTR_DAT_066462a0 + 0xe0));
  }
  uVar21 = FUN_050121a8(uVar21,0);
  uVar11 = FUN_0501afe8(uVar10,uVar21,0);
  if ((uVar11 & 1) == 0) {
    thunk_FUN_02db45e8(Photon_Pun_UtilityScripts_OnClickDestroy_<DestroyRpc>d__4_TypeInfo);
    uVar10 = thunk_FUN_02d8a638();
    puVar19 = System_Linq_Expressions_Interpreter_OrInstruction_OrUInt16_TypeInfo;
    goto LAB_055678b0;
  }
  lVar13 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
  if (lVar13 == 0) goto LAB_05567554;
  plVar22 = *(long **)(param_4 + 0xa0);
  lVar1 = 0;
  if (*(int *)(lVar13 + 0x10) != 0) {
    lVar1 = lVar13;
  }
  if (plVar22 == (long *)0x0) goto LAB_05567554;
  lVar13 = *plVar22;
  bVar4 = *(byte *)(*(long *)Mono_Xml_SecurityParser_TypeInfo + 0x130);
  if ((*(byte *)(lVar13 + 0x130) < bVar4) ||
     (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar4 * 8 + -8) !=
      *(long *)Mono_Xml_SecurityParser_TypeInfo)) {
LAB_055678f0:
    if (*(long *)(lVar20 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4e268(plVar22);
    }
    goto LAB_05567938;
  }
  lVar13 = (**(code **)(lVar13 + 0x238))(plVar22,*(undefined8 *)(lVar13 + 0x240));
  if (lVar13 == 0) goto LAB_05567554;
  iVar8 = FUN_04fa9478(lVar13,0);
  if ((iVar8 < 1) && ((param_2 & 1) == 0)) {
    *param_5 = 0;
    uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
    uVar21 = (**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0));
    uVar14 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
    uVar15 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
    plVar16 = (long *)FUN_0556138c(param_1,uVar10,uVar21,uVar14,param_7,uVar15,0xffffffff);
    lVar13 = *(long *)PTR_DAT_06649f60;
    plVar12 = (long *)PTR_DAT_06649f60;
    if (*(int *)(lVar13 + 0xe4) == 0) {
LAB_05566b8c:
      plVar12 = (long *)PTR_DAT_06649f60;
      thunk_FUN_02dabd98(lVar13);
    }
LAB_05566b90:
    if (plVar16 != (long *)0x0) {
      FUN_055c19f0(plVar16,**(undefined8 **)(*plVar12 + 0xb8),(*(undefined8 **)(*plVar12 + 0xb8))[1]
                   ,0);
      goto LAB_05566bac;
    }
    goto LAB_05567554;
  }
  plVar16 = (long *)(**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
  if ((plVar16 == (long *)0x0) ||
     (lVar13 = (**(code **)(*plVar16 + 0x308))(plVar16,0,*(undefined8 *)(*plVar16 + 0x310)),
     lVar13 == 0)) goto LAB_05567554;
  uVar10 = thunk_FUN_02d5dae8(lVar13,0);
  uVar21 = *(undefined8 *)System_Linq_Expressions_Interpreter_OrInstruction_OrInt16_TypeInfo;
  if (*(int *)(*(long *)(puVar6 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98(*(long *)(puVar6 + 0xe0));
  }
  uVar21 = FUN_050121a8(uVar21,0);
  uVar11 = FUN_0501afe8(uVar10,uVar21,0);
  if ((uVar11 & 1) != 0) {
    plVar12 = (long *)(**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
    if ((plVar12 != (long *)0x0) &&
       (plVar22 = (long *)(**(code **)(*plVar12 + 0x308))
                                    (plVar12,0,*(undefined8 *)(*plVar12 + 0x310)),
       plVar22 != (long *)0x0)) {
      bVar4 = *(byte *)(*(long *)System_Xml_XPath_XPathItem_TypeInfo + 0x130);
      if ((*(byte *)(*plVar22 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar4 * 8 + -8) !=
          *(long *)System_Xml_XPath_XPathItem_TypeInfo)) goto LAB_055678f0;
      lVar13 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
      puVar19 = Newtonsoft_Json_Converters_XCommentWrapper_TypeInfo;
      if (lVar13 != 0) {
        iVar8 = 0;
        do {
          iVar9 = FUN_04fa9478(lVar13,0);
          if (iVar9 <= iVar8) {
            uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
            uVar21 = (**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0));
            uVar14 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
            uVar15 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
            if (*(long *)(lVar20 + 0x28) == local_68) {
              plVar12 = (long *)FUN_0556138c(param_1,uVar10,uVar21,uVar14,param_7,uVar15,0xffffffff)
              ;
              return plVar12;
            }
            goto LAB_05567938;
          }
          plVar12 = (long *)(**(code **)(*plVar22 + 0x238))
                                      (plVar22,*(undefined8 *)(*plVar22 + 0x240));
          if (plVar12 == (long *)0x0) break;
          plVar17 = (long *)(**(code **)(*plVar12 + 0x308))
                                      (plVar12,iVar8,*(undefined8 *)(*plVar12 + 0x310));
          if (plVar17 == (long *)0x0) {
LAB_05567894:
            thunk_FUN_02db45e8(Photon_Pun_UtilityScripts_OnClickDestroy_<DestroyRpc>d__4_TypeInfo);
            uVar10 = thunk_FUN_02d8a638();
            puVar19 = System_Linq_Expressions_Interpreter_OrInstruction_OrInt64_TypeInfo;
            goto LAB_055678b0;
          }
          bVar4 = *(byte *)(*(long *)puVar19 + 0x130);
          if ((*(byte *)(*plVar17 + 0x130) < bVar4) ||
             (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)puVar19))
          goto LAB_05567894;
          lVar13 = plVar17[0x13];
          uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
          uVar11 = thunk_FUN_04e7e884(lVar13,uVar10,0);
          if ((uVar11 & 1) != 0) {
            if (param_7 == 0) break;
            uVar11 = thunk_FUN_04e7e884(*(undefined8 *)(param_7 + 0x48),lVar1,0);
            if ((uVar11 & 1) != 0) {
              FUN_05561998(param_1,plVar17,0,param_7);
              plVar16 = plVar17;
              goto LAB_0556768c;
            }
          }
          if (plVar17[0x14] == 0) break;
          uVar21 = *(undefined8 *)(plVar17[0x14] + 0x10);
          uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
          uVar11 = thunk_FUN_04e7e884(uVar21,uVar10,0);
          if ((uVar11 & 1) != 0) {
            if (plVar17[0x14] == 0) break;
            uVar21 = *(undefined8 *)(plVar17[0x14] + 0x18);
            uVar10 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
            uVar11 = thunk_FUN_04e7e884(uVar21,uVar10,0);
            if ((uVar11 & 1) != 0) {
              uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
              plVar16 = (long *)FUN_05565738(param_1,lVar1,uVar10,&local_80);
              FUN_05561998(param_1,plVar16,0,local_80);
              goto LAB_055677a0;
            }
          }
          iVar8 = iVar8 + 1;
          lVar13 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
        } while (lVar13 != 0);
      }
    }
    goto LAB_05567554;
  }
  uVar23 = *param_5;
  plVar16 = (long *)(**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
  if (plVar16 == (long *)0x0) goto LAB_0556722c;
  uVar23 = uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU);
  plVar16 = (long *)(**(code **)(*plVar16 + 0x308))
                              (plVar16,uVar23,*(undefined8 *)(*plVar16 + 0x310));
  puVar6 = System_Xml_XPath_XPathNavigator_TypeInfo;
  puVar19 = Newtonsoft_Json_Converters_XCommentWrapper_TypeInfo;
  if (plVar16 == (long *)0x0) {
LAB_05567854:
    thunk_FUN_02db45e8(Photon_Pun_UtilityScripts_OnClickDestroy_<DestroyRpc>d__4_TypeInfo);
    uVar10 = thunk_FUN_02d8a638();
    uVar21 = thunk_FUN_02db45e8(System_Linq_Expressions_Interpreter_OrInstruction_OrInt64_TypeInfo);
    FUN_05561358(uVar10,uVar21,0,0);
    lVar20 = *(long *)(lVar20 + 0x28);
    goto LAB_055678cc;
  }
  bVar4 = *(byte *)(*plVar16 + 0x130);
  bVar5 = *(byte *)(*(long *)System_Xml_XPath_XPathNavigator_TypeInfo + 0x130);
  if ((bVar4 < bVar5) ||
     (lVar13 = *(long *)(*plVar16 + 200),
     *(long *)(lVar13 + (ulong)bVar5 * 8 + -8) != *(long *)System_Xml_XPath_XPathNavigator_TypeInfo)
     ) goto LAB_05567854;
  bVar5 = *(byte *)(*(long *)Newtonsoft_Json_Converters_XCommentWrapper_TypeInfo + 0x130);
  if ((bVar4 < bVar5) ||
     (*(long *)(lVar13 + (ulong)bVar5 * 8 + -8) !=
      *(long *)Newtonsoft_Json_Converters_XCommentWrapper_TypeInfo)) goto LAB_05567854;
  lVar13 = plVar16[0x13];
  uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
  uVar11 = thunk_FUN_04e7e884(lVar13,uVar10,0);
  if ((uVar11 & 1) != 0) {
    if (param_7 == 0) goto LAB_0556722c;
    uVar11 = thunk_FUN_04e7e884(*(undefined8 *)(param_7 + 0x48),lVar1,0);
    if ((uVar11 & 1) == 0) goto LAB_05566f58;
    if (uVar3 != 0xffffffff) {
      local_78 = 0;
      uStack_70 = 0;
      FUN_0505d7f4(&local_78,0xffffffff,0xffffffff,0xffffffff,0,0,0);
      FUN_055c1b28(plVar16,local_78,uStack_70,0);
      param_7 = local_80;
    }
    *param_5 = uVar23;
    plVar12 = plVar16;
LAB_05567034:
    FUN_05561998(param_1,plVar12,0,param_7);
    FUN_0556797c(param_1,plVar16,0);
    goto LAB_05566bac;
  }
LAB_05566f58:
  if (plVar16[0x14] != 0) {
    uVar21 = *(undefined8 *)(plVar16[0x14] + 0x10);
    uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
    uVar11 = thunk_FUN_04e7e884(uVar21,uVar10,0);
    if ((uVar11 & 1) != 0) {
      if (plVar16[0x14] == 0) goto LAB_0556722c;
      uVar21 = *(undefined8 *)(plVar16[0x14] + 0x18);
      uVar10 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
      uVar11 = thunk_FUN_04e7e884(uVar21,uVar10,0);
      if ((uVar11 & 1) != 0) {
        if (uVar3 != 0xffffffff) {
          local_78 = 0;
          uStack_70 = 0;
          FUN_0505d7f4(&local_78,0xffffffff,0xffffffff,0xffffffff,0,0,0);
          FUN_055c1b28(plVar16,local_78,uStack_70,0);
        }
        *param_5 = uVar23;
        uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
        plVar12 = (long *)FUN_05565738(param_1,lVar1,uVar10,&local_80);
        param_7 = local_80;
        goto LAB_05567034;
      }
    }
    puVar7 = PTR_DAT_06649f60;
    if (uVar3 == 0xffffffff) {
      lVar13 = plVar16[10];
      lVar2 = plVar16[0xb];
      lVar18 = *(long *)PTR_DAT_06649f60;
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar18 = *(long *)puVar7;
      }
      uVar11 = FUN_050619a8(lVar13,lVar2,**(undefined8 **)(lVar18 + 0xb8),
                            (*(undefined8 **)(lVar18 + 0xb8))[1],0);
      if ((uVar11 & 1) != 0) {
        if (plVar12 == (long *)0x0) goto LAB_0556722c;
        FUN_055b917c(plVar12,plVar16,0);
      }
    }
    lVar13 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
    while (lVar13 != 0) {
      uVar23 = uVar23 + 1;
      iVar8 = FUN_04fa9478(lVar13,0);
      if (iVar8 <= (int)uVar23) {
        if (param_7 != 0) {
          uVar11 = thunk_FUN_04e7e884(*(undefined8 *)(param_7 + 0x48),lVar1,0);
          uVar10 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
          uVar21 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
          if ((uVar11 & 1) == 0) {
            uVar14 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
            plVar16 = (long *)FUN_05567c74(uVar14,uVar10,uVar21,uVar14);
            if (plVar16 != (long *)0x0) {
              uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
              plVar12 = (long *)FUN_05565738(param_1,lVar1,uVar10,&local_80);
              goto LAB_055673f4;
            }
          }
          else {
            plVar16 = (long *)FUN_05567b44(uVar21,uVar10,uVar21);
            plVar12 = plVar16;
            if (plVar16 != (long *)0x0) {
LAB_055673f4:
              plVar17 = (long *)thunk_FUN_02d8a638(*(undefined8 *)
                                                    System_Xml_XPath_XPathItem_TypeInfo);
              FUN_055bacdc(plVar17,0);
              local_78 = 0;
              uStack_70 = 0;
              FUN_0505d7f4(&local_78,0xffffffff,0xffffffff,0xffffffff,0,0,0);
              if (plVar17 == (long *)0x0) goto LAB_05567554;
              FUN_055c1b28(plVar17,local_78,uStack_70,0);
              FUN_0556797c(param_1,plVar16,param_8 & 1);
              FUN_05561998(param_1,plVar12,0,local_80);
              lVar13 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
              if (lVar13 == 0) goto LAB_05567554;
              iVar8 = 0;
              goto LAB_05567490;
            }
          }
          uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
          uVar21 = (**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0));
          uVar14 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
          uVar15 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
          *param_5 = *param_5 + 1;
          plVar16 = (long *)FUN_0556138c(param_1,uVar10,uVar21,uVar14,param_7,uVar15);
          if ((param_2 & 1) != 0) goto LAB_05566bac;
          lVar13 = *(long *)PTR_DAT_06649f60;
          plVar12 = (long *)PTR_DAT_06649f60;
          if (*(int *)(lVar13 + 0xe4) != 0) goto LAB_05566b90;
          goto LAB_05566b8c;
        }
        break;
      }
      plVar16 = (long *)(**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
      if (plVar16 == (long *)0x0) break;
      plVar17 = (long *)(**(code **)(*plVar16 + 0x308))
                                  (plVar16,uVar23,*(undefined8 *)(*plVar16 + 0x310));
      if (plVar17 == (long *)0x0) goto LAB_05567854;
      bVar4 = *(byte *)(*plVar17 + 0x130);
      bVar5 = *(byte *)(*(long *)puVar6 + 0x130);
      if ((bVar4 < bVar5) ||
         (lVar13 = *(long *)(*plVar17 + 200),
         *(long *)(lVar13 + (ulong)bVar5 * 8 + -8) != *(long *)puVar6)) goto LAB_05567854;
      bVar5 = *(byte *)(*(long *)puVar19 + 0x130);
      if ((bVar4 < bVar5) || (*(long *)(lVar13 + (ulong)bVar5 * 8 + -8) != *(long *)puVar19))
      goto LAB_05567854;
      lVar13 = plVar17[0x13];
      uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
      uVar11 = thunk_FUN_04e7e884(lVar13,uVar10,0);
      if ((uVar11 & 1) != 0) {
        if (param_7 == 0) break;
        uVar11 = thunk_FUN_04e7e884(*(undefined8 *)(param_7 + 0x48),lVar1,0);
        if ((uVar11 & 1) != 0) {
          *param_5 = uVar23;
          if (plVar12 != (long *)0x0) {
            iVar8 = FUN_04fa9478(plVar12,0);
            puVar6 = PTR_DAT_06649f60;
            if (iVar8 < 1) goto LAB_0556766c;
            iVar8 = 0;
            goto LAB_055675dc;
          }
          break;
        }
      }
      if (plVar17[0x14] == 0) break;
      uVar21 = *(undefined8 *)(plVar17[0x14] + 0x10);
      uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
      uVar11 = thunk_FUN_04e7e884(uVar21,uVar10,0);
      if ((uVar11 & 1) != 0) {
        if (plVar17[0x14] == 0) break;
        uVar21 = *(undefined8 *)(plVar17[0x14] + 0x18);
        uVar10 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
        uVar11 = thunk_FUN_04e7e884(uVar21,uVar10,0);
        if ((uVar11 & 1) != 0) {
          *param_5 = uVar23;
          if (plVar12 != (long *)0x0) {
            iVar8 = FUN_04fa9478(plVar12,0);
            puVar6 = PTR_DAT_06649f60;
            if (iVar8 < 1) goto LAB_05567758;
            iVar8 = 0;
            goto LAB_055676c8;
          }
          break;
        }
      }
      if (plVar12 == (long *)0x0) break;
      FUN_055b917c(plVar12,plVar17,0);
      lVar13 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
    }
  }
LAB_0556722c:
  lVar20 = *(long *)(lVar20 + 0x28);
  goto LAB_05567558;
  while( true ) {
    FUN_055c19f0(plVar22,**(undefined8 **)(lVar13 + 0xb8),(*(undefined8 **)(lVar13 + 0xb8))[1],0);
    iVar8 = iVar8 + 1;
    iVar9 = FUN_04fa9478(plVar12,0);
    if (iVar9 <= iVar8) break;
LAB_055675dc:
    plVar22 = (long *)(**(code **)(*plVar12 + 0x308))
                                (plVar12,iVar8,*(undefined8 *)(*plVar12 + 0x310));
    lVar13 = *(long *)puVar6;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar13);
      lVar13 = *(long *)puVar6;
    }
    if (plVar22 == (long *)0x0) goto LAB_05567554;
    bVar4 = *(byte *)(*(long *)puVar19 + 0x130);
    if ((*(byte *)(*plVar22 + 0x130) < bVar4) ||
       (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)puVar19)) {
      if (*(long *)(lVar20 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4e268(plVar22);
      }
      goto LAB_05567938;
    }
  }
LAB_0556766c:
  FUN_05561998(param_1,plVar17,0,param_7);
  plVar16 = plVar17;
LAB_0556768c:
  FUN_0556797c(param_1,plVar16,param_8 & 1);
  goto LAB_05566bac;
  while( true ) {
    bVar4 = *(byte *)(*(long *)puVar19 + 0x130);
    if ((*(byte *)(*plVar22 + 0x130) < bVar4) ||
       (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)puVar19))
    goto LAB_055678f0;
    FUN_055c19f0(plVar22,**(undefined8 **)(lVar13 + 0xb8),(*(undefined8 **)(lVar13 + 0xb8))[1],0);
    iVar8 = iVar8 + 1;
    iVar9 = FUN_04fa9478(plVar12,0);
    if (iVar9 <= iVar8) break;
LAB_055676c8:
    plVar22 = (long *)(**(code **)(*plVar12 + 0x308))
                                (plVar12,iVar8,*(undefined8 *)(*plVar12 + 0x310));
    lVar13 = *(long *)puVar6;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar13);
      lVar13 = *(long *)puVar6;
    }
    if (plVar22 == (long *)0x0) goto LAB_05567554;
  }
LAB_05567758:
  uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
  plVar16 = (long *)FUN_05565738(param_1,lVar1,uVar10,&local_80);
  FUN_05561998(param_1,plVar16,0,local_80);
LAB_055677a0:
  FUN_0556797c(param_1,plVar17,param_8 & 1);
LAB_05566bac:
  if (*(long *)(lVar20 + 0x28) == local_68) {
    return plVar16;
  }
  goto LAB_05567938;
  while( true ) {
    lVar13 = (**(code **)(*plVar17 + 0x238))(plVar17,*(undefined8 *)(*plVar17 + 0x240));
    plVar12 = (long *)(**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
    if (plVar12 == (long *)0x0) break;
    plVar12 = (long *)(**(code **)(*plVar12 + 0x308))
                                (plVar12,iVar8,*(undefined8 *)(*plVar12 + 0x310));
    if (plVar12 != (long *)0x0) {
      bVar4 = *(byte *)(*(long *)puVar19 + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)puVar19)) {
        if (*(long *)(lVar20 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4e268(plVar12);
        }
        goto LAB_05567938;
      }
    }
    uVar10 = FUN_05567dd4(param_1,plVar12);
    if (lVar13 == 0) break;
    FUN_055b917c(lVar13,uVar10,0);
    iVar8 = iVar8 + 1;
    lVar13 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
    if (lVar13 == 0) break;
LAB_05567490:
    iVar9 = FUN_04fa9478(lVar13,0);
    if (iVar9 <= iVar8) {
      lVar13 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
      if (lVar13 != 0) {
        FUN_04fa9498(lVar13,0);
        lVar13 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
        if (lVar13 != 0) {
          FUN_055b917c(lVar13,plVar17,0);
          goto LAB_05566bac;
        }
      }
      break;
    }
  }
LAB_05567554:
  lVar20 = *(long *)(lVar20 + 0x28);
LAB_05567558:
  if (lVar20 == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
LAB_05567938:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


