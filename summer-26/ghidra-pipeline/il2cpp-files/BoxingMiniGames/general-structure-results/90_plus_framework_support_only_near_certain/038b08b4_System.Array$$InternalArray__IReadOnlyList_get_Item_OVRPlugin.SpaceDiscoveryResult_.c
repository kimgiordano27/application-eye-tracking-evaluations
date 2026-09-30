/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 038b08b4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceDiscoveryResult>
          (void *param_1,void *param_2,undefined8 param_3,size_t param_4)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  void *in_x9;
  undefined8 *puVar8;
  undefined8 unaff_x19;
  int unaff_w20;
  int unaff_w21;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x90) = unaff_x19;
  if (-1 < unaff_w20) {
    in_x9 = param_1;
  }
  memcpy(param_2,in_x9,param_4);
  iVar2 = *(int *)(*(long *)(unaff_x29 + -0xb8) + 0x28);
  pvVar1 = *(void **)(unaff_x29 + -0x88);
  if (-1 < iVar2) {
    pvVar1 = (void *)(unaff_x29 + -0x58);
  }
  memcpy(unaff_x23,pvVar1,*(size_t *)(unaff_x29 + -0xc0));
  iVar3 = *(int *)(*(long *)(unaff_x29 + -0xb0) + 0x28);
  pvVar1 = *(void **)(unaff_x29 + -0x80);
  if (-1 < iVar3) {
    pvVar1 = (void *)(unaff_x29 + -0x60);
  }
  memcpy(unaff_x26,pvVar1,*(size_t *)(unaff_x29 + -0xa8));
  iVar4 = *(int *)(*(long *)(unaff_x29 + -0xa0) + 0x28);
  pvVar1 = *(void **)(unaff_x29 + -0x78);
  if (-1 < iVar4) {
    pvVar1 = (void *)(unaff_x29 + -0x68);
  }
  memcpy(unaff_x27,pvVar1,*(size_t *)(unaff_x29 + -0x98));
  if (-1 < unaff_w21) {
    unaff_x25 = (undefined8 *)*unaff_x25;
  }
  puVar8 = *(undefined8 **)(unaff_x29 + -0x90);
  if (-1 < unaff_w20) {
    puVar8 = (undefined8 *)*puVar8;
  }
  puVar6 = *(undefined8 **)(unaff_x24 + 0x28);
  if (-1 < iVar2) {
    unaff_x23 = (undefined8 *)*unaff_x23;
  }
  uVar5 = *puVar6;
  if (-1 < iVar3) {
    unaff_x26 = (undefined8 *)*unaff_x26;
  }
  if (-1 < iVar4) {
    unaff_x27 = (undefined8 *)*unaff_x27;
  }
  *(undefined8 **)(unaff_x29 + -0x30) = unaff_x23;
  *(undefined8 **)(unaff_x29 + -0x28) = unaff_x26;
  *(undefined8 **)(unaff_x29 + -0x20) = unaff_x27;
  pcVar7 = (code *)puVar6[2];
  *(undefined8 **)(unaff_x29 + -0x40) = unaff_x25;
  *(undefined8 **)(unaff_x29 + -0x38) = puVar8;
  (*pcVar7)(uVar5,puVar6,0,unaff_x29 + -0x40,unaff_x29 + -0x18);
  if (*(long *)(unaff_x29 + -200) == 0) {
    if (*(long *)(*(long *)(unaff_x29 + -0x70) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else {
    *(undefined8 *)(*(long *)(unaff_x29 + -200) + 0x20) = *(undefined8 *)(unaff_x29 + -0x18);
    thunk_FUN_036b7ad0();
    if (*(long *)(*(long *)(unaff_x29 + -0x70) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
      return *(undefined8 *)(unaff_x29 + -0xd0);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


