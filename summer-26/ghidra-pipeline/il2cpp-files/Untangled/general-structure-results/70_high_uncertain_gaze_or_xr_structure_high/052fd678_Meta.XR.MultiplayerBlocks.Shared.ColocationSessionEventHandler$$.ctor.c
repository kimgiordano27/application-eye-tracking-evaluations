/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$.ctor
ENTRY_POINT: 052fd678
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


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler___ctor
               (long param_1,long param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  long *unaff_x24;
  undefined8 *unaff_x25;
  
  do {
    param_3 = FUN_02eca9b4(param_1,param_2,param_3);
    if (unaff_x20 == param_3) {
      return;
    }
    lVar1 = FUN_05648f2c(param_3);
    if (lVar1 == 0) {
      param_2 = 0;
    }
    else {
      uVar2 = *unaff_x25;
      param_2 = thunk_FUN_02ef170c(lVar1,uVar2);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(lVar1,uVar2);
      }
    }
    lVar1 = *unaff_x24;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x24;
    }
    param_1 = *(long *)(lVar1 + 0xb8) + 0x10;
    unaff_x20 = param_3;
  } while( true );
}


