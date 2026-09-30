/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher.<OnAnchorShareRequestReceived>d__28$$MoveNext
ENTRY_POINT: 0582b9a4
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


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28__MoveNext
               (void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  
  *(undefined1 *)(unaff_x20 + 0x363) = in_w8;
  puVar1 = PTR_DAT_06f6d6a0;
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4();
  }
  uVar4 = **(undefined8 **)(lVar2 + 0xc0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*(long *)puVar1);
  }
  plVar3 = (long *)FUN_05afde1c(uVar4,0);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
    uVar4 = FUN_06444908(uVar4,0);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4(lVar2);
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4();
    }
    **(undefined8 **)(lVar2 + 0xb8) = uVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


