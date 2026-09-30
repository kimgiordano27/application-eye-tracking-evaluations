/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StopDiscoveringColocationSessions
ENTRY_POINT: 04d40a2c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StopDiscoveringColocationSessions
               (void *param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  
  memset(param_1,0,0x200);
  lVar3 = *(long *)(param_3 + 0x20);
  uVar1 = *(ushort *)(lVar3 + 0x135);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_02d9a2e0(lVar3);
    uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar2 = *(long *)(param_3 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x278);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_02d9a2e0(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x04d40abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x278));
  return;
}


