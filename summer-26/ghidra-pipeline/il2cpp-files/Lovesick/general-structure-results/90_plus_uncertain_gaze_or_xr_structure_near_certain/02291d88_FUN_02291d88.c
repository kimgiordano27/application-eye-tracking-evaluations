/*
FUNCTION_NAME: FUN_02291d88
ENTRY_POINT: 02291d88
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_02291d88(undefined2 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined2 local_48 [4];
  undefined2 local_40 [4];
  undefined2 local_38 [4];
  undefined2 local_28 [4];
  
  puVar2 = StringLiteral_3033;
                    /* try { // try from 02291d88 to 02391df3 has its CatchHandler @ 02291b04 */
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrsqrtes_f32__;
  if ((DAT_037819e4 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(OVRTelemetryConstants_OVRManager_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrsqrtes_f32__);
    DAT_037819e4 = 1;
  }
  plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,4);
                    /* try { // try from 02291df4 to 02391e07 has its CatchHandler @ 02291e0c */
  local_28[0] = *param_1;
  lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,local_28);
                    /* try { // try from 02291e08 to 02391e33 has its CatchHandler @ 02291b04 */
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
                    /* catch() { ... } // from try @ 02291df4 with catch @ 02291e0c */
                    /* catch() { ... } // from try @ 02291d80 with catch @ 02291e10 */
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_02291f24:
    uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    local_38[0] = param_1[1];
    lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,local_38);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_02291f24;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      local_40[0] = param_1[2];
      lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,local_40);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_02291f24;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        local_48[0] = param_1[3];
        lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,local_48);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_02291f24;
        puVar1 = OVRTelemetryConstants_OVRManager_TypeInfo;
        if (3 < *(uint *)(plVar3 + 3)) {
          plVar3[7] = lVar4;
          FUN_01600be4(*(undefined8 *)puVar1,plVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


