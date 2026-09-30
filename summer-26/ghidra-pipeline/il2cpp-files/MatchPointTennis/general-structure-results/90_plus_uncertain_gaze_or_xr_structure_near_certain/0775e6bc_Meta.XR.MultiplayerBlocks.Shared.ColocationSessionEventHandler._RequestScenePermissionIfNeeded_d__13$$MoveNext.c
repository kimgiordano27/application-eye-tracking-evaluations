/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<RequestScenePermissionIfNeeded>d__13$$MoveNext
ENTRY_POINT: 0775e6bc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_4;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<RequestScenePermissionIfNeeded>d__13__MoveNext
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)FUN_044822ac();
LAB_0775e6dc:
      (*(code *)*puVar1)();
      if (unaff_x19 == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_04447e3c();
    }
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_0775e6dc;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


