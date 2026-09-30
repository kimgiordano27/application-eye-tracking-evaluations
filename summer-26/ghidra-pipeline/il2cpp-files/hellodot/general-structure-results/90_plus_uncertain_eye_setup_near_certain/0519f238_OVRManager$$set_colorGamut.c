/*
FUNCTION_NAME: OVRManager$$set_colorGamut
ENTRY_POINT: 0519f238
PROGRAM: hellodot-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_colorGamut(undefined1 param_1 [16],undefined8 param_2)

{
  long lVar1;
  long unaff_x19;
  long unaff_x22;
  undefined8 uStack0000000000000000;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 uStack0000000000000070;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  undefined8 uStack0000000000000090;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  
  *(long *)(unaff_x22 + 0x14) = param_1._8_8_;
  *(long *)(unaff_x22 + 0xc) = param_1._0_8_;
  uStack0000000000000014 = *(undefined8 *)(unaff_x22 + 0x14);
  uStack000000000000007c = (undefined4)*(undefined8 *)(unaff_x22 + 0xc);
  uStack0000000000000080 = (undefined4)((ulong)*(undefined8 *)(unaff_x22 + 0xc) >> 0x20);
  uStack0000000000000000 = param_2;
  uStack000000000000000c = uStack000000000000007c;
  uStack0000000000000010 = uStack0000000000000080;
  uStack0000000000000070 = param_2;
  uStack0000000000000084 = uStack0000000000000014;
  uStack0000000000000090 = param_2;
  FUN_051974fc(&stack0x00000100);
  lVar1 = *(long *)(unaff_x19 + 0x170);
  if (lVar1 != 0) {
    in_stack_00000158 = in_stack_00000108;
    in_stack_00000150 = in_stack_00000100;
    in_stack_00000168 = in_stack_00000118;
    in_stack_00000160 = in_stack_00000110;
    in_stack_00000170 = in_stack_00000120;
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),&stack0x00000150,*(undefined8 *)(lVar1 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


