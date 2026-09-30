/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<bool>$$.ctor
ENTRY_POINT: 0600ecc8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<bool>___ctor(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  size_t sVar10;
  size_t unaff_x22;
  void *unaff_x23;
  void *unaff_x25;
  void *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  thunk_FUN_03cf4e64(*param_1);
  puVar1 = PTR_DAT_08e85e28;
  if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar7 = *unaff_x28;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08e85e28) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0600ed38;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_03cf1348();
LAB_0600ed38:
  iVar2 = (*(code *)*puVar3)();
  lVar7 = *(long *)(unaff_x29 + -0x10);
  if (iVar2 == 0) {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03cf1244();
    }
    pvVar5 = (void *)thunk_FUN_03cd7b0c(*(undefined8 *)(unaff_x29 + -0x18),
                                        *(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80) +
                                        0x20);
    memcpy(unaff_x23,pvVar5,*(size_t *)(unaff_x29 + -0x20));
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03cf1244();
    }
    thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10));
    memcpy(unaff_x25,unaff_x27,unaff_x22);
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    pvVar5 = *(void **)(unaff_x29 + -0x28);
    sVar10 = *(size_t *)(unaff_x29 + -0x20);
    pvVar6 = (void *)thunk_FUN_03cd7b0c();
    memcpy(pvVar5,pvVar6,sVar10);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03cf1244();
    }
    thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10),pvVar5);
    lVar4 = *unaff_x28;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0600ee6c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348();
LAB_0600ee6c:
    iVar2 = (*(code *)*puVar3)();
    if (iVar2 == 0) {
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03cf1244();
      }
      sVar10 = *(size_t *)(unaff_x29 + -0x30);
      pvVar6 = *(void **)(unaff_x29 + -0x40);
      pvVar5 = (void *)thunk_FUN_03cd7b0c(*(undefined8 *)(unaff_x29 + -0x18),
                                          *(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80) +
                                          0x40);
      memcpy(pvVar6,pvVar5,sVar10);
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03cf1244();
      }
      thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18),pvVar6);
      memcpy(unaff_x25,unaff_x27,unaff_x22);
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      pvVar6 = *(void **)(unaff_x29 + -0x38);
      pvVar5 = (void *)thunk_FUN_03cd7b0c();
      memcpy(pvVar6,pvVar5,sVar10);
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03cf1244();
      }
      thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18),pvVar6);
      lVar4 = *unaff_x28;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0600efa4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348();
LAB_0600efa4:
      (*(code *)*puVar3)();
    }
  }
  if (*(long *)(lVar7 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


