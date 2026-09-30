/*
FUNCTION_NAME: Unity.Serialization.Json.PackedBinaryStream$$Dispose
ENTRY_POINT: 066b2908
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


undefined8
Unity_Serialization_Json_PackedBinaryStream__Dispose(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0xffc) & 1) == 0) {
    FUN_02fe925c(
                System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo
                );
    *(undefined1 *)(unaff_x22 + 0xffc) = 1;
  }
  if ((param_2 & 1) == 0) {
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_066b29d8;
    if (*(char *)(*(long *)(param_1 + 0x68) + 0x120) != '\0') {
      if (*(long *)(param_1 + 0xa0) == 0) goto LAB_066b29d8;
      uVar1 = FUN_066af98c(*(long *)(param_1 + 0xa0),param_3);
      if ((uVar1 & 1) == 0) {
        if (*(long *)(param_1 + 0xa0) != 0) {
          uVar3 = FUN_066afa98();
          if (*(int *)(*(long *)
                        System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo
                      + 0xe0) == 0) {
            thunk_FUN_02fdcff0(*(long *)
                                System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo
                              );
          }
          lVar4 = FUN_06653348(0);
          if (lVar4 != 0) {
            FUN_06660638(lVar4,uVar3,0,0);
            return 1;
          }
        }
        goto LAB_066b29d8;
      }
    }
  }
  plVar2 = *(long **)(param_1 + 0x60);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x2a8))
              (*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
               *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),plVar2,
               *(undefined8 *)(*plVar2 + 0x2b0));
    return 1;
  }
LAB_066b29d8:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


