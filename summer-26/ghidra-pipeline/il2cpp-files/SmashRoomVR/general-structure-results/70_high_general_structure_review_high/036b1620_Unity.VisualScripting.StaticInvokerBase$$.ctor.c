/*
FUNCTION_NAME: Unity.VisualScripting.StaticInvokerBase$$.ctor
ENTRY_POINT: 036b1620
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


void Unity_VisualScripting_StaticInvokerBase___ctor(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff7497 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff7497 = 1;
  }
  FUN_036b1628(param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_036b11d0;
    FUN_039280a8(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                 *(long *)(param_1 + 0x68),0);
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_036b11d0;
    FUN_0392a910(*(long *)(param_1 + 0x68),1,0);
  }
  uVar5 = FUN_036b14b0(param_1);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar4);
  }
  uVar2 = FUN_0391f968(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  plVar3 = *(long **)(param_1 + 0x70);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x2f8))(plVar3,*(undefined8 *)(*plVar3 + 0x300));
    plVar3 = *(long **)(param_1 + 0x70);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036b11c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x5d8))
                (*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),
                 *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),plVar3,
                 *(undefined8 *)(*plVar3 + 0x5e0));
      return;
    }
  }
LAB_036b11d0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


