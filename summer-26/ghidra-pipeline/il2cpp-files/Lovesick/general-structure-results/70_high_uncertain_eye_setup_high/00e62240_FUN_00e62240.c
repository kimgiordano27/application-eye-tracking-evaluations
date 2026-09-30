/*
FUNCTION_NAME: FUN_00e62240
ENTRY_POINT: 00e62240
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_00e62240(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if ((DAT_03774efc & 1) == 0) {
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(OVR_OpenVR_CVRTrackedCamera_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f60a0);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ForceAsyncAwaiter,_CryptoStream_<ReadAsyncInternal>d__37>__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_104_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_ByReference<__Il2CppFullySharedGenericType>_get_Value__);
    DAT_03774efc = 1;
  }
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ForceAsyncAwaiter,_CryptoStream_<ReadAsyncInternal>d__37>__
  ;
  puVar1 = PTR_DAT_033f60a0;
  if (*(char *)(param_1 + 0x21) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar3 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                      (*(long *)(param_1 + 0x78),0);
    uVar3 = FUN_010759a8(0,*(undefined4 *)(param_1 + 0x6c),0,*(undefined4 *)(param_1 + 100),uVar3,0,
                         0);
    lVar4 = FUN_0114db20(uVar3,6,*(undefined8 *)puVar2);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar5 != 0) &&
       (UnityEngine_Rendering_ListPool_<>c<__Il2CppFullySharedGenericType>___ctor
                  (lVar5,param_1,*(undefined8 *)OVR_OpenVR_CVRTrackedCamera_TypeInfo,0),
       puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo, lVar4 != 0))
    {
      *(long *)(lVar4 + 0x80) = lVar5;
      uVar3 = *(undefined8 *)(param_1 + 0x80);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar6 = FUN_0268b5e4(uVar3,0);
      if ((uVar6 & 1) != 0) {
        if (*(long *)(param_1 + 0x80) == 0) goto LAB_00e62430;
        uVar3 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                          (*(long *)(param_1 + 0x80),0);
        uVar3 = FUN_010759a8(0,*(undefined4 *)(param_1 + 0x6c),0,*(undefined4 *)(param_1 + 100),
                             uVar3,0,0);
        FUN_0114db20(uVar3,6,*(undefined8 *)puVar2);
      }
      *(undefined1 *)(param_1 + 0x21) = 0;
      lVar4 = FUN_00ed56f0(0);
      if (lVar4 != 0) {
        lVar4 = *(long *)(lVar4 + 0x40);
        uVar3 = FUN_015f5b28(*(undefined8 *)(param_1 + 0x18),
                             *(undefined8 *)
                              Method_System_ByReference<__Il2CppFullySharedGenericType>_get_Value__,
                             0);
        if (lVar4 != 0) {
          FUN_00fdb3d8(lVar4,uVar3,0);
          lVar4 = FUN_00ed56f0(0);
          if (lVar4 != 0) {
            lVar4 = *(long *)(lVar4 + 0x40);
            uVar3 = FUN_015f5b28(*(undefined8 *)(param_1 + 0x18),
                                 *(undefined8 *)OVRPlugin_OVRP_1_104_0_TypeInfo,0);
            if (lVar4 != 0) {
              FUN_00fcbec8(lVar4,uVar3,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_00e62430:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


