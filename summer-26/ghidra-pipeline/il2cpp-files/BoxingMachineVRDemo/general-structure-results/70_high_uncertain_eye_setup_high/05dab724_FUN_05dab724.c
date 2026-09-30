/*
FUNCTION_NAME: FUN_05dab724
ENTRY_POINT: 05dab724
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_05dab724(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  
  puVar8 = 
  Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtrUnchecked__
  ;
  puVar7 = Method_System_ReadOnlySpan<ulong>_GetPinnableReference__;
  puVar6 = Method_System_ReadOnlySpan<ResourceHandle>_get_Length__;
  puVar5 = PTR_DAT_0676c6d8;
  puVar4 = PTR_DAT_0676c6d0;
  puVar3 = PTR_DAT_06769ac8;
  puVar2 = PTR_DAT_06769ab8;
  puVar1 = PTR_DAT_06763330;
  if ((DAT_06b82f53 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0676c6d0);
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeMemoryPtr__
                );
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_get_index__
                );
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_get_owner__
                );
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_get_previous__
                );
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtrUnchecked__
                );
    FUN_02d6084c(PTR_DAT_06769ac8);
    FUN_02d6084c(Method_System_ReadOnlySpan<ResourceHandle>_get_Length__);
    FUN_02d6084c(PTR_DAT_0676c6d8);
    FUN_02d6084c(Method_System_ReadOnlySpan<ulong>_GetPinnableReference__);
    FUN_02d6084c(PTR_DAT_06763330);
    FUN_02d6084c(Method_System_ReadOnlySpan<ulong>_get_Length__);
    FUN_02d6084c(Method_System_ReadOnlySpan<OVRPlugin_Bool>_GetPinnableReference__);
    FUN_02d6084c(PTR_DAT_06769ab8);
    FUN_02d6084c(Method_System_ReadOnlySpan<OVRPlugin_Bool>_get_Length__);
    FUN_02d6084c(Method_System_ReadOnlySpan<OVRPlugin_DynamicObjectClass>_get_Length__);
    DAT_06b82f53 = 1;
  }
  uVar9 = FUN_035d2028(param_1,*(undefined8 *)puVar1,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x90) = uVar9;
  thunk_FUN_02dd37b4();
  uVar9 = FUN_035d2448(0,param_1,*(undefined8 *)puVar2,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x98) = uVar9;
  thunk_FUN_02dd37b4();
  uVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
  FUN_04d61e54(uVar9,param_1,*(undefined8 *)puVar8,0);
  lVar10 = FUN_035d2be4(param_1,*(undefined8 *)puVar7,uVar9,*(undefined8 *)puVar5);
  puVar2 = 
  Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_get_previous__;
  puVar1 = Method_System_ReadOnlySpan<OVRPlugin_DynamicObjectClass>_get_Length__;
  if (lVar10 != 0) {
    uVar9 = FUN_05dc064c(lVar10,0);
    *(undefined8 *)(param_1 + 0xa0) = uVar9;
    thunk_FUN_02dd37b4();
    uVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
    FUN_04d61e54(uVar9,param_1,*(undefined8 *)puVar2,0);
    lVar10 = FUN_035d2be4(param_1,*(undefined8 *)puVar1,uVar9,*(undefined8 *)puVar5);
    puVar2 = 
    Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeMemoryPtr__
    ;
    puVar1 = Method_System_ReadOnlySpan<OVRPlugin_Bool>_get_Length__;
    if (lVar10 != 0) {
      uVar9 = FUN_05dc064c(lVar10,0);
      *(undefined8 *)(param_1 + 0xa8) = uVar9;
      thunk_FUN_02dd37b4();
      uVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
      FUN_04d61e54(uVar9,param_1,*(undefined8 *)puVar2,0);
      lVar10 = FUN_035d2be4(param_1,*(undefined8 *)puVar1,uVar9,*(undefined8 *)puVar5);
      puVar2 = 
      Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_get_index__;
      puVar1 = Method_System_ReadOnlySpan<ulong>_get_Length__;
      if (lVar10 != 0) {
        uVar9 = FUN_05dc064c(lVar10,0);
        *(undefined8 *)(param_1 + 0xb0) = uVar9;
        thunk_FUN_02dd37b4();
        uVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
        FUN_04d61e54(uVar9,param_1,*(undefined8 *)puVar2,0);
        lVar10 = FUN_035d2be4(param_1,*(undefined8 *)puVar1,uVar9,*(undefined8 *)puVar5);
        puVar2 = 
        Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_get_owner__;
        puVar1 = Method_System_ReadOnlySpan<OVRPlugin_Bool>_GetPinnableReference__;
        if (lVar10 != 0) {
          uVar9 = FUN_05dc064c(lVar10,0);
          *(undefined8 *)(param_1 + 0xb8) = uVar9;
          thunk_FUN_02dd37b4();
          uVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
          FUN_04d61e54(uVar9,param_1,*(undefined8 *)puVar2,0);
          lVar10 = FUN_035d2be4(param_1,*(undefined8 *)puVar1,uVar9,*(undefined8 *)puVar5);
          if (lVar10 != 0) {
            uVar9 = FUN_05dc064c(lVar10,0);
            puVar11 = (undefined8 *)(param_1 + 0xc0);
            *puVar11 = uVar9;
            thunk_FUN_02dd37b4(puVar11,uVar9);
            thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0x90),
                               *(undefined8 *)(param_1 + 0xa0),0);
            thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0x98),
                               *(undefined8 *)(param_1 + 0xa0),0);
            thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0x90),
                               *(undefined8 *)(param_1 + 0xa8),0);
            thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0x98),
                               *(undefined8 *)(param_1 + 0xa8),0);
            thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0x90),
                               *(undefined8 *)(param_1 + 0xb0),0);
            thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0x98),
                               *(undefined8 *)(param_1 + 0xb0),0);
            thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0x90),
                               *(undefined8 *)(param_1 + 0xb8),0);
            thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0x98),
                               *(undefined8 *)(param_1 + 0xb8),0);
            thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0x90),*puVar11,0);
            thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0x98),*puVar11,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


