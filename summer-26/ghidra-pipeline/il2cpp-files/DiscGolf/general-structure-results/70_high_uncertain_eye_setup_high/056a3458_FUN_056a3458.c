/*
FUNCTION_NAME: FUN_056a3458
ENTRY_POINT: 056a3458
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_056a3458(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_06a0d468;
  if ((DAT_06dbc8ba & 1) == 0) {
    FUN_02d965b8(System_Runtime_CompilerServices_StrongBox<int>_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0d468);
    FUN_02d965b8(System_Runtime_CompilerServices_StrongBox<object>_TypeInfo);
    FUN_02d965b8(Newtonsoft_Json_Utilities_StructMultiKey<object,_object>_TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<Align>,_Align>_TypeInfo);
    DAT_06dbc8ba = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_4c = 0;
  FUN_056a9f68(&local_48,param_1,2,0);
  local_4c = 0;
  auVar6 = OVRPlugin_<>c__<_cctor>b__807_26(&local_48,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  iVar3 = FUN_056a362c(auVar6._0_8_,auVar6._8_8_,0,0,&local_4c);
  if (iVar3 == 0xc) {
    lVar4 = FUN_02d966a4(*(undefined8 *)
                          UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<Align>,_Align>_TypeInfo
                         ,local_4c);
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      if (*(int *)(lVar4 + 0x18) != 0) {
        lVar5 = lVar4 + 0x20;
      }
    }
    auVar6 = OVRPlugin_<>c__<_cctor>b__807_26(&local_48,0);
    uVar2 = local_4c;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    iVar3 = FUN_056a362c(auVar6._0_8_,auVar6._8_8_,lVar5,uVar2,&local_4c);
    if (iVar3 != 0) {
      lVar4 = 0;
    }
  }
  else {
    lVar4 = 0;
    if (iVar3 == 0) {
      lVar5 = *(long *)System_Runtime_CompilerServices_StrongBox<int>_TypeInfo;
      lVar4 = *(long *)(lVar5 + 0x38);
      if (lVar4 == 0) {
        FUN_02dcfd74(lVar5);
        lVar4 = *(long *)(lVar5 + 0x38);
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02dcfd18();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02dcfd18();
      }
      lVar4 = **(long **)(lVar4 + 0xb8);
    }
  }
  return lVar4;
}


