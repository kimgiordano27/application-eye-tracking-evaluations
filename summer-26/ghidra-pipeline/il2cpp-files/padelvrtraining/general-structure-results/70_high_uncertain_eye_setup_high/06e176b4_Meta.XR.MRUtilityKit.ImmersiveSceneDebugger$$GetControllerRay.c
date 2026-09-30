/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetControllerRay
ENTRY_POINT: 06e176b4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GetControllerRay(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long *unaff_x19;
  
  lVar3 = *unaff_x19;
  if (lVar3 == 0) {
LAB_06e17738:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar1 = *(uint *)(lVar3 + 0x20);
  uVar2 = *(uint *)(unaff_x19 + 1);
  do {
    uVar4 = uVar2;
    if (uVar1 <= uVar4) {
      *(uint *)(unaff_x19 + 1) = uVar1 + 1;
      unaff_x19[2] = 0;
      goto LAB_06e17724;
    }
    lVar5 = *(long *)(lVar3 + 0x18);
    *(uint *)(unaff_x19 + 1) = uVar4 + 1;
    if (lVar5 == 0) goto LAB_06e17738;
    if (*(uint *)(lVar5 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar5 = lVar5 + (long)(int)uVar4 * 0x20;
    uVar2 = uVar4 + 1;
  } while (*(int *)(lVar5 + 0x20) < 0);
  unaff_x19[2] = *(long *)(lVar5 + 0x38);
  thunk_FUN_03d1023c(unaff_x19 + 2);
LAB_06e17724:
  return uVar4 < uVar1;
}


