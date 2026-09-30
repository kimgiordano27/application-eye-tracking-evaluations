/*
FUNCTION_NAME: OVRPlugin$$GetFaceVisemesState
ENTRY_POINT: 02c2e040
PROGRAM: sharks-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetFaceVisemesState(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_w8;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  
  if (in_w8 == 0) {
    thunk_FUN_01843fdc();
    in_w8 = *(int *)(*unaff_x22 + 0xe0);
  }
  uVar8 = (unaff_x21 & 0xffffffff) * (unaff_x20 & 0xffffffff);
  uVar7 = (unaff_x21 >> 0x20) * (unaff_x20 & 0xffffffff);
  uVar1 = uVar7 << 0x20;
  uVar3 = uVar8 + uVar1;
  if (in_w8 == 0) {
    thunk_FUN_01843fdc();
  }
  uVar6 = (unaff_x21 & 0xffffffff) * (unaff_x20 >> 0x20);
  uVar2 = uVar6 << 0x20;
  uVar1 = (unaff_x21 >> 0x20) * (unaff_x20 >> 0x20) + (uVar7 >> 0x20) + (uVar6 >> 0x20) +
          (ulong)CARRY8(uVar8,uVar1);
  if (CARRY8(uVar3,uVar2)) {
    uVar1 = uVar1 + 1;
  }
  if (uVar1 >> 0x20 == 0) {
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    *(ulong *)(unaff_x19 + 8) = uVar3 + uVar2;
    *(int *)(unaff_x19 + 4) = (int)uVar1;
    return;
  }
  thunk_FUN_01851c08(PTR_DAT_037f87b0);
  uVar4 = thunk_FUN_01861bbc();
  uVar5 = thunk_FUN_01851c08(PTR_DAT_03809d90);
  FUN_02bde04c(uVar4,uVar5,0);
  uVar5 = thunk_FUN_01851c08(PTR_DAT_0380bda0);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar4,uVar5);
}


