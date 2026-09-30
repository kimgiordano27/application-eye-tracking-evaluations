/*
FUNCTION_NAME: FUN_00c8d3c0
ENTRY_POINT: 00c8d3c0
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


void FUN_00c8d3c0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined2 local_48 [4];
  undefined2 local_40 [4];
  undefined2 local_38 [4];
  undefined2 local_28 [4];
  
  if (DAT_037819f4 == '\0') {
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(OVRTelemetryConstants_OVRManager_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrsqrtes_f32__);
    DAT_037819f4 = '\x01';
  }
  plVar2 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,4);
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrsqrtes_f32__;
  local_28[0] = *(undefined2 *)(param_1 + 0x10);
  lVar3 = thunk_FUN_00d61fa0(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrsqrtes_f32__,
                             local_28);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_00c8d55c:
    uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    local_38[0] = *(undefined2 *)(param_1 + 0x12);
    lVar3 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,local_38);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_00c8d55c;
    if (1 < *(uint *)(plVar2 + 3)) {
      plVar2[5] = lVar3;
      local_40[0] = *(undefined2 *)(param_1 + 0x14);
      lVar3 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,local_40);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_00c8d55c;
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lVar3;
        local_48[0] = *(undefined2 *)(param_1 + 0x16);
        lVar3 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,local_48);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
        goto LAB_00c8d55c;
        if (3 < *(uint *)(plVar2 + 3)) {
          plVar2[7] = lVar3;
          FUN_01600be4(*(undefined8 *)OVRTelemetryConstants_OVRManager_TypeInfo,plVar2,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


