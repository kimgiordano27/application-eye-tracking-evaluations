/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaException$$.ctor
ENTRY_POINT: 053cf4a4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_19;weak_xr_or_state_hits_19;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_19
*/


void System_Xml_Schema_XmlSchemaException___ctor
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  code *in_x9;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x23;
  long *unaff_x24;
  long *unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined1 uStack0000000000000018;
  undefined1 uStack000000000000001c;
  
  do {
    lVar8 = (*in_x9)(param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x220));
    if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) {
LAB_053cf598:
      lVar8 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
      FUN_053e521c(lVar8,unaff_x24,0);
      uVar12 = FUN_04cb9a10(unaff_x26,0,0);
      if ((uVar12 & 1) == 0) goto LAB_053cfb70;
      if (unaff_x26 == (long *)0x0) goto LAB_053cfc70;
      plVar9 = (long *)FUN_04cbb444(unaff_x26,0);
      uVar12 = FUN_04cb7c3c(plVar9,0,0);
      if (((uVar12 & 1) == 0) &&
         (uVar12 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(plVar9), (uVar12 & 1) == 0)) {
        if ((plVar9 == (long *)0x0) ||
           (lVar11 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240)),
           lVar11 == 0)) goto LAB_053cfc70;
        if (*(long *)(lVar11 + 0x18) == 0) {
          plVar9 = (long *)(**(code **)(*unaff_x26 + 0x2c8))
                                     (unaff_x26,1,*(undefined8 *)(*unaff_x26 + 0x2d0));
          uVar12 = FUN_04cb7c3c(plVar9,0,0);
          if ((uVar12 & 1) == 0) {
            if (plVar9 == (long *)0x0) goto LAB_053cfc70;
            uVar12 = FUN_04cb9bec(plVar9,0);
            if (((uVar12 & 1) != 0) &&
               ((uVar12 = FUN_04cb9b7c(plVar9,0), (uVar12 & 1) == 0 ||
                (uVar4 = (**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250)),
                (uVar4 >> 8 & 1) != 0)))) goto LAB_053cfad4;
          }
          else {
            uVar12 = System_Xml_Schema_XmlSchemaNotation__get_Public(uVar12,lVar8,1);
            if ((uVar12 & 1) != 0) {
LAB_053cfad4:
              if (*(char *)(unaff_x19 + 0x93) != '\0') {
                if (lVar8 == 0) goto LAB_053cfc70;
                uVar10 = FUN_053e542c(lVar8,0);
                if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44(*(long *)PTR_DAT_06322478);
                }
                uVar13 = FUN_053efa38(0);
                if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
                }
                uVar12 = FUN_04d938a0(uVar10,uVar13,0);
                if ((uVar12 & 1) != 0) {
                  uVar10 = (**(code **)(*unaff_x24 + 0x1b8))
                                     (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
                  uVar12 = thunk_FUN_04c08854(uVar10,*(undefined8 *)OVRPlugin_OVRP_1_107_0_TypeInfo,
                                              0);
                  if ((uVar12 & 1) != 0) goto LAB_053cfbd0;
                }
              }
LAB_053cfb70:
              uVar10 = (**(code **)(*unaff_x24 + 0x1b8))
                                 (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
              uVar10 = FUN_053d6258(uVar10,0);
              if (lVar8 != 0) {
                FUN_053e5314(lVar8,uVar10,0);
                goto LAB_053cfb9c;
              }
LAB_053cfc70:
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
          }
        }
      }
    }
    else if (1 < (int)*(long *)(lVar8 + 0x18)) {
      plVar9 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
      uVar10 = (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
      lVar8 = FUN_053d6158(uVar10,0);
      if (plVar9 != (long *)0x0) {
        if ((lVar8 != 0) &&
           (lVar11 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
LAB_053cfc78:
          uVar10 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar10,0);
        }
        if ((int)plVar9[3] == 0) {
LAB_053cfc74:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        plVar9[4] = lVar8;
        thunk_FUN_02bb0e9c(plVar9 + 4,lVar8);
        lVar8 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
        if ((lVar8 != 0) &&
           (lVar11 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
        goto LAB_053cfc78;
        if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
        plVar9[5] = lVar8;
        thunk_FUN_02bb0e9c(plVar9 + 5,lVar8);
        FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_112_0_TypeInfo,plVar9,0);
        FUN_053e3650();
        goto LAB_053cf598;
      }
      goto LAB_053cfc70;
    }
LAB_053cfbd0:
    puVar2 = OVRPlugin_OVRP_1_102_0_TypeInfo;
    unaff_x21 = unaff_x21 + 1;
    if ((long)(int)*(uint *)(in_stack_00000008 + 0x18) <= (long)unaff_x21) {
      if (unaff_x29 != 0) {
        if (1 < *(int *)(unaff_x29 + 0x18)) {
          lVar8 = *(long *)OVRPlugin_OVRP_1_102_0_TypeInfo;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar8 = *(long *)puVar2;
          }
          FUN_037a7ec8(unaff_x29,**(undefined8 **)(lVar8 + 0xb8),
                       *(undefined8 *)OVRPlugin_OVRP_1_105_0_TypeInfo);
        }
        FUN_053d0134();
        thunk_FUN_02b4aae0(0);
        *(long *)(unaff_x19 + 0x50) = unaff_x29;
        thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x50),unaff_x29);
        return;
      }
      goto LAB_053cfc70;
    }
    if (*(uint *)(in_stack_00000008 + 0x18) <= unaff_x21) goto LAB_053cfc74;
    param_2 = *(long **)(in_stack_00000010 + unaff_x21 * 8);
    if (*(char *)(unaff_x19 + 0x95) != '\0') {
      uVar10 = *(undefined8 *)OVRPlugin_OVRP_1_100_0_TypeInfo;
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_04d8a7b0(uVar10,0);
      if (param_2 == (long *)0x0) goto LAB_053cfc70;
      lVar11 = (**(code **)(*param_2 + 0x218))(param_2,uVar10,0,*(undefined8 *)(*param_2 + 0x220));
      if ((lVar11 == 0) || (*(long *)(lVar11 + 0x18) == 0)) goto LAB_053cfbd0;
      if (1 < (int)*(long *)(lVar11 + 0x18)) {
        plVar9 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
        uVar10 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
        lVar8 = FUN_053d6158(uVar10,0);
        if (plVar9 == (long *)0x0) goto LAB_053cfc70;
        if ((lVar8 != 0) &&
           (lVar5 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0))
        goto LAB_053cfc78;
        if ((int)plVar9[3] == 0) goto LAB_053cfc74;
        plVar9[4] = lVar8;
        thunk_FUN_02bb0e9c(plVar9 + 4,lVar8);
        lVar8 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
        if ((lVar8 != 0) &&
           (lVar5 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0))
        goto LAB_053cfc78;
        if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
        plVar9[5] = lVar8;
        thunk_FUN_02bb0e9c(plVar9 + 5,lVar8);
        FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_106_0_TypeInfo,plVar9,0);
        FUN_053e3650();
      }
      lVar8 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
      FUN_053e521c(lVar8,param_2,0);
      iVar3 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
      if (iVar3 == 0x10) {
        lVar5 = *param_2;
        bVar1 = *(byte *)(*(long *)PTR_DAT_0631ffa8 + 0x130);
        if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0631ffa8))
        {
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(param_2);
        }
        plVar9 = (long *)(**(code **)(lVar5 + 0x298))(param_2,1,*(undefined8 *)(lVar5 + 0x2a0));
        uVar12 = FUN_04cb9ca0(plVar9,0,0);
        if (((uVar12 & 1) != 0) &&
           (uVar12 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(plVar9), (uVar12 & 1) != 0))
        goto LAB_053cfbd0;
        uVar10 = (**(code **)(*param_2 + 0x2c8))(param_2,1,*(undefined8 *)(*param_2 + 0x2d0));
        uVar12 = FUN_04cb9ca0(uVar10,0,0);
        if (((uVar12 & 1) != 0) &&
           (uVar12 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(uVar10), (uVar12 & 1) != 0))
        goto LAB_053cfbd0;
        uVar12 = FUN_04cb7c3c(plVar9,0,0);
        if ((uVar12 & 1) != 0) {
          plVar6 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
          lVar5 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
          if (plVar6 == (long *)0x0) goto LAB_053cfc70;
          if ((lVar5 != 0) &&
             (lVar7 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
          goto LAB_053cfc78;
          if ((int)plVar6[3] == 0) goto LAB_053cfc74;
          plVar6[4] = lVar5;
          thunk_FUN_02bb0e9c(plVar6 + 4,lVar5);
          lVar5 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
          if ((lVar5 != 0) &&
             (lVar7 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
          goto LAB_053cfc78;
          if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
          plVar6[5] = lVar5;
          thunk_FUN_02bb0e9c(plVar6 + 5,lVar5);
          FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_110_0_TypeInfo,plVar6,0);
          FUN_053e3650();
          unaff_x23 = in_stack_00000000;
        }
        uVar12 = FUN_04cb7c3c(uVar10,0,0);
        if (((uVar12 & 1) != 0) &&
           (uVar12 = System_Xml_Schema_XmlSchemaNotation__get_Public(uVar12,lVar8,0),
           (uVar12 & 1) == 0)) {
          plVar6 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
          lVar5 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
          if (plVar6 == (long *)0x0) goto LAB_053cfc70;
          if ((lVar5 != 0) &&
             (lVar7 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
          goto LAB_053cfc78;
          if ((int)plVar6[3] == 0) goto LAB_053cfc74;
          plVar6[4] = lVar5;
          thunk_FUN_02bb0e9c(plVar6 + 4,lVar5);
          lVar5 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
          if ((lVar5 != 0) &&
             (lVar7 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
          goto LAB_053cfc78;
          if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
          plVar6[5] = lVar5;
          thunk_FUN_02bb0e9c(plVar6 + 5,lVar5);
          uVar10 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_113_0_TypeInfo,plVar6,0);
          *(undefined8 *)(unaff_x19 + 0x88) = uVar10;
          thunk_FUN_02bb0e9c(unaff_x19 + 0x88,uVar10);
        }
        if ((plVar9 == (long *)0x0) ||
           (lVar5 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240)),
           lVar5 == 0)) goto LAB_053cfc70;
        if (*(long *)(lVar5 + 0x18) != 0) {
          plVar9 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
          lVar5 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
          if (plVar9 == (long *)0x0) goto LAB_053cfc70;
          if ((lVar5 != 0) &&
             (lVar7 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0))
          goto LAB_053cfc78;
          if ((int)plVar9[3] == 0) goto LAB_053cfc74;
          plVar9[4] = lVar5;
          thunk_FUN_02bb0e9c(plVar9 + 4,lVar5);
          lVar5 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
          if ((lVar5 != 0) &&
             (lVar7 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0))
          goto LAB_053cfc78;
          if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
          plVar9[5] = lVar5;
          thunk_FUN_02bb0e9c(plVar9 + 5,lVar5);
          puVar14 = (undefined8 *)OVRPlugin_OVRP_1_10_0_TypeInfo;
LAB_053cf284:
          FUN_0540ce80(*puVar14,plVar9,0);
          FUN_053e3650();
        }
      }
      else {
        iVar3 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
        if (iVar3 != 4) {
          plVar9 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
          lVar5 = FUN_053d6158(unaff_x20,0);
          if (plVar9 != (long *)0x0) {
            if ((lVar5 == 0) ||
               (lVar7 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar7 != 0)) {
              if ((int)plVar9[3] != 0) {
                plVar9[4] = lVar5;
                thunk_FUN_02bb0e9c(plVar9 + 4,lVar5);
                lVar5 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
                if ((lVar5 == 0) ||
                   (lVar7 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar7 != 0))
                {
                  if ((*(uint *)(plVar9 + 3) & 0xfffffffe) != 0) {
                    plVar9[5] = lVar5;
                    thunk_FUN_02bb0e9c(plVar9 + 5,lVar5);
                    puVar14 = (undefined8 *)OVRPlugin_OVRP_1_109_0_TypeInfo;
                    goto LAB_053cf284;
                  }
                  goto LAB_053cfc74;
                }
                goto LAB_053cfc78;
              }
              goto LAB_053cfc74;
            }
            goto LAB_053cfc78;
          }
          goto LAB_053cfc70;
        }
      }
      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_053cfc74;
      plVar9 = *(long **)(lVar11 + 0x20);
      if (plVar9 == (long *)0x0) goto LAB_053cfc70;
      if (*plVar9 != *(long *)OVRPlugin_OVRP_1_101_0_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(plVar9);
      }
      if ((char)plVar9[3] == '\0') {
        lVar11 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
        if (lVar8 == 0) goto LAB_053cfc70;
      }
      else {
        if ((plVar9[2] == 0) || (*(int *)(plVar9[2] + 0x10) == 0)) {
          plVar6 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
          lVar11 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
          if (plVar6 == (long *)0x0) goto LAB_053cfc70;
          if ((lVar11 != 0) &&
             (lVar5 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0))
          goto LAB_053cfc78;
          if ((int)plVar6[3] == 0) goto LAB_053cfc74;
          plVar6[4] = lVar11;
          thunk_FUN_02bb0e9c(plVar6 + 4,lVar11);
          lVar11 = FUN_053d6158(unaff_x20,0);
          if ((lVar11 != 0) &&
             (lVar5 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0))
          goto LAB_053cfc78;
          if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
          plVar6[5] = lVar11;
          thunk_FUN_02bb0e9c(plVar6 + 5,lVar11);
          FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_111_0_TypeInfo,plVar6,0);
          FUN_053e3650();
        }
        if (lVar8 == 0) goto LAB_053cfc70;
        lVar11 = plVar9[2];
      }
      FUN_053e5314(lVar8,lVar11,0);
      uVar10 = FUN_053e52fc(lVar8,0);
      uVar10 = FUN_053d6258(uVar10,0);
      FUN_053e5314(lVar8,uVar10,0);
      uVar10 = FUN_053e542c(lVar8,0);
      uVar4 = FUN_053d6074(uVar10,0);
      FUN_053e53dc(lVar8,uVar4 & 1,0);
      FUN_053e5374(lVar8,(char)plVar9[4],0);
      if (((char)plVar9[4] != '\0') && (*(char *)(unaff_x19 + 0x20) != '\0')) {
        plVar6 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
        uVar10 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
        lVar11 = FUN_053d6158(uVar10,0);
        if (plVar6 == (long *)0x0) goto LAB_053cfc70;
        if ((lVar11 != 0) &&
           (lVar5 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0))
        goto LAB_053cfc78;
        if ((int)plVar6[3] == 0) goto LAB_053cfc74;
        plVar6[4] = lVar11;
        thunk_FUN_02bb0e9c(plVar6 + 4,lVar11);
        lVar11 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
        if ((lVar11 != 0) &&
           (lVar5 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0))
        goto LAB_053cfc78;
        if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
        plVar6[5] = lVar11;
        thunk_FUN_02bb0e9c(plVar6 + 5,lVar11);
        uStack000000000000001c = 1;
        lVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                           (*(undefined8 *)(PTR_DAT_06312310 + 0x28),(long)&stack0x00000018 + 4);
        if ((lVar11 != 0) &&
           (lVar5 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0))
        goto LAB_053cfc78;
        if (*(uint *)(plVar6 + 3) < 3) goto LAB_053cfc74;
        plVar6[6] = lVar11;
        thunk_FUN_02bb0e9c(plVar6 + 6,lVar11);
        uVar10 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo,plVar6,0);
        if (*(int *)(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
        }
        FUN_053da024(uVar10,unaff_x20,0);
      }
      FUN_053e53a8(lVar8,*(undefined1 *)((long)plVar9 + 0x21),0);
      FUN_053e5344(lVar8,*(undefined4 *)((long)plVar9 + 0x1c),0);
LAB_053cfbc0:
      FUN_053cd398(unaff_x29,lVar8,unaff_x23);
      goto LAB_053cfbd0;
    }
    lVar8 = *(long *)PTR_DAT_0631ff68;
    if (*(char *)(unaff_x19 + 0x94) == '\0') {
      if (param_2 == (long *)0x0) {
LAB_053cf1b8:
        plVar9 = (long *)0x0;
      }
      else {
        if (*(byte *)(*param_2 + 0x130) < *(byte *)(lVar8 + 0x130)) goto LAB_053cf1b8;
        plVar9 = param_2;
        if (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8
           ) {
          plVar9 = (long *)0x0;
        }
      }
      uVar12 = FUN_04cb81c0(plVar9,0,0);
      if ((uVar12 & 1) != 0) {
        if (plVar9 == (long *)0x0) goto LAB_053cfc70;
        uVar12 = FUN_04cb80cc(plVar9,0);
        if ((uVar12 & 1) == 0) {
          lVar8 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
          FUN_053e521c(lVar8,param_2,0);
          if (param_2 == (long *)0x0) goto LAB_053cfc70;
          uVar10 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
          uVar10 = FUN_053d6258(uVar10,0);
          if (lVar8 == 0) goto LAB_053cfc70;
          FUN_053e5314(lVar8,uVar10,0);
          if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar10 = FUN_053eeef8(0);
          lVar11 = (**(code **)(*plVar9 + 0x218))(plVar9,uVar10,0,*(undefined8 *)(*plVar9 + 0x220));
          if ((lVar11 == 0) || (*(long *)(lVar11 + 0x18) == 0)) {
            if (*(char *)(unaff_x19 + 0x20) != '\0') {
              plVar9 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
              uVar10 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
              lVar11 = FUN_053d6158(uVar10,0);
              if (plVar9 == (long *)0x0) goto LAB_053cfc70;
              if ((lVar11 != 0) &&
                 (lVar5 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0))
              goto LAB_053cfc78;
              if ((int)plVar9[3] == 0) goto LAB_053cfc74;
              plVar9[4] = lVar11;
              thunk_FUN_02bb0e9c(plVar9 + 4,lVar11);
              lVar11 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
              if ((lVar11 != 0) &&
                 (lVar5 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0))
              goto LAB_053cfc78;
              if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
              plVar9[5] = lVar11;
              thunk_FUN_02bb0e9c(plVar9 + 5,lVar11);
              uStack0000000000000018 = 1;
              lVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                 (*(undefined8 *)(PTR_DAT_06312310 + 0x28),&stack0x00000018);
              if ((lVar11 != 0) &&
                 (lVar5 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0))
              goto LAB_053cfc78;
              if (*(uint *)(plVar9 + 3) < 3) goto LAB_053cfc74;
              plVar9[6] = lVar11;
              thunk_FUN_02bb0e9c(plVar9 + 6,lVar11);
              uVar10 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_108_0_TypeInfo,plVar9,0);
              if (*(int *)(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo + 0xe4) == 0)
              {
                thunk_FUN_02b9ad44(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
              }
              FUN_053da024(uVar10,unaff_x20,0);
            }
            FUN_053e5374(lVar8,1,0);
          }
LAB_053cfb9c:
          uVar10 = FUN_053e542c(lVar8,0);
          uVar4 = FUN_053d6074(uVar10,0);
          FUN_053e53dc(lVar8,uVar4 & 1,0);
          goto LAB_053cfbc0;
        }
      }
      goto LAB_053cfbd0;
    }
    if (param_2 == (long *)0x0) {
      plVar9 = (long *)0x0;
LAB_053cf3f0:
      unaff_x26 = (long *)0x0;
    }
    else {
      lVar11 = *param_2;
      if (*(byte *)(lVar11 + 0x130) < *(byte *)(lVar8 + 0x130)) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = param_2;
        if (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8)
        {
          plVar9 = (long *)0x0;
        }
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_0631ffa8 + 0x130);
      if (*(byte *)(lVar11 + 0x130) < bVar1) goto LAB_053cf3f0;
      unaff_x26 = param_2;
      if (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0631ffa8) {
        unaff_x26 = (long *)0x0;
      }
    }
    uVar12 = FUN_04cb8194(plVar9,0,0);
    if (((uVar12 & 1) != 0) && (uVar12 = FUN_04cb9a4c(unaff_x26,0,0), (uVar12 & 1) != 0))
    goto LAB_053cfbd0;
    uVar12 = FUN_04cb81c0(plVar9,0,0);
    if ((uVar12 & 1) == 0) goto LAB_053cf45c;
    if (plVar9 == (long *)0x0) goto LAB_053cfc70;
    uVar12 = FUN_04cb808c(plVar9,0);
    if ((uVar12 & 1) != 0) goto LAB_053cfbd0;
LAB_053cf45c:
    uVar10 = *(undefined8 *)OVRPlugin_OVRP_1_104_0_TypeInfo;
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    param_3 = FUN_04d8a7b0(uVar10,0);
    if (param_2 == (long *)0x0) goto LAB_053cfc70;
    param_1 = *param_2;
    param_4 = 0;
    in_x9 = *(code **)(param_1 + 0x218);
    unaff_x24 = param_2;
  } while( true );
}


