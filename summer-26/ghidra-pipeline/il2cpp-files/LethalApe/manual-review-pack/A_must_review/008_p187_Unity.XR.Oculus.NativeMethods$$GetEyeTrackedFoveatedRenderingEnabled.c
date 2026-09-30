/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 01d7603c
PROGRAM: LethalApe-libil2cpp.so
SCORE: 127
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods__GetEyeTrackedFoveatedRenderingEnabled(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_02bcd000;
  if ((DAT_02dbf927 & 1) == 0) {
    thunk_FUN_009efa0c(PTR_DAT_02bcd000);
    DAT_02dbf927 = 1;
  }
  FUN_01d76788(param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_009ddef4();
  }
  uVar2 = FUN_01ee8fb4(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    lVar5 = *(long *)(param_1 + 0x60);
    uVar4 = FUN_01ee54a4(param_1 + 0x28,0);
    uVar6 = FUN_01ee54b4(param_1 + 0x28,0);
    if (lVar5 == 0) goto LAB_01d7617c;
    FUN_01efc4f0(uVar4,uVar6,lVar5,0);
    if (*(long *)(param_1 + 0x60) == 0) goto LAB_01d7617c;
    FUN_01efbd08(*(long *)(param_1 + 0x60),1,0);
  }
  uVar4 = FUN_01d76610(param_1);
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_009ddef4(lVar5);
  }
  uVar2 = FUN_01ee8fb4(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  plVar3 = *(long **)(param_1 + 0x68);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x2f8))(plVar3,*(undefined8 *)(*plVar3 + 0x300));
    plVar3 = *(long **)(param_1 + 0x68);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01d76164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x5d8))
                (*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                 *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),plVar3,
                 *(undefined8 *)(*plVar3 + 0x5e0));
      return;
    }
  }
LAB_01d7617c:
                    /* WARNING: Subroutine does not return */
  FUN_00a190f0();
}


