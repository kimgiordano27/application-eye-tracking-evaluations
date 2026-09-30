/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$OnPanelActiveStateChanged
ENTRY_POINT: 05631f28
PROGRAM: waitwhat-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_ImmersiveDebugger_Telemetry__OnPanelActiveStateChanged
          (long *param_1,long *param_2,long *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 == param_3) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if ((param_2 != (long *)0x0) && (param_3 != (long *)0x0)) {
      lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
      }
      lVar3 = thunk_FUN_031c3cac(param_2,lVar3);
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
          if (*(long *)(*param_2 + 0x40) == *(long *)(lVar3 + 0x40)) {
            puVar2 = (undefined8 *)thunk_FUN_031c3ef0(param_2);
            uVar1 = *puVar2;
            lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_031c09d4(lVar3);
            }
            param_2 = param_3;
            if (*(long *)(*param_3 + 0x40) == *(long *)(lVar3 + 0x40)) {
              puVar2 = (undefined8 *)thunk_FUN_031c3ef0();
                    /* WARNING: Could not recover jumptable at 0x0563205c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar1 = (**(code **)(*param_1 + 0x1b8))
                                (param_1,uVar1,*puVar2,*(undefined8 *)(*param_1 + 0x1c0));
              return uVar1;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03189058(param_2);
        }
      }
      FUN_0595040c(2,0);
      uVar1 = 0;
    }
  }
  return uVar1;
}


