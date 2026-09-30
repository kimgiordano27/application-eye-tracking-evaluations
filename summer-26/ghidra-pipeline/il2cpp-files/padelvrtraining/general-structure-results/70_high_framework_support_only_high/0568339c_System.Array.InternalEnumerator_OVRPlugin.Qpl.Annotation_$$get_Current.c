/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation>$$get_Current
ENTRY_POINT: 0568339c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>__get_Current
                 (undefined1 param_1 [16],undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *unaff_x19;
  undefined4 uVar3;
  
  lVar2 = UnityEngine_Localization_PropertyVariants_GameObjectLocalizer_<Start>d__10__System_Collections_IEnumerator_get_Current
                    ();
  puVar1 = PTR_DAT_091aba98;
  if (lVar2 != 0) {
    lVar2 = *(long *)PTR_DAT_091aba98;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if ((*(char *)(lVar2 + 0x4e9) == '\0') || (*(char *)((long)unaff_x19 + 0xa5) != '\0')) {
      UnityEngine_Localization_PropertyVariants_GameObjectLocalizer_<Start>d__10__System_Collections_IEnumerator_get_Current
                ();
      uVar3 = (**(code **)(*unaff_x19 + 0x248))();
      *(undefined4 *)(unaff_x19 + 0x20) = uVar3;
      *(undefined4 *)((long)unaff_x19 + 0x104) = param_2;
      *(undefined1 *)((long)unaff_x19 + 0xa5) = 0;
    }
  }
  return unaff_x19 + 0x20;
}


