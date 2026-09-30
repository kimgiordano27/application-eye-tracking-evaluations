/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreCreateWithoutOpenXrDelegate$$EndInvoke
ENTRY_POINT: 05adf7e0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate__EndInvoke
               (long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    if (*(int *)((long)param_1 + 0xc) != *(int *)(lVar3 + 0x2c)) {
      FUN_05e229e0(0);
      lVar3 = *param_1;
      if (lVar3 == 0) goto LAB_05adf88c;
    }
    uVar1 = *(uint *)(lVar3 + 0x20);
    uVar2 = *(uint *)(param_1 + 1);
    do {
      uVar5 = uVar2;
      if (uVar1 <= uVar5) {
        *(uint *)(param_1 + 1) = uVar1 + 1;
        *(undefined4 *)(param_1 + 2) = 0;
        goto LAB_05adf87c;
      }
      lVar4 = *(long *)(lVar3 + 0x18);
      *(uint *)(param_1 + 1) = uVar5 + 1;
      if (lVar4 == 0) goto LAB_05adf88c;
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      uVar2 = uVar5 + 1;
    } while (*(int *)(lVar4 + (long)(int)uVar5 * 0x14 + 0x20) < 0);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar4 + (long)(int)uVar5 * 0x14 + 0x28);
LAB_05adf87c:
    return uVar5 < uVar1;
  }
LAB_05adf88c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


