/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Logger$$LogVerbose
ENTRY_POINT: 05633494
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_Logger__LogVerbose(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  long unaff_x19;
  int unaff_w20;
  long unaff_x22;
  long unaff_x23;
  
  if (unaff_x22 != 0) {
    uVar2 = *(uint *)(unaff_x22 + 0x18);
    uVar5 = 0;
    piVar6 = (int *)(unaff_x22 + 0x24);
    do {
      if (uVar2 <= uVar5) {
LAB_05633518:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      if (unaff_x23 == 0) break;
      iVar4 = 0;
      if (unaff_w20 != 0) {
        iVar4 = piVar6[-1] / unaff_w20;
      }
      uVar3 = piVar6[-1] - iVar4 * unaff_w20;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar3) goto LAB_05633518;
      lVar1 = unaff_x23 + (long)(int)uVar3 * 4;
      uVar5 = uVar5 + 1;
      *piVar6 = *(int *)(lVar1 + 0x20) + -1;
      *(uint *)(lVar1 + 0x20) = uVar5;
      piVar6 = piVar6 + 10;
      if (*(int *)(unaff_x19 + 0x24) <= (int)uVar5) {
        *(long *)(unaff_x19 + 0x18) = unaff_x22;
        thunk_FUN_0333a630();
        *(long *)(unaff_x19 + 0x10) = unaff_x23;
        thunk_FUN_0333a630((long *)(unaff_x19 + 0x10));
        return;
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


