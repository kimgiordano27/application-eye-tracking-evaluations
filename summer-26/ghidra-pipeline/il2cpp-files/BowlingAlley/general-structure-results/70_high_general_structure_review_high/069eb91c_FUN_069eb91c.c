/*
FUNCTION_NAME: FUN_069eb91c
ENTRY_POINT: 069eb91c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long FUN_069eb91c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((DAT_076e2195 & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Nullable<OVRPose>_get_Value__);
    thunk_FUN_032e1da0(Method_System_Nullable<OVRTelemetryMarker>__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_07283798);
    DAT_076e2195 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x48);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar1 = FUN_04edb71c(lVar1,param_1,*(undefined8 *)Method_System_Nullable<OVRPose>_get_Value__);
    if (lVar1 != 0) {
      return lVar1;
    }
  }
  lVar2 = *(long *)Method_System_Nullable<OVRTelemetryMarker>__ctor__;
  lVar1 = *(long *)(lVar2 + 0x38);
  if (lVar1 == 0) {
    FUN_03293514(lVar2);
    lVar1 = *(long *)(lVar2 + 0x38);
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_032934b8();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar1 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_032934b8();
  }
  return **(long **)(lVar1 + 0xb8);
}


