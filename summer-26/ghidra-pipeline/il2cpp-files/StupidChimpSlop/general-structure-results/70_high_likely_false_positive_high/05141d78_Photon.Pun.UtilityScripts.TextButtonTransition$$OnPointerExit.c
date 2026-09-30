/*
FUNCTION_NAME: Photon.Pun.UtilityScripts.TextButtonTransition$$OnPointerExit
ENTRY_POINT: 05141d78
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void Photon_Pun_UtilityScripts_TextButtonTransition__OnPointerExit
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 extraout_x1;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar11;
  long *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x25;
  long unaff_x29;
  long extraout_d0;
  undefined1 auVar12 [16];
  long *aplStack_30 [2];
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  auVar12._8_8_ = param_3;
  auVar12._0_8_ = param_2;
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  if ((*(byte *)(unaff_x23 + 0xbe8) & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_0664a610);
    FUN_02d4dc40(PTR_DAT_0664a388);
    FUN_02d4dc40(PTR_DAT_06646288);
    FUN_02d4dc40(PTR_DAT_06649fa0);
    FUN_02d4dc40(PTR_DAT_06649f98);
    FUN_02d4dc40(PTR_DAT_0664a3c0);
    FUN_02d4dc40(PTR_DAT_06649f60);
    FUN_02d4dc40(PlayFab_ClientModels_AcceptTradeResponse_var);
    FUN_02d4dc40(PlayFab_ClientModels_AcceptTradeRequest_var);
    auVar12 = FUN_02d4dc40(PTR_DAT_06647c70);
    *(undefined1 *)(unaff_x23 + 0xbe8) = 1;
  }
                    /* try { // try from 05141e14 to 05241e1b has its CatchHandler @ 05142118 */
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
                    /* try { // try from 05141e1c to 05241e27 has its CatchHandler @ 05142114 */
  *(undefined4 *)(unaff_x29 + -0x30) = 0;
  if ((unaff_x22 != 0) && (*(long *)(unaff_x22 + 0x18) != 0)) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = auVar12._8_8_;
    auVar12 = auVar1 << 0x40;
    if (*(long *)(param_2 + 0x38) == 0) goto LAB_05141eb4;
    thunk_FUN_02d5dae8(*(long *)(param_2 + 0x38),0);
    auVar12 = FUN_0509933c();
    plVar5 = auVar12._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar12._8_8_;
    auVar12 = auVar2 << 0x40;
    if ((plVar5 == (long *)0x0) ||
       (auVar12 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0)),
       (auVar12._0_8_ & 1) == 0)) goto LAB_05141eb4;
    FUN_05097c30(0);
    (**(code **)(*plVar5 + 0x178))(plVar5);
    puVar3 = PTR_DAT_0664a610;
    lVar4 = *(long *)PTR_DAT_0664a610;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar4 = *(long *)puVar3;
    }
    plVar5 = *(long **)(*(long *)(lVar4 + 0xb8) + 0x10);
LAB_051423ac:
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
    goto LAB_051426b8;
  }
LAB_05141eb4:
  puVar3 = PTR_DAT_0664a388;
  plVar5 = auVar12._0_8_;
  switch(*(undefined4 *)(param_2 + 0x30)) {
  case 5:
    plVar5 = *(long **)(param_2 + 0x38);
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    }
    auVar12._8_8_ = plVar5;
    auVar12._0_8_ = plVar5;
    if (unaff_x20 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*unaff_x20 + 0x278);
LAB_05142400:
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
LAB_05142410:
                    /* WARNING: Could not recover jumptable at 0x05142430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      goto LAB_051426b8;
    }
    break;
  case 6:
    plVar5 = *(long **)(param_2 + 0x38);
    if (plVar5 == (long *)0x0) {
LAB_051421ec:
      if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar7 = FUN_04f9d780(0);
      if (*(int *)(*(long *)PTR_DAT_06649fa0 + 0xe4) == 0) {
        thunk_FUN_02dabd98(*(long *)PTR_DAT_06649fa0);
      }
      auVar12 = FUN_04f7a740(plVar5,uVar7,0);
      plVar5 = auVar12._0_8_;
      if (unaff_x20 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*unaff_x20 + 0x418);
LAB_0514224c:
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) goto LAB_05142410;
        goto LAB_051426b8;
      }
    }
    else {
      lVar4 = *plVar5;
      if (lVar4 == *(long *)(PTR_DAT_066462a0 + 0x48)) {
        auVar12 = thunk_FUN_02d8a780(plVar5);
        plVar5 = auVar12._0_8_;
        if (unaff_x20 != (long *)0x0) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*unaff_x20 + 0x3f8);
          if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) goto LAB_05141fc0;
          goto LAB_051426b8;
        }
      }
      else if (lVar4 == *(long *)(PTR_DAT_066462a0 + 0x68)) {
        auVar12 = FUN_0291edf8(plVar5);
        plVar5 = auVar12._0_8_;
        if (unaff_x20 != (long *)0x0) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*unaff_x20 + 0x418);
          goto LAB_05142400;
        }
      }
      else if (lVar4 == *(long *)(PTR_DAT_066462a0 + 0x70)) {
        auVar12 = FUN_0291edf8(plVar5);
        plVar5 = auVar12._0_8_;
        if (unaff_x20 != (long *)0x0) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*unaff_x20 + 0x4d8);
          goto LAB_05142400;
        }
      }
      else {
        if (lVar4 != *(long *)PTR_DAT_0664a388) goto LAB_051421ec;
        puVar6 = (undefined8 *)FUN_0291edf8(plVar5);
        uVar7 = *(undefined8 *)puVar3;
        uVar9 = puVar6[1];
        uVar8 = *puVar6;
        *(undefined8 *)(unaff_x29 + -0x18) = uVar9;
        *(undefined8 *)(unaff_x29 + -0x20) = uVar8;
        *(undefined8 *)(unaff_x29 + -0x48) = uVar9;
        *(undefined8 *)(unaff_x29 + -0x50) = uVar8;
        auVar12 = thunk_FUN_02d8a270(uVar7,unaff_x29 + -0x50);
        if (unaff_x20 != (long *)0x0) {
          plVar5 = (long *)(**(code **)(*unaff_x20 + 0x438))();
          goto LAB_051423ac;
        }
      }
    }
    break;
  case 7:
    plVar5 = *(long **)(param_2 + 0x38);
    if (plVar5 == (long *)0x0) {
LAB_051420a4:
      if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar7 = FUN_04f9d780(0);
      if (*(int *)(*(long *)PTR_DAT_06649fa0 + 0xe4) == 0) {
        thunk_FUN_02dabd98(*(long *)PTR_DAT_06649fa0);
      }
      plVar5 = (long *)FUN_04f7b4cc(plVar5,uVar7,0);
      auVar12._8_8_ = extraout_x1;
      auVar12._0_8_ = plVar5;
      if (unaff_x20 != (long *)0x0) {
        lVar11 = *unaff_x20;
        lVar4 = extraout_d0;
LAB_051424e8:
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Could not recover jumptable at 0x05142520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar11 + 0x398))(lVar4);
          return;
        }
        goto LAB_051426b8;
      }
    }
    else {
      lVar4 = *plVar5;
      if (lVar4 == *(long *)PTR_DAT_06649f60) {
        auVar12 = thunk_FUN_02d8a780(plVar5);
        plVar5 = auVar12._0_8_;
        if (unaff_x20 != (long *)0x0) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*unaff_x20 + 0x378);
          goto LAB_05142470;
        }
      }
      else if (lVar4 == *(long *)(PTR_DAT_066462a0 + 0x80)) {
        auVar12 = FUN_0291edf8(plVar5);
        plVar5 = auVar12._0_8_;
        if (unaff_x20 != (long *)0x0) {
          lVar11 = *unaff_x20;
          lVar4 = *plVar5;
          goto LAB_051424e8;
        }
      }
      else {
        if (lVar4 != *(long *)(PTR_DAT_066462a0 + 0x78)) goto LAB_051420a4;
        auVar12 = FUN_0291edf8(plVar5);
        plVar5 = auVar12._0_8_;
        if (unaff_x20 != (long *)0x0) {
          if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Could not recover jumptable at 0x05142590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*unaff_x20 + 0x3b8))((int)*plVar5);
            return;
          }
          goto LAB_051426b8;
        }
      }
    }
    break;
  case 8:
    plVar5 = *(long **)(param_2 + 0x38);
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    }
    auVar12._8_8_ = plVar5;
    auVar12._0_8_ = plVar5;
    if (unaff_x20 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*unaff_x20 + 0x488);
      goto LAB_05142400;
    }
    break;
  case 9:
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar8 = FUN_04f9d780(0);
    if (*(int *)(*(long *)PTR_DAT_06649fa0 + 0xe4) == 0) {
      thunk_FUN_02dabd98(*(long *)PTR_DAT_06649fa0);
    }
    auVar12 = FUN_04f77e0c(uVar7,uVar8,0);
    plVar5 = auVar12._0_8_;
    if (unaff_x20 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*unaff_x20 + 0x2c8);
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
LAB_05141fc0:
                    /* WARNING: Could not recover jumptable at 0x05141fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      goto LAB_051426b8;
    }
    break;
  case 10:
    if (unaff_x20 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*unaff_x20 + 0x238);
LAB_05142288:
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Could not recover jumptable at 0x051422b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      goto LAB_051426b8;
    }
    break;
  case 0xb:
    if (unaff_x20 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*unaff_x20 + 0x528);
      goto LAB_05142288;
    }
    break;
  case 0xc:
    plVar5 = *(long **)(param_2 + 0x38);
    if ((plVar5 == (long *)0x0) || (*plVar5 != *(long *)PTR_DAT_0664a3c0)) {
      if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar7 = FUN_04f9d780(0);
      if (*(int *)(*(long *)PTR_DAT_06649fa0 + 0xe4) == 0) {
        thunk_FUN_02dabd98(*(long *)PTR_DAT_06649fa0);
      }
      auVar12 = FUN_04f7bb7c(plVar5,uVar7,0);
      plVar5 = auVar12._0_8_;
      if (unaff_x20 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*unaff_x20 + 0x338);
        goto LAB_0514224c;
      }
    }
    else {
      auVar12 = thunk_FUN_02d8a780(plVar5);
      plVar5 = auVar12._0_8_;
      if (unaff_x20 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*unaff_x20 + 0x358);
LAB_05142470:
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Could not recover jumptable at 0x051424a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
        goto LAB_051426b8;
      }
    }
    break;
  case 0xd:
    plVar5 = *(long **)(param_2 + 0x38);
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    }
    auVar12._8_8_ = plVar5;
    auVar12._0_8_ = plVar5;
    if (unaff_x20 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*unaff_x20 + 0x288);
      goto LAB_05142400;
    }
    break;
  case 0xe:
    if (unaff_x20 != (long *)0x0) {
      lVar4 = *(long *)(param_2 + 0x38);
      if (lVar4 != 0) {
        uVar7 = *(undefined8 *)PTR_DAT_06646288;
        plVar5 = (long *)thunk_FUN_02d8a53c(lVar4,uVar7);
        if (plVar5 == (long *)0x0) {
          if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4e268(lVar4,uVar7);
          }
          goto LAB_051426b8;
        }
      }
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*unaff_x20 + 0x308);
      goto LAB_05142400;
    }
    break;
  case 0xf:
    plVar5 = *(long **)(param_2 + 0x38);
    auVar12._8_8_ = auVar12._8_8_;
    auVar12._0_8_ = plVar5;
    if (plVar5 == (long *)0x0) {
      *(undefined8 *)(unaff_x29 + -0x40) = 0;
      *(undefined8 *)(unaff_x29 + -0x38) = 0;
      *(undefined4 *)(unaff_x29 + -0x30) = 0;
    }
    else {
      if (*plVar5 != *(long *)(*(long *)PlayFab_ClientModels_AcceptTradeResponse_var + 0x40)) {
LAB_05142610:
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4e268();
        }
        goto LAB_051426b8;
      }
      auVar12 = thunk_FUN_02d8a788(plVar5,*(long *)PlayFab_ClientModels_AcceptTradeResponse_var,
                                   &uStack_20);
      *(undefined8 *)(unaff_x29 + -0x38) = uStack_18;
      *(undefined8 *)(unaff_x29 + -0x40) = uStack_20;
      *(undefined4 *)(unaff_x29 + -0x30) = uStack_10;
    }
    if (unaff_x20 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*unaff_x20 + 1000);
      *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x38);
      *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x40);
      *(undefined4 *)(unaff_x29 + -0x10) = *(undefined4 *)(unaff_x29 + -0x30);
      plVar5 = (long *)(*UNRECOVERED_JUMPTABLE_00)();
      goto LAB_051423ac;
    }
    break;
  case 0x10:
    if (unaff_x20 != (long *)0x0) {
      plVar10 = *(long **)(param_2 + 0x38);
      if (plVar10 != (long *)0x0) {
        lVar4 = *(long *)PTR_DAT_06647c70;
        if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4
           )) {
          if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4e268(plVar10,lVar4);
          }
          goto LAB_051426b8;
        }
      }
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*unaff_x20 + 0x4f8);
      goto LAB_05142400;
    }
    break;
  case 0x11:
    plVar5 = *(long **)(param_2 + 0x38);
    if (plVar5 == (long *)0x0) {
      aplStack_30[0] = (long *)0x0;
      uVar7 = 0;
    }
    else {
      if (*plVar5 != *(long *)(*(long *)PlayFab_ClientModels_AcceptTradeRequest_var + 0x40))
      goto LAB_05142610;
      uVar7 = thunk_FUN_02d8a788(plVar5,*(long *)PlayFab_ClientModels_AcceptTradeRequest_var,
                                 aplStack_30);
    }
    auVar12._8_8_ = aplStack_30[0];
    auVar12._0_8_ = uVar7;
    if (unaff_x20 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*unaff_x20 + 0x4a8))();
      goto LAB_051423ac;
    }
    break;
  default:
    *(undefined4 *)(unaff_x29 + -0x20) = *(undefined4 *)(param_2 + 0x30);
    uVar7 = thunk_FUN_02db45e8(PTR_DAT_0665ea88);
    uVar7 = thunk_FUN_02d8a270(uVar7,unaff_x29 + -0x20);
    uVar8 = thunk_FUN_02db45e8(PTR_DAT_0665d940);
    uVar9 = thunk_FUN_02db45e8(PTR_DAT_0665ee08);
    uVar7 = FUN_050da2e0(uVar8,uVar7,uVar9,0);
    plVar5 = (long *)thunk_FUN_02db45e8(PlayFab_AuthenticationModels_AuthenticateCustomIdResult_var)
    ;
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar7,plVar5);
    }
    goto LAB_051426b8;
  }
  plVar5 = auVar12._0_8_;
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8(plVar5,auVar12._8_8_);
  }
LAB_051426b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar5);
}


