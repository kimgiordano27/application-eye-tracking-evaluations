/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$Init
ENTRY_POINT: 0634f748
PROGRAM: Waifu-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_6
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__Init(void)

{
  uint in_w8;
  undefined8 *puVar1;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  ulong unaff_x25;
  uint unaff_w26;
  int unaff_w29;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  do {
    if ((in_w8 >> 7 & 1) != 0) goto LAB_0634f7bc;
    if ((in_w8 >> 8 & 1) != 0) goto LAB_0634f7bc;
    if ((in_w8 >> 9 & 1) == 0) {
      FUN_0634fe88();
    }
    while( true ) {
      do {
        unaff_w29 = unaff_w29 + -1;
        unaff_w21 = unaff_w21 + 1;
        if (unaff_w29 == 0) {
          do {
            if ((unaff_x25 & 1) != 0) {
              puVar1 = (undefined8 *)
                       (*(long *)(unaff_x19 + 0xe8) + (long)(unaff_w22 + unaff_w24) * 0xc);
              *(undefined4 *)(puVar1 + 1) = in_stack_00000028;
              *puVar1 = in_stack_00000020;
              puVar1 = (undefined8 *)
                       (*(long *)(unaff_x19 + 0xe8) +
                       (long)(unaff_w22 + in_stack_00000038._4_4_) * 0xc);
              *(undefined4 *)(puVar1 + 1) = in_stack_00000018;
              *puVar1 = in_stack_00000010;
              return;
            }
            unaff_x25 = 1;
            unaff_w29 = *(int *)(*(long *)(unaff_x19 + 0x48) +
                                 (long)unaff_w20 * (long)(int)unaff_x23 + 0x1c);
          } while (unaff_w29 < 1);
          unaff_w21 = *(int *)(*(long *)(unaff_x19 + 0x48) + unaff_w20 * unaff_x23 + 0x14);
        }
        in_w8 = *(uint *)(*(long *)(unaff_x19 + 0x58) +
                         (long)*(int *)(*(long *)(unaff_x19 + 0x38) + (long)unaff_w21 * 4) * 4);
      } while ((in_w8 & unaff_w26) != 1);
      if ((in_w8 >> 6 & 1) == 0) break;
LAB_0634f7bc:
      Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnStart();
    }
  } while( true );
}


