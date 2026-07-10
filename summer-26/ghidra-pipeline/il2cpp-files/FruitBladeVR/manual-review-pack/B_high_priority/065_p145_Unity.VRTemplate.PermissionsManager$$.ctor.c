/*
FUNCTION_NAME: Unity.VRTemplate.PermissionsManager$$.ctor
ENTRY_POINT: 01d4a820
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_10;telemetry_or_network_hits_4
*/


void Unity_VRTemplate_PermissionsManager___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = 
  PTR_Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>__ctor___03cb5f88;
  puVar1 = 
  PTR_System_Collections_Generic_List<PermissionsManager_PermissionRequest>_TypeInfo_03cb5f80;
  if ((DAT_03ef13ef & 1) == 0) {
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>__ctor___03cb5f88
                );
    FUN_01c5c92c(
                PTR_System_Collections_Generic_List<PermissionsManager_PermissionRequest>_TypeInfo_03cb5f80
                );
    DAT_03ef13ef = 1;
  }
  uVar3 = *(undefined8 *)puVar1;
  *(undefined1 *)(param_1 + 0x20) = 1;
  uVar3 = thunk_FUN_01c8fc48(uVar3);
  System_Collections_Generic_List<object>___ctor(uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  thunk_FUN_01cc8040((undefined8 *)(param_1 + 0x28),uVar3);
  UnityEngine_MonoBehaviour___ctor(param_1,0);
  return;
}


