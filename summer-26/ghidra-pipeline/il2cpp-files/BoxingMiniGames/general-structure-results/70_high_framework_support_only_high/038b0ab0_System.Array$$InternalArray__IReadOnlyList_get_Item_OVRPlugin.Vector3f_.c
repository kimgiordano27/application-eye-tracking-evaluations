/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.Vector3f>
ENTRY_POINT: 038b0ab0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_Vector3f>
          (long param_1,undefined8 *param_2,undefined8 param_3,size_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code *pcVar9;
  long in_x9;
  void *pvVar10;
  ulong in_x10;
  undefined8 *puVar11;
  long in_x11;
  long in_x12;
  long in_x13;
  void *pvVar12;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar13;
  void *unaff_x22;
  void *pvVar14;
  void *unaff_x24;
  undefined8 *__dest;
  undefined8 *__dest_00;
  size_t unaff_x28;
  long unaff_x29;
  
  pvVar14 = (void *)(in_x9 - (in_x10 & 0x1fffffff0));
  *(long *)(unaff_x29 + -0xd8) = in_x13;
  pvVar12 = (void *)((long)pvVar14 - (in_x13 + 0xfU & 0x1fffffff0));
  *(long *)(unaff_x29 + -200) = in_x12;
  __dest_00 = (undefined8 *)((long)pvVar12 - (in_x12 + 0xfU & 0x1fffffff0));
  *(long *)(unaff_x29 + -0xb0) = in_x11;
  __dest = (undefined8 *)((long)__dest_00 - (in_x11 + 0xfU & 0x1fffffff0));
  if (unaff_x21 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    *(undefined8 *)(unaff_x29 + -0x100) = *(undefined8 *)(unaff_x21 + 0x28);
    *(long *)(unaff_x29 + -0xf8) = unaff_x21;
    if (-1 < iVar1) {
      unaff_x24 = (void *)(unaff_x29 + -0x50);
    }
    memcpy(param_2,unaff_x24,param_4);
    pvVar10 = *(void **)(unaff_x29 + -0x80);
    *(void **)(unaff_x29 + -0x80) = unaff_x22;
    iVar2 = *(int *)(*(long *)(unaff_x29 + -0xf0) + 0x28);
    if (-1 < iVar2) {
      pvVar10 = (void *)(unaff_x29 + -0x58);
    }
    memcpy(unaff_x22,pvVar10,unaff_x28);
    pvVar10 = *(void **)(unaff_x29 + -0xa8);
    *(void **)(unaff_x29 + -0xa8) = pvVar14;
    iVar3 = *(int *)(*(long *)(unaff_x29 + -0xe0) + 0x28);
    if (-1 < iVar3) {
      pvVar10 = (void *)(unaff_x29 + -0x60);
    }
    memcpy(pvVar14,pvVar10,*(size_t *)(unaff_x29 + -0xe8));
    pvVar14 = *(void **)(unaff_x29 + -0xa0);
    *(void **)(unaff_x29 + -0xa0) = pvVar12;
    iVar4 = *(int *)(*(long *)(unaff_x29 + -0xd0) + 0x28);
    if (-1 < iVar4) {
      pvVar14 = (void *)(unaff_x29 + -0x68);
    }
    memcpy(pvVar12,pvVar14,*(size_t *)(unaff_x29 + -0xd8));
    iVar5 = *(int *)(*(long *)(unaff_x29 + -0xc0) + 0x28);
    *(int *)(unaff_x29 + -0xc0) = iVar5;
    pvVar12 = *(void **)(unaff_x29 + -0x98);
    if (-1 < iVar5) {
      pvVar12 = (void *)(unaff_x29 + -0x70);
    }
    memcpy(__dest_00,pvVar12,*(size_t *)(unaff_x29 + -200));
    iVar5 = *(int *)(*(long *)(unaff_x29 + -0xb8) + 0x28);
    pvVar12 = *(void **)(unaff_x29 + -0x90);
    if (-1 < iVar5) {
      pvVar12 = (void *)(unaff_x29 + -0x78);
    }
    memcpy(__dest,pvVar12,*(size_t *)(unaff_x29 + -0xb0));
    if (-1 < iVar1) {
      param_2 = (undefined8 *)*param_2;
    }
    puVar8 = *(undefined8 **)(unaff_x29 + -0xa8);
    puVar11 = *(undefined8 **)(unaff_x29 + -0xa0);
    if (-1 < iVar2) {
      *(undefined8 *)(unaff_x29 + -0x80) = **(undefined8 **)(unaff_x29 + -0x80);
    }
    uVar13 = *(undefined8 *)(unaff_x29 + -0xf8);
    if (-1 < iVar3) {
      puVar8 = (undefined8 *)*puVar8;
    }
    puVar7 = *(undefined8 **)(unaff_x20 + 0x30);
    if (-1 < iVar4) {
      puVar11 = (undefined8 *)*puVar11;
    }
    uVar6 = *puVar7;
    if (-1 < *(int *)(unaff_x29 + -0xc0)) {
      __dest_00 = (undefined8 *)*__dest_00;
    }
    if (-1 < iVar5) {
      __dest = (undefined8 *)*__dest;
    }
    *(undefined8 **)(unaff_x29 + -0x38) = puVar8;
    *(undefined8 **)(unaff_x29 + -0x30) = puVar11;
    *(undefined8 **)(unaff_x29 + -0x28) = __dest_00;
    *(undefined8 **)(unaff_x29 + -0x20) = __dest;
    pcVar9 = (code *)puVar7[2];
    *(undefined8 **)(unaff_x29 + -0x48) = param_2;
    *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x80);
    (*pcVar9)(uVar6,puVar7,0,unaff_x29 + -0x48,unaff_x29 + -0x18);
    if (*(long *)(unaff_x29 + -0x100) != 0) {
      *(undefined8 *)(*(long *)(unaff_x29 + -0x100) + 0x20) = *(undefined8 *)(unaff_x29 + -0x18);
      thunk_FUN_036b7ad0();
      if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
        return uVar13;
      }
      goto LAB_038b0cb8;
    }
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
LAB_038b0cb8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


