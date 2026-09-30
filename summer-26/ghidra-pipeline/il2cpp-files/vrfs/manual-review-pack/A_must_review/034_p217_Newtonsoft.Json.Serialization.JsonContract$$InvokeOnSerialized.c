/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$InvokeOnSerialized
ENTRY_POINT: 01bb1b68
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonContract__InvokeOnSerialized(ulong param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  ulong unaff_x24;
  
  while( true ) {
    if ((param_1 & 1) == 0) {
      (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120) + 8))();
    }
    do {
      unaff_x24 = unaff_x24 + 1;
      unaff_x23 = unaff_x23 + 0x10;
      if ((long)*(int *)(unaff_x20 + 0x24) <= (long)unaff_x24) {
        return;
      }
      lVar1 = *(long *)(unaff_x20 + 0x18);
      if (lVar1 == 0) goto LAB_01bb1bb0;
      if (*(uint *)(lVar1 + 0x18) <= unaff_x24) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
    } while (*(int *)(lVar1 + unaff_x23 + 0x20) < 0);
    if (unaff_x21 == 0) break;
    param_1 = (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x158) + 8))();
  }
LAB_01bb1bb0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


