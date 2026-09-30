/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryVisible
ENTRY_POINT: 05d815c4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBoundaryVisible(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  int unaff_w20;
  long *plVar6;
  long *unaff_x23;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  long in_stack_00000028;
  
  do {
    FUN_06c41a9c(param_1,0);
    do {
      while( true ) {
        do {
          unaff_w20 = unaff_w20 + 1;
          if (unaff_w20 == 0x1a) {
            return;
          }
          uVar1 = FUN_05d80d54();
        } while ((uVar1 & 1) == 0);
        if (in_stack_00000028 == 0) goto LAB_05d81624;
        lVar2 = FUN_06be6b40(in_stack_00000028,0);
        if (*(char *)(unaff_x19 + 0x80) != '\0') break;
LAB_05d815d0:
        if (lVar2 == 0) goto LAB_05d81624;
        uVar1 = FUN_06be9adc(lVar2,0);
        if ((uVar1 & 1) != 0) {
          if (in_stack_00000028 == 0) goto LAB_05d81624;
          FUN_06c41a24(in_stack_00000028,0);
          FUN_06be9a98(lVar2,0,0);
        }
      }
      plVar6 = *(long **)(unaff_x19 + 0x38);
      if (plVar6 == (long *)0x0) goto LAB_05d81624;
      lVar4 = *plVar6;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x23) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 9) * 0x10 + 0x138);
            goto LAB_05d81550;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_032937ac(plVar6,*unaff_x23,9);
LAB_05d81550:
      uVar1 = (*(code *)*puVar3)(plVar6,unaff_w20,&stack0x00000008,puVar3[1]);
      if ((uVar1 & 1) == 0) goto LAB_05d815d0;
      if (in_stack_00000028 == 0) goto LAB_05d81624;
      FUN_06c418f4(uStack0000000000000008,uStack000000000000000c,uStack0000000000000010,
                   in_stack_00000028,0);
      if ((in_stack_00000028 == 0) ||
         (FUN_06c4198c(uStack0000000000000014,uStack0000000000000018,uStack000000000000001c,
                       in_stack_00000020,in_stack_00000028,0), lVar2 == 0)) goto LAB_05d81624;
      uVar1 = FUN_06be9adc(lVar2,0);
    } while ((uVar1 & 1) != 0);
    FUN_06be9a98(lVar2,1,0);
    param_1 = in_stack_00000028;
  } while (in_stack_00000028 != 0);
LAB_05d81624:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


