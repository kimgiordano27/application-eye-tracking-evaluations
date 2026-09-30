/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$TestPhysicsLayers
ENTRY_POINT: 04e199ec
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__TestPhysicsLayers
               (undefined1 *param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  uint unaff_w19;
  void *unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  int unaff_w24;
  long *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  
  while( true ) {
    memcpy(param_1,param_2,param_3);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      unaff_w23 = *(uint *)(unaff_x22 + 0x18);
    }
    if (unaff_w23 <= unaff_w19) break;
    memcpy(&stack0x00000000,&stack0x00000098,0x98);
    uVar1 = FUN_06298068(unaff_x26 + (long)(int)unaff_w19 * (long)unaff_w27);
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w24) {
      return 0xffffffff;
    }
    unaff_w23 = *(uint *)(unaff_x22 + 0x18);
    if (unaff_w23 <= unaff_w19) break;
    param_1 = &stack0x00000098;
    param_3 = 0x98;
    param_2 = unaff_x21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


