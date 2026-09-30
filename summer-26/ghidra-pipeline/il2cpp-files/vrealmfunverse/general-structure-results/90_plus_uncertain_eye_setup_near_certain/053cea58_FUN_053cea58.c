/*
FUNCTION_NAME: FUN_053cea58
ENTRY_POINT: 053cea58
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_21
*/


void FUN_053cea58(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  
  puVar5 = OVRPlugin_OVRP_1_0_0_TypeInfo;
  puVar4 = OVRPlugin_OVRP_0_1_0_TypeInfo;
  puVar3 = OVRPassthroughLayer_MonoToRgbaStyleHandler_TypeInfo;
  puVar2 = OVRPassthroughLayer_IStyleHandler_TypeInfo;
  if ((DAT_066d09b9 & 1) == 0) {
    FUN_02b3c81c(OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_100_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_101_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_102_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_103_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_0_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_0_1_0_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631ff68);
    FUN_02b3c81c(PTR_DAT_06322478);
    FUN_02b3c81c(OVRPlugin_OVRP_1_104_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_105_0_TypeInfo);
    FUN_02b3c81c(OVRPassthroughLayer_IStyleHandler_TypeInfo);
    FUN_02b3c81c(OVRPassthroughLayer_InterpolatedColorLutHandler_TypeInfo);
    FUN_02b3c81c(OVRPassthroughLayer_MonoToRgbaStyleHandler_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(PTR_DAT_0631ffa8);
    FUN_02b3c81c(OVRPlugin_OVRP_1_106_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_107_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_108_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_109_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_10_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_110_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_111_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_112_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_113_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_114_0_TypeInfo);
    DAT_066d09b9 = 1;
  }
  plVar22 = *(long **)(param_1 + 0x10);
  FUN_053cfc94(param_1,plVar22);
  lVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_037a5cd0(lVar8,*(undefined8 *)puVar2);
  uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_0452d044(uVar9,*(undefined8 *)puVar5);
  if (*(char *)(param_1 + 0x94) == '\0') {
    if (plVar22 == (long *)0x0) goto LAB_053cfc70;
    uVar18 = 0x36;
  }
  else {
    if (plVar22 == (long *)0x0) goto LAB_053cfc70;
    uVar18 = 0x16;
  }
  lVar10 = (**(code **)(*plVar22 + 0x708))(plVar22,uVar18,*(undefined8 *)(*plVar22 + 0x710));
  if (lVar10 != 0) {
    if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
      uVar21 = 0;
      uVar19 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      do {
        if (uVar19 <= uVar21) goto LAB_053cfc74;
        plVar23 = *(long **)(lVar10 + 0x20 + uVar21 * 8);
        if (*(char *)(param_1 + 0x95) == '\0') {
          lVar13 = *(long *)PTR_DAT_0631ff68;
          if (*(char *)(param_1 + 0x94) == '\0') {
            if (plVar23 == (long *)0x0) {
LAB_053cf1b8:
              plVar12 = (long *)0x0;
            }
            else {
              if (*(byte *)(*plVar23 + 0x130) < *(byte *)(lVar13 + 0x130)) goto LAB_053cf1b8;
              plVar12 = plVar23;
              if (*(long *)(*(long *)(*plVar23 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8)
                  != lVar13) {
                plVar12 = (long *)0x0;
              }
            }
            uVar19 = FUN_04cb81c0(plVar12,0,0);
            if ((uVar19 & 1) != 0) {
              if (plVar12 == (long *)0x0) goto LAB_053cfc70;
              uVar19 = FUN_04cb80cc(plVar12,0);
              if ((uVar19 & 1) == 0) {
                lVar13 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
                FUN_053e521c(lVar13,plVar23,0);
                if (plVar23 == (long *)0x0) goto LAB_053cfc70;
                uVar18 = (**(code **)(*plVar23 + 0x1b8))(plVar23,*(undefined8 *)(*plVar23 + 0x1c0));
                uVar18 = FUN_053d6258(uVar18,0);
                if (lVar13 == 0) goto LAB_053cfc70;
                FUN_053e5314(lVar13,uVar18,0);
                if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                uVar18 = FUN_053eeef8(0);
                lVar11 = (**(code **)(*plVar12 + 0x218))
                                   (plVar12,uVar18,0,*(undefined8 *)(*plVar12 + 0x220));
                if ((lVar11 == 0) || (*(long *)(lVar11 + 0x18) == 0)) {
                  if (*(char *)(param_1 + 0x20) != '\0') {
                    plVar12 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
                    uVar18 = (**(code **)(*plVar23 + 0x1c8))
                                       (plVar23,*(undefined8 *)(*plVar23 + 0x1d0));
                    lVar11 = FUN_053d6158(uVar18,0);
                    if (plVar12 == (long *)0x0) goto LAB_053cfc70;
                    if ((lVar11 != 0) &&
                       (lVar14 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
                       lVar14 == 0)) goto LAB_053cfc78;
                    if ((int)plVar12[3] == 0) goto LAB_053cfc74;
                    plVar12[4] = lVar11;
                    thunk_FUN_02bb0e9c(plVar12 + 4,lVar11);
                    lVar11 = (**(code **)(*plVar23 + 0x1b8))
                                       (plVar23,*(undefined8 *)(*plVar23 + 0x1c0));
                    if ((lVar11 != 0) &&
                       (lVar14 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
                       lVar14 == 0)) goto LAB_053cfc78;
                    if ((*(uint *)(plVar12 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                    plVar12[5] = lVar11;
                    thunk_FUN_02bb0e9c(plVar12 + 5,lVar11);
                    local_68[0] = 1;
                    lVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                       (*(undefined8 *)(PTR_DAT_06312310 + 0x28),local_68);
                    if ((lVar11 != 0) &&
                       (lVar14 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
                       lVar14 == 0)) goto LAB_053cfc78;
                    if (*(uint *)(plVar12 + 3) < 3) goto LAB_053cfc74;
                    plVar12[6] = lVar11;
                    thunk_FUN_02bb0e9c(plVar12 + 6,lVar11);
                    uVar18 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_108_0_TypeInfo,plVar12,0);
                    if (*(int *)(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo + 0xe4)
                        == 0) {
                      thunk_FUN_02b9ad44(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo)
                      ;
                    }
                    FUN_053da024(uVar18,plVar22,0);
                  }
                  FUN_053e5374(lVar13,1,0);
                }
LAB_053cfb9c:
                uVar18 = FUN_053e542c(lVar13,0);
                uVar7 = FUN_053d6074(uVar18,0);
                FUN_053e53dc(lVar13,uVar7 & 1,0);
                goto LAB_053cfbc0;
              }
            }
          }
          else {
            if (plVar23 == (long *)0x0) {
              plVar12 = (long *)0x0;
LAB_053cf3f0:
              plVar15 = (long *)0x0;
            }
            else {
              lVar11 = *plVar23;
              if (*(byte *)(lVar11 + 0x130) < *(byte *)(lVar13 + 0x130)) {
                plVar12 = (long *)0x0;
              }
              else {
                plVar12 = plVar23;
                if (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8)
                    != lVar13) {
                  plVar12 = (long *)0x0;
                }
              }
              bVar1 = *(byte *)(*(long *)PTR_DAT_0631ffa8 + 0x130);
              if (*(byte *)(lVar11 + 0x130) < bVar1) goto LAB_053cf3f0;
              plVar15 = plVar23;
              if (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_0631ffa8) {
                plVar15 = (long *)0x0;
              }
            }
            uVar19 = FUN_04cb8194(plVar12,0,0);
            if (((uVar19 & 1) == 0) || (uVar19 = FUN_04cb9a4c(plVar15,0,0), (uVar19 & 1) == 0)) {
              uVar19 = FUN_04cb81c0(plVar12,0,0);
              if ((uVar19 & 1) != 0) {
                if (plVar12 == (long *)0x0) goto LAB_053cfc70;
                uVar19 = FUN_04cb808c(plVar12,0);
                if ((uVar19 & 1) != 0) goto LAB_053cfbd0;
              }
              uVar18 = *(undefined8 *)OVRPlugin_OVRP_1_104_0_TypeInfo;
              if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              uVar18 = FUN_04d8a7b0(uVar18,0);
              if (plVar23 == (long *)0x0) goto LAB_053cfc70;
              lVar13 = (**(code **)(*plVar23 + 0x218))
                                 (plVar23,uVar18,0,*(undefined8 *)(*plVar23 + 0x220));
              if ((lVar13 != 0) && (*(long *)(lVar13 + 0x18) != 0)) {
                if ((int)*(long *)(lVar13 + 0x18) < 2) goto LAB_053cfbd0;
                plVar12 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                uVar18 = (**(code **)(*plVar23 + 0x1c8))(plVar23,*(undefined8 *)(*plVar23 + 0x1d0));
                lVar13 = FUN_053d6158(uVar18,0);
                if (plVar12 == (long *)0x0) goto LAB_053cfc70;
                if ((lVar13 != 0) &&
                   (lVar11 = thunk_FUN_02b79548(lVar13,*(undefined8 *)(*plVar12 + 0x40)),
                   lVar11 == 0)) {
LAB_053cfc78:
                  uVar9 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                  FUN_02b3c988(uVar9,0);
                }
                if ((int)plVar12[3] == 0) {
LAB_053cfc74:
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cacc();
                }
                plVar12[4] = lVar13;
                thunk_FUN_02bb0e9c(plVar12 + 4,lVar13);
                lVar13 = (**(code **)(*plVar23 + 0x1b8))(plVar23,*(undefined8 *)(*plVar23 + 0x1c0));
                if ((lVar13 != 0) &&
                   (lVar11 = thunk_FUN_02b79548(lVar13,*(undefined8 *)(*plVar12 + 0x40)),
                   lVar11 == 0)) goto LAB_053cfc78;
                if ((*(uint *)(plVar12 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                plVar12[5] = lVar13;
                thunk_FUN_02bb0e9c(plVar12 + 5,lVar13);
                uVar18 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_112_0_TypeInfo,plVar12,0);
                FUN_053e3650(param_1,uVar18,0);
              }
              lVar13 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
              FUN_053e521c(lVar13,plVar23,0);
              uVar19 = FUN_04cb9a10(plVar15,0,0);
              if ((uVar19 & 1) == 0) goto LAB_053cfb70;
              if (plVar15 == (long *)0x0) goto LAB_053cfc70;
              plVar12 = (long *)FUN_04cbb444(plVar15,0);
              uVar19 = FUN_04cb7c3c(plVar12,0,0);
              if (((uVar19 & 1) == 0) &&
                 (uVar19 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(plVar12),
                 (uVar19 & 1) == 0)) {
                if ((plVar12 == (long *)0x0) ||
                   (lVar11 = (**(code **)(*plVar12 + 0x238))
                                       (plVar12,*(undefined8 *)(*plVar12 + 0x240)), lVar11 == 0))
                goto LAB_053cfc70;
                if (*(long *)(lVar11 + 0x18) == 0) {
                  plVar12 = (long *)(**(code **)(*plVar15 + 0x2c8))
                                              (plVar15,1,*(undefined8 *)(*plVar15 + 0x2d0));
                  uVar19 = FUN_04cb7c3c(plVar12,0,0);
                  if ((uVar19 & 1) == 0) {
                    if (plVar12 == (long *)0x0) goto LAB_053cfc70;
                    uVar19 = FUN_04cb9bec(plVar12,0);
                    if (((uVar19 & 1) != 0) &&
                       ((uVar19 = FUN_04cb9b7c(plVar12,0), (uVar19 & 1) == 0 ||
                        (uVar7 = (**(code **)(*plVar12 + 0x248))
                                           (plVar12,*(undefined8 *)(*plVar12 + 0x250)),
                        (uVar7 >> 8 & 1) != 0)))) goto LAB_053cfad4;
                  }
                  else {
                    uVar19 = System_Xml_Schema_XmlSchemaNotation__get_Public(uVar19,lVar13,1);
                    if ((uVar19 & 1) != 0) {
LAB_053cfad4:
                      if (*(char *)(param_1 + 0x93) != '\0') {
                        if (lVar13 == 0) goto LAB_053cfc70;
                        uVar18 = FUN_053e542c(lVar13,0);
                        if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
                          thunk_FUN_02b9ad44(*(long *)PTR_DAT_06322478);
                        }
                        uVar17 = FUN_053efa38(0);
                        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
                          thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
                        }
                        uVar19 = FUN_04d938a0(uVar18,uVar17,0);
                        if ((uVar19 & 1) != 0) {
                          uVar18 = (**(code **)(*plVar23 + 0x1b8))
                                             (plVar23,*(undefined8 *)(*plVar23 + 0x1c0));
                          uVar19 = thunk_FUN_04c08854(uVar18,*(undefined8 *)
                                                              OVRPlugin_OVRP_1_107_0_TypeInfo,0);
                          if ((uVar19 & 1) != 0) goto LAB_053cfbd0;
                        }
                      }
LAB_053cfb70:
                      uVar18 = (**(code **)(*plVar23 + 0x1b8))
                                         (plVar23,*(undefined8 *)(*plVar23 + 0x1c0));
                      uVar18 = FUN_053d6258(uVar18,0);
                      if (lVar13 != 0) {
                        FUN_053e5314(lVar13,uVar18,0);
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
          uVar18 = *(undefined8 *)OVRPlugin_OVRP_1_100_0_TypeInfo;
          if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar18 = FUN_04d8a7b0(uVar18,0);
          if (plVar23 == (long *)0x0) goto LAB_053cfc70;
          lVar11 = (**(code **)(*plVar23 + 0x218))
                             (plVar23,uVar18,0,*(undefined8 *)(*plVar23 + 0x220));
          if ((lVar11 != 0) && (*(long *)(lVar11 + 0x18) != 0)) {
            if (1 < (int)*(long *)(lVar11 + 0x18)) {
              plVar12 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
              uVar18 = (**(code **)(*plVar23 + 0x1c8))(plVar23,*(undefined8 *)(*plVar23 + 0x1d0));
              lVar13 = FUN_053d6158(uVar18,0);
              if (plVar12 == (long *)0x0) goto LAB_053cfc70;
              if ((lVar13 != 0) &&
                 (lVar14 = thunk_FUN_02b79548(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0)
                 ) goto LAB_053cfc78;
              if ((int)plVar12[3] == 0) goto LAB_053cfc74;
              plVar12[4] = lVar13;
              thunk_FUN_02bb0e9c(plVar12 + 4,lVar13);
              lVar13 = (**(code **)(*plVar23 + 0x1b8))(plVar23,*(undefined8 *)(*plVar23 + 0x1c0));
              if ((lVar13 != 0) &&
                 (lVar14 = thunk_FUN_02b79548(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0)
                 ) goto LAB_053cfc78;
              if ((*(uint *)(plVar12 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
              plVar12[5] = lVar13;
              thunk_FUN_02bb0e9c(plVar12 + 5,lVar13);
              uVar18 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_106_0_TypeInfo,plVar12,0);
              FUN_053e3650(param_1,uVar18,0);
            }
            lVar13 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
            FUN_053e521c(lVar13,plVar23,0);
            iVar6 = (**(code **)(*plVar23 + 0x1a8))(plVar23,*(undefined8 *)(*plVar23 + 0x1b0));
            if (iVar6 == 0x10) {
              lVar14 = *plVar23;
              bVar1 = *(byte *)(*(long *)PTR_DAT_0631ffa8 + 0x130);
              if ((*(byte *)(lVar14 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_0631ffa8)) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3ce44(plVar23);
              }
              plVar12 = (long *)(**(code **)(lVar14 + 0x298))
                                          (plVar23,1,*(undefined8 *)(lVar14 + 0x2a0));
              uVar19 = FUN_04cb9ca0(plVar12,0,0);
              if (((uVar19 & 1) == 0) ||
                 (uVar19 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(plVar12),
                 (uVar19 & 1) == 0)) {
                uVar18 = (**(code **)(*plVar23 + 0x2c8))
                                   (plVar23,1,*(undefined8 *)(*plVar23 + 0x2d0));
                uVar19 = FUN_04cb9ca0(uVar18,0,0);
                if (((uVar19 & 1) == 0) ||
                   (uVar19 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(uVar18),
                   (uVar19 & 1) == 0)) {
                  uVar19 = FUN_04cb7c3c(plVar12,0,0);
                  if ((uVar19 & 1) != 0) {
                    plVar15 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                    lVar14 = (**(code **)(*plVar23 + 0x1c8))
                                       (plVar23,*(undefined8 *)(*plVar23 + 0x1d0));
                    if (plVar15 == (long *)0x0) goto LAB_053cfc70;
                    if ((lVar14 != 0) &&
                       (lVar16 = thunk_FUN_02b79548(lVar14,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar16 == 0)) goto LAB_053cfc78;
                    if ((int)plVar15[3] == 0) goto LAB_053cfc74;
                    plVar15[4] = lVar14;
                    thunk_FUN_02bb0e9c(plVar15 + 4,lVar14);
                    lVar14 = (**(code **)(*plVar23 + 0x1b8))
                                       (plVar23,*(undefined8 *)(*plVar23 + 0x1c0));
                    if ((lVar14 != 0) &&
                       (lVar16 = thunk_FUN_02b79548(lVar14,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar16 == 0)) goto LAB_053cfc78;
                    if ((*(uint *)(plVar15 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                    plVar15[5] = lVar14;
                    thunk_FUN_02bb0e9c(plVar15 + 5,lVar14);
                    uVar17 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_110_0_TypeInfo,plVar15,0);
                    FUN_053e3650(param_1,uVar17,0);
                  }
                  uVar19 = FUN_04cb7c3c(uVar18,0,0);
                  if (((uVar19 & 1) != 0) &&
                     (uVar19 = System_Xml_Schema_XmlSchemaNotation__get_Public(uVar19,lVar13,0),
                     (uVar19 & 1) == 0)) {
                    plVar15 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                    lVar14 = (**(code **)(*plVar23 + 0x1c8))
                                       (plVar23,*(undefined8 *)(*plVar23 + 0x1d0));
                    if (plVar15 == (long *)0x0) goto LAB_053cfc70;
                    if ((lVar14 != 0) &&
                       (lVar16 = thunk_FUN_02b79548(lVar14,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar16 == 0)) goto LAB_053cfc78;
                    if ((int)plVar15[3] == 0) goto LAB_053cfc74;
                    plVar15[4] = lVar14;
                    thunk_FUN_02bb0e9c(plVar15 + 4,lVar14);
                    lVar14 = (**(code **)(*plVar23 + 0x1b8))
                                       (plVar23,*(undefined8 *)(*plVar23 + 0x1c0));
                    if ((lVar14 != 0) &&
                       (lVar16 = thunk_FUN_02b79548(lVar14,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar16 == 0)) goto LAB_053cfc78;
                    if ((*(uint *)(plVar15 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                    plVar15[5] = lVar14;
                    thunk_FUN_02bb0e9c(plVar15 + 5,lVar14);
                    uVar18 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_113_0_TypeInfo,plVar15,0);
                    *(undefined8 *)(param_1 + 0x88) = uVar18;
                    thunk_FUN_02bb0e9c(param_1 + 0x88,uVar18);
                  }
                  if ((plVar12 != (long *)0x0) &&
                     (lVar14 = (**(code **)(*plVar12 + 0x238))
                                         (plVar12,*(undefined8 *)(*plVar12 + 0x240)), lVar14 != 0))
                  {
                    if (*(long *)(lVar14 + 0x18) == 0) goto LAB_053cf2a4;
                    plVar12 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                    lVar14 = (**(code **)(*plVar23 + 0x1c8))
                                       (plVar23,*(undefined8 *)(*plVar23 + 0x1d0));
                    if (plVar12 != (long *)0x0) {
                      if ((lVar14 != 0) &&
                         (lVar16 = thunk_FUN_02b79548(lVar14,*(undefined8 *)(*plVar12 + 0x40)),
                         lVar16 == 0)) goto LAB_053cfc78;
                      if ((int)plVar12[3] == 0) goto LAB_053cfc74;
                      plVar12[4] = lVar14;
                      thunk_FUN_02bb0e9c(plVar12 + 4,lVar14);
                      lVar14 = (**(code **)(*plVar23 + 0x1b8))
                                         (plVar23,*(undefined8 *)(*plVar23 + 0x1c0));
                      if ((lVar14 != 0) &&
                         (lVar16 = thunk_FUN_02b79548(lVar14,*(undefined8 *)(*plVar12 + 0x40)),
                         lVar16 == 0)) goto LAB_053cfc78;
                      if ((*(uint *)(plVar12 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                      plVar12[5] = lVar14;
                      thunk_FUN_02bb0e9c(plVar12 + 5,lVar14);
                      puVar20 = (undefined8 *)OVRPlugin_OVRP_1_10_0_TypeInfo;
                      goto LAB_053cf284;
                    }
                  }
                  goto LAB_053cfc70;
                }
              }
            }
            else {
              iVar6 = (**(code **)(*plVar23 + 0x1a8))(plVar23,*(undefined8 *)(*plVar23 + 0x1b0));
              if (iVar6 != 4) {
                plVar12 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                lVar14 = FUN_053d6158(plVar22,0);
                if (plVar12 == (long *)0x0) goto LAB_053cfc70;
                if ((lVar14 != 0) &&
                   (lVar16 = thunk_FUN_02b79548(lVar14,*(undefined8 *)(*plVar12 + 0x40)),
                   lVar16 == 0)) goto LAB_053cfc78;
                if ((int)plVar12[3] == 0) goto LAB_053cfc74;
                plVar12[4] = lVar14;
                thunk_FUN_02bb0e9c(plVar12 + 4,lVar14);
                lVar14 = (**(code **)(*plVar23 + 0x1b8))(plVar23,*(undefined8 *)(*plVar23 + 0x1c0));
                if ((lVar14 != 0) &&
                   (lVar16 = thunk_FUN_02b79548(lVar14,*(undefined8 *)(*plVar12 + 0x40)),
                   lVar16 == 0)) goto LAB_053cfc78;
                if ((*(uint *)(plVar12 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                plVar12[5] = lVar14;
                thunk_FUN_02bb0e9c(plVar12 + 5,lVar14);
                puVar20 = (undefined8 *)OVRPlugin_OVRP_1_109_0_TypeInfo;
LAB_053cf284:
                uVar18 = FUN_0540ce80(*puVar20,plVar12,0);
                FUN_053e3650(param_1,uVar18,0);
              }
LAB_053cf2a4:
              if (*(int *)(lVar11 + 0x18) == 0) goto LAB_053cfc74;
              plVar12 = *(long **)(lVar11 + 0x20);
              if (plVar12 == (long *)0x0) goto LAB_053cfc70;
              if (*plVar12 != *(long *)OVRPlugin_OVRP_1_101_0_TypeInfo) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3ce44(plVar12);
              }
              if ((char)plVar12[3] == '\0') {
                lVar11 = (**(code **)(*plVar23 + 0x1b8))(plVar23,*(undefined8 *)(*plVar23 + 0x1c0));
                if (lVar13 == 0) goto LAB_053cfc70;
              }
              else {
                if ((plVar12[2] == 0) || (*(int *)(plVar12[2] + 0x10) == 0)) {
                  plVar15 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                  lVar11 = (**(code **)(*plVar23 + 0x1b8))
                                     (plVar23,*(undefined8 *)(*plVar23 + 0x1c0));
                  if (plVar15 == (long *)0x0) goto LAB_053cfc70;
                  if ((lVar11 != 0) &&
                     (lVar14 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar15 + 0x40)),
                     lVar14 == 0)) goto LAB_053cfc78;
                  if ((int)plVar15[3] == 0) goto LAB_053cfc74;
                  plVar15[4] = lVar11;
                  thunk_FUN_02bb0e9c(plVar15 + 4,lVar11);
                  lVar11 = FUN_053d6158(plVar22,0);
                  if ((lVar11 != 0) &&
                     (lVar14 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar15 + 0x40)),
                     lVar14 == 0)) goto LAB_053cfc78;
                  if ((*(uint *)(plVar15 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                  plVar15[5] = lVar11;
                  thunk_FUN_02bb0e9c(plVar15 + 5,lVar11);
                  uVar18 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_111_0_TypeInfo,plVar15,0);
                  FUN_053e3650(param_1,uVar18,0);
                }
                if (lVar13 == 0) goto LAB_053cfc70;
                lVar11 = plVar12[2];
              }
              FUN_053e5314(lVar13,lVar11,0);
              uVar18 = FUN_053e52fc(lVar13,0);
              uVar18 = FUN_053d6258(uVar18,0);
              FUN_053e5314(lVar13,uVar18,0);
              uVar18 = FUN_053e542c(lVar13,0);
              uVar7 = FUN_053d6074(uVar18,0);
              FUN_053e53dc(lVar13,uVar7 & 1,0);
              FUN_053e5374(lVar13,(char)plVar12[4],0);
              if (((char)plVar12[4] != '\0') && (*(char *)(param_1 + 0x20) != '\0')) {
                plVar15 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
                uVar18 = (**(code **)(*plVar23 + 0x1c8))(plVar23,*(undefined8 *)(*plVar23 + 0x1d0));
                lVar11 = FUN_053d6158(uVar18,0);
                if (plVar15 == (long *)0x0) goto LAB_053cfc70;
                if ((lVar11 != 0) &&
                   (lVar14 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar15 + 0x40)),
                   lVar14 == 0)) goto LAB_053cfc78;
                if ((int)plVar15[3] == 0) goto LAB_053cfc74;
                plVar15[4] = lVar11;
                thunk_FUN_02bb0e9c(plVar15 + 4,lVar11);
                lVar11 = (**(code **)(*plVar23 + 0x1b8))(plVar23,*(undefined8 *)(*plVar23 + 0x1c0));
                if ((lVar11 != 0) &&
                   (lVar14 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar15 + 0x40)),
                   lVar14 == 0)) goto LAB_053cfc78;
                if ((*(uint *)(plVar15 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
                plVar15[5] = lVar11;
                thunk_FUN_02bb0e9c(plVar15 + 5,lVar11);
                local_64[0] = 1;
                lVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                   (*(undefined8 *)(PTR_DAT_06312310 + 0x28),local_64);
                if ((lVar11 != 0) &&
                   (lVar14 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar15 + 0x40)),
                   lVar14 == 0)) goto LAB_053cfc78;
                if (*(uint *)(plVar15 + 3) < 3) goto LAB_053cfc74;
                plVar15[6] = lVar11;
                thunk_FUN_02bb0e9c(plVar15 + 6,lVar11);
                uVar18 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo,plVar15,0);
                if (*(int *)(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo + 0xe4) == 0
                   ) {
                  thunk_FUN_02b9ad44(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
                }
                FUN_053da024(uVar18,plVar22,0);
              }
              FUN_053e53a8(lVar13,*(undefined1 *)((long)plVar12 + 0x21),0);
              FUN_053e5344(lVar13,*(undefined4 *)((long)plVar12 + 0x1c),0);
LAB_053cfbc0:
              FUN_053cd398(lVar8,lVar13,uVar9);
            }
          }
        }
LAB_053cfbd0:
        uVar21 = uVar21 + 1;
        uVar19 = (ulong)*(uint *)(lVar10 + 0x18);
      } while ((long)uVar21 < (long)(int)*(uint *)(lVar10 + 0x18));
    }
    puVar2 = OVRPlugin_OVRP_1_102_0_TypeInfo;
    if (lVar8 != 0) {
      if (1 < *(int *)(lVar8 + 0x18)) {
        lVar10 = *(long *)OVRPlugin_OVRP_1_102_0_TypeInfo;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar10 = *(long *)puVar2;
        }
        FUN_037a7ec8(lVar8,**(undefined8 **)(lVar10 + 0xb8),
                     *(undefined8 *)OVRPlugin_OVRP_1_105_0_TypeInfo);
      }
      FUN_053d0134(param_1,lVar8);
      thunk_FUN_02b4aae0(0);
      *(long *)(param_1 + 0x50) = lVar8;
      thunk_FUN_02bb0e9c((long *)(param_1 + 0x50),lVar8);
      return;
    }
  }
LAB_053cfc70:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


