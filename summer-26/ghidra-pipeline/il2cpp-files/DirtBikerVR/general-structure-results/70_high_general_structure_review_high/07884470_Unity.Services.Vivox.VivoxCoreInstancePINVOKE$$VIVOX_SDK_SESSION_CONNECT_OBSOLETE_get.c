/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VIVOX_SDK_SESSION_CONNECT_OBSOLETE_get
ENTRY_POINT: 07884470
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VIVOX_SDK_SESSION_CONNECT_OBSOLETE_get
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  int *piVar8;
  int *unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 07884470 to 07984477 has its CatchHandler @ 07884480 */
  FUN_03a8a718(*(undefined8 *)(param_1 + 0xc58));
                    /* try { // try from 07884478 to 07984483 has its CatchHandler @ 078840a8 */
                    /* catch() { ... } // from try @ 07884470 with catch @ 07884480 */
  FUN_03a8a718(System_Collections_Generic_IEnumerator<CultureInfo>_TypeInfo);
                    /* try { // try from 07884484 to 07984647 has its CatchHandler @ 07884484
                       catch() { ... } // from try @ 07884484 with catch @ 07884484
                       catch() { ... } // from try @ 07884724 with catch @ 07884484
                       catch() { ... } // from try @ 07884764 with catch @ 07884484
                       catch() { ... } // from try @ 0788479c with catch @ 07884484
                       catch() { ... } // from try @ 078847c0 with catch @ 07884484 */
  FUN_03a8a718(System_Func<TooltipEvent>_TypeInfo);
  FUN_03a8a718(PTR_DAT_084c7fc0);
  FUN_03a8a718(System_Func<TransitionRunEvent>_TypeInfo);
  FUN_03a8a718(System_Func<TransitionStartEvent>_TypeInfo);
  FUN_03a8a718(System_Func<X509CertificateCollection>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x777) = 1;
  puVar3 = System_Collections_Generic_IList<ISerializableDataMember>_TypeInfo;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 10);
    lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudPresets>_TypeInfo
                              );
    FUN_05f9f7c4(lVar4,*(undefined8 *)
                        UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo
                );
    uVar12 = *(undefined8 *)System_Collections_Generic_IList<Match>_TypeInfo;
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar12 = FUN_0675ff58(uVar12,0);
    puVar1 = Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<X509CertificateCollection>_TypeInfo,uVar12,
                 *(undefined8 *)
                  Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo);
    puVar2 = System_Collections_Generic_IEnumerator<RigBuilderUtils_PlayableChain>_TypeInfo;
    uVar12 = FUN_0675ff58(*(undefined8 *)
                           System_Collections_Generic_IEnumerator<RigBuilderUtils_PlayableChain>_TypeInfo
                          ,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<TooltipEvent>_TypeInfo,uVar12,
                 *(undefined8 *)puVar1);
    uVar12 = FUN_0675ff58(*(undefined8 *)puVar2,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<TransitionRunEvent>_TypeInfo,uVar12,
                 *(undefined8 *)puVar1);
    uVar12 = FUN_0675ff58(*(undefined8 *)puVar2,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<TransitionStartEvent>_TypeInfo,uVar12,
                 *(undefined8 *)puVar1);
    *(long *)(unaff_x19 + 0xe) = lVar4;
    thunk_FUN_03afed3c(unaff_x19 + 0xe,lVar4);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar10 = *(undefined8 *)(unaff_x19 + 8);
    uVar12 = FUN_078840d0(lVar9);
    lVar4 = FUN_0786febc(uVar10,uVar12);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar11 = *(long **)(lVar9 + 0x10);
    uVar12 = FUN_065c0764(*(undefined8 *)(lVar4 + 0x10),
                          *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x10),0);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar10 = FUN_0787fa78(uVar12,*(undefined8 *)(lVar9 + 0x18),lVar4);
    uVar6 = 10;
    if ((*(ulong *)(lVar4 + 0x18) & 0xff) != 0) {
      uVar6 = (undefined4)(*(ulong *)(lVar4 + 0x18) >> 0x20);
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0(10);
    }
    lVar4 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar13 = *(undefined8 *)PTR_DAT_084c7fc0;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             System_Collections_Generic_IEnumerator<RoomServerOptionsInvalid_ValidationError>_TypeInfo
           ) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_078846dc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_03ac43c4(plVar11,*(long *)
                                   System_Collections_Generic_IEnumerator<RoomServerOptionsInvalid_ValidationError>_TypeInfo
                          ,0);
LAB_078846dc:
    lVar4 = (*(code *)*puVar5)(plVar11,uVar13,uVar12,0,uVar10,uVar6,puVar5[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 =
         FUN_058b71ec(lVar4,*(undefined8 *)
                             System_Collections_Generic_IEnumerator<CultureInfo>_TypeInfo);
    uVar7 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)System_Collections_Generic_IEnumerator<Claim>_TypeInfo);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fe8f20(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  uVar12 = FUN_0587c704(&stack0x00000018,
                        *(undefined8 *)System_Collections_Generic_IEnumerator<char>_TypeInfo);
  uVar10 = FUN_04719738(uVar12,*(undefined8 *)(unaff_x19 + 0xe),
                        *(undefined8 *)System_Collections_Generic_IList<OVRBone>_TypeInfo);
  uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_IList<object>_TypeInfo);
  FUN_057509cc(uVar13,uVar12,uVar10,
               *(undefined8 *)System_Collections_Generic_IList<OVRBoneCapsule>_TypeInfo);
  puVar1 = System_Collections_Generic_IList<JsonSchemaModel>_TypeInfo;
  *unaff_x19 = -2;
  unaff_x19[0xe] = 0;
  unaff_x19[0xf] = 0;
  thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,uVar13,*(undefined8 *)puVar1);
  return;
}


