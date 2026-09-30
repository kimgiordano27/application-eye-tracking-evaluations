/*
FUNCTION_NAME: OVRPlugin$$CreateSpaceUser
ENTRY_POINT: 01d929ec
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRPlugin__CreateSpaceUser(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  
  uVar1 = thunk_FUN_010400dc();
  FUN_014687f8(uVar1,*(undefined8 *)PTR_DAT_02359940);
  lVar2 = *unaff_x21;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar2 = *unaff_x21;
  }
  puVar3 = (undefined8 *)FUN_00fdc2fc(lVar2);
  *puVar3 = uVar1;
  uVar4 = FUN_00fdc2fc(*unaff_x21);
  thunk_FUN_0106e12c(uVar4,uVar1);
  lVar2 = *unaff_x21;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar2 = *unaff_x21;
  }
  plVar5 = (long *)FUN_00fdc2fc(lVar2);
  if (*plVar5 != 0) {
    uVar6 = FUN_0146ab1c();
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      in_stack_00000008 = FUN_01d9500c();
      plVar5 = (long *)FUN_00fdc2fc(*unaff_x21);
      if (*plVar5 == 0) goto OVRPlugin__DestroySpaceUser;
      FUN_01468fd4();
    }
    return in_stack_00000008;
  }
OVRPlugin__DestroySpaceUser:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


