/*
FUNCTION_NAME: OVRManager$$remove_HMDUnmounted
ENTRY_POINT: 05117f50
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05118044) */

void OVRManager__remove_HMDUnmounted(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x22;
  undefined8 *unaff_x25;
  char cStack0000000000000004;
  
  uVar1 = thunk_FUN_02d9d164();
  FUN_0503c9d8(uVar1,*unaff_x25,0);
  FUN_04e97bc4();
  FUN_04e97bc4();
  FUN_04e97bc4();
  uVar1 = (**(code **)(*unaff_x22 + 0x168))();
  uVar3 = *(undefined8 *)(unaff_x19 + 0x18);
  cStack0000000000000004 = '\0';
  FUN_0506ac34(uVar3,&stack0x00000004,0);
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (999 < *(int *)(lVar2 + 0x20)) {
    FUN_03f8d1d0(lVar2,*(undefined8 *)PTR_DAT_0676c430);
    lVar2 = *(long *)(unaff_x19 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
  }
  FUN_03f8d040(lVar2,uVar1,*(undefined8 *)PTR_DAT_0676c408);
  if (cStack0000000000000004 != '\0') {
    thunk_FUN_02d6ec70(uVar3,0);
  }
  return;
}


