/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetLines
ENTRY_POINT: 01b3aee8
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


uint Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetLines(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  void *__src;
  void *pvVar4;
  undefined8 *puVar5;
  int *piVar6;
  void *pvVar7;
  long *unaff_x20;
  size_t __n;
  size_t unaff_x22;
  long *unaff_x25;
  void *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  uVar2 = (*(code *)*param_1)();
  if ((uVar2 & 1) != 0) {
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    pvVar4 = *(void **)(unaff_x29 + -0x40);
    pvVar7 = *(void **)(unaff_x29 + -0x38);
    __src = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x20),
                                       *(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x40);
    memcpy(pvVar4,__src,*(size_t *)(unaff_x29 + -0x30));
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x80),pvVar4);
    memcpy(*(void **)(unaff_x29 + -0x18),unaff_x27,unaff_x22);
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    pvVar4 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                        *(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x40);
    memcpy(pvVar7,pvVar4,*(size_t *)(unaff_x29 + -0x30));
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x80),pvVar7);
    lVar3 = *unaff_x28;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_01b3b018;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined8 *)FUN_0103c348();
LAB_01b3b018:
    uVar2 = (*(code *)*puVar5)();
    if ((uVar2 & 1) != 0) {
      lVar3 = *unaff_x20;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244();
      }
      __n = *(size_t *)(unaff_x29 + -0x48);
      pvVar7 = *(void **)(unaff_x29 + -0x58);
      pvVar4 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x20),
                                          *(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x60);
      memcpy(pvVar7,pvVar4,__n);
      lVar3 = *unaff_x20;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244();
      }
      thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xa8),pvVar7);
      memcpy(*(void **)(unaff_x29 + -0x18),unaff_x27,unaff_x22);
      lVar3 = *unaff_x20;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244();
      }
      pvVar7 = *(void **)(unaff_x29 + -0x50);
      pvVar4 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                          *(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x60);
      memcpy(pvVar7,pvVar4,__n);
      lVar3 = *unaff_x20;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244();
      }
      thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xa8),pvVar7);
      lVar3 = *unaff_x28;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x25) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_01b3b18c;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_0103c348();
LAB_01b3b18c:
      uVar1 = (*(code *)*puVar5)();
      goto LAB_01b3b148;
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


