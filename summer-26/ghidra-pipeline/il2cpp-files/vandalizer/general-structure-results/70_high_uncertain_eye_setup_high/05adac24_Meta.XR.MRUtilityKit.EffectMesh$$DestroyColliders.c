/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$DestroyColliders
ENTRY_POINT: 05adac24
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_EffectMesh__DestroyColliders(long param_1)

{
  undefined1 in_CY;
  int in_w9;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w23;
  uint unaff_w24;
  
  do {
    if ((bool)in_CY) {
      *(uint *)(unaff_x19 + 0xc) = unaff_w23 + 1;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
LAB_05adacb0:
      return unaff_w24 < unaff_w23;
    }
    lVar1 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 0xc) = unaff_w24 + 1;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(uint *)(lVar1 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    if (-1 < *(int *)(lVar1 + (long)(int)unaff_w24 * (long)in_w9 + 0x20)) {
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      FUN_045daff4();
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      goto LAB_05adacb0;
    }
    in_CY = unaff_w23 <= unaff_w24 + 1;
    unaff_w24 = unaff_w24 + 1;
  } while( true );
}


