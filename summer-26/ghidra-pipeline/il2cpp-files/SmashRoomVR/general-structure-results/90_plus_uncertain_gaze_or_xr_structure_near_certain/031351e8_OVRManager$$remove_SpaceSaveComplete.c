/*
FUNCTION_NAME: OVRManager$$remove_SpaceSaveComplete
ENTRY_POINT: 031351e8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 OVRManager__remove_SpaceSaveComplete(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *in_x10;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  uVar6 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *in_x10) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0313523c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ae9f78();
LAB_0313523c:
  uVar3 = (*(code *)*puVar2)();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar1);
  }
  uVar4 = FUN_0391f968(uVar6,uVar3,0);
  if (((uVar4 & 1) == 0) &&
     ((*(char *)(unaff_x20 + 0x30) == '\0' || (*(char *)(unaff_x19 + 0x20) == '\0')))) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


