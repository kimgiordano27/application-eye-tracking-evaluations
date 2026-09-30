/*
FUNCTION_NAME: UnityEngine.Jobs.TransformAccess$$get_rotation
ENTRY_POINT: 068eab1c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_Jobs_TransformAccess__get_rotation(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x148);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Oculus_Avatar2_OvrPluginTracking_HandTrackingDelegate_TypeInfo) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_068eab88;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_031c0d08(plVar5,*(long *)
                                  Oculus_Avatar2_OvrPluginTracking_HandTrackingDelegate_TypeInfo,1);
LAB_068eab88:
    (*(code *)*puVar1)(plVar5);
    if ((*(long *)(unaff_x19 + 0x20) != 0) &&
       (plVar5 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x158), plVar5 != (long *)0x0)) {
      lVar2 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) ==
              *(long *)
               Sentry_Unity_Integrations_SceneManagerIntegration_<>c__DisplayClass3_0_TypeInfo) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
            goto LAB_068eac00;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_031c0d08(plVar5,*(long *)
                                    Sentry_Unity_Integrations_SceneManagerIntegration_<>c__DisplayClass3_0_TypeInfo
                            ,1);
LAB_068eac00:
      (*(code *)*puVar1)(plVar5);
      FUN_068eac24();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


