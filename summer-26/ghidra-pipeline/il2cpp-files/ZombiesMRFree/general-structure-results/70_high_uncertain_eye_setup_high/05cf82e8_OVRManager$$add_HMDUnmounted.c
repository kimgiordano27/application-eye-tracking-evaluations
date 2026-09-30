/*
FUNCTION_NAME: OVRManager$$add_HMDUnmounted
ENTRY_POINT: 05cf82e8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_HMDUnmounted(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  FUN_05cf83c8(param_1,0);
  FUN_05cf845c(param_1);
  if ((*(char *)(param_1 + 0x80) == '\0') && (*(char *)(param_1 + 0xc0) == '\0')) {
    FUN_05cf84f8(param_1);
    FUN_05cf8778(param_1);
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_05cf4c7c(&stack0x00000020,*(long *)(param_1 + 0x20),0);
      in_stack_00000048 = in_stack_00000028;
      in_stack_00000040 = in_stack_00000020;
      uStack0000000000000054 = uStack0000000000000034;
      uStack0000000000000050 = uStack0000000000000030;
      lVar2 = *(long *)(param_1 + 0x88);
      if (lVar2 != 0) {
        fVar5 = *(float *)(param_1 + 0xb8);
        fVar4 = *(float *)(param_1 + 0xbc);
        fVar6 = *(float *)(param_1 + 0xb4);
        fVar3 = (float)(**(code **)(lVar2 + 0x18))
                                 (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        if (*(long *)(param_1 + 0x20) != 0) {
          FUN_05cf5a4c(fVar6 * fVar3,fVar5 * fVar3,fVar4 * fVar3,*(long *)(param_1 + 0x20),0);
          if (*(long *)(param_1 + 0x20) != 0) {
            uVar1 = FUN_05cf4c7c(*(long *)(param_1 + 0x20),0);
            in_stack_00000028 = in_stack_00000008;
            in_stack_00000020 = in_stack_00000000;
            uStack0000000000000030 = in_stack_00000010;
            FUN_05cf88cc(uVar1,param_1 + 0x98,&stack0x00000040,&stack0x00000020);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  return;
}


