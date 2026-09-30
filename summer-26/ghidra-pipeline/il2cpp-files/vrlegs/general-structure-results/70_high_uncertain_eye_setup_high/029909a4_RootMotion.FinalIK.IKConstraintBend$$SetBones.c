/*
FUNCTION_NAME: RootMotion.FinalIK.IKConstraintBend$$SetBones
ENTRY_POINT: 029909a4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02990a5c) */
/* WARNING: Removing unreachable block (ram,0x029909d4) */
/* WARNING: Removing unreachable block (ram,0x02990b00) */

bool RootMotion_FinalIK_IKConstraintBend__SetBones(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  bool bVar3;
  int unaff_w23;
  int unaff_w28;
  undefined4 unaff_w29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  *(undefined4 *)(unaff_x20 + 200) = unaff_w29;
  if (in_stack_00000018._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000000,0);
  }
  if (*(char *)(unaff_x20 + 0x150) == '\0') {
    bVar3 = false;
  }
  else {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar1 = FUN_0299ec14(*(long *)(unaff_x20 + 0x10),0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0xa8);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + 1;
      *(uint *)(lVar2 + 0x28) = *(int *)(lVar2 + 0x28) + (uint)*(byte *)(unaff_x20 + 0x150);
    }
    FUN_029910c8();
    bVar3 = 0 < unaff_w28 + unaff_w23;
  }
  if (in_stack_00000020._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return bVar3;
}


