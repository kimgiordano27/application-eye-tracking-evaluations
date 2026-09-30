/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaElement$$get_BlockResolved
ENTRY_POINT: 053cec10
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


void System_Xml_Schema_XmlSchemaElement__get_BlockResolved(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar16;
  long *unaff_x24;
  long *plVar17;
  long unaff_x29;
  undefined1 uStack0000000000000018;
  undefined1 uStack000000000000001c;
  
  FUN_0452d044(param_1,*unaff_x20);
  if (*(char *)(unaff_x19 + 0x94) == '\0') {
    if (unaff_x24 == (long *)0x0) goto LAB_053cfc70;
    uVar13 = 0x36;
  }
  else {
    if (unaff_x24 == (long *)0x0) goto LAB_053cfc70;
    uVar13 = 0x16;
  }
  lVar5 = (**(code **)(*unaff_x24 + 0x708))(unaff_x24,uVar13,*(undefined8 *)(*unaff_x24 + 0x710));
  if (lVar5 != 0) {
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar16 = 0;
      uVar14 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        if (uVar14 <= uVar16) goto LAB_053cfc74;
        plVar17 = *(long **)(lVar5 + 0x20 + uVar16 * 8);
        if (*(char *)(unaff_x19 + 0x95) == '\0') {
          lVar8 = *(long *)PTR_DAT_0631ff68;
          if (*(char *)(unaff_x19 + 0x94) == '\0') {
            if (plVar17 == (long *)0x0) {
LAB_053cf1b8:
              plVar7 = (long *)0x0;
            }
            else {
              if (*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar8 + 0x130)) goto LAB_053cf1b8;
              plVar7 = plVar17;
              if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) !=
                  lVar8) {
                plVar7 = (long *)0x0;
              }
            }
            uVar14 = FUN_04cb81c0(plVar7,0,0);
            if ((uVar14 & 1) != 0) {
              if (plVar7 == (long *)0x0) goto LAB_053cfc70;
              uVar14 = FUN_04cb80cc(plVar7,0);
              if ((uVar14 & 1) == 0) {
                lVar8 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
                FUN_053e521c(lVar8,plVar17,0);
                if (plVar17 == (long *)0x0) goto LAB_053cfc70;
                uVar13 = (**(code **)(*plVar17 + 0x1b8))(plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
                uVar13 = FUN_053d6258(uVar13,0);
                if (lVar8 == 0) goto LAB_053cfc70;
                FUN_053e5314(lVar8,uVar13,0);
                if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                uVar13 = FUN_053eeef8(0);
                lVar6 = (**(code **)(*plVar7 + 0x218))
                                  (plVar7,uVar13,0,*(undefined8 *)(*plVar7 + 0x220));
                if ((lVar6 == 0) || (*(long *)(lVar6 + 0x18) == 0)) {
                  if (*(char *)(unaff_x19 + 0x20) != '\0') {
                    plVar7 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
                    uVar13 = (**(code **)(*plVar17 + 0x1c8))
                                       (plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
                    lVar6 = FUN_053d6158(uVar13,0);
                    if (plVar7 == (long *)0x0) goto LAB_053cfc70;
                    if ((lVar6 != 0) &&
                       (lVar9 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                       lVar9 == 0)) goto LAB_053cfc78;
                    if ((int)plVar7[3] == 0) goto LAB_053cfc74;
                    plVar7[4] = lVar6;
                    thunk_FUN_02bb0e9c(plVar7 + 4,lVar6);
                    lVar6 = (**(code **)(*plVar17 + 0x1b8))
                                      (plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
                    if ((lVar6 != 0) &&
                       (lVar9 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                       lVar9 == 0)) goto LAB_053cfc78;
                    if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                    plVar7[5] = lVar6;
                    thunk_FUN_02bb0e9c(plVar7 + 5,lVar6);
                    uStack0000000000000018 = 1;
                    lVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                      (*(undefined8 *)(PTR_DAT_06312310 + 0x28),&stack0x00000018);
                    if ((lVar6 != 0) &&
                       (lVar9 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                       lVar9 == 0)) goto LAB_053cfc78;
                    if (*(uint *)(plVar7 + 3) < 3) goto LAB_053cfc74;
                    plVar7[6] = lVar6;
                    thunk_FUN_02bb0e9c(plVar7 + 6,lVar6);
                    uVar13 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_108_0_TypeInfo,plVar7,0);
                    if (*(int *)(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo + 0xe4)
                        == 0) {
                      thunk_FUN_02b9ad44(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo)
                      ;
                    }
                    FUN_053da024(uVar13,unaff_x24,0);
                  }
                  FUN_053e5374(lVar8,1,0);
                }
LAB_053cfb9c:
                uVar13 = FUN_053e542c(lVar8,0);
                uVar4 = FUN_053d6074(uVar13,0);
                FUN_053e53dc(lVar8,uVar4 & 1,0);
                goto LAB_053cfbc0;
              }
            }
          }
          else {
            if (plVar17 == (long *)0x0) {
              plVar7 = (long *)0x0;
LAB_053cf3f0:
              plVar10 = (long *)0x0;
            }
            else {
              lVar6 = *plVar17;
              if (*(byte *)(lVar6 + 0x130) < *(byte *)(lVar8 + 0x130)) {
                plVar7 = (long *)0x0;
              }
              else {
                plVar7 = plVar17;
                if (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) !=
                    lVar8) {
                  plVar7 = (long *)0x0;
                }
              }
              bVar1 = *(byte *)(*(long *)PTR_DAT_0631ffa8 + 0x130);
              if (*(byte *)(lVar6 + 0x130) < bVar1) goto LAB_053cf3f0;
              plVar10 = plVar17;
              if (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_0631ffa8) {
                plVar10 = (long *)0x0;
              }
            }
            uVar14 = FUN_04cb8194(plVar7,0,0);
            if (((uVar14 & 1) == 0) || (uVar14 = FUN_04cb9a4c(plVar10,0,0), (uVar14 & 1) == 0)) {
              uVar14 = FUN_04cb81c0(plVar7,0,0);
              if ((uVar14 & 1) != 0) {
                if (plVar7 == (long *)0x0) goto LAB_053cfc70;
                uVar14 = FUN_04cb808c(plVar7,0);
                if ((uVar14 & 1) != 0) goto LAB_053cfbd0;
              }
              uVar13 = *(undefined8 *)OVRPlugin_OVRP_1_104_0_TypeInfo;
              if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              uVar13 = FUN_04d8a7b0(uVar13,0);
              if (plVar17 == (long *)0x0) goto LAB_053cfc70;
              lVar8 = (**(code **)(*plVar17 + 0x218))
                                (plVar17,uVar13,0,*(undefined8 *)(*plVar17 + 0x220));
              if ((lVar8 != 0) && (*(long *)(lVar8 + 0x18) != 0)) {
                if ((int)*(long *)(lVar8 + 0x18) < 2) goto LAB_053cfbd0;
                plVar7 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                uVar13 = (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
                lVar8 = FUN_053d6158(uVar13,0);
                if (plVar7 == (long *)0x0) goto LAB_053cfc70;
                if ((lVar8 != 0) &&
                   (lVar6 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
                {
LAB_053cfc78:
                  uVar13 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                  FUN_02b3c988(uVar13,0);
                }
                if ((int)plVar7[3] == 0) {
LAB_053cfc74:
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cacc();
                }
                plVar7[4] = lVar8;
                thunk_FUN_02bb0e9c(plVar7 + 4,lVar8);
                lVar8 = (**(code **)(*plVar17 + 0x1b8))(plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
                if ((lVar8 != 0) &&
                   (lVar6 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
                goto LAB_053cfc78;
                if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                plVar7[5] = lVar8;
                thunk_FUN_02bb0e9c(plVar7 + 5,lVar8);
                FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_112_0_TypeInfo,plVar7,0);
                FUN_053e3650();
              }
              lVar8 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
              FUN_053e521c(lVar8,plVar17,0);
              uVar14 = FUN_04cb9a10(plVar10,0,0);
              if ((uVar14 & 1) == 0) goto LAB_053cfb70;
              if (plVar10 == (long *)0x0) goto LAB_053cfc70;
              plVar7 = (long *)FUN_04cbb444(plVar10,0);
              uVar14 = FUN_04cb7c3c(plVar7,0,0);
              if (((uVar14 & 1) == 0) &&
                 (uVar14 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(plVar7),
                 (uVar14 & 1) == 0)) {
                if ((plVar7 == (long *)0x0) ||
                   (lVar6 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240)),
                   lVar6 == 0)) goto LAB_053cfc70;
                if (*(long *)(lVar6 + 0x18) == 0) {
                  plVar7 = (long *)(**(code **)(*plVar10 + 0x2c8))
                                             (plVar10,1,*(undefined8 *)(*plVar10 + 0x2d0));
                  uVar14 = FUN_04cb7c3c(plVar7,0,0);
                  if ((uVar14 & 1) == 0) {
                    if (plVar7 == (long *)0x0) goto LAB_053cfc70;
                    uVar14 = FUN_04cb9bec(plVar7,0);
                    if (((uVar14 & 1) != 0) &&
                       ((uVar14 = FUN_04cb9b7c(plVar7,0), (uVar14 & 1) == 0 ||
                        (uVar4 = (**(code **)(*plVar7 + 0x248))
                                           (plVar7,*(undefined8 *)(*plVar7 + 0x250)),
                        (uVar4 >> 8 & 1) != 0)))) goto LAB_053cfad4;
                  }
                  else {
                    uVar14 = System_Xml_Schema_XmlSchemaNotation__get_Public(uVar14,lVar8,1);
                    if ((uVar14 & 1) != 0) {
LAB_053cfad4:
                      if (*(char *)(unaff_x19 + 0x93) != '\0') {
                        if (lVar8 == 0) goto LAB_053cfc70;
                        uVar13 = FUN_053e542c(lVar8,0);
                        if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
                          thunk_FUN_02b9ad44(*(long *)PTR_DAT_06322478);
                        }
                        uVar12 = FUN_053efa38(0);
                        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
                          thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
                        }
                        uVar14 = FUN_04d938a0(uVar13,uVar12,0);
                        if ((uVar14 & 1) != 0) {
                          uVar13 = (**(code **)(*plVar17 + 0x1b8))
                                             (plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
                          uVar14 = thunk_FUN_04c08854(uVar13,*(undefined8 *)
                                                              OVRPlugin_OVRP_1_107_0_TypeInfo,0);
                          if ((uVar14 & 1) != 0) goto LAB_053cfbd0;
                        }
                      }
LAB_053cfb70:
                      uVar13 = (**(code **)(*plVar17 + 0x1b8))
                                         (plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
                      uVar13 = FUN_053d6258(uVar13,0);
                      if (lVar8 != 0) {
                        FUN_053e5314(lVar8,uVar13,0);
                        goto LAB_053cfb9c;
                      }
                      goto LAB_053cfc70;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          uVar13 = *(undefined8 *)OVRPlugin_OVRP_1_100_0_TypeInfo;
          if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar13 = FUN_04d8a7b0(uVar13,0);
          if (plVar17 == (long *)0x0) goto LAB_053cfc70;
          lVar6 = (**(code **)(*plVar17 + 0x218))
                            (plVar17,uVar13,0,*(undefined8 *)(*plVar17 + 0x220));
          if ((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) {
            if (1 < (int)*(long *)(lVar6 + 0x18)) {
              plVar7 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
              uVar13 = (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
              lVar8 = FUN_053d6158(uVar13,0);
              if (plVar7 == (long *)0x0) goto LAB_053cfc70;
              if ((lVar8 != 0) &&
                 (lVar9 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
              goto LAB_053cfc78;
              if ((int)plVar7[3] == 0) goto LAB_053cfc74;
              plVar7[4] = lVar8;
              thunk_FUN_02bb0e9c(plVar7 + 4,lVar8);
              lVar8 = (**(code **)(*plVar17 + 0x1b8))(plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
              if ((lVar8 != 0) &&
                 (lVar9 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
              goto LAB_053cfc78;
              if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
              plVar7[5] = lVar8;
              thunk_FUN_02bb0e9c(plVar7 + 5,lVar8);
              FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_106_0_TypeInfo,plVar7,0);
              FUN_053e3650();
            }
            lVar8 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
            FUN_053e521c(lVar8,plVar17,0);
            iVar3 = (**(code **)(*plVar17 + 0x1a8))(plVar17,*(undefined8 *)(*plVar17 + 0x1b0));
            if (iVar3 == 0x10) {
              lVar9 = *plVar17;
              bVar1 = *(byte *)(*(long *)PTR_DAT_0631ffa8 + 0x130);
              if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_0631ffa8)) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3ce44(plVar17);
              }
              plVar7 = (long *)(**(code **)(lVar9 + 0x298))
                                         (plVar17,1,*(undefined8 *)(lVar9 + 0x2a0));
              uVar14 = FUN_04cb9ca0(plVar7,0,0);
              if (((uVar14 & 1) == 0) ||
                 (uVar14 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(plVar7),
                 (uVar14 & 1) == 0)) {
                uVar13 = (**(code **)(*plVar17 + 0x2c8))
                                   (plVar17,1,*(undefined8 *)(*plVar17 + 0x2d0));
                uVar14 = FUN_04cb9ca0(uVar13,0,0);
                if (((uVar14 & 1) == 0) ||
                   (uVar14 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(uVar13),
                   (uVar14 & 1) == 0)) {
                  uVar14 = FUN_04cb7c3c(plVar7,0,0);
                  if ((uVar14 & 1) != 0) {
                    plVar10 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                    lVar9 = (**(code **)(*plVar17 + 0x1c8))
                                      (plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
                    if (plVar10 == (long *)0x0) goto LAB_053cfc70;
                    if ((lVar9 != 0) &&
                       (lVar11 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar10 + 0x40)),
                       lVar11 == 0)) goto LAB_053cfc78;
                    if ((int)plVar10[3] == 0) goto LAB_053cfc74;
                    plVar10[4] = lVar9;
                    thunk_FUN_02bb0e9c(plVar10 + 4,lVar9);
                    lVar9 = (**(code **)(*plVar17 + 0x1b8))
                                      (plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
                    if ((lVar9 != 0) &&
                       (lVar11 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar10 + 0x40)),
                       lVar11 == 0)) goto LAB_053cfc78;
                    if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                    plVar10[5] = lVar9;
                    thunk_FUN_02bb0e9c(plVar10 + 5,lVar9);
                    FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_110_0_TypeInfo,plVar10,0);
                    FUN_053e3650();
                  }
                  uVar14 = FUN_04cb7c3c(uVar13,0,0);
                  if (((uVar14 & 1) != 0) &&
                     (uVar14 = System_Xml_Schema_XmlSchemaNotation__get_Public(uVar14,lVar8,0),
                     (uVar14 & 1) == 0)) {
                    plVar10 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                    lVar9 = (**(code **)(*plVar17 + 0x1c8))
                                      (plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
                    if (plVar10 == (long *)0x0) goto LAB_053cfc70;
                    if ((lVar9 != 0) &&
                       (lVar11 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar10 + 0x40)),
                       lVar11 == 0)) goto LAB_053cfc78;
                    if ((int)plVar10[3] == 0) goto LAB_053cfc74;
                    plVar10[4] = lVar9;
                    thunk_FUN_02bb0e9c(plVar10 + 4,lVar9);
                    lVar9 = (**(code **)(*plVar17 + 0x1b8))
                                      (plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
                    if ((lVar9 != 0) &&
                       (lVar11 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar10 + 0x40)),
                       lVar11 == 0)) goto LAB_053cfc78;
                    if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                    plVar10[5] = lVar9;
                    thunk_FUN_02bb0e9c(plVar10 + 5,lVar9);
                    uVar13 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_113_0_TypeInfo,plVar10,0);
                    *(undefined8 *)(unaff_x19 + 0x88) = uVar13;
                    thunk_FUN_02bb0e9c(unaff_x19 + 0x88,uVar13);
                  }
                  if ((plVar7 != (long *)0x0) &&
                     (lVar9 = (**(code **)(*plVar7 + 0x238))
                                        (plVar7,*(undefined8 *)(*plVar7 + 0x240)), lVar9 != 0)) {
                    if (*(long *)(lVar9 + 0x18) == 0) goto LAB_053cf2a4;
                    plVar7 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                    lVar9 = (**(code **)(*plVar17 + 0x1c8))
                                      (plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
                    if (plVar7 != (long *)0x0) {
                      if ((lVar9 != 0) &&
                         (lVar11 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar7 + 0x40)),
                         lVar11 == 0)) goto LAB_053cfc78;
                      if ((int)plVar7[3] == 0) goto LAB_053cfc74;
                      plVar7[4] = lVar9;
                      thunk_FUN_02bb0e9c(plVar7 + 4,lVar9);
                      lVar9 = (**(code **)(*plVar17 + 0x1b8))
                                        (plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
                      if ((lVar9 != 0) &&
                         (lVar11 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar7 + 0x40)),
                         lVar11 == 0)) goto LAB_053cfc78;
                      if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                      plVar7[5] = lVar9;
                      thunk_FUN_02bb0e9c(plVar7 + 5,lVar9);
                      puVar15 = (undefined8 *)OVRPlugin_OVRP_1_10_0_TypeInfo;
                      goto LAB_053cf284;
                    }
                  }
                  goto LAB_053cfc70;
                }
              }
            }
            else {
              iVar3 = (**(code **)(*plVar17 + 0x1a8))(plVar17,*(undefined8 *)(*plVar17 + 0x1b0));
              if (iVar3 != 4) {
                plVar7 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                lVar9 = FUN_053d6158(unaff_x24,0);
                if (plVar7 == (long *)0x0) goto LAB_053cfc70;
                if ((lVar9 != 0) &&
                   (lVar11 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0)
                   ) goto LAB_053cfc78;
                if ((int)plVar7[3] == 0) goto LAB_053cfc74;
                plVar7[4] = lVar9;
                thunk_FUN_02bb0e9c(plVar7 + 4,lVar9);
                lVar9 = (**(code **)(*plVar17 + 0x1b8))(plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
                if ((lVar9 != 0) &&
                   (lVar11 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0)
                   ) goto LAB_053cfc78;
                if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                plVar7[5] = lVar9;
                thunk_FUN_02bb0e9c(plVar7 + 5,lVar9);
                puVar15 = (undefined8 *)OVRPlugin_OVRP_1_109_0_TypeInfo;
LAB_053cf284:
                FUN_0540ce80(*puVar15,plVar7,0);
                FUN_053e3650();
              }
LAB_053cf2a4:
              if (*(int *)(lVar6 + 0x18) == 0) goto LAB_053cfc74;
              plVar7 = *(long **)(lVar6 + 0x20);
              if (plVar7 == (long *)0x0) goto LAB_053cfc70;
              if (*plVar7 != *(long *)OVRPlugin_OVRP_1_101_0_TypeInfo) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3ce44(plVar7);
              }
              if ((char)plVar7[3] == '\0') {
                lVar6 = (**(code **)(*plVar17 + 0x1b8))(plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
                if (lVar8 == 0) goto LAB_053cfc70;
              }
              else {
                if ((plVar7[2] == 0) || (*(int *)(plVar7[2] + 0x10) == 0)) {
                  plVar10 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                  lVar6 = (**(code **)(*plVar17 + 0x1b8))(plVar17,*(undefined8 *)(*plVar17 + 0x1c0))
                  ;
                  if (plVar10 == (long *)0x0) goto LAB_053cfc70;
                  if ((lVar6 != 0) &&
                     (lVar9 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0
                     )) goto LAB_053cfc78;
                  if ((int)plVar10[3] == 0) goto LAB_053cfc74;
                  plVar10[4] = lVar6;
                  thunk_FUN_02bb0e9c(plVar10 + 4,lVar6);
                  lVar6 = FUN_053d6158(unaff_x24,0);
                  if ((lVar6 != 0) &&
                     (lVar9 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0
                     )) goto LAB_053cfc78;
                  if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                  plVar10[5] = lVar6;
                  thunk_FUN_02bb0e9c(plVar10 + 5,lVar6);
                  FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_111_0_TypeInfo,plVar10,0);
                  FUN_053e3650();
                }
                if (lVar8 == 0) goto LAB_053cfc70;
                lVar6 = plVar7[2];
              }
              FUN_053e5314(lVar8,lVar6,0);
              uVar13 = FUN_053e52fc(lVar8,0);
              uVar13 = FUN_053d6258(uVar13,0);
              FUN_053e5314(lVar8,uVar13,0);
              uVar13 = FUN_053e542c(lVar8,0);
              uVar4 = FUN_053d6074(uVar13,0);
              FUN_053e53dc(lVar8,uVar4 & 1,0);
              FUN_053e5374(lVar8,(char)plVar7[4],0);
              if (((char)plVar7[4] != '\0') && (*(char *)(unaff_x19 + 0x20) != '\0')) {
                plVar10 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
                uVar13 = (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
                lVar6 = FUN_053d6158(uVar13,0);
                if (plVar10 == (long *)0x0) goto LAB_053cfc70;
                if ((lVar6 != 0) &&
                   (lVar9 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                goto LAB_053cfc78;
                if ((int)plVar10[3] == 0) goto LAB_053cfc74;
                plVar10[4] = lVar6;
                thunk_FUN_02bb0e9c(plVar10 + 4,lVar6);
                lVar6 = (**(code **)(*plVar17 + 0x1b8))(plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
                if ((lVar6 != 0) &&
                   (lVar9 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                goto LAB_053cfc78;
                if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                plVar10[5] = lVar6;
                thunk_FUN_02bb0e9c(plVar10 + 5,lVar6);
                uStack000000000000001c = 1;
                lVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                  (*(undefined8 *)(PTR_DAT_06312310 + 0x28),
                                   (long)&stack0x00000018 + 4);
                if ((lVar6 != 0) &&
                   (lVar9 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                goto LAB_053cfc78;
                if (*(uint *)(plVar10 + 3) < 3) goto LAB_053cfc74;
                plVar10[6] = lVar6;
                thunk_FUN_02bb0e9c(plVar10 + 6,lVar6);
                uVar13 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo,plVar10,0);
                if (*(int *)(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo + 0xe4) == 0
                   ) {
                  thunk_FUN_02b9ad44(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
                }
                FUN_053da024(uVar13,unaff_x24,0);
              }
              FUN_053e53a8(lVar8,*(undefined1 *)((long)plVar7 + 0x21),0);
              FUN_053e5344(lVar8,*(undefined4 *)((long)plVar7 + 0x1c),0);
LAB_053cfbc0:
              FUN_053cd398(unaff_x29,lVar8,param_1);
            }
          }
        }
LAB_053cfbd0:
        uVar16 = uVar16 + 1;
        uVar14 = (ulong)*(uint *)(lVar5 + 0x18);
      } while ((long)uVar16 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    puVar2 = OVRPlugin_OVRP_1_102_0_TypeInfo;
    if (unaff_x29 != 0) {
      if (1 < *(int *)(unaff_x29 + 0x18)) {
        lVar5 = *(long *)OVRPlugin_OVRP_1_102_0_TypeInfo;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar5 = *(long *)puVar2;
        }
        FUN_037a7ec8(unaff_x29,**(undefined8 **)(lVar5 + 0xb8),
                     *(undefined8 *)OVRPlugin_OVRP_1_105_0_TypeInfo);
      }
      FUN_053d0134();
      thunk_FUN_02b4aae0(0);
      *(long *)(unaff_x19 + 0x50) = unaff_x29;
      thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x50),unaff_x29);
      return;
    }
  }
LAB_053cfc70:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


