/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestCompleted
ENTRY_POINT: 0582a14c
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


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestCompleted
               (long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_06f6d6a0;
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02feb2c4();
  }
  uVar4 = **(undefined8 **)(param_1 + 0xc0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*(long *)puVar1);
  }
  plVar2 = (long *)FUN_05afde1c(uVar4,0);
  if (plVar2 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar2 + 0x2e8))(plVar2,*(undefined8 *)(*plVar2 + 0x2f0));
    uVar4 = FUN_06444908(uVar4,0);
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4(lVar3);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4();
    }
    **(undefined8 **)(lVar3 + 0xb8) = uVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


