/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger.<SnapCanvasInFrontOfCamera>d__84$$System.IDisposable.Dispose
ENTRY_POINT: 06e3ff88
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>d__84__System_IDisposable_Dispose
               (long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  int in_w9;
  int in_w10;
  long lVar3;
  uint uVar4;
  
  if (in_w9 != in_w10) {
    FUN_07199bdc(0);
    param_1 = *param_2;
    if (param_1 == 0) {
LAB_06e40020:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = *(uint *)(param_2 + 1);
  do {
    uVar4 = uVar2;
    if (uVar1 <= uVar4) {
      *(uint *)(param_2 + 1) = uVar1 + 1;
      *(undefined4 *)(param_2 + 2) = 0;
      goto LAB_06e40010;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    *(uint *)(param_2 + 1) = uVar4 + 1;
    if (lVar3 == 0) goto LAB_06e40020;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    uVar2 = uVar4 + 1;
  } while (*(int *)(lVar3 + (long)(int)uVar4 * 0x24 + 0x20) < 0);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar3 + (long)(int)uVar4 * 0x24 + 0x28);
LAB_06e40010:
  return uVar4 < uVar1;
}


