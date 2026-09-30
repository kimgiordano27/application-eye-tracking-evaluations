/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VxErrorPresenceMustBeEnabled_get
ENTRY_POINT: 07881dc4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VxErrorPresenceMustBeEnabled_get(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int in_w8;
  undefined4 uVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x26;
  long *plVar14;
  undefined4 uStack0000000000000008;
  undefined8 uStack0000000000000018;
  
  plVar14 = *(long **)(unaff_x26 + 0xf40);
  uStack0000000000000018 = 0;
  uStack0000000000000008 = 0;
  if (in_w8 == 0) {
    uStack0000000000000018 = *(undefined8 *)(unaff_x19 + 0x10);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    *unaff_x19 = 0xffffffff;
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 10);
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)
                                UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudPresets>_TypeInfo
                              );
    FUN_05f9f7c4(lVar3,*(undefined8 *)
                        UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo
                );
    uVar12 = *(undefined8 *)System_Collections_Generic_IEqualityComparer<string>_TypeInfo;
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
    puVar2 = System_Collections_Generic_IEnumerator<RigBuilderUtils_PlayableChain>_TypeInfo;
    uVar12 = FUN_0675ff58(*(undefined8 *)
                           System_Collections_Generic_IEnumerator<RigBuilderUtils_PlayableChain>_TypeInfo
                          ,0);
    FUN_05fa0540(lVar3,*(undefined8 *)System_Func<TooltipEvent>_TypeInfo,uVar12,
                 *(undefined8 *)puVar1);
    uVar12 = FUN_0675ff58(*(undefined8 *)puVar2,0);
    FUN_05fa0540(lVar3,*(undefined8 *)System_Func<TransitionRunEvent>_TypeInfo,uVar12,
                 *(undefined8 *)puVar1);
    uVar12 = FUN_0675ff58(*(undefined8 *)puVar2,0);
    FUN_05fa0540(lVar3,*(undefined8 *)System_Func<ValidateCommandEvent>_TypeInfo,uVar12,
                 *(undefined8 *)puVar1);
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
    uVar12 = FUN_0788173c(lVar9);
    lVar3 = FUN_0786febc(uVar10,uVar12);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar11 = *(long **)(lVar9 + 0x10);
    uVar12 = FUN_065c0764(*(undefined8 *)(lVar3 + 0x10),
                          *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x20),0);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(*(long *)(unaff_x19 + 0xc) + 0x18) == 0) {
      uVar4 = 0;
      uVar10 = uVar12;
    }
    else {
      uVar4 = FUN_0787ad1c();
      uVar10 = uVar4;
      if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    uVar10 = FUN_0787b3dc(uVar10,*(undefined8 *)(lVar9 + 0x18),lVar3);
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
    uVar13 = *(undefined8 *)PTR_DAT_084c82e0;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             System_Collections_Generic_IEnumerator<RoomServerOptionsInvalid_ValidationError>_TypeInfo
           ) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07882018;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_03ac43c4(plVar11,*(long *)
                                   System_Collections_Generic_IEnumerator<RoomServerOptionsInvalid_ValidationError>_TypeInfo
                          ,0);
LAB_07882018:
    lVar3 = (*(code *)*puVar5)(plVar11,uVar13,uVar12,uVar4,uVar10,uVar6,puVar5[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uStack0000000000000018 =
         FUN_058b71ec(lVar3,*(undefined8 *)
                             System_Collections_Generic_IEnumerator<CultureInfo>_TypeInfo);
    uVar7 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)System_Collections_Generic_IEnumerator<Claim>_TypeInfo);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = uStack0000000000000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*plVar14 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fef3f0(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  uVar12 = FUN_0587c704(&stack0x00000018,
                        *(undefined8 *)System_Collections_Generic_IEnumerator<char>_TypeInfo);
  uVar10 = FUN_04719738(uVar12,*(undefined8 *)(unaff_x19 + 0xe),
                        *(undefined8 *)System_Linq_IGrouping<int,_SocketPose>_TypeInfo);
  uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                              System_Linq_IGrouping<string,_QosAnnotatedResult>_TypeInfo);
  FUN_057509cc(uVar4,uVar12,uVar10,
               *(undefined8 *)
                System_Linq_IGrouping<string,_ValueTuple<QosServer,_IQosMeasurements>>_TypeInfo);
  puVar1 = 
  System_Collections_Generic_IEnumerator<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
  ;
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 0xe) = 0;
  thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
  if (*(int *)(*plVar14 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar1);
  return;
}


