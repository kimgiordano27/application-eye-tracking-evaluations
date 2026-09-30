/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestReceived
ENTRY_POINT: 0582a084
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


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestReceived
               (ulong param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = *(long **)(unaff_x20 + 0x6a0);
  if ((param_1 & 1) == 0) {
    param_2 = FUN_02feb2c4();
  }
  uVar3 = **(undefined8 **)(param_2 + 0xc0);
  if (*(int *)(*plVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*plVar2);
  }
  plVar2 = (long *)FUN_05afde1c(uVar3,0);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x2e8))(plVar2,*(undefined8 *)(*plVar2 + 0x2f0));
    uVar3 = FUN_06444908(uVar3,0);
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4(lVar1);
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4();
    }
    **(undefined8 **)(lVar1 + 0xb8) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


