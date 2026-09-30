/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionDiscoveredWithSpaceSharing>d__16$$SetStateMachine
ENTRY_POINT: 08a82084
PROGRAM: Hyper-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionDiscoveredWithSpaceSharing>d__16__SetStateMachine
               (long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *in_x10;
  int *piVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar2 != 0) {
    piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == *in_x10) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar3 * 0x10 + 0x138);
        goto LAB_08a820d4;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar2 != 0);
  }
  puVar1 = (undefined8 *)FUN_04980e68();
LAB_08a820d4:
  (*(code *)*puVar1)();
  if (unaff_x20 != 0) {
    if (*(long *)(unaff_x20 + 0x140) != 0) {
      FUN_08a3ddb4(*(long *)(unaff_x20 + 0x140),0);
    }
    *(undefined8 *)(unaff_x20 + 0x140) = 0;
    thunk_FUN_049ee3d8(unaff_x20 + 0x140,0);
    *unaff_x19 = 0xfffffffe;
    FUN_08c815e4(unaff_x19 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


