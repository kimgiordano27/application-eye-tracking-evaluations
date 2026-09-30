/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetBestPoseFromRayCast
ENTRY_POINT: 06e1753c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GetBestPoseFromRayCast(long param_1)

{
  long lVar1;
  long in_x9;
  uint in_w10;
  long in_x11;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  uint uVar2;
  undefined8 uVar3;
  
  do {
    lVar1 = in_x9 + in_x11 * 0x20;
    uVar2 = in_w10 + 1;
    if (-1 < *(int *)(lVar1 + 0x20)) {
      uVar3 = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(lVar1 + 0x30);
      *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
      thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
      uVar2 = unaff_w21;
LAB_06e17570:
      return uVar2 < unaff_w20;
    }
    if (unaff_w20 <= uVar2) {
      *(uint *)(unaff_x19 + 8) = unaff_w20 + 1;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      goto LAB_06e17570;
    }
    in_x9 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 8) = in_w10 + 2;
    if (in_x9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    in_w10 = in_w10 + 1;
    if (*(uint *)(in_x9 + 0x18) <= in_w10) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    in_x11 = (long)(int)uVar2;
    unaff_w21 = uVar2;
  } while( true );
}


