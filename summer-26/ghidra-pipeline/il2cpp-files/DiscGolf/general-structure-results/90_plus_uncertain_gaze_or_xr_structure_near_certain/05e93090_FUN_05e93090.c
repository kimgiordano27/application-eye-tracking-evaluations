/*
FUNCTION_NAME: FUN_05e93090
ENTRY_POINT: 05e93090
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05e93090(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  
  if ((DAT_06dc3ca1 & 1) == 0) {
    FUN_02d965b8(Method_Unity_Collections_NativeHashMap<FixedString64Bytes,_int>_get_IsCreated__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>_Dispose__);
    FUN_02d965b8(Method_Unity_Collections_NativeHashMap<ConnectionId,_ConnectionPayload>__ctor__);
    DAT_06dc3ca1 = 1;
  }
  puVar2 = Method_Unity_Collections_NativeHashMap<ConnectionId,_ConnectionPayload>__ctor__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>_Dispose__;
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar4 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x18);
      if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      if (*(int *)(lVar5 + 8) <= iVar4) {
        FUN_042cd770(param_1 + 0x18,
                     *(undefined8 *)
                      Method_Unity_Collections_NativeHashMap<FixedString64Bytes,_int>_get_IsCreated__
                    );
        return;
      }
      puVar3 = (undefined8 *)FUN_042cd3f4(param_1 + 0x18,iVar4,*(undefined8 *)puVar1);
      FUN_05e92ae0(*(undefined4 *)(puVar3 + 3),param_1,puVar3 + 1,*puVar3,puVar3[2],
                   *(undefined4 *)((long)puVar3 + 0x1c));
      iVar4 = iVar4 + 1;
    } while (*(char *)(param_1 + 0x80) == '\0');
  }
  return;
}


