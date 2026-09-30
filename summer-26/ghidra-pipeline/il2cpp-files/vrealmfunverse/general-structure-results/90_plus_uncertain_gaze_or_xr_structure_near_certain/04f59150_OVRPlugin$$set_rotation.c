/*
FUNCTION_NAME: OVRPlugin$$set_rotation
ENTRY_POINT: 04f59150
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 105
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__set_rotation(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  
  puVar2 = System_Collections_Generic_Dictionary<ulong,_Request>_TypeInfo;
  if ((*(byte *)(unaff_x20 + 0xa8c) & 1) == 0) {
    FUN_02b3c81c(
                System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor_MultiAnchorDelegatePair>_TypeInfo
                );
    FUN_02b3c81c(System_Collections_Generic_Dictionary<ulong,_Request>_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631b248);
    *(undefined1 *)(unaff_x20 + 0xa8c) = 1;
  }
  puVar3 = 
  System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor_MultiAnchorDelegatePair>_TypeInfo;
  plVar4 = (long *)FUN_03172fbc(param_1,*(undefined8 *)puVar2);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  else {
    lVar7 = *(long *)PTR_DAT_0631b248;
    bVar1 = *(byte *)(lVar7 + 0x130);
    if (*(byte *)(*plVar4 + 0x130) < bVar1) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = plVar4;
      if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
        plVar6 = (long *)0x0;
      }
    }
    *(long **)(param_1 + 0x118) = plVar6;
    if (*(byte *)(*plVar4 + 0x130) < bVar1) {
      plVar4 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
      plVar4 = (long *)0x0;
    }
  }
  thunk_FUN_02bb0e9c(param_1 + 0x118,plVar4);
  uVar5 = FUN_03172fbc(param_1,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x128) = uVar5;
  thunk_FUN_02bb0e9c(param_1 + 0x128);
  return;
}


