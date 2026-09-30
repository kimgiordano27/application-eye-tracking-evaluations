/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastAnchorAllDelegate$$EndInvoke
ENTRY_POINT: 04a6ff98
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate__EndInvoke(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint in_w9;
  long lVar3;
  uint in_w12;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined4 unaff_w21;
  long unaff_x26;
  
  uVar2 = (uint)param_1;
  if ((uVar2 < in_w9) &&
     (*(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x26 + param_1 * 0x10 + 0x24),
     uVar2 < in_w9)) {
    puVar1 = (undefined4 *)(unaff_x26 + 0x20 + (long)(int)uVar2 * 0x10);
    *(undefined8 *)(puVar1 + 2) = unaff_x20;
    lVar3 = *(long *)(unaff_x19 + 0x10);
    *puVar1 = unaff_w21;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((in_w12 < *(uint *)(lVar3 + 0x18)) && (uVar2 < *(uint *)(unaff_x26 + 0x18))) {
      lVar3 = lVar3 + (ulong)in_w12 * 4;
      *(int *)(unaff_x26 + 0x20 + (long)(int)uVar2 * 0x10 + 4) = *(int *)(lVar3 + 0x20) + -1;
      *(uint *)(lVar3 + 0x20) = uVar2 + 1;
      *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
      *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


