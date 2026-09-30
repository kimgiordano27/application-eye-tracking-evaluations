/*
FUNCTION_NAME: FUN_098c6e44
ENTRY_POINT: 098c6e44
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 84
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_098c6e44(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_TypeInfo;
  if ((DAT_0a548ebb & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1ef50);
    FUN_04447ba8(PTR_DAT_09f1e540);
    FUN_04447ba8(PTR_DAT_09f1eab8);
    FUN_04447ba8(PTR_DAT_09f1e538);
    FUN_04447ba8(System_Collections_Generic_List<WeakReference>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<WingedEdge>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<X509CertificateImpl>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<X509ChainStatus>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<X509Extension>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<XRBaseController>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<XRBaseGrabTransformer>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<XRControllerState>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<XRDisplaySubsystem>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<XRDisplaySubsystemDescriptor>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<XRFeatureDescriptor>_TypeInfo);
    FUN_04447ba8(PTR_DAT_09f1ef20);
    FUN_04447ba8(System_Collections_Generic_List<XRFingerShapeCondition>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<XRHandSubsystem>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<XRHandSubsystemDescriptor>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<XRInputButtonReader>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<XRInputSubsystem>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<XRInputValueReader>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<XRInteractableSnapVolume>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<XRInteractionManager>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<XRLoader>_TypeInfo);
    DAT_0a548ebb = 1;
  }
  FUN_098c408c(param_1);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if (DAT_0a548edb == '\0') {
    FUN_04447ba8(System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_TypeInfo);
    DAT_0a548edb = '\x01';
  }
  puVar1 = PTR_DAT_09f1e538;
  lVar12 = *(long *)puVar3;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar12 = *(long *)puVar3;
  }
  uVar17 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)puVar1);
  }
  uVar13 = FUN_09531730(uVar17,0,0);
  puVar1 = System_Collections_Generic_List<XRHandSubsystemDescriptor>_TypeInfo;
  if ((uVar13 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_094c33b0(*(undefined8 *)puVar1,0);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if (DAT_0a548edc == '\0') {
    FUN_04447ba8(System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_TypeInfo);
    DAT_0a548edc = '\x01';
  }
  puVar10 = System_Collections_Generic_List<XRLoader>_TypeInfo;
  puVar9 = System_Collections_Generic_List<XRInteractionManager>_TypeInfo;
  puVar8 = System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo;
  puVar7 = System_Collections_Generic_List<XRInputButtonReader>_TypeInfo;
  puVar6 = System_Collections_Generic_List<XRFingerShapeCondition>_TypeInfo;
  puVar5 = System_Collections_Generic_List<XRBaseController>_TypeInfo;
  puVar4 = System_Collections_Generic_List<X509CertificateImpl>_TypeInfo;
  puVar2 = PTR_DAT_09f1ef20;
  puVar1 = PTR_DAT_09f1eab8;
  lVar12 = *(long *)puVar3;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar12 = *(long *)puVar3;
  }
  plVar14 = (long *)(*(long *)(lVar12 + 0xb8) + 0x10);
  *plVar14 = param_1;
  thunk_FUN_044bb4b4(plVar14,param_1);
  uVar11 = FUN_094d9180(*(undefined8 *)puVar2,0);
  *(undefined4 *)(param_1 + 0x310) = uVar11;
  uVar11 = FUN_094d9180(*(undefined8 *)puVar8,0);
  *(undefined4 *)(param_1 + 0x314) = uVar11;
  uVar11 = FUN_094d9180(*(undefined8 *)puVar10,0);
  *(undefined4 *)(param_1 + 0x318) = uVar11;
  uVar11 = FUN_094d9180(*(undefined8 *)puVar4,0);
  *(undefined4 *)(param_1 + 0x31c) = uVar11;
  uVar11 = FUN_094d9180(*(undefined8 *)puVar9,0);
  *(undefined4 *)(param_1 + 800) = uVar11;
  uVar11 = FUN_094d9180(*(undefined8 *)puVar7,0);
  *(undefined4 *)(param_1 + 0x324) = uVar11;
  uVar11 = FUN_094d9180(*(undefined8 *)puVar6,0);
  *(undefined4 *)(param_1 + 0x328) = uVar11;
  uVar11 = FUN_094d9180(*(undefined8 *)puVar5,0);
  *(undefined4 *)(param_1 + 0x32c) = uVar11;
  uVar11 = FUN_094d9180(*(undefined8 *)System_Collections_Generic_List<X509Extension>_TypeInfo,0);
  *(undefined4 *)(param_1 + 0x330) = uVar11;
  uVar11 = FUN_094d9180(*(undefined8 *)System_Collections_Generic_List<XRFeatureDescriptor>_TypeInfo
                        ,0);
  *(undefined4 *)(param_1 + 0x334) = uVar11;
  uVar17 = FUN_094dbd14(*(undefined8 *)System_Collections_Generic_List<XRDisplaySubsystem>_TypeInfo,
                        0);
  uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
  FUN_094e201c(uVar15,uVar17,0);
  *(undefined8 *)(param_1 + 0x230) = uVar15;
  thunk_FUN_044bb4b4(param_1 + 0x230,uVar15);
  uVar17 = FUN_094dbd14(*(undefined8 *)
                         System_Collections_Generic_List<XRInteractableSnapVolume>_TypeInfo,0);
  uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
  FUN_094e201c(uVar15,uVar17,0);
  *(undefined8 *)(param_1 + 0x238) = uVar15;
  thunk_FUN_044bb4b4(param_1 + 0x238,uVar15);
  uVar17 = FUN_094dbd14(*(undefined8 *)System_Collections_Generic_List<XRInputSubsystem>_TypeInfo,0)
  ;
  uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
  FUN_094e201c(uVar15,uVar17,0);
  *(undefined8 *)(param_1 + 0x240) = uVar15;
  thunk_FUN_044bb4b4(param_1 + 0x240,uVar15);
  uVar17 = FUN_094dbd14(*(undefined8 *)System_Collections_Generic_List<XRControllerState>_TypeInfo,0
                       );
  uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
  FUN_094e201c(uVar15,uVar17,0);
  *(undefined8 *)(param_1 + 0x248) = uVar15;
  thunk_FUN_044bb4b4(param_1 + 0x248,uVar15);
  uVar17 = FUN_094dbd14(*(undefined8 *)
                         System_Collections_Generic_List<XRDisplaySubsystemDescriptor>_TypeInfo,0);
  uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
  FUN_094e201c(uVar15,uVar17,0);
  *(undefined8 *)(param_1 + 0x250) = uVar15;
  thunk_FUN_044bb4b4(param_1 + 0x250,uVar15);
  uVar17 = FUN_094dbd14(*(undefined8 *)System_Collections_Generic_List<WingedEdge>_TypeInfo,0);
  uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
  FUN_094e201c(uVar15,uVar17,0);
  *(undefined8 *)(param_1 + 600) = uVar15;
  thunk_FUN_044bb4b4(param_1 + 600,uVar15);
  puVar3 = System_Collections_Generic_List<WeakReference>_TypeInfo;
  uVar17 = FUN_04f47d2c(*(undefined8 *)System_Collections_Generic_List<X509ChainStatus>_TypeInfo,
                        *(undefined8 *)System_Collections_Generic_List<WeakReference>_TypeInfo);
  *(undefined8 *)(param_1 + 0x260) = uVar17;
  thunk_FUN_044bb4b4(param_1 + 0x260);
  uVar17 = FUN_04f47d2c(*(undefined8 *)System_Collections_Generic_List<XRHandSubsystem>_TypeInfo,
                        *(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x2c0) = uVar17;
  thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x2c0),uVar17);
  uVar17 = FUN_094dbd14(*(undefined8 *)
                         System_Collections_Generic_List<XRBaseGrabTransformer>_TypeInfo,0);
  uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
  FUN_094e201c(uVar15,uVar17,0);
  *(undefined8 *)(param_1 + 0x2b8) = uVar15;
  thunk_FUN_044bb4b4(param_1 + 0x2b8,uVar15);
  uVar17 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1ef50);
  FUN_0955c9f8(uVar17,0);
  *(undefined8 *)(param_1 + 0x2b0) = uVar17;
  thunk_FUN_044bb4b4((long *)(param_1 + 0x2b0),uVar17);
  if (*(long *)(param_1 + 0x2b0) != 0) {
    FUN_09553938(*(long *)(param_1 + 0x2b0),
                 *(undefined8 *)System_Collections_Generic_List<XRInputValueReader>_TypeInfo,0);
    lVar12 = *(long *)(param_1 + 0x2b0);
    uVar17 = *(undefined8 *)(param_1 + 0x2c0);
    if (DAT_0a522d36 == '\0') {
      FUN_04447ba8(PTR_DAT_09f25338);
      DAT_0a522d36 = '\x01';
    }
    lVar16 = *(long *)(*(long *)PTR_DAT_09f25338 + 0xb8);
    uStack_78 = *(undefined8 *)(lVar16 + 0x68);
    uVar15 = *(undefined8 *)(lVar16 + 0x60);
    uStack_68 = *(undefined8 *)(lVar16 + 0x78);
    uStack_70 = *(undefined8 *)(lVar16 + 0x70);
    uStack_98 = *(undefined8 *)(lVar16 + 0x48);
    local_a0 = *(undefined8 *)(lVar16 + 0x40);
    uStack_88 = *(undefined8 *)(lVar16 + 0x58);
    uVar20 = *(undefined8 *)(lVar16 + 0x50);
    uStack_90 = uVar20;
    local_80 = uVar15;
    if (lVar12 != 0) {
      local_e0 = local_a0;
      uStack_d8 = uStack_98;
      uStack_d0 = uVar20;
      uStack_c8 = uStack_88;
      local_c0 = uVar15;
      uStack_b8 = uStack_78;
      uStack_b0 = uStack_70;
      uStack_a8 = uStack_68;
      FUN_0955d9a8(lVar12,uVar17,&local_e0,*(undefined8 *)(param_1 + 0x2b8),0,0,0);
      uVar19 = (undefined4)uVar15;
      uVar11 = (undefined4)uVar20;
      FUN_098c7550(param_1);
      uVar17 = *(undefined8 *)(param_1 + 0x1d0);
      if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar13 = FUN_09531730(uVar17,0,0);
      if ((uVar13 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x1d0) != 0) {
        FUN_0952a454(*(long *)(param_1 + 0x1d0),0,0);
        if ((*(long *)(param_1 + 0x1d0) != 0) &&
           (lVar12 = FUN_0952a094(*(long *)(param_1 + 0x1d0),0), lVar12 != 0)) {
          uVar18 = FUN_09539274(lVar12,0);
          *(undefined4 *)(param_1 + 0x300) = uVar18;
          *(undefined4 *)(param_1 + 0x304) = uVar11;
          *(undefined4 *)(param_1 + 0x308) = uVar19;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


