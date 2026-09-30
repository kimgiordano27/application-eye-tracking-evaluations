/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$Start
ENTRY_POINT: 05b41518
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__Start(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  FUN_0367c9fc();
  lVar1 = thunk_FUN_0367fd24();
  if (lVar1 != 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      FUN_0367c9fc(lVar1);
    }
    lVar1 = thunk_FUN_0367fd24();
    if (lVar1 != 0) {
      lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc(lVar1);
      }
      if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar1 + 0x40)) {
        thunk_FUN_0367ff68();
        lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0367c9fc(lVar1);
        }
        if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar1 + 0x40)) {
          thunk_FUN_0367ff68();
                    /* WARNING: Could not recover jumptable at 0x05b41604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(*unaff_x19 + 0x1b8))();
          return uVar2;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03643084();
    }
  }
  FUN_05e390e4(2,0);
  return 0;
}


