/*
FUNCTION_NAME: OVRManager$$remove_TrackingLost
ENTRY_POINT: 05cf9184
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


void OVRManager__remove_TrackingLost(float param_1,float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  
  if (param_4 != 0) {
    fVar4 = param_3;
    fVar2 = (float)FUN_069042b4(param_4,0);
    fVar5 = fVar4;
    fVar3 = (float)FUN_05cf9270();
    puVar1 = PTR_DAT_06f98e20;
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_06904354(param_1 + (fVar2 - fVar3),param_2 + 0.0,param_3 + (fVar4 - fVar5),
                   *(long *)(unaff_x19 + 0x28),0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_06902bf8(&stack0x00000010,0);
      uStack0000000000000044 = uStack0000000000000024;
      uStack0000000000000040 = uStack0000000000000020;
      in_stack_00000038 = uStack0000000000000018;
      in_stack_00000030 = in_stack_00000010;
      *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      *(undefined8 *)(unaff_x19 + 0x98) = in_stack_00000010;
      *(undefined8 *)(unaff_x19 + 0xac) = uStack0000000000000024;
      *(ulong *)(unaff_x19 + 0xa4) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_05cf59f0(*(long *)(unaff_x19 + 0x20),0);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          FUN_05cf598c(uStack000000000000009c,uStack0000000000000098,uStack000000000000000c,
                       uStack0000000000000008,*(long *)(unaff_x19 + 0x20),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


