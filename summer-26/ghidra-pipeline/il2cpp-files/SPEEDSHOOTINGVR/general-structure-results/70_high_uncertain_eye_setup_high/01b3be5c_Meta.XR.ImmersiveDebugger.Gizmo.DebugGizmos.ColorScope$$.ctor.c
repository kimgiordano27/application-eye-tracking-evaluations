/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos.ColorScope$$.ctor
ENTRY_POINT: 01b3be5c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos_ColorScope___ctor(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *__src;
  ulong uVar8;
  int *piVar9;
  void *unaff_x19;
  void *pvVar10;
  size_t sVar11;
  size_t unaff_x21;
  void *unaff_x23;
  long *plVar12;
  void *unaff_x25;
  void *unaff_x26;
  long *unaff_x27;
  size_t unaff_x28;
  long unaff_x29;
  
  pvVar3 = (void *)thunk_FUN_01023220(param_2,*(undefined8 *)(*param_1 + 0x80));
  memcpy(unaff_x19,pvVar3,unaff_x28);
  lVar4 = *unaff_x27;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244();
  }
  plVar12 = *(long **)(unaff_x29 + -0x28);
  thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x30));
  puVar1 = PTR_DAT_0234d9d8;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar4 = *plVar12;
  uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0234d9d8) {
        puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_01b3bf00;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_0103c348(plVar12,*(long *)PTR_DAT_0234d9d8,0);
LAB_01b3bf00:
  iVar2 = (*(code *)*puVar5)(plVar12);
  if (iVar2 == 0) {
    lVar4 = *unaff_x27;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    pvVar3 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x20),
                                        *(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x20);
    memcpy(unaff_x25,pvVar3,*(size_t *)(unaff_x29 + -0x30));
    lVar4 = *unaff_x27;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    uVar6 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x58));
    memcpy(*(void **)(unaff_x29 + -0x10),unaff_x26,unaff_x21);
    lVar4 = *unaff_x27;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    sVar11 = *(size_t *)(unaff_x29 + -0x30);
    pvVar3 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x10),
                                        *(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x20);
    memcpy(unaff_x23,pvVar3,sVar11);
    lVar4 = *unaff_x27;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    uVar7 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x58));
    lVar4 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_01b3c030;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0103c348(plVar12,*(long *)puVar1,0);
LAB_01b3c030:
    iVar2 = (*(code *)*puVar5)(plVar12,uVar6,uVar7,puVar5[1]);
    if (iVar2 == 0) {
      lVar4 = *unaff_x27;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
      pvVar3 = *(void **)(unaff_x29 + -0x48);
      pvVar10 = *(void **)(unaff_x29 + -0x40);
      __src = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x20),
                                         *(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x40);
      memcpy(pvVar3,__src,*(size_t *)(unaff_x29 + -0x38));
      lVar4 = *unaff_x27;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
      uVar6 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x80),pvVar3);
      memcpy(*(void **)(unaff_x29 + -0x10),unaff_x26,unaff_x21);
      lVar4 = *unaff_x27;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
      pvVar3 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x10),
                                          *(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x40);
      memcpy(pvVar10,pvVar3,*(size_t *)(unaff_x29 + -0x38));
      lVar4 = *unaff_x27;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
      uVar7 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x80),pvVar10);
      lVar4 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_01b3c160;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_0103c348(plVar12,*(long *)puVar1,0);
LAB_01b3c160:
      iVar2 = (*(code *)*puVar5)(plVar12,uVar6,uVar7,puVar5[1]);
      if (iVar2 == 0) {
        lVar4 = *unaff_x27;
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0103c244();
        }
        sVar11 = *(size_t *)(unaff_x29 + -0x50);
        pvVar10 = *(void **)(unaff_x29 + -0x60);
        pvVar3 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x20),
                                            *(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x60);
        memcpy(pvVar10,pvVar3,sVar11);
        lVar4 = *unaff_x27;
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0103c244();
        }
        uVar6 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xa8),pvVar10);
        memcpy(*(void **)(unaff_x29 + -0x10),unaff_x26,unaff_x21);
        lVar4 = *unaff_x27;
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0103c244();
        }
        pvVar10 = *(void **)(unaff_x29 + -0x58);
        pvVar3 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x10),
                                            *(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x60);
        memcpy(pvVar10,pvVar3,sVar11);
        lVar4 = *unaff_x27;
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0103c244();
        }
        uVar7 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xa8),pvVar10);
        lVar4 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_01b3c298;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_0103c348(plVar12,*(long *)puVar1,0);
LAB_01b3c298:
        (*(code *)*puVar5)(plVar12,uVar6,uVar7,puVar5[1]);
      }
    }
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


