/*
FUNCTION_NAME: Unity.XR.MockHMD.MockHMD$$SetFoveationMode
ENTRY_POINT: 06827b9c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_4;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


undefined8 Unity_XR_MockHMD_MockHMD__SetFoveationMode(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x22;
  
  FUN_047b61cc();
  if (unaff_x19 != 0) {
    lVar3 = FUN_042e50b8();
    puVar2 = PTR_DAT_070c1b68;
    lVar6 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    if (lVar6 != 0) {
      iVar1 = *(int *)(lVar6 + 0x18);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_0595236c(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar4 = FUN_069d69b8(lVar3,0,0);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      if (lVar3 != 0) {
        uVar5 = FUN_069d3b50(lVar3,0);
        return uVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


