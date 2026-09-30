/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$OnDisable
ENTRY_POINT: 04da7bdc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04da7cf0) */

void Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster__OnDisable(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x26;
  undefined8 uVar2;
  long in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  do {
    thunk_FUN_02f6670c();
    do {
      lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x40);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02f41e9c();
      }
      in_stack_00000028._4_1_ = '\0';
      in_stack_00000030 = **(undefined8 **)(lVar1 + 0xb8);
      FUN_05136fe0(in_stack_00000030,(long)&stack0x00000028 + 4,0);
      lVar1 = *(long *)(unaff_x20 + 0x10);
      thunk_FUN_02f168c4();
      if (lVar1 != 0) {
        lVar1 = *(long *)(unaff_x20 + 0x10);
        thunk_FUN_02f168c4();
        uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
        thunk_FUN_02f168c4();
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        thunk_FUN_02f168c4();
        *(undefined8 *)(lVar1 + 0x18) = uVar2;
      }
      lVar1 = *(long *)(unaff_x20 + 0x18);
      thunk_FUN_02f168c4();
      uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
      thunk_FUN_02f168c4();
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      thunk_FUN_02f168c4();
      *(undefined8 *)(lVar1 + 0x10) = uVar2;
      if (in_stack_00000028._4_1_ != '\0') {
        thunk_FUN_02f16354(*unaff_x26,0);
      }
      while( true ) {
        do {
          unaff_x23 = unaff_x23 + 1;
          if ((long)(int)*(uint *)(unaff_x22 + 0x18) <= (long)unaff_x23) {
            if (*in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            FUN_05124434(*in_stack_00000020,0);
            if (in_stack_00000018 == 0) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02f089c0();
          }
          if (*(uint *)(unaff_x22 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          unaff_x20 = *(long *)(unaff_x24 + unaff_x23 * 8);
          thunk_FUN_02f168c4();
        } while (unaff_x20 == 0);
        if (*(char *)(in_stack_00000038 + 0x18) == '\0') break;
        thunk_FUN_02f168c4();
        *(undefined8 *)(unaff_x20 + 0x20) = 0;
      }
      lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x40);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02f41e9c();
      }
    } while (*(int *)(lVar1 + 0xe4) != 0);
  } while( true );
}


