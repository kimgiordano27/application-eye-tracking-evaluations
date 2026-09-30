/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$RaycastVolume
ENTRY_POINT: 06e2d738
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_MRUKAnchor__RaycastVolume(long param_1)

{
  uint uVar1;
  uint uVar2;
  bool in_ZR;
  uint uVar3;
  long lVar4;
  long *unaff_x19;
  long lVar5;
  
  if (!in_ZR) {
    FUN_07199bdc(0);
    param_1 = *unaff_x19;
    if (param_1 == 0) {
LAB_06e2d7bc:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = *(uint *)(unaff_x19 + 1);
  do {
    uVar3 = uVar2;
    if (uVar1 <= uVar3) {
      *(uint *)(unaff_x19 + 1) = uVar1 + 1;
      unaff_x19[2] = 0;
      unaff_x19[3] = 0;
      goto LAB_06e2d7ac;
    }
    lVar4 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 1) = uVar3 + 1;
    if (lVar4 == 0) goto LAB_06e2d7bc;
    if (*(uint *)(lVar4 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar4 = lVar4 + (long)(int)uVar3 * 0x40;
    uVar2 = uVar3 + 1;
  } while (*(int *)(lVar4 + 0x20) < 0);
  lVar5 = *(long *)(lVar4 + 0x28);
  unaff_x19[3] = *(long *)(lVar4 + 0x30);
  unaff_x19[2] = lVar5;
LAB_06e2d7ac:
  return uVar3 < uVar1;
}


