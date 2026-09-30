/*
FUNCTION_NAME: OVRManager$$set_suggestedGpuPerfLevel
ENTRY_POINT: 05cfbe48
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_suggestedGpuPerfLevel(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  
  uVar2 = uStack0000000000000044;
  uStack0000000000000004 = uStack0000000000000044._4_4_;
  uStack0000000000000044 = uVar2;
  fVar3 = (float)FUN_05cfb220();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    fVar8 = param_3;
    fVar6 = param_2;
    fVar4 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x28),0);
    fVar9 = fVar8;
    fVar7 = fVar6;
    fVar5 = (float)FUN_05cfbd68();
    puVar1 = PTR_DAT_06f98e20;
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_06904354(fVar3 + (fVar4 - fVar5),param_2 + (fVar6 - fVar7),param_3 + (fVar8 - fVar9),
                   *(long *)(unaff_x19 + 0x28),0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_06902bf8(&stack0x00000010,0);
      uStack0000000000000044 = uStack0000000000000024;
      uStack0000000000000040 = uStack0000000000000020;
      in_stack_00000038 = uStack0000000000000018;
      in_stack_00000030 = in_stack_00000010;
      *(ulong *)(unaff_x19 + 0x58) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000010;
      *(undefined8 *)(unaff_x19 + 100) = uStack0000000000000024;
      *(ulong *)(unaff_x19 + 0x5c) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_05cf59f0(uStack000000000000009c,*(long *)(unaff_x19 + 0x20),0);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          FUN_05cf598c(uStack0000000000000098,uStack000000000000000c,uStack0000000000000008,
                       uStack0000000000000004,*(long *)(unaff_x19 + 0x20),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


