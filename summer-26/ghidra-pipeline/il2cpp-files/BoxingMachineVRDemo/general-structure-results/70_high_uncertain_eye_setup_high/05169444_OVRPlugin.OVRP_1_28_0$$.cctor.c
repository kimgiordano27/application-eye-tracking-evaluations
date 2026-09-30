/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$.cctor
ENTRY_POINT: 05169444
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_28_0___cctor(long param_1)

{
  short sVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
    lVar3 = (**(code **)(param_1 + 0x248))();
    if (lVar3 == 0) {
      if (unaff_x21 == 0) {
        unaff_x21 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067634c8);
        FUN_04894d4c(unaff_x21,*(undefined8 *)PTR_DAT_067634b0);
      }
      in_stack_00000020 = 0;
      while( true ) {
        in_stack_00000018 = in_stack_00000020;
        uVar5 = FUN_03dce180(&stack0x00000018,*unaff_x28);
        FUN_04e83184(*unaff_x29,uVar5,0);
        lVar3 = (**(code **)(*unaff_x20 + 0x238))();
        if (lVar3 == 0) break;
        FUN_03dce070(&stack0x00000020,in_stack_00000020._4_4_ + 1,*unaff_x26);
      }
      in_stack_00000018 = in_stack_00000020;
      uVar5 = FUN_03dce180(&stack0x00000018,*unaff_x28);
      lVar3 = FUN_04e83184(*unaff_x29,uVar5,0);
      uVar5 = FUN_04e83184(*(undefined8 *)PTR_DAT_06782718,lVar3,0);
      if (unaff_x21 == 0) {
LAB_05169764:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_048956f0(unaff_x21,uVar5,*(undefined8 *)PTR_DAT_06782550,*(undefined8 *)PTR_DAT_06763498);
      (**(code **)(*unaff_x20 + 0x1f8))();
    }
    uVar4 = thunk_FUN_04e8bd3c(unaff_x23,*unaff_x25,0);
    if ((uVar4 & 1) != 0) {
      return unaff_x21;
    }
    uVar5 = FUN_04e9195c(unaff_x23,1,0);
    FUN_0509917c();
    uVar6 = (**(code **)(*unaff_x19 + 0x238))();
    uVar4 = FUN_050ea5c0(uVar6,0);
    if ((uVar4 & 1) == 0) {
LAB_051696d8:
      FUN_028f4e40();
      (**(code **)(*unaff_x19 + 0x238))();
      thunk_FUN_02dc61f4(PTR_DAT_0677db48);
      uVar5 = FUN_0503c914();
      uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06782720);
      FUN_04e83184(uVar6,uVar5,0);
      uVar5 = FUN_050924a8();
      uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06782728);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar5,uVar6);
    }
    if (unaff_x21 == 0) {
      unaff_x21 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067634c8);
      FUN_04894d4c(unaff_x21,*(undefined8 *)PTR_DAT_067634b0);
    }
    plVar7 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (plVar7 == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      if (plVar7 == (long *)0x0) goto LAB_05169764;
      uVar6 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    }
    uVar5 = FUN_04e8db00(lVar3,*(undefined8 *)PTR_DAT_067646b8,uVar5,0);
    if (unaff_x21 == 0) goto LAB_05169764;
    FUN_048956f0(unaff_x21,uVar5,uVar6,*(undefined8 *)PTR_DAT_06763498);
    unaff_x25 = (undefined8 *)PTR_DAT_06780450;
    while( true ) {
      uVar4 = (**(code **)(*unaff_x19 + 0x288))();
      if ((uVar4 & 1) == 0) {
        return unaff_x21;
      }
      iVar2 = (**(code **)(*unaff_x19 + 0x238))();
      if (iVar2 != 4) {
        if (iVar2 == 5) {
          return unaff_x21;
        }
        if (iVar2 == 0xd) {
          return unaff_x21;
        }
        goto LAB_051696d8;
      }
      plVar7 = (long *)(**(code **)(*unaff_x19 + 0x248))();
      if (plVar7 == (long *)0x0) goto LAB_05169764;
      unaff_x23 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      uVar4 = FUN_050f0eb8(unaff_x23,0);
      if ((uVar4 & 1) != 0) {
        return unaff_x21;
      }
      if (unaff_x23 == 0) goto LAB_05169764;
      sVar1 = FUN_04e87a5c(unaff_x23,0,0);
      if (sVar1 == 0x24) break;
      if (sVar1 != 0x40) {
        return unaff_x21;
      }
      if (unaff_x21 == 0) {
        unaff_x21 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067634c8);
        FUN_04894d4c(unaff_x21,*(undefined8 *)PTR_DAT_067634b0);
      }
      uVar5 = FUN_04e9195c(unaff_x23,1,0);
      FUN_0509917c();
      if (*(int *)(*(long *)PTR_DAT_0677d900 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar6 = FUN_05167dbc();
      if (unaff_x21 == 0) goto LAB_05169764;
      uVar6 = FUN_048956f0(unaff_x21,uVar5,uVar6,*(undefined8 *)PTR_DAT_06763498);
      uVar4 = FUN_0516a624(uVar6,uVar5,&stack0x00000028);
      if ((uVar4 & 1) != 0) {
        if (unaff_x20 == (long *)0x0) goto LAB_05169764;
        (**(code **)(*unaff_x20 + 0x1f8))();
      }
    }
    uVar4 = thunk_FUN_04e8bd3c(unaff_x23,*unaff_x25,0);
    if (((((uVar4 & 1) == 0) &&
         (uVar4 = thunk_FUN_04e8bd3c(unaff_x23,*(undefined8 *)PTR_DAT_06780308,0), (uVar4 & 1) == 0)
         ) && (uVar4 = thunk_FUN_04e8bd3c(unaff_x23,*(undefined8 *)PTR_DAT_06780458,0),
              (uVar4 & 1) == 0)) &&
       ((uVar4 = thunk_FUN_04e8bd3c(unaff_x23,*(undefined8 *)PTR_DAT_0677dbb0,0), (uVar4 & 1) == 0
        && (uVar4 = thunk_FUN_04e8bd3c(unaff_x23,*(undefined8 *)PTR_DAT_0677dba0,0),
           (uVar4 & 1) == 0)))) {
      return unaff_x21;
    }
    if (unaff_x20 == (long *)0x0) goto LAB_05169764;
    param_1 = *unaff_x20;
  } while( true );
}


