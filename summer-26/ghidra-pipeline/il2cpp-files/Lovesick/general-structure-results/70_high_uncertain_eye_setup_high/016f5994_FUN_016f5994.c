/*
FUNCTION_NAME: FUN_016f5994
ENTRY_POINT: 016f5994
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_016f5994(long param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  int local_38;
  int iStack_34;
  
  if ((DAT_037788b0 & 1) == 0) {
    thunk_FUN_00d48444(Sirenix_Serialization_WeakDelegateFormatter_TypeInfo);
    thunk_FUN_00d48444(System_Predicate<SubtitleManager_SubtitleDataObjectPair>_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<WavelengthPower>_Dispose__)
    ;
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_101__);
    thunk_FUN_00d48444(Oculus_Interaction_IGrabbable_TypeInfo);
    DAT_037788b0 = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0178310c(0xf,0);
  }
  if (param_2 < 0) {
LAB_016f5a48:
    FUN_017935a8(0xe,0x16,0);
  }
  else {
    if (param_1 == 0) goto LAB_016f5b94;
    if ((0 < param_2) && (*(int *)(param_1 + 0x18) <= param_2)) goto LAB_016f5a48;
  }
  if (param_3 < 0) {
    thunk_FUN_00d48444(StringLiteral_8570);
    uVar4 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar5 = thunk_FUN_00d48444(Method_System_Nullable<DefaultValueHandling>_GetValueOrDefault__);
    uVar7 = thunk_FUN_00d48444(StringLiteral_9047);
    FUN_016efd4c(uVar4,uVar5,uVar7);
    uVar5 = thunk_FUN_00d48444(
                              Method_System_Collections_Generic_Dictionary<Texture,_TextureId>_set_Item__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar4,uVar5);
  }
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) - param_3 < param_2) {
      FUN_017933b8(5,0xf,0);
    }
    puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_101__;
    if (param_3 == 0) {
      uVar4 = **(undefined8 **)
                (*(long *)
                  System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo +
                0xb8);
    }
    else {
      if (0x2aaaaaaa < param_3) {
        local_50 = CONCAT44(local_50._4_4_,0x2aaaaaaa);
        uVar4 = thunk_FUN_00d48444(
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  );
        uVar4 = thunk_FUN_00d61fa0(uVar4,&local_50);
        uVar5 = thunk_FUN_00d48444(
                                  Method_UnityEngine_InputSystem_LowLevel_InputStateHistory<__Il2CppFullySharedGenericStructType>__ctor__
                                  );
        uVar4 = FUN_015e14fc(uVar5,uVar4,0);
        thunk_FUN_00d48444(StringLiteral_8570);
        uVar5 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        uVar7 = thunk_FUN_00d48444(Method_System_Nullable<DefaultValueHandling>_GetValueOrDefault__)
        ;
        FUN_016efd4c(uVar5,uVar7,uVar4);
        uVar4 = thunk_FUN_00d48444(
                                  Method_System_Collections_Generic_Dictionary<Texture,_TextureId>_set_Item__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar5,uVar4);
      }
      local_50 = 0;
      uStack_48 = 0;
      local_38 = param_3;
      iStack_34 = param_2;
      FUN_011ea084(&local_50,param_1,&iStack_34,&local_38,
                   *(undefined8 *)Oculus_Interaction_IGrabbable_TypeInfo);
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = uStack_48;
      uVar4 = local_50;
      puVar1 = Sirenix_Serialization_WeakDelegateFormatter_TypeInfo;
      lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar6 == 0) {
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar3 = *(long *)puVar2;
        }
        uVar7 = **(undefined8 **)(lVar3 + 0xb8);
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (lVar6 == 0) goto LAB_016f5b94;
        FUN_013acc9c(lVar6,uVar7,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List_Enumerator<WavelengthPower>_Dispose__,0
                    );
        *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar6;
      }
      local_50 = uVar4;
      uStack_48 = uVar5;
      uVar4 = FUN_011437e4(param_3 * 3 + -1,&local_50,lVar6,
                           *(undefined8 *)
                            System_Predicate<SubtitleManager_SubtitleDataObjectPair>_TypeInfo);
    }
    return uVar4;
  }
LAB_016f5b94:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


