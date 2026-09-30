/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_SendEvent
ENTRY_POINT: 051692fc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long OVRPlugin_OVRP_1_28_0__ovrp_SendEvent(undefined **param_1)

{
  short sVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x051692fc:
  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)param_1[0x99]);
  FUN_04894d4c(lVar4,*(undefined8 *)PTR_DAT_067634b0);
LAB_0516931c:
  uVar5 = FUN_04e9195c(unaff_x23,1,0);
  FUN_0509917c();
  if (*(int *)(*(long *)PTR_DAT_0677d900 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar6 = FUN_05167dbc();
  if (lVar4 == 0) {
LAB_05169764:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar6 = FUN_048956f0(lVar4,uVar5,uVar6,*(undefined8 *)PTR_DAT_06763498);
  uVar7 = FUN_0516a624(uVar6,uVar5,&stack0x00000028);
  if ((uVar7 & 1) != 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_05169764;
    (**(code **)(*unaff_x20 + 0x1f8))();
  }
  do {
    uVar7 = (**(code **)(*unaff_x19 + 0x288))();
    if ((uVar7 & 1) == 0) {
      return lVar4;
    }
    iVar2 = (**(code **)(*unaff_x19 + 0x238))();
    if (iVar2 != 4) {
      if (iVar2 == 5) {
        return lVar4;
      }
      if (iVar2 == 0xd) {
        return lVar4;
      }
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
    plVar3 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (plVar3 == (long *)0x0) goto LAB_05169764;
    unaff_x23 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar7 = FUN_050f0eb8(unaff_x23,0);
    if ((uVar7 & 1) != 0) {
      return lVar4;
    }
    if (unaff_x23 == 0) goto LAB_05169764;
    sVar1 = FUN_04e87a5c(unaff_x23,0,0);
    if (sVar1 != 0x24) break;
    uVar7 = thunk_FUN_04e8bd3c(unaff_x23,*unaff_x25,0);
    if (((((uVar7 & 1) == 0) &&
         (uVar7 = thunk_FUN_04e8bd3c(unaff_x23,*(undefined8 *)PTR_DAT_06780308,0), (uVar7 & 1) == 0)
         ) && (uVar7 = thunk_FUN_04e8bd3c(unaff_x23,*(undefined8 *)PTR_DAT_06780458,0),
              (uVar7 & 1) == 0)) &&
       ((uVar7 = thunk_FUN_04e8bd3c(unaff_x23,*(undefined8 *)PTR_DAT_0677dbb0,0), (uVar7 & 1) == 0
        && (uVar7 = thunk_FUN_04e8bd3c(unaff_x23,*(undefined8 *)PTR_DAT_0677dba0,0),
           (uVar7 & 1) == 0)))) {
      return lVar4;
    }
    if (unaff_x20 == (long *)0x0) goto LAB_05169764;
    lVar8 = (**(code **)(*unaff_x20 + 0x248))();
    if (lVar8 == 0) {
      if (lVar4 == 0) {
        lVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067634c8);
        FUN_04894d4c(lVar4,*(undefined8 *)PTR_DAT_067634b0);
      }
      in_stack_00000020 = 0;
      while( true ) {
        in_stack_00000018 = in_stack_00000020;
        uVar5 = FUN_03dce180(&stack0x00000018,*unaff_x28);
        FUN_04e83184(*unaff_x29,uVar5,0);
        lVar8 = (**(code **)(*unaff_x20 + 0x238))();
        if (lVar8 == 0) break;
        FUN_03dce070(&stack0x00000020,in_stack_00000020._4_4_ + 1,*unaff_x26);
      }
      in_stack_00000018 = in_stack_00000020;
      uVar5 = FUN_03dce180(&stack0x00000018,*unaff_x28);
      lVar8 = FUN_04e83184(*unaff_x29,uVar5,0);
      uVar5 = FUN_04e83184(*(undefined8 *)PTR_DAT_06782718,lVar8,0);
      if (lVar4 == 0) goto LAB_05169764;
      FUN_048956f0(lVar4,uVar5,*(undefined8 *)PTR_DAT_06782550,*(undefined8 *)PTR_DAT_06763498);
      (**(code **)(*unaff_x20 + 0x1f8))();
    }
    uVar7 = thunk_FUN_04e8bd3c(unaff_x23,*unaff_x25,0);
    if ((uVar7 & 1) != 0) {
      return lVar4;
    }
    uVar5 = FUN_04e9195c(unaff_x23,1,0);
    FUN_0509917c();
    uVar6 = (**(code **)(*unaff_x19 + 0x238))();
    uVar7 = FUN_050ea5c0(uVar6,0);
    if ((uVar7 & 1) == 0) goto LAB_051696d8;
    if (lVar4 == 0) {
      lVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067634c8);
      FUN_04894d4c(lVar4,*(undefined8 *)PTR_DAT_067634b0);
    }
    plVar3 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (plVar3 == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      if (plVar3 == (long *)0x0) goto LAB_05169764;
      uVar6 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    }
    uVar5 = FUN_04e8db00(lVar8,*(undefined8 *)PTR_DAT_067646b8,uVar5,0);
    if (lVar4 == 0) goto LAB_05169764;
    FUN_048956f0(lVar4,uVar5,uVar6,*(undefined8 *)PTR_DAT_06763498);
    unaff_x25 = (undefined8 *)PTR_DAT_06780450;
  } while( true );
  if (sVar1 != 0x40) {
    return lVar4;
  }
  if (lVar4 == 0) goto code_r0x051692f8;
  goto LAB_0516931c;
code_r0x051692f8:
  param_1 = &PTR_DAT_06763000;
  goto code_r0x051692fc;
}


