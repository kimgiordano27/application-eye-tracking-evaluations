/*
FUNCTION_NAME: OVRManager$$Update
ENTRY_POINT: 01a05858
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__Update(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  undefined8 *unaff_x19;
  long unaff_x21;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)FUN_00d59724();
LAB_01a0587c:
      (*(code *)*puVar1)(&stack0x00000020);
      in_stack_00000048 = uStack0000000000000028;
      in_stack_00000040 = in_stack_00000020;
      uStack0000000000000054 = uStack0000000000000034;
      in_stack_00000050 = uStack0000000000000030;
      if (unaff_x21 != 0) {
        FUN_01a0bdbc(&stack0x00000020);
        *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
        *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
        unaff_x19[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *unaff_x19 = in_stack_00000020;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 3) * 0x10 + 0x138);
      goto LAB_01a0587c;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


