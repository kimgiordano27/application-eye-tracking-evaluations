/*
FUNCTION_NAME: RootMotion.FinalIK.InteractionTarget$$RotateTo
ENTRY_POINT: 029bf618
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029bf704) */

uint RootMotion_FinalIK_InteractionTarget__RotateTo(void)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  int iVar3;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000018;
  
  while( true ) {
    if (in_stack_00000000._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(unaff_x20,0);
    }
    if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(unaff_x22);
    }
    if ((unaff_w21 != 0) && (unaff_w21 != 9)) break;
    if (unaff_x24 == 0) {
LAB_029bf7a0:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(unaff_x24 + 0x18))
              (*(undefined8 *)(unaff_x24 + 0x40),*(undefined8 *)(unaff_x24 + 0x28));
    unaff_x20 = unaff_x19[0xc];
    in_stack_00000000._4_1_ = '\0';
    FUN_027e0bd8(unaff_x20,(long)&stack0x00000000 + 4,0);
    lVar1 = unaff_x19[0xc];
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar1 + 0x20) < 1) {
      unaff_x22 = 0;
      unaff_w21 = 8;
    }
    else {
      FUN_022661a4(lVar1,&stack0x00000008,*unaff_x23);
      unaff_x22 = 0;
      unaff_w21 = 9;
      unaff_x24 = in_stack_00000008;
    }
  }
  if (unaff_w21 == 8) {
    FUN_027e0bd8(unaff_x19[0x24]);
    lVar1 = unaff_x19[0x24];
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar1 + 0x20) < 1) {
      lVar1 = 0;
      iVar3 = 0xb;
    }
    else {
      FUN_022661a4(lVar1,&stack0x00000018,*(undefined8 *)PTR_DAT_03d07b50);
      iVar3 = 0xc;
      lVar1 = in_stack_00000018;
    }
    if ((iVar3 == 0xc) || (iVar3 == 0)) {
      if (lVar1 == 0) goto LAB_029bf7a0;
      *(int *)(unaff_x19 + 9) = *(int *)(lVar1 + 0x14) + 3;
      uVar2 = (**(code **)(*unaff_x19 + 600))();
      unaff_x19 = (long *)(uVar2 & 0xffffffff);
      if (*(int *)(*(long *)PTR_DAT_03d07920 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03d07920);
      }
      FUN_02992f5c(lVar1,0);
    }
    else {
      unaff_x19 = (long *)0x0;
    }
  }
  return (uint)unaff_x19 & 1;
}


