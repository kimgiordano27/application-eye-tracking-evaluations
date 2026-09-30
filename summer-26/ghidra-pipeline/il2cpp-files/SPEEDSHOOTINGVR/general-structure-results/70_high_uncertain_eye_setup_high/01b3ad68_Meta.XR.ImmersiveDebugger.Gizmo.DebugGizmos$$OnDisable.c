/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$OnDisable
ENTRY_POINT: 01b3ad68
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__OnDisable(void)

{
  uint uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__src;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  void *pvVar7;
  long *unaff_x20;
  size_t __n;
  size_t unaff_x22;
  size_t unaff_x23;
  void *unaff_x24;
  long unaff_x25;
  long *plVar8;
  void *unaff_x26;
  void *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  lVar4 = *unaff_x28;
  plVar8 = *(long **)(unaff_x25 + 0x9c0);
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *plVar8) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_01b3adbc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_0103c348();
LAB_01b3adbc:
  uVar5 = (*(code *)*puVar2)();
  if ((uVar5 & 1) != 0) {
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    pvVar3 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x20),
                                        *(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x20);
    memcpy(unaff_x26,pvVar3,unaff_x23);
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x58));
    memcpy(*(void **)(unaff_x29 + -0x18),unaff_x27,unaff_x22);
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    pvVar3 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                        *(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x20);
    memcpy(unaff_x24,pvVar3,unaff_x23);
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x58));
    lVar4 = *unaff_x28;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *plVar8) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetLines;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0103c348();
Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetLines:
    uVar5 = (*(code *)*puVar2)();
    if ((uVar5 & 1) != 0) {
      lVar4 = *unaff_x20;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
      pvVar3 = *(void **)(unaff_x29 + -0x40);
      pvVar7 = *(void **)(unaff_x29 + -0x38);
      __src = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x20),
                                         *(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x40);
      memcpy(pvVar3,__src,*(size_t *)(unaff_x29 + -0x30));
      lVar4 = *unaff_x20;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
      thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x80),pvVar3);
      memcpy(*(void **)(unaff_x29 + -0x18),unaff_x27,unaff_x22);
      lVar4 = *unaff_x20;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
      pvVar3 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                          *(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x40);
      memcpy(pvVar7,pvVar3,*(size_t *)(unaff_x29 + -0x30));
      lVar4 = *unaff_x20;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
      thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x80),pvVar7);
      lVar4 = *unaff_x28;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *plVar8) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_01b3b018;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0103c348();
LAB_01b3b018:
      uVar5 = (*(code *)*puVar2)();
      if ((uVar5 & 1) != 0) {
        lVar4 = *unaff_x20;
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0103c244();
        }
        __n = *(size_t *)(unaff_x29 + -0x48);
        pvVar7 = *(void **)(unaff_x29 + -0x58);
        pvVar3 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x20),
                                            *(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x60);
        memcpy(pvVar7,pvVar3,__n);
        lVar4 = *unaff_x20;
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0103c244();
        }
        thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xa8),pvVar7);
        memcpy(*(void **)(unaff_x29 + -0x18),unaff_x27,unaff_x22);
        lVar4 = *unaff_x20;
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0103c244();
        }
        pvVar7 = *(void **)(unaff_x29 + -0x50);
        pvVar3 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                            *(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x60);
        memcpy(pvVar7,pvVar3,__n);
        lVar4 = *unaff_x20;
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0103c244();
        }
        thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xa8),pvVar7);
        lVar4 = *unaff_x28;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *plVar8) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_01b3b18c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_0103c348();
LAB_01b3b18c:
        uVar1 = (*(code *)*puVar2)();
        goto LAB_01b3b148;
      }
    }
  }
  uVar1 = 0;
LAB_01b3b148:
  if (*(long *)(*(long *)(unaff_x29 + -0x10) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


