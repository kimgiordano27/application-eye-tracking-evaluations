/*
FUNCTION_NAME: OVRPlugin$$GetSpaceMarkerPayload
ENTRY_POINT: 0748a710
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__GetSpaceMarkerPayload
               (undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000100;
  undefined4 uStack0000000000000108;
  undefined4 uStack000000000000010c;
  undefined4 uStack0000000000000110;
  undefined4 uStack0000000000000114;
  undefined4 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined4 in_stack_00000128;
  undefined4 uStack000000000000012c;
  undefined4 in_stack_00000130;
  undefined8 uStack0000000000000134;
  undefined8 uStack0000000000000140;
  undefined4 uStack0000000000000148;
  undefined4 uStack000000000000014c;
  undefined4 uStack0000000000000150;
  undefined4 uStack0000000000000154;
  undefined4 uStack0000000000000158;
  
  *(long *)(unaff_x20 + 0x318) = param_2._8_8_;
  *(long *)(unaff_x20 + 0x310) = param_2._0_8_;
  param_1[1] = param_3._8_8_;
  *param_1 = param_3._0_8_;
  uStack0000000000000140 = 0;
  uStack0000000000000148 = 0;
  uStack000000000000014c = 0;
  uStack0000000000000158 = 0;
  uStack0000000000000150 = 0;
  uStack0000000000000154 = 0;
  FUN_08a5b7d0(DAT_019150a0,uStack0000000000000014,uStack0000000000000010,uStack000000000000000c,
               *(undefined4 *)(in_x9 + 0xd1c),DAT_01914694,uStack0000000000000008,&stack0x00000140,0
              );
  uStack0000000000000134 = CONCAT44(uStack0000000000000158,uStack0000000000000154);
  in_stack_00000130 = uStack0000000000000150;
  in_stack_00000128 = uStack0000000000000148;
  uStack000000000000012c = uStack000000000000014c;
  in_stack_00000120 = uStack0000000000000140;
  if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 800) = 0x17;
    *(undefined8 *)(unaff_x20 + 0x338) = uStack0000000000000134;
    *(ulong *)(unaff_x20 + 0x330) = CONCAT44(uStack0000000000000150,uStack000000000000014c);
    *(ulong *)(unaff_x20 + 0x32c) = CONCAT44(uStack000000000000014c,uStack0000000000000148);
    *(undefined8 *)(unaff_x20 + 0x324) = uStack0000000000000140;
    in_stack_00000100 = 0;
    uStack0000000000000108 = 0;
    uStack000000000000010c = 0;
    in_stack_00000118 = 0;
    uStack0000000000000110 = 0;
    uStack0000000000000114 = 0;
    FUN_08a5b7d0(DAT_01914a24,uStack0000000000000004,uStack0000000000000000,&stack0x00000100,0);
    if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
      *(ulong *)(unaff_x20 + 0x358) = CONCAT44(in_stack_00000118,uStack0000000000000114);
      *(ulong *)(unaff_x20 + 0x350) = CONCAT44(uStack0000000000000110,uStack000000000000010c);
      *(ulong *)(unaff_x20 + 0x34c) = CONCAT44(uStack000000000000010c,uStack0000000000000108);
      *(undefined8 *)(unaff_x20 + 0x344) = in_stack_00000100;
      if (unaff_x19 != 0) {
        *(long *)(unaff_x19 + 0x10) = unaff_x20;
        thunk_FUN_03d1023c();
        *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
        thunk_FUN_03d1023c();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


