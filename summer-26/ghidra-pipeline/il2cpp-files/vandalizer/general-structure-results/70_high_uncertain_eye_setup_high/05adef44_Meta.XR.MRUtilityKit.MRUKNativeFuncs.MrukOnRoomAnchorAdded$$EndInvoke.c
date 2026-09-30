/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnRoomAnchorAdded$$EndInvoke
ENTRY_POINT: 05adef44
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorAdded__EndInvoke(long param_1)

{
  uint uVar1;
  uint uVar2;
  bool in_ZR;
  long lVar3;
  uint uVar4;
  long *unaff_x19;
  
  if (!in_ZR) {
    FUN_05e229e0(0);
    param_1 = *unaff_x19;
    if (param_1 == 0) {
LAB_05adefd4:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = *(uint *)(unaff_x19 + 1);
  do {
    uVar4 = uVar2;
    if (uVar1 <= uVar4) {
      *(uint *)(unaff_x19 + 1) = uVar1 + 1;
      *(undefined4 *)(unaff_x19 + 2) = 0;
      goto LAB_05adefc4;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 1) = uVar4 + 1;
    if (lVar3 == 0) goto LAB_05adefd4;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar2 = uVar4 + 1;
  } while (*(int *)(lVar3 + (long)(int)uVar4 * 0x18 + 0x20) < 0);
  *(undefined4 *)(unaff_x19 + 2) = *(undefined4 *)(lVar3 + (long)(int)uVar4 * 0x18 + 0x28);
LAB_05adefc4:
  return uVar4 < uVar1;
}


