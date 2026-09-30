/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateHandler$$Invoke
ENTRY_POINT: 051dec6c
PROGRAM: hellodot-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateHandler__Invoke(void)

{
  undefined8 *puVar1;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar2;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  
  do {
    thunk_FUN_02cd038c();
    do {
      FUN_05f002ac(&stack0x00000060,0);
      in_stack_00000048 = uStack0000000000000068;
      in_stack_00000040 = in_stack_00000060;
      uStack0000000000000054 = uStack0000000000000074;
      uStack0000000000000050 = uStack0000000000000070;
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x20) {
LAB_051ded68:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      puVar1 = (undefined8 *)(unaff_x23 + unaff_x22);
      *(undefined8 *)((long)puVar1 + 0x14) = uStack0000000000000074;
      *(ulong *)((long)puVar1 + 0xc) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
      puVar1[1] = CONCAT44(uStack000000000000006c,uStack0000000000000068);
      *puVar1 = in_stack_00000060;
      lVar2 = *(long *)(unaff_x19 + 0x18);
      FUN_05f002ac(&stack0x00000020,0);
      in_stack_00000060 = in_stack_00000020;
      uStack0000000000000074 = uStack0000000000000034;
      uStack0000000000000068 = uStack0000000000000028;
      uStack000000000000006c = uStack000000000000002c;
      uStack0000000000000070 = uStack0000000000000030;
      if (lVar2 == 0) {
LAB_051ded10:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (*(uint *)(lVar2 + 0x18) <= unaff_x20) goto LAB_051ded68;
      puVar1 = (undefined8 *)(lVar2 + unaff_x22);
      unaff_x22 = unaff_x22 + 0x1c;
      *(undefined8 *)((long)puVar1 + 0x14) = uStack0000000000000034;
      *(ulong *)((long)puVar1 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      puVar1[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *puVar1 = in_stack_00000020;
      unaff_x23 = *(long *)(unaff_x19 + 0x10);
      unaff_x20 = unaff_x20 + 1;
      if (unaff_x23 == 0) goto LAB_051ded10;
      if ((long)*(int *)(unaff_x23 + 0x18) <= (long)unaff_x20) {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_05f002ac(&stack0x00000020,0);
        *(undefined4 *)(unaff_x19 + 0x3c) = 0x3f800000;
        *(undefined8 *)(unaff_x19 + 0x40) = 0;
        *(ulong *)(unaff_x19 + 0x28) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000020;
        *(undefined8 *)(unaff_x19 + 0x34) = uStack0000000000000034;
        *(ulong *)(unaff_x19 + 0x2c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
        return;
      }
    } while (*(int *)(*unaff_x21 + 0xe0) != 0);
  } while( true );
}


