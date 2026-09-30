/*
FUNCTION_NAME: OVRManager$$get_instance
ENTRY_POINT: 05ba1850
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_instance(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined8 uVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined8 uStack000000000000001c;
  
  fVar4 = param_3;
  fVar2 = (float)FUN_069e6fbc();
  fVar5 = fVar4;
  fVar3 = (float)FUN_05ba2bb0();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_069e7098(unaff_s8 + (fVar2 - fVar3),param_2 + 0.0,param_3 + (fVar4 - fVar5),
                 *(long *)(unaff_x19 + 0x30),0);
    if (*(int *)(*(long *)PTR_DAT_070f13a0 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_069e53e4(&stack0x00000008,0);
    *(ulong *)(unaff_x19 + 0xb8) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
    *(undefined8 *)(unaff_x19 + 0xb0) = in_stack_00000008;
    *(undefined8 *)(unaff_x19 + 0xc4) = uStack000000000000001c;
    *(ulong *)(unaff_x19 + 0xbc) = CONCAT44(uStack0000000000000018,uStack0000000000000014);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      uVar1 = FUN_069d3a80(*(long *)(unaff_x19 + 0x20),0);
      FUN_05b64410(uVar1,&stack0x00000040,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


