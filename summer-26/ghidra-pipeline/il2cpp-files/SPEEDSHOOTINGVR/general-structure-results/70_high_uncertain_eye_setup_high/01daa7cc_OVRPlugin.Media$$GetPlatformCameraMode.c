/*
FUNCTION_NAME: OVRPlugin.Media$$GetPlatformCameraMode
ENTRY_POINT: 01daa7cc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01daa68c) */
/* WARNING: Removing unreachable block (ram,0x01daa6c8) */
/* WARNING: Removing unreachable block (ram,0x01daa78c) */
/* WARNING: Removing unreachable block (ram,0x01daa694) */

undefined1 OVRPlugin_Media__GetPlatformCameraMode(long *param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x19;
  long lVar6;
  undefined8 in_stack_00000038;
  
  uVar3 = thunk_FUN_010303a8(PTR_DAT_0234d1e8);
  uVar4 = thunk_FUN_0102bfdc(uVar3,*(undefined8 *)*param_1);
  if ((uVar4 & 1) == 0) {
    plVar5 = (long *)__cxa_allocate_exception(8);
    *plVar5 = *param_1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar5,&PTR_PTR_0220e3b8,0);
  }
  lVar6 = *param_1;
  __cxa_end_catch();
  uVar2 = 0;
  iVar1 = *(int *)(unaff_x19 + 0x10);
  thunk_FUN_00ffe618();
  if (iVar1 < 1) {
    if (lVar6 != 0) {
      uVar3 = thunk_FUN_010303a8(PTR_DAT_0235a0a0);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(lVar6,uVar3);
    }
  }
  else {
    iVar1 = *(int *)(unaff_x19 + 0x10);
    thunk_FUN_00ffe618();
    thunk_FUN_00ffe618();
    uVar2 = 1;
    *(int *)(unaff_x19 + 0x10) = iVar1 + -1;
  }
  lVar6 = *(long *)(unaff_x19 + 0x28);
  thunk_FUN_00ffe618();
  if ((lVar6 != 0) && (iVar1 = *(int *)(unaff_x19 + 0x10), thunk_FUN_00ffe618(), iVar1 == 0)) {
    lVar6 = *(long *)(unaff_x19 + 0x28);
    thunk_FUN_00ffe618();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_01daad64(lVar6);
  }
  if (in_stack_00000038._4_1_ != '\0') {
    iVar1 = *(int *)(unaff_x19 + 0x18);
    thunk_FUN_00ffe618();
    thunk_FUN_00ffe618();
    *(int *)(unaff_x19 + 0x18) = iVar1 + -1;
    FUN_0102a860(*(undefined8 *)(unaff_x19 + 0x20));
  }
  FUN_01da86bc(&stack0x00000020);
  return uVar2;
}


