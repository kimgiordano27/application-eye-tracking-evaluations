/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.Vector2f>
ENTRY_POINT: 038b0a14
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
System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_Vector2f>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong __n;
  undefined8 *puVar14;
  code *pcVar15;
  void *__src;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  void *pvVar21;
  long *plVar22;
  long unaff_x21;
  undefined8 uVar23;
  void *pvVar24;
  void *__dest;
  void *unaff_x24;
  undefined8 *__dest_00;
  undefined8 *__dest_01;
  undefined8 *__dest_02;
  ulong __n_00;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x10) = param_1;
  plVar22 = *(long **)(param_9 + 0x38);
  *(undefined8 *)(unaff_x29 + -0x58) = param_4;
  *(undefined8 *)(unaff_x29 + -0x50) = param_3;
  *(undefined8 *)(unaff_x29 + -0x80) = param_4;
  *(undefined8 *)(unaff_x29 + -0x78) = param_8;
  *(undefined8 *)(unaff_x29 + -0xa8) = param_5;
  *(undefined8 *)(unaff_x29 + -0xa0) = param_6;
  *(undefined8 *)(unaff_x29 + -0x68) = param_6;
  *(undefined8 *)(unaff_x29 + -0x60) = param_5;
  *(undefined8 *)(unaff_x29 + -0x98) = param_7;
  *(undefined8 *)(unaff_x29 + -0x90) = param_8;
  *(undefined8 *)(unaff_x29 + -0x70) = param_7;
  if (plVar22 == (long *)0x0) {
    FUN_0367ca58(param_9);
    plVar22 = *(long **)(param_9 + 0x38);
  }
  lVar1 = *plVar22;
  lVar4 = plVar22[1];
  lVar2 = plVar22[2];
  lVar5 = plVar22[3];
  lVar3 = plVar22[4];
  lVar6 = plVar22[5];
  __n = (ulong)*(uint *)(lVar1 + 0xfc);
  *(long *)(unaff_x29 + -0xf0) = lVar4;
  __n_00 = (ulong)*(uint *)(lVar4 + 0xfc);
  *(long *)(unaff_x29 + -0xe0) = lVar2;
  uVar20 = (ulong)*(uint *)(lVar2 + 0xfc);
  uVar19 = (ulong)*(uint *)(lVar5 + 0xfc);
  *(long *)(unaff_x29 + -0xc0) = lVar3;
  *(long *)(unaff_x29 + -0xb8) = lVar6;
  uVar18 = (ulong)*(uint *)(lVar3 + 0xfc);
  *(long *)(unaff_x29 + -0xd0) = lVar5;
  uVar17 = (ulong)*(uint *)(lVar6 + 0xfc);
  __dest_00 = (undefined8 *)(&stack0x00000000 + -(__n + 0xf & 0x1fffffff0));
  pvVar24 = (void *)((long)__dest_00 - (__n_00 + 0xf & 0x1fffffff0));
  *(ulong *)(unaff_x29 + -0xe8) = uVar20;
  __dest = (void *)((long)pvVar24 - (uVar20 + 0xf & 0x1fffffff0));
  *(ulong *)(unaff_x29 + -0xd8) = uVar19;
  pvVar21 = (void *)((long)__dest - (uVar19 + 0xf & 0x1fffffff0));
  *(ulong *)(unaff_x29 + -200) = uVar18;
  __dest_02 = (undefined8 *)((long)pvVar21 - (uVar18 + 0xf & 0x1fffffff0));
  *(ulong *)(unaff_x29 + -0xb0) = uVar17;
  __dest_01 = (undefined8 *)((long)__dest_02 - (uVar17 + 0xf & 0x1fffffff0));
  if (unaff_x21 != 0) {
    iVar7 = *(int *)(lVar1 + 0x28);
    *(undefined8 *)(unaff_x29 + -0x100) = *(undefined8 *)(unaff_x21 + 0x28);
    *(long *)(unaff_x29 + -0xf8) = unaff_x21;
    if (-1 < iVar7) {
      unaff_x24 = (void *)(unaff_x29 + -0x50);
    }
    memcpy(__dest_00,unaff_x24,__n);
    __src = *(void **)(unaff_x29 + -0x80);
    *(void **)(unaff_x29 + -0x80) = pvVar24;
    iVar8 = *(int *)(*(long *)(unaff_x29 + -0xf0) + 0x28);
    if (-1 < iVar8) {
      __src = (void *)(unaff_x29 + -0x58);
    }
    memcpy(pvVar24,__src,__n_00);
    pvVar24 = *(void **)(unaff_x29 + -0xa8);
    *(void **)(unaff_x29 + -0xa8) = __dest;
    iVar9 = *(int *)(*(long *)(unaff_x29 + -0xe0) + 0x28);
    if (-1 < iVar9) {
      pvVar24 = (void *)(unaff_x29 + -0x60);
    }
    memcpy(__dest,pvVar24,*(size_t *)(unaff_x29 + -0xe8));
    pvVar24 = *(void **)(unaff_x29 + -0xa0);
    *(void **)(unaff_x29 + -0xa0) = pvVar21;
    iVar10 = *(int *)(*(long *)(unaff_x29 + -0xd0) + 0x28);
    if (-1 < iVar10) {
      pvVar24 = (void *)(unaff_x29 + -0x68);
    }
    memcpy(pvVar21,pvVar24,*(size_t *)(unaff_x29 + -0xd8));
    iVar11 = *(int *)(*(long *)(unaff_x29 + -0xc0) + 0x28);
    *(int *)(unaff_x29 + -0xc0) = iVar11;
    pvVar21 = *(void **)(unaff_x29 + -0x98);
    if (-1 < iVar11) {
      pvVar21 = (void *)(unaff_x29 + -0x70);
    }
    memcpy(__dest_02,pvVar21,*(size_t *)(unaff_x29 + -200));
    iVar11 = *(int *)(*(long *)(unaff_x29 + -0xb8) + 0x28);
    pvVar21 = *(void **)(unaff_x29 + -0x90);
    if (-1 < iVar11) {
      pvVar21 = (void *)(unaff_x29 + -0x78);
    }
    memcpy(__dest_01,pvVar21,*(size_t *)(unaff_x29 + -0xb0));
    if (-1 < iVar7) {
      __dest_00 = (undefined8 *)*__dest_00;
    }
    puVar14 = *(undefined8 **)(unaff_x29 + -0xa8);
    puVar16 = *(undefined8 **)(unaff_x29 + -0xa0);
    if (-1 < iVar8) {
      *(undefined8 *)(unaff_x29 + -0x80) = **(undefined8 **)(unaff_x29 + -0x80);
    }
    uVar23 = *(undefined8 *)(unaff_x29 + -0xf8);
    if (-1 < iVar9) {
      puVar14 = (undefined8 *)*puVar14;
    }
    puVar13 = (undefined8 *)plVar22[6];
    if (-1 < iVar10) {
      puVar16 = (undefined8 *)*puVar16;
    }
    uVar12 = *puVar13;
    if (-1 < *(int *)(unaff_x29 + -0xc0)) {
      __dest_02 = (undefined8 *)*__dest_02;
    }
    if (-1 < iVar11) {
      __dest_01 = (undefined8 *)*__dest_01;
    }
    *(undefined8 **)(unaff_x29 + -0x38) = puVar14;
    *(undefined8 **)(unaff_x29 + -0x30) = puVar16;
    *(undefined8 **)(unaff_x29 + -0x28) = __dest_02;
    *(undefined8 **)(unaff_x29 + -0x20) = __dest_01;
    pcVar15 = (code *)puVar13[2];
    *(undefined8 **)(unaff_x29 + -0x48) = __dest_00;
    *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x80);
    (*pcVar15)(uVar12,puVar13,0,unaff_x29 + -0x48,unaff_x29 + -0x18);
    if (*(long *)(unaff_x29 + -0x100) != 0) {
      *(undefined8 *)(*(long *)(unaff_x29 + -0x100) + 0x20) = *(undefined8 *)(unaff_x29 + -0x18);
      thunk_FUN_036b7ad0();
      if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
        return uVar23;
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


