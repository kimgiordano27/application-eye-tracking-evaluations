/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_GetSpaceUuid
ENTRY_POINT: 056a3474
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


long OVRPlugin_OVRP_1_74_0__ovrp_GetSpaceUuid(void)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x22;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  plVar5 = *(long **)(unaff_x22 + 0x468);
                    /* try { // try from 056a347c to 057a35e3 has its CatchHandler @ 056a347c
                       catch() { ... } // from try @ 056a347c with catch @ 056a347c
                       catch() { ... } // from try @ 056a36a8 with catch @ 056a347c
                       catch() { ... } // from try @ 056a36dc with catch @ 056a347c
                       catch() { ... } // from try @ 056a37e4 with catch @ 056a347c
                       catch() { ... } // from try @ 056a3844 with catch @ 056a347c
                       catch() { ... } // from try @ 056a389c with catch @ 056a347c */
  if ((*(byte *)(unaff_x20 + 0x8ba) & 1) == 0) {
    FUN_02d965b8(System_Runtime_CompilerServices_StrongBox<int>_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0d468);
    FUN_02d965b8(System_Runtime_CompilerServices_StrongBox<object>_TypeInfo);
    FUN_02d965b8(Newtonsoft_Json_Utilities_StructMultiKey<object,_object>_TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<Align>,_Align>_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x8ba) = 1;
  }
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  uStack0000000000000004 = 0;
  FUN_056a9f68(&stack0x00000008);
  uStack0000000000000004 = 0;
  auVar6 = OVRPlugin_<>c__<_cctor>b__807_26(&stack0x00000008,0);
  if (*(int *)(*plVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  iVar2 = FUN_056a362c(auVar6._0_8_,auVar6._8_8_,0,0,&stack0x00000004);
  if (iVar2 == 0xc) {
    lVar3 = FUN_02d966a4(*(undefined8 *)
                          UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<Align>,_Align>_TypeInfo
                         ,uStack0000000000000004);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      if (*(int *)(lVar3 + 0x18) != 0) {
        lVar4 = lVar3 + 0x20;
      }
    }
    auVar6 = OVRPlugin_<>c__<_cctor>b__807_26(&stack0x00000008,0);
    uVar1 = uStack0000000000000004;
    if (*(int *)(*plVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    iVar2 = FUN_056a362c(auVar6._0_8_,auVar6._8_8_,lVar4,uVar1,&stack0x00000004);
    if (iVar2 != 0) {
      lVar3 = 0;
    }
  }
  else {
    lVar3 = 0;
    if (iVar2 == 0) {
      lVar4 = *(long *)System_Runtime_CompilerServices_StrongBox<int>_TypeInfo;
      lVar3 = *(long *)(lVar4 + 0x38);
      if (lVar3 == 0) {
        FUN_02dcfd74(lVar4);
        lVar3 = *(long *)(lVar4 + 0x38);
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02dcfd18();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02dcfd18();
      }
      lVar3 = **(long **)(lVar3 + 0xb8);
    }
  }
  return lVar3;
}


