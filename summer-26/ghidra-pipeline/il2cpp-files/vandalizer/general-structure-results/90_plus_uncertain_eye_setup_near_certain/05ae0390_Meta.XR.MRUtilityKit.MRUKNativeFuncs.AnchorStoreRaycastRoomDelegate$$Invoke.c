/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastRoomDelegate$$Invoke
ENTRY_POINT: 05ae0390
PROGRAM: vandalizer-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate__Invoke(long param_1)

{
  int in_w9;
  long in_x10;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  uint uVar1;
  
  while( true ) {
    *(uint *)(unaff_x19 + 8) = unaff_w21 + 1;
    if (in_x10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(uint *)(in_x10 + 0x18) <= unaff_w21) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar1 = unaff_w21 + 1;
    if (-1 < *(int *)(in_x10 + (long)(int)unaff_w21 * (long)in_w9 + 0x20)) break;
    if (unaff_w20 <= uVar1) {
      *(uint *)(unaff_x19 + 8) = unaff_w20 + 1;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(undefined8 *)(unaff_x19 + 0x38) = 0;
      *(undefined8 *)(unaff_x19 + 0x30) = 0;
      *(undefined8 *)(unaff_x19 + 0x48) = 0;
      *(undefined8 *)(unaff_x19 + 0x40) = 0;
      *(undefined8 *)(unaff_x19 + 0x58) = 0;
      *(undefined8 *)(unaff_x19 + 0x50) = 0;
      *(undefined8 *)(unaff_x19 + 0x68) = 0;
      *(undefined8 *)(unaff_x19 + 0x60) = 0;
      *(undefined8 *)(unaff_x19 + 0x78) = 0;
      *(undefined8 *)(unaff_x19 + 0x70) = 0;
      goto LAB_05ae03f8;
    }
    in_x10 = *(long *)(param_1 + 0x18);
    unaff_w21 = uVar1;
  }
  memmove((void *)(unaff_x19 + 0x10),(void *)(in_x10 + (long)(int)unaff_w21 * 0x7c + 0x2c),0x70);
  uVar1 = unaff_w21;
LAB_05ae03f8:
  return uVar1 < unaff_w20;
}


