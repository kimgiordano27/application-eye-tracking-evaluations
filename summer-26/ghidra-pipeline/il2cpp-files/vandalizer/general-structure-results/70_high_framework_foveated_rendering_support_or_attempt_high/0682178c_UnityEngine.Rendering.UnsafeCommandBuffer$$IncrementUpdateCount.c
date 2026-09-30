/*
FUNCTION_NAME: UnityEngine.Rendering.UnsafeCommandBuffer$$IncrementUpdateCount
ENTRY_POINT: 0682178c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;frame_behavior;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_2;strong_foveation_hits_2;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_Rendering_UnsafeCommandBuffer__IncrementUpdateCount(ulong param_1)

{
  ulong uVar1;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  ulong uVar2;
  undefined8 *puVar3;
  
  if (unaff_x23 != 0) {
    uVar2 = 0;
    puVar3 = (undefined8 *)(unaff_x23 + 0x30);
    do {
      if (*(uint *)(unaff_x23 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      if (((*(byte *)(puVar3 + 5) >> 2 & 1) != 0) &&
         (uVar1 = FUN_068218f0(puVar3 + -2), (uVar1 & 1) != 0)) {
        if (unaff_x21 == 0) break;
        uVar1 = FUN_05c869f4();
        if ((uVar1 & 1) != 0) {
UnityEngine_Rendering_UnsafeCommandBuffer__ConfigureFoveatedRendering:
          unaff_x20[2] = 0;
          puVar3 = unaff_x20 + 1;
          *puVar3 = 0;
          *unaff_x20 = unaff_x22;
          thunk_FUN_0329bf60();
          *(int *)(unaff_x20 + 2) = (int)uVar2;
          *puVar3 = unaff_x19;
          thunk_FUN_0329bf60(puVar3);
          return;
        }
        FUN_0683cd48(*puVar3,0);
        uVar1 = FUN_05c869f4();
        if ((uVar1 & 1) != 0)
        goto UnityEngine_Rendering_UnsafeCommandBuffer__ConfigureFoveatedRendering;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 0xb;
      if ((param_1 & 0xffffffff) == uVar2) {
        *unaff_x20 = 0;
        unaff_x20[1] = 0;
        unaff_x20[2] = 0;
        return;
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


