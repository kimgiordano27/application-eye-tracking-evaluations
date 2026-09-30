/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardScale
ENTRY_POINT: 06aca4d0
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetVirtualKeyboardScale(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  
  uVar1 = (uint)param_2;
  uVar2 = FUN_06aca6e8((int)param_1,param_2,*(undefined8 *)(param_1 + 0x38));
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
LAB_06aca574:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
    lVar4 = lVar4 + (long)(int)uVar1 * 0x1c;
    lVar3 = *(long *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    uVar5 = *(undefined8 *)(lVar4 + 0x20);
    uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x2c) >> 0x20);
    uStack000000000000002c = (undefined4)((ulong)uVar6 >> 0x20);
    if (lVar3 == 0) goto LAB_06aca574;
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)(int)uVar1 * 0x1c;
      *(undefined8 *)(lVar3 + 0x34) = *(undefined8 *)(lVar4 + 0x34);
      *(ulong *)(lVar3 + 0x2c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      *(undefined8 *)(lVar3 + 0x28) = uVar6;
      *(undefined8 *)(lVar3 + 0x20) = uVar5;
      FUN_06aca72c(uVar2,param_2 & 0xffffffff,*(undefined8 *)(param_1 + 0x38));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


