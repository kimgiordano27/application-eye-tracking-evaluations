/*
FUNCTION_NAME: FUN_052e4bc4
ENTRY_POINT: 052e4bc4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void FUN_052e4bc4(long *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long local_18;
  
  if ((int)param_1[1] != 0) {
    if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if ((int)param_1[1] != *(int *)(*param_1 + 0x18) + 1)
    goto 
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__Dispose
    ;
  }
  FUN_05944868(0);

  System_Collections_Generic_Dictionary_ValueCollection_Enumerator<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__Dispose
  :
  lVar2 = *(long *)(param_2 + 0x20);
  uVar1 = *(ushort *)(lVar2 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_032934b8();
    lVar2 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar2 + 0x135);
  }
  local_18 = param_1[2];
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_032934b8();
  }
  thunk_FUN_032a52d0(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10),&local_18);
  return;
}


