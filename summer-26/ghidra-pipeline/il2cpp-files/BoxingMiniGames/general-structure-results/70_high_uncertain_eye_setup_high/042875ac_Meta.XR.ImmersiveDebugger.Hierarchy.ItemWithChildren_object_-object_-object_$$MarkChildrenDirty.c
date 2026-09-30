/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren<object,-object,-object>$$MarkChildrenDirty
ENTRY_POINT: 042875ac
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<object,_object,_object>__MarkChildrenDirty
               (long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  int *piVar9;
  long unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 uVar10;
  long unaff_x26;
  long unaff_x29;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0367c9fc();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0367c9fc(lVar5);
  }
  lVar6 = *unaff_x24;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_04287624;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_0367cd30();
LAB_04287624:
  plVar4 = (long *)(*(code *)*puVar3)();
  *(long **)(unaff_x29 + -0x20) = plVar4;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x20;
  puVar2 = PTR_DAT_079f49a8;
  while (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04287698;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30(plVar4,*(long *)puVar2,0);
LAB_04287698:
    uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      plVar4 = (long *)**(undefined8 **)(unaff_x29 + -0x28);
      if (plVar4 == (long *)0x0) goto LAB_042878d8;
      lVar5 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_042878b0;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      goto LAB_04287898;
    }
    plVar4 = *(long **)(unaff_x29 + -0x20);
    if (plVar4 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      goto LAB_04287948;
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0367c9fc();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0367c9fc(lVar5);
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          lVar5 = lVar6 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_0428772c;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    lVar5 = FUN_0367cd30(plVar4,lVar5,0);
LAB_0428772c:
    lVar5 = *(long *)(lVar5 + 8);
    *(void **)(unaff_x29 + -0x18) = unaff_x22;
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar4,unaff_x29 + -0x18);
    memcpy(unaff_x23,unaff_x22,unaff_x21);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar5 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_0367c9fc();
      lVar6 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar6 + 0x135);
    }
    uVar10 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0xb0);
    lVar5 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_0367c9fc();
      lVar6 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar6 + 0x135);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0xb0);
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    puVar3 = unaff_x23;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x23;
    }
    pcVar8 = *(code **)(lVar5 + 0x10);
    *(undefined8 **)(unaff_x29 + -0x18) = puVar3;
    (*pcVar8)(uVar10,lVar5);
    plVar4 = *(long **)(unaff_x29 + -0x20);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  goto LAB_04287948;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar9 = piVar9 + 4;
    if (uVar7 == 0) break;
LAB_04287898:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_042878cc;
    }
  }
LAB_042878b0:
  puVar3 = (undefined8 *)FUN_0367cd30(plVar4,*(long *)PTR_DAT_079f4598,0);
LAB_042878cc:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_042878d8:
  if (*(long *)(unaff_x29 + -0x30) == 0) {
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
  else if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c00();
  }
LAB_04287948:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


