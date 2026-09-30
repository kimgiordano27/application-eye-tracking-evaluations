/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Colocation_RequestMap
ENTRY_POINT: 055b2940
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Oculus_Platform_CAPI__ovr_Colocation_RequestMap(void)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
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
  
code_r0x055b2940:
  FUN_055aea4c();
  uVar6 = FUN_055b4470();
  if ((uVar6 & 1) == 0) {
    FUN_055745fc();
  }
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
        uVar4 = FUN_0551e574(&stack0x00000018,0);
        uVar7 = thunk_FUN_02dfd288(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
        FUN_05362cb4(uVar7,uVar4,0);
        uVar4 = FUN_05574a94();
        uVar7 = thunk_FUN_02dfd288(
                                  System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedEventArgs,_bool,_bool>_TypeInfo
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar4,uVar7);
      }
      goto LAB_055b2ba8;
    }
    plVar3 = (long *)(**(code **)(*unaff_x19 + 0x198))();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar6 = (**(code **)(*unaff_x19 + 0x1d8))();
    if ((uVar6 & 1) == 0) {
      lVar5 = thunk_FUN_02dfd288(PTR_DAT_069fc178);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar7 = FUN_0547e2f8(0);
      uVar8 = thunk_FUN_02dfd288(System_Action<Column,_int>_TypeInfo);
      FUN_055873e0(uVar8,uVar7,uVar4,0);
      uVar4 = FUN_05574a94();
      uVar7 = thunk_FUN_02dfd288(
                                System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedEventArgs,_bool,_bool>_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar4,uVar7);
    }
    if (*(long *)(unaff_x20 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = FUN_055abe7c(*(long *)(unaff_x20 + 0xc0),uVar4);
    if (((lVar5 != 0) && (*(char *)(lVar5 + 0x82) != '\0')) && (*(char *)(lVar5 + 0x80) == '\0'))
    break;
    uVar4 = (**(code **)(*unaff_x19 + 0x188))();
    uVar6 = FUN_05595c44(uVar4,0);
    if ((uVar6 & 1) == 0) {
      uVar4 = *unaff_x28;
      if (*(int *)(*(long *)(unaff_x29 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_054f73b4(uVar4,0);
    }
    else {
      (**(code **)(*unaff_x19 + 0x1a8))();
    }
    FUN_055ae608();
    plVar3 = (long *)FUN_055aea4c();
    if (plVar3 == (long *)0x0) {
LAB_055b28c4:
      FUN_055aeed0();
    }
    else {
      uVar6 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
      if ((uVar6 & 1) == 0) goto LAB_055b28c4;
      FUN_055aeab8();
    }
    FUN_055aa664();
  } while( true );
  plVar3 = (long *)(lVar5 + 0x48);
  if (*plVar3 == 0) {
    lVar5 = FUN_055ae608();
    *plVar3 = lVar5;
    LeanTween__value(plVar3);
  }
  goto code_r0x055b2940;
}


