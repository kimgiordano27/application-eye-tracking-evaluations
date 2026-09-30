/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Tweak<bool>$$.ctor
ENTRY_POINT: 04ef5e24
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
Meta_XR_ImmersiveDebugger_Manager_Tweak<bool>___ctor(long param_1,long param_2,void *param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long in_x7;
  undefined8 *puVar11;
  code *pcVar12;
  long in_x9;
  long lVar13;
  undefined8 *puVar14;
  ulong in_x10;
  undefined8 *puVar15;
  long in_x11;
  long in_x12;
  long in_x15;
  size_t unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *__dest;
  undefined8 *__dest_00;
  size_t unaff_x27;
  size_t unaff_x28;
  long unaff_x29;
  
                    /* try { // try from 04ef5e28 to 04ff5e2f has its CatchHandler @ 04ef6010 */
  lVar13 = in_x9 - (in_x10 & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x88) = lVar13;
  *(long *)(unaff_x29 + -0xd0) = in_x15;
  lVar13 = lVar13 - (in_x15 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x90) = lVar13;
                    /* try { // try from 04ef5e58 to 04ff5edf has its CatchHandler @ 04ef6024 */
  *(long *)(unaff_x29 + -0xc0) = in_x12;
  *(long *)(unaff_x29 + -0xb8) = in_x11;
  __dest = (undefined8 *)(lVar13 - (in_x12 + 0xfU & 0x1fffffff0));
  __dest_00 = (undefined8 *)((long)__dest - (in_x11 + 0xfU & 0x1fffffff0));
  if (param_2 == 0) {
                    /* catch() { ... } // from try @ 04ef5e58 with catch @ 04ef6024
                       catch() { ... } // from try @ 04ef5fd4 with catch @ 04ef6024 */
    if (*(long *)(unaff_x21 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else {
    uVar8 = FUN_04ef5044(param_2,*(undefined8 *)(param_1 + 0x30));
    if (*(long *)(param_2 + 0x28) != 0) {
      *(long *)(unaff_x29 + -0xe8) = *(long *)(param_2 + 0x28);
      *(undefined8 *)(unaff_x29 + -0xe0) = uVar8;
      lVar13 = *(long *)(in_x7 + 0x20);
      *(long *)(unaff_x29 + -0xd8) = unaff_x21;
      lVar13 = *(long *)(lVar13 + 0xc0);
      iVar2 = *(int *)(*(long *)(lVar13 + 0x40) + 0x28);
      if (-1 < iVar2) {
        param_3 = (void *)(unaff_x29 + -0x50);
      }
      memcpy(unaff_x22,param_3,unaff_x28);
      iVar3 = *(int *)(*(long *)(lVar13 + 0x48) + 0x28);
      pvVar1 = *(void **)(unaff_x29 + -200);
      if (-1 < iVar3) {
        pvVar1 = (void *)(unaff_x29 + -0x58);
      }
      memcpy(*(void **)(unaff_x29 + -0x80),pvVar1,unaff_x19);
      iVar4 = *(int *)(*(long *)(lVar13 + 0x50) + 0x28);
                    /* try { // try from 04ef5f0c to 04ff5f0f has its CatchHandler @ 04ef6020 */
      pvVar1 = *(void **)(unaff_x29 + -0xb0);
                    /* try { // try from 04ef5f10 to 04ff5f83 has its CatchHandler @ 04ef5c38 */
      if (-1 < iVar4) {
        pvVar1 = (void *)(unaff_x29 + -0x60);
      }
      memcpy(*(void **)(unaff_x29 + -0x88),pvVar1,unaff_x27);
      iVar5 = *(int *)(*(long *)(lVar13 + 0x58) + 0x28);
      pvVar1 = *(void **)(unaff_x29 + -0xa8);
      if (-1 < iVar5) {
        pvVar1 = (void *)(unaff_x29 + -0x68);
      }
      memcpy(*(void **)(unaff_x29 + -0x90),pvVar1,*(size_t *)(unaff_x29 + -0xd0));
      iVar6 = *(int *)(*(long *)(lVar13 + 0x60) + 0x28);
      pvVar1 = *(void **)(unaff_x29 + -0xa0);
      if (-1 < iVar6) {
        pvVar1 = (void *)(unaff_x29 + -0x70);
      }
      memcpy(__dest,pvVar1,*(size_t *)(unaff_x29 + -0xc0));
      iVar7 = *(int *)(*(long *)(lVar13 + 0x68) + 0x28);
      pvVar1 = *(void **)(unaff_x29 + -0x98);
      if (-1 < iVar7) {
        pvVar1 = (void *)(unaff_x29 + -0x78);
      }
      memcpy(__dest_00,pvVar1,*(size_t *)(unaff_x29 + -0xb8));
                    /* try { // try from 04ef5f84 to 04ff5f87 has its CatchHandler @ 04ef601c */
      if (-1 < iVar2) {
        unaff_x22 = (undefined8 *)*unaff_x22;
      }
      puVar11 = *(undefined8 **)(unaff_x29 + -0x88);
      puVar14 = *(undefined8 **)(unaff_x29 + -0x80);
      unaff_x21 = *(long *)(unaff_x29 + -0xd8);
      puVar15 = *(undefined8 **)(unaff_x29 + -0x90);
                    /* try { // try from 04ef5f98 to 04ff5f9b has its CatchHandler @ 04ef6008 */
      if (-1 < iVar3) {
        puVar14 = (undefined8 *)*puVar14;
      }
      if (-1 < iVar4) {
        puVar11 = (undefined8 *)*puVar11;
      }
                    /* try { // try from 04ef5fac to 04ff5faf has its CatchHandler @ 04ef6064 */
      puVar10 = *(undefined8 **)(lVar13 + 0x70);
      if (-1 < iVar5) {
        puVar15 = (undefined8 *)*puVar15;
      }
      uVar8 = *(undefined8 *)(unaff_x29 + -0xe0);
      uVar9 = *puVar10;
                    /* try { // try from 04ef5fc0 to 04ff5fc3 has its CatchHandler @ 04ef6004 */
      if (-1 < iVar6) {
        __dest = (undefined8 *)*__dest;
      }
      if (-1 < iVar7) {
        __dest_00 = (undefined8 *)*__dest_00;
      }
      *(undefined8 **)(unaff_x29 + -0x38) = puVar11;
      *(undefined8 **)(unaff_x29 + -0x30) = puVar15;
                    /* try { // try from 04ef5fd4 to 04ff5fd7 has its CatchHandler @ 04ef6024 */
      *(undefined8 **)(unaff_x29 + -0x28) = __dest;
      *(undefined8 **)(unaff_x29 + -0x20) = __dest_00;
      *(undefined8 *)(unaff_x29 + -0x18) = uVar8;
      pcVar12 = (code *)puVar10[2];
                    /* try { // try from 04ef5fe8 to 04ff6003 has its CatchHandler @ 04ef6020 */
      *(undefined8 **)(unaff_x29 + -0x48) = unaff_x22;
      *(undefined8 **)(unaff_x29 + -0x40) = puVar14;
      (*pcVar12)(uVar9,puVar10,*(undefined8 *)(unaff_x29 + -0xe8),unaff_x29 + -0x48,uVar8);
    }
    if (*(long *)(unaff_x21 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* catch() { ... } // from try @ 04ef5fc0 with catch @ 04ef6004
                       try { // try from 04ef6004 to 04ff6043 has its CatchHandler @ 04ef5c38 */
                    /* catch() { ... } // from try @ 04ef5f98 with catch @ 04ef6008 */
                    /* catch() { ... } // from try @ 04ef5d30 with catch @ 04ef600c */
                    /* catch() { ... } // from try @ 04ef5e28 with catch @ 04ef6010 */
      return uVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


