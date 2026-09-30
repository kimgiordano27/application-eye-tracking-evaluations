/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_base_t_as_vx_resp_aux_set_render_device
ENTRY_POINT: 078f1a6c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_aux_set_render_device
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  ulong uVar9;
  int *piVar10;
  int *unaff_x19;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 in_stack_00000018;
  
                    /* catch() { ... } // from try @ 078f1a5c with catch @ 078f1a6c */
  FUN_03a8a718();
                    /* try { // try from 078f1a74 to 079f1a7b has its CatchHandler @ 078f1b3c */
  FUN_03a8a718(Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<bool>_TypeInfo);
                    /* try { // try from 078f1a7c to 079f1a8f has its CatchHandler @ 078f1028 */
  FUN_03a8a718(Normal_Realtime_Timeline_TimelineInterpolator<Rigidbody2DPhysicsBodyFrame>_TypeInfo);
                    /* try { // try from 078f1a90 to 079f1aa7 has its CatchHandler @ 078f1b2c */
  FUN_03a8a718(Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<float>_TypeInfo);
  FUN_03a8a718(Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo);
                    /* try { // try from 078f1aa8 to 079f1b1b has its CatchHandler @ 078f1028 */
  FUN_03a8a718(UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo)
  ;
  FUN_03a8a718(UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudPresets>_TypeInfo);
  FUN_03a8a718(UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo);
  FUN_03a8a718(PTR_DAT_08491c28);
  FUN_03a8a718(PTR_DAT_08491c38);
  FUN_03a8a718(Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<string>_TypeInfo);
  FUN_03a8a718(Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>_TypeInfo);
  FUN_03a8a718(Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>_TypeInfo);
  FUN_03a8a718(System_Runtime_CompilerServices_TrueReadOnlyCollection<Expression>_TypeInfo);
  FUN_03a8a718(UnityEngine_Playables_ScriptPlayable<BasicPlayableBehaviour>_TypeInfo);
  FUN_03a8a718(UnityEngine_Playables_ScriptPlayable<CinemachineMixer>_TypeInfo);
  FUN_03a8a718(UnityEngine_Playables_ScriptPlayable<CinemachineShotPlayable>_TypeInfo);
  FUN_03a8a718(PTR_DAT_084c82e0);
  FUN_03a8a718(System_Func<TooltipEvent>_TypeInfo);
  FUN_03a8a718(System_Func<uint>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_List<HVRHandGrabber>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xb4e) = 1;
  puVar2 = Normal_Realtime_Timeline_TimelineInterpolator<Rigidbody2DPhysicsBodyFrame>_TypeInfo;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar11 = *(long *)(unaff_x19 + 10);
    lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudPresets>_TypeInfo
                              );
    FUN_05f9f7c4(lVar4,*(undefined8 *)
                        UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo
                );
    uVar14 = *(undefined8 *)
              Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<float>_TypeInfo;
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar14 = FUN_0675ff58(uVar14,0);
    puVar1 = Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05fa0540(lVar4,*(undefined8 *)System_Collections_Generic_List<HVRHandGrabber>_TypeInfo,
                 uVar14,*(undefined8 *)
                         Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo
                );
    puVar3 = Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<string>_TypeInfo;
    uVar14 = FUN_0675ff58(*(undefined8 *)
                           Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<string>_TypeInfo
                          ,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<TooltipEvent>_TypeInfo,uVar14,
                 *(undefined8 *)puVar1);
    uVar14 = FUN_0675ff58(*(undefined8 *)puVar3,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<uint>_TypeInfo,uVar14,*(undefined8 *)puVar1);
    *(long *)(unaff_x19 + 0xe) = lVar4;
    thunk_FUN_03afed3c(unaff_x19 + 0xe,lVar4);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar12 = *(undefined8 *)(unaff_x19 + 8);
    uVar14 = FUN_078f15b8(lVar11);
    lVar4 = FUN_078d7afc(uVar12,uVar14);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar13 = *(long **)(lVar11 + 0x10);
    uVar14 = FUN_065c0764(*(undefined8 *)(lVar4 + 0x10),
                          *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x20),0);
    lVar5 = *(long *)(unaff_x19 + 0xc);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lVar5 + 0x18) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = FUN_078ec078();
      lVar5 = *(long *)(unaff_x19 + 0xc);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    uVar6 = FUN_078ec524(lVar5,*(undefined8 *)(lVar11 + 0x18),lVar4);
    uVar8 = 10;
    if ((*(ulong *)(lVar4 + 0x18) & 0xff) != 0) {
      uVar8 = (undefined4)(*(ulong *)(lVar4 + 0x18) >> 0x20);
    }
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0(10);
    }
    lVar4 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar15 = *(undefined8 *)PTR_DAT_084c82e0;
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo)
        {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_078f1d74;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_03ac43c4(plVar13,*(long *)
                                   UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo
                          ,0);
LAB_078f1d74:
    lVar4 = (*(code *)*puVar7)(plVar13,uVar15,uVar14,uVar12,uVar6,uVar8,puVar7[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 =
         FUN_058b71ec(lVar4,*(undefined8 *)
                             UnityEngine_Playables_ScriptPlayable<CinemachineShotPlayable>_TypeInfo)
    ;
    uVar9 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)
                          UnityEngine_Playables_ScriptPlayable<CinemachineMixer>_TypeInfo);
    if ((uVar9 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ff2628(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  uVar14 = FUN_0587c704(&stack0x00000018,
                        *(undefined8 *)
                         UnityEngine_Playables_ScriptPlayable<BasicPlayableBehaviour>_TypeInfo);
  uVar12 = FUN_0471a930(uVar14,*(undefined8 *)(unaff_x19 + 0xe),
                        *(undefined8 *)
                         Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>_TypeInfo
                       );
  uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                              System_Runtime_CompilerServices_TrueReadOnlyCollection<Expression>_TypeInfo
                            );
  FUN_05750c4c(uVar6,uVar14,uVar12,
               *(undefined8 *)
                Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>_TypeInfo);
  puVar1 = Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<bool>_TypeInfo;
  *unaff_x19 = -2;
  unaff_x19[0xe] = 0;
  unaff_x19[0xf] = 0;
  thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,uVar6,*(undefined8 *)puVar1);
  return;
}


