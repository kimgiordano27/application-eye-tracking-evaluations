/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManager$$get_TelemetryAnnotation
ENTRY_POINT: 028e9238
PROGRAM: sharks-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_ActionManager__get_TelemetryAnnotation(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  code *unaff_x24;
  long in_stack_00000000;
  
  FUN_0185daa4();
  (*unaff_x24)();
  lVar1 = *(long *)(unaff_x20 + 0x20);
                    /* try { // try from 028e9260 to 029e926f has its CatchHandler @ 028e9270 */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
                    /* catch() { ... } // from try @ 028e91e0 with catch @ 028e9270
                       catch() { ... } // from try @ 028e9260 with catch @ 028e9270 */
                    /* try { // try from 028e9274 to 029e9277 has its CatchHandler @ 028e9280 */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x58);
  if (lVar1 != 0) {
    uVar2 = FUN_02171fa4(lVar1,*unaff_x19,unaff_x19[1]);
    if ((uVar2 & 1) != 0) {
      if (in_stack_00000000 == 0) goto LAB_028e930c;
      (**(code **)(in_stack_00000000 + 0x18))
                (*(undefined8 *)(in_stack_00000000 + 0x40),*unaff_x19,unaff_x19[1],
                 *(undefined8 *)(in_stack_00000000 + 0x28));
    }
    return 1;
  }
LAB_028e930c:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


