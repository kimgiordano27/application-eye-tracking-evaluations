/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_evt_base_t
ENTRY_POINT: 078f4918
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_evt_base_t(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000018;
  
  if ((DAT_08987b66 & 1) == 0) {
    FUN_03a8a718(Meta_XR_ImmersiveDebugger_Manager_Tweak<bool>_TypeInfo);
    FUN_03a8a718(PTR_DAT_084963b8);
    FUN_03a8a718(PTR_DAT_08493900);
    FUN_03a8a718(Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo);
    FUN_03a8a718(
                UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo
                );
    FUN_03a8a718(UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudPresets>_TypeInfo);
    FUN_03a8a718(UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08491c28);
    FUN_03a8a718(PTR_DAT_08491c38);
    FUN_03a8a718(Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<string>_TypeInfo);
    FUN_03a8a718(System_Net_Http_Headers_TryParseDelegate<CacheControlHeaderValue>_TypeInfo);
    FUN_03a8a718(UnityEngine_Playables_ScriptPlayable<BasicPlayableBehaviour>_TypeInfo);
    FUN_03a8a718(UnityEngine_Playables_ScriptPlayable<CinemachineMixer>_TypeInfo);
    FUN_03a8a718(UnityEngine_Playables_ScriptPlayable<CinemachineShotPlayable>_TypeInfo);
    FUN_03a8a718(System_Func<TransitionEndEvent>_TypeInfo);
    FUN_03a8a718(System_Func<uint>_TypeInfo);
    FUN_03a8a718(PTR_DAT_084c82d0);
    DAT_08987b66 = 1;
  }
  puVar1 = PTR_DAT_08493900;
  in_stack_00000018 = 0;
  if (*param_1 == 0) {
    in_stack_00000018 = *(undefined8 *)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    lVar9 = *(long *)(param_1 + 10);
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)
                                UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudPresets>_TypeInfo
                              );
    FUN_05f9f7c4(lVar3,*(undefined8 *)
                        UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo
                );
    puVar2 = Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05fa0540(lVar3,*(undefined8 *)System_Func<TransitionEndEvent>_TypeInfo,0,
                 *(undefined8 *)
                  Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo);
    uVar12 = *(undefined8 *)
              Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<string>_TypeInfo;
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar12 = FUN_0675ff58(uVar12,0);
    FUN_05fa0540(lVar3,*(undefined8 *)System_Func<uint>_TypeInfo,uVar12,*(undefined8 *)puVar2);
    *(long *)(param_1 + 0x10) = lVar3;
    thunk_FUN_03afed3c(param_1 + 0x10,lVar3);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar11 = *(undefined8 *)(param_1 + 8);
    uVar12 = FUN_078f3610(lVar9);
    lVar3 = FUN_078d7afc(uVar11,uVar12,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar10 = *(long **)(lVar9 + 0x10);
    uVar12 = FUN_078f09ac(*(long *)(param_1 + 0xc),*(undefined8 *)(lVar3 + 0x10),0);
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar11 = FUN_078f09c0(*(long *)(param_1 + 0xc),0);
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar4 = FUN_078f09c8(*(long *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0xe),lVar3,0);
    uVar6 = 10;
    if ((*(ulong *)(lVar3 + 0x18) & 0xff) != 0) {
      uVar6 = (undefined4)(*(ulong *)(lVar3 + 0x18) >> 0x20);
    }
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0(10);
    }
    lVar3 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    uVar13 = *(undefined8 *)PTR_DAT_084c82d0;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo)
        {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_078f4bd8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_03ac43c4(plVar10,*(long *)
                                   UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo
                          ,0);
LAB_078f4bd8:
    lVar3 = (*(code *)*puVar5)(plVar10,uVar13,uVar12,uVar11,uVar4,uVar6,puVar5[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 =
         FUN_058b71ec(lVar3,*(undefined8 *)
                             UnityEngine_Playables_ScriptPlayable<CinemachineShotPlayable>_TypeInfo)
    ;
    uVar7 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)
                          UnityEngine_Playables_ScriptPlayable<CinemachineMixer>_TypeInfo);
    if ((uVar7 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x12) = in_stack_00000018;
      thunk_FUN_03afed3c(param_1 + 0x12,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fd4890(param_1 + 2,&stack0x00000018,param_1,
                   *(undefined8 *)Meta_XR_ImmersiveDebugger_Manager_Tweak<bool>_TypeInfo);
      return;
    }
  }
  uVar12 = FUN_0587c704(&stack0x00000018,
                        *(undefined8 *)
                         UnityEngine_Playables_ScriptPlayable<BasicPlayableBehaviour>_TypeInfo);
  FUN_078e9f90(uVar12,*(undefined8 *)(param_1 + 0x10),0);
  uVar11 = thunk_FUN_03ac74bc(*(undefined8 *)
                               System_Net_Http_Headers_TryParseDelegate<CacheControlHeaderValue>_TypeInfo
                             );
  FUN_078d8188(uVar11,uVar12,0);
  puVar2 = PTR_DAT_084963b8;
  *param_1 = -2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  thunk_FUN_03afed3c(param_1 + 0x10,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(param_1 + 2,uVar11,*(undefined8 *)puVar2);
  return;
}


