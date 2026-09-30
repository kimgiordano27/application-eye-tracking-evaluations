/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeGazesState
ENTRY_POINT: 033f796c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x033f7828) */
/* WARNING: Removing unreachable block (ram,0x033f7864) */
/* WARNING: Removing unreachable block (ram,0x033f7928) */
/* WARNING: Removing unreachable block (ram,0x033f7830) */

undefined1 OVRPlugin_OVRP_1_78_0__ovrp_GetEyeGazesState(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x19;
  long *unaff_x20;
  long lVar6;
  undefined8 in_stack_00000038;
  
  uVar3 = thunk_FUN_01dd295c(StringLiteral_1925);
  uVar4 = thunk_FUN_01dce4e8(uVar3,*(undefined8 *)*unaff_x20);
  if ((uVar4 & 1) == 0) {
    plVar5 = (long *)__cxa_allocate_exception(8);
    *plVar5 = *unaff_x20;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar5,&
                       PTR_Method_SojaExiles_opencloseWindow1_<opening>d__5_System_Collections_IEnumerator_Reset___03fad958
                ,0);
  }
  lVar6 = *unaff_x20;
  __cxa_end_catch();
  uVar2 = 0;
  iVar1 = *(int *)(unaff_x19 + 0x10);
  thunk_FUN_01da0934();
  if (iVar1 < 1) {
    if (lVar6 != 0) {
      uVar3 = thunk_FUN_01dd295c(StringLiteral_9428);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(lVar6,uVar3);
    }
  }
  else {
    iVar1 = *(int *)(unaff_x19 + 0x10);
    thunk_FUN_01da0934();
    thunk_FUN_01da0934();
    uVar2 = 1;
    *(int *)(unaff_x19 + 0x10) = iVar1 + -1;
  }
  lVar6 = *(long *)(unaff_x19 + 0x28);
  thunk_FUN_01da0934();
  if ((lVar6 != 0) && (iVar1 = *(int *)(unaff_x19 + 0x10), thunk_FUN_01da0934(), iVar1 == 0)) {
    lVar6 = *(long *)(unaff_x19 + 0x28);
    thunk_FUN_01da0934();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    FUN_033f7f00(lVar6);
  }
  if (in_stack_00000038._4_1_ != '\0') {
    iVar1 = *(int *)(unaff_x19 + 0x18);
    thunk_FUN_01da0934();
    thunk_FUN_01da0934();
    *(int *)(unaff_x19 + 0x18) = iVar1 + -1;
    FUN_01dccd6c(*(undefined8 *)(unaff_x19 + 0x20));
  }
  FUN_033f597c(&stack0x00000020);
  return uVar2;
}


