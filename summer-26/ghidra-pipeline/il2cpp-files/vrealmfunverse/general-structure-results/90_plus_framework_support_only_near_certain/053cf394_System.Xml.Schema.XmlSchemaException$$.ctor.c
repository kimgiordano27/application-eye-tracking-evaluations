/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaException$$.ctor
ENTRY_POINT: 053cf394
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 116
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_18;weak_xr_or_state_hits_18;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_Xml_Schema_XmlSchemaException___ctor
               (undefined **param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined1 uStack0000000000000018;
  undefined1 uStack000000000000001c;
  
code_r0x053cf394:
  FUN_0540ce80(*(undefined8 *)param_1[0x1c4],param_3,param_4);
  FUN_053e3650();
LAB_053cf3b0:
  if (unaff_x25 == 0) {
LAB_053cfc70:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar12 = unaff_x26[2];
LAB_053cf678:
  FUN_053e5314(unaff_x25,lVar12,0);
  uVar8 = FUN_053e52fc(unaff_x25,0);
  uVar8 = FUN_053d6258(uVar8,0);
  FUN_053e5314(unaff_x25,uVar8,0);
  uVar8 = FUN_053e542c(unaff_x25,0);
  uVar4 = FUN_053d6074(uVar8,0);
  FUN_053e53dc(unaff_x25,uVar4 & 1,0);
  FUN_053e5374(unaff_x25,(char)unaff_x26[4],0);
  if (((char)unaff_x26[4] != '\0') && (*(char *)(unaff_x19 + 0x20) != '\0')) {
    plVar9 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
    uVar8 = (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
    lVar12 = FUN_053d6158(uVar8,0);
    if (plVar9 == (long *)0x0) goto LAB_053cfc70;
    if ((lVar12 != 0) &&
       (lVar10 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
LAB_053cfc78:
      uVar8 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar8,0);
    }
    if ((int)plVar9[3] == 0) {
LAB_053cfc74:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    plVar9[4] = lVar12;
    thunk_FUN_02bb0e9c(plVar9 + 4,lVar12);
    lVar12 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
    if ((lVar12 != 0) &&
       (lVar10 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
    goto LAB_053cfc78;
    if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
    plVar9[5] = lVar12;
    thunk_FUN_02bb0e9c(plVar9 + 5,lVar12);
    uStack000000000000001c = 1;
    lVar12 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)(PTR_DAT_06312310 + 0x28),(long)&stack0x00000018 + 4);
    if ((lVar12 != 0) &&
       (lVar10 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
    goto LAB_053cfc78;
    if (*(uint *)(plVar9 + 3) < 3) goto LAB_053cfc74;
    plVar9[6] = lVar12;
    thunk_FUN_02bb0e9c(plVar9 + 6,lVar12);
    uVar8 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo,plVar9,0);
    if (*(int *)(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
    }
    FUN_053da024(uVar8,unaff_x20,0);
  }
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
    unaff_x24 = *(long **)(in_stack_00000010 + unaff_x21 * 8);
    if (*(char *)(unaff_x19 + 0x95) != '\0') {
      uVar8 = *(undefined8 *)OVRPlugin_OVRP_1_100_0_TypeInfo;
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar8 = FUN_04d8a7b0(uVar8,0);
      if (unaff_x24 == (long *)0x0) goto LAB_053cfc70;
      lVar12 = (**(code **)(*unaff_x24 + 0x218))
                         (unaff_x24,uVar8,0,*(undefined8 *)(*unaff_x24 + 0x220));
      if ((lVar12 == 0) || (*(long *)(lVar12 + 0x18) == 0)) goto LAB_053cfbd0;
      if (1 < (int)*(long *)(lVar12 + 0x18)) {
        plVar9 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
        uVar8 = (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
        lVar10 = FUN_053d6158(uVar8,0);
        if (plVar9 == (long *)0x0) goto LAB_053cfc70;
        if ((lVar10 != 0) &&
           (lVar5 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0))
        goto LAB_053cfc78;
        if ((int)plVar9[3] == 0) goto LAB_053cfc74;
        plVar9[4] = lVar10;
        thunk_FUN_02bb0e9c(plVar9 + 4,lVar10);
        lVar10 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
        if ((lVar10 != 0) &&
           (lVar5 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0))
        goto LAB_053cfc78;
        if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
        plVar9[5] = lVar10;
        thunk_FUN_02bb0e9c(plVar9 + 5,lVar10);
        FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_106_0_TypeInfo,plVar9,0);
        FUN_053e3650();
      }
      unaff_x25 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
      FUN_053e521c(unaff_x25,unaff_x24,0);
      iVar3 = (**(code **)(*unaff_x24 + 0x1a8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
      if (iVar3 == 0x10) {
        lVar10 = *unaff_x24;
        bVar1 = *(byte *)(*(long *)PTR_DAT_0631ffa8 + 0x130);
        if ((*(byte *)(lVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0631ffa8)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(unaff_x24);
        }
        plVar9 = (long *)(**(code **)(lVar10 + 0x298))(unaff_x24,1,*(undefined8 *)(lVar10 + 0x2a0));
        uVar6 = FUN_04cb9ca0(plVar9,0,0);
        if (((uVar6 & 1) != 0) &&
           (uVar6 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(plVar9), (uVar6 & 1) != 0))
        goto LAB_053cfbd0;
        uVar8 = (**(code **)(*unaff_x24 + 0x2c8))(unaff_x24,1,*(undefined8 *)(*unaff_x24 + 0x2d0));
        uVar6 = FUN_04cb9ca0(uVar8,0,0);
        if (((uVar6 & 1) != 0) &&
           (uVar6 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(uVar8), (uVar6 & 1) != 0))
        goto LAB_053cfbd0;
        uVar6 = FUN_04cb7c3c(plVar9,0,0);
        if ((uVar6 & 1) != 0) {
          plVar7 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
          lVar10 = (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
          if (plVar7 == (long *)0x0) goto LAB_053cfc70;
          if ((lVar10 != 0) &&
             (lVar5 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0))
          goto LAB_053cfc78;
          if ((int)plVar7[3] == 0) goto LAB_053cfc74;
          plVar7[4] = lVar10;
          thunk_FUN_02bb0e9c(plVar7 + 4,lVar10);
          lVar10 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
          if ((lVar10 != 0) &&
             (lVar5 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0))
          goto LAB_053cfc78;
          if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
          plVar7[5] = lVar10;
          thunk_FUN_02bb0e9c(plVar7 + 5,lVar10);
          FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_110_0_TypeInfo,plVar7,0);
          FUN_053e3650();
          unaff_x23 = in_stack_00000000;
        }
        uVar6 = FUN_04cb7c3c(uVar8,0,0);
        if (((uVar6 & 1) != 0) &&
           (uVar6 = System_Xml_Schema_XmlSchemaNotation__get_Public(uVar6,unaff_x25,0),
           (uVar6 & 1) == 0)) {
          plVar7 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
          lVar10 = (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
          if (plVar7 == (long *)0x0) goto LAB_053cfc70;
          if ((lVar10 != 0) &&
             (lVar5 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0))
          goto LAB_053cfc78;
          if ((int)plVar7[3] == 0) goto LAB_053cfc74;
          plVar7[4] = lVar10;
          thunk_FUN_02bb0e9c(plVar7 + 4,lVar10);
          lVar10 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
          if ((lVar10 != 0) &&
             (lVar5 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0))
          goto LAB_053cfc78;
          if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
          plVar7[5] = lVar10;
          thunk_FUN_02bb0e9c(plVar7 + 5,lVar10);
          uVar8 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_113_0_TypeInfo,plVar7,0);
          *(undefined8 *)(unaff_x19 + 0x88) = uVar8;
          thunk_FUN_02bb0e9c(unaff_x19 + 0x88,uVar8);
        }
        if ((plVar9 == (long *)0x0) ||
           (lVar10 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240)),
           lVar10 == 0)) goto LAB_053cfc70;
        if (*(long *)(lVar10 + 0x18) != 0) {
          plVar9 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
          lVar10 = (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
          if (plVar9 == (long *)0x0) goto LAB_053cfc70;
          if ((lVar10 != 0) &&
             (lVar5 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0))
          goto LAB_053cfc78;
          if ((int)plVar9[3] == 0) goto LAB_053cfc74;
          plVar9[4] = lVar10;
          thunk_FUN_02bb0e9c(plVar9 + 4,lVar10);
          lVar10 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
          if ((lVar10 != 0) &&
             (lVar5 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0))
          goto LAB_053cfc78;
          if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
          plVar9[5] = lVar10;
          thunk_FUN_02bb0e9c(plVar9 + 5,lVar10);
          puVar13 = (undefined8 *)OVRPlugin_OVRP_1_10_0_TypeInfo;
LAB_053cf284:
          FUN_0540ce80(*puVar13,plVar9,0);
          FUN_053e3650();
        }
      }
      else {
        iVar3 = (**(code **)(*unaff_x24 + 0x1a8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
        if (iVar3 != 4) {
          plVar9 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
          lVar10 = FUN_053d6158(unaff_x20,0);
          if (plVar9 == (long *)0x0) goto LAB_053cfc70;
          if ((lVar10 != 0) &&
             (lVar5 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0))
          goto LAB_053cfc78;
          if ((int)plVar9[3] == 0) goto LAB_053cfc74;
          plVar9[4] = lVar10;
          thunk_FUN_02bb0e9c(plVar9 + 4,lVar10);
          lVar10 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
          if ((lVar10 != 0) &&
             (lVar5 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0))
          goto LAB_053cfc78;
          if ((*(uint *)(plVar9 + 3) & 0xfffffffe) != 0) {
            plVar9[5] = lVar10;
            thunk_FUN_02bb0e9c(plVar9 + 5,lVar10);
            puVar13 = (undefined8 *)OVRPlugin_OVRP_1_109_0_TypeInfo;
            goto LAB_053cf284;
          }
          goto LAB_053cfc74;
        }
      }
      if (*(int *)(lVar12 + 0x18) == 0) goto LAB_053cfc74;
      unaff_x26 = *(long **)(lVar12 + 0x20);
      if (unaff_x26 == (long *)0x0) goto LAB_053cfc70;
      if (*unaff_x26 != *(long *)OVRPlugin_OVRP_1_101_0_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(unaff_x26);
      }
      if ((char)unaff_x26[3] == '\0') {
        lVar12 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
        if (unaff_x25 != 0) goto LAB_053cf678;
        goto LAB_053cfc70;
      }
      if ((unaff_x26[2] != 0) && (*(int *)(unaff_x26[2] + 0x10) != 0)) goto LAB_053cf3b0;
      param_3 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
      lVar12 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
      if (param_3 == (long *)0x0) goto LAB_053cfc70;
      if ((lVar12 != 0) &&
         (lVar10 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*param_3 + 0x40)), lVar10 == 0))
      goto LAB_053cfc78;
      if ((int)param_3[3] == 0) goto LAB_053cfc74;
      param_3[4] = lVar12;
      thunk_FUN_02bb0e9c(param_3 + 4,lVar12);
      lVar12 = FUN_053d6158(unaff_x20,0);
      if ((lVar12 != 0) &&
         (lVar10 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*param_3 + 0x40)), lVar10 == 0))
      goto LAB_053cfc78;
      if ((*(uint *)(param_3 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
      param_3[5] = lVar12;
      thunk_FUN_02bb0e9c(param_3 + 5,lVar12);
      param_1 = &
                UnityEngine_Rendering_InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1_PostfixBurstDelegate_TypeInfo
      ;
      param_4 = 0;
      goto code_r0x053cf394;
    }
    lVar12 = *(long *)PTR_DAT_0631ff68;
    if (*(char *)(unaff_x19 + 0x94) == '\0') {
      if (unaff_x24 == (long *)0x0) {
LAB_053cf1b8:
        plVar9 = (long *)0x0;
      }
      else {
        if (*(byte *)(*unaff_x24 + 0x130) < *(byte *)(lVar12 + 0x130)) goto LAB_053cf1b8;
        plVar9 = unaff_x24;
        if (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) !=
            lVar12) {
          plVar9 = (long *)0x0;
        }
      }
      uVar6 = FUN_04cb81c0(plVar9,0,0);
      if ((uVar6 & 1) != 0) {
        if (plVar9 == (long *)0x0) goto LAB_053cfc70;
        uVar6 = FUN_04cb80cc(plVar9,0);
        if ((uVar6 & 1) == 0) {
          unaff_x25 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
          FUN_053e521c(unaff_x25,unaff_x24,0);
          if (unaff_x24 == (long *)0x0) goto LAB_053cfc70;
          uVar8 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
          uVar8 = FUN_053d6258(uVar8,0);
          if (unaff_x25 == 0) goto LAB_053cfc70;
          FUN_053e5314(unaff_x25,uVar8,0);
          if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar8 = FUN_053eeef8(0);
          lVar12 = (**(code **)(*plVar9 + 0x218))(plVar9,uVar8,0,*(undefined8 *)(*plVar9 + 0x220));
          if ((lVar12 != 0) && (*(long *)(lVar12 + 0x18) != 0)) goto LAB_053cfb9c;
          if (*(char *)(unaff_x19 + 0x20) != '\0') {
            plVar9 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
            uVar8 = (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0))
            ;
            lVar12 = FUN_053d6158(uVar8,0);
            if (plVar9 == (long *)0x0) goto LAB_053cfc70;
            if ((lVar12 != 0) &&
               (lVar10 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
            goto LAB_053cfc78;
            if ((int)plVar9[3] == 0) goto LAB_053cfc74;
            plVar9[4] = lVar12;
            thunk_FUN_02bb0e9c(plVar9 + 4,lVar12);
            lVar12 = (**(code **)(*unaff_x24 + 0x1b8))
                               (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
            if ((lVar12 != 0) &&
               (lVar10 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
            goto LAB_053cfc78;
            if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
            plVar9[5] = lVar12;
            thunk_FUN_02bb0e9c(plVar9 + 5,lVar12);
            uStack0000000000000018 = 1;
            lVar12 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                               (*(undefined8 *)(PTR_DAT_06312310 + 0x28),&stack0x00000018);
            if ((lVar12 != 0) &&
               (lVar10 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
            goto LAB_053cfc78;
            if (*(uint *)(plVar9 + 3) < 3) goto LAB_053cfc74;
            plVar9[6] = lVar12;
            thunk_FUN_02bb0e9c(plVar9 + 6,lVar12);
            uVar8 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_108_0_TypeInfo,plVar9,0);
            if (*(int *)(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo + 0xe4) == 0) {
              thunk_FUN_02b9ad44(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
            }
            FUN_053da024(uVar8,unaff_x20,0);
          }
          FUN_053e5374(unaff_x25,1,0);
          goto LAB_053cfb9c;
        }
      }
      goto LAB_053cfbd0;
    }
    if (unaff_x24 == (long *)0x0) {
      plVar9 = (long *)0x0;
LAB_053cf3f0:
      plVar7 = (long *)0x0;
    }
    else {
      lVar10 = *unaff_x24;
      if (*(byte *)(lVar10 + 0x130) < *(byte *)(lVar12 + 0x130)) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = unaff_x24;
        if (*(long *)(*(long *)(lVar10 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) != lVar12
           ) {
          plVar9 = (long *)0x0;
        }
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_0631ffa8 + 0x130);
      if (*(byte *)(lVar10 + 0x130) < bVar1) goto LAB_053cf3f0;
      plVar7 = unaff_x24;
      if (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0631ffa8) {
        plVar7 = (long *)0x0;
      }
    }
    uVar6 = FUN_04cb8194(plVar9,0,0);
    if (((uVar6 & 1) != 0) && (uVar6 = FUN_04cb9a4c(plVar7,0,0), (uVar6 & 1) != 0))
    goto LAB_053cfbd0;
    uVar6 = FUN_04cb81c0(plVar9,0,0);
    if ((uVar6 & 1) != 0) {
      if (plVar9 == (long *)0x0) goto LAB_053cfc70;
      uVar6 = FUN_04cb808c(plVar9,0);
      if ((uVar6 & 1) != 0) goto LAB_053cfbd0;
    }
    uVar8 = *(undefined8 *)OVRPlugin_OVRP_1_104_0_TypeInfo;
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar8 = FUN_04d8a7b0(uVar8,0);
    if (unaff_x24 == (long *)0x0) goto LAB_053cfc70;
    lVar12 = (**(code **)(*unaff_x24 + 0x218))
                       (unaff_x24,uVar8,0,*(undefined8 *)(*unaff_x24 + 0x220));
    if ((lVar12 != 0) && (*(long *)(lVar12 + 0x18) != 0)) {
      if ((int)*(long *)(lVar12 + 0x18) < 2) goto LAB_053cfbd0;
      plVar9 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
      uVar8 = (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
      lVar12 = FUN_053d6158(uVar8,0);
      if (plVar9 == (long *)0x0) goto LAB_053cfc70;
      if ((lVar12 != 0) &&
         (lVar10 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
      goto LAB_053cfc78;
      if ((int)plVar9[3] == 0) goto LAB_053cfc74;
      plVar9[4] = lVar12;
      thunk_FUN_02bb0e9c(plVar9 + 4,lVar12);
      lVar12 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
      if ((lVar12 != 0) &&
         (lVar10 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
      goto LAB_053cfc78;
      if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_053cfc74;
      plVar9[5] = lVar12;
      thunk_FUN_02bb0e9c(plVar9 + 5,lVar12);
      FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_112_0_TypeInfo,plVar9,0);
      FUN_053e3650();
    }
    unaff_x25 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
    FUN_053e521c(unaff_x25,unaff_x24,0);
    uVar6 = FUN_04cb9a10(plVar7,0,0);
    if ((uVar6 & 1) == 0) goto LAB_053cfb70;
    if (plVar7 == (long *)0x0) goto LAB_053cfc70;
    plVar9 = (long *)FUN_04cbb444(plVar7,0);
    uVar6 = FUN_04cb7c3c(plVar9,0,0);
    if (((uVar6 & 1) != 0) ||
       (uVar6 = System_Xml_Schema_XmlSchemaInfo__get_IsUnionType(plVar9), (uVar6 & 1) != 0))
    goto LAB_053cfbd0;
    if ((plVar9 == (long *)0x0) ||
       (lVar12 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240)),
       lVar12 == 0)) goto LAB_053cfc70;
    if (*(long *)(lVar12 + 0x18) != 0) goto LAB_053cfbd0;
    plVar9 = (long *)(**(code **)(*plVar7 + 0x2c8))(plVar7,1,*(undefined8 *)(*plVar7 + 0x2d0));
    uVar6 = FUN_04cb7c3c(plVar9,0,0);
    if ((uVar6 & 1) == 0) {
      if (plVar9 == (long *)0x0) goto LAB_053cfc70;
      uVar6 = FUN_04cb9bec(plVar9,0);
      if (((uVar6 & 1) == 0) ||
         ((uVar6 = FUN_04cb9b7c(plVar9,0), (uVar6 & 1) != 0 &&
          (uVar4 = (**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250)),
          (uVar4 >> 8 & 1) == 0)))) goto LAB_053cfbd0;
    }
    else {
      uVar6 = System_Xml_Schema_XmlSchemaNotation__get_Public(uVar6,unaff_x25,1);
      if ((uVar6 & 1) == 0) goto LAB_053cfbd0;
    }
    if (*(char *)(unaff_x19 + 0x93) == '\0') goto LAB_053cfb70;
    if (unaff_x25 == 0) goto LAB_053cfc70;
    uVar8 = FUN_053e542c(unaff_x25,0);
    if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)PTR_DAT_06322478);
    }
    uVar11 = FUN_053efa38(0);
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
    }
    uVar6 = FUN_04d938a0(uVar8,uVar11,0);
    if ((uVar6 & 1) == 0) goto LAB_053cfb70;
    uVar8 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
    uVar6 = thunk_FUN_04c08854(uVar8,*(undefined8 *)OVRPlugin_OVRP_1_107_0_TypeInfo,0);
    if ((uVar6 & 1) != 0) goto LAB_053cfbd0;
LAB_053cfb70:
    uVar8 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
    uVar8 = FUN_053d6258(uVar8,0);
    if (unaff_x25 == 0) goto LAB_053cfc70;
    FUN_053e5314(unaff_x25,uVar8,0);
LAB_053cfb9c:
    uVar8 = FUN_053e542c(unaff_x25,0);
    uVar4 = FUN_053d6074(uVar8,0);
    FUN_053e53dc(unaff_x25,uVar4 & 1,0);
  } while( true );
}


