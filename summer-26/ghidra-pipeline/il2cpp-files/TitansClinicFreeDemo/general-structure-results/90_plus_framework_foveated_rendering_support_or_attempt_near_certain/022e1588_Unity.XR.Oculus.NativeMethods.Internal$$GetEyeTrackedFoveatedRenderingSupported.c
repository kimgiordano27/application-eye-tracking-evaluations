/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 022e1588
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 125
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


long Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingSupported(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  
  lVar7 = thunk_FUN_0124bba8();
  FUN_01fab77c(lVar7,0);
  puVar2 = PTR_DAT_027d3770;
  puVar1 = PTR_DAT_027d35c0;
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x10) = unaff_x20;
    thunk_FUN_01286abc();
    lVar8 = thunk_FUN_0124bba8(*(undefined8 *)puVar2);
    FUN_022930b8(lVar8,0);
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01220628();
      lVar9 = *(long *)puVar1;
    }
    puVar6 = PTR_DAT_027d37e0;
    puVar5 = PTR_DAT_027d37d8;
    puVar4 = PTR_DAT_027d37d0;
    puVar3 = PTR_DAT_027d3778;
    puVar2 = PTR_DAT_027d3758;
    puVar1 = PTR_DAT_027b67b8;
    if (lVar8 != 0) {
      FUN_02292d7c(lVar8,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x80),
                   *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x88),0);
      uVar10 = thunk_FUN_0124bba8(*(undefined8 *)puVar3);
      FUN_0180ea60(uVar10,lVar7,*(undefined8 *)puVar4,0);
      *(undefined8 *)(lVar8 + 0x48) = uVar10;
      thunk_FUN_01286abc((undefined8 *)(lVar8 + 0x48),uVar10);
      uVar10 = thunk_FUN_0124bba8(*(undefined8 *)puVar2);
      FUN_0158a488(uVar10,lVar7,*(undefined8 *)puVar5,0);
      *(undefined8 *)(lVar8 + 0x50) = uVar10;
      thunk_FUN_01286abc((undefined8 *)(lVar8 + 0x50),uVar10);
      *(undefined4 *)(lVar8 + 0x70) = 0x3c23d70a;
      uVar10 = thunk_FUN_0124bba8(*(undefined8 *)puVar1);
      FUN_0180e430(uVar10,lVar7,*(undefined8 *)puVar6,0);
      *(undefined8 *)(lVar8 + 0x40) = uVar10;
      thunk_FUN_01286abc((undefined8 *)(lVar8 + 0x40),uVar10);
      return lVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


