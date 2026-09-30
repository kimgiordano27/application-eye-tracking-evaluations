/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Tweak<int>$$.ctor
ENTRY_POINT: 04ef6114
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_Tweak<int>___ctor(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar13;
  undefined8 *puVar14;
  code *pcVar15;
  long in_x9;
  long lVar16;
  void *pvVar17;
  long in_x11;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long in_x13;
  long in_x14;
  long in_x16;
  void *pvVar20;
  size_t unaff_x21;
  long unaff_x22;
  size_t unaff_x23;
  undefined8 *__dest;
  size_t unaff_x25;
  undefined8 *__dest_00;
  long unaff_x27;
  undefined8 *__dest_01;
  long unaff_x29;
  
  uVar1 = *(uint *)(in_x13 + 0xfc);
  uVar2 = *(uint *)(in_x14 + 0xfc);
  *(undefined8 *)(unaff_x29 + -0x80) = in_x6;
  *(undefined8 *)(unaff_x29 + -0x78) = in_x5;
  __dest = (undefined8 *)(in_x9 - (unaff_x21 + 0xf & 0x1fffffff0));
  *(undefined8 *)(unaff_x29 + -0xb8) = in_x6;
  *(undefined8 *)(unaff_x29 + -0xb0) = in_x7;
  pvVar20 = (void *)((long)__dest - (unaff_x25 + 0xf & 0x1fffffff0));
  lVar16 = (long)pvVar20 - (unaff_x23 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x90) = lVar16;
  *(undefined8 *)(unaff_x29 + -0x88) = in_x7;
                    /* try { // try from 04ef6168 to 04ff6173 has its CatchHandler @ 04ef64d0 */
  *(long *)(unaff_x29 + -0xf8) = in_x16;
  lVar16 = lVar16 - (in_x16 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x98) = lVar16;
  *(ulong *)(unaff_x29 + -0xe8) = (ulong)uVar1;
  *(ulong *)(unaff_x29 + -0xe0) = (ulong)uVar2;
                    /* try { // try from 04ef6188 to 04ff618f has its CatchHandler @ 04ef64cc */
  lVar16 = lVar16 - ((ulong)uVar1 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xa0) = lVar16;
  __dest_00 = (undefined8 *)(lVar16 - ((ulong)uVar2 + 0xf & 0x1fffffff0));
                    /* try { // try from 04ef61b0 to 04ff61bb has its CatchHandler @ 04ef64c4 */
  *(long *)(unaff_x29 + -0xd0) = in_x11;
                    /* try { // try from 04ef61bc to 04ff61e7 has its CatchHandler @ 04ef60bc */
  __dest_01 = (undefined8 *)((long)__dest_00 - (in_x11 + 0xfU & 0x1fffffff0));
  if (param_2 == 0) {
    if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else {
    uVar10 = FUN_04ef5044(param_2,*(undefined8 *)(param_1 + 0x30));
    lVar16 = *(long *)(param_2 + 0x28);
    if (lVar16 != 0) {
      *(long *)(unaff_x29 + -0x100) = unaff_x22;
                    /* try { // try from 04ef61e8 to 04ff61f3 has its CatchHandler @ 04ef64d4 */
      *(long *)(unaff_x29 + -0x110) = lVar16;
      *(undefined8 *)(unaff_x29 + -0x108) = uVar10;
                    /* try { // try from 04ef6204 to 04ff6207 has its CatchHandler @ 04ef651c */
      lVar16 = *(long *)(*(long *)(unaff_x27 + 0x20) + 0xc0);
                    /* try { // try from 04ef6208 to 04ff6237 has its CatchHandler @ 04ef60bc */
      iVar3 = *(int *)(*(long *)(lVar16 + 0x40) + 0x28);
      pvVar17 = *(void **)(unaff_x29 + -0xf0);
      if (-1 < iVar3) {
        pvVar17 = (void *)(unaff_x29 + -0x58);
      }
      memcpy(__dest,pvVar17,unaff_x21);
      lVar13 = *(long *)(lVar16 + 0x48);
      pvVar17 = *(void **)(unaff_x29 + -0xa8);
      *(void **)(unaff_x29 + -0xa8) = pvVar20;
      iVar4 = *(int *)(lVar13 + 0x28);
                    /* try { // try from 04ef6238 to 04ff62c3 has its CatchHandler @ 04ef651c */
      if (-1 < iVar4) {
        pvVar17 = (void *)(unaff_x29 + -0x60);
      }
      memcpy(pvVar20,pvVar17,unaff_x25);
      iVar5 = *(int *)(*(long *)(lVar16 + 0x50) + 0x28);
      pvVar20 = *(void **)(unaff_x29 + -0xd8);
      if (-1 < iVar5) {
        pvVar20 = (void *)(unaff_x29 + -0x68);
      }
      memcpy(*(void **)(unaff_x29 + -0x90),pvVar20,unaff_x23);
      iVar6 = *(int *)(*(long *)(lVar16 + 0x58) + 0x28);
      pvVar20 = *(void **)(unaff_x29 + -200);
      if (-1 < iVar6) {
        pvVar20 = (void *)(unaff_x29 + -0x70);
      }
      memcpy(*(void **)(unaff_x29 + -0x98),pvVar20,*(size_t *)(unaff_x29 + -0xf8));
      iVar7 = *(int *)(*(long *)(lVar16 + 0x60) + 0x28);
      pvVar20 = *(void **)(unaff_x29 + -0xc0);
      if (-1 < iVar7) {
        pvVar20 = (void *)(unaff_x29 + -0x78);
      }
      memcpy(*(void **)(unaff_x29 + -0xa0),pvVar20,*(size_t *)(unaff_x29 + -0xe8));
      iVar8 = *(int *)(*(long *)(lVar16 + 0x68) + 0x28);
      pvVar20 = *(void **)(unaff_x29 + -0xb8);
      if (-1 < iVar8) {
        pvVar20 = (void *)(unaff_x29 + -0x80);
      }
      memcpy(__dest_00,pvVar20,*(size_t *)(unaff_x29 + -0xe0));
                    /* try { // try from 04ef62dc to 04ff62e3 has its CatchHandler @ 04ef64c8 */
      iVar9 = *(int *)(*(long *)(lVar16 + 0x70) + 0x28);
      *(int *)(unaff_x29 + -0xb8) = iVar9;
      pvVar20 = *(void **)(unaff_x29 + -0xb0);
      if (-1 < iVar9) {
        pvVar20 = (void *)(unaff_x29 + -0x88);
      }
      memcpy(__dest_01,pvVar20,*(size_t *)(unaff_x29 + -0xd0));
      if (-1 < iVar3) {
        __dest = (undefined8 *)*__dest;
      }
      puVar19 = *(undefined8 **)(unaff_x29 + -0xa0);
      puVar18 = *(undefined8 **)(unaff_x29 + -0x98);
      unaff_x22 = *(long *)(unaff_x29 + -0x100);
      if (-1 < iVar4) {
        *(undefined8 *)(unaff_x29 + -0xa8) = **(undefined8 **)(unaff_x29 + -0xa8);
      }
      puVar14 = *(undefined8 **)(unaff_x29 + -0x90);
      if (-1 < iVar5) {
        puVar14 = (undefined8 *)*puVar14;
      }
      if (-1 < iVar6) {
        puVar18 = (undefined8 *)*puVar18;
      }
      puVar12 = *(undefined8 **)(lVar16 + 0x78);
      if (-1 < iVar7) {
        puVar19 = (undefined8 *)*puVar19;
      }
      uVar11 = *puVar12;
      uVar10 = *(undefined8 *)(unaff_x29 + -0x108);
      if (-1 < iVar8) {
        __dest_00 = (undefined8 *)*__dest_00;
      }
      if (-1 < *(int *)(unaff_x29 + -0xb8)) {
        __dest_01 = (undefined8 *)*__dest_01;
      }
      *(undefined8 **)(unaff_x29 + -0x40) = puVar14;
      *(undefined8 **)(unaff_x29 + -0x38) = puVar18;
      *(undefined8 **)(unaff_x29 + -0x30) = puVar19;
      *(undefined8 **)(unaff_x29 + -0x28) = __dest_00;
      *(undefined8 **)(unaff_x29 + -0x20) = __dest_01;
      *(undefined8 *)(unaff_x29 + -0x18) = uVar10;
      pcVar15 = (code *)puVar12[2];
      *(undefined8 **)(unaff_x29 + -0x50) = __dest;
      *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0xa8);
      (*pcVar15)(uVar11,puVar12,*(undefined8 *)(unaff_x29 + -0x110),unaff_x29 + -0x50,uVar10);
    }
    if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
      return uVar10;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


