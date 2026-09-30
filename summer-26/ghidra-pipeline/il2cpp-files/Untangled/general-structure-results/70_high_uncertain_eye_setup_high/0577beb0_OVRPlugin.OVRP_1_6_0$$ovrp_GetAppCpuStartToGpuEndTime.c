/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetAppCpuStartToGpuEndTime
ENTRY_POINT: 0577beb0
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_6_0__ovrp_GetAppCpuStartToGpuEndTime(void)

{
  undefined *puVar1;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  undefined8 uVar2;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x24;
  long *unaff_x25;
  
  *(undefined1 *)(unaff_x24 + 0x118) = in_w8;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  __ptr = (void *)FUN_057759cc();
  __ptr_00 = (void *)FUN_057759cc();
  __ptr_01 = (void *)FUN_057759cc();
  __ptr_02 = (void *)FUN_057759cc();
  puVar1 = PTR_DAT_06d36fa0;
  if (unaff_x19 != 0) {
    FUN_0565dbf8((long)*(int *)(unaff_x19 + 0x18),0);
    uVar2 = FUN_0577bf8c(__ptr,__ptr_00,__ptr_01,__ptr_02);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)puVar1);
    }
    free(__ptr);
    free(__ptr_00);
    free(__ptr_01);
    free(__ptr_02);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


