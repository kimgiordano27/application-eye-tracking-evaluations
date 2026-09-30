/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManager.<>c$$.ctor
ENTRY_POINT: 01b38344
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


void Meta_XR_ImmersiveDebugger_Manager_TweakManager_<>c___ctor(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long in_x9;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  size_t sVar8;
  size_t unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  void *unaff_x25;
  long lVar9;
  void *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  if (in_x9 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x24) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_01b38394;
      }
      in_x9 = in_x9 + -1;
      piVar7 = piVar7 + 4;
    } while (in_x9 != 0);
  }
  puVar2 = (undefined8 *)FUN_0103c348();
LAB_01b38394:
  iVar1 = (*(code *)*puVar2)();
  lVar9 = *(long *)(unaff_x29 + -0x10);
  if (iVar1 == 0) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    pvVar4 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                        *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80) +
                                        0x20);
    memcpy(unaff_x23,pvVar4,*(size_t *)(unaff_x29 + -0x20));
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10));
    memcpy(unaff_x25,unaff_x27,unaff_x22);
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    pvVar4 = *(void **)(unaff_x29 + -0x28);
    sVar8 = *(size_t *)(unaff_x29 + -0x20);
    pvVar5 = (void *)thunk_FUN_01023220();
    memcpy(pvVar4,pvVar5,sVar8);
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10),pvVar4);
    lVar3 = *unaff_x28;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01b384c8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0103c348();
LAB_01b384c8:
    iVar1 = (*(code *)*puVar2)();
    if (iVar1 == 0) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244();
      }
      sVar8 = *(size_t *)(unaff_x29 + -0x30);
      pvVar5 = *(void **)(unaff_x29 + -0x40);
      pvVar4 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                          *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80) +
                                          0x40);
      memcpy(pvVar5,pvVar4,sVar8);
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244();
      }
      thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18),pvVar5);
      memcpy(unaff_x25,unaff_x27,unaff_x22);
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      pvVar5 = *(void **)(unaff_x29 + -0x38);
      pvVar4 = (void *)thunk_FUN_01023220();
      memcpy(pvVar5,pvVar4,sVar8);
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244();
      }
      thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18),pvVar5);
      lVar3 = *unaff_x28;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_01b38600;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_0103c348();
LAB_01b38600:
      (*(code *)*puVar2)();
    }
  }
  if (*(long *)(lVar9 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


