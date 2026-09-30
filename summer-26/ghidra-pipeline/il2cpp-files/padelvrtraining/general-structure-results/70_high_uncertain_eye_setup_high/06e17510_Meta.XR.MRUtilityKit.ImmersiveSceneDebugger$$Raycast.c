/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$Raycast
ENTRY_POINT: 06e17510
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__Raycast(long param_1)

{
  uint in_w9;
  long lVar1;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  uint uVar2;
  undefined8 uVar3;
  
  do {
    uVar2 = unaff_w21;
    if (unaff_w20 <= in_w9) {
      *(uint *)(unaff_x19 + 8) = unaff_w20 + 1;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      goto LAB_06e17570;
    }
    lVar1 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 8) = uVar2 + 1;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(uint *)(lVar1 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar1 = lVar1 + (long)(int)uVar2 * 0x20;
    in_w9 = uVar2 + 1;
    unaff_w21 = in_w9;
  } while (*(int *)(lVar1 + 0x20) < 0);
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
  thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
LAB_06e17570:
  return uVar2 < unaff_w20;
}


