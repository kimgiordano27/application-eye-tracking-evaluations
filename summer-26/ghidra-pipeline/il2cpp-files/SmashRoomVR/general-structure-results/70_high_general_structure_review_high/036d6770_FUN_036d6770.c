/*
FUNCTION_NAME: FUN_036d6770
ENTRY_POINT: 036d6770
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_036d6770(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff75cd & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff75cd = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x138);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_03922f24(param_2,uVar6,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)
                  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
    if (((uVar5 & 1) != 0) && (iVar2 = FUN_036d3064(param_1), iVar2 == 0)) {
      iVar2 = *(int *)(param_1 + 0x234);
      iVar3 = FUN_036d3064(param_1);
      uVar4 = FUN_036d68a8(param_1,iVar3 + iVar2);
      *(undefined4 *)(param_1 + 0x23c) = uVar4;
      FUN_036d5208(param_1,param_1 + 0x23c);
      iVar2 = *(int *)(param_1 + 0x238);
      iVar3 = FUN_036d3064(param_1);
      uVar4 = FUN_036d68a8(param_1,iVar3 + iVar2);
      *(undefined4 *)(param_1 + 0x240) = uVar4;
      FUN_036d5208(param_1,param_1 + 0x240);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x150);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_03923030(uVar6,0);
    if ((uVar5 & 1) != 0) {
      FUN_036d6918(param_1);
      return;
    }
  }
  return;
}


