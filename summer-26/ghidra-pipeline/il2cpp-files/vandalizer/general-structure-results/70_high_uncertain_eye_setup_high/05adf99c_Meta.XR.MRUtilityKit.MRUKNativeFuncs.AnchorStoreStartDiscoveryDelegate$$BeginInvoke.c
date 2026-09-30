/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreStartDiscoveryDelegate$$BeginInvoke
ENTRY_POINT: 05adf99c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate__BeginInvoke
               (long param_1)

{
  uint uVar1;
  uint uVar2;
  int in_w9;
  int in_w10;
  long lVar3;
  uint uVar4;
  long *unaff_x19;
  
  if (in_w9 != in_w10) {
    FUN_05e229e0(0);
    param_1 = *unaff_x19;
    if (param_1 == 0) {
LAB_05adfa30:
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
      unaff_x19[2] = 0;
      goto LAB_05adfa20;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 1) = uVar4 + 1;
    if (lVar3 == 0) goto LAB_05adfa30;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar2 = uVar4 + 1;
  } while (*(int *)(lVar3 + (long)(int)uVar4 * 0x14 + 0x20) < 0);
  unaff_x19[2] = *(long *)(lVar3 + (long)(int)uVar4 * 0x14 + 0x2c);
LAB_05adfa20:
  return uVar4 < uVar1;
}


