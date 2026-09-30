/*
FUNCTION_NAME: FUN_01d92954
ENTRY_POINT: 01d92954
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_01d92954(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 local_28;
  
  puVar1 = PTR_DAT_02354070;
  if ((DAT_0247d88a & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_02359938);
    FUN_00fdc2e4(PTR_DAT_02359940);
    FUN_00fdc2e4(PTR_DAT_02359948);
    FUN_00fdc2e4(PTR_DAT_02359950);
    FUN_00fdc2e4(PTR_DAT_02354070);
    DAT_0247d88a = 1;
  }
  lVar2 = *(long *)puVar1;
  local_28 = 0;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar2 = *(long *)puVar1;
  }
  plVar3 = (long *)FUN_00fdc2fc(lVar2);
  if (*plVar3 == 0) {
    uVar4 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02359950);
    FUN_014687f8(uVar4,*(undefined8 *)PTR_DAT_02359940);
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar2 = *(long *)puVar1;
    }
    puVar5 = (undefined8 *)FUN_00fdc2fc(lVar2);
    *puVar5 = uVar4;
    uVar6 = FUN_00fdc2fc(*(undefined8 *)puVar1);
    thunk_FUN_0106e12c(uVar6,uVar4);
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar2 = *(long *)puVar1;
  }
  plVar3 = (long *)FUN_00fdc2fc(lVar2);
  if (*plVar3 != 0) {
    uVar7 = FUN_0146ab1c(*plVar3,param_1,&local_28,*(undefined8 *)PTR_DAT_02359938);
    if ((uVar7 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      local_28 = FUN_01d9500c(param_1);
      plVar3 = (long *)FUN_00fdc2fc(*(undefined8 *)puVar1);
      if (*plVar3 == 0) goto OVRPlugin__DestroySpaceUser;
      FUN_01468fd4(*plVar3,param_1,local_28,*(undefined8 *)PTR_DAT_02359948);
    }
    return local_28;
  }
OVRPlugin__DestroySpaceUser:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


