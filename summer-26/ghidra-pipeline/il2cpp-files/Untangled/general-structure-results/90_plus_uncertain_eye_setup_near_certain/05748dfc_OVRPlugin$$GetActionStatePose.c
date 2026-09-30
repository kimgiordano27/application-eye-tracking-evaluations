/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 05748dfc
PROGRAM: Untangled-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetActionStatePose(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 extraout_d0;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000018;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1;
  if ((DAT_071c39e4 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d36f38);
    FUN_02f07e70(PTR_DAT_06d03fe0);
    FUN_02f07e70(PTR_DAT_06d020c0);
    FUN_02f07e70(PTR_DAT_06d02200);
    FUN_02f07e70(PTR_DAT_06d06338);
    FUN_02f07e70(PTR_DAT_06d1b6c8);
    FUN_02f07e70(PTR_DAT_06d040e0);
    FUN_02f07e70(PTR_DAT_06d04108);
    FUN_02f07e70(PTR_DAT_06d02bc8);
    FUN_02f07e70(PTR_DAT_06d040b0);
    FUN_02f07e70(PTR_DAT_06d59090);
    FUN_02f07e70(PTR_DAT_06d59088);
    FUN_02f07e70(PTR_DAT_06d02b98);
    FUN_02f07e70(PTR_DAT_06d04190);
    auVar14 = FUN_02f07e70(PTR_DAT_06d15fd8);
    DAT_071c39e4 = 1;
  }
  puVar10 = &uStack_70;
  in_stack_00000018 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  if ((param_4 != 0) && (*(long *)(param_4 + 0x18) != 0)) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar14._8_8_;
    auVar14 = auVar2 << 0x40;
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar7 = thunk_FUN_02ebbee0(*(long *)(param_1 + 0x38),0);
      auVar14 = FUN_0569db74(param_4,uVar7,0);
      plVar9 = auVar14._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auVar14._8_8_;
      auVar14 = auVar3 << 0x40;
      if ((plVar9 != (long *)0x0) &&
         (auVar14 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0)),
         (auVar14._0_8_ & 1) != 0)) {
        uVar13 = *(undefined8 *)(param_1 + 0x38);
        uVar7 = FUN_0569c484(0);
        (**(code **)(*plVar9 + 0x178))(plVar9,param_2,uVar13,uVar7,*(undefined8 *)(*plVar9 + 0x180))
        ;
        puVar6 = PTR_DAT_06d36f38;
        lVar8 = *(long *)PTR_DAT_06d36f38;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar8 = *(long *)puVar6;
        }
        return *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10);
      }
    }
  }
  puVar6 = PTR_DAT_06d03fe0;
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 5:
    plVar9 = *(long **)(param_1 + 0x38);
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    }
    auVar14._8_8_ = plVar9;
    auVar14._0_8_ = plVar9;
    if (param_2 != (long *)0x0) {
      pcVar12 = *(code **)(*param_2 + 0x278);
      uVar7 = *(undefined8 *)(*param_2 + 0x280);
      goto LAB_057494d8;
    }
    break;
  case 6:
    plVar9 = *(long **)(param_1 + 0x38);
    if (plVar9 == (long *)0x0) {
LAB_05749030:
      if (*(int *)(*(long *)PTR_DAT_06d06338 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar7 = FUN_055b5920(0);
      if (*(int *)(*(long *)PTR_DAT_06d02200 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02200);
      }
      auVar14 = FUN_0556b4a4(plVar9,uVar7,0);
      plVar9 = auVar14._0_8_;
      if (param_2 == (long *)0x0) break;
      lVar8 = *param_2;
    }
    else {
      lVar8 = *plVar9;
      if (lVar8 == *(long *)PTR_DAT_06d02bc8) {
        auVar14 = thunk_FUN_02ef195c(plVar9);
        if (param_2 != (long *)0x0) {
          uVar1 = *auVar14._0_8_;
          pcVar12 = *(code **)(*param_2 + 0x3f8);
          uVar7 = *(undefined8 *)(*param_2 + 0x400);
          goto LAB_057491b8;
        }
        break;
      }
      if (lVar8 != *(long *)PTR_DAT_06d040b0) {
        if (lVar8 == *(long *)PTR_DAT_06d04190) {
          auVar14 = thunk_FUN_02ef195c(plVar9);
          if (param_2 == (long *)0x0) break;
          plVar9 = (long *)*auVar14._0_8_;
          pcVar12 = *(code **)(*param_2 + 0x4d8);
          uVar7 = *(undefined8 *)(*param_2 + 0x4e0);
          goto LAB_057494d8;
        }
        if (lVar8 == *(long *)PTR_DAT_06d03fe0) {
          puVar10 = (undefined8 *)thunk_FUN_02ef195c(plVar9);
          uStack_18 = puVar10[1];
          uStack_20 = *puVar10;
          auVar14 = thunk_FUN_02ef1438(*(undefined8 *)puVar6,&uStack_20);
          plVar9 = auVar14._0_8_;
          if (param_2 == (long *)0x0) break;
          pcVar12 = *(code **)(*param_2 + 0x438);
          uVar7 = *(undefined8 *)(*param_2 + 0x440);
          goto LAB_057494d8;
        }
        goto LAB_05749030;
      }
      auVar14 = thunk_FUN_02ef195c(plVar9);
      if (param_2 == (long *)0x0) break;
      lVar8 = *param_2;
      plVar9 = (long *)*auVar14._0_8_;
    }
    pcVar12 = *(code **)(lVar8 + 0x418);
    uVar7 = *(undefined8 *)(lVar8 + 0x420);
LAB_057494d8:
    uVar7 = (*pcVar12)(param_2,plVar9,param_3,uVar7);
    return uVar7;
  case 7:
    plVar9 = *(long **)(param_1 + 0x38);
    if (plVar9 != (long *)0x0) {
      lVar8 = *plVar9;
      if (lVar8 == *(long *)PTR_DAT_06d040e0) {
        auVar14 = thunk_FUN_02ef195c(plVar9);
        if (param_2 != (long *)0x0) {
          uVar7 = *auVar14._0_8_;
          uStack_68 = auVar14._0_8_[1];
          pcVar12 = *(code **)(*param_2 + 0x378);
          uVar13 = *(undefined8 *)(*param_2 + 0x380);
          goto LAB_05749438;
        }
        break;
      }
      if (lVar8 == *(long *)PTR_DAT_06d04108) {
        auVar14 = thunk_FUN_02ef195c(plVar9);
        if (param_2 == (long *)0x0) break;
        lVar8 = *param_2;
        uVar7 = *auVar14._0_8_;
        goto LAB_05749510;
      }
      if (lVar8 == *(long *)PTR_DAT_06d02b98) {
        auVar14 = thunk_FUN_02ef195c(plVar9);
        if (param_2 != (long *)0x0) {
          uVar7 = (**(code **)(*param_2 + 0x3b8))
                            (*auVar14._0_8_,param_2,param_3,*(undefined8 *)(*param_2 + 0x3c0));
          return uVar7;
        }
        break;
      }
    }
    if (*(int *)(*(long *)PTR_DAT_06d06338 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar7 = FUN_055b5920(0);
    if (*(int *)(*(long *)PTR_DAT_06d02200 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02200);
    }
    uVar7 = FUN_0556c208(plVar9,uVar7,0);
    auVar14._8_8_ = extraout_x1;
    auVar14._0_8_ = uVar7;
    if (param_2 != (long *)0x0) {
      lVar8 = *param_2;
      uVar7 = extraout_d0;
LAB_05749510:
      uVar7 = (**(code **)(lVar8 + 0x398))(uVar7,param_2,param_3,*(undefined8 *)(lVar8 + 0x3a0));
      return uVar7;
    }
    break;
  case 8:
    plVar9 = *(long **)(param_1 + 0x38);
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    }
    auVar14._8_8_ = plVar9;
    auVar14._0_8_ = plVar9;
    if (param_2 != (long *)0x0) {
      pcVar12 = *(code **)(*param_2 + 0x488);
      uVar7 = *(undefined8 *)(*param_2 + 0x490);
      goto LAB_057494d8;
    }
    break;
  case 9:
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_06d06338 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar13 = FUN_055b5920(0);
    if (*(int *)(*(long *)PTR_DAT_06d02200 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02200);
    }
    auVar14 = FUN_05568ba4(uVar7,uVar13,0);
    if (param_2 != (long *)0x0) {
      uVar1 = auVar14._0_4_ & 1;
      pcVar12 = *(code **)(*param_2 + 0x2c8);
      uVar7 = *(undefined8 *)(*param_2 + 0x2d0);
LAB_057491b8:
      uVar7 = (*pcVar12)(param_2,uVar1,param_3,uVar7);
      return uVar7;
    }
    break;
  case 10:
    if (param_2 != (long *)0x0) {
      pcVar12 = *(code **)(*param_2 + 0x238);
      uVar7 = *(undefined8 *)(*param_2 + 0x240);
LAB_057491ec:
      uVar7 = (*pcVar12)(param_2,param_3,uVar7);
      return uVar7;
    }
    break;
  case 0xb:
    if (param_2 != (long *)0x0) {
      pcVar12 = *(code **)(*param_2 + 0x528);
      uVar7 = *(undefined8 *)(*param_2 + 0x530);
      goto LAB_057491ec;
    }
    break;
  case 0xc:
    plVar9 = *(long **)(param_1 + 0x38);
    if ((plVar9 == (long *)0x0) || (*plVar9 != *(long *)PTR_DAT_06d1b6c8)) {
      if (*(int *)(*(long *)PTR_DAT_06d06338 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar7 = FUN_055b5920(0);
      if (*(int *)(*(long *)PTR_DAT_06d02200 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02200);
      }
      auVar14 = FUN_0556c8b4(plVar9,uVar7,0);
      plVar9 = auVar14._0_8_;
      if (param_2 != (long *)0x0) {
        pcVar12 = *(code **)(*param_2 + 0x338);
        uVar7 = *(undefined8 *)(*param_2 + 0x340);
        goto LAB_057494d8;
      }
    }
    else {
      auVar14 = thunk_FUN_02ef195c(plVar9);
      if (param_2 != (long *)0x0) {
        uVar7 = *auVar14._0_8_;
        uStack_68 = auVar14._0_8_[1];
        pcVar12 = *(code **)(*param_2 + 0x358);
        uVar13 = *(undefined8 *)(*param_2 + 0x360);
        goto LAB_05749438;
      }
    }
    break;
  case 0xd:
    plVar9 = *(long **)(param_1 + 0x38);
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    }
    auVar14._8_8_ = plVar9;
    auVar14._0_8_ = plVar9;
    if (param_2 != (long *)0x0) {
      pcVar12 = *(code **)(*param_2 + 0x288);
      uVar7 = *(undefined8 *)(*param_2 + 0x290);
      goto LAB_057494d8;
    }
    break;
  case 0xe:
    if (param_2 != (long *)0x0) {
      lVar8 = *(long *)(param_1 + 0x38);
      if (lVar8 == 0) {
        plVar9 = (long *)0x0;
      }
      else {
        uVar7 = *(undefined8 *)PTR_DAT_06d020c0;
        plVar9 = (long *)thunk_FUN_02ef170c(lVar8,uVar7);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(lVar8,uVar7);
        }
      }
      pcVar12 = *(code **)(*param_2 + 0x308);
      uVar7 = *(undefined8 *)(*param_2 + 0x310);
      goto LAB_057494d8;
    }
    break;
  case 0xf:
    plVar9 = *(long **)(param_1 + 0x38);
    if (plVar9 == (long *)0x0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar14._8_8_;
      auVar14 = auVar4 << 0x40;
    }
    else {
      lVar8 = *(long *)(*(long *)PTR_DAT_06d59090 + 0x40);
      if (*plVar9 != lVar8) {
LAB_057495b0:
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(plVar9,lVar8);
      }
      auVar14 = thunk_FUN_02ef1964(plVar9,*(long *)PTR_DAT_06d59090,&uStack_40);
    }
    if (param_2 != (long *)0x0) {
      uStack_58 = uStack_38;
      uStack_60 = uStack_40;
      uStack_50 = uStack_30;
      uStack_18 = uStack_38;
      uStack_20 = uStack_40;
      uStack_10 = uStack_30;
      uVar7 = (**(code **)(*param_2 + 1000))
                        (param_2,&uStack_20,param_3,*(undefined8 *)(*param_2 + 0x3f0));
      return uVar7;
    }
    break;
  case 0x10:
    if (param_2 != (long *)0x0) {
      plVar9 = *(long **)(param_1 + 0x38);
      if (plVar9 != (long *)0x0) {
        lVar8 = *(long *)PTR_DAT_06d15fd8;
        if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8)
           ) goto LAB_057495b0;
      }
      pcVar12 = *(code **)(*param_2 + 0x4f8);
      uVar7 = *(undefined8 *)(*param_2 + 0x500);
      goto LAB_057494d8;
    }
    break;
  case 0x11:
    plVar9 = *(long **)(param_1 + 0x38);
    if (plVar9 == (long *)0x0) {
      uStack_68 = 0;
      puVar10 = &stack0x00000018;
      in_stack_00000018 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auVar14._8_8_;
      auVar14 = auVar5 << 0x40;
    }
    else {
      lVar8 = *(long *)(*(long *)PTR_DAT_06d59088 + 0x40);
      if (*plVar9 != lVar8) goto LAB_057495b0;
      auVar14 = thunk_FUN_02ef1964(plVar9,*(long *)PTR_DAT_06d59088,puVar10);
    }
    if (param_2 != (long *)0x0) {
      uVar7 = *puVar10;
      pcVar12 = *(code **)(*param_2 + 0x4a8);
      uVar13 = *(undefined8 *)(*param_2 + 0x4b0);
LAB_05749438:
      uVar7 = (*pcVar12)(param_2,uVar7,uStack_68,param_3,uVar13);
      return uVar7;
    }
    break;
  default:
    uStack_20 = CONCAT44(uStack_20._4_4_,*(undefined4 *)(param_1 + 0x30));
    uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d56300);
    uVar7 = thunk_FUN_02ef1438(uVar7,&uStack_20);
    uVar13 = thunk_FUN_02f239f0(PTR_DAT_06d18c40);
    uVar11 = thunk_FUN_02f239f0(PTR_DAT_06d56668);
    uVar7 = FUN_056deff8(uVar13,uVar7,uVar11,0);
    uVar13 = thunk_FUN_02f239f0(PTR_DAT_06d592c8);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar7,uVar13);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0(auVar14._0_8_,auVar14._8_8_);
}


