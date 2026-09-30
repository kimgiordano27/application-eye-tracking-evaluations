/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionMessenger$$add_AnchorShareRequestReceived
ENTRY_POINT: 05665da8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionMessenger__add_AnchorShareRequestReceived
               (long *param_1,long param_2,long *param_3,long param_4)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  code *pcVar4;
  long *unaff_x22;
  
  uVar1 = 0;
  if ((param_2 != 0) && (param_3 != (long *)0x0)) {
    lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      FUN_031c09d4(lVar3);
    }
    lVar3 = thunk_FUN_031c3cac();
    if (lVar3 != 0) {
      lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
      }
      lVar3 = thunk_FUN_031c3cac(param_3,lVar3);
      if (lVar3 != 0) {
        lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_031c09d4(lVar3);
        }
        if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar3 + 0x40)) {
          pvVar2 = (void *)thunk_FUN_031c3ef0();
          memcpy(&stack0x000000a8,pvVar2,0xa8);
          lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_031c09d4(lVar3);
          }
          if (*(long *)(*param_3 + 0x40) == *(long *)(lVar3 + 0x40)) {
            pvVar2 = (void *)thunk_FUN_031c3ef0(param_3);
            memcpy(&stack0x00000000,pvVar2,0xa8);
            lVar3 = *param_1;
            pcVar4 = *(code **)(lVar3 + 0x1b8);
            memcpy(&stack0x000001f8,&stack0x000000a8,0xa8);
            memcpy(&stack0x00000150,&stack0x00000000,0xa8);
            uVar1 = (*pcVar4)(param_1,&stack0x000001f8,&stack0x00000150,
                              *(undefined8 *)(lVar3 + 0x1c0));
            goto LAB_05665f18;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03189058();
      }
    }
    FUN_0595040c(2,0);
    uVar1 = 0;
  }
LAB_05665f18:
  return uVar1 & 1;
}


