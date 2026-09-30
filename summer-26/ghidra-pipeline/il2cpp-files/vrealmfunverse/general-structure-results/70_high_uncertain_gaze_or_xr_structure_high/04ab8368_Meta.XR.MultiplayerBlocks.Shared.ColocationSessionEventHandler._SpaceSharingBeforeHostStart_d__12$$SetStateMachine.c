/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<SpaceSharingBeforeHostStart>d__12$$SetStateMachine
ENTRY_POINT: 04ab8368
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<SpaceSharingBeforeHostStart>d__12__SetStateMachine
               (long param_1,undefined8 param_2,int *param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02b76218(param_1);
  }
  uVar1 = FUN_0341cd48(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x80));
  if (0 < *param_3) {
    iVar5 = 0;
    do {
      lVar2 = *(long *)(param_4 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02b76218();
      }
      uVar3 = FUN_04ab7260(param_3,iVar5,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x78));
      lVar2 = *(long *)(param_4 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02b76218(lVar2);
      }
      uVar4 = FUN_04ab822c(param_2,uVar3,uVar1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xf0));
      if ((uVar4 & 1) == 0) {
        lVar2 = *(long *)(param_4 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02b76218();
        }
        FUN_04ab769c(param_2,uVar3,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xb0));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *param_3);
  }
  return;
}


