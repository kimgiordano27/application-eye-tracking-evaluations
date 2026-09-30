/*
FUNCTION_NAME: FUN_01f80014
ENTRY_POINT: 01f80014
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_01f80014(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  
  if ((DAT_0293de22 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027bc8f8);
    thunk_FUN_01279b34(PTR_DAT_027baa48);
    thunk_FUN_01279b34(PTR_DAT_027b32e0);
    DAT_0293de22 = 1;
  }
  uVar4 = (**(code **)(*param_1 + 0x498))(param_1,*(undefined8 *)(*param_1 + 0x4a0));
  if ((uVar4 >> 0xd & 1) == 0) {
    plVar5 = (long *)(**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar6 = FUN_01f80150();
    puVar3 = PTR_DAT_027bc8f8;
    puVar2 = PTR_DAT_027baa48;
    puVar1 = PTR_DAT_027b32e0;
    plVar7 = (long *)(uVar6 & 1);
    while (plVar7 != (long *)0x0) {
      while( true ) {
        uVar8 = *(undefined8 *)puVar3;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        plVar7 = (long *)FUN_01f7d8a0(uVar8);
        if (plVar5 == plVar7) goto OVRPlugin__GetPassthroughCapabilityFlags;
        uVar8 = *(undefined8 *)puVar2;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        plVar7 = (long *)FUN_01f7d8a0(uVar8);
        if (plVar5 == plVar7) goto OVRPlugin__GetPassthroughCapabilityFlags;
        plVar5 = (long *)(**(code **)(*plVar5 + 0x7f8))(plVar5,*(undefined8 *)(*plVar5 + 0x800));
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) break;
        if (plVar5 == (long *)0x0) goto LAB_01f80130;
      }
      thunk_FUN_01220628(*(long *)puVar1);
      plVar7 = plVar5;
    }
LAB_01f80130:
    uVar8 = 0;
  }
  else {
OVRPlugin__GetPassthroughCapabilityFlags:
    uVar8 = 1;
  }
  return uVar8;
}


