/*
FUNCTION_NAME: FUN_03922ce0
ENTRY_POINT: 03922ce0
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


undefined4 FUN_03922ce0(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 local_28;
  
  if ((DAT_03ffad37 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffad37 = 1;
  }
  uVar3 = FUN_030821ec(*(undefined8 *)(param_1 + 0x10),0,0);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar4 = *(long *)puVar1;
    }
    if (**(int **)(lVar4 + 0xb8) == -1) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03ffad98 == (code *)0x0) {
        DAT_03ffad98 = (code *)FUN_01b47f04(
                                           "UnityEngine.Object::GetOffsetOfInstanceIDInCPlusPlusObject()"
                                           );
      }
      uVar2 = (*DAT_03ffad98)();
      **(undefined4 **)(*(long *)puVar1 + 0xb8) = uVar2;
    }
    lVar4 = Oculus_Interaction_HandGrab_ObjectPull___ctor((undefined8 *)(param_1 + 0x10),0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar6);
      lVar6 = *(long *)puVar1;
    }
    local_28 = 0;
    FUN_0308aac4(&local_28,lVar4 + **(int **)(lVar6 + 0xb8),0);
    puVar5 = (undefined4 *)FUN_0308acc8(local_28,0);
    uVar2 = *puVar5;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


