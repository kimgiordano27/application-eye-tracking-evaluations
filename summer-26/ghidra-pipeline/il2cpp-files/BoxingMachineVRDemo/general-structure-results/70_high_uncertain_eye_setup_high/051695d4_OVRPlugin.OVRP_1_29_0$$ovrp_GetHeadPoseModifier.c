/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$ovrp_GetHeadPoseModifier
ENTRY_POINT: 051695d4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_29_0__ovrp_GetHeadPoseModifier(ulong param_1)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
    if ((param_1 & 1) == 0) {
LAB_051696d8:
      FUN_028f4e40();
      (**(code **)(*unaff_x19 + 0x238))();
      thunk_FUN_02dc61f4(PTR_DAT_0677db48);
      uVar7 = FUN_0503c914();
      uVar8 = thunk_FUN_02dc61f4(PTR_DAT_06782720);
      FUN_04e83184(uVar8,uVar7,0);
      uVar7 = FUN_050924a8();
      uVar8 = thunk_FUN_02dc61f4(PTR_DAT_06782728);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar7,uVar8);
    }
    if (unaff_x21 == 0) {
      unaff_x21 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067634c8);
      FUN_04894d4c(unaff_x21,*(undefined8 *)PTR_DAT_067634b0);
    }
    plVar6 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (plVar6 == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      if (plVar6 == (long *)0x0) goto LAB_05169764;
      uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    }
    uVar8 = FUN_04e8db00(unaff_x24,*(undefined8 *)PTR_DAT_067646b8,unaff_x23,0);
    if (unaff_x21 == 0) {
LAB_05169764:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_048956f0(unaff_x21,uVar8,uVar7,*(undefined8 *)PTR_DAT_06763498);
    puVar1 = PTR_DAT_06780450;
    while( true ) {
      uVar9 = (**(code **)(*unaff_x19 + 0x288))();
      if ((uVar9 & 1) == 0) {
        return unaff_x21;
      }
      iVar3 = (**(code **)(*unaff_x19 + 0x238))();
      if (iVar3 != 4) {
        if (iVar3 == 5) {
          return unaff_x21;
        }
        if (iVar3 == 0xd) {
          return unaff_x21;
        }
        goto LAB_051696d8;
      }
      plVar6 = (long *)(**(code **)(*unaff_x19 + 0x248))();
      if (plVar6 == (long *)0x0) goto LAB_05169764;
      lVar4 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      uVar9 = FUN_050f0eb8(lVar4,0);
      if ((uVar9 & 1) != 0) {
        return unaff_x21;
      }
      if (lVar4 == 0) goto LAB_05169764;
      sVar2 = FUN_04e87a5c(lVar4,0,0);
      if (sVar2 == 0x24) break;
      if (sVar2 != 0x40) {
        return unaff_x21;
      }
      if (unaff_x21 == 0) {
        unaff_x21 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067634c8);
        FUN_04894d4c(unaff_x21,*(undefined8 *)PTR_DAT_067634b0);
      }
      uVar7 = FUN_04e9195c(lVar4,1,0);
      FUN_0509917c();
      if (*(int *)(*(long *)PTR_DAT_0677d900 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar8 = FUN_05167dbc();
      if (unaff_x21 == 0) goto LAB_05169764;
      uVar8 = FUN_048956f0(unaff_x21,uVar7,uVar8,*(undefined8 *)PTR_DAT_06763498);
      uVar9 = FUN_0516a624(uVar8,uVar7,&stack0x00000028);
      if ((uVar9 & 1) != 0) {
        if (unaff_x20 == (long *)0x0) goto LAB_05169764;
        (**(code **)(*unaff_x20 + 0x1f8))();
      }
    }
    uVar9 = thunk_FUN_04e8bd3c(lVar4,*(undefined8 *)puVar1,0);
    if (((((uVar9 & 1) == 0) &&
         (uVar9 = thunk_FUN_04e8bd3c(lVar4,*(undefined8 *)PTR_DAT_06780308,0), (uVar9 & 1) == 0)) &&
        (uVar9 = thunk_FUN_04e8bd3c(lVar4,*(undefined8 *)PTR_DAT_06780458,0), (uVar9 & 1) == 0)) &&
       ((uVar9 = thunk_FUN_04e8bd3c(lVar4,*(undefined8 *)PTR_DAT_0677dbb0,0), (uVar9 & 1) == 0 &&
        (uVar9 = thunk_FUN_04e8bd3c(lVar4,*(undefined8 *)PTR_DAT_0677dba0,0), (uVar9 & 1) == 0)))) {
      return unaff_x21;
    }
    if (unaff_x20 == (long *)0x0) goto LAB_05169764;
    unaff_x24 = (**(code **)(*unaff_x20 + 0x248))();
    if (unaff_x24 == 0) {
      if (unaff_x21 == 0) {
        unaff_x21 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067634c8);
        FUN_04894d4c(unaff_x21,*(undefined8 *)PTR_DAT_067634b0);
      }
      in_stack_00000020 = 0;
      while( true ) {
        in_stack_00000018 = in_stack_00000020;
        uVar7 = FUN_03dce180(&stack0x00000018,*unaff_x28);
        FUN_04e83184(*unaff_x29,uVar7,0);
        lVar5 = (**(code **)(*unaff_x20 + 0x238))();
        if (lVar5 == 0) break;
        FUN_03dce070(&stack0x00000020,in_stack_00000020._4_4_ + 1,*unaff_x26);
      }
      in_stack_00000018 = in_stack_00000020;
      uVar7 = FUN_03dce180(&stack0x00000018,*unaff_x28);
      unaff_x24 = FUN_04e83184(*unaff_x29,uVar7,0);
      uVar7 = FUN_04e83184(*(undefined8 *)PTR_DAT_06782718,unaff_x24,0);
      if (unaff_x21 == 0) goto LAB_05169764;
      FUN_048956f0(unaff_x21,uVar7,*(undefined8 *)PTR_DAT_06782550,*(undefined8 *)PTR_DAT_06763498);
      (**(code **)(*unaff_x20 + 0x1f8))();
    }
    uVar9 = thunk_FUN_04e8bd3c(lVar4,*(undefined8 *)puVar1,0);
    if ((uVar9 & 1) != 0) {
      return unaff_x21;
    }
    unaff_x23 = FUN_04e9195c(lVar4,1,0);
    FUN_0509917c();
    uVar7 = (**(code **)(*unaff_x19 + 0x238))();
    param_1 = FUN_050ea5c0(uVar7,0);
  } while( true );
}


