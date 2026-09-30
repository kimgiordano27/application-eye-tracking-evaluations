/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig$$GetCamera
ENTRY_POINT: 0636cd3c
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4 Meta_XR_ImmersiveDebugger_CustomIntegrationConfig__GetCamera(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  long lVar2;
  long unaff_x23;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined4 in_stack_00000190;
  
  if (*(long *)(unaff_x20 + 0x28) != 0) {
                    /* try { // try from 0636cd4c to 0646cd6f has its CatchHandler @ 0636cdac */
    FUN_0438673c(*(long *)(unaff_x20 + 0x28),0,0,*(undefined8 *)(unaff_x23 + 0x7b8));
    if (*(long *)(unaff_x20 + 0x30) != 0) {
      FUN_0438673c(*(long *)(unaff_x20 + 0x30),0,0,*(undefined8 *)(unaff_x23 + 0x7b8));
      if (*(long *)(unaff_x20 + 0x38) != 0) {
        FUN_0438673c(*(long *)(unaff_x20 + 0x38),0,0,*(undefined8 *)(unaff_x23 + 0x7b8));
        if (*(long *)(unaff_x20 + 0x40) != 0) {
          FUN_0438673c(*(long *)(unaff_x20 + 0x40),0,0,*(undefined8 *)(unaff_x23 + 0x7b8));
          in_stack_00000128 = 0;
          in_stack_00000120 = 0;
          in_stack_00000138 = 0;
          in_stack_00000130 = 0;
          in_stack_00000148 = 0;
          in_stack_00000140 = 0;
          in_stack_00000158 = 0;
          in_stack_00000150 = 0;
          in_stack_00000168 = 0;
          in_stack_00000160 = 0;
          in_stack_00000178 = 0;
          in_stack_00000170 = 0;
          in_stack_00000188 = 0;
          in_stack_00000180 = 0;
          in_stack_00000190 = 0;
          if (*(int *)(*(long *)(unaff_x22 + 0x7d8) + 0xe0) == 0) {
            FUN_033b9870();
          }
          FUN_07a119fc();
          lVar2 = *(long *)(unaff_x20 + 0x48);
          memcpy(&stack0x00000060,&stack0x00000120,0x74);
          uVar1 = DAT_083ebd28;
          if (lVar2 != 0) {
            memcpy(&stack0x00000248,&stack0x00000060,0x74);
            FUN_0439238c(lVar2,&stack0x00000220,uVar1);
            uVar1 = DAT_083ebd00;
            lVar2 = *(long *)(unaff_x20 + 0x50);
            in_stack_00000050 = 0;
            in_stack_00000038 = 0;
            in_stack_00000030 = 0;
            in_stack_00000048 = 0;
            in_stack_00000040 = 0;
            in_stack_00000018 = 0;
            in_stack_00000010 = 0;
            in_stack_00000028 = 0;
            in_stack_00000020 = 0;
            in_stack_00000008 = 0;
            in_stack_00000000 = 0;
            if (lVar2 != 0) {
              memcpy(&stack0x00000220,&stack0x00000000,0x54);
              FUN_04391be0(lVar2,&stack0x00000220,uVar1);
              if (*(long *)(unaff_x20 + 0x68) != 0) {
                FUN_05cb6720(*(long *)(unaff_x20 + 0x68),unaff_w21);
                return unaff_w21;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


