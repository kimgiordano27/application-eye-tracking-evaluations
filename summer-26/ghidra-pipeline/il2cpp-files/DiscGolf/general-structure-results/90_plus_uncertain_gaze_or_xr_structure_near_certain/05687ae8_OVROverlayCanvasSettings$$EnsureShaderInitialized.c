/*
FUNCTION_NAME: OVROverlayCanvasSettings$$EnsureShaderInitialized
ENTRY_POINT: 05687ae8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_5;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void OVROverlayCanvasSettings__EnsureShaderInitialized(void)

{
  undefined4 uVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  long in_stack_00000008;
  
  lVar3 = *(long *)(unaff_x20 + 0x200);
  uVar1 = FUN_05661968();
  if (lVar3 != 0) {
    uVar2 = FUN_04dfa0cc(lVar3,uVar1,&stack0x00000008,
                         *(undefined8 *)
                          System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (in_stack_00000008 != 0) {
      FUN_05687b68();
      lVar3 = *(long *)(unaff_x20 + 0x200);
      uVar1 = FUN_05661968();
      if (lVar3 != 0) {
        FUN_04df9a98(lVar3,uVar1,
                     *(undefined8 *)
                      System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


