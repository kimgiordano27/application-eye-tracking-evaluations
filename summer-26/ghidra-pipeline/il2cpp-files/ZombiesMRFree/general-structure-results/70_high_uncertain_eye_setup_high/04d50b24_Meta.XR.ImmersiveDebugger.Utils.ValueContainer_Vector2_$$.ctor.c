/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector2>$$.ctor
ENTRY_POINT: 04d50b24
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector2>___ctor(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02feb2c4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02feb2c4();
  }
  lVar1 = **(long **)(lVar1 + 0xb8);
  thunk_FUN_02fc2c1c();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4();
    }
    lVar1 = FUN_04d50bf4(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x18));
    thunk_FUN_02fc2c1c();
    lVar2 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4();
    }
    **(long **)(lVar2 + 0xb8) = lVar1;
    lVar2 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4();
    }
    thunk_FUN_03048534(*(undefined8 *)(lVar2 + 0xb8),lVar1);
  }
  return lVar1;
}


