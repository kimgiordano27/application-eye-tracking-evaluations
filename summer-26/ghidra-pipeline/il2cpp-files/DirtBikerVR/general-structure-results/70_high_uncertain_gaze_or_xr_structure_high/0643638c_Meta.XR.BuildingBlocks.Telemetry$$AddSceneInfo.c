/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddSceneInfo
ENTRY_POINT: 0643638c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_BuildingBlocks_Telemetry__AddSceneInfo
          (long *param_1,long *param_2,long *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((param_2 != (long *)0x0) && (param_3 != (long *)0x0)) {
    lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03ac4090(lVar4);
    }
    lVar4 = thunk_FUN_03ac73c0(param_2,lVar4);
    if (lVar4 != 0) {
      lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03ac4090(lVar4);
      }
      lVar4 = thunk_FUN_03ac73c0(param_3,lVar4);
      if (lVar4 != 0) {
        lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03ac4090(lVar4);
        }
        if (*(long *)(*param_2 + 0x40) == *(long *)(lVar4 + 0x40)) {
          puVar2 = (undefined8 *)thunk_FUN_03ac7604(param_2);
          uVar3 = *puVar2;
          uVar1 = puVar2[1];
          lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03ac4090(lVar4);
          }
          param_2 = param_3;
          if (*(long *)(*param_3 + 0x40) == *(long *)(lVar4 + 0x40)) {
            puVar2 = (undefined8 *)thunk_FUN_03ac7604();
                    /* WARNING: Could not recover jumptable at 0x064364b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar3 = (**(code **)(*param_1 + 0x1b8))
                              (param_1,uVar3,uVar1,*puVar2,puVar2[1],
                               *(undefined8 *)(*param_1 + 0x1c0));
            return uVar3;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(param_2);
      }
    }
    FUN_0677195c(2,0);
  }
  return 0;
}


