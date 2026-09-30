/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Colocation_ShareMap
ENTRY_POINT: 055b2a58
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Oculus_Platform_CAPI__ovr_Colocation_ShareMap(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_02e86b8c();
  }
  puVar7 = (undefined8 *)__cxa_begin_catch();
  uVar8 = thunk_FUN_02dfd288(PTR_DAT_069fcb10);
  uVar9 = thunk_FUN_02df8d3c(uVar8,*(undefined8 *)*puVar7);
  if ((uVar9 & 1) == 0) {
    puVar10 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar10 = *puVar7;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar10,&PTR_PTR_066567d8,0);
  }
  uVar8 = *puVar7;
  __cxa_end_catch();
  (**(code **)(*unaff_x19 + 0x1c8))();
  thunk_FUN_02dfd288(UnityEngine_UIElements_PanelRaycaster_var);
  thunk_FUN_02dd3048();
  uVar9 = FUN_055ac320();
  if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(uVar8);
  }
  FUN_055af384();
  do {
    uVar9 = (**(code **)(*unaff_x19 + 0x1d8))();
    if ((uVar9 & 1) == 0) {
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
        uVar8 = FUN_0551e574(&stack0x00000018,0);
        uVar5 = thunk_FUN_02dfd288(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
        FUN_05362cb4(uVar5,uVar8,0);
        uVar8 = FUN_05574a94();
        uVar5 = thunk_FUN_02dfd288(
                                  System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedEventArgs,_bool,_bool>_TypeInfo
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar8,uVar5);
      }
      goto LAB_055b2ba8;
    }
    plVar3 = (long *)(**(code **)(*unaff_x19 + 0x198))();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar8 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar9 = (**(code **)(*unaff_x19 + 0x1d8))();
    if ((uVar9 & 1) == 0) {
      lVar4 = thunk_FUN_02dfd288(PTR_DAT_069fc178);
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar5 = FUN_0547e2f8(0);
      uVar6 = thunk_FUN_02dfd288(System_Action<Column,_int>_TypeInfo);
      FUN_055873e0(uVar6,uVar5,uVar8,0);
      uVar8 = FUN_05574a94();
      uVar5 = thunk_FUN_02dfd288(
                                System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedEventArgs,_bool,_bool>_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar8,uVar5);
    }
    if (*(long *)(unaff_x20 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = FUN_055abe7c(*(long *)(unaff_x20 + 0xc0),uVar8);
    if (((lVar4 == 0) || (*(char *)(lVar4 + 0x82) == '\0')) || (*(char *)(lVar4 + 0x80) != '\0')) {
      uVar8 = (**(code **)(*unaff_x19 + 0x188))();
      uVar9 = FUN_05595c44(uVar8,0);
      if ((uVar9 & 1) == 0) {
        uVar8 = *unaff_x28;
        if (*(int *)(*(long *)(unaff_x29 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_054f73b4(uVar8,0);
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
        uVar9 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
        if ((uVar9 & 1) == 0) goto LAB_055b28c4;
        FUN_055aeab8();
      }
      FUN_055aa664();
    }
    else {
      plVar3 = (long *)(lVar4 + 0x48);
      if (*plVar3 == 0) {
        lVar4 = FUN_055ae608();
        *plVar3 = lVar4;
        LeanTween__value(plVar3);
      }
      FUN_055aea4c();
      uVar9 = FUN_055b4470();
      if ((uVar9 & 1) == 0) {
        FUN_055745fc();
      }
    }
  } while( true );
}


