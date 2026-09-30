/*
FUNCTION_NAME: FUN_03645aa4
ENTRY_POINT: 03645aa4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_03645aa4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = 
  Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
  ;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff7306 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d9ae50);
    thunk_FUN_01ad9084(PTR_DAT_03d9ae58);
    thunk_FUN_01ad9084(PTR_DAT_03d9ae60);
    thunk_FUN_01ad9084(PTR_DAT_03d9ae68);
    thunk_FUN_01ad9084(PTR_DAT_03d9ae70);
    DAT_03ff7306 = 1;
  }
  puVar3 = PTR_DAT_03d9ae50;
  plVar4 = (long *)thunk_FUN_01afaadc(*(undefined8 *)puVar2);
  FUN_02eeeb74(plVar4,0);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_0391f968(uVar7,0,0);
  uVar8 = *(undefined8 *)puVar3;
  uVar7 = 0;
  if ((uVar5 & 1) != 0) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_03645d00;
    uVar7 = FUN_039230bc(*(long *)(param_1 + 0x10),0);
  }
  uVar7 = FUN_02edd6e8(uVar8,uVar7,0);
  puVar2 = PTR_DAT_03d9ae60;
  if (plVar4 != (long *)0x0) {
    System_Globalization_Calendar__IsValidMonth(plVar4,uVar7,0);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_0391f968(uVar7,0,0);
    uVar8 = *(undefined8 *)puVar2;
    uVar7 = 0;
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_03645d00;
      uVar7 = FUN_039230bc(*(long *)(param_1 + 0x18),0);
    }
    puVar1 = PTR_DAT_03d9ae58;
    uVar7 = FUN_02edd6e8(uVar8,uVar7,0);
    System_Globalization_Calendar__IsValidMonth(plVar4,uVar7,0);
    plVar6 = *(long **)(param_1 + 0x30);
    uVar7 = *(undefined8 *)puVar1;
    if (plVar6 == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    }
    uVar7 = FUN_02edd6e8(uVar7,uVar8,0);
    System_Globalization_Calendar__IsValidMonth(plVar4,uVar7,0);
    puVar2 = PTR_DAT_03d9ae70;
    puVar1 = PTR_DAT_03d9ae68;
    plVar6 = *(long **)(param_1 + 0x28);
    if (plVar6 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      uVar7 = FUN_02edd6e8(*(undefined8 *)puVar1,uVar7,0);
      System_Globalization_Calendar__IsValidMonth(plVar4,uVar7,0);
      plVar6 = *(long **)(param_1 + 0x20);
      uVar7 = *(undefined8 *)puVar2;
      if (plVar6 == (long *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      }
      uVar7 = FUN_02edd6e8(uVar7,uVar8,0);
      System_Globalization_Calendar__IsValidMonth(plVar4,uVar7,0);
                    /* WARNING: Could not recover jumptable at 0x03645cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      return;
    }
  }
LAB_03645d00:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


