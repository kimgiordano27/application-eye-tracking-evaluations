/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderDepthManager$$Meta.XR.IEnvironmentRaycastProvider.SetEnabled
ENTRY_POINT: 06db88f8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__Meta_XR_IEnvironmentRaycastProvider_SetEnabled
          (undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  
  FUN_03c8f97c(*param_1);
  uVar2 = FUN_06db8c7c();
  uVar3 = FUN_0702dcc0(uVar2,0,0);
  if ((uVar3 & 1) == 0) {
    uVar2 = FUN_0481ccb4(uVar2);
    return uVar2;
  }
  plVar4 = (long *)thunk_FUN_03d12a58();
  if (plVar4 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    lVar5 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,5);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_08e904d0;
        thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20));
        if (1 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x28) = unaff_x26;
          thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x28));
          puVar1 = PTR_DAT_08e71968;
          if (2 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)PTR_DAT_08e71968;
            thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x30));
            if (3 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x38) = unaff_x25;
              thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x38));
              if (4 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)puVar1;
                thunk_FUN_03d233cc();
                uVar6 = FUN_06f74f38(lVar5,0);
                if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
                  thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
                }
                FUN_06dfdedc(uVar2,uVar6,0,0);
                return 0;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


