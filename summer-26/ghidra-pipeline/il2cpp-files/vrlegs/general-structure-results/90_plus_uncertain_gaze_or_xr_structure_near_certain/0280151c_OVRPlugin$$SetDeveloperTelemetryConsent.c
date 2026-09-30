/*
FUNCTION_NAME: OVRPlugin$$SetDeveloperTelemetryConsent
ENTRY_POINT: 0280151c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__SetDeveloperTelemetryConsent(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_0412531a & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cfdb98);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    DAT_0412531a = 1;
  }
  FUN_0280399c(param_1);
  puVar2 = PTR_DAT_03cfdb98;
  puVar1 = PTR_DAT_03cbe5e8;
  if (param_2 != 0) {
    *(long *)(param_1 + 0x78) = param_2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((long *)(param_1 + 0x78),param_2);
    *(undefined4 *)(param_1 + 0x94) = 1;
    uVar4 = thunk_FUN_01a5dd74(param_1,0);
    uVar5 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar1);
    }
    uVar5 = FUN_0277b678(uVar5,0);
    bVar3 = FUN_02786d28(uVar4,uVar5,0);
    *(byte *)(param_1 + 0x72) = bVar3 & 1;
    return;
  }
  thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
  uVar4 = thunk_FUN_01a89e68();
  uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cf68d8);
  FUN_026a44fc(uVar4,uVar5,0);
  uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfdba0);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar4,uVar5);
}


