/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaGroup$$SetQualifiedName
ENTRY_POINT: 053cfa78
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


void System_Xml_Schema_XmlSchemaGroup__SetQualifiedName(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x23;
  long *plVar14;
  long unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined1 uStack0000000000000018;
  undefined1 uStack000000000000001c;
  
code_r0x053cfa78:
  FUN_053da024(param_1,unaff_x20,0);
LAB_053cfa84:
  FUN_053e5374(unaff_x25,1,0);
LAB_053cfb9c:
  uVar11 = FUN_053e542c(unaff_x25,0);
  uVar4 = FUN_053d6074(uVar11,0);
  FUN_053e53dc(unaff_x25,uVar4 & 1,0);
LAB_053cfbc0:
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
              lVar12 = *(long *)OVRPlugin_OVRP_1_102_0_TypeInfo;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar12 = *(long *)puVar2;
              }
              FUN_037a7ec8(unaff_x29,**(undefined8 **)(lVar12 + 0xb8),
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
        plVar14 = *(long **)(in_stack_00000010 + unaff_x21 * 8);
        if (*(char *)(unaff_x19 + 0x95) == '\0') break;
        uVar11 = *(undefined8 *)OVRPlugin_OVRP_1_100_0_TypeInfo;
        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar11 = FUN_04d8a7b0(uVar11,0);
        if (plVar14 == (long *)0x0) goto LAB_053cfc70;
        lVar12 = (**(code **)(*plVar14 + 0x218))(plVar14,uVar11,0,*(undefined8 *)(*plVar14 + 0x220))
        ;
        if ((lVar12 != 0) && (*(long *)(lVar12 + 0x18) != 0)) {
          if (1 < (int)*(long *)(lVar12 + 0x18)) {
            plVar5 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
            uVar11 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
            lVar6 = FUN_053d6158(uVar11,0);
            if (plVar5 == (long *)0x0) goto LAB_053cfc70;
            if ((lVar6 != 0) &&
               (lVar7 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
            goto LAB_053cfc78;
            if ((int)plVar5[3] == 0) goto LAB_053cfc74;
            plVar5[4] = lVar6;
            thunk_FUN_02bb0e9c(plVar5 + 4,lVar6);
            lVar6 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
            if ((lVar6 != 0) &&
               (lVar7 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
            goto LAB_053cfc78;
            if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
            plVar5[5] = lVar6;
            thunk_FUN_02bb0e9c(plVar5 + 5,lVar6);
            FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_106_0_TypeInfo,plVar5,0);
            FUN_053e3650();
          }
          unaff_x25 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
          FUN_053e521c(unaff_x25,plVar14,0);
          iVar3 = (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
          if (iVar3 != 0x10) {
            iVar3 = (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
            if (iVar3 == 4) goto LAB_053cf2a4;
            plVar5 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
            lVar6 = FUN_053d6158(unaff_x20,0);
            if (plVar5 == (long *)0x0) goto LAB_053cfc70;
            if ((lVar6 != 0) &&
               (lVar7 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
            goto LAB_053cfc78;
            if ((int)plVar5[3] == 0) goto LAB_053cfc74;
            plVar5[4] = lVar6;
            thunk_FUN_02bb0e9c(plVar5 + 4,lVar6);
            lVar6 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
            if ((lVar6 != 0) &&
               (lVar7 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
            goto LAB_053cfc78;
            if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
            plVar5[5] = lVar6;
            thunk_FUN_02bb0e9c(plVar5 + 5,lVar6);
            puVar13 = (undefined8 *)OVRPlugin_OVRP_1_109_0_TypeInfo;
            goto LAB_053cf284;
          }
          lVar6 = *plVar14;
          bVar1 = *(byte *)(*(long *)PTR_DAT_0631ffa8 + 0x130);
          if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0631ffa8
             )) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3ce44(plVar14);
          }
          plVar5 = (long *)(**(code **)(lVar6 + 0x298))(plVar14,1,*(undefined8 *)(lVar6 + 0x2a0));
          uVar8 = FUN_04cb9ca0(plVar5,0,0);
          if (((uVar8 & 1) == 0) ||
             (uVar8 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(plVar5), (uVar8 & 1) == 0)) {
            uVar11 = (**(code **)(*plVar14 + 0x2c8))(plVar14,1,*(undefined8 *)(*plVar14 + 0x2d0));
            uVar8 = FUN_04cb9ca0(uVar11,0,0);
            if (((uVar8 & 1) == 0) ||
               (uVar8 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(uVar11), (uVar8 & 1) == 0))
            goto LAB_053ceea8;
          }
        }
      }
      lVar12 = *(long *)PTR_DAT_0631ff68;
      if (*(char *)(unaff_x19 + 0x94) != '\0') break;
      if (plVar14 == (long *)0x0) {
LAB_053cf1b8:
        plVar5 = (long *)0x0;
      }
      else {
        if (*(byte *)(*plVar14 + 0x130) < *(byte *)(lVar12 + 0x130)) goto LAB_053cf1b8;
        plVar5 = plVar14;
        if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) !=
            lVar12) {
          plVar5 = (long *)0x0;
        }
      }
      uVar8 = FUN_04cb81c0(plVar5,0,0);
      if ((uVar8 & 1) != 0) {
        if (plVar5 == (long *)0x0) goto LAB_053cfc70;
        uVar8 = FUN_04cb80cc(plVar5,0);
        if ((uVar8 & 1) == 0) {
          unaff_x25 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
          FUN_053e521c(unaff_x25,plVar14,0);
          if (plVar14 == (long *)0x0) goto LAB_053cfc70;
          uVar11 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
          uVar11 = FUN_053d6258(uVar11,0);
          if (unaff_x25 == 0) goto LAB_053cfc70;
          FUN_053e5314(unaff_x25,uVar11,0);
          if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar11 = FUN_053eeef8(0);
          lVar12 = (**(code **)(*plVar5 + 0x218))(plVar5,uVar11,0,*(undefined8 *)(*plVar5 + 0x220));
          if ((lVar12 != 0) && (*(long *)(lVar12 + 0x18) != 0)) goto LAB_053cfb9c;
          if (*(char *)(unaff_x19 + 0x20) == '\0') goto LAB_053cfa84;
          plVar5 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
          uVar11 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
          lVar12 = FUN_053d6158(uVar11,0);
          if (plVar5 == (long *)0x0) goto LAB_053cfc70;
          if ((lVar12 != 0) &&
             (lVar6 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
          goto LAB_053cfc78;
          if ((int)plVar5[3] == 0) goto LAB_053cfc74;
          plVar5[4] = lVar12;
          thunk_FUN_02bb0e9c(plVar5 + 4,lVar12);
          lVar12 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
          if ((lVar12 != 0) &&
             (lVar6 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
          goto LAB_053cfc78;
          if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
          plVar5[5] = lVar12;
          thunk_FUN_02bb0e9c(plVar5 + 5,lVar12);
          uStack0000000000000018 = 1;
          lVar12 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x28),&stack0x00000018);
          if ((lVar12 != 0) &&
             (lVar6 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
          goto LAB_053cfc78;
          if (*(uint *)(plVar5 + 3) < 3) goto LAB_053cfc74;
          plVar5[6] = lVar12;
          thunk_FUN_02bb0e9c(plVar5 + 6,lVar12);
          param_1 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_108_0_TypeInfo,plVar5,0);
          if (*(int *)(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02b9ad44(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
          }
          goto code_r0x053cfa78;
        }
      }
    }
    if (plVar14 == (long *)0x0) {
      plVar5 = (long *)0x0;
LAB_053cf3f0:
      plVar9 = (long *)0x0;
    }
    else {
      lVar6 = *plVar14;
      if (*(byte *)(lVar6 + 0x130) < *(byte *)(lVar12 + 0x130)) {
        plVar5 = (long *)0x0;
      }
      else {
        plVar5 = plVar14;
        if (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) != lVar12)
        {
          plVar5 = (long *)0x0;
        }
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_0631ffa8 + 0x130);
      if (*(byte *)(lVar6 + 0x130) < bVar1) goto LAB_053cf3f0;
      plVar9 = plVar14;
      if (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0631ffa8) {
        plVar9 = (long *)0x0;
      }
    }
    uVar8 = FUN_04cb8194(plVar5,0,0);
  } while (((uVar8 & 1) != 0) && (uVar8 = FUN_04cb9a4c(plVar9,0,0), (uVar8 & 1) != 0));
  uVar8 = FUN_04cb81c0(plVar5,0,0);
  if ((uVar8 & 1) != 0) {
    if (plVar5 == (long *)0x0) goto LAB_053cfc70;
    uVar8 = FUN_04cb808c(plVar5,0);
    if ((uVar8 & 1) != 0) goto LAB_053cfbd0;
  }
  uVar11 = *(undefined8 *)OVRPlugin_OVRP_1_104_0_TypeInfo;
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar11 = FUN_04d8a7b0(uVar11,0);
  if (plVar14 == (long *)0x0) goto LAB_053cfc70;
  lVar12 = (**(code **)(*plVar14 + 0x218))(plVar14,uVar11,0,*(undefined8 *)(*plVar14 + 0x220));
  if ((lVar12 != 0) && (*(long *)(lVar12 + 0x18) != 0)) {
    if ((int)*(long *)(lVar12 + 0x18) < 2) goto LAB_053cfbd0;
    plVar5 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
    uVar11 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
    lVar12 = FUN_053d6158(uVar11,0);
    if (plVar5 == (long *)0x0) goto LAB_053cfc70;
    if ((lVar12 != 0) &&
       (lVar6 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    goto LAB_053cfc78;
    if ((int)plVar5[3] == 0) goto LAB_053cfc74;
    plVar5[4] = lVar12;
    thunk_FUN_02bb0e9c(plVar5 + 4,lVar12);
    lVar12 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
    if ((lVar12 != 0) &&
       (lVar6 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    goto LAB_053cfc78;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
    plVar5[5] = lVar12;
    thunk_FUN_02bb0e9c(plVar5 + 5,lVar12);
    FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_112_0_TypeInfo,plVar5,0);
    FUN_053e3650();
  }
  unaff_x25 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
  FUN_053e521c(unaff_x25,plVar14,0);
  uVar8 = FUN_04cb9a10(plVar9,0,0);
  if ((uVar8 & 1) != 0) {
    if (plVar9 == (long *)0x0) goto LAB_053cfc70;
    plVar5 = (long *)FUN_04cbb444(plVar9,0);
    uVar8 = FUN_04cb7c3c(plVar5,0,0);
    if (((uVar8 & 1) != 0) ||
       (uVar8 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(plVar5), (uVar8 & 1) != 0))
    goto LAB_053cfbd0;
    if ((plVar5 == (long *)0x0) ||
       (lVar12 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)),
       lVar12 == 0)) goto LAB_053cfc70;
    if (*(long *)(lVar12 + 0x18) != 0) goto LAB_053cfbd0;
    plVar5 = (long *)(**(code **)(*plVar9 + 0x2c8))(plVar9,1,*(undefined8 *)(*plVar9 + 0x2d0));
    uVar8 = FUN_04cb7c3c(plVar5,0,0);
    if ((uVar8 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_053cfc70;
      uVar8 = FUN_04cb9bec(plVar5,0);
      if (((uVar8 & 1) == 0) ||
         ((uVar8 = FUN_04cb9b7c(plVar5,0), (uVar8 & 1) != 0 &&
          (uVar4 = (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250)),
          (uVar4 >> 8 & 1) == 0)))) goto LAB_053cfbd0;
    }
    else {
      uVar8 = System_Xml_Schema_XmlSchemaNotation__get_Public(uVar8,unaff_x25,1);
      if ((uVar8 & 1) == 0) goto LAB_053cfbd0;
    }
    if (*(char *)(unaff_x19 + 0x93) != '\0') {
      if (unaff_x25 == 0) goto LAB_053cfc70;
      uVar11 = FUN_053e542c(unaff_x25,0);
      if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)PTR_DAT_06322478);
      }
      uVar10 = FUN_053efa38(0);
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
      }
      uVar8 = FUN_04d938a0(uVar11,uVar10,0);
      if ((uVar8 & 1) != 0) {
        uVar11 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
        uVar8 = thunk_FUN_04c08854(uVar11,*(undefined8 *)OVRPlugin_OVRP_1_107_0_TypeInfo,0);
        if ((uVar8 & 1) != 0) goto LAB_053cfbd0;
      }
    }
  }
  uVar11 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
  uVar11 = FUN_053d6258(uVar11,0);
  if (unaff_x25 == 0) goto LAB_053cfc70;
  FUN_053e5314(unaff_x25,uVar11,0);
  goto LAB_053cfb9c;
LAB_053ceea8:
  uVar8 = FUN_04cb7c3c(plVar5,0,0);
  if ((uVar8 & 1) != 0) {
    plVar9 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
    lVar6 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
    if (plVar9 == (long *)0x0) {
LAB_053cfc70:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0))
    goto LAB_053cfc78;
    if ((int)plVar9[3] == 0) goto LAB_053cfc74;
    plVar9[4] = lVar6;
    thunk_FUN_02bb0e9c(plVar9 + 4,lVar6);
    lVar6 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0))
    goto LAB_053cfc78;
    if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
    plVar9[5] = lVar6;
    thunk_FUN_02bb0e9c(plVar9 + 5,lVar6);
    FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_110_0_TypeInfo,plVar9,0);
    FUN_053e3650();
    unaff_x23 = in_stack_00000000;
  }
  uVar8 = FUN_04cb7c3c(uVar11,0,0);
  if (((uVar8 & 1) != 0) &&
     (uVar8 = System_Xml_Schema_XmlSchemaNotation__get_Public(uVar8,unaff_x25,0), (uVar8 & 1) == 0))
  {
    plVar9 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
    lVar6 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
    if (plVar9 == (long *)0x0) goto LAB_053cfc70;
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0))
    goto LAB_053cfc78;
    if ((int)plVar9[3] == 0) goto LAB_053cfc74;
    plVar9[4] = lVar6;
    thunk_FUN_02bb0e9c(plVar9 + 4,lVar6);
    lVar6 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0))
    goto LAB_053cfc78;
    if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
    plVar9[5] = lVar6;
    thunk_FUN_02bb0e9c(plVar9 + 5,lVar6);
    uVar11 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_113_0_TypeInfo,plVar9,0);
    *(undefined8 *)(unaff_x19 + 0x88) = uVar11;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x88,uVar11);
  }
  if ((plVar5 == (long *)0x0) ||
     (lVar6 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)), lVar6 == 0))
  goto LAB_053cfc70;
  if (*(long *)(lVar6 + 0x18) != 0) {
    plVar5 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
    lVar6 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
    if (plVar5 == (long *)0x0) goto LAB_053cfc70;
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_053cfc78;
    if ((int)plVar5[3] == 0) goto LAB_053cfc74;
    plVar5[4] = lVar6;
    thunk_FUN_02bb0e9c(plVar5 + 4,lVar6);
    lVar6 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_053cfc78;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
    plVar5[5] = lVar6;
    thunk_FUN_02bb0e9c(plVar5 + 5,lVar6);
    puVar13 = (undefined8 *)OVRPlugin_OVRP_1_10_0_TypeInfo;
LAB_053cf284:
    FUN_0540ce80(*puVar13,plVar5,0);
    FUN_053e3650();
  }
LAB_053cf2a4:
  if (*(int *)(lVar12 + 0x18) == 0) goto LAB_053cfc74;
  plVar5 = *(long **)(lVar12 + 0x20);
  if (plVar5 == (long *)0x0) goto LAB_053cfc70;
  if (*plVar5 != *(long *)OVRPlugin_OVRP_1_101_0_TypeInfo) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44(plVar5);
  }
  if ((char)plVar5[3] == '\0') {
    lVar12 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
    if (unaff_x25 == 0) goto LAB_053cfc70;
  }
  else {
    if ((plVar5[2] == 0) || (*(int *)(plVar5[2] + 0x10) == 0)) {
      plVar9 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
      lVar12 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
      if (plVar9 == (long *)0x0) goto LAB_053cfc70;
      if ((lVar12 != 0) &&
         (lVar6 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0))
      goto LAB_053cfc78;
      if ((int)plVar9[3] == 0) goto LAB_053cfc74;
      plVar9[4] = lVar12;
      thunk_FUN_02bb0e9c(plVar9 + 4,lVar12);
      lVar12 = FUN_053d6158(unaff_x20,0);
      if ((lVar12 != 0) &&
         (lVar6 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0))
      goto LAB_053cfc78;
      if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
      plVar9[5] = lVar12;
      thunk_FUN_02bb0e9c(plVar9 + 5,lVar12);
      FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_111_0_TypeInfo,plVar9,0);
      FUN_053e3650();
    }
    if (unaff_x25 == 0) goto LAB_053cfc70;
    lVar12 = plVar5[2];
  }
  FUN_053e5314(unaff_x25,lVar12,0);
  uVar11 = FUN_053e52fc(unaff_x25,0);
  uVar11 = FUN_053d6258(uVar11,0);
  FUN_053e5314(unaff_x25,uVar11,0);
  uVar11 = FUN_053e542c(unaff_x25,0);
  uVar4 = FUN_053d6074(uVar11,0);
  FUN_053e53dc(unaff_x25,uVar4 & 1,0);
  FUN_053e5374(unaff_x25,(char)plVar5[4],0);
  if (((char)plVar5[4] == '\0') || (*(char *)(unaff_x19 + 0x20) == '\0')) {
LAB_053cf838:
    FUN_053e53a8(unaff_x25,*(undefined1 *)((long)plVar5 + 0x21),0);
    FUN_053e5344(unaff_x25,*(undefined4 *)((long)plVar5 + 0x1c),0);
    goto LAB_053cfbc0;
  }
  plVar9 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
  uVar11 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
  lVar12 = FUN_053d6158(uVar11,0);
  if (plVar9 == (long *)0x0) goto LAB_053cfc70;
  if ((lVar12 != 0) &&
     (lVar6 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0)) {
LAB_053cfc78:
    uVar11 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar11,0);
  }
  if ((int)plVar9[3] != 0) {
    plVar9[4] = lVar12;
    thunk_FUN_02bb0e9c(plVar9 + 4,lVar12);
    lVar12 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
    if ((lVar12 != 0) &&
       (lVar6 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0))
    goto LAB_053cfc78;
    if ((*(uint *)(plVar9 + 3) & 0xfffffffe) != 0) {
      plVar9[5] = lVar12;
      thunk_FUN_02bb0e9c(plVar9 + 5,lVar12);
      uStack000000000000001c = 1;
      lVar12 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                         (*(undefined8 *)(PTR_DAT_06312310 + 0x28),(long)&stack0x00000018 + 4);
      if ((lVar12 != 0) &&
         (lVar6 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0))
      goto LAB_053cfc78;
      if (2 < *(uint *)(plVar9 + 3)) {
        plVar9[6] = lVar12;
        thunk_FUN_02bb0e9c(plVar9 + 6,lVar12);
        uVar11 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo,plVar9,0);
        if (*(int *)(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
        }
        FUN_053da024(uVar11,unaff_x20,0);
        goto LAB_053cf838;
      }
    }
  }
LAB_053cfc74:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


