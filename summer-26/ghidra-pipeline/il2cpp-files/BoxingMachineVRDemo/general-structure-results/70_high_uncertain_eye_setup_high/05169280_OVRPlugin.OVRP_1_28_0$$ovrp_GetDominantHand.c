/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_GetDominantHand
ENTRY_POINT: 05169280
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_28_0__ovrp_GetDominantHand(long param_1)

{
  short sVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  while (iVar2 = (**(code **)(param_1 + 0x238))(), iVar2 == 4) {
    plVar3 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (plVar3 == (long *)0x0) {
LAB_05169764:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar5 = FUN_050f0eb8(lVar4,0);
    if ((uVar5 & 1) != 0) {
      return unaff_x21;
    }
    if (lVar4 == 0) goto LAB_05169764;
    sVar1 = FUN_04e87a5c(lVar4,0,0);
    if (sVar1 == 0x24) {
      uVar5 = thunk_FUN_04e8bd3c(lVar4,*unaff_x25,0);
      if (((((uVar5 & 1) == 0) &&
           (uVar5 = thunk_FUN_04e8bd3c(lVar4,*(undefined8 *)PTR_DAT_06780308,0), (uVar5 & 1) == 0))
          && (uVar5 = thunk_FUN_04e8bd3c(lVar4,*(undefined8 *)PTR_DAT_06780458,0), (uVar5 & 1) == 0)
          ) && ((uVar5 = thunk_FUN_04e8bd3c(lVar4,*(undefined8 *)PTR_DAT_0677dbb0,0),
                (uVar5 & 1) == 0 &&
                (uVar5 = thunk_FUN_04e8bd3c(lVar4,*(undefined8 *)PTR_DAT_0677dba0,0),
                (uVar5 & 1) == 0)))) {
        return unaff_x21;
      }
      if (unaff_x20 == (long *)0x0) goto LAB_05169764;
      lVar8 = (**(code **)(*unaff_x20 + 0x248))();
      if (lVar8 == 0) {
        if (unaff_x21 == 0) {
          unaff_x21 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067634c8);
          FUN_04894d4c(unaff_x21,*(undefined8 *)PTR_DAT_067634b0);
        }
        in_stack_00000020 = 0;
        while( true ) {
          in_stack_00000018 = in_stack_00000020;
          uVar6 = FUN_03dce180(&stack0x00000018,*unaff_x28);
          FUN_04e83184(*unaff_x29,uVar6,0);
          lVar8 = (**(code **)(*unaff_x20 + 0x238))();
          if (lVar8 == 0) break;
          FUN_03dce070(&stack0x00000020,in_stack_00000020._4_4_ + 1,*unaff_x26);
        }
        in_stack_00000018 = in_stack_00000020;
        uVar6 = FUN_03dce180(&stack0x00000018,*unaff_x28);
        lVar8 = FUN_04e83184(*unaff_x29,uVar6,0);
        uVar6 = FUN_04e83184(*(undefined8 *)PTR_DAT_06782718,lVar8,0);
        if (unaff_x21 == 0) goto LAB_05169764;
        FUN_048956f0(unaff_x21,uVar6,*(undefined8 *)PTR_DAT_06782550,*(undefined8 *)PTR_DAT_06763498
                    );
        (**(code **)(*unaff_x20 + 0x1f8))();
      }
      uVar5 = thunk_FUN_04e8bd3c(lVar4,*unaff_x25,0);
      if ((uVar5 & 1) != 0) {
        return unaff_x21;
      }
      uVar6 = FUN_04e9195c(lVar4,1,0);
      FUN_0509917c();
      uVar7 = (**(code **)(*unaff_x19 + 0x238))();
      uVar5 = FUN_050ea5c0(uVar7,0);
      if ((uVar5 & 1) == 0) goto LAB_051696d8;
      if (unaff_x21 == 0) {
        unaff_x21 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067634c8);
        FUN_04894d4c(unaff_x21,*(undefined8 *)PTR_DAT_067634b0);
      }
      plVar3 = (long *)(**(code **)(*unaff_x19 + 0x248))();
      if (plVar3 == (long *)0x0) {
        uVar7 = 0;
      }
      else {
        if (plVar3 == (long *)0x0) goto LAB_05169764;
        uVar7 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      }
      uVar6 = FUN_04e8db00(lVar8,*(undefined8 *)PTR_DAT_067646b8,uVar6,0);
      if (unaff_x21 == 0) goto LAB_05169764;
      FUN_048956f0(unaff_x21,uVar6,uVar7,*(undefined8 *)PTR_DAT_06763498);
      unaff_x25 = (undefined8 *)PTR_DAT_06780450;
    }
    else {
      if (sVar1 != 0x40) {
        return unaff_x21;
      }
      if (unaff_x21 == 0) {
        unaff_x21 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067634c8);
        FUN_04894d4c(unaff_x21,*(undefined8 *)PTR_DAT_067634b0);
      }
      uVar6 = FUN_04e9195c(lVar4,1,0);
      FUN_0509917c();
      if (*(int *)(*(long *)PTR_DAT_0677d900 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = FUN_05167dbc();
      if (unaff_x21 == 0) goto LAB_05169764;
      uVar7 = FUN_048956f0(unaff_x21,uVar6,uVar7,*(undefined8 *)PTR_DAT_06763498);
      uVar5 = FUN_0516a624(uVar7,uVar6,&stack0x00000028);
      if ((uVar5 & 1) != 0) {
        if (unaff_x20 == (long *)0x0) goto LAB_05169764;
        (**(code **)(*unaff_x20 + 0x1f8))();
      }
    }
    uVar5 = (**(code **)(*unaff_x19 + 0x288))();
    if ((uVar5 & 1) == 0) {
      return unaff_x21;
    }
    param_1 = *unaff_x19;
  }
  if ((iVar2 == 5) || (iVar2 == 0xd)) {
    return unaff_x21;
  }
LAB_051696d8:
  FUN_028f4e40();
  (**(code **)(*unaff_x19 + 0x238))();
  thunk_FUN_02dc61f4(PTR_DAT_0677db48);
  uVar6 = FUN_0503c914();
  uVar7 = thunk_FUN_02dc61f4(PTR_DAT_06782720);
  FUN_04e83184(uVar7,uVar6,0);
  uVar6 = FUN_050924a8();
  uVar7 = thunk_FUN_02dc61f4(PTR_DAT_06782728);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar6,uVar7);
}


