/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector2>$$get_Path
ENTRY_POINT: 04066b2c
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


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector2>__get_Path(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x19;
  long *unaff_x21;
  
  uVar2 = FUN_04db9398();
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x98);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18) = uVar2;
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x98) + 0x135) & 1) == 0) {
    FUN_02ce0978();
  }
  lVar3 = *unaff_x19;
  uVar2 = **(undefined8 **)(*unaff_x21 + 0xb8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  puVar1 = PTR_DAT_065e0320;
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x98);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  uVar2 = FUN_04db9398(uVar2,**(undefined8 **)(lVar3 + 0xb8),*(undefined8 *)puVar1,0);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x98);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x20) = uVar2;
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x98) + 0x135) & 1) == 0) {
    FUN_02ce0978();
  }
  lVar3 = *unaff_x19;
  uVar2 = **(undefined8 **)(*unaff_x21 + 0xb8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  puVar1 = PTR_DAT_065e0328;
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x98);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  uVar2 = FUN_04db9398(uVar2,**(undefined8 **)(lVar3 + 0xb8),*(undefined8 *)puVar1,0);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x98);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x28) = uVar2;
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  puVar1 = PTR_DAT_065e02d8;
  if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x98) + 0x135) & 1) == 0) {
    FUN_02ce0978();
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar3 = *(long *)puVar1;
  }
  lVar4 = *unaff_x19;
  uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02ce0978(lVar4);
  }
  lVar3 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x98);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  uVar2 = FUN_04db00f0(uVar2,**(undefined8 **)(lVar3 + 0xb8),0);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x98);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x30) = uVar2;
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x98) + 0x135) & 1) == 0) {
    FUN_02ce0978();
  }
  lVar3 = *unaff_x19;
  uVar2 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x98);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  uVar2 = FUN_04db00f0(uVar2,**(undefined8 **)(lVar3 + 0xb8),0);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x98);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x38) = uVar2;
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x98) + 0x135) & 1) == 0) {
    FUN_02ce0978();
  }
  lVar3 = *unaff_x19;
  uVar2 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x98);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  uVar2 = FUN_04db00f0(uVar2,**(undefined8 **)(lVar3 + 0xb8),0);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x98);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x40) = uVar2;
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x98) + 0x135) & 1) == 0) {
    FUN_02ce0978();
    return;
  }
  return;
}


