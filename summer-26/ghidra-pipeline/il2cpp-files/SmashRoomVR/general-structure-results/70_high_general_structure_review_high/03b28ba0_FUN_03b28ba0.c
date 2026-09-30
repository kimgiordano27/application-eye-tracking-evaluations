/*
FUNCTION_NAME: FUN_03b28ba0
ENTRY_POINT: 03b28ba0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_03b28ba0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_03db70a0;
  puVar1 = 
  Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
  ;
  if ((DAT_03ffdb8c & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03db70a8);
    thunk_FUN_01ad9084(PTR_DAT_03db70a0);
    DAT_03ffdb8c = 1;
  }
  plVar3 = (long *)thunk_FUN_01afaadc(*(undefined8 *)puVar1);
  FUN_02eeeb74(plVar3,0);
  plVar4 = *(long **)(param_1 + 0x40);
  uVar7 = *(undefined8 *)puVar2;
  if (plVar4 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  }
  uVar7 = FUN_02edd6e8(uVar7,uVar5,0);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (plVar3 != (long *)0x0) {
    System_Globalization_Calendar__IsValidMonth(plVar3,uVar7,0);
    FUN_02ef09cc(plVar3,0);
    FUN_02ef09cc(plVar3,0);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_0391f968(uVar7,0,0);
    if ((uVar6 & 1) == 0) {
      uVar7 = *(undefined8 *)PTR_DAT_03db70a8;
    }
    else {
      plVar4 = *(long **)(param_1 + 0x28);
      if (plVar4 == (long *)0x0) goto LAB_03b28cf4;
      uVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    }
    System_Globalization_Calendar__IsValidMonth(plVar3,uVar7,0);
                    /* WARNING: Could not recover jumptable at 0x03b28cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    return;
  }
LAB_03b28cf4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


