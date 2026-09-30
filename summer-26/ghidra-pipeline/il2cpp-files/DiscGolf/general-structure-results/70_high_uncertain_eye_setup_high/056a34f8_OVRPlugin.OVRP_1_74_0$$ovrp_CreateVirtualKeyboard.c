/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_CreateVirtualKeyboard
ENTRY_POINT: 056a34f8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_3
*/


long OVRPlugin_OVRP_1_74_0__ovrp_CreateVirtualKeyboard(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  undefined1 auVar4 [16];
  undefined8 in_stack_00000000;
  
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  iVar1 = FUN_056a362c();
  if (iVar1 == 0xc) {
    lVar2 = FUN_02d966a4(*(undefined8 *)
                          UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<Align>,_Align>_TypeInfo
                         ,in_stack_00000000._4_4_);
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      if (*(int *)(lVar2 + 0x18) != 0) {
        lVar3 = lVar2 + 0x20;
      }
    }
    auVar4 = OVRPlugin_<>c__<_cctor>b__807_26(&stack0x00000008,0);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    iVar1 = FUN_056a362c(auVar4._0_8_,auVar4._8_8_,lVar3,in_stack_00000000._4_4_,
                         (long)&stack0x00000000 + 4);
    if (iVar1 != 0) {
      lVar2 = 0;
    }
  }
  else {
    lVar2 = 0;
    if (iVar1 == 0) {
      lVar3 = *(long *)System_Runtime_CompilerServices_StrongBox<int>_TypeInfo;
      lVar2 = *(long *)(lVar3 + 0x38);
      if (lVar2 == 0) {
        FUN_02dcfd74(lVar3);
        lVar2 = *(long *)(lVar3 + 0x38);
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02dcfd18();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      lVar2 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02dcfd18();
      }
      lVar2 = **(long **)(lVar2 + 0xb8);
    }
  }
  return lVar2;
}


