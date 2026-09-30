/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRAnalytics$$SendPlayerAnalytics
ENTRY_POINT: 0880c220
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4
*/


uint UnityEngine_XR_OpenXR_OpenXRAnalytics__SendPlayerAnalytics(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if ((*(long *)(param_1 + 0x128) != 0) &&
     (lVar2 = FUN_088161d4(*(long *)(param_1 + 0x128),0), lVar2 != 0)) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      lVar2 = 0x28;
      do {
        if (((*(long *)(param_1 + 0x128) == 0) ||
            (lVar3 = FUN_088161d4(*(long *)(param_1 + 0x128),0), lVar3 == 0)) ||
           (lVar3 = *(long *)(lVar3 + 0x38), lVar3 == 0)) goto LAB_0880c2b4;
        if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        if (param_2 <= *(int *)(lVar3 + lVar2)) {
          return uVar4;
        }
        uVar4 = uVar4 + 1;
        lVar2 = lVar2 + 0x178;
      } while (uVar1 != uVar4);
    }
    return uVar1;
  }
LAB_0880c2b4:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


