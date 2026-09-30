/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManager$$ProcessTypeFromInspector
ENTRY_POINT: 06da1230
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakManager__ProcessTypeFromInspector(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong unaff_x21;
  undefined4 unaff_w23;
  long unaff_x24;
  uint unaff_w25;
  long unaff_x26;
  
  while( true ) {
    if (*(uint *)(param_1 + 0x20) < 4) {
                    /* WARNING: Could not recover jumptable at 0x06da1248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(byte *)(unaff_x24 + (ulong)*(uint *)(param_1 + 0x20)) * 4 + 0x6da124c))();
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 200);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w25) {
LAB_06da185c:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar2 = *(long *)(lVar2 + unaff_x26 * 8 + 0x20);
    if (lVar2 == 0) break;
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (uVar1 == 0) goto LAB_06da185c;
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) break;
    if ((*(uint *)(lVar3 + 0x18) <= unaff_x21) ||
       (*(undefined4 *)(lVar3 + unaff_x21 * 4 + 0x20) = unaff_w23, uVar1 < 2)) goto LAB_06da185c;
    lVar3 = *(long *)(lVar2 + 0x28);
    if (lVar3 == 0) break;
    if ((*(uint *)(lVar3 + 0x18) <= unaff_x21) ||
       (*(undefined4 *)(lVar3 + unaff_x21 * 4 + 0x20) = unaff_w23, uVar1 < 3)) goto LAB_06da185c;
    lVar2 = *(long *)(lVar2 + 0x30);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x21) goto LAB_06da185c;
    *(undefined4 *)(lVar2 + unaff_x21 * 4 + 0x20) = 0x3f;
    unaff_w25 = unaff_w25 + 1;
    if (*(int *)(unaff_x20 + 0xa0) <= (int)unaff_w25) {
      do {
        unaff_x21 = unaff_x21 + 1;
        if (unaff_x21 == 0x20) {
          return;
        }
      } while (*(int *)(unaff_x20 + 0xa0) < 1);
      unaff_w25 = 0;
    }
    lVar2 = *(long *)(unaff_x20 + 0xb8);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w25) goto LAB_06da185c;
    unaff_x26 = (long)(int)unaff_w25;
    param_1 = *(long *)(lVar2 + unaff_x26 * 8 + 0x20);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= unaff_x21) goto LAB_06da185c;
    param_1 = param_1 + unaff_x21 * 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


