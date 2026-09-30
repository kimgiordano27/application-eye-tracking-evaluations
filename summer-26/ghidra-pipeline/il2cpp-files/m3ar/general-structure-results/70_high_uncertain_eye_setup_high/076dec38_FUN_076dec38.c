/*
FUNCTION_NAME: FUN_076dec38
ENTRY_POINT: 076dec38
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
FUN_076dec38(float param_1,float param_2,float param_3,float param_4,long param_5,float *param_6,
            undefined8 *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
                    /* try { // try from 076dec5c to 077dec6b has its CatchHandler @ 076dec84 */
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
                    /* try { // try from 076dec6c to 077dec8b has its CatchHandler @ 076de284 */
  param_7[1] = 0;
  param_7[2] = 0;
  *param_7 = 0;
  *(undefined4 *)(param_7 + 3) = 0;
  fVar1 = (float)OVRPlugin_OVRP_1_79_0__ovrp_QplMarkerPointCached();
                    /* catch() { ... } // from try @ 076dec5c with catch @ 076dec84 */
                    /* catch() { ... } // from try @ 076dea94 with catch @ 076dec88 */
                    /* try { // try from 076dec8c to 077dec8f has its CatchHandler @ 076dec98 */
                    /* try { // try from 076dec90 to 077dec9f has its CatchHandler @ 076de284 */
  if (*(char *)(param_5 + 0x24) == '\0') {
    uStack_78 = *(undefined8 *)(param_6 + 2);
    uVar5 = *(undefined8 *)param_6;
                    /* catch() { ... } // from try @ 076dec8c with catch @ 076dec98 */
    local_70 = *(undefined8 *)(param_6 + 4);
    local_80._0_4_ = (float)uVar5;
    fVar9 = (float)local_80;
    local_80._4_4_ = (float)((ulong)uVar5 >> 0x20);
    fVar7 = local_80._4_4_;
    fVar8 = (float)uStack_78;
    fVar10 = param_3;
    fVar3 = param_4;
    fVar6 = param_2;
    local_80 = uVar5;
    fVar2 = (float)OVRPlugin_OVRP_1_79_0__ovrp_QplMarkerPointCached(param_5);
    if (fVar3 + fVar8 * fVar10 + fVar9 * fVar2 + fVar7 * fVar6 <= 0.0) {
      return 0;
    }
  }
  fVar7 = param_6[1];
  fVar9 = param_6[2];
  fVar10 = *param_6;
  fVar8 = param_3 * param_6[5] + fVar1 * param_6[3] + param_2 * param_6[4];
  if (DAT_09539e11 == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_09539e11 = '\x01';
  }
  fVar3 = ABS(fVar8);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar2 = **(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) * 8.0;
  fVar6 = fVar3 * DAT_01a2ee44;
  if (fVar3 * DAT_01a2ee44 <= fVar2) {
    fVar6 = fVar2;
  }
  if (fVar6 <= ABS(0.0 - fVar8)) {
    fVar9 = param_3 * fVar9;
    fVar8 = (-(fVar9 + fVar1 * fVar10 + param_2 * fVar7) - param_4) / fVar8;
    if ((0.0 < fVar8) && ((param_1 <= 0.0 || (fVar8 <= param_1)))) {
      uStack_78 = *(undefined8 *)(param_6 + 2);
      local_80 = *(undefined8 *)param_6;
      local_70 = *(undefined8 *)(param_6 + 4);
      uVar4 = FUN_0853dbe0(fVar8,&local_80,0);
      *(undefined4 *)param_7 = uVar4;
      *(float *)((long)param_7 + 4) = fVar9;
      *(float *)(param_7 + 1) = fVar2;
      *(float *)((long)param_7 + 0xc) = fVar1;
      *(float *)(param_7 + 2) = param_2;
      *(float *)((long)param_7 + 0x14) = param_3;
      *(float *)(param_7 + 3) = fVar8;
      return 1;
    }
  }
  return 0;
}


