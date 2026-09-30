/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaException$$.ctor
ENTRY_POINT: 053cf594
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


void System_Xml_Schema_XmlSchemaException___ctor(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 uVar14;
  undefined8 unaff_x23;
  long *unaff_x24;
  long *unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined1 uStack0000000000000018;
  undefined1 uStack000000000000001c;
  
code_r0x053cf594:
  FUN_053e3650();
LAB_053cf598:
  lVar8 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
  FUN_053e521c(lVar8,unaff_x24,0);
  uVar9 = FUN_04cb9a10(unaff_x26,0,0);
  if ((uVar9 & 1) == 0) goto LAB_053cfb70;
  if (unaff_x26 == (long *)0x0) goto LAB_053cfc70;
  plVar10 = (long *)FUN_04cbb444(unaff_x26,0);
  uVar9 = FUN_04cb7c3c(plVar10,0,0);
  if (((uVar9 & 1) == 0) &&
     (uVar9 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(plVar10), (uVar9 & 1) == 0)) {
    if ((plVar10 == (long *)0x0) ||
       (lVar11 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240)),
       lVar11 == 0)) goto LAB_053cfc70;
    if (*(long *)(lVar11 + 0x18) == 0) {
      plVar10 = (long *)(**(code **)(*unaff_x26 + 0x2c8))
                                  (unaff_x26,1,*(undefined8 *)(*unaff_x26 + 0x2d0));
      uVar9 = FUN_04cb7c3c(plVar10,0,0);
      if ((uVar9 & 1) == 0) {
        if (plVar10 == (long *)0x0) goto LAB_053cfc70;
        uVar9 = FUN_04cb9bec(plVar10,0);
        if (((uVar9 & 1) != 0) &&
           ((uVar9 = FUN_04cb9b7c(plVar10,0), (uVar9 & 1) == 0 ||
            (uVar4 = (**(code **)(*plVar10 + 0x248))(plVar10,*(undefined8 *)(*plVar10 + 0x250)),
            (uVar4 >> 8 & 1) != 0)))) goto LAB_053cfad4;
      }
      else {
        uVar9 = System_Xml_Schema_XmlSchemaNotation__get_Public(uVar9,lVar8,1);
        if ((uVar9 & 1) != 0) {
LAB_053cfad4:
          if (*(char *)(unaff_x19 + 0x93) != '\0') {
            if (lVar8 == 0) goto LAB_053cfc70;
            uVar14 = FUN_053e542c(lVar8,0);
            if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
              thunk_FUN_02b9ad44(*(long *)PTR_DAT_06322478);
            }
            uVar12 = FUN_053efa38(0);
            if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
            }
            uVar9 = FUN_04d938a0(uVar14,uVar12,0);
            if ((uVar9 & 1) != 0) {
              uVar14 = (**(code **)(*unaff_x24 + 0x1b8))
                                 (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
              uVar9 = thunk_FUN_04c08854(uVar14,*(undefined8 *)OVRPlugin_OVRP_1_107_0_TypeInfo,0);
              if ((uVar9 & 1) != 0) goto LAB_053cfbd0;
            }
          }
LAB_053cfb70:
          uVar14 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
          uVar14 = FUN_053d6258(uVar14,0);
          if (lVar8 != 0) {
            FUN_053e5314(lVar8,uVar14,0);
            goto LAB_053cfb9c;
          }
LAB_053cfc70:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
      }
    }
  }
LAB_053cfbd0:
  do {
    while( true ) {
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
      unaff_x24 = *(long **)(in_stack_00000010 + unaff_x21 * 8);
      if (*(char *)(unaff_x19 + 0x95) != '\0') {
        uVar14 = *(undefined8 *)OVRPlugin_OVRP_1_100_0_TypeInfo;
        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar14 = FUN_04d8a7b0(uVar14,0);
        if (unaff_x24 != (long *)0x0) goto code_r0x053cecc4;
        goto LAB_053cfc70;
      }
      lVar8 = *(long *)PTR_DAT_0631ff68;
      if (*(char *)(unaff_x19 + 0x94) != '\0') break;
      if (unaff_x24 == (long *)0x0) {
LAB_053cf1b8:
        plVar10 = (long *)0x0;
      }
      else {
        if (*(byte *)(*unaff_x24 + 0x130) < *(byte *)(lVar8 + 0x130)) goto LAB_053cf1b8;
        plVar10 = unaff_x24;
        if (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) !=
            lVar8) {
          plVar10 = (long *)0x0;
        }
      }
      uVar9 = FUN_04cb81c0(plVar10,0,0);
      if ((uVar9 & 1) != 0) {
        if (plVar10 == (long *)0x0) goto LAB_053cfc70;
        uVar9 = FUN_04cb80cc(plVar10,0);
        if ((uVar9 & 1) == 0) {
          lVar8 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
          FUN_053e521c(lVar8,unaff_x24,0);
          if (unaff_x24 == (long *)0x0) goto LAB_053cfc70;
          uVar14 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
          uVar14 = FUN_053d6258(uVar14,0);
          if (lVar8 == 0) goto LAB_053cfc70;
          FUN_053e5314(lVar8,uVar14,0);
          if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar14 = FUN_053eeef8(0);
          lVar11 = (**(code **)(*plVar10 + 0x218))
                             (plVar10,uVar14,0,*(undefined8 *)(*plVar10 + 0x220));
          if ((lVar11 == 0) || (*(long *)(lVar11 + 0x18) == 0)) {
            if (*(char *)(unaff_x19 + 0x20) != '\0') {
              plVar10 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
              uVar14 = (**(code **)(*unaff_x24 + 0x1c8))
                                 (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
              lVar11 = FUN_053d6158(uVar14,0);
              if (plVar10 == (long *)0x0) goto LAB_053cfc70;
              if ((lVar11 != 0) &&
                 (lVar5 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar5 == 0))
              goto LAB_053cfc78;
              if ((int)plVar10[3] == 0) goto LAB_053cfc74;
              plVar10[4] = lVar11;
              thunk_FUN_02bb0e9c(plVar10 + 4,lVar11);
              lVar11 = (**(code **)(*unaff_x24 + 0x1b8))
                                 (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
              if ((lVar11 != 0) &&
                 (lVar5 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar5 == 0))
              goto LAB_053cfc78;
              if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
              plVar10[5] = lVar11;
              thunk_FUN_02bb0e9c(plVar10 + 5,lVar11);
              uStack0000000000000018 = 1;
              lVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                 (*(undefined8 *)(PTR_DAT_06312310 + 0x28),&stack0x00000018);
              if ((lVar11 != 0) &&
                 (lVar5 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar5 == 0))
              goto LAB_053cfc78;
              if (*(uint *)(plVar10 + 3) < 3) goto LAB_053cfc74;
              plVar10[6] = lVar11;
              thunk_FUN_02bb0e9c(plVar10 + 6,lVar11);
              uVar14 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_108_0_TypeInfo,plVar10,0);
              if (*(int *)(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo + 0xe4) == 0)
              {
                thunk_FUN_02b9ad44(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
              }
              FUN_053da024(uVar14,unaff_x20,0);
            }
            FUN_053e5374(lVar8,1,0);
          }
LAB_053cfb9c:
          uVar14 = FUN_053e542c(lVar8,0);
          uVar4 = FUN_053d6074(uVar14,0);
          FUN_053e53dc(lVar8,uVar4 & 1,0);
          goto LAB_053cfbc0;
        }
      }
    }
    if (unaff_x24 == (long *)0x0) {
      plVar10 = (long *)0x0;
LAB_053cf3f0:
      unaff_x26 = (long *)0x0;
    }
    else {
      lVar11 = *unaff_x24;
      if (*(byte *)(lVar11 + 0x130) < *(byte *)(lVar8 + 0x130)) {
        plVar10 = (long *)0x0;
      }
      else {
        plVar10 = unaff_x24;
        if (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8)
        {
          plVar10 = (long *)0x0;
        }
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_0631ffa8 + 0x130);
      if (*(byte *)(lVar11 + 0x130) < bVar1) goto LAB_053cf3f0;
      unaff_x26 = unaff_x24;
      if (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0631ffa8) {
        unaff_x26 = (long *)0x0;
      }
    }
    uVar9 = FUN_04cb8194(plVar10,0,0);
  } while (((uVar9 & 1) != 0) && (uVar9 = FUN_04cb9a4c(unaff_x26,0,0), (uVar9 & 1) != 0));
  uVar9 = FUN_04cb81c0(plVar10,0,0);
  if ((uVar9 & 1) != 0) {
    if (plVar10 == (long *)0x0) goto LAB_053cfc70;
    uVar9 = FUN_04cb808c(plVar10,0);
    if ((uVar9 & 1) != 0) goto LAB_053cfbd0;
  }
  uVar14 = *(undefined8 *)OVRPlugin_OVRP_1_104_0_TypeInfo;
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar14 = FUN_04d8a7b0(uVar14,0);
  if (unaff_x24 == (long *)0x0) goto LAB_053cfc70;
  lVar8 = (**(code **)(*unaff_x24 + 0x218))(unaff_x24,uVar14,0,*(undefined8 *)(*unaff_x24 + 0x220));
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) goto LAB_053cf598;
  if ((int)*(long *)(lVar8 + 0x18) < 2) goto LAB_053cfbd0;
  plVar10 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
  uVar14 = (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
  lVar8 = FUN_053d6158(uVar14,0);
  if (plVar10 == (long *)0x0) goto LAB_053cfc70;
  if ((lVar8 != 0) &&
     (lVar11 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
  goto LAB_053cfc78;
  if ((int)plVar10[3] == 0) goto LAB_053cfc74;
  plVar10[4] = lVar8;
  thunk_FUN_02bb0e9c(plVar10 + 4,lVar8);
  lVar8 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
  if ((lVar8 != 0) &&
     (lVar11 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
  goto LAB_053cfc78;
  if ((*(uint *)(plVar10 + 3) & 0xfffffffe) != 0) {
    plVar10[5] = lVar8;
    thunk_FUN_02bb0e9c(plVar10 + 5,lVar8);
    FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_112_0_TypeInfo,plVar10,0);
    goto code_r0x053cf594;
  }
  goto LAB_053cfc74;
code_r0x053cecc4:
  lVar11 = (**(code **)(*unaff_x24 + 0x218))(unaff_x24,uVar14,0,*(undefined8 *)(*unaff_x24 + 0x220))
  ;
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0x18) == 0)) goto LAB_053cfbd0;
  if (1 < (int)*(long *)(lVar11 + 0x18)) {
    plVar10 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
    uVar14 = (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
    lVar8 = FUN_053d6158(uVar14,0);
    if (plVar10 == (long *)0x0) goto LAB_053cfc70;
    if ((lVar8 != 0) &&
       (lVar5 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar5 == 0))
    goto LAB_053cfc78;
    if ((int)plVar10[3] == 0) goto LAB_053cfc74;
    plVar10[4] = lVar8;
    thunk_FUN_02bb0e9c(plVar10 + 4,lVar8);
    lVar8 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
    if ((lVar8 != 0) &&
       (lVar5 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar5 == 0))
    goto LAB_053cfc78;
    if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
    plVar10[5] = lVar8;
    thunk_FUN_02bb0e9c(plVar10 + 5,lVar8);
    FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_106_0_TypeInfo,plVar10,0);
    FUN_053e3650();
  }
  lVar8 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
  FUN_053e521c(lVar8,unaff_x24,0);
  iVar3 = (**(code **)(*unaff_x24 + 0x1a8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
  if (iVar3 == 0x10) {
    lVar5 = *unaff_x24;
    bVar1 = *(byte *)(*(long *)PTR_DAT_0631ffa8 + 0x130);
    if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0631ffa8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(unaff_x24);
    }
    plVar10 = (long *)(**(code **)(lVar5 + 0x298))(unaff_x24,1,*(undefined8 *)(lVar5 + 0x2a0));
    uVar9 = FUN_04cb9ca0(plVar10,0,0);
    if (((uVar9 & 1) != 0) &&
       (uVar9 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(plVar10), (uVar9 & 1) != 0))
    goto LAB_053cfbd0;
    uVar14 = (**(code **)(*unaff_x24 + 0x2c8))(unaff_x24,1,*(undefined8 *)(*unaff_x24 + 0x2d0));
    uVar9 = FUN_04cb9ca0(uVar14,0,0);
    if (((uVar9 & 1) != 0) &&
       (uVar9 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(uVar14), (uVar9 & 1) != 0))
    goto LAB_053cfbd0;
    uVar9 = FUN_04cb7c3c(plVar10,0,0);
    if ((uVar9 & 1) != 0) {
      plVar6 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
      lVar5 = (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
      if (plVar6 == (long *)0x0) goto LAB_053cfc70;
      if ((lVar5 != 0) &&
         (lVar7 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
      goto LAB_053cfc78;
      if ((int)plVar6[3] == 0) goto LAB_053cfc74;
      plVar6[4] = lVar5;
      thunk_FUN_02bb0e9c(plVar6 + 4,lVar5);
      lVar5 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
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
    uVar9 = FUN_04cb7c3c(uVar14,0,0);
    if (((uVar9 & 1) != 0) &&
       (uVar9 = System_Xml_Schema_XmlSchemaNotation__get_Public(uVar9,lVar8,0), (uVar9 & 1) == 0)) {
      plVar6 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
      lVar5 = (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
      if (plVar6 == (long *)0x0) goto LAB_053cfc70;
      if ((lVar5 != 0) &&
         (lVar7 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
      goto LAB_053cfc78;
      if ((int)plVar6[3] == 0) goto LAB_053cfc74;
      plVar6[4] = lVar5;
      thunk_FUN_02bb0e9c(plVar6 + 4,lVar5);
      lVar5 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
      if ((lVar5 != 0) &&
         (lVar7 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
      goto LAB_053cfc78;
      if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
      plVar6[5] = lVar5;
      thunk_FUN_02bb0e9c(plVar6 + 5,lVar5);
      uVar14 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_113_0_TypeInfo,plVar6,0);
      *(undefined8 *)(unaff_x19 + 0x88) = uVar14;
      thunk_FUN_02bb0e9c(unaff_x19 + 0x88,uVar14);
    }
    if ((plVar10 == (long *)0x0) ||
       (lVar5 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240)),
       lVar5 == 0)) goto LAB_053cfc70;
    if (*(long *)(lVar5 + 0x18) != 0) {
      plVar10 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
      lVar5 = (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
      if (plVar10 == (long *)0x0) goto LAB_053cfc70;
      if ((lVar5 != 0) &&
         (lVar7 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0))
      goto LAB_053cfc78;
      if ((int)plVar10[3] == 0) goto LAB_053cfc74;
      plVar10[4] = lVar5;
      thunk_FUN_02bb0e9c(plVar10 + 4,lVar5);
      lVar5 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
      if ((lVar5 != 0) &&
         (lVar7 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0))
      goto LAB_053cfc78;
      if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
      plVar10[5] = lVar5;
      thunk_FUN_02bb0e9c(plVar10 + 5,lVar5);
      puVar13 = (undefined8 *)OVRPlugin_OVRP_1_10_0_TypeInfo;
LAB_053cf284:
      FUN_0540ce80(*puVar13,plVar10,0);
      FUN_053e3650();
    }
  }
  else {
    iVar3 = (**(code **)(*unaff_x24 + 0x1a8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
    if (iVar3 != 4) {
      plVar10 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
      lVar5 = FUN_053d6158(unaff_x20,0);
      if (plVar10 == (long *)0x0) goto LAB_053cfc70;
      if ((lVar5 != 0) &&
         (lVar7 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0))
      goto LAB_053cfc78;
      if ((int)plVar10[3] == 0) goto LAB_053cfc74;
      plVar10[4] = lVar5;
      thunk_FUN_02bb0e9c(plVar10 + 4,lVar5);
      lVar5 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
      if ((lVar5 != 0) &&
         (lVar7 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0))
      goto LAB_053cfc78;
      if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
      plVar10[5] = lVar5;
      thunk_FUN_02bb0e9c(plVar10 + 5,lVar5);
      puVar13 = (undefined8 *)OVRPlugin_OVRP_1_109_0_TypeInfo;
      goto LAB_053cf284;
    }
  }
  if (*(int *)(lVar11 + 0x18) == 0) goto LAB_053cfc74;
  plVar10 = *(long **)(lVar11 + 0x20);
  if (plVar10 == (long *)0x0) goto LAB_053cfc70;
  if (*plVar10 != *(long *)OVRPlugin_OVRP_1_101_0_TypeInfo) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44(plVar10);
  }
  if ((char)plVar10[3] == '\0') {
    lVar11 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
    if (lVar8 == 0) goto LAB_053cfc70;
  }
  else {
    if ((plVar10[2] == 0) || (*(int *)(plVar10[2] + 0x10) == 0)) {
      plVar6 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
      lVar11 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
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
    lVar11 = plVar10[2];
  }
  FUN_053e5314(lVar8,lVar11,0);
  uVar14 = FUN_053e52fc(lVar8,0);
  uVar14 = FUN_053d6258(uVar14,0);
  FUN_053e5314(lVar8,uVar14,0);
  uVar14 = FUN_053e542c(lVar8,0);
  uVar4 = FUN_053d6074(uVar14,0);
  FUN_053e53dc(lVar8,uVar4 & 1,0);
  FUN_053e5374(lVar8,(char)plVar10[4],0);
  if (((char)plVar10[4] == '\0') || (*(char *)(unaff_x19 + 0x20) == '\0')) {
LAB_053cf838:
    FUN_053e53a8(lVar8,*(undefined1 *)((long)plVar10 + 0x21),0);
    FUN_053e5344(lVar8,*(undefined4 *)((long)plVar10 + 0x1c),0);
LAB_053cfbc0:
    FUN_053cd398(unaff_x29,lVar8,unaff_x23);
    goto LAB_053cfbd0;
  }
  plVar6 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
  uVar14 = (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
  lVar11 = FUN_053d6158(uVar14,0);
  if (plVar6 == (long *)0x0) goto LAB_053cfc70;
  if ((lVar11 == 0) ||
     (lVar5 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar5 != 0)) {
    if ((int)plVar6[3] == 0) {
LAB_053cfc74:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    plVar6[4] = lVar11;
    thunk_FUN_02bb0e9c(plVar6 + 4,lVar11);
    lVar11 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
    if ((lVar11 == 0) ||
       (lVar5 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar5 != 0)) {
      if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
      plVar6[5] = lVar11;
      thunk_FUN_02bb0e9c(plVar6 + 5,lVar11);
      uStack000000000000001c = 1;
      lVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                         (*(undefined8 *)(PTR_DAT_06312310 + 0x28),(long)&stack0x00000018 + 4);
      if ((lVar11 == 0) ||
         (lVar5 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar5 != 0)) {
        if (*(uint *)(plVar6 + 3) < 3) goto LAB_053cfc74;
        plVar6[6] = lVar11;
        thunk_FUN_02bb0e9c(plVar6 + 6,lVar11);
        uVar14 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo,plVar6,0);
        if (*(int *)(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
        }
        FUN_053da024(uVar14,unaff_x20,0);
        goto LAB_053cf838;
      }
    }
  }
LAB_053cfc78:
  uVar14 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar14,0);
}


