/*
FUNCTION_NAME: OVRPlugin$$CreateInsightTriangleMesh
ENTRY_POINT: 060d494c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreateInsightTriangleMesh(void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar3;
  undefined4 *puVar4;
  
  *(undefined1 *)(unaff_x21 + 0xaa8) = 1;
  puVar1 = PTR_DAT_07a06cc8;
  if (unaff_x20 != 0) {
    if (0 < (int)*(ulong *)(unaff_x20 + 0x18)) {
      uVar3 = 0;
      uVar2 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
      puVar4 = (undefined4 *)(unaff_x20 + 0x28);
      do {
        if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_060d49ec;
        FUN_04641448(puVar4[-2],puVar4[-1],*puVar4,*(undefined4 *)(unaff_x19 + 0x78),
                     *(long *)(unaff_x19 + 0x80),uVar3 & 0xffffffff,*(undefined8 *)puVar1);
        uVar2 = (ulong)*(uint *)(unaff_x20 + 0x18);
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 3;
      } while ((long)uVar3 < (long)(int)*(uint *)(unaff_x20 + 0x18));
    }
    if (*(long *)(unaff_x19 + 0x90) != 0) {
      FUN_06057d18(*(undefined4 *)(unaff_x19 + 0x68),*(undefined4 *)(unaff_x19 + 0x6c),
                   *(undefined4 *)(unaff_x19 + 0x70),*(undefined4 *)(unaff_x19 + 0x74),
                   *(long *)(unaff_x19 + 0x90),*(undefined8 *)(unaff_x19 + 0x80),0);
      if (*(long *)(unaff_x19 + 0x90) != 0) {
        FUN_06055aec(*(long *)(unaff_x19 + 0x90),0);
        return;
      }
    }
  }
LAB_060d49ec:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


