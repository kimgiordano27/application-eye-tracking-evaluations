/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StartDiscoveringColocationSessions
ENTRY_POINT: 04d4097c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StartDiscoveringColocationSessions
               (long param_1,long param_2,void *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long unaff_x22;
  
  memcpy((void *)(param_2 + 8),param_3,0x1000);
  lVar2 = *(long *)(param_4 + 0x20);
  lVar3 = lVar2;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0(lVar2);
    lVar3 = *(long *)(param_4 + 0x20);
  }
  pcVar4 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0xc0) + 0x270);
  memcpy(&stack0x00000008,&stack0x00001008,0x1000);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    FUN_02d9a2e0(lVar3);
  }
  iVar1 = (*pcVar4)();
  if (*(long *)(unaff_x22 + 0x28) != param_1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 == 0);
  }
  return;
}


