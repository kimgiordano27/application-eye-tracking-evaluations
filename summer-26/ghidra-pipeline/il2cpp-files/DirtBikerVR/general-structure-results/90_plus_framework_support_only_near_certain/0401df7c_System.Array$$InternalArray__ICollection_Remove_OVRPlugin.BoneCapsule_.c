/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.BoneCapsule>
ENTRY_POINT: 0401df7c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 145
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_BoneCapsule>
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
               long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if (*(long *)(param_6 + 0x38) == 0) {
    FUN_03ac40ec(param_6);
  }
  if (param_1 == 0) {
    thunk_FUN_03af1434(&DAT_08615058);
    uVar1 = thunk_FUN_03ac74bc();
    uVar2 = thunk_FUN_03af1434(&DAT_086a7228);
    FUN_066af6a0(uVar1,uVar2,0);
    goto LAB_0401e0a4;
  }
  if (param_4 < 0) {
LAB_0401dffc:
    thunk_FUN_03af1434(&DAT_08615060);
    uVar1 = thunk_FUN_03ac74bc();
    uVar2 = thunk_FUN_03af1434(&DAT_086b0140);
    puVar4 = &DAT_0868e988;
  }
  else {
    if (*(int *)(param_1 + 0x18) < param_4) goto LAB_0401dffc;
    if ((-1 < param_5) && (param_5 <= *(int *)(param_1 + 0x18) - param_4)) {
      FUN_0402a428(param_1,param_2,param_3,param_4,param_5,
                   *(undefined8 *)(*(long *)(param_6 + 0x38) + 0x10));
      return;
    }
    thunk_FUN_03af1434(&DAT_08615060);
    uVar1 = thunk_FUN_03ac74bc();
    uVar2 = thunk_FUN_03af1434(&DAT_086a8b20);
    puVar4 = &DAT_08688840;
  }
  uVar3 = thunk_FUN_03af1434(puVar4);
  System_Threading_CancellationToken__get_IsCancellationRequested(uVar1,uVar2,uVar3,0);
LAB_0401e0a4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar1,param_6);
}


