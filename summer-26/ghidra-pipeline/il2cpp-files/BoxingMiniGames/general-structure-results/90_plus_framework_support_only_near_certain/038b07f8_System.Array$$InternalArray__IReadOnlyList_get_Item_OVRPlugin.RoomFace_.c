/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.RoomFace>
ENTRY_POINT: 038b07f8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_RoomFace>
          (long param_1,undefined8 param_2,undefined8 param_3,size_t param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  long in_x9;
  void *__src;
  long in_x10;
  undefined8 *puVar13;
  long in_x11;
  void *pvVar14;
  long unaff_x20;
  undefined8 *__dest;
  long unaff_x24;
  void *unaff_x25;
  undefined8 *__dest_00;
  undefined8 *__dest_01;
  undefined8 *__dest_02;
  long unaff_x28;
  long unaff_x29;
  
  uVar1 = *(uint *)(unaff_x28 + 0xfc);
  uVar2 = *(uint *)(in_x10 + 0xfc);
  *(long *)(unaff_x29 + -0xb8) = in_x11;
  *(long *)(unaff_x29 + -0xb0) = in_x10;
  uVar3 = *(uint *)(in_x11 + 0xfc);
  uVar4 = *(uint *)(in_x9 + 0xfc);
  *(ulong *)(unaff_x29 + -0xa8) = (ulong)uVar2;
  *(long *)(unaff_x29 + -0xa0) = in_x9;
  __dest_00 = (undefined8 *)(&stack0x00000000 + -(param_4 + 0xf & 0x1fffffff0));
  pvVar14 = (void *)((long)__dest_00 - ((ulong)uVar1 + 0xf & 0x1fffffff0));
  *(ulong *)(unaff_x29 + -0xc0) = (ulong)uVar3;
  __dest = (undefined8 *)((long)pvVar14 - ((ulong)uVar3 + 0xf & 0x1fffffff0));
  __dest_01 = (undefined8 *)((long)__dest - ((ulong)uVar2 + 0xf & 0x1fffffff0));
  *(ulong *)(unaff_x29 + -0x98) = (ulong)uVar4;
  __dest_02 = (undefined8 *)((long)__dest_01 - ((ulong)uVar4 + 0xf & 0x1fffffff0));
  if (unaff_x20 != 0) {
    iVar5 = *(int *)(param_1 + 0x28);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
    *(long *)(unaff_x29 + -0xd0) = unaff_x20;
    *(undefined8 *)(unaff_x29 + -200) = uVar11;
    if (-1 < iVar5) {
      unaff_x25 = (void *)(unaff_x29 + -0x48);
    }
    memcpy(__dest_00,unaff_x25,param_4);
    iVar6 = *(int *)(unaff_x28 + 0x28);
    __src = *(void **)(unaff_x29 + -0x90);
    *(void **)(unaff_x29 + -0x90) = pvVar14;
    if (-1 < iVar6) {
      __src = (void *)(unaff_x29 + -0x50);
    }
    memcpy(pvVar14,__src,(ulong)uVar1);
    iVar7 = *(int *)(*(long *)(unaff_x29 + -0xb8) + 0x28);
    pvVar14 = *(void **)(unaff_x29 + -0x88);
    if (-1 < iVar7) {
      pvVar14 = (void *)(unaff_x29 + -0x58);
    }
    memcpy(__dest,pvVar14,*(size_t *)(unaff_x29 + -0xc0));
    iVar8 = *(int *)(*(long *)(unaff_x29 + -0xb0) + 0x28);
    pvVar14 = *(void **)(unaff_x29 + -0x80);
    if (-1 < iVar8) {
      pvVar14 = (void *)(unaff_x29 + -0x60);
    }
    memcpy(__dest_01,pvVar14,*(size_t *)(unaff_x29 + -0xa8));
    iVar9 = *(int *)(*(long *)(unaff_x29 + -0xa0) + 0x28);
    pvVar14 = *(void **)(unaff_x29 + -0x78);
    if (-1 < iVar9) {
      pvVar14 = (void *)(unaff_x29 + -0x68);
    }
    memcpy(__dest_02,pvVar14,*(size_t *)(unaff_x29 + -0x98));
    if (-1 < iVar5) {
      __dest_00 = (undefined8 *)*__dest_00;
    }
    puVar13 = *(undefined8 **)(unaff_x29 + -0x90);
    if (-1 < iVar6) {
      puVar13 = (undefined8 *)*puVar13;
    }
    puVar10 = *(undefined8 **)(unaff_x24 + 0x28);
    if (-1 < iVar7) {
      __dest = (undefined8 *)*__dest;
    }
    uVar11 = *puVar10;
    if (-1 < iVar8) {
      __dest_01 = (undefined8 *)*__dest_01;
    }
    if (-1 < iVar9) {
      __dest_02 = (undefined8 *)*__dest_02;
    }
    *(undefined8 **)(unaff_x29 + -0x30) = __dest;
    *(undefined8 **)(unaff_x29 + -0x28) = __dest_01;
    *(undefined8 **)(unaff_x29 + -0x20) = __dest_02;
    pcVar12 = (code *)puVar10[2];
    *(undefined8 **)(unaff_x29 + -0x40) = __dest_00;
    *(undefined8 **)(unaff_x29 + -0x38) = puVar13;
    (*pcVar12)(uVar11,puVar10,0,unaff_x29 + -0x40,unaff_x29 + -0x18);
    if (*(long *)(unaff_x29 + -200) != 0) {
      *(undefined8 *)(*(long *)(unaff_x29 + -200) + 0x20) = *(undefined8 *)(unaff_x29 + -0x18);
      thunk_FUN_036b7ad0();
      if (*(long *)(*(long *)(unaff_x29 + -0x70) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
        return *(undefined8 *)(unaff_x29 + -0xd0);
      }
      goto LAB_038b09dc;
    }
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x70) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
LAB_038b09dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


