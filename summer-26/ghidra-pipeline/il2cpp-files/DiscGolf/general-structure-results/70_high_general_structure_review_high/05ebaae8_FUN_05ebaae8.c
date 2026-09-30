/*
FUNCTION_NAME: FUN_05ebaae8
ENTRY_POINT: 05ebaae8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


uint FUN_05ebaae8(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if ((DAT_06dc3dad & 1) == 0) {
    FUN_02d965b8(Method_System_Nullable<OVRPose>_get_Value__);
    FUN_02d965b8(Method_System_Nullable<OVRTelemetryMarker>__ctor__);
    FUN_02d965b8(Method_System_Nullable<OVRTelemetryMarker>_GetValueOrDefault__);
    FUN_02d965b8(Method_System_Nullable<OVRTelemetryMarker>_get_HasValue__);
    FUN_02d965b8(Method_System_Nullable<ObjectCreationHandling>_GetValueOrDefault__);
    DAT_06dc3dad = 1;
  }
  local_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  uStack_40 = 0;
  uVar3 = FUN_05ebac5c(param_1);
  if ((uVar3 & 1) == 0) {
    uVar2 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04fdd304(&local_50,*(long *)(param_1 + 0x10),
                 *(undefined8 *)Method_System_Nullable<OVRPose>_get_Value__);
    puVar1 = Method_System_Nullable<OVRTelemetryMarker>_GetValueOrDefault__;
    do {
      uVar3 = FUN_05258f34(&local_50,*(undefined8 *)puVar1);
      if ((uVar3 & 1) == 0) {
        FUN_05259050(&local_50,*(undefined8 *)Method_System_Nullable<OVRTelemetryMarker>__ctor__);
        uVar2 = 0;
        if (*(long *)(param_1 + 0x58) != 0) {
          uVar2 = FUN_06347764(*(long *)(param_1 + 0x58),0);
        }
        goto FUN_05ebabec;
      }
    } while ((char)local_38 != '\0');
    FUN_05259050(&local_50,*(undefined8 *)Method_System_Nullable<OVRTelemetryMarker>__ctor__);
    uVar2 = 0;
  }
FUN_05ebabec:
  return uVar2 & 1;
}


