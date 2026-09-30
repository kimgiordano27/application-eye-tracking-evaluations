/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaElement$$get_Constraints
ENTRY_POINT: 053ceb90
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_21
*/


void System_Xml_Schema_XmlSchemaElement__get_Constraints(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar18;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  long *plVar19;
  long *plVar20;
  undefined1 uStack0000000000000018;
  undefined1 uStack000000000000001c;
  
  FUN_02b3c81c();
  FUN_02b3c81c(OVRPlugin_OVRP_1_10_0_TypeInfo);
  FUN_02b3c81c(OVRPlugin_OVRP_1_110_0_TypeInfo);
  FUN_02b3c81c(OVRPlugin_OVRP_1_111_0_TypeInfo);
  FUN_02b3c81c(OVRPlugin_OVRP_1_112_0_TypeInfo);
  FUN_02b3c81c(OVRPlugin_OVRP_1_113_0_TypeInfo);
  FUN_02b3c81c(OVRPlugin_OVRP_1_114_0_TypeInfo);
  *(undefined1 *)(unaff_x24 + 0x9b9) = 1;
  plVar19 = *(long **)(unaff_x19 + 0x10);
  FUN_053cfc94();
  lVar5 = thunk_FUN_02b79644(*unaff_x23);
  FUN_037a5cd0(lVar5,*unaff_x22);
  uVar6 = thunk_FUN_02b79644(*unaff_x21);
  FUN_0452d044(uVar6,*unaff_x20);
  if (*(char *)(unaff_x19 + 0x94) == '\0') {
    if (plVar19 == (long *)0x0) goto LAB_053cfc70;
    uVar15 = 0x36;
  }
  else {
    if (plVar19 == (long *)0x0) goto LAB_053cfc70;
    uVar15 = 0x16;
  }
  lVar7 = (**(code **)(*plVar19 + 0x708))(plVar19,uVar15,*(undefined8 *)(*plVar19 + 0x710));
  if (lVar7 != 0) {
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar18 = 0;
      uVar16 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar16 <= uVar18) goto LAB_053cfc74;
        plVar20 = *(long **)(lVar7 + 0x20 + uVar18 * 8);
        if (*(char *)(unaff_x19 + 0x95) == '\0') {
          lVar10 = *(long *)PTR_DAT_0631ff68;
          if (*(char *)(unaff_x19 + 0x94) == '\0') {
            if (plVar20 == (long *)0x0) {
LAB_053cf1b8:
              plVar9 = (long *)0x0;
            }
            else {
              if (*(byte *)(*plVar20 + 0x130) < *(byte *)(lVar10 + 0x130)) goto LAB_053cf1b8;
              plVar9 = plVar20;
              if (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8)
                  != lVar10) {
                plVar9 = (long *)0x0;
              }
            }
            uVar16 = FUN_04cb81c0(plVar9,0,0);
            if ((uVar16 & 1) != 0) {
              if (plVar9 == (long *)0x0) goto LAB_053cfc70;
              uVar16 = FUN_04cb80cc(plVar9,0);
              if ((uVar16 & 1) == 0) {
                lVar10 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
                FUN_053e521c(lVar10,plVar20,0);
                if (plVar20 == (long *)0x0) goto LAB_053cfc70;
                uVar15 = (**(code **)(*plVar20 + 0x1b8))(plVar20,*(undefined8 *)(*plVar20 + 0x1c0));
                uVar15 = FUN_053d6258(uVar15,0);
                if (lVar10 == 0) goto LAB_053cfc70;
                FUN_053e5314(lVar10,uVar15,0);
                if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                uVar15 = FUN_053eeef8(0);
                lVar8 = (**(code **)(*plVar9 + 0x218))
                                  (plVar9,uVar15,0,*(undefined8 *)(*plVar9 + 0x220));
                if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) {
                  if (*(char *)(unaff_x19 + 0x20) != '\0') {
                    plVar9 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
                    uVar15 = (**(code **)(*plVar20 + 0x1c8))
                                       (plVar20,*(undefined8 *)(*plVar20 + 0x1d0));
                    lVar8 = FUN_053d6158(uVar15,0);
                    if (plVar9 == (long *)0x0) goto LAB_053cfc70;
                    if ((lVar8 != 0) &&
                       (lVar11 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar9 + 0x40)),
                       lVar11 == 0)) goto LAB_053cfc78;
                    if ((int)plVar9[3] == 0) goto LAB_053cfc74;
                    plVar9[4] = lVar8;
                    thunk_FUN_02bb0e9c(plVar9 + 4,lVar8);
                    lVar8 = (**(code **)(*plVar20 + 0x1b8))
                                      (plVar20,*(undefined8 *)(*plVar20 + 0x1c0));
                    if ((lVar8 != 0) &&
                       (lVar11 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar9 + 0x40)),
                       lVar11 == 0)) goto LAB_053cfc78;
                    if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                    plVar9[5] = lVar8;
                    thunk_FUN_02bb0e9c(plVar9 + 5,lVar8);
                    uStack0000000000000018 = 1;
                    lVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                      (*(undefined8 *)(PTR_DAT_06312310 + 0x28),&stack0x00000018);
                    if ((lVar8 != 0) &&
                       (lVar11 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar9 + 0x40)),
                       lVar11 == 0)) goto LAB_053cfc78;
                    if (*(uint *)(plVar9 + 3) < 3) goto LAB_053cfc74;
                    plVar9[6] = lVar8;
                    thunk_FUN_02bb0e9c(plVar9 + 6,lVar8);
                    uVar15 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_108_0_TypeInfo,plVar9,0);
                    if (*(int *)(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo + 0xe4)
                        == 0) {
                      thunk_FUN_02b9ad44(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo)
                      ;
                    }
                    FUN_053da024(uVar15,plVar19,0);
                  }
                  FUN_053e5374(lVar10,1,0);
                }
LAB_053cfb9c:
                uVar15 = FUN_053e542c(lVar10,0);
                uVar4 = FUN_053d6074(uVar15,0);
                FUN_053e53dc(lVar10,uVar4 & 1,0);
                goto LAB_053cfbc0;
              }
            }
          }
          else {
            if (plVar20 == (long *)0x0) {
              plVar9 = (long *)0x0;
LAB_053cf3f0:
              plVar12 = (long *)0x0;
            }
            else {
              lVar8 = *plVar20;
              if (*(byte *)(lVar8 + 0x130) < *(byte *)(lVar10 + 0x130)) {
                plVar9 = (long *)0x0;
              }
              else {
                plVar9 = plVar20;
                if (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) !=
                    lVar10) {
                  plVar9 = (long *)0x0;
                }
              }
              bVar1 = *(byte *)(*(long *)PTR_DAT_0631ffa8 + 0x130);
              if (*(byte *)(lVar8 + 0x130) < bVar1) goto LAB_053cf3f0;
              plVar12 = plVar20;
              if (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_0631ffa8) {
                plVar12 = (long *)0x0;
              }
            }
            uVar16 = FUN_04cb8194(plVar9,0,0);
            if (((uVar16 & 1) == 0) || (uVar16 = FUN_04cb9a4c(plVar12,0,0), (uVar16 & 1) == 0)) {
              uVar16 = FUN_04cb81c0(plVar9,0,0);
              if ((uVar16 & 1) != 0) {
                if (plVar9 == (long *)0x0) goto LAB_053cfc70;
                uVar16 = FUN_04cb808c(plVar9,0);
                if ((uVar16 & 1) != 0) goto LAB_053cfbd0;
              }
              uVar15 = *(undefined8 *)OVRPlugin_OVRP_1_104_0_TypeInfo;
              if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              uVar15 = FUN_04d8a7b0(uVar15,0);
              if (plVar20 == (long *)0x0) goto LAB_053cfc70;
              lVar10 = (**(code **)(*plVar20 + 0x218))
                                 (plVar20,uVar15,0,*(undefined8 *)(*plVar20 + 0x220));
              if ((lVar10 != 0) && (*(long *)(lVar10 + 0x18) != 0)) {
                if ((int)*(long *)(lVar10 + 0x18) < 2) goto LAB_053cfbd0;
                plVar9 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                uVar15 = (**(code **)(*plVar20 + 0x1c8))(plVar20,*(undefined8 *)(*plVar20 + 0x1d0));
                lVar10 = FUN_053d6158(uVar15,0);
                if (plVar9 == (long *)0x0) goto LAB_053cfc70;
                if ((lVar10 != 0) &&
                   (lVar8 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
                {
LAB_053cfc78:
                  uVar6 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                  FUN_02b3c988(uVar6,0);
                }
                if ((int)plVar9[3] == 0) {
LAB_053cfc74:
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cacc();
                }
                plVar9[4] = lVar10;
                thunk_FUN_02bb0e9c(plVar9 + 4,lVar10);
                lVar10 = (**(code **)(*plVar20 + 0x1b8))(plVar20,*(undefined8 *)(*plVar20 + 0x1c0));
                if ((lVar10 != 0) &&
                   (lVar8 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
                goto LAB_053cfc78;
                if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                plVar9[5] = lVar10;
                thunk_FUN_02bb0e9c(plVar9 + 5,lVar10);
                FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_112_0_TypeInfo,plVar9,0);
                FUN_053e3650();
              }
              lVar10 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
              FUN_053e521c(lVar10,plVar20,0);
              uVar16 = FUN_04cb9a10(plVar12,0,0);
              if ((uVar16 & 1) == 0) goto LAB_053cfb70;
              if (plVar12 == (long *)0x0) goto LAB_053cfc70;
              plVar9 = (long *)FUN_04cbb444(plVar12,0);
              uVar16 = FUN_04cb7c3c(plVar9,0,0);
              if (((uVar16 & 1) == 0) &&
                 (uVar16 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(plVar9),
                 (uVar16 & 1) == 0)) {
                if ((plVar9 == (long *)0x0) ||
                   (lVar8 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240)),
                   lVar8 == 0)) goto LAB_053cfc70;
                if (*(long *)(lVar8 + 0x18) == 0) {
                  plVar9 = (long *)(**(code **)(*plVar12 + 0x2c8))
                                             (plVar12,1,*(undefined8 *)(*plVar12 + 0x2d0));
                  uVar16 = FUN_04cb7c3c(plVar9,0,0);
                  if ((uVar16 & 1) == 0) {
                    if (plVar9 == (long *)0x0) goto LAB_053cfc70;
                    uVar16 = FUN_04cb9bec(plVar9,0);
                    if (((uVar16 & 1) != 0) &&
                       ((uVar16 = FUN_04cb9b7c(plVar9,0), (uVar16 & 1) == 0 ||
                        (uVar4 = (**(code **)(*plVar9 + 0x248))
                                           (plVar9,*(undefined8 *)(*plVar9 + 0x250)),
                        (uVar4 >> 8 & 1) != 0)))) goto LAB_053cfad4;
                  }
                  else {
                    uVar16 = System_Xml_Schema_XmlSchemaNotation__get_Public(uVar16,lVar10,1);
                    if ((uVar16 & 1) != 0) {
LAB_053cfad4:
                      if (*(char *)(unaff_x19 + 0x93) != '\0') {
                        if (lVar10 == 0) goto LAB_053cfc70;
                        uVar15 = FUN_053e542c(lVar10,0);
                        if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
                          thunk_FUN_02b9ad44(*(long *)PTR_DAT_06322478);
                        }
                        uVar14 = FUN_053efa38(0);
                        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
                          thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
                        }
                        uVar16 = FUN_04d938a0(uVar15,uVar14,0);
                        if ((uVar16 & 1) != 0) {
                          uVar15 = (**(code **)(*plVar20 + 0x1b8))
                                             (plVar20,*(undefined8 *)(*plVar20 + 0x1c0));
                          uVar16 = thunk_FUN_04c08854(uVar15,*(undefined8 *)
                                                              OVRPlugin_OVRP_1_107_0_TypeInfo,0);
                          if ((uVar16 & 1) != 0) goto LAB_053cfbd0;
                        }
                      }
LAB_053cfb70:
                      uVar15 = (**(code **)(*plVar20 + 0x1b8))
                                         (plVar20,*(undefined8 *)(*plVar20 + 0x1c0));
                      uVar15 = FUN_053d6258(uVar15,0);
                      if (lVar10 != 0) {
                        FUN_053e5314(lVar10,uVar15,0);
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
          uVar15 = *(undefined8 *)OVRPlugin_OVRP_1_100_0_TypeInfo;
          if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar15 = FUN_04d8a7b0(uVar15,0);
          if (plVar20 == (long *)0x0) goto LAB_053cfc70;
          lVar8 = (**(code **)(*plVar20 + 0x218))
                            (plVar20,uVar15,0,*(undefined8 *)(*plVar20 + 0x220));
          if ((lVar8 != 0) && (*(long *)(lVar8 + 0x18) != 0)) {
            if (1 < (int)*(long *)(lVar8 + 0x18)) {
              plVar9 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
              uVar15 = (**(code **)(*plVar20 + 0x1c8))(plVar20,*(undefined8 *)(*plVar20 + 0x1d0));
              lVar10 = FUN_053d6158(uVar15,0);
              if (plVar9 == (long *)0x0) goto LAB_053cfc70;
              if ((lVar10 != 0) &&
                 (lVar11 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
              goto LAB_053cfc78;
              if ((int)plVar9[3] == 0) goto LAB_053cfc74;
              plVar9[4] = lVar10;
              thunk_FUN_02bb0e9c(plVar9 + 4,lVar10);
              lVar10 = (**(code **)(*plVar20 + 0x1b8))(plVar20,*(undefined8 *)(*plVar20 + 0x1c0));
              if ((lVar10 != 0) &&
                 (lVar11 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
              goto LAB_053cfc78;
              if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
              plVar9[5] = lVar10;
              thunk_FUN_02bb0e9c(plVar9 + 5,lVar10);
              FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_106_0_TypeInfo,plVar9,0);
              FUN_053e3650();
            }
            lVar10 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
            FUN_053e521c(lVar10,plVar20,0);
            iVar3 = (**(code **)(*plVar20 + 0x1a8))(plVar20,*(undefined8 *)(*plVar20 + 0x1b0));
            if (iVar3 == 0x10) {
              lVar11 = *plVar20;
              bVar1 = *(byte *)(*(long *)PTR_DAT_0631ffa8 + 0x130);
              if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_0631ffa8)) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3ce44(plVar20);
              }
              plVar9 = (long *)(**(code **)(lVar11 + 0x298))
                                         (plVar20,1,*(undefined8 *)(lVar11 + 0x2a0));
              uVar16 = FUN_04cb9ca0(plVar9,0,0);
              if (((uVar16 & 1) == 0) ||
                 (uVar16 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(plVar9),
                 (uVar16 & 1) == 0)) {
                uVar15 = (**(code **)(*plVar20 + 0x2c8))
                                   (plVar20,1,*(undefined8 *)(*plVar20 + 0x2d0));
                uVar16 = FUN_04cb9ca0(uVar15,0,0);
                if (((uVar16 & 1) == 0) ||
                   (uVar16 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(uVar15),
                   (uVar16 & 1) == 0)) {
                  uVar16 = FUN_04cb7c3c(plVar9,0,0);
                  if ((uVar16 & 1) != 0) {
                    plVar12 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                    lVar11 = (**(code **)(*plVar20 + 0x1c8))
                                       (plVar20,*(undefined8 *)(*plVar20 + 0x1d0));
                    if (plVar12 == (long *)0x0) goto LAB_053cfc70;
                    if ((lVar11 != 0) &&
                       (lVar13 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
                       lVar13 == 0)) goto LAB_053cfc78;
                    if ((int)plVar12[3] == 0) goto LAB_053cfc74;
                    plVar12[4] = lVar11;
                    thunk_FUN_02bb0e9c(plVar12 + 4,lVar11);
                    lVar11 = (**(code **)(*plVar20 + 0x1b8))
                                       (plVar20,*(undefined8 *)(*plVar20 + 0x1c0));
                    if ((lVar11 != 0) &&
                       (lVar13 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
                       lVar13 == 0)) goto LAB_053cfc78;
                    if ((*(uint *)(plVar12 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                    plVar12[5] = lVar11;
                    thunk_FUN_02bb0e9c(plVar12 + 5,lVar11);
                    FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_110_0_TypeInfo,plVar12,0);
                    FUN_053e3650();
                  }
                  uVar16 = FUN_04cb7c3c(uVar15,0,0);
                  if (((uVar16 & 1) != 0) &&
                     (uVar16 = System_Xml_Schema_XmlSchemaNotation__get_Public(uVar16,lVar10,0),
                     (uVar16 & 1) == 0)) {
                    plVar12 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                    lVar11 = (**(code **)(*plVar20 + 0x1c8))
                                       (plVar20,*(undefined8 *)(*plVar20 + 0x1d0));
                    if (plVar12 == (long *)0x0) goto LAB_053cfc70;
                    if ((lVar11 != 0) &&
                       (lVar13 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
                       lVar13 == 0)) goto LAB_053cfc78;
                    if ((int)plVar12[3] == 0) goto LAB_053cfc74;
                    plVar12[4] = lVar11;
                    thunk_FUN_02bb0e9c(plVar12 + 4,lVar11);
                    lVar11 = (**(code **)(*plVar20 + 0x1b8))
                                       (plVar20,*(undefined8 *)(*plVar20 + 0x1c0));
                    if ((lVar11 != 0) &&
                       (lVar13 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
                       lVar13 == 0)) goto LAB_053cfc78;
                    if ((*(uint *)(plVar12 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                    plVar12[5] = lVar11;
                    thunk_FUN_02bb0e9c(plVar12 + 5,lVar11);
                    uVar15 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_113_0_TypeInfo,plVar12,0);
                    *(undefined8 *)(unaff_x19 + 0x88) = uVar15;
                    thunk_FUN_02bb0e9c(unaff_x19 + 0x88,uVar15);
                  }
                  if ((plVar9 != (long *)0x0) &&
                     (lVar11 = (**(code **)(*plVar9 + 0x238))
                                         (plVar9,*(undefined8 *)(*plVar9 + 0x240)), lVar11 != 0)) {
                    if (*(long *)(lVar11 + 0x18) == 0) goto LAB_053cf2a4;
                    plVar9 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                    lVar11 = (**(code **)(*plVar20 + 0x1c8))
                                       (plVar20,*(undefined8 *)(*plVar20 + 0x1d0));
                    if (plVar9 != (long *)0x0) {
                      if ((lVar11 != 0) &&
                         (lVar13 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar9 + 0x40)),
                         lVar13 == 0)) goto LAB_053cfc78;
                      if ((int)plVar9[3] == 0) goto LAB_053cfc74;
                      plVar9[4] = lVar11;
                      thunk_FUN_02bb0e9c(plVar9 + 4,lVar11);
                      lVar11 = (**(code **)(*plVar20 + 0x1b8))
                                         (plVar20,*(undefined8 *)(*plVar20 + 0x1c0));
                      if ((lVar11 != 0) &&
                         (lVar13 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar9 + 0x40)),
                         lVar13 == 0)) goto LAB_053cfc78;
                      if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                      plVar9[5] = lVar11;
                      thunk_FUN_02bb0e9c(plVar9 + 5,lVar11);
                      puVar17 = (undefined8 *)OVRPlugin_OVRP_1_10_0_TypeInfo;
                      goto LAB_053cf284;
                    }
                  }
                  goto LAB_053cfc70;
                }
              }
            }
            else {
              iVar3 = (**(code **)(*plVar20 + 0x1a8))(plVar20,*(undefined8 *)(*plVar20 + 0x1b0));
              if (iVar3 != 4) {
                plVar9 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                lVar11 = FUN_053d6158(plVar19,0);
                if (plVar9 == (long *)0x0) goto LAB_053cfc70;
                if ((lVar11 != 0) &&
                   (lVar13 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar9 + 0x40)), lVar13 == 0
                   )) goto LAB_053cfc78;
                if ((int)plVar9[3] == 0) goto LAB_053cfc74;
                plVar9[4] = lVar11;
                thunk_FUN_02bb0e9c(plVar9 + 4,lVar11);
                lVar11 = (**(code **)(*plVar20 + 0x1b8))(plVar20,*(undefined8 *)(*plVar20 + 0x1c0));
                if ((lVar11 != 0) &&
                   (lVar13 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar9 + 0x40)), lVar13 == 0
                   )) goto LAB_053cfc78;
                if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                plVar9[5] = lVar11;
                thunk_FUN_02bb0e9c(plVar9 + 5,lVar11);
                puVar17 = (undefined8 *)OVRPlugin_OVRP_1_109_0_TypeInfo;
LAB_053cf284:
                FUN_0540ce80(*puVar17,plVar9,0);
                FUN_053e3650();
              }
LAB_053cf2a4:
              if (*(int *)(lVar8 + 0x18) == 0) goto LAB_053cfc74;
              plVar9 = *(long **)(lVar8 + 0x20);
              if (plVar9 == (long *)0x0) goto LAB_053cfc70;
              if (*plVar9 != *(long *)OVRPlugin_OVRP_1_101_0_TypeInfo) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3ce44(plVar9);
              }
              if ((char)plVar9[3] == '\0') {
                lVar8 = (**(code **)(*plVar20 + 0x1b8))(plVar20,*(undefined8 *)(*plVar20 + 0x1c0));
                if (lVar10 == 0) goto LAB_053cfc70;
              }
              else {
                if ((plVar9[2] == 0) || (*(int *)(plVar9[2] + 0x10) == 0)) {
                  plVar12 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                  lVar8 = (**(code **)(*plVar20 + 0x1b8))(plVar20,*(undefined8 *)(*plVar20 + 0x1c0))
                  ;
                  if (plVar12 == (long *)0x0) goto LAB_053cfc70;
                  if ((lVar8 != 0) &&
                     (lVar11 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar12 + 0x40)),
                     lVar11 == 0)) goto LAB_053cfc78;
                  if ((int)plVar12[3] == 0) goto LAB_053cfc74;
                  plVar12[4] = lVar8;
                  thunk_FUN_02bb0e9c(plVar12 + 4,lVar8);
                  lVar8 = FUN_053d6158(plVar19,0);
                  if ((lVar8 != 0) &&
                     (lVar11 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar12 + 0x40)),
                     lVar11 == 0)) goto LAB_053cfc78;
                  if ((*(uint *)(plVar12 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                  plVar12[5] = lVar8;
                  thunk_FUN_02bb0e9c(plVar12 + 5,lVar8);
                  FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_111_0_TypeInfo,plVar12,0);
                  FUN_053e3650();
                }
                if (lVar10 == 0) goto LAB_053cfc70;
                lVar8 = plVar9[2];
              }
              FUN_053e5314(lVar10,lVar8,0);
              uVar15 = FUN_053e52fc(lVar10,0);
              uVar15 = FUN_053d6258(uVar15,0);
              FUN_053e5314(lVar10,uVar15,0);
              uVar15 = FUN_053e542c(lVar10,0);
              uVar4 = FUN_053d6074(uVar15,0);
              FUN_053e53dc(lVar10,uVar4 & 1,0);
              FUN_053e5374(lVar10,(char)plVar9[4],0);
              if (((char)plVar9[4] != '\0') && (*(char *)(unaff_x19 + 0x20) != '\0')) {
                plVar12 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
                uVar15 = (**(code **)(*plVar20 + 0x1c8))(plVar20,*(undefined8 *)(*plVar20 + 0x1d0));
                lVar8 = FUN_053d6158(uVar15,0);
                if (plVar12 == (long *)0x0) goto LAB_053cfc70;
                if ((lVar8 != 0) &&
                   (lVar11 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar11 == 0
                   )) goto LAB_053cfc78;
                if ((int)plVar12[3] == 0) goto LAB_053cfc74;
                plVar12[4] = lVar8;
                thunk_FUN_02bb0e9c(plVar12 + 4,lVar8);
                lVar8 = (**(code **)(*plVar20 + 0x1b8))(plVar20,*(undefined8 *)(*plVar20 + 0x1c0));
                if ((lVar8 != 0) &&
                   (lVar11 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar11 == 0
                   )) goto LAB_053cfc78;
                if ((*(uint *)(plVar12 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                plVar12[5] = lVar8;
                thunk_FUN_02bb0e9c(plVar12 + 5,lVar8);
                uStack000000000000001c = 1;
                lVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                  (*(undefined8 *)(PTR_DAT_06312310 + 0x28),
                                   (long)&stack0x00000018 + 4);
                if ((lVar8 != 0) &&
                   (lVar11 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar11 == 0
                   )) goto LAB_053cfc78;
                if (*(uint *)(plVar12 + 3) < 3) goto LAB_053cfc74;
                plVar12[6] = lVar8;
                thunk_FUN_02bb0e9c(plVar12 + 6,lVar8);
                uVar15 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo,plVar12,0);
                if (*(int *)(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo + 0xe4) == 0
                   ) {
                  thunk_FUN_02b9ad44(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
                }
                FUN_053da024(uVar15,plVar19,0);
              }
              FUN_053e53a8(lVar10,*(undefined1 *)((long)plVar9 + 0x21),0);
              FUN_053e5344(lVar10,*(undefined4 *)((long)plVar9 + 0x1c),0);
LAB_053cfbc0:
              FUN_053cd398(lVar5,lVar10,uVar6);
            }
          }
        }
LAB_053cfbd0:
        uVar18 = uVar18 + 1;
        uVar16 = (ulong)*(uint *)(lVar7 + 0x18);
      } while ((long)uVar18 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    puVar2 = OVRPlugin_OVRP_1_102_0_TypeInfo;
    if (lVar5 != 0) {
      if (1 < *(int *)(lVar5 + 0x18)) {
        lVar7 = *(long *)OVRPlugin_OVRP_1_102_0_TypeInfo;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar7 = *(long *)puVar2;
        }
        FUN_037a7ec8(lVar5,**(undefined8 **)(lVar7 + 0xb8),
                     *(undefined8 *)OVRPlugin_OVRP_1_105_0_TypeInfo);
      }
      FUN_053d0134();
      thunk_FUN_02b4aae0(0);
      *(long *)(unaff_x19 + 0x50) = lVar5;
      thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x50),lVar5);
      return;
    }
  }
LAB_053cfc70:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


