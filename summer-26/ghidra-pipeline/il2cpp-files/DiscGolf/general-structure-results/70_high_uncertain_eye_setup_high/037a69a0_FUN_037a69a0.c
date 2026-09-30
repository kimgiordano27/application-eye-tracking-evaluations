/*
FUNCTION_NAME: FUN_037a69a0
ENTRY_POINT: 037a69a0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_037a69a0(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_34;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_02dcfd74(param_4);
  }
  local_34 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  if (param_2 == (long *)0x0) {
System_Runtime_CompilerServices_Unsafe__Add<OVRPlugin_Qpl_Annotation>:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  local_34 = (**(code **)(*param_2 + 0x218))(param_2,param_3,*(undefined8 *)(*param_2 + 0x220));
  if ((int)param_1[0x14] <= (int)param_1[2]) {
    lVar2 = thunk_FUN_02db5310(*(undefined8 *)
                                (*param_1 +
                                 (ulong)*(ushort *)
                                         (*(long *)(*(long *)(param_4 + 0x38) + 0x20) + 0x50) * 0x10
                                + 0x140));
    (**(code **)(lVar2 + 8))(param_1,param_2,param_3,&local_34,lVar2);
    return;
  }
  uVar1 = FUN_037c4f74(&local_34,&uStack_40,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x30));
  if ((uVar1 & 1) == 0) {
System_Runtime_CompilerServices_Unsafe__Add<UIRenderDevice_AllocToUpdate>:
    *(undefined4 *)((long)param_1 + 0xb4) = 4;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar4 = *(long *)(*(long *)(param_4 + 0x38) + 0x38);
    lVar2 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar2 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    if (*(char *)(*(long *)(lVar2 + 0xb8) + 0xc) != '\0') {
      plVar3 = (long *)FUN_034e9ed4(*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x48));
      if (plVar3 == (long *)0x0)
      goto System_Runtime_CompilerServices_Unsafe__Add<OVRPlugin_Qpl_Annotation>;
      uVar1 = (**(code **)(*plVar3 + 0x1b8))(plVar3,local_34,0,*(undefined8 *)(*plVar3 + 0x1c0));
      if ((uVar1 & 1) != 0)
      goto System_Runtime_CompilerServices_Unsafe__Add<UIRenderDevice_AllocToUpdate>;
    }
    FUN_063cf4e0(&local_50,param_1,param_2,0);
    FUN_037e5318(param_1,&local_34,0,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x68));
    FUN_063cf530(&local_50,0);
    uVar1 = (**(code **)(*param_2 + 0x208))(param_2,*(undefined8 *)(*param_2 + 0x210));
    if (((uVar1 & 1) == 0) && ((char)param_1[0x16] == '\0')) {
      (**(code **)(*param_2 + 0x228))(param_2,param_3,local_34,*(undefined8 *)(*param_2 + 0x230));
    }
  }
  return;
}


