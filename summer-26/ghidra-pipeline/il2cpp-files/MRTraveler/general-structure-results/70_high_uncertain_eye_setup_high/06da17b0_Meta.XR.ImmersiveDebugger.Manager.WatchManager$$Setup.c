/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager$$Setup
ENTRY_POINT: 06da17b0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchManager__Setup(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  int in_w9;
  long lVar4;
  long unaff_x20;
  ulong unaff_x21;
  undefined4 unaff_w23;
  long unaff_x24;
  uint unaff_w25;
  long unaff_x26;
  
  uVar2 = (**(code **)(param_1 + (long)in_w9 * 0x10 + 0x138))();
  if (unaff_x26 == 0) {
LAB_06da1858:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (unaff_x21 < *(uint *)(unaff_x26 + 0x18)) {
    while( true ) {
      *(undefined4 *)(unaff_x26 + unaff_x21 * 4 + 0x20) = uVar2;
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
      lVar3 = *(long *)(unaff_x20 + 0xb8);
      if (lVar3 == 0) goto LAB_06da1858;
      if (*(uint *)(lVar3 + 0x18) <= unaff_w25) break;
      lVar3 = *(long *)(lVar3 + (long)(int)unaff_w25 * 8 + 0x20);
      if (lVar3 == 0) goto LAB_06da1858;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x21) break;
      uVar1 = *(uint *)(lVar3 + unaff_x21 * 4 + 0x20);
      if (uVar1 < 4) {
                    /* WARNING: Could not recover jumptable at 0x06da1248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(byte *)(unaff_x24 + (ulong)uVar1) * 4 + 0x6da124c))();
        return;
      }
      lVar3 = *(long *)(unaff_x20 + 200);
      if (lVar3 == 0) goto LAB_06da1858;
      if (*(uint *)(lVar3 + 0x18) <= unaff_w25) break;
      lVar3 = *(long *)(lVar3 + (long)(int)unaff_w25 * 8 + 0x20);
      if (lVar3 == 0) goto LAB_06da1858;
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 == 0) break;
      lVar4 = *(long *)(lVar3 + 0x20);
      if (lVar4 == 0) goto LAB_06da1858;
      if ((*(uint *)(lVar4 + 0x18) <= unaff_x21) ||
         (*(undefined4 *)(lVar4 + unaff_x21 * 4 + 0x20) = unaff_w23, uVar1 < 2)) break;
      lVar4 = *(long *)(lVar3 + 0x28);
      if (lVar4 == 0) goto LAB_06da1858;
      if ((*(uint *)(lVar4 + 0x18) <= unaff_x21) ||
         (*(undefined4 *)(lVar4 + unaff_x21 * 4 + 0x20) = unaff_w23, uVar1 < 3)) break;
      unaff_x26 = *(long *)(lVar3 + 0x30);
      if (unaff_x26 == 0) goto LAB_06da1858;
      if (*(uint *)(unaff_x26 + 0x18) <= unaff_x21) break;
      uVar2 = 0x3f;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


