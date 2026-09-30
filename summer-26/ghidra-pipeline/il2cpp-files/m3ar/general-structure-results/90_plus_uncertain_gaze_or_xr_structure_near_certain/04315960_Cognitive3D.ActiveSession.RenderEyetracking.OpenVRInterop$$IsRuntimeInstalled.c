/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.OpenVRInterop$$IsRuntimeInstalled
ENTRY_POINT: 04315960
PROGRAM: m3ar-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_OpenVRInterop__IsRuntimeInstalled(ulong param_1)

{
  long lVar1;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f737c8);
                    /* catch() { ... } // from try @ 04315950 with catch @ 04315974 */
    *(undefined1 *)(unaff_x21 + 0xdef) = 1;
  }
                    /* try { // try from 04315978 to 0441597f has its CatchHandler @ 04315988 */
  if (*(long *)(unaff_x20 + 0x10) != 0) {
                    /* try { // try from 04315980 to 0441598b has its CatchHandler @ 04315514 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04315978 with catch @ 04315988
                        */
    FUN_0576a5dc(*(long *)(unaff_x20 + 0x10),unaff_w19,*(undefined8 *)PTR_DAT_08f737c8);
    lVar1 = *(long *)(unaff_x20 + 0x40);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x043159b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),unaff_w19,1,*(undefined8 *)(lVar1 + 0x28));
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


