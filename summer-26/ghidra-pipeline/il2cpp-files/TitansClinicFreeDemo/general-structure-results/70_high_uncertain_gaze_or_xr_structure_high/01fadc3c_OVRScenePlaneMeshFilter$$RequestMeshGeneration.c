/*
FUNCTION_NAME: OVRScenePlaneMeshFilter$$RequestMeshGeneration
ENTRY_POINT: 01fadc3c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRScenePlaneMeshFilter__RequestMeshGeneration(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar1 = FUN_01f7f404();
  if ((uVar1 & 1) == 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_01fadd88;
    uVar1 = OVRPlugin__set_tiledMultiResLevel();
    if ((uVar1 & 1) == 0) {
      uVar1 = (**(code **)(*unaff_x20 + 0x288))();
      if ((uVar1 & 1) != 0) goto LAB_01fadc60;
    }
    if (unaff_x19 == (long *)0x0) {
LAB_01fadd88:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar1 = (**(code **)(*unaff_x19 + 0x568))();
    if ((uVar1 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_027b3ea8 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar2 = FUN_01f99390();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01220628(*unaff_x22);
      }
      uVar1 = FUN_01f7f404(uVar2);
      if ((uVar1 & 1) != 0) goto LAB_01fadc60;
    }
    uVar1 = (**(code **)(*unaff_x20 + 0x568))();
    if ((uVar1 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_027b3ea8 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar2 = FUN_01f99390();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01220628(*unaff_x22);
      }
      uVar2 = FUN_01f7f404(uVar2);
      return uVar2;
    }
    uVar2 = 0;
  }
  else {
LAB_01fadc60:
    uVar2 = 1;
  }
  return uVar2;
}


