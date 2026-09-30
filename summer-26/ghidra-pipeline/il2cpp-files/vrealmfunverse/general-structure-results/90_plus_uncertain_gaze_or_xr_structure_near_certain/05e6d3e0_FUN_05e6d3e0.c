/*
FUNCTION_NAME: FUN_05e6d3e0
ENTRY_POINT: 05e6d3e0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05e6d3e0(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_066dc691 & 1) == 0) {
    FUN_02b3c81c(Method_OVRTask_Builder_ToResultTask<OVRColocationSession_Result>__);
    FUN_02b3c81c(Method_OVRTask_Builder_ToResultTask<OVRPlugin_Result>__);
    DAT_066dc691 = 1;
  }
  puVar2 = Method_OVRTask_Builder_ToResultTask<OVRColocationSession_Result>__;
  lVar3 = *(long *)(param_1 + 8);
  while (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (param_2 < (int)uVar1) {
      return;
    }
    lVar5 = *(long *)(lVar3 + 0x10);
    lVar6 = *(long *)puVar2;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar5 == 0) break;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      puVar4 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *puVar4 = 0;
      thunk_FUN_02bb0e9c(puVar4,0);
    }
    else {
      FUN_037a6538(lVar3,0,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) break;
    lVar5 = *(long *)(lVar3 + 0x10);
    lVar6 = *(long *)puVar2;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      puVar4 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *puVar4 = 0;
      thunk_FUN_02bb0e9c(puVar4,0);
    }
    else {
      FUN_037a6538(lVar3,0,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = *(long *)(param_1 + 8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


