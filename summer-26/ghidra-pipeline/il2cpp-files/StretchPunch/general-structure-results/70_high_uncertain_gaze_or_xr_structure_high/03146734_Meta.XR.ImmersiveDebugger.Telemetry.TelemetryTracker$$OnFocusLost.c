/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnFocusLost
ENTRY_POINT: 03146734
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnFocusLost(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  lVar1 = FUN_01dde7f8();
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(lVar1);
  }
  uVar2 = FUN_03145634();
  if ((uVar2 & 1) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01dde7f8(lVar1);
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c();
    }
    puVar3 = (undefined8 *)thunk_FUN_01de290c();
    in_stack_00000030 = puVar3[2];
    in_stack_00000028 = puVar3[1];
    in_stack_00000020 = *puVar3;
    uVar4 = FUN_02198cb4(*(undefined8 *)(unaff_x20 + 0x10),&stack0x00000020,0,
                         *(undefined4 *)(unaff_x20 + 0x18),
                         *(undefined8 *)
                          (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) +
                                                                  0xc0) + 0xd0) + 0x20) + 0xc0) +
                          0x150));
  }
  return uVar4;
}


