/*
FUNCTION_NAME: Unity.VRTemplate.PermissionsManager$$OnPermissionDenied
ENTRY_POINT: 01d4a71c
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void Unity_VRTemplate_PermissionsManager__OnPermissionDenied(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_03ef13ee & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Debug_TypeInfo_03cb5ae0);
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>_get_Item___03cb5f60
                );
    FUN_01c5c92c(PTR_Method_UnityEngine_Events_UnityEvent<string>_Invoke___03cb5f68);
    FUN_01c5c92c(PTR_StringLiteral_6164_03cb5f78);
    DAT_03ef13ee = 1;
  }
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar2 = System_Collections_Generic_List<object>__get_Item
                        (*(long *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),
                         *(undefined8 *)
                          PTR_Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>_get_Item___03cb5f60
                        ), lVar2 != 0)) {
    *(undefined2 *)(lVar2 + 0x1a) = 1;
    puVar1 = PTR_UnityEngine_Debug_TypeInfo_03cb5ae0;
    uVar3 = *(undefined8 *)PTR_StringLiteral_6164_03cb5f78;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    uVar3 = System_String__Concat(uVar3,param_2,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c(*(long *)puVar1);
    }
    UnityEngine_Debug__LogWarning(uVar3,param_1,0);
    if (*(long *)(lVar2 + 0x28) != 0) {
      UnityEngine_Events_UnityEvent<object>__Invoke
                (*(long *)(lVar2 + 0x28),param_2,
                 *(undefined8 *)PTR_Method_UnityEngine_Events_UnityEvent<string>_Invoke___03cb5f68);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


