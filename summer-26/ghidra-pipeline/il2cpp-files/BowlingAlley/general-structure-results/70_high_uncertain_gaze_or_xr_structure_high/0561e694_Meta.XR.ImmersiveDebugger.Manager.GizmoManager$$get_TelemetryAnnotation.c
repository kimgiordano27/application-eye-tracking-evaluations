/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager$$get_TelemetryAnnotation
ENTRY_POINT: 0561e694
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManager__get_TelemetryAnnotation
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint in_w8;
  long in_x9;
  long unaff_x19;
  
  if (in_w8 == *(uint *)(in_x9 + 0x18)) {
    if ((int)(in_w8 + 0x40000000) < 0) {
      uVar2 = FUN_032d5ef8();
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar2,param_3);
    }
    FUN_038a11a4(param_1,in_w8 << 1,
                 *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10));
    in_x9 = *(long *)(unaff_x19 + 0x20);
    if (in_x9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    in_w8 = *(uint *)(unaff_x19 + 0x28);
  }
  if (in_w8 < *(uint *)(in_x9 + 0x18)) {
    puVar1 = (undefined8 *)(in_x9 + (long)(int)in_w8 * 8 + 0x20);
    *puVar1 = param_2;
    thunk_FUN_0333a630(puVar1,param_2);
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x28) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


