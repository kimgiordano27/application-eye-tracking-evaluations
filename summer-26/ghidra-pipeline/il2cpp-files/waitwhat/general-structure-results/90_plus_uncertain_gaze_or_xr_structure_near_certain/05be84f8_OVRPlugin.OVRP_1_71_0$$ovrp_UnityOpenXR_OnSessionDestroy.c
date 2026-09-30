/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionDestroy
ENTRY_POINT: 05be84f8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionDestroy(long param_1,undefined1 param_2 [16])

{
  long lVar1;
  uint in_w9;
  long in_x10;
  uint uVar2;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2._8_8_;
  uVar3 = param_2._0_8_;
  while( true ) {
    in_x11 = in_x11 + 1;
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    lVar1 = *(long *)(unaff_x20 + 0x88);
    if (lVar1 == 0) break;
    uVar2 = (uint)in_x11;
    if ((int)*(uint *)(lVar1 + 0x18) <= (int)uVar2) {
      return;
    }
    if (*(uint *)(lVar1 + 0x18) <= uVar2) {
LAB_05be8618:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    lVar1 = *(long *)(lVar1 + in_x11 * 8 + 0x20);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= in_w9) goto LAB_05be8618;
    param_1 = *(long *)(unaff_x19 + 0x38);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= uVar2) goto LAB_05be8618;
    lVar1 = lVar1 + in_x10 * 0x10;
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    param_1 = param_1 + in_x11 * 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


