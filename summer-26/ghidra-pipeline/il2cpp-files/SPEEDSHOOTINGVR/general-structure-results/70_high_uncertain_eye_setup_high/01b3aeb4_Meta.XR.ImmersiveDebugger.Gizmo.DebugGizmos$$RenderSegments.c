/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$RenderSegments
ENTRY_POINT: 01b3aeb4
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


uint Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__RenderSegments
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  void *__src;
  void *pvVar5;
  long in_x9;
  int *in_x10;
  int *piVar6;
  void *pvVar7;
  long *unaff_x20;
  size_t __n;
  size_t unaff_x22;
  long *unaff_x25;
  void *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetLines;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_0103c348();
Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetLines:
  uVar3 = (*(code *)*puVar2)();
  if ((uVar3 & 1) != 0) {
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    pvVar5 = *(void **)(unaff_x29 + -0x40);
    pvVar7 = *(void **)(unaff_x29 + -0x38);
    __src = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x20),
                                       *(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x40);
    memcpy(pvVar5,__src,*(size_t *)(unaff_x29 + -0x30));
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x80),pvVar5);
    memcpy(*(void **)(unaff_x29 + -0x18),unaff_x27,unaff_x22);
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    pvVar5 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                        *(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x40);
    memcpy(pvVar7,pvVar5,*(size_t *)(unaff_x29 + -0x30));
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x80),pvVar7);
    lVar4 = *unaff_x28;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_01b3b018;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_0103c348();
LAB_01b3b018:
    uVar3 = (*(code *)*puVar2)();
    if ((uVar3 & 1) != 0) {
      lVar4 = *unaff_x20;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
      __n = *(size_t *)(unaff_x29 + -0x48);
      pvVar7 = *(void **)(unaff_x29 + -0x58);
      pvVar5 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x20),
                                          *(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x60);
      memcpy(pvVar7,pvVar5,__n);
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
      pvVar5 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                          *(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x60);
      memcpy(pvVar7,pvVar5,__n);
      lVar4 = *unaff_x20;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
      thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xa8),pvVar7);
      lVar4 = *unaff_x28;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_01b3b18c;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_0103c348();
LAB_01b3b18c:
      uVar1 = (*(code *)*puVar2)();
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


