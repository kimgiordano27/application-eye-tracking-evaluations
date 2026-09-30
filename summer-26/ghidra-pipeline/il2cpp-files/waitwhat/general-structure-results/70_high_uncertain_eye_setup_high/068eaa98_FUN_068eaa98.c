/*
FUNCTION_NAME: FUN_068eaa98
ENTRY_POINT: 068eaa98
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_068eaa98(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_070c1b68;
  if ((DAT_07559324 & 1) == 0) {
    FUN_03188a78(Sentry_Unity_Integrations_SceneManagerIntegration_<>c__DisplayClass3_0_TypeInfo);
    FUN_03188a78(Oculus_Avatar2_OvrPluginTracking_HandTrackingDelegate_TypeInfo);
    FUN_03188a78(PTR_DAT_070c1b68);
    DAT_07559324 = 1;
  }
  FUN_068ea588(param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar2 = FUN_069d69b8(uVar6,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (plVar7 = *(long **)(*(long *)(param_1 + 0x20) + 0x148), plVar7 != (long *)0x0)) {
    lVar4 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Oculus_Avatar2_OvrPluginTracking_HandTrackingDelegate_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_068eab88;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_031c0d08(plVar7,*(long *)
                                  Oculus_Avatar2_OvrPluginTracking_HandTrackingDelegate_TypeInfo,1);
LAB_068eab88:
    (*(code *)*puVar3)(plVar7,param_1,puVar3[1]);
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (plVar7 = *(long **)(*(long *)(param_1 + 0x20) + 0x158), plVar7 != (long *)0x0)) {
      lVar4 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)
               Sentry_Unity_Integrations_SceneManagerIntegration_<>c__DisplayClass3_0_TypeInfo) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_068eac00;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_031c0d08(plVar7,*(long *)
                                    Sentry_Unity_Integrations_SceneManagerIntegration_<>c__DisplayClass3_0_TypeInfo
                            ,1);
LAB_068eac00:
      (*(code *)*puVar3)(plVar7,param_1,puVar3[1]);
      FUN_068eac24(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


