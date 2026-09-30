/*
FUNCTION_NAME: RopeSweepCut$$OnDestroy
ENTRY_POINT: 00e61f08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void RopeSweepCut__OnDestroy(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_03774efb & 1) == 0) {
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1120);
    thunk_FUN_00d48444(PTR_DAT_033f60a0);
    thunk_FUN_00d48444(Method_System_Guid_StringToInt__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ForceAsyncAwaiter,_CryptoStream_<ReadAsyncInternal>d__37>__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_104_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_ByReference<__Il2CppFullySharedGenericType>_get_Value__);
    DAT_03774efb = 1;
  }
  if (*(char *)(param_1 + 0x21) != '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_010030f0(*(long *)(param_1 + 0x88),0);
  }
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ForceAsyncAwaiter,_CryptoStream_<ReadAsyncInternal>d__37>__
  ;
  puVar1 = PTR_DAT_033f60a0;
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar4 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                      (*(long *)(param_1 + 0x78),0);
    fVar8 = 1.0;
    fVar7 = fVar8;
    if (*(char *)(param_1 + 0x70) != '\0') {
      fVar7 = -1.0;
    }
    uVar4 = FUN_010759a8(0,-(*(float *)(param_1 + 0x68) * fVar7),0,*(undefined4 *)(param_1 + 100),
                         uVar4,0,0);
    uVar4 = FUN_0114db20(uVar4,6,*(undefined8 *)puVar2);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar3 = Method_System_Guid_StringToInt__;
    puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    if (lVar5 != 0) {
      UnityEngine_Rendering_ListPool_<>c<__Il2CppFullySharedGenericType>___ctor
                (lVar5,param_1,*(undefined8 *)StringLiteral_1120,0);
      FUN_0114d2b8(uVar4,lVar5,*(undefined8 *)puVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x80);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar6 = FUN_0268b5e4(uVar4,0);
      if ((uVar6 & 1) != 0) {
        if (*(long *)(param_1 + 0x80) == 0) goto LAB_00e62150;
        uVar4 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                          (*(long *)(param_1 + 0x80),0);
        if (*(char *)(param_1 + 0x70) != '\0') {
          fVar8 = -1.0;
        }
        uVar4 = FUN_010759a8(0,*(float *)(param_1 + 0x68) * fVar8,0,*(undefined4 *)(param_1 + 100),
                             uVar4,0,0);
        FUN_0114db20(uVar4,6,*(undefined8 *)puVar2);
      }
      *(undefined1 *)(param_1 + 0x21) = 1;
      lVar5 = FUN_00ed56f0(0);
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + 0x40);
        uVar4 = FUN_015f5b28(*(undefined8 *)(param_1 + 0x18),
                             *(undefined8 *)OVRPlugin_OVRP_1_104_0_TypeInfo,0);
        if (lVar5 != 0) {
          FUN_00fdb3d8(lVar5,uVar4,0);
          lVar5 = FUN_00ed56f0(0);
          if (lVar5 != 0) {
            lVar5 = *(long *)(lVar5 + 0x40);
            uVar4 = FUN_015f5b28(*(undefined8 *)(param_1 + 0x18),
                                 *(undefined8 *)
                                  Method_System_ByReference<__Il2CppFullySharedGenericType>_get_Value__
                                 ,0);
            if (lVar5 != 0) {
              FUN_00fcbec8(lVar5,uVar4,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_00e62150:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


