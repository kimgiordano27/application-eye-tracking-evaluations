/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector2>$$Load
ENTRY_POINT: 04066b6c
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


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector2>__Load(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar4;
  long *unaff_x21;
  
  *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18) = unaff_x20;
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x98) + 0x135) & 1) == 0) {
    FUN_02ce0978();
  }
  lVar2 = *unaff_x19;
  uVar4 = **(undefined8 **)(*unaff_x21 + 0xb8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978();
  }
  puVar1 = PTR_DAT_065e0320;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x98);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978();
  }
  uVar4 = FUN_04db9398(uVar4,**(undefined8 **)(lVar2 + 0xb8),*(undefined8 *)puVar1,0);
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x98);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978();
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x20) = uVar4;
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x98) + 0x135) & 1) == 0) {
    FUN_02ce0978();
  }
  lVar2 = *unaff_x19;
  uVar4 = **(undefined8 **)(*unaff_x21 + 0xb8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978();
  }
  puVar1 = PTR_DAT_065e0328;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x98);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978();
  }
  uVar4 = FUN_04db9398(uVar4,**(undefined8 **)(lVar2 + 0xb8),*(undefined8 *)puVar1,0);
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x98);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978();
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x28) = uVar4;
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978();
  }
  puVar1 = PTR_DAT_065e02d8;
  if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x98) + 0x135) & 1) == 0) {
    FUN_02ce0978();
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar2 = *(long *)puVar1;
  }
  lVar3 = *unaff_x19;
  uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978(lVar3);
  }
  lVar2 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x98);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978();
  }
  uVar4 = FUN_04db00f0(uVar4,**(undefined8 **)(lVar2 + 0xb8),0);
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x98);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978();
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x30) = uVar4;
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x98) + 0x135) & 1) == 0) {
    FUN_02ce0978();
  }
  lVar2 = *unaff_x19;
  uVar4 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x98);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978();
  }
  uVar4 = FUN_04db00f0(uVar4,**(undefined8 **)(lVar2 + 0xb8),0);
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x98);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978();
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x38) = uVar4;
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x98) + 0x135) & 1) == 0) {
    FUN_02ce0978();
  }
  lVar2 = *unaff_x19;
  uVar4 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x98);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978();
  }
  uVar4 = FUN_04db00f0(uVar4,**(undefined8 **)(lVar2 + 0xb8),0);
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x98);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978();
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x40) = uVar4;
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x98) + 0x135) & 1) == 0) {
    FUN_02ce0978();
    return;
  }
  return;
}


