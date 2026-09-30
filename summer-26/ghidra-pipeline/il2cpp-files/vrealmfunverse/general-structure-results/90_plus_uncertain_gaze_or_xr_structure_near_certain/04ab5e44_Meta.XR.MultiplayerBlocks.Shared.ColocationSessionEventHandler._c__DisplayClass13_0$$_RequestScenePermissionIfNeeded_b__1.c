/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<>c__DisplayClass13_0$$<RequestScenePermissionIfNeeded>b__1
ENTRY_POINT: 04ab5e44
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_4;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<>c__DisplayClass13_0__<RequestScenePermissionIfNeeded>b__1
               (void)

{
  int in_w8;
  long lVar1;
  int *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  
  while (unaff_w22 = unaff_w22 + 1, unaff_w22 < in_w8) {
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    FUN_04ab5c58();
    in_w8 = *unaff_x19;
  }
  *unaff_x19 = unaff_w21;
  if (1 < unaff_w21) {
    lVar1 = *(long *)(unaff_x19 + 4);
    if ((lVar1 == 0) || (*(int *)(lVar1 + 0x18) < unaff_w21 + -1)) {
      lVar1 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02b76218();
      }
      FUN_030a2c1c(unaff_x19 + 4,unaff_w21 + -1,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x60));
      return;
    }
  }
  return;
}


