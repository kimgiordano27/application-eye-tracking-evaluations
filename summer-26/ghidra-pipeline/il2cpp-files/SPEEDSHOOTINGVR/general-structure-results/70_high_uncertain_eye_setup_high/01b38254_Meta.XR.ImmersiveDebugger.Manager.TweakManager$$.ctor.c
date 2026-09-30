/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManager$$.ctor
ENTRY_POINT: 01b38254
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


void Meta_XR_ImmersiveDebugger_Manager_TweakManager___ctor(void)

{
  undefined *puVar1;
  bool in_ZR;
  int iVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  void *unaff_x20;
  long *unaff_x21;
  size_t sVar10;
  size_t unaff_x22;
  void *unaff_x23;
  size_t unaff_x24;
  void *unaff_x25;
  void *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  if (!in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc8d0();
  }
  pvVar3 = (void *)thunk_FUN_01040230();
  memcpy(unaff_x27,pvVar3,unaff_x22);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244();
  }
  pvVar3 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80)
                                     );
  memcpy(unaff_x28,pvVar3,unaff_x24);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244();
  }
  thunk_FUN_0103fd0c(**(undefined8 **)(lVar4 + 0xc0));
  memcpy(unaff_x25,unaff_x27,unaff_x22);
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0103c244();
  }
  pvVar3 = (void *)thunk_FUN_01023220();
  memcpy(unaff_x20,pvVar3,unaff_x24);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244();
  }
  thunk_FUN_0103fd0c(**(undefined8 **)(lVar4 + 0xc0));
  puVar1 = PTR_DAT_0234d9d8;
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar4 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0234d9d8) {
        puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_01b38394;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_0103c348();
LAB_01b38394:
  iVar2 = (*(code *)*puVar5)();
  lVar4 = *(long *)(unaff_x29 + -0x10);
  if (iVar2 == 0) {
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0103c244();
    }
    pvVar3 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                        *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80) +
                                        0x20);
    memcpy(unaff_x23,pvVar3,*(size_t *)(unaff_x29 + -0x20));
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0103c244();
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10));
    memcpy(unaff_x25,unaff_x27,unaff_x22);
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    pvVar3 = *(void **)(unaff_x29 + -0x28);
    sVar10 = *(size_t *)(unaff_x29 + -0x20);
    pvVar7 = (void *)thunk_FUN_01023220();
    memcpy(pvVar3,pvVar7,sVar10);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0103c244();
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10),pvVar3);
    lVar6 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_01b384c8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0103c348();
LAB_01b384c8:
    iVar2 = (*(code *)*puVar5)();
    if (iVar2 == 0) {
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0103c244();
      }
      sVar10 = *(size_t *)(unaff_x29 + -0x30);
      pvVar7 = *(void **)(unaff_x29 + -0x40);
      pvVar3 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                          *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80) +
                                          0x40);
      memcpy(pvVar7,pvVar3,sVar10);
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0103c244();
      }
      thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18),pvVar7);
      memcpy(unaff_x25,unaff_x27,unaff_x22);
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      pvVar7 = *(void **)(unaff_x29 + -0x38);
      pvVar3 = (void *)thunk_FUN_01023220();
      memcpy(pvVar7,pvVar3,sVar10);
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0103c244();
      }
      thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18),pvVar7);
      lVar6 = *unaff_x21;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_01b38600;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_0103c348();
LAB_01b38600:
      (*(code *)*puVar5)();
    }
  }
  if (*(long *)(lVar4 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


