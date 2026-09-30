/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Tweak<bool>$$set_Tween
ENTRY_POINT: 04ef5d9c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Manager_Tweak<bool>__set_Tween
          (long param_1,void *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,long param_8)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  code *pcVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong __n;
  long lVar23;
  undefined8 *__dest;
  undefined8 *__dest_00;
  undefined8 *__dest_01;
  ulong __n_00;
  ulong __n_01;
  long unaff_x29;
  
  lVar23 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(lVar23 + 0x28);
  lVar14 = *(long *)(param_8 + 0x20);
  *(undefined8 *)(unaff_x29 + -0x58) = param_3;
  *(void **)(unaff_x29 + -0x50) = param_2;
  *(undefined8 *)(unaff_x29 + -200) = param_3;
  lVar15 = *(long *)(lVar14 + 0xc0);
  *(undefined8 *)(unaff_x29 + -0xb0) = param_4;
  *(undefined8 *)(unaff_x29 + -0xa8) = param_5;
  *(undefined8 *)(unaff_x29 + -0x68) = param_5;
  *(undefined8 *)(unaff_x29 + -0x60) = param_4;
  lVar14 = *(long *)(lVar15 + 0x40);
  lVar3 = *(long *)(lVar15 + 0x48);
  *(undefined8 *)(unaff_x29 + -0xa0) = param_6;
  *(undefined8 *)(unaff_x29 + -0x98) = param_7;
  lVar2 = *(long *)(lVar15 + 0x50);
  lVar4 = *(long *)(lVar15 + 0x58);
  *(undefined8 *)(unaff_x29 + -0x78) = param_7;
  *(undefined8 *)(unaff_x29 + -0x70) = param_6;
  __n_01 = (ulong)*(uint *)(lVar14 + 0xfc);
  __n = (ulong)*(uint *)(lVar3 + 0xfc);
  __n_00 = (ulong)*(uint *)(lVar2 + 0xfc);
  uVar22 = (ulong)*(uint *)(lVar4 + 0xfc);
  uVar21 = (ulong)*(uint *)(*(long *)(lVar15 + 0x60) + 0xfc);
  uVar20 = (ulong)*(uint *)(*(long *)(lVar15 + 0x68) + 0xfc);
  __dest = (undefined8 *)(&stack0x00000000 + -(__n_01 + 0xf & 0x1fffffff0));
  lVar14 = (long)__dest - (__n + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x80) = lVar14;
  lVar14 = lVar14 - (__n_00 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x88) = lVar14;
  *(ulong *)(unaff_x29 + -0xd0) = uVar22;
  lVar14 = lVar14 - (uVar22 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x90) = lVar14;
  *(ulong *)(unaff_x29 + -0xc0) = uVar21;
  *(ulong *)(unaff_x29 + -0xb8) = uVar20;
  __dest_00 = (undefined8 *)(lVar14 - (uVar21 + 0xf & 0x1fffffff0));
  __dest_01 = (undefined8 *)((long)__dest_00 - (uVar20 + 0xf & 0x1fffffff0));
  if (param_1 == 0) {
    if (*(long *)(lVar23 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else {
    uVar11 = FUN_04ef5044(param_1,*(undefined8 *)(lVar15 + 0x30));
    if (*(long *)(param_1 + 0x28) != 0) {
      *(long *)(unaff_x29 + -0xe8) = *(long *)(param_1 + 0x28);
      *(undefined8 *)(unaff_x29 + -0xe0) = uVar11;
      lVar14 = *(long *)(param_8 + 0x20);
      *(long *)(unaff_x29 + -0xd8) = lVar23;
      lVar14 = *(long *)(lVar14 + 0xc0);
      iVar5 = *(int *)(*(long *)(lVar14 + 0x40) + 0x28);
      if (-1 < iVar5) {
        param_2 = (void *)(unaff_x29 + -0x50);
      }
      memcpy(__dest,param_2,__n_01);
      iVar6 = *(int *)(*(long *)(lVar14 + 0x48) + 0x28);
      pvVar1 = *(void **)(unaff_x29 + -200);
      if (-1 < iVar6) {
        pvVar1 = (void *)(unaff_x29 + -0x58);
      }
      memcpy(*(void **)(unaff_x29 + -0x80),pvVar1,__n);
      iVar7 = *(int *)(*(long *)(lVar14 + 0x50) + 0x28);
      pvVar1 = *(void **)(unaff_x29 + -0xb0);
      if (-1 < iVar7) {
        pvVar1 = (void *)(unaff_x29 + -0x60);
      }
      memcpy(*(void **)(unaff_x29 + -0x88),pvVar1,__n_00);
      iVar8 = *(int *)(*(long *)(lVar14 + 0x58) + 0x28);
      pvVar1 = *(void **)(unaff_x29 + -0xa8);
      if (-1 < iVar8) {
        pvVar1 = (void *)(unaff_x29 + -0x68);
      }
      memcpy(*(void **)(unaff_x29 + -0x90),pvVar1,*(size_t *)(unaff_x29 + -0xd0));
      iVar9 = *(int *)(*(long *)(lVar14 + 0x60) + 0x28);
      pvVar1 = *(void **)(unaff_x29 + -0xa0);
      if (-1 < iVar9) {
        pvVar1 = (void *)(unaff_x29 + -0x70);
      }
      memcpy(__dest_00,pvVar1,*(size_t *)(unaff_x29 + -0xc0));
      iVar10 = *(int *)(*(long *)(lVar14 + 0x68) + 0x28);
      pvVar1 = *(void **)(unaff_x29 + -0x98);
      if (-1 < iVar10) {
        pvVar1 = (void *)(unaff_x29 + -0x78);
      }
      memcpy(__dest_01,pvVar1,*(size_t *)(unaff_x29 + -0xb8));
      if (-1 < iVar5) {
        __dest = (undefined8 *)*__dest;
      }
      puVar16 = *(undefined8 **)(unaff_x29 + -0x88);
      puVar18 = *(undefined8 **)(unaff_x29 + -0x80);
      lVar23 = *(long *)(unaff_x29 + -0xd8);
      puVar19 = *(undefined8 **)(unaff_x29 + -0x90);
      if (-1 < iVar6) {
        puVar18 = (undefined8 *)*puVar18;
      }
      if (-1 < iVar7) {
        puVar16 = (undefined8 *)*puVar16;
      }
      puVar13 = *(undefined8 **)(lVar14 + 0x70);
      if (-1 < iVar8) {
        puVar19 = (undefined8 *)*puVar19;
      }
      uVar11 = *(undefined8 *)(unaff_x29 + -0xe0);
      uVar12 = *puVar13;
      if (-1 < iVar9) {
        __dest_00 = (undefined8 *)*__dest_00;
      }
      if (-1 < iVar10) {
        __dest_01 = (undefined8 *)*__dest_01;
      }
      *(undefined8 **)(unaff_x29 + -0x38) = puVar16;
      *(undefined8 **)(unaff_x29 + -0x30) = puVar19;
      *(undefined8 **)(unaff_x29 + -0x28) = __dest_00;
      *(undefined8 **)(unaff_x29 + -0x20) = __dest_01;
      *(undefined8 *)(unaff_x29 + -0x18) = uVar11;
      pcVar17 = (code *)puVar13[2];
      *(undefined8 **)(unaff_x29 + -0x48) = __dest;
      *(undefined8 **)(unaff_x29 + -0x40) = puVar18;
      (*pcVar17)(uVar12,puVar13,*(undefined8 *)(unaff_x29 + -0xe8),unaff_x29 + -0x48,uVar11);
    }
    if (*(long *)(lVar23 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
      return uVar11;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


