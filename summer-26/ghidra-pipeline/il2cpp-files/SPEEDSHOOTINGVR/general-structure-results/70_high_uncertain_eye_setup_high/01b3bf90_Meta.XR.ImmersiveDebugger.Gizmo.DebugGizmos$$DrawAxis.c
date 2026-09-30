/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$DrawAxis
ENTRY_POINT: 01b3bf90
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawAxis(void)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  void *__src;
  ulong uVar5;
  int *piVar6;
  void *pvVar7;
  size_t sVar8;
  size_t unaff_x21;
  long *unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  void *unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
  lVar2 = FUN_0103c244();
  sVar8 = *(size_t *)(unaff_x29 + -0x30);
                    /* try { // try from 01b3bfa0 to 01c3bfb3 has its CatchHandler @ 01b3c120 */
  pvVar3 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x10),
                                      *(long *)(**(long **)(lVar2 + 0xc0) + 0x80) + 0x20);
                    /* try { // try from 01b3bfb8 to 01c3bfc7 has its CatchHandler @ 01b3c11c */
  memcpy(unaff_x23,pvVar3,sVar8);
  lVar2 = *unaff_x27;
                    /* try { // try from 01b3bfc8 to 01c3c137 has its CatchHandler @ 01b3bf20 */
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0103c244();
  }
  thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x58));
  lVar2 = *unaff_x24;
  uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x22) {
        puVar4 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_01b3c030;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_0103c348();
LAB_01b3c030:
  iVar1 = (*(code *)*puVar4)();
  if (iVar1 == 0) {
    lVar2 = *unaff_x27;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0103c244();
    }
    pvVar3 = *(void **)(unaff_x29 + -0x48);
    pvVar7 = *(void **)(unaff_x29 + -0x40);
    __src = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x20),
                                       *(long *)(**(long **)(lVar2 + 0xc0) + 0x80) + 0x40);
    memcpy(pvVar3,__src,*(size_t *)(unaff_x29 + -0x38));
    lVar2 = *unaff_x27;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0103c244();
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x80),pvVar3);
    memcpy(*(void **)(unaff_x29 + -0x10),unaff_x26,unaff_x21);
    lVar2 = *unaff_x27;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0103c244();
    }
    pvVar3 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x10),
                                        *(long *)(**(long **)(lVar2 + 0xc0) + 0x80) + 0x40);
    memcpy(pvVar7,pvVar3,*(size_t *)(unaff_x29 + -0x38));
    lVar2 = *unaff_x27;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0103c244();
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x80),pvVar7);
    lVar2 = *unaff_x24;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_01b3c160;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_0103c348();
LAB_01b3c160:
    iVar1 = (*(code *)*puVar4)();
    if (iVar1 == 0) {
      lVar2 = *unaff_x27;
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0103c244();
      }
      sVar8 = *(size_t *)(unaff_x29 + -0x50);
      pvVar7 = *(void **)(unaff_x29 + -0x60);
      pvVar3 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x20),
                                          *(long *)(**(long **)(lVar2 + 0xc0) + 0x80) + 0x60);
      memcpy(pvVar7,pvVar3,sVar8);
      lVar2 = *unaff_x27;
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0103c244();
      }
      thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xa8),pvVar7);
      memcpy(*(void **)(unaff_x29 + -0x10),unaff_x26,unaff_x21);
      lVar2 = *unaff_x27;
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0103c244();
      }
      pvVar7 = *(void **)(unaff_x29 + -0x58);
      pvVar3 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x10),
                                          *(long *)(**(long **)(lVar2 + 0xc0) + 0x80) + 0x60);
      memcpy(pvVar7,pvVar3,sVar8);
      lVar2 = *unaff_x27;
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0103c244();
      }
      thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xa8),pvVar7);
      lVar2 = *unaff_x24;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_01b3c298;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_0103c348();
LAB_01b3c298:
      (*(code *)*puVar4)();
    }
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


