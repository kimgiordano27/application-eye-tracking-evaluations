/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_buddy_contact_t_priority_set
ENTRY_POINT: 078f4f2c
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_buddy_contact_t_priority_set(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  int *piVar9;
  int *unaff_x19;
  long unaff_x20;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000018;
  
  FUN_03a8a718(Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo);
                    /* try { // try from 078f4f40 to 079f4f47 has its CatchHandler @ 078f505c */
  FUN_03a8a718(UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo)
  ;
  FUN_03a8a718(UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudPresets>_TypeInfo);
  FUN_03a8a718(UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo);
                    /* try { // try from 078f4f60 to 079f4f87 has its CatchHandler @ 078f5060 */
  FUN_03a8a718(PTR_DAT_08491c28);
  FUN_03a8a718(PTR_DAT_08491c38);
  FUN_03a8a718(Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<string>_TypeInfo);
  FUN_03a8a718(System_Net_Http_Headers_TryParseDelegate<CacheControlHeaderValue>_TypeInfo);
  FUN_03a8a718(UnityEngine_Playables_ScriptPlayable<BasicPlayableBehaviour>_TypeInfo);
                    /* try { // try from 078f4f98 to 079f4f9b has its CatchHandler @ 078f5058 */
                    /* try { // try from 078f4f9c to 079f4f9f has its CatchHandler @ 078f5054 */
  FUN_03a8a718(UnityEngine_Playables_ScriptPlayable<CinemachineMixer>_TypeInfo);
  FUN_03a8a718(UnityEngine_Playables_ScriptPlayable<CinemachineShotPlayable>_TypeInfo);
                    /* try { // try from 078f4fb0 to 079f4fb7 has its CatchHandler @ 078f5014 */
  FUN_03a8a718(PTR_DAT_084c82e8);
  FUN_03a8a718(System_Func<TooltipEvent>_TypeInfo);
  FUN_03a8a718(System_Func<uint>_TypeInfo);
  FUN_03a8a718(System_Func<VectorImageRenderInfo>_TypeInfo);
  FUN_03a8a718(System_Func<X509CertificateCollection>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xb68) = 1;
  puVar1 = PTR_DAT_08493900;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x12);
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar10 = *(long *)(unaff_x19 + 10);
    lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudPresets>_TypeInfo
                              );
    FUN_05f9f7c4(lVar4,*(undefined8 *)
                        UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo
                );
    puVar2 = Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<X509CertificateCollection>_TypeInfo,0,
                 *(undefined8 *)
                  Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo);
    puVar3 = Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<string>_TypeInfo;
    uVar13 = *(undefined8 *)
              Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<string>_TypeInfo;
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar13 = FUN_0675ff58(uVar13,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<TooltipEvent>_TypeInfo,uVar13,
                 *(undefined8 *)puVar2);
    uVar13 = FUN_0675ff58(*(undefined8 *)puVar3,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<VectorImageRenderInfo>_TypeInfo,uVar13,
                 *(undefined8 *)puVar2);
    uVar13 = FUN_0675ff58(*(undefined8 *)puVar3,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<uint>_TypeInfo,uVar13,*(undefined8 *)puVar2);
    *(long *)(unaff_x19 + 0x10) = lVar4;
    thunk_FUN_03afed3c(unaff_x19 + 0x10,lVar4);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar12 = *(undefined8 *)(unaff_x19 + 8);
    uVar13 = FUN_078f3610(lVar10);
    lVar4 = FUN_078d7afc(uVar12,uVar13,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar11 = *(long **)(lVar10 + 0x10);
    uVar13 = FUN_078f0fa8(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar4 + 0x10),0);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar12 = FUN_078f0fbc(*(long *)(unaff_x19 + 0xc),0);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar5 = FUN_078f0fd0(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x19 + 0xe),lVar4,0);
    uVar7 = 10;
    if ((*(ulong *)(lVar4 + 0x18) & 0xff) != 0) {
      uVar7 = (undefined4)(*(ulong *)(lVar4 + 0x18) >> 0x20);
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0(10);
    }
    lVar4 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar14 = *(undefined8 *)PTR_DAT_084c82e8;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo)
        {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_078f520c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_03ac43c4(plVar11,*(long *)
                                   UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo
                          ,0);
LAB_078f520c:
    lVar4 = (*(code *)*puVar6)(plVar11,uVar14,uVar13,uVar12,uVar5,uVar7,puVar6[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 =
         FUN_058b71ec(lVar4,*(undefined8 *)
                             UnityEngine_Playables_ScriptPlayable<CinemachineShotPlayable>_TypeInfo)
    ;
    uVar8 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)
                          UnityEngine_Playables_ScriptPlayable<CinemachineMixer>_TypeInfo);
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fd4ad8(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  uVar13 = FUN_0587c704(&stack0x00000018,
                        *(undefined8 *)
                         UnityEngine_Playables_ScriptPlayable<BasicPlayableBehaviour>_TypeInfo);
  FUN_078e9f90(uVar13,*(undefined8 *)(unaff_x19 + 0x10),0);
  uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)
                               System_Net_Http_Headers_TryParseDelegate<CacheControlHeaderValue>_TypeInfo
                             );
  FUN_078d8188(uVar12,uVar13,0);
  puVar2 = PTR_DAT_084963b8;
  *unaff_x19 = -2;
  unaff_x19[0x10] = 0;
  unaff_x19[0x11] = 0;
  thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,uVar12,*(undefined8 *)puVar2);
  return;
}


