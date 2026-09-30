/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Challenges_UpdateInfo
ENTRY_POINT: 055b2858
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Oculus_Platform_CAPI__ovr_Challenges_UpdateInfo(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
code_r0x055b2858:
  FUN_054f73b4(param_1,0);
LAB_055b2860:
  FUN_055ae608();
  plVar5 = (long *)FUN_055aea4c();
  if ((plVar5 == (long *)0x0) ||
     (uVar6 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0)),
     (uVar6 & 1) == 0)) {
    FUN_055aeed0();
  }
  else {
    FUN_055aeab8();
  }
  FUN_055aa664();
  do {
    uVar6 = (**(code **)(*unaff_x19 + 0x1d8))();
    if ((uVar6 & 1) == 0) {
      FUN_055b578c();
LAB_055b2ba8:
      FUN_055b5560();
      return;
    }
    iVar1 = (**(code **)(*unaff_x19 + 0x188))();
    if (iVar1 != 4) {
      if (iVar1 != 0xd) {
        FUN_02979e58();
        uVar2 = (**(code **)(*unaff_x19 + 0x188))();
        in_stack_00000018 = thunk_FUN_02dfd288(System_Drawing_Point_var);
        in_stack_00000020 = 0xffffffffffffffff;
        in_stack_00000028 = uVar2;
        uVar3 = FUN_0551e574(&stack0x00000018,0);
        uVar7 = thunk_FUN_02dfd288(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
        FUN_05362cb4(uVar7,uVar3,0);
        uVar3 = FUN_05574a94();
        uVar7 = thunk_FUN_02dfd288(
                                  System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedEventArgs,_bool,_bool>_TypeInfo
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar3,uVar7);
      }
      goto LAB_055b2ba8;
    }
    plVar5 = (long *)(**(code **)(*unaff_x19 + 0x198))();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar3 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    uVar6 = (**(code **)(*unaff_x19 + 0x1d8))();
    if ((uVar6 & 1) == 0) {
      lVar4 = thunk_FUN_02dfd288(PTR_DAT_069fc178);
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar7 = FUN_0547e2f8(0);
      uVar8 = thunk_FUN_02dfd288(System_Action<Column,_int>_TypeInfo);
      FUN_055873e0(uVar8,uVar7,uVar3,0);
      uVar3 = FUN_05574a94();
      uVar7 = thunk_FUN_02dfd288(
                                System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedEventArgs,_bool,_bool>_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar3,uVar7);
    }
    if (*(long *)(unaff_x20 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = FUN_055abe7c(*(long *)(unaff_x20 + 0xc0),uVar3);
    if (((lVar4 == 0) || (*(char *)(lVar4 + 0x82) == '\0')) || (*(char *)(lVar4 + 0x80) != '\0'))
    break;
    plVar5 = (long *)(lVar4 + 0x48);
    if (*plVar5 == 0) {
      lVar4 = FUN_055ae608();
      *plVar5 = lVar4;
      LeanTween__value(plVar5);
    }
    FUN_055aea4c();
    uVar6 = FUN_055b4470();
    if ((uVar6 & 1) == 0) {
      FUN_055745fc();
    }
  } while( true );
  uVar3 = (**(code **)(*unaff_x19 + 0x188))();
  uVar6 = FUN_05595c44(uVar3,0);
  if ((uVar6 & 1) == 0) goto LAB_055b2840;
  (**(code **)(*unaff_x19 + 0x1a8))();
  goto LAB_055b2860;
LAB_055b2840:
  param_1 = *unaff_x28;
  if (*(int *)(*(long *)(unaff_x29 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  goto code_r0x055b2858;
}


