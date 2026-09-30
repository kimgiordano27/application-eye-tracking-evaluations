/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren<object,-object,-object>$$ComputeNumberOfChildren
ENTRY_POINT: 04287584
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


void Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<object,_object,_object>__ComputeNumberOfChildren
               (long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  int *piVar9;
  long unaff_x19;
  size_t unaff_x21;
  void *__src;
  undefined8 *puVar10;
  long *unaff_x24;
  undefined8 uVar11;
  long unaff_x26;
  long unaff_x29;
  
  uVar7 = unaff_x21 + 0xf & 0x1fffffff0;
  __src = (void *)(param_1 - uVar7);
  puVar10 = (undefined8 *)((long)__src - uVar7);
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  if (unaff_x24 == (long *)0x0) {
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc(lVar3);
    }
    lVar6 = *unaff_x24;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04287624;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0367cd30();
LAB_04287624:
    plVar5 = (long *)(*(code *)*puVar4)();
    *(long **)(unaff_x29 + -0x20) = plVar5;
    *(undefined8 *)(unaff_x29 + -0x30) = 0;
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x20;
    puVar2 = PTR_DAT_079f49a8;
    while (plVar5 != (long *)0x0) {
      lVar3 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04287698;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)puVar2,0);
LAB_04287698:
      uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar7 & 1) == 0) {
        plVar5 = (long *)**(undefined8 **)(unaff_x29 + -0x28);
        if (plVar5 == (long *)0x0) goto LAB_042878d8;
        lVar3 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar7 == 0) goto LAB_042878b0;
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_04287898;
      }
      plVar5 = *(long **)(unaff_x29 + -0x20);
      if (plVar5 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        goto LAB_04287948;
      }
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0367c9fc();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0367c9fc(lVar3);
      }
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar3) {
            lVar3 = lVar6 + (long)*piVar9 * 0x10 + 0x138;
            goto LAB_0428772c;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      lVar3 = FUN_0367cd30(plVar5,lVar3,0);
LAB_0428772c:
      lVar3 = *(long *)(lVar3 + 8);
      *(void **)(unaff_x29 + -0x18) = __src;
      (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar5,unaff_x29 + -0x18,__src);
      memcpy(puVar10,__src,unaff_x21);
      lVar6 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar6 + 0x135);
      lVar3 = lVar6;
      if ((uVar1 & 1) == 0) {
        lVar3 = FUN_0367c9fc();
        lVar6 = *(long *)(unaff_x19 + 0x20);
        uVar1 = *(ushort *)(lVar6 + 0x135);
      }
      uVar11 = **(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0xb0);
      lVar3 = lVar6;
      if ((uVar1 & 1) == 0) {
        lVar3 = FUN_0367c9fc();
        lVar6 = *(long *)(unaff_x19 + 0x20);
        uVar1 = *(ushort *)(lVar6 + 0x135);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xb0);
      if ((uVar1 & 1) == 0) {
        lVar6 = FUN_0367c9fc();
      }
      puVar4 = puVar10;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x28)) {
        puVar4 = (undefined8 *)*puVar10;
      }
      pcVar8 = *(code **)(lVar3 + 0x10);
      *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
      (*pcVar8)(uVar11,lVar3);
      plVar5 = *(long **)(unaff_x29 + -0x20);
    }
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  goto LAB_04287948;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar9 = piVar9 + 4;
    if (uVar7 == 0) break;
LAB_04287898:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar10 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_042878cc;
    }
  }
LAB_042878b0:
  puVar10 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)PTR_DAT_079f4598,0);
LAB_042878cc:
  (*(code *)*puVar10)(plVar5,puVar10[1]);
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


