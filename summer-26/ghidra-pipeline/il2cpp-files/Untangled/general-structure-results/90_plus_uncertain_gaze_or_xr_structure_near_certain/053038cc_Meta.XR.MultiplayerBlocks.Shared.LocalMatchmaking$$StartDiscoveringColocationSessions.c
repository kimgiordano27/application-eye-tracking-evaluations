/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StartDiscoveringColocationSessions
ENTRY_POINT: 053038cc
PROGRAM: Untangled-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05303930) */

void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StartDiscoveringColocationSessions
               (long param_1)

{
  long lVar1;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 in_stack_00000008;
  
  do {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    do {
      lVar1 = FUN_0446c9e0(param_1,*unaff_x21);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      lVar1 = *unaff_x20;
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x20;
      }
      param_1 = **(long **)(lVar1 + 0xb8);
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(int *)(param_1 + 0x20) < 1) {
        if (in_stack_00000008._4_1_ != '\0') {
          thunk_FUN_02eb9f78();
        }
        return;
      }
    } while (*(int *)(lVar1 + 0xe0) != 0);
    thunk_FUN_02f12b58();
    param_1 = **(long **)(*unaff_x20 + 0xb8);
  } while( true );
}


