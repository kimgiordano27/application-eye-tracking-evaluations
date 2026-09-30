/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnDestroy
ENTRY_POINT: 05b354cc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnDestroy(void)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  long *unaff_x22;
  
  lVar2 = thunk_FUN_0322f04c();
  if (lVar2 != 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      FUN_0322bef4(lVar2);
    }
    lVar2 = thunk_FUN_0322f04c();
    if (lVar2 != 0) {
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4(lVar2);
      }
      if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar2 + 0x40)) {
LAB_05b35608:
                    /* WARNING: Subroutine does not return */
        FUN_031f2730();
      }
      pvVar3 = (void *)thunk_FUN_0322f29c();
      memcpy(&stack0x00000048,pvVar3,0x48);
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4(lVar2);
      }
      if (*(long *)(*unaff_x20 + 0x40) != *(long *)(lVar2 + 0x40)) goto LAB_05b35608;
      pvVar3 = (void *)thunk_FUN_0322f29c();
      memcpy(&stack0x00000000,pvVar3,0x48);
      pcVar4 = *(code **)(*unaff_x19 + 0x1b8);
      memcpy(&stack0x000000d8,&stack0x00000048,0x48);
      memcpy(&stack0x00000090,&stack0x00000000,0x48);
      uVar1 = (*pcVar4)();
      goto LAB_05b355f0;
    }
  }
  FUN_05e223a8(2,0);
  uVar1 = 0;
LAB_05b355f0:
  return uVar1 & 1;
}


