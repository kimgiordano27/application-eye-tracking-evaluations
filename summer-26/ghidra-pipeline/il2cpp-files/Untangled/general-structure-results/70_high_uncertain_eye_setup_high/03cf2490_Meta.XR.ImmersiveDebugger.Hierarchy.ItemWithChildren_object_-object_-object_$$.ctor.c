/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren<object,-object,-object>$$.ctor
ENTRY_POINT: 03cf2490
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03cf257c) */

void Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<object,_object,_object>___ctor(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  void *unaff_x22;
  long *unaff_x24;
  uint unaff_w25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long lVar5;
  uint unaff_w29;
  
code_r0x03cf2490:
  if (*(uint *)(unaff_x28 + 0x18) <= unaff_w29) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c8();
  }
  lVar5 = unaff_x28 + (int)unaff_w29 * unaff_x27;
  memcpy((void *)(lVar5 + 0x20),&stack0x00000010,0x220);
  thunk_FUN_02f411dc(lVar5 + 0x38,0);
  unaff_w29 = unaff_w25;
  do {
    unaff_w25 = unaff_w29 + 1;
    lVar5 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_03cf23bc;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c();
LAB_03cf23bc:
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar5 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 == 0) goto LAB_03cf2520;
      piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      goto LAB_03cf2508;
    }
    lVar5 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02eea768();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02eea768(lVar5);
    }
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar5) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_03cf2440;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c();
LAB_03cf2440:
    (*(code *)*puVar1)(&stack0x00000230);
    memcpy(&stack0x00000450,&stack0x00000230,0x220);
    if (unaff_w25 != 0) break;
    memcpy(unaff_x22,&stack0x00000450,0x220);
    thunk_FUN_02f411dc();
    unaff_w29 = unaff_w25;
  } while( true );
  unaff_x28 = *(long *)(unaff_x21 + 0x228);
  memcpy(&stack0x00000230,&stack0x00000450,0x220);
  if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  memcpy(&stack0x00000010,&stack0x00000230,0x220);
  goto code_r0x03cf2490;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_03cf2508:
    if (*(long *)(piVar4 + -2) == *unaff_x24) {
      puVar1 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_03cf253c;
    }
  }
LAB_03cf2520:
  puVar1 = (undefined8 *)FUN_02eea86c();
LAB_03cf253c:
  (*(code *)*puVar1)();
  return;
}


