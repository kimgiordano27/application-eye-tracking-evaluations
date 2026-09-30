/*
FUNCTION_NAME: FUN_05687a44
ENTRY_POINT: 05687a44
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_10;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05687a44(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long local_28;
  
  if ((DAT_06dbc767 & 1) == 0) {
    FUN_02d965b8(
                System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_TypeInfo
                );
    FUN_02d965b8(System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
    DAT_06dbc767 = 1;
  }
  local_28 = 0;
  if (param_2 != 0) {
    lVar3 = *(long *)(param_1 + 0x1f8);
    uVar1 = FUN_05661968(param_2,0);
    if (lVar3 != 0) {
      FUN_04df9a98(lVar3,uVar1,
                   *(undefined8 *)
                    System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_TypeInfo
                  );
      lVar3 = *(long *)(param_1 + 0x208);
      if (lVar3 != 0) {
        uVar1 = FUN_05661968(param_2,0);
        FUN_056a8534(lVar3,uVar1,0);
      }
      lVar3 = *(long *)(param_1 + 0x200);
      uVar1 = FUN_05661968(param_2,0);
      if (lVar3 != 0) {
        uVar2 = FUN_04dfa0cc(lVar3,uVar1,&local_28,
                             *(undefined8 *)
                              System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo
                            );
        if ((uVar2 & 1) == 0) {
          return;
        }
        if (local_28 != 0) {
          FUN_05687b68();
          lVar3 = *(long *)(param_1 + 0x200);
          uVar1 = FUN_05661968(param_2,0);
          if (lVar3 != 0) {
            FUN_04df9a98(lVar3,uVar1,
                         *(undefined8 *)
                          System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo
                        );
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


