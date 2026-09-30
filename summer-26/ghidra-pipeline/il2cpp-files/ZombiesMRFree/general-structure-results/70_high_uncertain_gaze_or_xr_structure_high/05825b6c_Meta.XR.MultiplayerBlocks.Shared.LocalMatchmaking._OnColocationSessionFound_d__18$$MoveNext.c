/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<OnColocationSessionFound>d__18$$MoveNext
ENTRY_POINT: 05825b6c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<OnColocationSessionFound>d__18__MoveNext
               (long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_06f6d6a0;
  if ((DAT_07395321 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6d6a0);
    FUN_02fe925c(PTR_DAT_06f9d0f0);
    DAT_07395321 = 1;
  }
  uVar4 = **(undefined8 **)(*(long *)(param_2 + 0x20) + 0xc0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  plVar2 = (long *)FUN_05afde1c(uVar4,0);
  if (plVar2 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    puVar1 = PTR_DAT_06f9d0f0;
    plVar2 = *(long **)(param_1 + 0x68);
    if (plVar2 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
      FUN_059725f8(*(undefined8 *)puVar1,uVar4,uVar3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


