/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.FusionBBEvents$$add_OnConnectRequest
ENTRY_POINT: 052f4978
PROGRAM: Untangled-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Fusion_FusionBBEvents__add_OnConnectRequest(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x21;
  
  FUN_02f07e70();
  FUN_02f07e70(PTR_DAT_06d3dee8);
  *(undefined1 *)(unaff_x20 + 0x1ea) = 1;
  uVar4 = *(undefined8 *)(unaff_x19 + 0x58);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar2 = FUN_066cd30c(uVar4,0);
  if ((uVar2 & 1) != 0) {
    if (DAT_071bb30a == '\0') {
      FUN_02f07e70(PTR_DAT_06d07c90);
      DAT_071bb30a = '\x01';
    }
    puVar1 = PTR_DAT_06d07c90;
    uVar4 = **(undefined8 **)(*(long *)PTR_DAT_06d07c90 + 0xb8);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar2 = FUN_066cd30c(uVar4,0);
    if ((uVar2 & 1) != 0) {
      if (DAT_071bb30a == '\0') {
        FUN_02f07e70(PTR_DAT_06d07c90);
        DAT_071bb30a = '\x01';
      }
      uVar4 = *(undefined8 *)(unaff_x19 + 0x58);
      lVar5 = **(long **)(*(long *)puVar1 + 0xb8);
      lVar3 = FUN_066c67b0();
      if ((lVar3 == 0) || (FUN_066d48c0(lVar3,0), lVar5 == 0)) goto LAB_052f4a88;
      FUN_052a04c0(lVar5,uVar4,0);
    }
  }
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    FUN_04759f10();
    return;
  }
LAB_052f4a88:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


