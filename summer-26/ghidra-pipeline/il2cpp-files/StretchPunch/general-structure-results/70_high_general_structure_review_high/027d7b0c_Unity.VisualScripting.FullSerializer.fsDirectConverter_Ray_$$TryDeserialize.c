/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$TryDeserialize
ENTRY_POINT: 027d7b0c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;paired_state_refs;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__TryDeserialize(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *unaff_x19;
  undefined4 unaff_w20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000028;
  
  *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x48) = unaff_w20;
  uStack0000000000000028 = 0;
  FUN_029d1b10(&stack0x00000028,*unaff_x22,*unaff_x21);
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x50) = uStack0000000000000028;
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  puVar1 = StringLiteral_2331;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(long *)(lVar2 + 0xb8) + 0x50,0);
  in_stack_00000018 = 0;
  FUN_029d1b10(&stack0x00000018,*(undefined8 *)puVar1,*unaff_x21);
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x58) = in_stack_00000018;
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  puVar1 = StringLiteral_2334;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(long *)(lVar2 + 0xb8) + 0x58,0);
  in_stack_00000010 = 0;
  FUN_029d1b10(&stack0x00000010,*(undefined8 *)puVar1,*unaff_x21);
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x60) = in_stack_00000010;
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  puVar1 = StringLiteral_2330;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(long *)(lVar2 + 0xb8) + 0x60,0);
  in_stack_00000008 = 0;
  FUN_029d1b10(&stack0x00000008,*(undefined8 *)puVar1,*unaff_x21);
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x68) = in_stack_00000008;
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(long *)(lVar2 + 0xb8) + 0x68,0);
  return;
}


