/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnDisable
ENTRY_POINT: 0314673c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnDisable(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(param_1);
  }
  uVar1 = FUN_03145634();
  if ((uVar1 & 1) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01dde7f8(lVar4);
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c();
    }
    puVar2 = (undefined8 *)thunk_FUN_01de290c();
    in_stack_00000030 = puVar2[2];
    in_stack_00000028 = puVar2[1];
    in_stack_00000020 = *puVar2;
    uVar3 = FUN_02198cb4(*(undefined8 *)(unaff_x20 + 0x10),&stack0x00000020,0,
                         *(undefined4 *)(unaff_x20 + 0x18),
                         *(undefined8 *)
                          (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) +
                                                                  0xc0) + 0xd0) + 0x20) + 0xc0) +
                          0x150));
  }
  return uVar3;
}


