/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.Vector4f>
ENTRY_POINT: 038b0b54
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_Vector4f>
          (long param_1,undefined8 param_2,undefined8 param_3,size_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  void *pvVar8;
  undefined8 *puVar9;
  void *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  undefined8 uVar10;
  void *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  int unaff_w27;
  long unaff_x29;
  
  pvVar8 = *(void **)(unaff_x29 + -0xa8);
  *(void **)(unaff_x29 + -0xa8) = unaff_x23;
  iVar1 = *(int *)(param_1 + 0x28);
  if (-1 < iVar1) {
    pvVar8 = (void *)(unaff_x29 + -0x60);
  }
  memcpy(unaff_x23,pvVar8,param_4);
  pvVar8 = *(void **)(unaff_x29 + -0xa0);
  *(void **)(unaff_x29 + -0xa0) = unaff_x19;
  iVar2 = *(int *)(*(long *)(unaff_x29 + -0xd0) + 0x28);
  if (-1 < iVar2) {
    pvVar8 = (void *)(unaff_x29 + -0x68);
  }
  memcpy(unaff_x19,pvVar8,*(size_t *)(unaff_x29 + -0xd8));
  iVar3 = *(int *)(*(long *)(unaff_x29 + -0xc0) + 0x28);
  *(int *)(unaff_x29 + -0xc0) = iVar3;
  pvVar8 = *(void **)(unaff_x29 + -0x98);
  if (-1 < iVar3) {
    pvVar8 = (void *)(unaff_x29 + -0x70);
  }
  memcpy(unaff_x26,pvVar8,*(size_t *)(unaff_x29 + -200));
  iVar3 = *(int *)(*(long *)(unaff_x29 + -0xb8) + 0x28);
  pvVar8 = *(void **)(unaff_x29 + -0x90);
  if (-1 < iVar3) {
    pvVar8 = (void *)(unaff_x29 + -0x78);
  }
  memcpy(unaff_x25,pvVar8,*(size_t *)(unaff_x29 + -0xb0));
  if (-1 < unaff_w27) {
    unaff_x24 = (undefined8 *)*unaff_x24;
  }
  puVar6 = *(undefined8 **)(unaff_x29 + -0xa8);
  puVar9 = *(undefined8 **)(unaff_x29 + -0xa0);
  if (-1 < unaff_w21) {
    *(undefined8 *)(unaff_x29 + -0x80) = **(undefined8 **)(unaff_x29 + -0x80);
  }
  uVar10 = *(undefined8 *)(unaff_x29 + -0xf8);
  if (-1 < iVar1) {
    puVar6 = (undefined8 *)*puVar6;
  }
  puVar5 = *(undefined8 **)(unaff_x20 + 0x30);
  if (-1 < iVar2) {
    puVar9 = (undefined8 *)*puVar9;
  }
  uVar4 = *puVar5;
  if (-1 < *(int *)(unaff_x29 + -0xc0)) {
    unaff_x26 = (undefined8 *)*unaff_x26;
  }
  if (-1 < iVar3) {
    unaff_x25 = (undefined8 *)*unaff_x25;
  }
  *(undefined8 **)(unaff_x29 + -0x38) = puVar6;
  *(undefined8 **)(unaff_x29 + -0x30) = puVar9;
  *(undefined8 **)(unaff_x29 + -0x28) = unaff_x26;
  *(undefined8 **)(unaff_x29 + -0x20) = unaff_x25;
  pcVar7 = (code *)puVar5[2];
  *(undefined8 **)(unaff_x29 + -0x48) = unaff_x24;
  *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x80);
  (*pcVar7)(uVar4,puVar5,0,unaff_x29 + -0x48,unaff_x29 + -0x18);
  if (*(long *)(unaff_x29 + -0x100) == 0) {
    if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else {
    *(undefined8 *)(*(long *)(unaff_x29 + -0x100) + 0x20) = *(undefined8 *)(unaff_x29 + -0x18);
    thunk_FUN_036b7ad0();
    if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
      return uVar10;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


