/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren<object,-object,-object>$$GetChild
ENTRY_POINT: 042877b0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<object,_object,_object>__GetChild
               (long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ushort in_w9;
  ulong uVar3;
  code *pcVar4;
  int *piVar5;
  long unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  long *plVar6;
  long lVar7;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
code_r0x042877b0:
  lVar7 = *(long *)(*(long *)(param_1 + 0xc0) + 0xb0);
  if ((in_w9 & 1) == 0) {
    param_2 = FUN_0367c9fc();
  }
  puVar2 = unaff_x23;
  if (-1 < *(int *)(*(long *)(*(long *)(param_2 + 0xc0) + 0x10) + 0x28)) {
    puVar2 = (undefined8 *)*unaff_x23;
  }
  pcVar4 = *(code **)(lVar7 + 0x10);
  *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
  (*pcVar4)(unaff_x24,lVar7);
  plVar6 = *(long **)(unaff_x29 + -0x20);
  if (plVar6 == (long *)0x0) {
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    goto LAB_04287948;
  }
  lVar7 = *plVar6;
  uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x27) {
        puVar2 = (undefined8 *)(lVar7 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_04287698;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_0367cd30(plVar6,*unaff_x27,0);
LAB_04287698:
  uVar3 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  if ((uVar3 & 1) == 0) {
    plVar6 = (long *)**(undefined8 **)(unaff_x29 + -0x28);
    if (plVar6 == (long *)0x0) goto LAB_042878d8;
    lVar7 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 == 0) goto LAB_042878b0;
    piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    goto LAB_04287898;
  }
  plVar6 = *(long **)(unaff_x29 + -0x20);
  if (plVar6 != (long *)0x0) {
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0367c9fc();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x38);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0367c9fc(lVar7);
    }
    lVar1 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar7) {
          lVar7 = lVar1 + (long)*piVar5 * 0x10 + 0x138;
          goto LAB_0428772c;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    lVar7 = FUN_0367cd30(plVar6,lVar7,0);
LAB_0428772c:
    lVar7 = *(long *)(lVar7 + 8);
    *(void **)(unaff_x29 + -0x18) = unaff_x22;
    (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar6,unaff_x29 + -0x18);
    memcpy(unaff_x23,unaff_x22,unaff_x21);
    param_2 = *(long *)(unaff_x19 + 0x20);
    in_w9 = *(ushort *)(param_2 + 0x135);
    lVar7 = param_2;
    if ((in_w9 & 1) == 0) {
      lVar7 = FUN_0367c9fc();
      param_2 = *(long *)(unaff_x19 + 0x20);
      in_w9 = *(ushort *)(param_2 + 0x135);
    }
    unaff_x24 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0xb0);
    param_1 = param_2;
    if ((in_w9 & 1) == 0) {
      param_1 = FUN_0367c9fc();
      param_2 = *(long *)(unaff_x19 + 0x20);
      in_w9 = *(ushort *)(param_2 + 0x135);
    }
    goto code_r0x042877b0;
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  goto LAB_04287948;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar5 = piVar5 + 4;
    if (uVar3 == 0) break;
LAB_04287898:
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar2 = (undefined8 *)(lVar7 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_042878cc;
    }
  }
LAB_042878b0:
  puVar2 = (undefined8 *)FUN_0367cd30(plVar6,*(long *)PTR_DAT_079f4598,0);
LAB_042878cc:
  (*(code *)*puVar2)(plVar6,puVar2[1]);
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


