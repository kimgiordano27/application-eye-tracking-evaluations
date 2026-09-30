/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 06036dfc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Add(uint param_1)

{
  long lVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  
  if ((param_1 & 1) == 0) {
    return;
  }
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if (lVar2 == 0) {
LAB_06036e88:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
    lVar2 = lVar2 + (long)(int)unaff_w19 * 0x1c;
    lVar1 = *(long *)(unaff_x20 + 0x20);
    uVar4 = *(undefined8 *)(lVar2 + 0x28);
    uVar3 = *(undefined8 *)(lVar2 + 0x20);
    uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x2c) >> 0x20);
    uStack000000000000002c = (undefined4)((ulong)uVar4 >> 0x20);
    if (lVar1 == 0) goto LAB_06036e88;
    if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + (long)(int)unaff_w19 * 0x1c;
      *(undefined8 *)(lVar1 + 0x34) = *(undefined8 *)(lVar2 + 0x34);
      *(ulong *)(lVar1 + 0x2c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      *(undefined8 *)(lVar1 + 0x28) = uVar4;
      *(undefined8 *)(lVar1 + 0x20) = uVar3;
      FUN_0603704c(param_1,unaff_w19,*(undefined8 *)(unaff_x20 + 0x38));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


