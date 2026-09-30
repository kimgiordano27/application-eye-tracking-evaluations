/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleGlobalMeshSpawner$$get_ReserveSpace
ENTRY_POINT: 05ad4f5c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner__get_ReserveSpace(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    if (*(int *)((long)param_1 + 0xc) != *(int *)(lVar3 + 0x2c)) {
      FUN_05e229e0(0);
      lVar3 = *param_1;
      if (lVar3 == 0) goto LAB_05ad501c;
    }
    uVar1 = *(uint *)(lVar3 + 0x20);
    uVar2 = *(uint *)(param_1 + 1);
    do {
      uVar5 = uVar2;
      if (uVar1 <= uVar5) {
        *(uint *)(param_1 + 1) = uVar1 + 1;
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[5] = 0;
        param_1[4] = 0;
        goto LAB_05ad5008;
      }
      lVar4 = *(long *)(lVar3 + 0x18);
      *(uint *)(param_1 + 1) = uVar5 + 1;
      if (lVar4 == 0) goto LAB_05ad501c;
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      uVar2 = uVar5 + 1;
    } while (*(int *)(lVar4 + (long)(int)uVar5 * 0x30 + 0x20) < 0);
    lVar4 = lVar4 + (long)(int)uVar5 * 0x30;
    lVar6 = *(long *)(lVar4 + 0x40);
    lVar3 = *(long *)(lVar4 + 0x38);
    lVar7 = *(long *)(lVar4 + 0x28);
    param_1[3] = *(long *)(lVar4 + 0x30);
    param_1[2] = lVar7;
    param_1[5] = lVar6;
    param_1[4] = lVar3;
    thunk_FUN_0329bf60(param_1 + 2,0);
LAB_05ad5008:
    return uVar5 < uVar1;
  }
LAB_05ad501c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


