/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$RenderLines
ENTRY_POINT: 01b3af74
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__RenderLines(long param_1)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  void *pvVar7;
  long *unaff_x20;
  void *unaff_x21;
  size_t __n;
  size_t unaff_x22;
  long *unaff_x25;
  void *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0103c244();
  }
  pvVar2 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                      *(long *)(**(long **)(param_1 + 0xc0) + 0x80) + 0x40);
  memcpy(unaff_x21,pvVar2,*(size_t *)(unaff_x29 + -0x30));
  lVar3 = *unaff_x20;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244();
  }
  thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x80));
  lVar3 = *unaff_x28;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x25) {
        puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_01b3b018;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_0103c348();
LAB_01b3b018:
  uVar5 = (*(code *)*puVar4)();
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    __n = *(size_t *)(unaff_x29 + -0x48);
    pvVar7 = *(void **)(unaff_x29 + -0x58);
    pvVar2 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x20),
                                        *(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x60);
    memcpy(pvVar7,pvVar2,__n);
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
                    /* try { // try from 01b3b088 to 01c3b107 has its CatchHandler @ 01b3b088
                       catch() { ... } // from try @ 01b3b088 with catch @ 01b3b088
                       catch() { ... } // from try @ 01b3b130 with catch @ 01b3b088
                       catch() { ... } // from try @ 01b3b2b8 with catch @ 01b3b088
                       catch() { ... } // from try @ 01b3b308 with catch @ 01b3b088 */
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xa8),pvVar7);
    memcpy(*(void **)(unaff_x29 + -0x18),unaff_x27,unaff_x22);
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    pvVar7 = *(void **)(unaff_x29 + -0x50);
    pvVar2 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                        *(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x60);
    memcpy(pvVar7,pvVar2,__n);
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xa8),pvVar7);
    lVar3 = *unaff_x28;
                    /* try { // try from 01b3b108 to 01c3b11b has its CatchHandler @ 01b3b288 */
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* try { // try from 01b3b120 to 01c3b12f has its CatchHandler @ 01b3b284 */
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_01b3b18c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
                    /* try { // try from 01b3b130 to 01c3b29f has its CatchHandler @ 01b3b088 */
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_0103c348();
LAB_01b3b18c:
    uVar1 = (*(code *)*puVar4)();
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x10) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


