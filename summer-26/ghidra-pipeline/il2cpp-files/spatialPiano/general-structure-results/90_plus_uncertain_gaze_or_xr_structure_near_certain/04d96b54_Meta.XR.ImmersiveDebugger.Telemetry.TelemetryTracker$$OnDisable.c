/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnDisable
ENTRY_POINT: 04d96b54
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnDisable
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4,long param_5
               ,undefined8 *param_6)

{
  void *pvVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long unaff_x19;
  void *unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  long lVar4;
  long unaff_x29;
  
  do {
    pcVar3 = (code *)param_3[2];
    *(undefined8 **)(unaff_x29 + -0x18) = param_1;
    *(undefined8 **)(unaff_x29 + -0x10) = param_6;
    (*pcVar3)(param_2,param_3,param_4,param_5);
    unaff_x26 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88))
                          (unaff_x26);
    if (unaff_x26 == 0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__Init:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar2 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68);
    (*(code *)puVar2[2])(*puVar2,puVar2,unaff_x26,0,unaff_x29 + -0x18);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    param_4 = *(long *)(unaff_x29 + -0x18);
    pvVar1 = unaff_x21;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x70) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x24,pvVar1,unaff_x22);
    pvVar1 = unaff_x20;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x78) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x25,pvVar1,unaff_x23);
    if (param_4 == 0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__Init;
    }
    lVar4 = *(long *)(lVar4 + 0xc0);
    param_1 = unaff_x24;
    if (-1 < *(int *)(*(long *)(lVar4 + 0x70) + 0x28)) {
      param_1 = (undefined8 *)*unaff_x24;
    }
    param_6 = unaff_x25;
    if (-1 < *(int *)(*(long *)(lVar4 + 0x78) + 0x28)) {
      param_6 = (undefined8 *)*unaff_x25;
    }
    param_3 = *(undefined8 **)(lVar4 + 0x80);
    param_5 = unaff_x29 + -0x18;
    param_2 = *param_3;
  } while( true );
}


