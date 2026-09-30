/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaNumericFacet$$.ctor
ENTRY_POINT: 053cf888
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_19;weak_xr_or_state_hits_19;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_19
*/


void System_Xml_Schema_XmlSchemaNumericFacet___ctor(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
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
  
code_r0x053cf888:
  uVar7 = FUN_04cb80cc(unaff_x26,0);
  if ((uVar7 & 1) != 0) goto LAB_053cfbd0;
  lVar8 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
  FUN_053e521c(lVar8,unaff_x24,0);
  if (unaff_x24 == (long *)0x0) goto LAB_053cfc70;
  uVar9 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
  uVar9 = FUN_053d6258(uVar9,0);
  if (lVar8 == 0) goto LAB_053cfc70;
  FUN_053e5314(lVar8,uVar9,0);
  if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar9 = FUN_053eeef8(0);
  lVar10 = (**(code **)(*unaff_x26 + 0x218))(unaff_x26,uVar9,0,*(undefined8 *)(*unaff_x26 + 0x220));
  if ((lVar10 == 0) || (*(long *)(lVar10 + 0x18) == 0)) {
    if (*(char *)(unaff_x19 + 0x20) != '\0') {
      plVar11 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
      uVar9 = (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
      lVar10 = FUN_053d6158(uVar9,0);
      if (plVar11 == (long *)0x0) {
LAB_053cfc70:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if ((lVar10 != 0) &&
         (lVar12 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0)) {
LAB_053cfc78:
        uVar9 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar9,0);
      }
      if ((int)plVar11[3] == 0) {
LAB_053cfc74:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      plVar11[4] = lVar10;
      thunk_FUN_02bb0e9c(plVar11 + 4,lVar10);
      lVar10 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
      if ((lVar10 != 0) &&
         (lVar12 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
      goto LAB_053cfc78;
      if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
      plVar11[5] = lVar10;
      thunk_FUN_02bb0e9c(plVar11 + 5,lVar10);
      uStack0000000000000018 = 1;
      lVar10 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                         (*(undefined8 *)(PTR_DAT_06312310 + 0x28),&stack0x00000018);
      if ((lVar10 != 0) &&
         (lVar12 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
      goto LAB_053cfc78;
      if (*(uint *)(plVar11 + 3) < 3) goto LAB_053cfc74;
      plVar11[6] = lVar10;
      thunk_FUN_02bb0e9c(plVar11 + 6,lVar10);
      uVar9 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_108_0_TypeInfo,plVar11,0);
      if (*(int *)(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
      }
      FUN_053da024(uVar9,unaff_x20,0);
    }
    FUN_053e5374(lVar8,1,0);
  }
LAB_053cfb9c:
  uVar9 = FUN_053e542c(lVar8,0);
  uVar4 = FUN_053d6074(uVar9,0);
  FUN_053e53dc(lVar8,uVar4 & 1,0);
LAB_053cfbc0:
  FUN_053cd398(unaff_x29,lVar8,unaff_x23);
LAB_053cfbd0:
  do {
    while( true ) {
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
        if (*(char *)(unaff_x19 + 0x95) == '\0') break;
        uVar9 = *(undefined8 *)OVRPlugin_OVRP_1_100_0_TypeInfo;
        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar9 = FUN_04d8a7b0(uVar9,0);
        if (unaff_x24 == (long *)0x0) goto LAB_053cfc70;
        lVar10 = (**(code **)(*unaff_x24 + 0x218))
                           (unaff_x24,uVar9,0,*(undefined8 *)(*unaff_x24 + 0x220));
        if ((lVar10 != 0) && (*(long *)(lVar10 + 0x18) != 0)) {
          if (1 < (int)*(long *)(lVar10 + 0x18)) {
            plVar11 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
            uVar9 = (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0))
            ;
            lVar8 = FUN_053d6158(uVar9,0);
            if (plVar11 == (long *)0x0) goto LAB_053cfc70;
            if ((lVar8 != 0) &&
               (lVar12 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
            goto LAB_053cfc78;
            if ((int)plVar11[3] == 0) goto LAB_053cfc74;
            plVar11[4] = lVar8;
            thunk_FUN_02bb0e9c(plVar11 + 4,lVar8);
            lVar8 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0))
            ;
            if ((lVar8 != 0) &&
               (lVar12 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
            goto LAB_053cfc78;
            if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
            plVar11[5] = lVar8;
            thunk_FUN_02bb0e9c(plVar11 + 5,lVar8);
            FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_106_0_TypeInfo,plVar11,0);
            FUN_053e3650();
          }
          lVar8 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
          FUN_053e521c(lVar8,unaff_x24,0);
          iVar3 = (**(code **)(*unaff_x24 + 0x1a8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
          if (iVar3 != 0x10) {
            iVar3 = (**(code **)(*unaff_x24 + 0x1a8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0))
            ;
            if (iVar3 == 4) goto LAB_053cf2a4;
            plVar11 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
            lVar12 = FUN_053d6158(unaff_x20,0);
            if (plVar11 == (long *)0x0) goto LAB_053cfc70;
            if ((lVar12 != 0) &&
               (lVar6 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar6 == 0))
            goto LAB_053cfc78;
            if ((int)plVar11[3] == 0) goto LAB_053cfc74;
            plVar11[4] = lVar12;
            thunk_FUN_02bb0e9c(plVar11 + 4,lVar12);
            lVar12 = (**(code **)(*unaff_x24 + 0x1b8))
                               (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
            if ((lVar12 != 0) &&
               (lVar6 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar6 == 0))
            goto LAB_053cfc78;
            if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
            plVar11[5] = lVar12;
            thunk_FUN_02bb0e9c(plVar11 + 5,lVar12);
            puVar14 = (undefined8 *)OVRPlugin_OVRP_1_109_0_TypeInfo;
            goto LAB_053cf284;
          }
          lVar12 = *unaff_x24;
          bVar1 = *(byte *)(*(long *)PTR_DAT_0631ffa8 + 0x130);
          if ((*(byte *)(lVar12 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_0631ffa8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3ce44(unaff_x24);
          }
          plVar11 = (long *)(**(code **)(lVar12 + 0x298))
                                      (unaff_x24,1,*(undefined8 *)(lVar12 + 0x2a0));
          uVar7 = FUN_04cb9ca0(plVar11,0,0);
          if (((uVar7 & 1) == 0) ||
             (uVar7 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(plVar11), (uVar7 & 1) == 0))
          {
            uVar9 = (**(code **)(*unaff_x24 + 0x2c8))
                              (unaff_x24,1,*(undefined8 *)(*unaff_x24 + 0x2d0));
            uVar7 = FUN_04cb9ca0(uVar9,0,0);
            if (((uVar7 & 1) == 0) ||
               (uVar7 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(uVar9), (uVar7 & 1) == 0))
            goto LAB_053ceea8;
          }
        }
      }
      lVar8 = *(long *)PTR_DAT_0631ff68;
      if (*(char *)(unaff_x19 + 0x94) != '\0') break;
      if (unaff_x24 == (long *)0x0) {
LAB_053cf1b8:
        unaff_x26 = (long *)0x0;
      }
      else {
        if (*(byte *)(*unaff_x24 + 0x130) < *(byte *)(lVar8 + 0x130)) goto LAB_053cf1b8;
        unaff_x26 = unaff_x24;
        if (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) !=
            lVar8) {
          unaff_x26 = (long *)0x0;
        }
      }
      uVar7 = FUN_04cb81c0(unaff_x26,0,0);
      if ((uVar7 & 1) != 0) {
        if (unaff_x26 == (long *)0x0) goto LAB_053cfc70;
        goto code_r0x053cf888;
      }
    }
    if (unaff_x24 == (long *)0x0) {
      plVar11 = (long *)0x0;
LAB_053cf3f0:
      plVar5 = (long *)0x0;
    }
    else {
      lVar10 = *unaff_x24;
      if (*(byte *)(lVar10 + 0x130) < *(byte *)(lVar8 + 0x130)) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = unaff_x24;
        if (*(long *)(*(long *)(lVar10 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8)
        {
          plVar11 = (long *)0x0;
        }
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_0631ffa8 + 0x130);
      if (*(byte *)(lVar10 + 0x130) < bVar1) goto LAB_053cf3f0;
      plVar5 = unaff_x24;
      if (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0631ffa8) {
        plVar5 = (long *)0x0;
      }
    }
    uVar7 = FUN_04cb8194(plVar11,0,0);
  } while (((uVar7 & 1) != 0) && (uVar7 = FUN_04cb9a4c(plVar5,0,0), (uVar7 & 1) != 0));
  uVar7 = FUN_04cb81c0(plVar11,0,0);
  if ((uVar7 & 1) != 0) {
    if (plVar11 == (long *)0x0) goto LAB_053cfc70;
    uVar7 = FUN_04cb808c(plVar11,0);
    if ((uVar7 & 1) != 0) goto LAB_053cfbd0;
  }
  uVar9 = *(undefined8 *)OVRPlugin_OVRP_1_104_0_TypeInfo;
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar9 = FUN_04d8a7b0(uVar9,0);
  if (unaff_x24 == (long *)0x0) goto LAB_053cfc70;
  lVar8 = (**(code **)(*unaff_x24 + 0x218))(unaff_x24,uVar9,0,*(undefined8 *)(*unaff_x24 + 0x220));
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x18) != 0)) {
    if ((int)*(long *)(lVar8 + 0x18) < 2) goto LAB_053cfbd0;
    plVar11 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
    uVar9 = (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
    lVar8 = FUN_053d6158(uVar9,0);
    if (plVar11 == (long *)0x0) goto LAB_053cfc70;
    if ((lVar8 != 0) &&
       (lVar10 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0))
    goto LAB_053cfc78;
    if ((int)plVar11[3] == 0) goto LAB_053cfc74;
    plVar11[4] = lVar8;
    thunk_FUN_02bb0e9c(plVar11 + 4,lVar8);
    lVar8 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
    if ((lVar8 != 0) &&
       (lVar10 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0))
    goto LAB_053cfc78;
    if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
    plVar11[5] = lVar8;
    thunk_FUN_02bb0e9c(plVar11 + 5,lVar8);
    FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_112_0_TypeInfo,plVar11,0);
    FUN_053e3650();
  }
  lVar8 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
  FUN_053e521c(lVar8,unaff_x24,0);
  uVar7 = FUN_04cb9a10(plVar5,0,0);
  if ((uVar7 & 1) != 0) {
    if (plVar5 == (long *)0x0) goto LAB_053cfc70;
    plVar11 = (long *)FUN_04cbb444(plVar5,0);
    uVar7 = FUN_04cb7c3c(plVar11,0,0);
    if (((uVar7 & 1) != 0) ||
       (uVar7 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(plVar11), (uVar7 & 1) != 0))
    goto LAB_053cfbd0;
    if ((plVar11 == (long *)0x0) ||
       (lVar10 = (**(code **)(*plVar11 + 0x238))(plVar11,*(undefined8 *)(*plVar11 + 0x240)),
       lVar10 == 0)) goto LAB_053cfc70;
    if (*(long *)(lVar10 + 0x18) != 0) goto LAB_053cfbd0;
    plVar11 = (long *)(**(code **)(*plVar5 + 0x2c8))(plVar5,1,*(undefined8 *)(*plVar5 + 0x2d0));
    uVar7 = FUN_04cb7c3c(plVar11,0,0);
    if ((uVar7 & 1) == 0) {
      if (plVar11 == (long *)0x0) goto LAB_053cfc70;
      uVar7 = FUN_04cb9bec(plVar11,0);
      if (((uVar7 & 1) == 0) ||
         ((uVar7 = FUN_04cb9b7c(plVar11,0), (uVar7 & 1) != 0 &&
          (uVar4 = (**(code **)(*plVar11 + 0x248))(plVar11,*(undefined8 *)(*plVar11 + 0x250)),
          (uVar4 >> 8 & 1) == 0)))) goto LAB_053cfbd0;
    }
    else {
      uVar7 = System_Xml_Schema_XmlSchemaNotation__get_Public(uVar7,lVar8,1);
      if ((uVar7 & 1) == 0) goto LAB_053cfbd0;
    }
    if (*(char *)(unaff_x19 + 0x93) != '\0') {
      if (lVar8 == 0) goto LAB_053cfc70;
      uVar9 = FUN_053e542c(lVar8,0);
      if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)PTR_DAT_06322478);
      }
      uVar13 = FUN_053efa38(0);
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
      }
      uVar7 = FUN_04d938a0(uVar9,uVar13,0);
      if ((uVar7 & 1) != 0) {
        uVar9 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
        uVar7 = thunk_FUN_04c08854(uVar9,*(undefined8 *)OVRPlugin_OVRP_1_107_0_TypeInfo,0);
        if ((uVar7 & 1) != 0) goto LAB_053cfbd0;
      }
    }
  }
  uVar9 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
  uVar9 = FUN_053d6258(uVar9,0);
  if (lVar8 == 0) goto LAB_053cfc70;
  FUN_053e5314(lVar8,uVar9,0);
  goto LAB_053cfb9c;
LAB_053ceea8:
  uVar7 = FUN_04cb7c3c(plVar11,0,0);
  if ((uVar7 & 1) != 0) {
    plVar5 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
    lVar12 = (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
    if (plVar5 == (long *)0x0) goto LAB_053cfc70;
    if ((lVar12 != 0) &&
       (lVar6 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    goto LAB_053cfc78;
    if ((int)plVar5[3] == 0) goto LAB_053cfc74;
    plVar5[4] = lVar12;
    thunk_FUN_02bb0e9c(plVar5 + 4,lVar12);
    lVar12 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
    if ((lVar12 != 0) &&
       (lVar6 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    goto LAB_053cfc78;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
    plVar5[5] = lVar12;
    thunk_FUN_02bb0e9c(plVar5 + 5,lVar12);
    FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_110_0_TypeInfo,plVar5,0);
    FUN_053e3650();
    unaff_x23 = in_stack_00000000;
  }
  uVar7 = FUN_04cb7c3c(uVar9,0,0);
  if (((uVar7 & 1) != 0) &&
     (uVar7 = System_Xml_Schema_XmlSchemaNotation__get_Public(uVar7,lVar8,0), (uVar7 & 1) == 0)) {
    plVar5 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
    lVar12 = (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
    if (plVar5 == (long *)0x0) goto LAB_053cfc70;
    if ((lVar12 != 0) &&
       (lVar6 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    goto LAB_053cfc78;
    if ((int)plVar5[3] == 0) goto LAB_053cfc74;
    plVar5[4] = lVar12;
    thunk_FUN_02bb0e9c(plVar5 + 4,lVar12);
    lVar12 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
    if ((lVar12 != 0) &&
       (lVar6 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    goto LAB_053cfc78;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
    plVar5[5] = lVar12;
    thunk_FUN_02bb0e9c(plVar5 + 5,lVar12);
    uVar9 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_113_0_TypeInfo,plVar5,0);
    *(undefined8 *)(unaff_x19 + 0x88) = uVar9;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x88,uVar9);
  }
  if ((plVar11 == (long *)0x0) ||
     (lVar12 = (**(code **)(*plVar11 + 0x238))(plVar11,*(undefined8 *)(*plVar11 + 0x240)),
     lVar12 == 0)) goto LAB_053cfc70;
  if (*(long *)(lVar12 + 0x18) != 0) {
    plVar11 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
    lVar12 = (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
    if (plVar11 == (long *)0x0) goto LAB_053cfc70;
    if ((lVar12 != 0) &&
       (lVar6 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar6 == 0))
    goto LAB_053cfc78;
    if ((int)plVar11[3] == 0) goto LAB_053cfc74;
    plVar11[4] = lVar12;
    thunk_FUN_02bb0e9c(plVar11 + 4,lVar12);
    lVar12 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
    if ((lVar12 != 0) &&
       (lVar6 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar6 == 0))
    goto LAB_053cfc78;
    if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
    plVar11[5] = lVar12;
    thunk_FUN_02bb0e9c(plVar11 + 5,lVar12);
    puVar14 = (undefined8 *)OVRPlugin_OVRP_1_10_0_TypeInfo;
LAB_053cf284:
    FUN_0540ce80(*puVar14,plVar11,0);
    FUN_053e3650();
  }
LAB_053cf2a4:
  if (*(int *)(lVar10 + 0x18) == 0) goto LAB_053cfc74;
  plVar11 = *(long **)(lVar10 + 0x20);
  if (plVar11 == (long *)0x0) goto LAB_053cfc70;
  if (*plVar11 != *(long *)OVRPlugin_OVRP_1_101_0_TypeInfo) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44(plVar11);
  }
  if ((char)plVar11[3] == '\0') {
    lVar10 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
    if (lVar8 == 0) goto LAB_053cfc70;
  }
  else {
    if ((plVar11[2] == 0) || (*(int *)(plVar11[2] + 0x10) == 0)) {
      plVar5 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
      lVar10 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
      if (plVar5 == (long *)0x0) goto LAB_053cfc70;
      if ((lVar10 != 0) &&
         (lVar12 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar12 == 0))
      goto LAB_053cfc78;
      if ((int)plVar5[3] == 0) goto LAB_053cfc74;
      plVar5[4] = lVar10;
      thunk_FUN_02bb0e9c(plVar5 + 4,lVar10);
      lVar10 = FUN_053d6158(unaff_x20,0);
      if ((lVar10 != 0) &&
         (lVar12 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar12 == 0))
      goto LAB_053cfc78;
      if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
      plVar5[5] = lVar10;
      thunk_FUN_02bb0e9c(plVar5 + 5,lVar10);
      FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_111_0_TypeInfo,plVar5,0);
      FUN_053e3650();
    }
    if (lVar8 == 0) goto LAB_053cfc70;
    lVar10 = plVar11[2];
  }
  FUN_053e5314(lVar8,lVar10,0);
  uVar9 = FUN_053e52fc(lVar8,0);
  uVar9 = FUN_053d6258(uVar9,0);
  FUN_053e5314(lVar8,uVar9,0);
  uVar9 = FUN_053e542c(lVar8,0);
  uVar4 = FUN_053d6074(uVar9,0);
  FUN_053e53dc(lVar8,uVar4 & 1,0);
  FUN_053e5374(lVar8,(char)plVar11[4],0);
  if (((char)plVar11[4] != '\0') && (*(char *)(unaff_x19 + 0x20) != '\0')) {
    plVar5 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
    uVar9 = (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
    lVar10 = FUN_053d6158(uVar9,0);
    if (plVar5 == (long *)0x0) goto LAB_053cfc70;
    if ((lVar10 != 0) &&
       (lVar12 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar12 == 0))
    goto LAB_053cfc78;
    if ((int)plVar5[3] == 0) goto LAB_053cfc74;
    plVar5[4] = lVar10;
    thunk_FUN_02bb0e9c(plVar5 + 4,lVar10);
    lVar10 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
    if ((lVar10 != 0) &&
       (lVar12 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar12 == 0))
    goto LAB_053cfc78;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
    plVar5[5] = lVar10;
    thunk_FUN_02bb0e9c(plVar5 + 5,lVar10);
    uStack000000000000001c = 1;
    lVar10 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)(PTR_DAT_06312310 + 0x28),(long)&stack0x00000018 + 4);
    if ((lVar10 != 0) &&
       (lVar12 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar12 == 0))
    goto LAB_053cfc78;
    if (*(uint *)(plVar5 + 3) < 3) goto LAB_053cfc74;
    plVar5[6] = lVar10;
    thunk_FUN_02bb0e9c(plVar5 + 6,lVar10);
    uVar9 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo,plVar5,0);
    if (*(int *)(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
    }
    FUN_053da024(uVar9,unaff_x20,0);
  }
  FUN_053e53a8(lVar8,*(undefined1 *)((long)plVar11 + 0x21),0);
  FUN_053e5344(lVar8,*(undefined4 *)((long)plVar11 + 0x1c),0);
  goto LAB_053cfbc0;
}


