/*
FUNCTION_NAME: OVRManager$$get_utilitiesVersion
ENTRY_POINT: 04f45bfc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_utilitiesVersion(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 unaff_s13;
  float unaff_s15;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  
  fVar6 = param_3;
  fVar4 = param_2;
  fVar2 = (float)FUN_05c9bf94();
  fVar7 = fVar6;
  fVar5 = fVar4;
  fVar3 = (float)FUN_04f45b04();
  puVar1 = PTR_DAT_063185a8;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_05c9c070(unaff_s15 + (fVar2 - fVar3),param_2 + (fVar4 - fVar5),param_3 + (fVar6 - fVar7),
                 *(long *)(unaff_x19 + 0x28),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05c9a2f0((undefined1 *)((long)&stack0x00000010 + 4),0);
    *(ulong *)(unaff_x19 + 0x58) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
    *(undefined8 *)(unaff_x19 + 0x50) = uStack0000000000000014;
    *(undefined8 *)(unaff_x19 + 100) = in_stack_00000028;
    *(ulong *)(unaff_x19 + 0x5c) = CONCAT44(uStack0000000000000024,uStack0000000000000020);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_04f3f86c(uStack000000000000007c,unaff_s13,*(long *)(unaff_x19 + 0x20),0);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_04f3f808(uStack0000000000000078,uStack0000000000000010,uStack000000000000000c,
                     uStack0000000000000008,*(long *)(unaff_x19 + 0x20),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


