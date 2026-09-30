/*
FUNCTION_NAME: FUN_00e52894
ENTRY_POINT: 00e52894
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_00e52894(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  long *plStack_40;
  long local_38;
  
  local_38 = param_1;
  if ((DAT_03774d8d & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f5db0);
    thunk_FUN_00d48444(Oculus_Interaction_Input_Handedness_TypeInfo);
    thunk_FUN_00d48444(Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__);
    thunk_FUN_00d48444(StringLiteral_13673);
    thunk_FUN_00d48444(StringLiteral_8321);
    thunk_FUN_00d48444(
                      Method_Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<>c__DisplayClass24_0_<ShareAnchorsWithUser>b__0__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033f49b0);
    thunk_FUN_00d48444(StringLiteral_12098);
    DAT_03774d8d = 1;
  }
  plStack_40 = &local_38;
  local_48 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar1 = PTR_DAT_033f49b0;
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    lVar3 = *(long *)PTR_DAT_033f49b0;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar5 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar3);
        lVar3 = *(long *)puVar1;
      }
      uVar6 = **(undefined8 **)(lVar3 + 0xb8);
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_8321);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_012d239c(lVar5,uVar6,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>__ctor__,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar5;
    }
    uVar4 = FUN_010dca98(uVar4,lVar5,*(undefined8 *)PTR_DAT_033f5db0);
    lVar3 = FUN_010dfe04(uVar4,*(undefined8 *)Oculus_Interaction_Input_Handedness_TypeInfo);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01323390(lVar3,&local_78,
                 *(undefined8 *)
                  Method_Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<>c__DisplayClass24_0_<ShareAnchorsWithUser>b__0__
                );
    uStack_58 = uStack_70;
    local_60 = local_78;
    local_50 = local_68;
    *(undefined8 *)(local_38 + 0x38) = local_68;
    *(undefined8 *)(local_38 + 0x30) = uStack_70;
    *(undefined8 *)(local_38 + 0x28) = local_78;
    *(undefined4 *)(local_38 + 0x10) = 0xfffffffd;
    param_1 = local_38;
  }
  uVar2 = FUN_012b894c(param_1 + 0x28,
                       *(undefined8 *)Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__);
  if ((uVar2 & 1) == 0) {
    FUN_00e52bd0();
    uVar4 = 0;
    *(undefined8 *)(local_38 + 0x28) = 0;
    *(undefined8 *)(local_38 + 0x30) = 0;
    *(undefined8 *)(local_38 + 0x38) = 0;
  }
  else {
    lVar3 = FUN_00ac2e08(local_38 + 0x28,*(undefined8 *)StringLiteral_13673);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    *(undefined1 *)(lVar3 + 0xa1) = 1;
    FUN_00fde460(lVar3,0);
    uVar4 = FUN_02682ae0(DAT_028aa040,DAT_028aa13c,0);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_12098);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0268a094(uVar4,lVar3,0);
    uVar4 = 1;
    *(long *)(local_38 + 0x18) = lVar3;
    *(undefined4 *)(local_38 + 0x10) = 1;
  }
  return uVar4;
}


