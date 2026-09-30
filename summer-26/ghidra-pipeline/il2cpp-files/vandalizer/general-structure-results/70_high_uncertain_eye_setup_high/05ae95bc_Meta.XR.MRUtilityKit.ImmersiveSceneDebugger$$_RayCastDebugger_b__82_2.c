/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<RayCastDebugger>b__82_2
ENTRY_POINT: 05ae95bc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<RayCastDebugger>b__82_2(long param_1)

{
  int in_w9;
  long lVar1;
  uint in_w11;
  int in_w12;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar2;
  
  do {
    uVar2 = in_w11 + 1;
    if (-1 < in_w12) {
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      FUN_045dd724();
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      thunk_FUN_0329bf60(unaff_x19 + 0x18,0);
      uVar2 = unaff_w24;
LAB_05ae9624:
      return uVar2 < unaff_w23;
    }
    if (unaff_w23 <= uVar2) {
      *(uint *)(unaff_x19 + 0xc) = unaff_w23 + 1;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      goto LAB_05ae9624;
    }
    lVar1 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 0xc) = in_w11 + 2;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    in_w11 = in_w11 + 1;
    if (*(uint *)(lVar1 + 0x18) <= in_w11) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    in_w12 = *(int *)(lVar1 + (long)(int)uVar2 * (long)in_w9 + 0x20);
    unaff_w24 = uVar2;
  } while( true );
}


