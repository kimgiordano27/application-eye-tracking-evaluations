/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_participant_updated_t$$set_active_media
ENTRY_POINT: 0791f178
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;ray_or_cast_sink_hits_1;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_vx_evt_participant_updated_t__set_active_media(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *unaff_x26;
  undefined8 in_stack_00000018;
  
  lVar10 = *(long *)(unaff_x19 + 10);
  lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)
                              UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudPresets>_TypeInfo
                            );
  FUN_05f9f7c4(lVar3,*(undefined8 *)
                      UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo
              );
  uVar13 = *(undefined8 *)Cinemachine_CinemachineVirtualCamera___TypeInfo;
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar13 = FUN_0675ff58(uVar13,0);
  puVar1 = Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_05fa0540(lVar3,*(undefined8 *)System_Func<X509CertificateCollection>_TypeInfo,uVar13,
               *(undefined8 *)
                Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo);
  puVar2 = char___TypeInfo;
  uVar13 = FUN_0675ff58(*(undefined8 *)char___TypeInfo,0);
  FUN_05fa0540(lVar3,*(undefined8 *)System_Func<TooltipEvent>_TypeInfo,uVar13,*(undefined8 *)puVar1)
  ;
  uVar13 = FUN_0675ff58(*(undefined8 *)puVar2,0);
  FUN_05fa0540(lVar3,*(undefined8 *)System_Func<TransitionRunEvent>_TypeInfo,uVar13,
               *(undefined8 *)puVar1);
  uVar13 = FUN_0675ff58(*(undefined8 *)puVar2,0);
  FUN_05fa0540(lVar3,*(undefined8 *)System_Func<VectorImageRenderInfo>_TypeInfo,uVar13,
               *(undefined8 *)puVar1);
  uVar13 = FUN_0675ff58(*(undefined8 *)puVar2,0);
  FUN_05fa0540(lVar3,*(undefined8 *)System_Func<ValidateCommandEvent>_TypeInfo,uVar13,
               *(undefined8 *)puVar1);
  uVar13 = FUN_0675ff58(*(undefined8 *)puVar2,0);
  FUN_05fa0540(lVar3,*(undefined8 *)System_Func<uint>_TypeInfo,uVar13,*(undefined8 *)puVar1);
  uVar13 = FUN_0675ff58(*(undefined8 *)puVar2,0);
  FUN_05fa0540(lVar3,*(undefined8 *)System_Func<TransitionStartEvent>_TypeInfo,uVar13,
               *(undefined8 *)puVar1);
  *(long *)(unaff_x19 + 0xe) = lVar3;
  thunk_FUN_03afed3c(unaff_x19 + 0xe,lVar3);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar11 = *(undefined8 *)(unaff_x19 + 8);
  uVar13 = FUN_0791a308(lVar10);
  lVar3 = FUN_078f5604(uVar11,uVar13,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar12 = *(long **)(lVar10 + 0x10);
  uVar13 = FUN_065c0764(*(undefined8 *)(lVar3 + 0x10),
                        *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x28),0);
  lVar4 = *(long *)(unaff_x19 + 0xc);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(lVar4 + 0x20) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = FUN_07910fa0();
    lVar4 = *(long *)(unaff_x19 + 0xc);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  uVar5 = FUN_079157f4(lVar4,*(undefined8 *)(lVar10 + 0x18),lVar3);
  uVar7 = 10;
  if ((*(ulong *)(lVar3 + 0x18) & 0xff) != 0) {
    uVar7 = (undefined4)(*(ulong *)(lVar3 + 0x18) >> 0x20);
  }
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0(10);
  }
  lVar3 = *plVar12;
  uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
  uVar14 = *(undefined8 *)PTR_DAT_084c82e0;
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)Cinemachine_CinemachineOrbitalTransposer___TypeInfo) {
        puVar6 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0791f410;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_03ac43c4(plVar12,*(long *)Cinemachine_CinemachineOrbitalTransposer___TypeInfo,0);
LAB_0791f410:
  lVar3 = (*(code *)*puVar6)(plVar12,uVar14,uVar13,uVar11,uVar5,uVar7,puVar6[1]);
  if (lVar3 != 0) {
    in_stack_00000018 =
         FUN_058b71ec(lVar3,*(undefined8 *)
                             Unity_Multiplayer_Tools_NetStats_EventMetric<ServerLogEvent>___TypeInfo
                     );
    uVar8 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<string,_StyleComplexSelector>___TypeInfo
                        );
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fe5ce0(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar13 = FUN_0587c704(&stack0x00000018,
                            *(undefined8 *)System_Xml_Linq_XHashtable<XName>_TypeInfo);
      uVar11 = FUN_0471a034(uVar13,*(undefined8 *)(unaff_x19 + 0xe),
                            *(undefined8 *)Cinemachine_CinemachineVirtualCameraBase___TypeInfo);
      uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_Color___TypeInfo);
      FUN_05750b0c(uVar5,uVar13,uVar11,*(undefined8 *)UnityEngine_Collider___TypeInfo);
      puVar1 = Gley_UrbanSystem_Internal_CellData___TypeInfo;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


