/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 060d7838
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__SendEvent(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
                    /* try { // try from 060d7838 to 061d786f has its CatchHandler @ 060d7a00 */
  if ((DAT_07ee0ad4 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a24690);
    DAT_07ee0ad4 = 1;
  }
  puVar1 = PTR_DAT_07a24690;
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar2 = thunk_FUN_0718a308(*(long *)(param_1 + 0x40),0);
    lVar3 = *(long *)puVar1;
                    /* try { // try from 060d7880 to 061d7887 has its CatchHandler @ 060d79f4 */
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978(lVar3);
    }
    if (lVar2 != 0) {
                    /* try { // try from 060d78a4 to 061d78af has its CatchHandler @ 060d79f0 */
      uVar4 = 0x3f800000;
      if ((param_2 & 1) == 0) {
        uVar4 = 0;
      }
      thunk_FUN_0718f4b8(uVar4,lVar2,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 4),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 060d78c4 to 061d78cb has its CatchHandler @ 060d7a08 */
  FUN_03642c18();
}


