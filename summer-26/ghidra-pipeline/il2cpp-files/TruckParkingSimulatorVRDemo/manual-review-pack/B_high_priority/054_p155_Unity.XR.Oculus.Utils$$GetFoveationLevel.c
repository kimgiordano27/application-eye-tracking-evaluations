/*
FUNCTION_NAME: Unity.XR.Oculus.Utils$$GetFoveationLevel
ENTRY_POINT: 025e6f68
PROGRAM: TruckParkingSimulatorVRDemo-libil2cpp.so
SCORE: 71
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_3;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_Utils__GetFoveationLevel(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_02c70ead & 1) == 0) {
    thunk_FUN_011f4b58(PTR_DAT_02ab7868);
    DAT_02c70ead = 1;
  }
  puVar1 = PTR_DAT_02ab7868;
  lVar4 = *(long *)(param_1 + 0x708);
  if (lVar4 != 0) {
    lVar6 = 5;
    do {
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)(lVar6 - 4U)) {
        return;
      }
      if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar6 - 4U) {
                    /* WARNING: Subroutine does not return */
        FUN_012196e0();
      }
      lVar4 = *(long *)(lVar4 + lVar6 * 8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_011ea084();
      }
      uVar2 = FUN_0275d0a4(lVar4,0,0);
      if ((uVar2 & 1) != 0) {
        if (lVar4 == 0) break;
        uVar3 = FUN_02633bdc(lVar4,0);
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_011ea084(lVar5);
        }
        uVar2 = FUN_0275d0a4(uVar3,0,0);
        if ((uVar2 & 1) != 0) {
          lVar4 = FUN_02633bdc(lVar4,0);
          if (lVar4 == 0) break;
          FUN_02741234(lVar4,param_2,0);
        }
      }
      lVar4 = *(long *)(param_1 + 0x708);
      lVar6 = lVar6 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012196d8();
}


