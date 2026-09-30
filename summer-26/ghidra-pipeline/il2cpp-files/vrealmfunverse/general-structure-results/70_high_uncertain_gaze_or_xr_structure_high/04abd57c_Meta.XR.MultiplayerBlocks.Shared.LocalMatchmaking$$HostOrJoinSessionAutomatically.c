/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$HostOrJoinSessionAutomatically
ENTRY_POINT: 04abd57c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


int Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__HostOrJoinSessionAutomatically(long param_1)

{
  undefined1 in_CY;
  ulong uVar1;
  void *unaff_x19;
  int *unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  code *pcVar2;
  
  while( true ) {
    if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    memcpy(&stack0x00000000,(void *)(param_1 + unaff_x23),0x280);
    pcVar2 = *(code **)(*unaff_x21 + 0x1b8);
    memcpy(&stack0x00000500,&stack0x00000000,0x280);
    memcpy(&stack0x00000280,unaff_x19,0x280);
    uVar1 = (*pcVar2)();
    if ((uVar1 & 1) != 0) {
      return (int)unaff_x22 + 1;
    }
    unaff_x22 = unaff_x22 + 1;
    unaff_x23 = unaff_x23 + 0x280;
    if ((long)(*unaff_x20 + -1) <= (long)unaff_x22) {
      return -1;
    }
    param_1 = *(long *)(unaff_x20 + 0xa2);
    if (param_1 == 0) break;
    in_CY = *(uint *)(param_1 + 0x18) <= unaff_x22;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


