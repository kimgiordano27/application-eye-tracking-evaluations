/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.CircularPool<object>$$Get
ENTRY_POINT: 081a7dd0
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_CircularPool<object>__Get(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int in_w8;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 *unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  long *plVar12;
  undefined8 uVar13;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  if (in_w8 == 0) {
    FUN_04947ee4(PTR_DAT_0ac098c0);
    *(undefined1 *)(unaff_x27 + 0x1c8) = 1;
    if (unaff_x24 != (long *)0x0)
    goto Meta_XR_MRUtilityKit_SceneDecorator_CircularPool<object>__Release;
LAB_081a7ef4:
    if (DAT_0b31f1c9 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac098c0);
      DAT_0b31f1c9 = '\x01';
    }
    plVar12 = *(long **)(unaff_x29 + -0x30);
    if (plVar12 != (long *)0x0) {
      lVar8 = *plVar12;
      uVar2 = *(undefined2 *)(unaff_x29 + -0x28);
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac098c0) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_081a7f78;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac098c0,2);
LAB_081a7f78:
      (*(code *)*puVar4)(plVar12,uVar2,puVar4[1]);
    }
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    plVar12 = (long *)thunk_FUN_049a5d94();
    lVar8 = *plVar12;
    if (lVar8 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      goto LAB_081a83fc;
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar6 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_04980b34();
      lVar5 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar5 + 0x135);
    }
    uVar13 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x30);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_04980b34();
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x30);
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x21;
    (**(code **)(lVar6 + 0x10))(uVar13,lVar6,lVar8,unaff_x29 + -0x20);
    memcpy(unaff_x23,unaff_x21,unaff_x22);
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    FUN_04351880();
    memcpy(unaff_x21,unaff_x23,unaff_x22);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar8 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_04980b34(lVar6);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar8 = *(long *)(unaff_x19 + 0x20);
    }
    uVar13 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x48);
    lVar6 = lVar8;
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_04980b34(lVar8);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar6 = *(long *)(unaff_x19 + 0x20);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x48);
    if ((uVar1 & 1) == 0) {
      FUN_04980b34(lVar6);
    }
    uVar7 = thunk_FUN_049a5d94();
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_04980b34(lVar6);
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x38) + 0x28)) {
      unaff_x21 = (undefined8 *)*unaff_x21;
    }
    pcVar9 = *(code **)(lVar8 + 0x10);
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x21;
    (*pcVar9)(uVar13,lVar8,uVar7,unaff_x29 + -0x20,unaff_x21);
  }
  else {
    if (unaff_x24 == (long *)0x0) goto LAB_081a7ef4;
Meta_XR_MRUtilityKit_SceneDecorator_CircularPool<object>__Release:
    lVar8 = *unaff_x24;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac098c0) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_081a7ee0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_04980e68();
LAB_081a7ee0:
    iVar3 = (*(code *)*puVar4)();
    if (iVar3 != 0) goto LAB_081a7ef4;
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    FUN_04351880();
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    FUN_04360b38();
    lVar8 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar8 + 0x135);
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_04980b34();
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    }
    pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x10);
    if ((uVar1 & 1) == 0) {
      FUN_04980b34();
    }
    uVar13 = thunk_FUN_049a5d94();
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    (*pcVar9)(uVar13,unaff_x29 + -0x30);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_081a83fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


