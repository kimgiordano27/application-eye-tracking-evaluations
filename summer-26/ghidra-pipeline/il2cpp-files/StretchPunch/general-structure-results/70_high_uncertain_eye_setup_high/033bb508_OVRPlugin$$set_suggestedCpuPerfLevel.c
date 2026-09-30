/*
FUNCTION_NAME: OVRPlugin$$set_suggestedCpuPerfLevel
ENTRY_POINT: 033bb508
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033bb5f0) */

void OVRPlugin__set_suggestedCpuPerfLevel(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  uint unaff_w20;
  int iVar3;
  long unaff_x22;
  char cStack000000000000000c;
  
  FUN_01d7d918(*(undefined8 *)(param_1 + 0x30));
  *(undefined1 *)(unaff_x22 + 0x97f) = 1;
  cStack000000000000000c = '\0';
  FUN_032ff418(0);
  FUN_033f4894();
  puVar1 = StringLiteral_8754;
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if (lVar2 != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar3) {
        lVar2 = *(long *)(unaff_x19 + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if (unaff_w20 < *(uint *)(lVar2 + 0x18)) {
          *(undefined1 *)(lVar2 + (int)unaff_w20 + 0x20) = 0;
          if ((int)unaff_w20 < *(int *)(unaff_x19 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = unaff_w20;
          }
          if (cStack000000000000000c != '\0') {
            thunk_FUN_01dccd6c();
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      lVar2 = FUN_03198ca0(lVar2,iVar3,*(undefined8 *)puVar1);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      FUN_033ba730(lVar2,unaff_w20);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      iVar3 = iVar3 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


