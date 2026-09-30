/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren<object,-object,-object>$$BuildChildrenInternal
ENTRY_POINT: 03cf2298
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03cf257c) */

void Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<object,_object,_object>__BuildChildrenInternal
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int iVar10;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 0x28);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768();
  }
  uVar4 = FUN_02f07f14(lVar3,unaff_w22 + -1);
  *(undefined8 *)(unaff_x21 + 0x228) = uVar4;
  thunk_FUN_02f411dc(unaff_x21 + 0x228);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x18);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768(lVar3);
  }
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar3) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_03cf233c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_02eea86c();
LAB_03cf233c:
  puVar1 = PTR_DAT_06d01f60;
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar2 = PTR_DAT_06d02048;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  iVar10 = 0;
  do {
    lVar3 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03cf23bc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar2,0);
LAB_03cf23bc:
    uVar8 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar3 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar8 == 0) goto LAB_03cf2520;
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02eea768();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02eea768(lVar3);
    }
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar3) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03cf2440;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar6,lVar3,0);
LAB_03cf2440:
    (*(code *)*puVar5)(&stack0x00000230,plVar6,puVar5[1]);
    memcpy(&stack0x00000450,&stack0x00000230,0x220);
    if (iVar10 == 0) {
      memcpy((void *)(unaff_x21 + 8),&stack0x00000450,0x220);
      thunk_FUN_02f411dc(unaff_x21 + 0x20,0);
    }
    else {
      lVar3 = *(long *)(unaff_x21 + 0x228);
      memcpy(&stack0x00000230,&stack0x00000450,0x220);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      memcpy(&stack0x00000010,&stack0x00000230,0x220);
      if (*(uint *)(lVar3 + 0x18) <= iVar10 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar3 = lVar3 + (long)(int)(iVar10 - 1U) * 0x220;
      memcpy((void *)(lVar3 + 0x20),&stack0x00000010,0x220);
      thunk_FUN_02f411dc(lVar3 + 0x38,0);
    }
    iVar10 = iVar10 + 1;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03cf253c;
    }
  }
LAB_03cf2520:
  puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar1,0);
LAB_03cf253c:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
}


