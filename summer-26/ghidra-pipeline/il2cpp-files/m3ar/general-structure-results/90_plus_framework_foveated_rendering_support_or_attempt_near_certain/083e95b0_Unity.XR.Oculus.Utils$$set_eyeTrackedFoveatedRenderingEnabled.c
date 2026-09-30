/*
FUNCTION_NAME: Unity.XR.Oculus.Utils$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 083e95b0
PROGRAM: m3ar-libil2cpp.so
SCORE: 136
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_foveation_hits_6;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


undefined8 Unity_XR_Oculus_Utils__set_eyeTrackedFoveatedRenderingEnabled(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  uint in_stack_00000018;
  
  iVar6 = 0;
  while( true ) {
    lVar4 = *unaff_x22;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364(lVar4);
      lVar4 = *unaff_x22;
    }
    puVar5 = *(undefined8 **)(lVar4 + 0xb8);
    lVar2 = puVar5[1];
    if (lVar2 == 0) goto Unity_XR_Oculus_Utils__SetFoveationLevel;
    if (*(int *)(lVar2 + 0x18) <= iVar6) break;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364(lVar4);
      lVar2 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
      if (lVar2 == 0) goto Unity_XR_Oculus_Utils__SetFoveationLevel;
    }
    FUN_0599b738(&stack0x00000008,lVar2,iVar6,*unaff_x23);
    uVar1 = in_stack_00000008;
    lVar4 = **(long **)(*unaff_x22 + 0xb8);
    uVar3 = FUN_083e96bc(in_stack_00000008,in_stack_00000010,in_stack_00000018 & 1);
    if (lVar4 == 0) goto Unity_XR_Oculus_Utils__SetFoveationLevel;
    FUN_06fefd78(lVar4,uVar1,uVar3,*unaff_x24);
    iVar6 = iVar6 + 1;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364(lVar4);
    puVar5 = *(undefined8 **)(*unaff_x22 + 0xb8);
    lVar2 = puVar5[1];
    if (lVar2 == 0) {
Unity_XR_Oculus_Utils__SetFoveationLevel:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
  }
  iVar6 = *(int *)(lVar2 + 0x18);
  *(undefined4 *)(lVar2 + 0x18) = 0;
  *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
  if (0 < iVar6) {
    FUN_075082e0(*(undefined8 *)(lVar2 + 0x10),0,iVar6,0);
    puVar5 = *(undefined8 **)(*unaff_x22 + 0xb8);
  }
  return *puVar5;
}


