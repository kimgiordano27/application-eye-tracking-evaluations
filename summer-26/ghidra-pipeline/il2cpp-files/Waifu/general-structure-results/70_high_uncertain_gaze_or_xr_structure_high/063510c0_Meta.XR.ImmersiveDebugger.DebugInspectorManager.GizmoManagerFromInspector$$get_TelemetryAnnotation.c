/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.GizmoManagerFromInspector$$get_TelemetryAnnotation
ENTRY_POINT: 063510c0
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined1  [16]
Meta_XR_ImmersiveDebugger_DebugInspectorManager_GizmoManagerFromInspector__get_TelemetryAnnotation
          (void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long unaff_x21;
  undefined1 auVar4 [16];
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 uStack00000000000001a0;
  undefined8 uStack00000000000001a8;
  undefined8 uStack00000000000001b0;
  undefined8 uStack00000000000001b8;
  undefined8 uStack00000000000001c0;
  undefined8 uStack00000000000001c8;
  undefined8 uStack00000000000001d0;
  undefined8 uStack00000000000001d8;
  undefined8 uStack00000000000001e0;
  undefined8 uStack00000000000001e8;
  
  uStack00000000000001a0 = in_stack_000000e8;
  uStack00000000000001a8 = in_stack_000000e0;
  uStack00000000000001b0 = in_stack_000000d8;
  uStack00000000000001b8 = in_stack_000000d0;
  uStack00000000000001c0 = in_stack_000000c8;
  uStack00000000000001c8 = in_stack_000000c0;
  uStack00000000000001d0 = in_stack_000000b8;
  uStack00000000000001d8 = in_stack_000000b0;
  uStack00000000000001e0 = in_stack_000000a8;
  uStack00000000000001e8 = in_stack_000000a0;
  auVar4 = FUN_04003860();
  if ((*(long *)(unaff_x21 + 0x18) != 0) &&
     (lVar3 = FUN_06317848(*(long *)(unaff_x21 + 0x18),0), lVar3 != 0)) {
    iVar2 = *(int *)(lVar3 + 0xe0);
    uVar1 = iVar2 + 2;
    if (-1 < iVar2 + 1) {
      uVar1 = iVar2 + 1;
    }
    *(uint *)(lVar3 + 0xe0) = (iVar2 + 1) - (uVar1 & 0xfffffffe);
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


