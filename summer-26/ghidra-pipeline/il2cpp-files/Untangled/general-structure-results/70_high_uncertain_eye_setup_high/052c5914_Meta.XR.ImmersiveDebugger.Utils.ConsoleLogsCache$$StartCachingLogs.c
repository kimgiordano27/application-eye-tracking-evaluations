/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ConsoleLogsCache$$StartCachingLogs
ENTRY_POINT: 052c5914
PROGRAM: Untangled-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x052c5b48) */
/* WARNING: Removing unreachable block (ram,0x052c5954) */
/* WARNING: Removing unreachable block (ram,0x052c5b70) */
/* WARNING: Removing unreachable block (ram,0x052c5b40) */

void Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache__StartCachingLogs
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  uint unaff_w27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  do {
                    /* catch() { ... } // from try @ 052c5900 with catch @ 052c5914 */
    FUN_066d4b64(param_5,param_6);
                    /* try { // try from 052c5924 to 053c592b has its CatchHandler @ 052c5940 */
                    /* try { // try from 052c592c to 053c5937 has its CatchHandler @ 052c5818 */
    (**(code **)(*unaff_x20 + 0x298))(param_4);
    while (uVar1 = FUN_04df6d30(&stack0x00000020,*unaff_x29), lVar3 = in_stack_00000030,
          (uVar1 & 1) == 0) {
                    /* try { // try from 052c5938 to 053c593f has its CatchHandler @ 052c5940 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 052c5924 with catch @ 052c5940
                       catch(type#2 @ 00000000) { ... } // from try @ 052c5938 with catch @ 052c5940
                        */
      FUN_04df6d2c(&stack0x00000020,*unaff_x26);
      unaff_w27 = unaff_w27 + 1;
      if ((int)*(uint *)(unaff_x25 + 0x18) <= (int)unaff_w27) {
        if (unaff_x20 == (long *)0x0) goto LAB_052c5a8c;
        lVar3 = *unaff_x20;
        uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar1 == 0) goto LAB_052c5a64;
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_052c5a4c;
      }
      if (*(uint *)(unaff_x25 + 0x18) <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar3 = *(long *)(unaff_x25 + (long)(int)unaff_w27 * 8 + 0x20);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(long *)(lVar3 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      (**(code **)(*unaff_x20 + 600))();
      if (*(long *)(lVar3 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_03fd16fc(&stack0x00000008,*(long *)(lVar3 + 0x20),*unaff_x28);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
    }
    if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(long *)(in_stack_00000030 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066d3ed0(*(long *)(in_stack_00000030 + 0x10),0);
    (**(code **)(*unaff_x20 + 0x298))();
    if (*(long *)(lVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066d3ed0(*(long *)(lVar3 + 0x10),0);
    (**(code **)(*unaff_x20 + 0x298))(param_2);
    if (*(long *)(lVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066d3ed0(*(long *)(lVar3 + 0x10),0);
    (**(code **)(*unaff_x20 + 0x298))(param_3);
    if (*(long *)(lVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066d4b64(*(long *)(lVar3 + 0x10),0);
    (**(code **)(*unaff_x20 + 0x298))();
    if (*(long *)(lVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066d4b64(*(long *)(lVar3 + 0x10),0);
    (**(code **)(*unaff_x20 + 0x298))(param_2);
    if (*(long *)(lVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066d4b64(*(long *)(lVar3 + 0x10),0);
    (**(code **)(*unaff_x20 + 0x298))(param_3);
    param_5 = *(long *)(lVar3 + 0x10);
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    param_6 = 0;
  } while( true );
  while( true ) {
    uVar1 = uVar1 - 1;
    piVar4 = piVar4 + 4;
    if (uVar1 == 0) break;
LAB_052c5a4c:
    if (*(long *)(piVar4 + -2) == *unaff_x24) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_052c5a80;
    }
  }
LAB_052c5a64:
  puVar2 = (undefined8 *)FUN_02eea86c();
LAB_052c5a80:
  (*(code *)*puVar2)();
LAB_052c5a8c:
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_052c5ae4;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c();
LAB_052c5ae4:
    (*(code *)*puVar2)();
  }
  return;
}


