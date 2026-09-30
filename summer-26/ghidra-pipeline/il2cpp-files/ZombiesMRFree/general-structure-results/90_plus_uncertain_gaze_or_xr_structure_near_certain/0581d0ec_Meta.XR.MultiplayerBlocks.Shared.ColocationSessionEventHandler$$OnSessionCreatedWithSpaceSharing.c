/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnSessionCreatedWithSpaceSharing
ENTRY_POINT: 0581d0ec
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing
               (undefined8 param_1,undefined8 param_2,long param_3,uint param_4,int param_5,
               long param_6)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = (param_4 - param_5) + 1;
  if (iVar1 <= (int)param_4) {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    do {
      if (*(uint *)(param_3 + 0x18) <= param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      uVar2 = FUN_05b01824(param_1,param_3 + (long)(int)param_4 * 4 + 0x20,
                           *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x10));
      if ((uVar2 & 1) != 0) {
        return param_4;
      }
      param_4 = param_4 - 1;
    } while (iVar1 <= (int)param_4);
  }
  return 0xffffffff;
}


