/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnSessionCreatedWithSpatialAnchor
ENTRY_POINT: 0566b820
PROGRAM: waitwhat-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8
Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor
          (long *param_1,long *param_2,long *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_2 == param_3) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if ((param_2 != (long *)0x0) && (param_3 != (long *)0x0)) {
      lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_031c09d4(lVar4);
      }
      lVar4 = thunk_FUN_031c3cac(param_2,lVar4);
      if (lVar4 != 0) {
        lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_031c09d4(lVar4);
        }
        lVar4 = thunk_FUN_031c3cac(param_3,lVar4);
        if (lVar4 != 0) {
          lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_031c09d4(lVar4);
          }
          if (*(long *)(*param_2 + 0x40) == *(long *)(lVar4 + 0x40)) {
            puVar3 = (undefined8 *)thunk_FUN_031c3ef0(param_2);
            uVar2 = *puVar3;
            uVar1 = puVar3[1];
            lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_031c09d4(lVar4);
            }
            param_2 = param_3;
            if (*(long *)(*param_3 + 0x40) == *(long *)(lVar4 + 0x40)) {
              puVar3 = (undefined8 *)thunk_FUN_031c3ef0();
                    /* WARNING: Could not recover jumptable at 0x0566b950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar2 = (**(code **)(*param_1 + 0x1b8))
                                (param_1,uVar2,uVar1,*puVar3,puVar3[1],
                                 *(undefined8 *)(*param_1 + 0x1c0));
              return uVar2;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03189058(param_2);
        }
      }
      FUN_0595040c(2,0);
      uVar2 = 0;
    }
  }
  return uVar2;
}


