/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VxErrorXmppServerResponseChanAddMissing_get
ENTRY_POINT: 07883b10
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VxErrorXmppServerResponseChanAddMissing_get
               (void)

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
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000018;
  
  FUN_03a8a718(System_Collections_Generic_IEnumerator<Claim>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_IEnumerator<CultureInfo>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_IList<ILobbyChanges>_TypeInfo);
  FUN_03a8a718(PTR_DAT_084c82e0);
  FUN_03a8a718(System_Func<TooltipEvent>_TypeInfo);
  FUN_03a8a718(System_Func<TransitionRunEvent>_TypeInfo);
  FUN_03a8a718(System_Func<TransitionStartEvent>_TypeInfo);
  FUN_03a8a718(System_Func<X509CertificateCollection>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x773) = 1;
  puVar3 = System_Collections_Generic_IList<CustomAttributeNamedArgument>_TypeInfo;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
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
    uVar13 = *(undefined8 *)System_Collections_Generic_IList<ILobbyChanges>_TypeInfo;
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar13 = FUN_0675ff58(uVar13,0);
    puVar1 = Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<X509CertificateCollection>_TypeInfo,uVar13,
                 *(undefined8 *)
                  Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo);
    puVar2 = System_Collections_Generic_IEnumerator<RigBuilderUtils_PlayableChain>_TypeInfo;
    uVar13 = FUN_0675ff58(*(undefined8 *)
                           System_Collections_Generic_IEnumerator<RigBuilderUtils_PlayableChain>_TypeInfo
                          ,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<TooltipEvent>_TypeInfo,uVar13,
                 *(undefined8 *)puVar1);
    uVar13 = FUN_0675ff58(*(undefined8 *)puVar2,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<TransitionRunEvent>_TypeInfo,uVar13,
                 *(undefined8 *)puVar1);
    uVar13 = FUN_0675ff58(*(undefined8 *)puVar2,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<TransitionStartEvent>_TypeInfo,uVar13,
                 *(undefined8 *)puVar1);
    *(long *)(unaff_x19 + 0xe) = lVar4;
    thunk_FUN_03afed3c(unaff_x19 + 0xe,lVar4);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar11 = *(undefined8 *)(unaff_x19 + 8);
    uVar13 = FUN_07882fe0(lVar10);
    lVar4 = FUN_0786febc(uVar11,uVar13);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar12 = *(long **)(lVar10 + 0x10);
    uVar13 = FUN_065c0764(*(undefined8 *)(lVar4 + 0x10),
                          *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x18),0);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(*(long *)(unaff_x19 + 0xc) + 0x10) == 0) {
      uVar5 = 0;
      uVar11 = uVar13;
    }
    else {
      uVar5 = FUN_0787d7bc();
      uVar11 = uVar5;
      if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    uVar11 = FUN_0787e490(uVar11,*(undefined8 *)(lVar10 + 0x18),lVar4);
    uVar7 = 10;
    if ((*(ulong *)(lVar4 + 0x18) & 0xff) != 0) {
      uVar7 = (undefined4)(*(ulong *)(lVar4 + 0x18) >> 0x20);
    }
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0(10);
    }
    lVar4 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar14 = *(undefined8 *)PTR_DAT_084c82e0;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)
             System_Collections_Generic_IEnumerator<RoomServerOptionsInvalid_ValidationError>_TypeInfo
           ) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07883dac;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_03ac43c4(plVar12,*(long *)
                                   System_Collections_Generic_IEnumerator<RoomServerOptionsInvalid_ValidationError>_TypeInfo
                          ,0);
LAB_07883dac:
    lVar4 = (*(code *)*puVar6)(plVar12,uVar14,uVar13,uVar5,uVar11,uVar7,puVar6[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 =
         FUN_058b71ec(lVar4,*(undefined8 *)
                             System_Collections_Generic_IEnumerator<CultureInfo>_TypeInfo);
    uVar8 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)System_Collections_Generic_IEnumerator<Claim>_TypeInfo);
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fee888(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  uVar13 = FUN_0587c704(&stack0x00000018,
                        *(undefined8 *)System_Collections_Generic_IEnumerator<char>_TypeInfo);
  uVar11 = FUN_04719738(uVar13,*(undefined8 *)(unaff_x19 + 0xe),
                        *(undefined8 *)System_Collections_Generic_IList<Group>_TypeInfo);
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                              System_Collections_Generic_IList<IDtdDefaultAttributeInfo>_TypeInfo);
  FUN_057509cc(uVar5,uVar13,uVar11,
               *(undefined8 *)System_Collections_Generic_IList<IDataNode>_TypeInfo);
  puVar1 = System_Collections_Generic_IList<Graphic>_TypeInfo;
  *unaff_x19 = -2;
  unaff_x19[0xe] = 0;
  unaff_x19[0xf] = 0;
  thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar1);
  return;
}


