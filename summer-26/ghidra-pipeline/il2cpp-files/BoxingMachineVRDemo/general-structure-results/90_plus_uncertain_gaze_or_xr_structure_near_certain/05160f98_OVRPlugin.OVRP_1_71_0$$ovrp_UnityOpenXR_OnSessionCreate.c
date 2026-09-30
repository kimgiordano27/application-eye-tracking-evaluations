/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionCreate
ENTRY_POINT: 05160f98
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionCreate(ulong param_1)

{
  byte bVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06782410);
    *(undefined1 *)(unaff_x21 + 0xe54) = 1;
  }
  if (unaff_x19 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06782410 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06782410)
       ) {
      lVar2 = FUN_0515ff88();
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x30) = unaff_x19[3];
        thunk_FUN_02dd37b4();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
  }
  FUN_05161024();
  return;
}


