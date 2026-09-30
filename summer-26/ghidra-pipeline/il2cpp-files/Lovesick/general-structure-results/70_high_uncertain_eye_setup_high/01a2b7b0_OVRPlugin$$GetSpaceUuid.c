/*
FUNCTION_NAME: OVRPlugin$$GetSpaceUuid
ENTRY_POINT: 01a2b7b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__GetSpaceUuid(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  
  uStack0000000000000018 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    lVar3 = *(long *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar4 = *(int *)(param_1 + 0x40) + 1;
    *(uint *)(param_1 + 0x40) = uVar4;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_01a2b86c;
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(long *)(param_1 + 0x38) = lVar3;
  }
  if (lVar3 != 0) {
    if ((int)uVar4 < (int)*(uint *)(lVar3 + 0x18)) {
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar3 = lVar3 + (long)(int)uVar4 * 0x1c;
      uVar1 = *(undefined4 *)(lVar3 + 0x38);
      uVar6 = *(undefined8 *)(lVar3 + 0x28);
      uVar5 = *(undefined8 *)(lVar3 + 0x20);
      uVar2 = 1;
      uStack0000000000000010 = (undefined4)*(undefined8 *)(lVar3 + 0x30);
      uStack0000000000000014 = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
      uStack000000000000000c = (undefined4)((ulong)uVar6 >> 0x20);
      *(undefined4 *)(param_1 + 0x10) = 1;
      *(ulong *)(param_1 + 0x28) = CONCAT44(uVar1,uStack0000000000000014);
      *(ulong *)(param_1 + 0x20) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
      *(undefined8 *)(param_1 + 0x1c) = uVar6;
      *(undefined8 *)(param_1 + 0x14) = uVar5;
    }
    else {
      uVar2 = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    return uVar2;
  }
LAB_01a2b86c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


