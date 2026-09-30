/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaExternal$$set_Id
ENTRY_POINT: 053cf75c
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


void System_Xml_Schema_XmlSchemaExternal__set_Id(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x23;
  long unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined1 uStack0000000000000018;
  undefined1 uStack000000000000001c;
  
code_r0x053cf75c:
  lVar9 = (**(code **)(param_1 + 0x1b8))(param_2,*(undefined8 *)(param_1 + 0x1c0));
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*unaff_x27 + 0x40)), lVar10 == 0)) {
LAB_053cfc78:
    uVar11 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar11,0);
  }
  if ((*(uint *)(unaff_x27 + 3) & 0xfffffffe) != 0) {
    unaff_x27[5] = lVar9;
    thunk_FUN_02bb0e9c(unaff_x27 + 5,lVar9);
    uStack000000000000001c = 1;
    lVar9 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(PTR_DAT_06312310 + 0x28),(long)&stack0x00000018 + 4);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*unaff_x27 + 0x40)), lVar10 == 0))
    goto LAB_053cfc78;
    if (2 < *(uint *)(unaff_x27 + 3)) {
      unaff_x27[6] = lVar9;
      thunk_FUN_02bb0e9c(unaff_x27 + 6,lVar9);
      uVar11 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo,unaff_x27,0);
      if (*(int *)(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
      }
      FUN_053da024(uVar11,unaff_x20,0);
LAB_053cf838:
      FUN_053e53a8(unaff_x25,*(undefined1 *)((long)unaff_x26 + 0x21),0);
      FUN_053e5344(unaff_x25,*(undefined4 *)((long)unaff_x26 + 0x1c),0);
      do {
        FUN_053cd398(unaff_x29,unaff_x25,unaff_x23);
LAB_053cfbd0:
        puVar2 = OVRPlugin_OVRP_1_102_0_TypeInfo;
        unaff_x21 = unaff_x21 + 1;
        if ((long)(int)*(uint *)(in_stack_00000008 + 0x18) <= (long)unaff_x21) {
          if (unaff_x29 != 0) {
            if (1 < *(int *)(unaff_x29 + 0x18)) {
              lVar9 = *(long *)OVRPlugin_OVRP_1_102_0_TypeInfo;
              if (*(int *)(lVar9 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar9 = *(long *)puVar2;
              }
              FUN_037a7ec8(unaff_x29,**(undefined8 **)(lVar9 + 0xb8),
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
        if (*(uint *)(in_stack_00000008 + 0x18) <= unaff_x21) break;
        param_2 = *(long **)(in_stack_00000010 + unaff_x21 * 8);
        if (*(char *)(unaff_x19 + 0x95) != '\0') {
          uVar11 = *(undefined8 *)OVRPlugin_OVRP_1_100_0_TypeInfo;
          if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar11 = FUN_04d8a7b0(uVar11,0);
          if (param_2 == (long *)0x0) goto LAB_053cfc70;
          lVar9 = (**(code **)(*param_2 + 0x218))
                            (param_2,uVar11,0,*(undefined8 *)(*param_2 + 0x220));
          if ((lVar9 == 0) || (*(long *)(lVar9 + 0x18) == 0)) goto LAB_053cfbd0;
          if (1 < (int)*(long *)(lVar9 + 0x18)) {
            plVar5 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
            uVar11 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
            lVar10 = FUN_053d6158(uVar11,0);
            if (plVar5 == (long *)0x0) goto LAB_053cfc70;
            if ((lVar10 != 0) &&
               (lVar6 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
            goto LAB_053cfc78;
            if ((int)plVar5[3] == 0) break;
            plVar5[4] = lVar10;
            thunk_FUN_02bb0e9c(plVar5 + 4,lVar10);
            lVar10 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
            if ((lVar10 != 0) &&
               (lVar6 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
            goto LAB_053cfc78;
            if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) break;
            plVar5[5] = lVar10;
            thunk_FUN_02bb0e9c(plVar5 + 5,lVar10);
            FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_106_0_TypeInfo,plVar5,0);
            FUN_053e3650();
          }
          unaff_x25 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
          FUN_053e521c(unaff_x25,param_2,0);
          iVar3 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
          if (iVar3 == 0x10) {
            lVar10 = *param_2;
            bVar1 = *(byte *)(*(long *)PTR_DAT_0631ffa8 + 0x130);
            if ((*(byte *)(lVar10 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_0631ffa8)) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3ce44(param_2);
            }
            plVar5 = (long *)(**(code **)(lVar10 + 0x298))
                                       (param_2,1,*(undefined8 *)(lVar10 + 0x2a0));
            uVar7 = FUN_04cb9ca0(plVar5,0,0);
            if (((uVar7 & 1) != 0) &&
               (uVar7 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(plVar5), (uVar7 & 1) != 0))
            goto LAB_053cfbd0;
            uVar11 = (**(code **)(*param_2 + 0x2c8))(param_2,1,*(undefined8 *)(*param_2 + 0x2d0));
            uVar7 = FUN_04cb9ca0(uVar11,0,0);
            if (((uVar7 & 1) != 0) &&
               (uVar7 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(uVar11), (uVar7 & 1) != 0))
            goto LAB_053cfbd0;
            uVar7 = FUN_04cb7c3c(plVar5,0,0);
            if ((uVar7 & 1) != 0) {
              plVar8 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
              lVar10 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
              if (plVar8 == (long *)0x0) goto LAB_053cfc70;
              if ((lVar10 != 0) &&
                 (lVar6 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0))
              goto LAB_053cfc78;
              if ((int)plVar8[3] == 0) break;
              plVar8[4] = lVar10;
              thunk_FUN_02bb0e9c(plVar8 + 4,lVar10);
              lVar10 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
              if ((lVar10 != 0) &&
                 (lVar6 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0))
              goto LAB_053cfc78;
              if ((*(uint *)(plVar8 + 3) & 0xfffffffe) == 0) break;
              plVar8[5] = lVar10;
              thunk_FUN_02bb0e9c(plVar8 + 5,lVar10);
              FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_110_0_TypeInfo,plVar8,0);
              FUN_053e3650();
              unaff_x23 = in_stack_00000000;
            }
            uVar7 = FUN_04cb7c3c(uVar11,0,0);
            if (((uVar7 & 1) != 0) &&
               (uVar7 = System_Xml_Schema_XmlSchemaNotation__get_Public(uVar7,unaff_x25,0),
               (uVar7 & 1) == 0)) {
              plVar8 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
              lVar10 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
              if (plVar8 == (long *)0x0) goto LAB_053cfc70;
              if ((lVar10 != 0) &&
                 (lVar6 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0))
              goto LAB_053cfc78;
              if ((int)plVar8[3] == 0) break;
              plVar8[4] = lVar10;
              thunk_FUN_02bb0e9c(plVar8 + 4,lVar10);
              lVar10 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
              if ((lVar10 != 0) &&
                 (lVar6 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0))
              goto LAB_053cfc78;
              if ((*(uint *)(plVar8 + 3) & 0xfffffffe) == 0) break;
              plVar8[5] = lVar10;
              thunk_FUN_02bb0e9c(plVar8 + 5,lVar10);
              uVar11 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_113_0_TypeInfo,plVar8,0);
              *(undefined8 *)(unaff_x19 + 0x88) = uVar11;
              thunk_FUN_02bb0e9c(unaff_x19 + 0x88,uVar11);
            }
            if ((plVar5 == (long *)0x0) ||
               (lVar10 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)),
               lVar10 == 0)) goto LAB_053cfc70;
            if (*(long *)(lVar10 + 0x18) != 0) {
              plVar5 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
              lVar10 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
              if (plVar5 == (long *)0x0) goto LAB_053cfc70;
              if ((lVar10 != 0) &&
                 (lVar6 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
              goto LAB_053cfc78;
              if ((int)plVar5[3] == 0) break;
              plVar5[4] = lVar10;
              thunk_FUN_02bb0e9c(plVar5 + 4,lVar10);
              lVar10 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
              if ((lVar10 != 0) &&
                 (lVar6 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
              goto LAB_053cfc78;
              if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) break;
              plVar5[5] = lVar10;
              thunk_FUN_02bb0e9c(plVar5 + 5,lVar10);
              puVar13 = (undefined8 *)OVRPlugin_OVRP_1_10_0_TypeInfo;
LAB_053cf284:
              FUN_0540ce80(*puVar13,plVar5,0);
              FUN_053e3650();
            }
          }
          else {
            iVar3 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
            if (iVar3 != 4) {
              plVar5 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
              lVar10 = FUN_053d6158(unaff_x20,0);
              if (plVar5 == (long *)0x0) goto LAB_053cfc70;
              if ((lVar10 != 0) &&
                 (lVar6 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
              goto LAB_053cfc78;
              if ((int)plVar5[3] == 0) break;
              plVar5[4] = lVar10;
              thunk_FUN_02bb0e9c(plVar5 + 4,lVar10);
              lVar10 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
              if ((lVar10 != 0) &&
                 (lVar6 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
              goto LAB_053cfc78;
              if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
                plVar5[5] = lVar10;
                thunk_FUN_02bb0e9c(plVar5 + 5,lVar10);
                puVar13 = (undefined8 *)OVRPlugin_OVRP_1_109_0_TypeInfo;
                goto LAB_053cf284;
              }
              break;
            }
          }
          if (*(int *)(lVar9 + 0x18) == 0) break;
          unaff_x26 = *(long **)(lVar9 + 0x20);
          if (unaff_x26 == (long *)0x0) goto LAB_053cfc70;
          if (*unaff_x26 != *(long *)OVRPlugin_OVRP_1_101_0_TypeInfo) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3ce44(unaff_x26);
          }
          if ((char)unaff_x26[3] == '\0') {
            lVar9 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
            if (unaff_x25 == 0) goto LAB_053cfc70;
          }
          else {
            if ((unaff_x26[2] == 0) || (*(int *)(unaff_x26[2] + 0x10) == 0)) {
              plVar5 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
              lVar9 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
              if (plVar5 == (long *)0x0) goto LAB_053cfc70;
              if ((lVar9 != 0) &&
                 (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0))
              goto LAB_053cfc78;
              if ((int)plVar5[3] == 0) break;
              plVar5[4] = lVar9;
              thunk_FUN_02bb0e9c(plVar5 + 4,lVar9);
              lVar9 = FUN_053d6158(unaff_x20,0);
              if ((lVar9 != 0) &&
                 (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0))
              goto LAB_053cfc78;
              if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) break;
              plVar5[5] = lVar9;
              thunk_FUN_02bb0e9c(plVar5 + 5,lVar9);
              FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_111_0_TypeInfo,plVar5,0);
              FUN_053e3650();
            }
            if (unaff_x25 == 0) goto LAB_053cfc70;
            lVar9 = unaff_x26[2];
          }
          FUN_053e5314(unaff_x25,lVar9,0);
          uVar11 = FUN_053e52fc(unaff_x25,0);
          uVar11 = FUN_053d6258(uVar11,0);
          FUN_053e5314(unaff_x25,uVar11,0);
          uVar11 = FUN_053e542c(unaff_x25,0);
          uVar4 = FUN_053d6074(uVar11,0);
          FUN_053e53dc(unaff_x25,uVar4 & 1,0);
          FUN_053e5374(unaff_x25,(char)unaff_x26[4],0);
          if (((char)unaff_x26[4] == '\0') || (*(char *)(unaff_x19 + 0x20) == '\0'))
          goto LAB_053cf838;
          unaff_x27 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
          uVar11 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
          lVar9 = FUN_053d6158(uVar11,0);
          if (unaff_x27 == (long *)0x0) goto LAB_053cfc70;
          if ((lVar9 != 0) &&
             (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*unaff_x27 + 0x40)), lVar10 == 0))
          goto LAB_053cfc78;
          if ((int)unaff_x27[3] == 0) break;
          unaff_x27[4] = lVar9;
          thunk_FUN_02bb0e9c(unaff_x27 + 4,lVar9);
          param_1 = *param_2;
          goto code_r0x053cf75c;
        }
        lVar9 = *(long *)PTR_DAT_0631ff68;
        if (*(char *)(unaff_x19 + 0x94) == '\0') {
          if (param_2 == (long *)0x0) {
LAB_053cf1b8:
            plVar5 = (long *)0x0;
          }
          else {
            if (*(byte *)(*param_2 + 0x130) < *(byte *)(lVar9 + 0x130)) goto LAB_053cf1b8;
            plVar5 = param_2;
            if (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) !=
                lVar9) {
              plVar5 = (long *)0x0;
            }
          }
          uVar7 = FUN_04cb81c0(plVar5,0,0);
          if ((uVar7 & 1) != 0) {
            if (plVar5 == (long *)0x0) goto LAB_053cfc70;
            uVar7 = FUN_04cb80cc(plVar5,0);
            if ((uVar7 & 1) == 0) {
              unaff_x25 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
              FUN_053e521c(unaff_x25,param_2,0);
              if (param_2 == (long *)0x0) goto LAB_053cfc70;
              uVar11 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
              uVar11 = FUN_053d6258(uVar11,0);
              if (unaff_x25 == 0) goto LAB_053cfc70;
              FUN_053e5314(unaff_x25,uVar11,0);
              if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              uVar11 = FUN_053eeef8(0);
              lVar9 = (**(code **)(*plVar5 + 0x218))
                                (plVar5,uVar11,0,*(undefined8 *)(*plVar5 + 0x220));
              if ((lVar9 != 0) && (*(long *)(lVar9 + 0x18) != 0)) goto LAB_053cfb9c;
              if (*(char *)(unaff_x19 + 0x20) != '\0') {
                plVar5 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
                uVar11 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
                lVar9 = FUN_053d6158(uVar11,0);
                if (plVar5 == (long *)0x0) goto LAB_053cfc70;
                if ((lVar9 != 0) &&
                   (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0)
                   ) goto LAB_053cfc78;
                if ((int)plVar5[3] == 0) break;
                plVar5[4] = lVar9;
                thunk_FUN_02bb0e9c(plVar5 + 4,lVar9);
                lVar9 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
                if ((lVar9 != 0) &&
                   (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0)
                   ) goto LAB_053cfc78;
                if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) break;
                plVar5[5] = lVar9;
                thunk_FUN_02bb0e9c(plVar5 + 5,lVar9);
                uStack0000000000000018 = 1;
                lVar9 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                  (*(undefined8 *)(PTR_DAT_06312310 + 0x28),&stack0x00000018);
                if ((lVar9 != 0) &&
                   (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0)
                   ) goto LAB_053cfc78;
                if (*(uint *)(plVar5 + 3) < 3) break;
                plVar5[6] = lVar9;
                thunk_FUN_02bb0e9c(plVar5 + 6,lVar9);
                uVar11 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_108_0_TypeInfo,plVar5,0);
                if (*(int *)(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo + 0xe4) == 0
                   ) {
                  thunk_FUN_02b9ad44(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
                }
                FUN_053da024(uVar11,unaff_x20,0);
              }
              FUN_053e5374(unaff_x25,1,0);
              goto LAB_053cfb9c;
            }
          }
          goto LAB_053cfbd0;
        }
        if (param_2 == (long *)0x0) {
          plVar5 = (long *)0x0;
LAB_053cf3f0:
          plVar8 = (long *)0x0;
        }
        else {
          lVar10 = *param_2;
          if (*(byte *)(lVar10 + 0x130) < *(byte *)(lVar9 + 0x130)) {
            plVar5 = (long *)0x0;
          }
          else {
            plVar5 = param_2;
            if (*(long *)(*(long *)(lVar10 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) !=
                lVar9) {
              plVar5 = (long *)0x0;
            }
          }
          bVar1 = *(byte *)(*(long *)PTR_DAT_0631ffa8 + 0x130);
          if (*(byte *)(lVar10 + 0x130) < bVar1) goto LAB_053cf3f0;
          plVar8 = param_2;
          if (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_0631ffa8) {
            plVar8 = (long *)0x0;
          }
        }
        uVar7 = FUN_04cb8194(plVar5,0,0);
        if (((uVar7 & 1) != 0) && (uVar7 = FUN_04cb9a4c(plVar8,0,0), (uVar7 & 1) != 0))
        goto LAB_053cfbd0;
        uVar7 = FUN_04cb81c0(plVar5,0,0);
        if ((uVar7 & 1) != 0) {
          if (plVar5 == (long *)0x0) goto LAB_053cfc70;
          uVar7 = FUN_04cb808c(plVar5,0);
          if ((uVar7 & 1) != 0) goto LAB_053cfbd0;
        }
        uVar11 = *(undefined8 *)OVRPlugin_OVRP_1_104_0_TypeInfo;
        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar11 = FUN_04d8a7b0(uVar11,0);
        if (param_2 == (long *)0x0) goto LAB_053cfc70;
        lVar9 = (**(code **)(*param_2 + 0x218))(param_2,uVar11,0,*(undefined8 *)(*param_2 + 0x220));
        if ((lVar9 != 0) && (*(long *)(lVar9 + 0x18) != 0)) {
          if ((int)*(long *)(lVar9 + 0x18) < 2) goto LAB_053cfbd0;
          plVar5 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
          uVar11 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
          lVar9 = FUN_053d6158(uVar11,0);
          if (plVar5 == (long *)0x0) goto LAB_053cfc70;
          if ((lVar9 != 0) &&
             (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0))
          goto LAB_053cfc78;
          if ((int)plVar5[3] == 0) break;
          plVar5[4] = lVar9;
          thunk_FUN_02bb0e9c(plVar5 + 4,lVar9);
          lVar9 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
          if ((lVar9 != 0) &&
             (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0))
          goto LAB_053cfc78;
          if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) break;
          plVar5[5] = lVar9;
          thunk_FUN_02bb0e9c(plVar5 + 5,lVar9);
          FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_112_0_TypeInfo,plVar5,0);
          FUN_053e3650();
        }
        unaff_x25 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
        FUN_053e521c(unaff_x25,param_2,0);
        uVar7 = FUN_04cb9a10(plVar8,0,0);
        if ((uVar7 & 1) == 0) goto LAB_053cfb70;
        if (plVar8 == (long *)0x0) goto LAB_053cfc70;
        plVar5 = (long *)FUN_04cbb444(plVar8,0);
        uVar7 = FUN_04cb7c3c(plVar5,0,0);
        if (((uVar7 & 1) != 0) ||
           (uVar7 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(plVar5), (uVar7 & 1) != 0))
        goto LAB_053cfbd0;
        if ((plVar5 == (long *)0x0) ||
           (lVar9 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)),
           lVar9 == 0)) goto LAB_053cfc70;
        if (*(long *)(lVar9 + 0x18) != 0) goto LAB_053cfbd0;
        plVar5 = (long *)(**(code **)(*plVar8 + 0x2c8))(plVar8,1,*(undefined8 *)(*plVar8 + 0x2d0));
        uVar7 = FUN_04cb7c3c(plVar5,0,0);
        if ((uVar7 & 1) == 0) {
          if (plVar5 == (long *)0x0) goto LAB_053cfc70;
          uVar7 = FUN_04cb9bec(plVar5,0);
          if (((uVar7 & 1) == 0) ||
             ((uVar7 = FUN_04cb9b7c(plVar5,0), (uVar7 & 1) != 0 &&
              (uVar4 = (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250)),
              (uVar4 >> 8 & 1) == 0)))) goto LAB_053cfbd0;
        }
        else {
          uVar7 = System_Xml_Schema_XmlSchemaNotation__get_Public(uVar7,unaff_x25,1);
          if ((uVar7 & 1) == 0) goto LAB_053cfbd0;
        }
        if (*(char *)(unaff_x19 + 0x93) == '\0') goto LAB_053cfb70;
        if (unaff_x25 == 0) goto LAB_053cfc70;
        uVar11 = FUN_053e542c(unaff_x25,0);
        if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)PTR_DAT_06322478);
        }
        uVar12 = FUN_053efa38(0);
        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
        }
        uVar7 = FUN_04d938a0(uVar11,uVar12,0);
        if ((uVar7 & 1) == 0) goto LAB_053cfb70;
        uVar11 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
        uVar7 = thunk_FUN_04c08854(uVar11,*(undefined8 *)OVRPlugin_OVRP_1_107_0_TypeInfo,0);
        if ((uVar7 & 1) != 0) goto LAB_053cfbd0;
LAB_053cfb70:
        uVar11 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
        uVar11 = FUN_053d6258(uVar11,0);
        if (unaff_x25 == 0) {
LAB_053cfc70:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        FUN_053e5314(unaff_x25,uVar11,0);
LAB_053cfb9c:
        uVar11 = FUN_053e542c(unaff_x25,0);
        uVar4 = FUN_053d6074(uVar11,0);
        FUN_053e53dc(unaff_x25,uVar4 & 1,0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


