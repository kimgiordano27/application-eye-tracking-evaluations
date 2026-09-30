/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$SetRaycastWarmUpEnabled
ENTRY_POINT: 08a25a50
PROGRAM: Hyper-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_EnvironmentDepthManagerRaycastExtensions__SetRaycastWarmUpEnabled(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 unaff_w19;
  long unaff_x22;
  undefined4 unaff_s8;
  
  lVar3 = thunk_FUN_04983f60();
  FUN_089c6890(lVar3,0);
  puVar1 = PTR_DAT_0ac4d620;
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x18) = 1;
    lVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
    FUN_08981e44(lVar4,0);
    plVar5 = *(long **)(unaff_x22 + 0x10);
    if (plVar5 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
      puVar1 = PTR_DAT_0ac4e240;
      if (lVar4 != 0) {
        *(undefined4 *)(lVar4 + 0x18) = uVar2;
        lVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
        FUN_089e5eb0(lVar6,0);
        if (lVar6 != 0) {
          *(undefined4 *)(lVar6 + 0x18) = unaff_s8;
          *(undefined4 *)(lVar6 + 0x1c) = unaff_w19;
          *(undefined1 *)(lVar6 + 0x20) = 1;
          FUN_08983b18(lVar4,lVar6,0);
          FUN_089c6a00(lVar3,lVar4,0);
          return lVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


