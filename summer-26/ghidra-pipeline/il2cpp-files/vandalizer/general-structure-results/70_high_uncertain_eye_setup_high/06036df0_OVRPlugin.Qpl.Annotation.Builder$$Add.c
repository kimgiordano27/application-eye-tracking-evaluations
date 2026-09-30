/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 06036df0
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


void OVRPlugin_Qpl_Annotation_Builder__Add(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  
  uVar1 = FUN_06037008();
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
LAB_06036e88:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if (param_2 < *(uint *)(lVar3 + 0x18)) {
    lVar3 = lVar3 + (long)(int)param_2 * 0x1c;
    lVar2 = *(long *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(lVar3 + 0x28);
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x2c) >> 0x20);
    uStack000000000000002c = (undefined4)((ulong)uVar5 >> 0x20);
    if (lVar2 == 0) goto LAB_06036e88;
    if (param_2 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (long)(int)param_2 * 0x1c;
      *(undefined8 *)(lVar2 + 0x34) = *(undefined8 *)(lVar3 + 0x34);
      *(ulong *)(lVar2 + 0x2c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      *(undefined8 *)(lVar2 + 0x28) = uVar5;
      *(undefined8 *)(lVar2 + 0x20) = uVar4;
      FUN_0603704c(uVar1,param_2,*(undefined8 *)(param_1 + 0x38));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


