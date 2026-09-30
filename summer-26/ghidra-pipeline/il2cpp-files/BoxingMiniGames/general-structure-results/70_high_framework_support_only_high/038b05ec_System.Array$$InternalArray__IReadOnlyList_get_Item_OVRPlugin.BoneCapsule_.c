/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.BoneCapsule>
ENTRY_POINT: 038b05ec
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_BoneCapsule>
          (long param_1,undefined8 param_2,void *param_3)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  code *pcVar12;
  long in_x9;
  long unaff_x19;
  undefined8 *puVar13;
  undefined8 *__dest;
  long unaff_x23;
  long lVar14;
  undefined8 *__dest_00;
  undefined8 *__dest_01;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  uVar2 = *(uint *)(param_1 + 0xfc);
  uVar3 = *(uint *)(unaff_x28 + 0xfc);
  uVar4 = *(uint *)(unaff_x19 + 0xfc);
  uVar5 = *(uint *)(in_x9 + 0xfc);
  *(ulong *)(unaff_x29 + -0x88) = (ulong)uVar4;
  *(long *)(unaff_x29 + -0x80) = in_x9;
  puVar13 = (undefined8 *)(&stack0x00000000 + -((ulong)uVar2 + 0xf & 0x1fffffff0));
  __dest = (undefined8 *)((long)puVar13 - ((ulong)uVar3 + 0xf & 0x1fffffff0));
  __dest_00 = (undefined8 *)((long)__dest - ((ulong)uVar4 + 0xf & 0x1fffffff0));
  *(ulong *)(unaff_x29 + -0x78) = (ulong)uVar5;
  __dest_01 = (undefined8 *)((long)__dest_00 - ((ulong)uVar5 + 0xf & 0x1fffffff0));
  if (unaff_x23 != 0) {
    iVar6 = *(int *)(param_1 + 0x28);
    *(long *)(unaff_x29 + -0x90) = unaff_x23;
    lVar14 = *(long *)(unaff_x23 + 0x28);
    if (-1 < iVar6) {
      param_3 = (void *)(unaff_x29 + -0x38);
    }
    memcpy(puVar13,param_3,(ulong)uVar2);
    iVar7 = *(int *)(unaff_x28 + 0x28);
    pvVar1 = *(void **)(unaff_x29 + -0x70);
    if (-1 < iVar7) {
      pvVar1 = (void *)(unaff_x29 + -0x40);
    }
    memcpy(__dest,pvVar1,(ulong)uVar3);
    iVar8 = *(int *)(unaff_x19 + 0x28);
    pvVar1 = *(void **)(unaff_x29 + -0x68);
    if (-1 < iVar8) {
      pvVar1 = (void *)(unaff_x29 + -0x48);
    }
    memcpy(__dest_00,pvVar1,*(size_t *)(unaff_x29 + -0x88));
    iVar9 = *(int *)(*(long *)(unaff_x29 + -0x80) + 0x28);
    pvVar1 = *(void **)(unaff_x29 + -0x60);
    if (-1 < iVar9) {
      pvVar1 = (void *)(unaff_x29 + -0x50);
    }
    memcpy(__dest_01,pvVar1,*(size_t *)(unaff_x29 + -0x78));
    if (-1 < iVar6) {
      puVar13 = (undefined8 *)*puVar13;
    }
    puVar11 = *(undefined8 **)(unaff_x27 + 0x20);
    if (-1 < iVar7) {
      __dest = (undefined8 *)*__dest;
    }
    uVar10 = *puVar11;
    if (-1 < iVar8) {
      __dest_00 = (undefined8 *)*__dest_00;
    }
    if (-1 < iVar9) {
      __dest_01 = (undefined8 *)*__dest_01;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = __dest_00;
    *(undefined8 **)(unaff_x29 + -0x18) = __dest_01;
    pcVar12 = (code *)puVar11[2];
    *(undefined8 **)(unaff_x29 + -0x30) = puVar13;
    *(undefined8 **)(unaff_x29 + -0x28) = __dest;
    (*pcVar12)(uVar10,puVar11,0,unaff_x29 + -0x30,unaff_x29 + -0x10);
    if (lVar14 != 0) {
      puVar13 = (undefined8 *)(lVar14 + 0x20);
      *puVar13 = *(undefined8 *)(unaff_x29 + -0x10);
      thunk_FUN_036b7ad0(puVar13);
      if (*(long *)(*(long *)(unaff_x29 + -0x58) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return *(undefined8 *)(unaff_x29 + -0x90);
      }
      goto LAB_038b0780;
    }
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x58) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
LAB_038b0780:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


