/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StopAdvertisingColocationSession
ENTRY_POINT: 05825490
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


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StopAdvertisingColocationSession
               (long param_1,long param_2)

{
  long lVar1;
  void *unaff_x19;
  size_t unaff_x20;
  void *unaff_x21;
  undefined8 uVar2;
  long unaff_x24;
  long unaff_x29;
  
  uVar2 = **(undefined8 **)(*(long *)(param_2 + 0xc0) + 0x18);
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02feb2c4(param_1);
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x18);
  *(void **)(unaff_x29 + -0x10) = unaff_x21;
  (**(code **)(lVar1 + 0x10))(uVar2);
  memcpy(unaff_x19,unaff_x21,unaff_x20);
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


