/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SyncMrcFrame
ENTRY_POINT: 07a5f99c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SyncMrcFrame(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = (uint)param_2;
  uVar2 = FUN_07a5fb94((int)param_1,param_2,*(undefined8 *)(param_1 + 0x38));
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      lVar4 = *(long *)(param_1 + 0x20);
      if (lVar4 == 0) goto LAB_07a5fa2c;
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        lVar3 = lVar3 + (long)(int)uVar1 * 0x1c;
        lVar4 = lVar4 + (long)(int)uVar1 * 0x1c;
        uVar5 = *(undefined8 *)(lVar3 + 0x30);
        uVar7 = *(undefined8 *)(lVar3 + 0x28);
        uVar6 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar3 + 0x38);
        *(undefined8 *)(lVar4 + 0x30) = uVar5;
        *(undefined8 *)(lVar4 + 0x28) = uVar7;
        *(undefined8 *)(lVar4 + 0x20) = uVar6;
        FUN_07a5fbd8(uVar2,param_2 & 0xffffffff,*(undefined8 *)(param_1 + 0x38));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_07a5fa2c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


