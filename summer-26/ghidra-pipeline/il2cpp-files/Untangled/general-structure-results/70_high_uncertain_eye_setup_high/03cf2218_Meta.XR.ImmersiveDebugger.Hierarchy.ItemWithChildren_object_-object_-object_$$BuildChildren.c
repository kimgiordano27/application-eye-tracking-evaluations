/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren<object,-object,-object>$$BuildChildren
ENTRY_POINT: 03cf2218
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03cf257c) */

void Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<object,_object,_object>__BuildChildren
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  int *unaff_x21;
  long unaff_x22;
  
  FUN_02f07e70(*(undefined8 *)(param_1 + 0x48));
  *(undefined1 *)(unaff_x22 + 0x75b) = 1;
  memset(&stack0x00000450,0,0x220);
  memset(unaff_x21,0,0x230);
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02eea768();
  }
  iVar3 = FUN_03a16214();
  *unaff_x21 = iVar3;
  if (iVar3 < 2) {
    uVar7 = 0;
    unaff_x21[0x8a] = 0;
    unaff_x21[0x8b] = 0;
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02eea768();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02eea768();
    }
    uVar7 = FUN_02f07f14(lVar4,iVar3 + -1);
    *(undefined8 *)(unaff_x21 + 0x8a) = uVar7;
  }
  thunk_FUN_02f411dc(unaff_x21 + 0x8a,uVar7);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02eea768();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02eea768(lVar4);
  }
  lVar8 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar4) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_03cf233c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
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
  iVar3 = 0;
  do {
    lVar4 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03cf23bc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar2,0);
LAB_03cf23bc:
    uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar9 == 0) goto LAB_03cf2520;
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02eea768();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02eea768(lVar4);
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03cf2440;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar6,lVar4,0);
LAB_03cf2440:
    (*(code *)*puVar5)(&stack0x00000230,plVar6,puVar5[1]);
    memcpy(&stack0x00000450,&stack0x00000230,0x220);
    if (iVar3 == 0) {
      memcpy(unaff_x21 + 2,&stack0x00000450,0x220);
      thunk_FUN_02f411dc(unaff_x21 + 8,0);
    }
    else {
      lVar4 = *(long *)(unaff_x21 + 0x8a);
      memcpy(&stack0x00000230,&stack0x00000450,0x220);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      memcpy(&stack0x00000010,&stack0x00000230,0x220);
      if (*(uint *)(lVar4 + 0x18) <= iVar3 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar4 = lVar4 + (long)(int)(iVar3 - 1U) * 0x220;
      memcpy((void *)(lVar4 + 0x20),&stack0x00000010,0x220);
      thunk_FUN_02f411dc(lVar4 + 0x38,0);
    }
    iVar3 = iVar3 + 1;
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03cf253c;
    }
  }
LAB_03cf2520:
  puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar1,0);
LAB_03cf253c:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
}


