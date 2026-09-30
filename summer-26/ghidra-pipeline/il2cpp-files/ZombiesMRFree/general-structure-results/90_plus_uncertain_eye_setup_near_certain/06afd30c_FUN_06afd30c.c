/*
FUNCTION_NAME: FUN_06afd30c
ENTRY_POINT: 06afd30c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_06afd30c(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  int local_34;
  
  if ((DAT_073ab37e & 1) == 0) {
    FUN_02fe925c(ParadoxNotion_Serialization_SerializedEventInfo_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6dd70);
    FUN_02fe925c(OVRPlugin_OVRP_1_39_0_TypeInfo);
    DAT_073ab37e = 1;
  }
  local_34 = 0;
  iVar1 = *(int *)(param_1 + 0x50);
  if ((iVar1 == 0) || (iVar2 = *(int *)(param_1 + 0x54), iVar2 == 0)) {
    lVar4 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    lVar4 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f6dd70);
    FUN_068e395c(lVar4,iVar1,iVar2,0,uVar3,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_068fd73c(lVar4,0x3d,0);
    local_34 = **(int **)(*(long *)ParadoxNotion_Serialization_SerializedEventInfo_TypeInfo + 0xb8);
    **(int **)(*(long *)ParadoxNotion_Serialization_SerializedEventInfo_TypeInfo + 0xb8) =
         local_34 + 1;
    uVar5 = FUN_05aec914(&local_34,0);
    uVar5 = FUN_059687dc(*(undefined8 *)OVRPlugin_OVRP_1_39_0_TypeInfo,uVar5,0);
    FUN_068fc96c(lVar4,uVar5,0);
    FUN_068dc620(lVar4,*(undefined4 *)(param_1 + 0x24),0);
  }
  return lVar4;
}


