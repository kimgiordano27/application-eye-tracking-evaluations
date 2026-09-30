/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_base_t_extended_status_info_set
ENTRY_POINT: 078f30ac
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_base_t_extended_status_info_set
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *unaff_x26;
  undefined8 in_stack_00000018;
  
  lVar9 = *(long *)(unaff_x19 + 10);
  lVar3 = thunk_FUN_03ac74bc(**(undefined8 **)(param_1 + 0x810));
  FUN_05f9f7c4(lVar3,*(undefined8 *)
                      UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo
              );
  uVar12 = *(undefined8 *)
            System_Net_Http_Headers_TryParseListDelegate<NameValueWithParametersHeaderValue>_TypeInfo
  ;
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar12 = FUN_0675ff58(uVar12,0);
  puVar1 = Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_05fa0540(lVar3,*(undefined8 *)System_Func<X509CertificateCollection>_TypeInfo,uVar12,
               *(undefined8 *)
                Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo);
  puVar2 = Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<string>_TypeInfo;
  uVar12 = FUN_0675ff58(*(undefined8 *)
                         Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<string>_TypeInfo
                        ,0);
  FUN_05fa0540(lVar3,*(undefined8 *)System_Func<TooltipEvent>_TypeInfo,uVar12,*(undefined8 *)puVar1)
  ;
  uVar12 = FUN_0675ff58(*(undefined8 *)puVar2,0);
  FUN_05fa0540(lVar3,*(undefined8 *)System_Func<VectorImageRenderInfo>_TypeInfo,uVar12,
               *(undefined8 *)puVar1);
  uVar12 = FUN_0675ff58(*(undefined8 *)puVar2,0);
  FUN_05fa0540(lVar3,*(undefined8 *)System_Func<uint>_TypeInfo,uVar12,*(undefined8 *)puVar1);
  uVar12 = FUN_0675ff58(*(undefined8 *)puVar2,0);
  FUN_05fa0540(lVar3,*(undefined8 *)System_Func<TransitionStartEvent>_TypeInfo,uVar12,
               *(undefined8 *)puVar1);
  *(long *)(unaff_x19 + 0xe) = lVar3;
  thunk_FUN_03afed3c(unaff_x19 + 0xe,lVar3);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar10 = *(undefined8 *)(unaff_x19 + 8);
  uVar12 = FUN_078f2cf4(lVar9);
  lVar3 = FUN_078d7afc(uVar10,uVar12,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar11 = *(long **)(lVar9 + 0x10);
  uVar12 = FUN_078ee88c(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar3 + 0x10),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar10 = FUN_078ee8a0(*(long *)(unaff_x19 + 0xc),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar4 = FUN_078ee8a8(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar9 + 0x18),lVar3,0);
  uVar6 = 10;
  if ((*(ulong *)(lVar3 + 0x18) & 0xff) != 0) {
    uVar6 = (undefined4)(*(ulong *)(lVar3 + 0x18) >> 0x20);
  }
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0(10);
  }
  lVar3 = *plVar11;
  uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
  uVar13 = *(undefined8 *)PTR_DAT_084c7fc0;
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo) {
        puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_078f32e4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_03ac43c4(plVar11,*(long *)
                                 UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo
                        ,0);
LAB_078f32e4:
  lVar3 = (*(code *)*puVar5)(plVar11,uVar13,uVar12,uVar10,uVar4,uVar6,puVar5[1]);
  if (lVar3 != 0) {
    in_stack_00000018 =
         FUN_058b71ec(lVar3,*(undefined8 *)
                             UnityEngine_Playables_ScriptPlayable<CinemachineShotPlayable>_TypeInfo)
    ;
    uVar7 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)
                          UnityEngine_Playables_ScriptPlayable<CinemachineMixer>_TypeInfo);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fe7a88(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar12 = FUN_0587c704(&stack0x00000018,
                            *(undefined8 *)
                             UnityEngine_Playables_ScriptPlayable<BasicPlayableBehaviour>_TypeInfo);
      uVar10 = FUN_0471a930(uVar12,*(undefined8 *)(unaff_x19 + 0xe),
                            *(undefined8 *)
                             System_Net_Http_Headers_TryParseListDelegate<EntityTagHeaderValue>_TypeInfo
                           );
      uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  System_Net_Http_Headers_TryParseListDelegate<NameValueHeaderValue>_TypeInfo
                                );
      FUN_05750c4c(uVar4,uVar12,uVar10,
                   *(undefined8 *)
                    System_Net_Http_Headers_TryParseListDelegate<MediaTypeWithQualityHeaderValue>_TypeInfo
                  );
      puVar1 = System_Net_Http_Headers_TryParseListDelegate<AuthenticationHeaderValue>_TypeInfo;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


