/*
FUNCTION_NAME: OVRPlugin$$GetLayerRecommendedResolution
ENTRY_POINT: 06ad0ec0
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRPlugin__GetLayerRecommendedResolution(void)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x23;
  undefined1 auVar7 [16];
  undefined8 unaff_d8;
  undefined8 in_register_00005108;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  puVar2 = (undefined8 *)FUN_0338f71c();
  uVar3 = (*(code *)*puVar2)(&stack0x00000008);
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  if (unaff_x23 != 0) {
    auVar7 = FUN_06aeafa0(uVar3,&stack0x00000020,unaff_w20 & 1,*(undefined8 *)(unaff_x23 + 0x40));
    if (0.0 < auVar7._0_4_) {
      *unaff_x19 = 1;
      unaff_d8 = auVar7._0_8_;
      in_register_00005108 = auVar7._8_8_;
    }
    uVar4 = FUN_06ad42b4();
    auVar7._8_8_ = in_register_00005108;
    auVar7._0_8_ = unaff_d8;
    if ((uVar4 & 1) == 0) {
      return auVar7;
    }
    if (unaff_x21 != (long *)0x0) {
      lVar5 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_083cca38) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 9) * 0x10 + 0x138);
            goto LAB_06ad0f88;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0338f71c();
LAB_06ad0f88:
      uVar3 = (*(code *)*puVar2)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      if (unaff_x23 != 0) {
        auVar7 = FUN_06aeafa0(uVar3,&stack0x00000020,unaff_w20 & 1,*(undefined8 *)(unaff_x23 + 0x48)
                             );
        auVar1._8_8_ = in_register_00005108;
        auVar1._0_8_ = unaff_d8;
        if (auVar7._0_4_ <= (float)unaff_d8) {
          return auVar1;
        }
        *unaff_x19 = 2;
        return auVar7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


