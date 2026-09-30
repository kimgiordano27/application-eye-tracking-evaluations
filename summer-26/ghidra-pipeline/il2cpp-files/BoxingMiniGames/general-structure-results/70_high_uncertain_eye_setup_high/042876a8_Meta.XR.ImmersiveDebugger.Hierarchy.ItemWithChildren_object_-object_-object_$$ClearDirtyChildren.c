/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren<object,-object,-object>$$ClearDirtyChildren
ENTRY_POINT: 042876a8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<object,_object,_object>__ClearDirtyChildren
               (void)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  code *pcVar6;
  int *piVar7;
  long unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  undefined8 *unaff_x23;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
  do {
    plVar8 = *(long **)(unaff_x29 + -0x20);
    if (plVar8 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      goto LAB_04287948;
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc(lVar2);
    }
    lVar3 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar2) {
          lVar2 = lVar3 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_0428772c;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    lVar2 = FUN_0367cd30(plVar8,lVar2,0);
LAB_0428772c:
    lVar2 = *(long *)(lVar2 + 8);
    *(void **)(unaff_x29 + -0x18) = unaff_x22;
    (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 8),lVar2,plVar8,unaff_x29 + -0x18);
    memcpy(unaff_x23,unaff_x22,unaff_x21);
    lVar3 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar3 + 0x135);
    lVar2 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_0367c9fc();
      lVar3 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar3 + 0x135);
    }
    uVar9 = **(undefined8 **)(*(long *)(lVar2 + 0xc0) + 0xb0);
    lVar2 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_0367c9fc();
      lVar3 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar3 + 0x135);
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0xb0);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_0367c9fc();
    }
    puVar4 = unaff_x23;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x23;
    }
    pcVar6 = *(code **)(lVar2 + 0x10);
    *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
    (*pcVar6)(uVar9,lVar2);
    plVar8 = *(long **)(unaff_x29 + -0x20);
    if (plVar8 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      goto LAB_04287948;
    }
    lVar2 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x27) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04287698;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_0367cd30(plVar8,*unaff_x27,0);
LAB_04287698:
    uVar5 = (*(code *)*puVar4)(plVar8,puVar4[1]);
  } while ((uVar5 & 1) != 0);
  plVar8 = (long *)**(undefined8 **)(unaff_x29 + -0x28);
  if (plVar8 != (long *)0x0) {
    lVar2 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_079f4598) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_042878cc;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_0367cd30(plVar8,*(long *)PTR_DAT_079f4598,0);
LAB_042878cc:
    (*(code *)*puVar4)(plVar8,puVar4[1]);
  }
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


