/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher.<OnAnchorShareRequestReceived>d__28$$SetStateMachine
ENTRY_POINT: 06e2dca0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


byte Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28__SetStateMachine
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long unaff_x19;
  int iVar4;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  long lStack0000000000000018;
  
  puVar2 = PTR_DAT_08e93640;
  puVar1 = PTR_DAT_08e93638;
  uStack0000000000000008 = 0;
  uStack0000000000000010 = 0;
  lStack0000000000000018 = 0;
  if (*(long *)(unaff_x19 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  FUN_05213710(&stack0x00000008,*(long *)(unaff_x19 + 0x78),*(undefined8 *)PTR_DAT_08e93658);
  do {
    bVar3 = FUN_049dc4d0(&stack0x00000008,*(undefined8 *)puVar2);
    if ((bVar3 & 1) == 0) {
      iVar4 = 5;
      goto LAB_06e2dd10;
    }
    if (lStack0000000000000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
  } while ((*(long *)(lStack0000000000000018 + 0x10) == 0) ||
          (*(int *)(*(long *)(lStack0000000000000018 + 0x10) + 0x58) != 1));
  iVar4 = 4;
LAB_06e2dd10:
  FUN_049dc4cc(&stack0x00000008,*(undefined8 *)puVar1);
  return bVar3 & iVar4 == 4;
}


