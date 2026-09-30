/*
FUNCTION_NAME: OVRPlugin$$GetTimeInSeconds
ENTRY_POINT: 073e3268
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTimeInSeconds(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *plVar7;
  long *unaff_x22;
  undefined8 uVar8;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000070;
  
  if (param_1 != 0) {
    if ((*(char *)(param_1 + 0x10) == '\0') || (*(long *)(param_1 + 0x18) == 0)) {
      FUN_073e3408();
    }
    else {
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x22) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
            goto LAB_073e32ec;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
                    /* try { // try from 073e32a8 to 074e32ab has its CatchHandler @ 073e3368 */
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348();
LAB_073e32ec:
                    /* try { // try from 073e32f4 to 074e334f has its CatchHandler @ 073e2f78 */
      (*(code *)*puVar3)();
      FUN_073e3494();
      *(undefined1 *)(unaff_x19 + 0x60) = 0;
    }
    FUN_073d58c8(&stack0x00000060);
    plVar7 = *(long **)(unaff_x19 + 0x70);
    uVar8 = in_stack_00000060;
    uVar1 = in_stack_00000068;
    uVar2 = in_stack_00000070;
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08eb23f0) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_073e3384;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08eb23f0,2);
LAB_073e3384:
      (*(code *)*puVar3)(&stack0x00000020,plVar7,&stack0x00000060,puVar3[1]);
      uVar8 = in_stack_00000020;
      uVar1 = in_stack_00000028;
      uVar2 = in_stack_00000030;
    }
    in_stack_00000030 = uVar2;
    in_stack_00000028 = uVar1;
    in_stack_00000020 = uVar8;
    in_stack_00000040 = uVar8;
    in_stack_00000048 = in_stack_00000028;
    in_stack_00000050 = in_stack_00000030;
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      FUN_073f8f9c(0x3f800000);
      *(undefined1 *)(unaff_x19 + 0x61) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


