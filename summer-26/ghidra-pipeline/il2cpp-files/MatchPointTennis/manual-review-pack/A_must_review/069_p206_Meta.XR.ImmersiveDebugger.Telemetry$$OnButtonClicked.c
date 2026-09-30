/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$OnButtonClicked
ENTRY_POINT: 076d3024
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__OnButtonClicked(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  puVar2 = PTR_DAT_09f2e628;
  *(undefined8 *)(unaff_x21 + 0x20) = unaff_x19;
  thunk_FUN_044bb4b4();
  lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
  FUN_07a80df4(lVar3,0);
  *(undefined8 *)(lVar3 + 0x10) = DAT_01c740f0;
  *(long *)(lVar3 + 0x18) = unaff_x21;
  thunk_FUN_044bb4b4();
  if (unaff_x20 != 0) {
    lVar5 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        plVar4 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
        *plVar4 = lVar3;
        thunk_FUN_044bb4b4(plVar4,lVar3);
        return;
      }
      FUN_05bade44();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


