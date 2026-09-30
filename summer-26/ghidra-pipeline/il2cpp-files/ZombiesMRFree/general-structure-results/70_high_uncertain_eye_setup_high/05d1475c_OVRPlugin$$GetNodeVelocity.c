/*
FUNCTION_NAME: OVRPlugin$$GetNodeVelocity
ENTRY_POINT: 05d1475c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRPlugin__GetNodeVelocity(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long in_x9;
  int *in_x10;
  int *piVar5;
  long in_x11;
  undefined4 *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  undefined1 auVar6 [16];
  undefined8 unaff_d8;
  undefined8 in_register_00005108;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_02feb5b8();
      goto LAB_05d14790;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 8) * 0x10 + 0x138);
LAB_05d14790:
  (*(code *)*puVar2)(&stack0x00000008);
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  if (unaff_x22 != 0) {
    auVar6 = FUN_05d362ac();
    if (0.0 < auVar6._0_4_) {
      *unaff_x19 = 1;
      unaff_d8 = auVar6._0_8_;
      in_register_00005108 = auVar6._8_8_;
    }
    uVar3 = FUN_05d14964();
    auVar6._8_8_ = in_register_00005108;
    auVar6._0_8_ = unaff_d8;
    if ((uVar3 & 1) == 0) {
      return auVar6;
    }
    if (unaff_x21 != (long *)0x0) {
      lVar4 = *unaff_x21;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06fb4b20) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 9) * 0x10 + 0x138);
            goto LAB_05d14848;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_05d14848:
      (*(code *)*puVar2)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      if (unaff_x22 != 0) {
        auVar6 = FUN_05d36658();
        auVar1._8_8_ = in_register_00005108;
        auVar1._0_8_ = unaff_d8;
        if (auVar6._0_4_ <= (float)unaff_d8) {
          return auVar1;
        }
        *unaff_x19 = 2;
        return auVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


