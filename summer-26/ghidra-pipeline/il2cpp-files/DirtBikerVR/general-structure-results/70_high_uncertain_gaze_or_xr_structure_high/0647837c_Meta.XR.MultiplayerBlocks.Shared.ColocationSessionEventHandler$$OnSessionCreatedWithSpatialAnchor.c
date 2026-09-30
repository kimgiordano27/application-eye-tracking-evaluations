/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnSessionCreatedWithSpatialAnchor
ENTRY_POINT: 0647837c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long in_x9;
  
  lVar1 = *(long *)(*(long *)(in_x9 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090(lVar1);
    in_x9 = *(long *)(param_4 + 0x20);
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 8) != 0) {
    lVar1 = *(long *)(*(long *)(in_x9 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03ac4090();
      in_x9 = *(long *)(param_4 + 0x20);
    }
    if (**(long **)(lVar1 + 0xb8) != 0) {
      lVar1 = *(long *)(*(long *)(in_x9 + 0xc0) + 0x18);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03ac4090();
        in_x9 = *(long *)(param_4 + 0x20);
      }
      if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x20) != 0) goto LAB_06478424;
    }
  }
  (*(code *)**(undefined8 **)(*(long *)(in_x9 + 0xc0) + 0x30))(param_1);
  in_x9 = *(long *)(param_4 + 0x20);
LAB_06478424:
  lVar1 = *(long *)(*(long *)(in_x9 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0647846c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x50))
              (lVar1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


