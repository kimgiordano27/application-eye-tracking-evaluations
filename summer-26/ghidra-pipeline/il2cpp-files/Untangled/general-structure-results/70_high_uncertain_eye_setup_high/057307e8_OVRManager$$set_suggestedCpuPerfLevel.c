/*
FUNCTION_NAME: OVRManager$$set_suggestedCpuPerfLevel
ENTRY_POINT: 057307e8
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_suggestedCpuPerfLevel(long param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x19;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x26;
  long unaff_x28;
  undefined4 uStack000000000000000c;
  
  uVar3 = (**(code **)(param_1 + 0x288))(param_2,*(undefined8 *)(param_1 + 0x290));
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (unaff_x23 != (long *)0x0) {
    bVar1 = *(byte *)(*unaff_x26 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x23 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x26)) {
      if (unaff_x23[0xb] == 0) goto LAB_0573082c;
      if ((*(long *)(unaff_x23[0xb] + 0x10) != 0) && (unaff_x23 == unaff_x21)) {
        return;
      }
    }
  }
  if (unaff_x19 != (long *)0x0) {
    uVar2 = (**(code **)(*unaff_x19 + 0x238))();
    if (uVar2 < 0x12) {
                    /* WARNING: Could not recover jumptable at 0x05730620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(byte *)(unaff_x28 + (ulong)uVar2) * 4 + 0x5730624))();
      return;
    }
    thunk_FUN_02f239f0(PTR_DAT_06d06338);
    FUN_02a55ad4();
    uVar4 = FUN_055b5920(0);
    FUN_02a551a0();
    uStack000000000000000c = (**(code **)(*unaff_x19 + 0x238))();
    uVar5 = thunk_FUN_02f239f0(PTR_DAT_06d55320);
    uVar5 = thunk_FUN_02ef1438(uVar5,&stack0x0000000c);
    uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d58910);
    uVar4 = FUN_056f1630(uVar6,uVar4,uVar5,0);
    thunk_FUN_02f239f0(PTR_DAT_06d021a0);
    uVar5 = thunk_FUN_02ef1808();
    FUN_05601bec(uVar5,uVar4,0);
    uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d58918);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar5,uVar4);
  }
LAB_0573082c:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


