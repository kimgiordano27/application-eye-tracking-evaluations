/*
FUNCTION_NAME: UnityEngine.Jobs.TransformAccess$$SetPosition
ENTRY_POINT: 068eaad8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_Jobs_TransformAccess__SetPosition(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x21;
  
  FUN_03188a78();
  *(undefined1 *)(unaff_x21 + 0x324) = 1;
  FUN_068ea588();
  uVar5 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar1 = FUN_069d69b8(uVar5,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (plVar6 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x148), plVar6 != (long *)0x0)) {
    lVar3 = *plVar6;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Oculus_Avatar2_OvrPluginTracking_HandTrackingDelegate_TypeInfo) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_068eab88;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_031c0d08(plVar6,*(long *)
                                  Oculus_Avatar2_OvrPluginTracking_HandTrackingDelegate_TypeInfo,1);
LAB_068eab88:
    (*(code *)*puVar2)(plVar6);
    if ((*(long *)(unaff_x19 + 0x20) != 0) &&
       (plVar6 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x158), plVar6 != (long *)0x0)) {
      lVar3 = *plVar6;
      uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar1 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) ==
              *(long *)
               Sentry_Unity_Integrations_SceneManagerIntegration_<>c__DisplayClass3_0_TypeInfo) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 1) * 0x10 + 0x138);
            goto LAB_068eac00;
          }
          uVar1 = uVar1 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_031c0d08(plVar6,*(long *)
                                    Sentry_Unity_Integrations_SceneManagerIntegration_<>c__DisplayClass3_0_TypeInfo
                            ,1);
LAB_068eac00:
      (*(code *)*puVar2)(plVar6);
      FUN_068eac24();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


