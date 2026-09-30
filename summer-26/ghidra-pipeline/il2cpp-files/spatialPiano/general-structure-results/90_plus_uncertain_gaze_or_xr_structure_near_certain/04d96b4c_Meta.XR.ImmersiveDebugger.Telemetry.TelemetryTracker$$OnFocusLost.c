/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnFocusLost
ENTRY_POINT: 04d96b4c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnFocusLost
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
               long param_5,undefined8 *param_6)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long unaff_x19;
  void *unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long lVar5;
  long unaff_x29;
  
  do {
    uVar2 = *param_3;
    pcVar4 = (code *)param_3[2];
    *(undefined8 **)(unaff_x29 + -0x18) = param_1;
    *(undefined8 **)(unaff_x29 + -0x10) = param_6;
    (*pcVar4)(uVar2,param_3,unaff_x27,param_5);
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
    puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68);
    (*(code *)puVar3[2])(*puVar3,puVar3,unaff_x26,0,unaff_x29 + -0x18);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    unaff_x27 = *(long *)(unaff_x29 + -0x18);
    pvVar1 = unaff_x21;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x70) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x24,pvVar1,unaff_x22);
    pvVar1 = unaff_x20;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x78) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x25,pvVar1,unaff_x23);
    if (unaff_x27 == 0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__Init;
    }
    lVar5 = *(long *)(lVar5 + 0xc0);
    param_1 = unaff_x24;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x70) + 0x28)) {
      param_1 = (undefined8 *)*unaff_x24;
    }
    param_6 = unaff_x25;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x78) + 0x28)) {
      param_6 = (undefined8 *)*unaff_x25;
    }
    param_3 = *(undefined8 **)(lVar5 + 0x80);
    param_5 = unaff_x29 + -0x18;
  } while( true );
}


