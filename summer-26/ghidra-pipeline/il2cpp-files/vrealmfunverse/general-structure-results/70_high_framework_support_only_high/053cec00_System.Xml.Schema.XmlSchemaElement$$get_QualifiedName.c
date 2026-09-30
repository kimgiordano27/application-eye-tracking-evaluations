/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaElement$$get_QualifiedName
ENTRY_POINT: 053cec00
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


void System_Xml_Schema_XmlSchemaElement__get_QualifiedName(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar17;
  long *unaff_x24;
  long *plVar18;
  undefined1 uStack0000000000000018;
  undefined1 uStack000000000000001c;
  
  FUN_037a5cd0();
  uVar5 = thunk_FUN_02b79644(*unaff_x21);
  FUN_0452d044(uVar5,*unaff_x20);
  if (*(char *)(unaff_x19 + 0x94) == '\0') {
    if (unaff_x24 == (long *)0x0) goto LAB_053cfc70;
    uVar14 = 0x36;
  }
  else {
    if (unaff_x24 == (long *)0x0) goto LAB_053cfc70;
    uVar14 = 0x16;
  }
  lVar6 = (**(code **)(*unaff_x24 + 0x708))(unaff_x24,uVar14,*(undefined8 *)(*unaff_x24 + 0x710));
  if (lVar6 != 0) {
    if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
      uVar17 = 0;
      uVar15 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      do {
        if (uVar15 <= uVar17) goto LAB_053cfc74;
        plVar18 = *(long **)(lVar6 + 0x20 + uVar17 * 8);
        if (*(char *)(unaff_x19 + 0x95) == '\0') {
          lVar9 = *(long *)PTR_DAT_0631ff68;
          if (*(char *)(unaff_x19 + 0x94) == '\0') {
            if (plVar18 == (long *)0x0) {
LAB_053cf1b8:
              plVar8 = (long *)0x0;
            }
            else {
              if (*(byte *)(*plVar18 + 0x130) < *(byte *)(lVar9 + 0x130)) goto LAB_053cf1b8;
              plVar8 = plVar18;
              if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) !=
                  lVar9) {
                plVar8 = (long *)0x0;
              }
            }
            uVar15 = FUN_04cb81c0(plVar8,0,0);
            if ((uVar15 & 1) != 0) {
              if (plVar8 == (long *)0x0) goto LAB_053cfc70;
              uVar15 = FUN_04cb80cc(plVar8,0);
              if ((uVar15 & 1) == 0) {
                lVar9 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
                FUN_053e521c(lVar9,plVar18,0);
                if (plVar18 == (long *)0x0) goto LAB_053cfc70;
                uVar14 = (**(code **)(*plVar18 + 0x1b8))(plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
                uVar14 = FUN_053d6258(uVar14,0);
                if (lVar9 == 0) goto LAB_053cfc70;
                FUN_053e5314(lVar9,uVar14,0);
                if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                uVar14 = FUN_053eeef8(0);
                lVar7 = (**(code **)(*plVar8 + 0x218))
                                  (plVar8,uVar14,0,*(undefined8 *)(*plVar8 + 0x220));
                if ((lVar7 == 0) || (*(long *)(lVar7 + 0x18) == 0)) {
                  if (*(char *)(unaff_x19 + 0x20) != '\0') {
                    plVar8 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
                    uVar14 = (**(code **)(*plVar18 + 0x1c8))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x1d0));
                    lVar7 = FUN_053d6158(uVar14,0);
                    if (plVar8 == (long *)0x0) goto LAB_053cfc70;
                    if ((lVar7 != 0) &&
                       (lVar10 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar10 == 0)) goto LAB_053cfc78;
                    if ((int)plVar8[3] == 0) goto LAB_053cfc74;
                    plVar8[4] = lVar7;
                    thunk_FUN_02bb0e9c(plVar8 + 4,lVar7);
                    lVar7 = (**(code **)(*plVar18 + 0x1b8))
                                      (plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
                    if ((lVar7 != 0) &&
                       (lVar10 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar10 == 0)) goto LAB_053cfc78;
                    if ((*(uint *)(plVar8 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                    plVar8[5] = lVar7;
                    thunk_FUN_02bb0e9c(plVar8 + 5,lVar7);
                    uStack0000000000000018 = 1;
                    lVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                      (*(undefined8 *)(PTR_DAT_06312310 + 0x28),&stack0x00000018);
                    if ((lVar7 != 0) &&
                       (lVar10 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar10 == 0)) goto LAB_053cfc78;
                    if (*(uint *)(plVar8 + 3) < 3) goto LAB_053cfc74;
                    plVar8[6] = lVar7;
                    thunk_FUN_02bb0e9c(plVar8 + 6,lVar7);
                    uVar14 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_108_0_TypeInfo,plVar8,0);
                    if (*(int *)(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo + 0xe4)
                        == 0) {
                      thunk_FUN_02b9ad44(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo)
                      ;
                    }
                    FUN_053da024(uVar14,unaff_x24,0);
                  }
                  FUN_053e5374(lVar9,1,0);
                }
LAB_053cfb9c:
                uVar14 = FUN_053e542c(lVar9,0);
                uVar4 = FUN_053d6074(uVar14,0);
                FUN_053e53dc(lVar9,uVar4 & 1,0);
                goto LAB_053cfbc0;
              }
            }
          }
          else {
            if (plVar18 == (long *)0x0) {
              plVar8 = (long *)0x0;
LAB_053cf3f0:
              plVar11 = (long *)0x0;
            }
            else {
              lVar7 = *plVar18;
              if (*(byte *)(lVar7 + 0x130) < *(byte *)(lVar9 + 0x130)) {
                plVar8 = (long *)0x0;
              }
              else {
                plVar8 = plVar18;
                if (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) !=
                    lVar9) {
                  plVar8 = (long *)0x0;
                }
              }
              bVar1 = *(byte *)(*(long *)PTR_DAT_0631ffa8 + 0x130);
              if (*(byte *)(lVar7 + 0x130) < bVar1) goto LAB_053cf3f0;
              plVar11 = plVar18;
              if (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_0631ffa8) {
                plVar11 = (long *)0x0;
              }
            }
            uVar15 = FUN_04cb8194(plVar8,0,0);
            if (((uVar15 & 1) == 0) || (uVar15 = FUN_04cb9a4c(plVar11,0,0), (uVar15 & 1) == 0)) {
              uVar15 = FUN_04cb81c0(plVar8,0,0);
              if ((uVar15 & 1) != 0) {
                if (plVar8 == (long *)0x0) goto LAB_053cfc70;
                uVar15 = FUN_04cb808c(plVar8,0);
                if ((uVar15 & 1) != 0) goto LAB_053cfbd0;
              }
              uVar14 = *(undefined8 *)OVRPlugin_OVRP_1_104_0_TypeInfo;
              if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              uVar14 = FUN_04d8a7b0(uVar14,0);
              if (plVar18 == (long *)0x0) goto LAB_053cfc70;
              lVar9 = (**(code **)(*plVar18 + 0x218))
                                (plVar18,uVar14,0,*(undefined8 *)(*plVar18 + 0x220));
              if ((lVar9 != 0) && (*(long *)(lVar9 + 0x18) != 0)) {
                if ((int)*(long *)(lVar9 + 0x18) < 2) goto LAB_053cfbd0;
                plVar8 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                uVar14 = (**(code **)(*plVar18 + 0x1c8))(plVar18,*(undefined8 *)(*plVar18 + 0x1d0));
                lVar9 = FUN_053d6158(uVar14,0);
                if (plVar8 == (long *)0x0) goto LAB_053cfc70;
                if ((lVar9 != 0) &&
                   (lVar7 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0))
                {
LAB_053cfc78:
                  uVar5 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                  FUN_02b3c988(uVar5,0);
                }
                if ((int)plVar8[3] == 0) {
LAB_053cfc74:
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cacc();
                }
                plVar8[4] = lVar9;
                thunk_FUN_02bb0e9c(plVar8 + 4,lVar9);
                lVar9 = (**(code **)(*plVar18 + 0x1b8))(plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
                if ((lVar9 != 0) &&
                   (lVar7 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0))
                goto LAB_053cfc78;
                if ((*(uint *)(plVar8 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                plVar8[5] = lVar9;
                thunk_FUN_02bb0e9c(plVar8 + 5,lVar9);
                FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_112_0_TypeInfo,plVar8,0);
                FUN_053e3650();
              }
              lVar9 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
              FUN_053e521c(lVar9,plVar18,0);
              uVar15 = FUN_04cb9a10(plVar11,0,0);
              if ((uVar15 & 1) == 0) goto LAB_053cfb70;
              if (plVar11 == (long *)0x0) goto LAB_053cfc70;
              plVar8 = (long *)FUN_04cbb444(plVar11,0);
              uVar15 = FUN_04cb7c3c(plVar8,0,0);
              if (((uVar15 & 1) == 0) &&
                 (uVar15 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(plVar8),
                 (uVar15 & 1) == 0)) {
                if ((plVar8 == (long *)0x0) ||
                   (lVar7 = (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240)),
                   lVar7 == 0)) goto LAB_053cfc70;
                if (*(long *)(lVar7 + 0x18) == 0) {
                  plVar8 = (long *)(**(code **)(*plVar11 + 0x2c8))
                                             (plVar11,1,*(undefined8 *)(*plVar11 + 0x2d0));
                  uVar15 = FUN_04cb7c3c(plVar8,0,0);
                  if ((uVar15 & 1) == 0) {
                    if (plVar8 == (long *)0x0) goto LAB_053cfc70;
                    uVar15 = FUN_04cb9bec(plVar8,0);
                    if (((uVar15 & 1) != 0) &&
                       ((uVar15 = FUN_04cb9b7c(plVar8,0), (uVar15 & 1) == 0 ||
                        (uVar4 = (**(code **)(*plVar8 + 0x248))
                                           (plVar8,*(undefined8 *)(*plVar8 + 0x250)),
                        (uVar4 >> 8 & 1) != 0)))) goto LAB_053cfad4;
                  }
                  else {
                    uVar15 = System_Xml_Schema_XmlSchemaNotation__get_Public(uVar15,lVar9,1);
                    if ((uVar15 & 1) != 0) {
LAB_053cfad4:
                      if (*(char *)(unaff_x19 + 0x93) != '\0') {
                        if (lVar9 == 0) goto LAB_053cfc70;
                        uVar14 = FUN_053e542c(lVar9,0);
                        if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
                          thunk_FUN_02b9ad44(*(long *)PTR_DAT_06322478);
                        }
                        uVar13 = FUN_053efa38(0);
                        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
                          thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
                        }
                        uVar15 = FUN_04d938a0(uVar14,uVar13,0);
                        if ((uVar15 & 1) != 0) {
                          uVar14 = (**(code **)(*plVar18 + 0x1b8))
                                             (plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
                          uVar15 = thunk_FUN_04c08854(uVar14,*(undefined8 *)
                                                              OVRPlugin_OVRP_1_107_0_TypeInfo,0);
                          if ((uVar15 & 1) != 0) goto LAB_053cfbd0;
                        }
                      }
LAB_053cfb70:
                      uVar14 = (**(code **)(*plVar18 + 0x1b8))
                                         (plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
                      uVar14 = FUN_053d6258(uVar14,0);
                      if (lVar9 != 0) {
                        FUN_053e5314(lVar9,uVar14,0);
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
          uVar14 = *(undefined8 *)OVRPlugin_OVRP_1_100_0_TypeInfo;
          if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar14 = FUN_04d8a7b0(uVar14,0);
          if (plVar18 == (long *)0x0) goto LAB_053cfc70;
          lVar7 = (**(code **)(*plVar18 + 0x218))
                            (plVar18,uVar14,0,*(undefined8 *)(*plVar18 + 0x220));
          if ((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) {
            if (1 < (int)*(long *)(lVar7 + 0x18)) {
              plVar8 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
              uVar14 = (**(code **)(*plVar18 + 0x1c8))(plVar18,*(undefined8 *)(*plVar18 + 0x1d0));
              lVar9 = FUN_053d6158(uVar14,0);
              if (plVar8 == (long *)0x0) goto LAB_053cfc70;
              if ((lVar9 != 0) &&
                 (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
              goto LAB_053cfc78;
              if ((int)plVar8[3] == 0) goto LAB_053cfc74;
              plVar8[4] = lVar9;
              thunk_FUN_02bb0e9c(plVar8 + 4,lVar9);
              lVar9 = (**(code **)(*plVar18 + 0x1b8))(plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
              if ((lVar9 != 0) &&
                 (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
              goto LAB_053cfc78;
              if ((*(uint *)(plVar8 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
              plVar8[5] = lVar9;
              thunk_FUN_02bb0e9c(plVar8 + 5,lVar9);
              FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_106_0_TypeInfo,plVar8,0);
              FUN_053e3650();
            }
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
            FUN_053e521c(lVar9,plVar18,0);
            iVar3 = (**(code **)(*plVar18 + 0x1a8))(plVar18,*(undefined8 *)(*plVar18 + 0x1b0));
            if (iVar3 == 0x10) {
              lVar10 = *plVar18;
              bVar1 = *(byte *)(*(long *)PTR_DAT_0631ffa8 + 0x130);
              if ((*(byte *)(lVar10 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_0631ffa8)) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3ce44(plVar18);
              }
              plVar8 = (long *)(**(code **)(lVar10 + 0x298))
                                         (plVar18,1,*(undefined8 *)(lVar10 + 0x2a0));
              uVar15 = FUN_04cb9ca0(plVar8,0,0);
              if (((uVar15 & 1) == 0) ||
                 (uVar15 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(plVar8),
                 (uVar15 & 1) == 0)) {
                uVar14 = (**(code **)(*plVar18 + 0x2c8))
                                   (plVar18,1,*(undefined8 *)(*plVar18 + 0x2d0));
                uVar15 = FUN_04cb9ca0(uVar14,0,0);
                if (((uVar15 & 1) == 0) ||
                   (uVar15 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(uVar14),
                   (uVar15 & 1) == 0)) {
                  uVar15 = FUN_04cb7c3c(plVar8,0,0);
                  if ((uVar15 & 1) != 0) {
                    plVar11 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                    lVar10 = (**(code **)(*plVar18 + 0x1c8))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x1d0));
                    if (plVar11 == (long *)0x0) goto LAB_053cfc70;
                    if ((lVar10 != 0) &&
                       (lVar12 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar11 + 0x40)),
                       lVar12 == 0)) goto LAB_053cfc78;
                    if ((int)plVar11[3] == 0) goto LAB_053cfc74;
                    plVar11[4] = lVar10;
                    thunk_FUN_02bb0e9c(plVar11 + 4,lVar10);
                    lVar10 = (**(code **)(*plVar18 + 0x1b8))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
                    if ((lVar10 != 0) &&
                       (lVar12 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar11 + 0x40)),
                       lVar12 == 0)) goto LAB_053cfc78;
                    if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                    plVar11[5] = lVar10;
                    thunk_FUN_02bb0e9c(plVar11 + 5,lVar10);
                    FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_110_0_TypeInfo,plVar11,0);
                    FUN_053e3650();
                  }
                  uVar15 = FUN_04cb7c3c(uVar14,0,0);
                  if (((uVar15 & 1) != 0) &&
                     (uVar15 = System_Xml_Schema_XmlSchemaNotation__get_Public(uVar15,lVar9,0),
                     (uVar15 & 1) == 0)) {
                    plVar11 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                    lVar10 = (**(code **)(*plVar18 + 0x1c8))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x1d0));
                    if (plVar11 == (long *)0x0) goto LAB_053cfc70;
                    if ((lVar10 != 0) &&
                       (lVar12 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar11 + 0x40)),
                       lVar12 == 0)) goto LAB_053cfc78;
                    if ((int)plVar11[3] == 0) goto LAB_053cfc74;
                    plVar11[4] = lVar10;
                    thunk_FUN_02bb0e9c(plVar11 + 4,lVar10);
                    lVar10 = (**(code **)(*plVar18 + 0x1b8))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
                    if ((lVar10 != 0) &&
                       (lVar12 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar11 + 0x40)),
                       lVar12 == 0)) goto LAB_053cfc78;
                    if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                    plVar11[5] = lVar10;
                    thunk_FUN_02bb0e9c(plVar11 + 5,lVar10);
                    uVar14 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_113_0_TypeInfo,plVar11,0);
                    *(undefined8 *)(unaff_x19 + 0x88) = uVar14;
                    thunk_FUN_02bb0e9c(unaff_x19 + 0x88,uVar14);
                  }
                  if ((plVar8 != (long *)0x0) &&
                     (lVar10 = (**(code **)(*plVar8 + 0x238))
                                         (plVar8,*(undefined8 *)(*plVar8 + 0x240)), lVar10 != 0)) {
                    if (*(long *)(lVar10 + 0x18) == 0) goto LAB_053cf2a4;
                    plVar8 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                    lVar10 = (**(code **)(*plVar18 + 0x1c8))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x1d0));
                    if (plVar8 != (long *)0x0) {
                      if ((lVar10 != 0) &&
                         (lVar12 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                         lVar12 == 0)) goto LAB_053cfc78;
                      if ((int)plVar8[3] == 0) goto LAB_053cfc74;
                      plVar8[4] = lVar10;
                      thunk_FUN_02bb0e9c(plVar8 + 4,lVar10);
                      lVar10 = (**(code **)(*plVar18 + 0x1b8))
                                         (plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
                      if ((lVar10 != 0) &&
                         (lVar12 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                         lVar12 == 0)) goto LAB_053cfc78;
                      if ((*(uint *)(plVar8 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                      plVar8[5] = lVar10;
                      thunk_FUN_02bb0e9c(plVar8 + 5,lVar10);
                      puVar16 = (undefined8 *)OVRPlugin_OVRP_1_10_0_TypeInfo;
                      goto LAB_053cf284;
                    }
                  }
                  goto LAB_053cfc70;
                }
              }
            }
            else {
              iVar3 = (**(code **)(*plVar18 + 0x1a8))(plVar18,*(undefined8 *)(*plVar18 + 0x1b0));
              if (iVar3 != 4) {
                plVar8 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                lVar10 = FUN_053d6158(unaff_x24,0);
                if (plVar8 == (long *)0x0) goto LAB_053cfc70;
                if ((lVar10 != 0) &&
                   (lVar12 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0
                   )) goto LAB_053cfc78;
                if ((int)plVar8[3] == 0) goto LAB_053cfc74;
                plVar8[4] = lVar10;
                thunk_FUN_02bb0e9c(plVar8 + 4,lVar10);
                lVar10 = (**(code **)(*plVar18 + 0x1b8))(plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
                if ((lVar10 != 0) &&
                   (lVar12 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0
                   )) goto LAB_053cfc78;
                if ((*(uint *)(plVar8 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                plVar8[5] = lVar10;
                thunk_FUN_02bb0e9c(plVar8 + 5,lVar10);
                puVar16 = (undefined8 *)OVRPlugin_OVRP_1_109_0_TypeInfo;
LAB_053cf284:
                FUN_0540ce80(*puVar16,plVar8,0);
                FUN_053e3650();
              }
LAB_053cf2a4:
              if (*(int *)(lVar7 + 0x18) == 0) goto LAB_053cfc74;
              plVar8 = *(long **)(lVar7 + 0x20);
              if (plVar8 == (long *)0x0) goto LAB_053cfc70;
              if (*plVar8 != *(long *)OVRPlugin_OVRP_1_101_0_TypeInfo) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3ce44(plVar8);
              }
              if ((char)plVar8[3] == '\0') {
                lVar7 = (**(code **)(*plVar18 + 0x1b8))(plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
                if (lVar9 == 0) goto LAB_053cfc70;
              }
              else {
                if ((plVar8[2] == 0) || (*(int *)(plVar8[2] + 0x10) == 0)) {
                  plVar11 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                  lVar7 = (**(code **)(*plVar18 + 0x1b8))(plVar18,*(undefined8 *)(*plVar18 + 0x1c0))
                  ;
                  if (plVar11 == (long *)0x0) goto LAB_053cfc70;
                  if ((lVar7 != 0) &&
                     (lVar10 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar11 + 0x40)),
                     lVar10 == 0)) goto LAB_053cfc78;
                  if ((int)plVar11[3] == 0) goto LAB_053cfc74;
                  plVar11[4] = lVar7;
                  thunk_FUN_02bb0e9c(plVar11 + 4,lVar7);
                  lVar7 = FUN_053d6158(unaff_x24,0);
                  if ((lVar7 != 0) &&
                     (lVar10 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar11 + 0x40)),
                     lVar10 == 0)) goto LAB_053cfc78;
                  if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                  plVar11[5] = lVar7;
                  thunk_FUN_02bb0e9c(plVar11 + 5,lVar7);
                  FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_111_0_TypeInfo,plVar11,0);
                  FUN_053e3650();
                }
                if (lVar9 == 0) goto LAB_053cfc70;
                lVar7 = plVar8[2];
              }
              FUN_053e5314(lVar9,lVar7,0);
              uVar14 = FUN_053e52fc(lVar9,0);
              uVar14 = FUN_053d6258(uVar14,0);
              FUN_053e5314(lVar9,uVar14,0);
              uVar14 = FUN_053e542c(lVar9,0);
              uVar4 = FUN_053d6074(uVar14,0);
              FUN_053e53dc(lVar9,uVar4 & 1,0);
              FUN_053e5374(lVar9,(char)plVar8[4],0);
              if (((char)plVar8[4] != '\0') && (*(char *)(unaff_x19 + 0x20) != '\0')) {
                plVar11 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
                uVar14 = (**(code **)(*plVar18 + 0x1c8))(plVar18,*(undefined8 *)(*plVar18 + 0x1d0));
                lVar7 = FUN_053d6158(uVar14,0);
                if (plVar11 == (long *)0x0) goto LAB_053cfc70;
                if ((lVar7 != 0) &&
                   (lVar10 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0
                   )) goto LAB_053cfc78;
                if ((int)plVar11[3] == 0) goto LAB_053cfc74;
                plVar11[4] = lVar7;
                thunk_FUN_02bb0e9c(plVar11 + 4,lVar7);
                lVar7 = (**(code **)(*plVar18 + 0x1b8))(plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
                if ((lVar7 != 0) &&
                   (lVar10 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0
                   )) goto LAB_053cfc78;
                if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                plVar11[5] = lVar7;
                thunk_FUN_02bb0e9c(plVar11 + 5,lVar7);
                uStack000000000000001c = 1;
                lVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                  (*(undefined8 *)(PTR_DAT_06312310 + 0x28),
                                   (long)&stack0x00000018 + 4);
                if ((lVar7 != 0) &&
                   (lVar10 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0
                   )) goto LAB_053cfc78;
                if (*(uint *)(plVar11 + 3) < 3) goto LAB_053cfc74;
                plVar11[6] = lVar7;
                thunk_FUN_02bb0e9c(plVar11 + 6,lVar7);
                uVar14 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo,plVar11,0);
                if (*(int *)(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo + 0xe4) == 0
                   ) {
                  thunk_FUN_02b9ad44(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
                }
                FUN_053da024(uVar14,unaff_x24,0);
              }
              FUN_053e53a8(lVar9,*(undefined1 *)((long)plVar8 + 0x21),0);
              FUN_053e5344(lVar9,*(undefined4 *)((long)plVar8 + 0x1c),0);
LAB_053cfbc0:
              FUN_053cd398(param_1,lVar9,uVar5);
            }
          }
        }
LAB_053cfbd0:
        uVar17 = uVar17 + 1;
        uVar15 = (ulong)*(uint *)(lVar6 + 0x18);
      } while ((long)uVar17 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
    puVar2 = OVRPlugin_OVRP_1_102_0_TypeInfo;
    if (param_1 != 0) {
      if (1 < *(int *)(param_1 + 0x18)) {
        lVar6 = *(long *)OVRPlugin_OVRP_1_102_0_TypeInfo;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar6 = *(long *)puVar2;
        }
        FUN_037a7ec8(param_1,**(undefined8 **)(lVar6 + 0xb8),
                     *(undefined8 *)OVRPlugin_OVRP_1_105_0_TypeInfo);
      }
      FUN_053d0134();
      thunk_FUN_02b4aae0(0);
      *(long *)(unaff_x19 + 0x50) = param_1;
      thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x50),param_1);
      return;
    }
  }
LAB_053cfc70:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


