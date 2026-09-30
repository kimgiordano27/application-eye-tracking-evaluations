/*
FUNCTION_NAME: FUN_020d85f8
ENTRY_POINT: 020d85f8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_020d85f8(long *param_1,long *param_2,ulong param_3,ulong param_4)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_03780f9c & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Nullable<byte>_get_HasValue__);
    thunk_FUN_00d48444(StringLiteral_2487);
    thunk_FUN_00d48444(Method_System_Security_Cryptography_HMAC_set_Key__);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(PTR_DAT_033ead58);
    thunk_FUN_00d48444(StringLiteral_13048);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<CategoryButton>_get_Current__
                      );
    thunk_FUN_00d48444(StringLiteral_5238);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12,_T13>_var);
    thunk_FUN_00d48444(StringLiteral_14410);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<ParameterExpression,_LocalVariable>_set_Item__
                      );
    DAT_03780f9c = 1;
  }
  if (param_1 == (long *)0x0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar5 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar9 = thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_PointerEventBase<PointerCancelEvent>__ctor__
                              );
    FUN_016ec5b8(uVar5,uVar9,0);
    uVar9 = thunk_FUN_00d48444(OVRPlugin_OVRP_1_42_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,uVar9);
  }
  plVar3 = (long *)thunk_FUN_00d93c64(param_1,0);
  if (plVar3 == (long *)0x0) goto LAB_020d8954;
  uVar4 = (**(code **)(*plVar3 + 1000))(plVar3,*(undefined8 *)(*plVar3 + 0x3f0));
  if ((uVar4 & 1) != 0) {
    FUN_00ac2be8(param_1);
    param_2 = (long *)thunk_FUN_00d93c64(param_1,0);
    puVar6 = 
    Method_Mono_Globalization_Unicode_MSCompatUnicodeTable_<>c_<BuildTailoringTables>b__17_0__;
    goto LAB_020d89f4;
  }
  if (param_2 == (long *)0x0) goto LAB_020d8954;
  uVar4 = FUN_016ac334(param_2,0);
  puVar6 = 
  Method_System_Collections_Generic_Dictionary<string,_WitWebSocketClient_PubSubSubscription>_get_Keys__
  ;
  if (((uVar4 & 1) == 0) ||
     (uVar4 = (**(code **)(*param_2 + 0x318))(param_2,*(undefined8 *)(*param_2 + 800)),
     puVar2 = StringLiteral_14410,
     puVar6 = Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_11__,
     (uVar4 & 1) != 0)) goto LAB_020d89f4;
  if (((param_3 & 1) != 0) && ((param_4 & 1) == 0)) {
    uVar5 = FUN_016b2ca8(param_2,0);
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar7);
      lVar7 = *(long *)puVar2;
    }
    puVar6 = Method_System_Collections_Generic_List_Enumerator<CategoryButton>_get_Current__;
    lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar8 == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar7);
        lVar7 = *(long *)puVar2;
      }
      uVar9 = **(undefined8 **)(lVar7 + 0xb8);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
      if (lVar8 == 0) goto LAB_020d8954;
      FUN_012d239c(lVar8,uVar9,
                   *(undefined8 *)
                    System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12,_T13>_var,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar8;
    }
    uVar4 = FUN_010d75bc(uVar5,lVar8,*(undefined8 *)StringLiteral_13048);
    puVar6 = StringLiteral_302;
    if ((uVar4 & 1) != 0) {
      uVar5 = FUN_015f6780(*(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<ParameterExpression,_LocalVariable>_set_Item__
                           ,param_2,0);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar6);
      }
      FUN_02660dac(uVar5,0);
    }
  }
  if ((param_4 & 1) == 0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_033ead58 + 300);
    if (*(byte *)(*param_1 + 300) < bVar1) goto LAB_020d8838;
    plVar3 = param_1;
    if (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_033ead58) {
      plVar3 = (long *)0x0;
    }
  }
  else {
LAB_020d8838:
    plVar3 = (long *)0x0;
  }
  if (*(int *)(*(long *)StringLiteral_2487 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_020d8d20(param_2);
  puVar2 = Method_System_Security_Cryptography_HMAC_set_Key__;
  puVar6 = StringLiteral_10151;
  if ((uVar4 & 1) == 0) goto LAB_020d89f4;
  lVar7 = *(long *)Method_System_Security_Cryptography_HMAC_set_Key__;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar2;
  }
  puVar6 = Method_System_Nullable<byte>_get_HasValue__;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar7 == 0) {
LAB_020d8954:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(char *)(lVar7 + 0x10) == '\0') {
LAB_020d88f8:
    puVar6 = StringLiteral_5238;
    if ((param_4 & 1) != 0) {
      return 0;
    }
    FUN_0169d5f0(plVar3,0);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_0169ee5c(plVar3,0);
    lVar7 = FUN_017bd58c(uVar5,0);
    puVar6 = UnityEngine_GUISkin_TypeInfo;
  }
  else {
    lVar7 = *(long *)Method_System_Nullable<byte>_get_HasValue__;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *(long *)puVar6;
    }
    if (*(char *)(*(long *)(lVar7 + 0xb8) + 8) == '\0') goto LAB_020d88f8;
    uVar5 = FUN_0265e8e8(param_1,**(undefined8 **)
                                   (*(long *)
                                     System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                                   + 0xb8),0);
    lVar7 = FUN_0265e92c(uVar5,0);
    puVar6 = UnityEngine_GUISkin_TypeInfo;
  }
  UnityEngine_GUISkin_TypeInfo = puVar6;
  if (lVar7 != 0) {
    return lVar7;
  }
LAB_020d89f4:
  uVar5 = thunk_FUN_00d48444(puVar6);
  uVar5 = FUN_015f6780(uVar5,param_2,0);
  thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
  uVar9 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_017713a8(uVar9,uVar5,0);
  uVar5 = thunk_FUN_00d48444(OVRPlugin_OVRP_1_42_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar9,uVar5);
}


