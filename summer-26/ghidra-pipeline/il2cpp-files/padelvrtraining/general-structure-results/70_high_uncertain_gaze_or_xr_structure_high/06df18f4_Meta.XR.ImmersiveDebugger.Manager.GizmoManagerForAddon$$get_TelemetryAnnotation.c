/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 06df18f4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManagerForAddon__get_TelemetryAnnotation(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  
  uVar1 = thunk_FUN_03d1e194(*(undefined8 *)(param_1 + 0xdc0));
  uVar2 = thunk_FUN_03d19be4(uVar1,*(undefined8 *)*unaff_x20);
  if ((uVar2 & 1) != 0) {
    uVar1 = *unaff_x20;
    __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
    FUN_03d2d540(uVar1);
  }
  uVar1 = thunk_FUN_03d1e194(PTR_DAT_091a4f90);
  uVar2 = thunk_FUN_03d19be4(uVar1,*(undefined8 *)*unaff_x20);
  if ((uVar2 & 1) != 0) {
    uVar5 = *unaff_x20;
    __cxa_end_catch();
    thunk_FUN_03d1e194(PTR_DAT_091aa550);
    uVar1 = thunk_FUN_03d2ef40();
    uVar3 = thunk_FUN_03d1e194(PTR_DAT_091fbdc8);
    FUN_071781f8(uVar1,uVar3,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar1);
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *unaff_x20;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&PTR_PTR_08cb6798,0);
}


