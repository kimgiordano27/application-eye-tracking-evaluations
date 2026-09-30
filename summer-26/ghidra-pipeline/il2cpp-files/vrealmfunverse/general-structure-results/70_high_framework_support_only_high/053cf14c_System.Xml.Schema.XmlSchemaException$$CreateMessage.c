/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaException$$CreateMessage
ENTRY_POINT: 053cf14c
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


void System_Xml_Schema_XmlSchemaException__CreateMessage(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long *plVar12;
  long *unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined1 uStack0000000000000018;
  undefined1 uStack000000000000001c;
  
code_r0x053cf14c:
  if (!(bool)in_ZR) {
    unaff_x27[5] = unaff_x22;
    thunk_FUN_02bb0e9c(unaff_x27 + 5,unaff_x22);
    puVar11 = (undefined8 *)OVRPlugin_OVRP_1_10_0_TypeInfo;
LAB_053cf284:
    FUN_0540ce80(*puVar11,unaff_x27,0);
    FUN_053e3650();
LAB_053cf2a4:
    if (*(int *)(unaff_x26 + 0x18) != 0) {
      plVar12 = *(long **)(unaff_x26 + 0x20);
      if (plVar12 == (long *)0x0) goto LAB_053cfc70;
      if (*plVar12 != *(long *)OVRPlugin_OVRP_1_101_0_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(plVar12);
      }
      if ((char)plVar12[3] == '\0') {
        lVar7 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
        if (unaff_x25 == 0) goto LAB_053cfc70;
      }
      else {
        if ((plVar12[2] == 0) || (*(int *)(plVar12[2] + 0x10) == 0)) {
          plVar6 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
          lVar7 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
          if (plVar6 == (long *)0x0) goto LAB_053cfc70;
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
          goto LAB_053cfc78;
          if ((int)plVar6[3] == 0) goto LAB_053cfc74;
          plVar6[4] = lVar7;
          thunk_FUN_02bb0e9c(plVar6 + 4,lVar7);
          lVar7 = FUN_053d6158(unaff_x20,0);
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
          goto LAB_053cfc78;
          if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
          plVar6[5] = lVar7;
          thunk_FUN_02bb0e9c(plVar6 + 5,lVar7);
          FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_111_0_TypeInfo,plVar6,0);
          FUN_053e3650();
        }
        if (unaff_x25 == 0) goto LAB_053cfc70;
        lVar7 = plVar12[2];
      }
      FUN_053e5314(unaff_x25,lVar7,0);
      uVar9 = FUN_053e52fc(unaff_x25,0);
      uVar9 = FUN_053d6258(uVar9,0);
      FUN_053e5314(unaff_x25,uVar9,0);
      uVar9 = FUN_053e542c(unaff_x25,0);
      uVar4 = FUN_053d6074(uVar9,0);
      FUN_053e53dc(unaff_x25,uVar4 & 1,0);
      FUN_053e5374(unaff_x25,(char)plVar12[4],0);
      if (((char)plVar12[4] != '\0') && (*(char *)(unaff_x19 + 0x20) != '\0')) {
        plVar6 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
        uVar9 = (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
        lVar7 = FUN_053d6158(uVar9,0);
        if (plVar6 == (long *)0x0) {
LAB_053cfc70:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_053cfc78:
          uVar9 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar9,0);
        }
        if ((int)plVar6[3] == 0) goto LAB_053cfc74;
        plVar6[4] = lVar7;
        thunk_FUN_02bb0e9c(plVar6 + 4,lVar7);
        lVar7 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
        goto LAB_053cfc78;
        if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
        plVar6[5] = lVar7;
        thunk_FUN_02bb0e9c(plVar6 + 5,lVar7);
        uStack000000000000001c = 1;
        lVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(PTR_DAT_06312310 + 0x28),(long)&stack0x00000018 + 4);
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
        goto LAB_053cfc78;
        if (*(uint *)(plVar6 + 3) < 3) goto LAB_053cfc74;
        plVar6[6] = lVar7;
        thunk_FUN_02bb0e9c(plVar6 + 6,lVar7);
        uVar9 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo,plVar6,0);
        if (*(int *)(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
        }
        FUN_053da024(uVar9,unaff_x20,0);
      }
      FUN_053e53a8(unaff_x25,*(undefined1 *)((long)plVar12 + 0x21),0);
      FUN_053e5344(unaff_x25,*(undefined4 *)((long)plVar12 + 0x1c),0);
      do {
        FUN_053cd398(unaff_x29,unaff_x25,unaff_x23);
LAB_053cfbd0:
        do {
          while( true ) {
            while( true ) {
              puVar2 = OVRPlugin_OVRP_1_102_0_TypeInfo;
              unaff_x21 = unaff_x21 + 1;
              if ((long)(int)*(uint *)(in_stack_00000008 + 0x18) <= (long)unaff_x21) {
                if (unaff_x29 != 0) {
                  if (1 < *(int *)(unaff_x29 + 0x18)) {
                    lVar7 = *(long *)OVRPlugin_OVRP_1_102_0_TypeInfo;
                    if (*(int *)(lVar7 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                      lVar7 = *(long *)puVar2;
                    }
                    FUN_037a7ec8(unaff_x29,**(undefined8 **)(lVar7 + 0xb8),
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
              unaff_x24 = *(long **)(in_stack_00000010 + unaff_x21 * 8);
              if (*(char *)(unaff_x19 + 0x95) == '\0') break;
              uVar9 = *(undefined8 *)OVRPlugin_OVRP_1_100_0_TypeInfo;
              if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              uVar9 = FUN_04d8a7b0(uVar9,0);
              if (unaff_x24 == (long *)0x0) goto LAB_053cfc70;
              unaff_x26 = (**(code **)(*unaff_x24 + 0x218))
                                    (unaff_x24,uVar9,0,*(undefined8 *)(*unaff_x24 + 0x220));
              if ((unaff_x26 != 0) && (*(long *)(unaff_x26 + 0x18) != 0)) {
                if (1 < (int)*(long *)(unaff_x26 + 0x18)) {
                  plVar12 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                  uVar9 = (**(code **)(*unaff_x24 + 0x1c8))
                                    (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
                  lVar7 = FUN_053d6158(uVar9,0);
                  if (plVar12 == (long *)0x0) goto LAB_053cfc70;
                  if ((lVar7 != 0) &&
                     (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0
                     )) goto LAB_053cfc78;
                  if ((int)plVar12[3] == 0) goto LAB_053cfc74;
                  plVar12[4] = lVar7;
                  thunk_FUN_02bb0e9c(plVar12 + 4,lVar7);
                  lVar7 = (**(code **)(*unaff_x24 + 0x1b8))
                                    (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
                  if ((lVar7 != 0) &&
                     (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0
                     )) goto LAB_053cfc78;
                  if ((*(uint *)(plVar12 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                  plVar12[5] = lVar7;
                  thunk_FUN_02bb0e9c(plVar12 + 5,lVar7);
                  FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_106_0_TypeInfo,plVar12,0);
                  FUN_053e3650();
                }
                unaff_x25 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
                FUN_053e521c(unaff_x25,unaff_x24,0);
                iVar3 = (**(code **)(*unaff_x24 + 0x1a8))
                                  (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
                if (iVar3 != 0x10) {
                  iVar3 = (**(code **)(*unaff_x24 + 0x1a8))
                                    (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
                  if (iVar3 == 4) goto LAB_053cf2a4;
                  unaff_x27 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                  lVar7 = FUN_053d6158(unaff_x20,0);
                  if (unaff_x27 == (long *)0x0) goto LAB_053cfc70;
                  if ((lVar7 != 0) &&
                     (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*unaff_x27 + 0x40)),
                     lVar8 == 0)) goto LAB_053cfc78;
                  if ((int)unaff_x27[3] == 0) goto LAB_053cfc74;
                  unaff_x27[4] = lVar7;
                  thunk_FUN_02bb0e9c(unaff_x27 + 4,lVar7);
                  lVar7 = (**(code **)(*unaff_x24 + 0x1b8))
                                    (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
                  if ((lVar7 != 0) &&
                     (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*unaff_x27 + 0x40)),
                     lVar8 == 0)) goto LAB_053cfc78;
                  if ((*(uint *)(unaff_x27 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                  unaff_x27[5] = lVar7;
                  thunk_FUN_02bb0e9c(unaff_x27 + 5,lVar7);
                  puVar11 = (undefined8 *)OVRPlugin_OVRP_1_109_0_TypeInfo;
                  goto LAB_053cf284;
                }
                lVar7 = *unaff_x24;
                bVar1 = *(byte *)(*(long *)PTR_DAT_0631ffa8 + 0x130);
                if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_0631ffa8)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3ce44(unaff_x24);
                }
                plVar12 = (long *)(**(code **)(lVar7 + 0x298))
                                            (unaff_x24,1,*(undefined8 *)(lVar7 + 0x2a0));
                uVar5 = FUN_04cb9ca0(plVar12,0,0);
                if (((uVar5 & 1) == 0) ||
                   (uVar5 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(plVar12),
                   (uVar5 & 1) == 0)) {
                  uVar9 = (**(code **)(*unaff_x24 + 0x2c8))
                                    (unaff_x24,1,*(undefined8 *)(*unaff_x24 + 0x2d0));
                  uVar5 = FUN_04cb9ca0(uVar9,0,0);
                  if (((uVar5 & 1) == 0) ||
                     (uVar5 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(uVar9),
                     (uVar5 & 1) == 0)) {
                    uVar5 = FUN_04cb7c3c(plVar12,0,0);
                    if ((uVar5 & 1) != 0) {
                      plVar6 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                      lVar7 = (**(code **)(*unaff_x24 + 0x1c8))
                                        (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
                      if (plVar6 == (long *)0x0) goto LAB_053cfc70;
                      if ((lVar7 != 0) &&
                         (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar8 == 0)) goto LAB_053cfc78;
                      if ((int)plVar6[3] == 0) goto LAB_053cfc74;
                      plVar6[4] = lVar7;
                      thunk_FUN_02bb0e9c(plVar6 + 4,lVar7);
                      lVar7 = (**(code **)(*unaff_x24 + 0x1b8))
                                        (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
                      if ((lVar7 != 0) &&
                         (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar8 == 0)) goto LAB_053cfc78;
                      if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                      plVar6[5] = lVar7;
                      thunk_FUN_02bb0e9c(plVar6 + 5,lVar7);
                      FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_110_0_TypeInfo,plVar6,0);
                      FUN_053e3650();
                      unaff_x23 = in_stack_00000000;
                    }
                    uVar5 = FUN_04cb7c3c(uVar9,0,0);
                    if (((uVar5 & 1) != 0) &&
                       (uVar5 = System_Xml_Schema_XmlSchemaNotation__get_Public(uVar5,unaff_x25,0),
                       (uVar5 & 1) == 0)) {
                      plVar6 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                      lVar7 = (**(code **)(*unaff_x24 + 0x1c8))
                                        (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
                      if (plVar6 == (long *)0x0) goto LAB_053cfc70;
                      if ((lVar7 != 0) &&
                         (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar8 == 0)) goto LAB_053cfc78;
                      if ((int)plVar6[3] == 0) goto LAB_053cfc74;
                      plVar6[4] = lVar7;
                      thunk_FUN_02bb0e9c(plVar6 + 4,lVar7);
                      lVar7 = (**(code **)(*unaff_x24 + 0x1b8))
                                        (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
                      if ((lVar7 != 0) &&
                         (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar8 == 0)) goto LAB_053cfc78;
                      if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                      plVar6[5] = lVar7;
                      thunk_FUN_02bb0e9c(plVar6 + 5,lVar7);
                      uVar9 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_113_0_TypeInfo,plVar6,0);
                      *(undefined8 *)(unaff_x19 + 0x88) = uVar9;
                      thunk_FUN_02bb0e9c(unaff_x19 + 0x88,uVar9);
                    }
                    if ((plVar12 == (long *)0x0) ||
                       (lVar7 = (**(code **)(*plVar12 + 0x238))
                                          (plVar12,*(undefined8 *)(*plVar12 + 0x240)), lVar7 == 0))
                    goto LAB_053cfc70;
                    if (*(long *)(lVar7 + 0x18) == 0) goto LAB_053cf2a4;
                    unaff_x27 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                    lVar7 = (**(code **)(*unaff_x24 + 0x1c8))
                                      (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
                    if (unaff_x27 == (long *)0x0) goto LAB_053cfc70;
                    if ((lVar7 != 0) &&
                       (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*unaff_x27 + 0x40)),
                       lVar8 == 0)) goto LAB_053cfc78;
                    if ((int)unaff_x27[3] == 0) goto LAB_053cfc74;
                    unaff_x27[4] = lVar7;
                    thunk_FUN_02bb0e9c(unaff_x27 + 4,lVar7);
                    unaff_x22 = (**(code **)(*unaff_x24 + 0x1b8))
                                          (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
                    if ((unaff_x22 != 0) &&
                       (lVar7 = thunk_FUN_02b79548(unaff_x22,*(undefined8 *)(*unaff_x27 + 0x40)),
                       lVar7 == 0)) goto LAB_053cfc78;
                    in_ZR = (*(uint *)(unaff_x27 + 3) & 0xfffffffe) == 0;
                    goto code_r0x053cf14c;
                  }
                }
              }
            }
            lVar7 = *(long *)PTR_DAT_0631ff68;
            if (*(char *)(unaff_x19 + 0x94) != '\0') break;
            if (unaff_x24 == (long *)0x0) {
LAB_053cf1b8:
              plVar12 = (long *)0x0;
            }
            else {
              if (*(byte *)(*unaff_x24 + 0x130) < *(byte *)(lVar7 + 0x130)) goto LAB_053cf1b8;
              plVar12 = unaff_x24;
              if (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8)
                  != lVar7) {
                plVar12 = (long *)0x0;
              }
            }
            uVar5 = FUN_04cb81c0(plVar12,0,0);
            if ((uVar5 & 1) != 0) {
              if (plVar12 == (long *)0x0) goto LAB_053cfc70;
              uVar5 = FUN_04cb80cc(plVar12,0);
              if ((uVar5 & 1) == 0) {
                unaff_x25 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
                FUN_053e521c(unaff_x25,unaff_x24,0);
                if (unaff_x24 == (long *)0x0) goto LAB_053cfc70;
                uVar9 = (**(code **)(*unaff_x24 + 0x1b8))
                                  (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
                uVar9 = FUN_053d6258(uVar9,0);
                if (unaff_x25 == 0) goto LAB_053cfc70;
                FUN_053e5314(unaff_x25,uVar9,0);
                if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                uVar9 = FUN_053eeef8(0);
                lVar7 = (**(code **)(*plVar12 + 0x218))
                                  (plVar12,uVar9,0,*(undefined8 *)(*plVar12 + 0x220));
                if ((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) goto LAB_053cfb9c;
                if (*(char *)(unaff_x19 + 0x20) != '\0') {
                  plVar12 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
                  uVar9 = (**(code **)(*unaff_x24 + 0x1c8))
                                    (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
                  lVar7 = FUN_053d6158(uVar9,0);
                  if (plVar12 == (long *)0x0) goto LAB_053cfc70;
                  if ((lVar7 != 0) &&
                     (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0
                     )) goto LAB_053cfc78;
                  if ((int)plVar12[3] == 0) goto LAB_053cfc74;
                  plVar12[4] = lVar7;
                  thunk_FUN_02bb0e9c(plVar12 + 4,lVar7);
                  lVar7 = (**(code **)(*unaff_x24 + 0x1b8))
                                    (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
                  if ((lVar7 != 0) &&
                     (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0
                     )) goto LAB_053cfc78;
                  if ((*(uint *)(plVar12 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                  plVar12[5] = lVar7;
                  thunk_FUN_02bb0e9c(plVar12 + 5,lVar7);
                  uStack0000000000000018 = 1;
                  lVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                    (*(undefined8 *)(PTR_DAT_06312310 + 0x28),&stack0x00000018);
                  if ((lVar7 != 0) &&
                     (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0
                     )) goto LAB_053cfc78;
                  if (*(uint *)(plVar12 + 3) < 3) goto LAB_053cfc74;
                  plVar12[6] = lVar7;
                  thunk_FUN_02bb0e9c(plVar12 + 6,lVar7);
                  uVar9 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_108_0_TypeInfo,plVar12,0);
                  if (*(int *)(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo + 0xe4) ==
                      0) {
                    thunk_FUN_02b9ad44(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
                  }
                  FUN_053da024(uVar9,unaff_x20,0);
                }
                FUN_053e5374(unaff_x25,1,0);
                goto LAB_053cfb9c;
              }
            }
          }
          if (unaff_x24 == (long *)0x0) {
            plVar12 = (long *)0x0;
LAB_053cf3f0:
            plVar6 = (long *)0x0;
          }
          else {
            lVar8 = *unaff_x24;
            if (*(byte *)(lVar8 + 0x130) < *(byte *)(lVar7 + 0x130)) {
              plVar12 = (long *)0x0;
            }
            else {
              plVar12 = unaff_x24;
              if (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) !=
                  lVar7) {
                plVar12 = (long *)0x0;
              }
            }
            bVar1 = *(byte *)(*(long *)PTR_DAT_0631ffa8 + 0x130);
            if (*(byte *)(lVar8 + 0x130) < bVar1) goto LAB_053cf3f0;
            plVar6 = unaff_x24;
            if (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_0631ffa8) {
              plVar6 = (long *)0x0;
            }
          }
          uVar5 = FUN_04cb8194(plVar12,0,0);
        } while (((uVar5 & 1) != 0) && (uVar5 = FUN_04cb9a4c(plVar6,0,0), (uVar5 & 1) != 0));
        uVar5 = FUN_04cb81c0(plVar12,0,0);
        if ((uVar5 & 1) != 0) {
          if (plVar12 == (long *)0x0) goto LAB_053cfc70;
          uVar5 = FUN_04cb808c(plVar12,0);
          if ((uVar5 & 1) != 0) goto LAB_053cfbd0;
        }
        uVar9 = *(undefined8 *)OVRPlugin_OVRP_1_104_0_TypeInfo;
        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar9 = FUN_04d8a7b0(uVar9,0);
        if (unaff_x24 == (long *)0x0) goto LAB_053cfc70;
        lVar7 = (**(code **)(*unaff_x24 + 0x218))
                          (unaff_x24,uVar9,0,*(undefined8 *)(*unaff_x24 + 0x220));
        if ((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) {
          if ((int)*(long *)(lVar7 + 0x18) < 2) goto LAB_053cfbd0;
          plVar12 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
          uVar9 = (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
          lVar7 = FUN_053d6158(uVar9,0);
          if (plVar12 == (long *)0x0) goto LAB_053cfc70;
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0))
          goto LAB_053cfc78;
          if ((int)plVar12[3] == 0) break;
          plVar12[4] = lVar7;
          thunk_FUN_02bb0e9c(plVar12 + 4,lVar7);
          lVar7 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0))
          goto LAB_053cfc78;
          if ((*(uint *)(plVar12 + 3) & 0xfffffffe) == 0) break;
          plVar12[5] = lVar7;
          thunk_FUN_02bb0e9c(plVar12 + 5,lVar7);
          FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_112_0_TypeInfo,plVar12,0);
          FUN_053e3650();
        }
        unaff_x25 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
        FUN_053e521c(unaff_x25,unaff_x24,0);
        uVar5 = FUN_04cb9a10(plVar6,0,0);
        if ((uVar5 & 1) == 0) goto LAB_053cfb70;
        if (plVar6 == (long *)0x0) goto LAB_053cfc70;
        plVar12 = (long *)FUN_04cbb444(plVar6,0);
        uVar5 = FUN_04cb7c3c(plVar12,0,0);
        if (((uVar5 & 1) != 0) ||
           (uVar5 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(plVar12), (uVar5 & 1) != 0))
        goto LAB_053cfbd0;
        if ((plVar12 == (long *)0x0) ||
           (lVar7 = (**(code **)(*plVar12 + 0x238))(plVar12,*(undefined8 *)(*plVar12 + 0x240)),
           lVar7 == 0)) goto LAB_053cfc70;
        if (*(long *)(lVar7 + 0x18) != 0) goto LAB_053cfbd0;
        plVar12 = (long *)(**(code **)(*plVar6 + 0x2c8))(plVar6,1,*(undefined8 *)(*plVar6 + 0x2d0));
        uVar5 = FUN_04cb7c3c(plVar12,0,0);
        if ((uVar5 & 1) == 0) {
          if (plVar12 == (long *)0x0) goto LAB_053cfc70;
          uVar5 = FUN_04cb9bec(plVar12,0);
          if (((uVar5 & 1) == 0) ||
             ((uVar5 = FUN_04cb9b7c(plVar12,0), (uVar5 & 1) != 0 &&
              (uVar4 = (**(code **)(*plVar12 + 0x248))(plVar12,*(undefined8 *)(*plVar12 + 0x250)),
              (uVar4 >> 8 & 1) == 0)))) goto LAB_053cfbd0;
        }
        else {
          uVar5 = System_Xml_Schema_XmlSchemaNotation__get_Public(uVar5,unaff_x25,1);
          if ((uVar5 & 1) == 0) goto LAB_053cfbd0;
        }
        if (*(char *)(unaff_x19 + 0x93) == '\0') goto LAB_053cfb70;
        if (unaff_x25 == 0) goto LAB_053cfc70;
        uVar9 = FUN_053e542c(unaff_x25,0);
        if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)PTR_DAT_06322478);
        }
        uVar10 = FUN_053efa38(0);
        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
        }
        uVar5 = FUN_04d938a0(uVar9,uVar10,0);
        if ((uVar5 & 1) == 0) goto LAB_053cfb70;
        uVar9 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
        uVar5 = thunk_FUN_04c08854(uVar9,*(undefined8 *)OVRPlugin_OVRP_1_107_0_TypeInfo,0);
        if ((uVar5 & 1) != 0) goto LAB_053cfbd0;
LAB_053cfb70:
        uVar9 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
        uVar9 = FUN_053d6258(uVar9,0);
        if (unaff_x25 == 0) goto LAB_053cfc70;
        FUN_053e5314(unaff_x25,uVar9,0);
LAB_053cfb9c:
        uVar9 = FUN_053e542c(unaff_x25,0);
        uVar4 = FUN_053d6074(uVar9,0);
        FUN_053e53dc(unaff_x25,uVar4 & 1,0);
      } while( true );
    }
  }
LAB_053cfc74:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


