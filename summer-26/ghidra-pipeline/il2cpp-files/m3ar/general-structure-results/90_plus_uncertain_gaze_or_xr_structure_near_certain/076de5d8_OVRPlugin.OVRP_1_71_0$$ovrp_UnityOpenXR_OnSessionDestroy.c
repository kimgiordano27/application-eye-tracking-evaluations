/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionDestroy
ENTRY_POINT: 076de5d8
PROGRAM: m3ar-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionDestroy(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  float fVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uStack0000000000000000;
  float fStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined4 uStack0000000000000020;
  
                    /* try { // try from 076de5f0 to 077de607 has its CatchHandler @ 076de918 */
  uStack0000000000000020 = 0;
  _fStack0000000000000008 = 0;
  uStack0000000000000000 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  uVar3 = FUN_084f1fb4();
  uVar1 = uStack0000000000000000;
  if ((uVar3 & 1) != 0) {
    fVar2 = fStack0000000000000008;
    uVar6 = *param_2;
                    /* try { // try from 076de620 to 077de627 has its CatchHandler @ 076de900 */
    fVar7 = *(float *)(param_2 + 1);
    if (DAT_09539e19 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e19 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar4 = (float)uVar1 - (float)uVar6;
    fVar5 = (float)((ulong)uVar1 >> 0x20) - (float)((ulong)uVar6 >> 0x20);
    *(float *)(param_2 + 1) = fStack0000000000000008;
    *param_2 = uStack0000000000000000;
    if (*(float *)(param_1 + 0x28) <
        SQRT((fVar2 - fVar7) * (fVar2 - fVar7) + fVar4 * fVar4 + fVar5 * fVar5)) {
      return 0;
    }
  }
  return 1;
}


