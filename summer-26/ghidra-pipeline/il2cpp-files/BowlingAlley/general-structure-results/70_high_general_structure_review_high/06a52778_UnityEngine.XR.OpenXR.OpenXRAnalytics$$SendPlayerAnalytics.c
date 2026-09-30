/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRAnalytics$$SendPlayerAnalytics
ENTRY_POINT: 06a52778
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_4
*/


void UnityEngine_XR_OpenXR_OpenXRAnalytics__SendPlayerAnalytics(void)

{
  uint uVar1;
  long lVar2;
  int in_w10;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  
  while( true ) {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = in_w10 + 1;
    if (lVar2 == 0) break;
    while( true ) {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        *(int *)(lVar2 + (long)(int)uVar1 * 4 + 0x20) = unaff_w21;
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      }
      else {
        FUN_0418db70();
        lVar2 = *(long *)(unaff_x20 + 0x10);
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar2 == 0) goto LAB_06a5297c;
      }
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        *(int *)(lVar2 + (long)(int)uVar1 * 4 + 0x20) = unaff_w21 + -1;
      }
      else {
        FUN_0418db70();
      }
      unaff_w21 = unaff_w21 + 1;
      if (unaff_w19 == unaff_w21) {
        return;
      }
      lVar2 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (lVar2 == 0) goto LAB_06a5297c;
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (*(uint *)(lVar2 + 0x18) <= uVar1) break;
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar2 + (long)(int)uVar1 * 4 + 0x20) = 0;
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    }
    FUN_0418db70();
    in_w10 = *(int *)(unaff_x20 + 0x1c);
  }
LAB_06a5297c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


