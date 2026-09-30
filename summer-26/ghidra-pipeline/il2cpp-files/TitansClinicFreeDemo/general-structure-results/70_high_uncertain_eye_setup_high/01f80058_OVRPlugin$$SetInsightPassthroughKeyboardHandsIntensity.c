/*
FUNCTION_NAME: OVRPlugin$$SetInsightPassthroughKeyboardHandsIntensity
ENTRY_POINT: 01f80058
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined8 OVRPlugin__SetInsightPassthroughKeyboardHandsIntensity(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 in_w8;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  
  *(undefined1 *)(unaff_x20 + 0xe22) = in_w8;
  uVar4 = (**(code **)(*unaff_x19 + 0x498))();
  if ((uVar4 >> 0xd & 1) == 0) {
    plVar5 = (long *)(**(code **)(*unaff_x19 + 0x308))();
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


