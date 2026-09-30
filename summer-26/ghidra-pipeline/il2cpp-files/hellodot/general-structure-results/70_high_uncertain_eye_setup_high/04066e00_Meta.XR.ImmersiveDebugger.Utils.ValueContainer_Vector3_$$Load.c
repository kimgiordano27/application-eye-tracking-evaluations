/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$Load
ENTRY_POINT: 04066e00
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>__Load(long param_1)

{
  long lVar1;
  ulong in_x9;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar2;
  long *unaff_x21;
  
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_02ce0978(param_1);
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x98);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02ce0978();
  }
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x38) = unaff_x20;
  lVar1 = *unaff_x19;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02ce0978();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x98) + 0x135) & 1) == 0) {
    FUN_02ce0978();
  }
  lVar1 = *unaff_x19;
  uVar2 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x40);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02ce0978();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x98);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02ce0978();
  }
  uVar2 = FUN_04db00f0(uVar2,**(undefined8 **)(lVar1 + 0xb8),0);
  lVar1 = *unaff_x19;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02ce0978(lVar1);
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x98);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02ce0978();
  }
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x40) = uVar2;
  lVar1 = *unaff_x19;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02ce0978();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x98) + 0x135) & 1) == 0) {
    FUN_02ce0978();
    return;
  }
  return;
}


