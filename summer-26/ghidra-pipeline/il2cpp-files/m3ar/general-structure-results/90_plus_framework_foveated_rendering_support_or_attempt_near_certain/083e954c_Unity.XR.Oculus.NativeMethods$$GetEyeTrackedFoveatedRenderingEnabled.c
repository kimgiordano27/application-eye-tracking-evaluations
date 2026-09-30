/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 083e954c
PROGRAM: m3ar-libil2cpp.so
SCORE: 138
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_foveation_hits_6;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


undefined8 Unity_XR_Oculus_NativeMethods__GetEyeTrackedFoveatedRenderingEnabled(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  long unaff_x19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  uint in_stack_00000018;
  
  if ((*(byte *)(unaff_x19 + 0x21e) & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f95a10);
    FUN_0403162c(PTR_DAT_08ffe600);
    FUN_0403162c(PTR_DAT_08ffe608);
    FUN_0403162c(PTR_DAT_08ffe610);
    FUN_0403162c(PTR_DAT_08ffe618);
    *(undefined1 *)(unaff_x19 + 0x21e) = 1;
  }
  puVar3 = PTR_DAT_08ffe618;
  puVar2 = PTR_DAT_08ffe610;
  puVar1 = PTR_DAT_08f95a10;
  iVar9 = 0;
  while( true ) {
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0408f364(lVar7);
      lVar7 = *(long *)puVar3;
    }
    puVar8 = *(undefined8 **)(lVar7 + 0xb8);
    lVar5 = puVar8[1];
    if (lVar5 == 0) goto Unity_XR_Oculus_Utils__SetFoveationLevel;
    if (*(int *)(lVar5 + 0x18) <= iVar9) break;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0408f364(lVar7);
      lVar5 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      if (lVar5 == 0) goto Unity_XR_Oculus_Utils__SetFoveationLevel;
    }
    FUN_0599b738(&stack0x00000008,lVar5,iVar9,*(undefined8 *)puVar2);
    uVar4 = in_stack_00000008;
    lVar7 = **(long **)(*(long *)puVar3 + 0xb8);
    uVar6 = FUN_083e96bc(in_stack_00000008,in_stack_00000010,in_stack_00000018 & 1);
    if (lVar7 == 0) goto Unity_XR_Oculus_Utils__SetFoveationLevel;
    FUN_06fefd78(lVar7,uVar4,uVar6,*(undefined8 *)puVar1);
    iVar9 = iVar9 + 1;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0408f364(lVar7);
    puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    lVar5 = puVar8[1];
    if (lVar5 == 0) {
Unity_XR_Oculus_Utils__SetFoveationLevel:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
  }
  iVar9 = *(int *)(lVar5 + 0x18);
  *(undefined4 *)(lVar5 + 0x18) = 0;
  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
  if (0 < iVar9) {
    FUN_075082e0(*(undefined8 *)(lVar5 + 0x10),0,iVar9,0);
    puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
  }
  return *puVar8;
}


