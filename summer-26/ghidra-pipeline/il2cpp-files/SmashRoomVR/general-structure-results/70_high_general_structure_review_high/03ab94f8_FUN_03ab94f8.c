/*
FUNCTION_NAME: FUN_03ab94f8
ENTRY_POINT: 03ab94f8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


undefined1  [16] FUN_03ab94f8(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long **pplVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  long *local_30;
  long *plStack_28;
  
  pplVar4 = &local_30;
  if ((DAT_03ffd507 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03daca28);
    thunk_FUN_01ad9084(StringLiteral_376);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffd507 = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (param_1 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = param_1;
    if (*param_1 != *(long *)StringLiteral_376) {
      plVar5 = (long *)0x0;
    }
  }
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_0391f968(plVar5,0,0);
  if ((uVar3 & 1) == 0) {
    plVar5 = param_1;
    if (param_1 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_03daca28 + 0x130);
      if (*(byte *)(*param_1 + 0x130) < bVar1) {
        plVar5 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
               *(long *)PTR_DAT_03daca28) {
        plVar5 = (long *)0x0;
      }
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(plVar5,0,0);
    local_30 = (long *)0x0;
    plStack_28 = (long *)0x0;
    if ((uVar3 & 1) == 0) goto LAB_03ab9628;
    pplVar4 = &plStack_28;
    local_30 = (long *)0x0;
    plStack_28 = plVar5;
  }
  else {
    plStack_28 = (long *)0x0;
    local_30 = plVar5;
  }
  thunk_FUN_01b4f09c(pplVar4,plVar5);
LAB_03ab9628:
  auVar6._8_8_ = plStack_28;
  auVar6._0_8_ = local_30;
  return auVar6;
}


