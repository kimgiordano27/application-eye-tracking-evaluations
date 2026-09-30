/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManager$$get_TelemetryAnnotation
ENTRY_POINT: 056219cc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakManager__get_TelemetryAnnotation(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  
  *(undefined1 *)(unaff_x20 + 0x8d3) = 1;
  puVar1 = PTR_DAT_07279510;
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 056219e8 to 057219ff has its CatchHandler @ 05621a98 */
    lVar2 = FUN_032934b8();
  }
  uVar4 = **(undefined8 **)(lVar2 + 0xc0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 05621a00 to 05721a13 has its CatchHandler @ 05621904 */
    thunk_FUN_032cd7c0(*(long *)puVar1);
  }
  plVar3 = (long *)FUN_059324dc(uVar4,0);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
    uVar4 = FUN_0644d46c(uVar4,0);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_032934b8(lVar2);
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_032934b8();
    }
    **(undefined8 **)(lVar2 + 0xb8) = uVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


