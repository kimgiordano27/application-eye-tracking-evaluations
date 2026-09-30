/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 09087c4c
PROGRAM: Hyper-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__InitPermissionRequest(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  
  thunk_FUN_04983f60(*param_1);
  FUN_08cc3ad0();
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar2 = *unaff_x20;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0ac759b0) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0x14) * 0x10 + 0x138);
        goto LAB_09087cc4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_04980e68();
LAB_09087cc4:
  (*(code *)*puVar1)();
  FUN_090878fc();
  *(undefined1 *)(unaff_x19 + 0xb0) = 0;
  *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
  return;
}


