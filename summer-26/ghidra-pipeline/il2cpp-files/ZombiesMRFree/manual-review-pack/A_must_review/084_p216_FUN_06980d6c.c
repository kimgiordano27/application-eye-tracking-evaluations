/*
FUNCTION_NAME: FUN_06980d6c
ENTRY_POINT: 06980d6c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_12;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


void FUN_06980d6c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar5 = PTR_DAT_06f99138;
  if ((DAT_073a9c79 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f807e8);
    FUN_02fe925c(PTR_DAT_06f807f0);
    FUN_02fe925c(PTR_DAT_06f80af0);
    FUN_02fe925c(PTR_DAT_06f9a428);
    FUN_02fe925c(PTR_DAT_06f80828);
    FUN_02fe925c(PTR_DAT_06f80860);
    FUN_02fe925c(PTR_DAT_06f80868);
    FUN_02fe925c(PTR_DAT_06f80870);
    FUN_02fe925c(PTR_DAT_06f9a8d8);
    FUN_02fe925c(PTR_DAT_06f808e8);
    FUN_02fe925c(PTR_DAT_06f75070);
    FUN_02fe925c(PTR_DAT_06f99138);
    FUN_02fe925c(System_Net_Sockets_MulticastOption_TypeInfo);
    FUN_02fe925c(UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    FUN_02fe925c(NodeCanvas_DialogueTrees_MultipleChoiceRequestInfo_TypeInfo);
    FUN_02fe925c(RootMotion_Dynamics_Muscle_TypeInfo);
    FUN_02fe925c(RootMotion_Dynamics_MuscleCollision_TypeInfo);
    FUN_02fe925c(RootMotion_Dynamics_MuscleCollisionBroadcaster_TypeInfo);
    FUN_02fe925c(RootMotion_Dynamics_MuscleHit_TypeInfo);
    FUN_02fe925c(MusicFadePlayer_TypeInfo);
    FUN_02fe925c(MusicLoopPlayer_TypeInfo);
    FUN_02fe925c(MusicLoopPlayerTime_TypeInfo);
    FUN_02fe925c(MusicPlayer_TypeInfo);
    FUN_02fe925c(MusicValue_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6d6a0);
    FUN_02fe925c(Pathfinding_Util_MutableGraphTransform_TypeInfo);
    FUN_02fe925c(System_Threading_Mutex_TypeInfo);
    FUN_02fe925c(MutliFingersScreenTouch_TypeInfo);
    FUN_02fe925c(UnityEngine_Rendering_Universal_MyIntersectNodeSort_TypeInfo);
    FUN_02fe925c(System_Runtime_Serialization_NCNameDataContract_TypeInfo);
    FUN_02fe925c(System_Runtime_Serialization_NMTOKENDataContract_TypeInfo);
    FUN_02fe925c(Pathfinding_NNConstraint_TypeInfo);
    FUN_02fe925c(Pathfinding_NNConstraintWithTraversalProvider_TypeInfo);
    FUN_02fe925c(Pathfinding_NNInfo_TypeInfo);
    FUN_02fe925c(NPC_Eye_TypeInfo);
    FUN_02fe925c(System_Runtime_Serialization_Formatters_Binary_NameCache_TypeInfo);
    FUN_02fe925c(System_Runtime_Serialization_NameDataContract_TypeInfo);
    FUN_02fe925c(Mono_Security_Interface_MonoTlsConnectionInfo_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f80910);
    FUN_02fe925c(PTR_DAT_06f80918);
    FUN_02fe925c(PTR_DAT_06f80920);
    DAT_073a9c79 = 1;
  }
  puVar3 = PTR_DAT_06f80870;
  puVar1 = PTR_DAT_06f6d6a0;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar6 = Mono_Security_Interface_MonoTlsConnectionInfo_TypeInfo;
  puVar4 = PTR_DAT_06f808e8;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar7 = FUN_05afde1c(*(undefined8 *)puVar4,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar8);
    lVar8 = *(long *)puVar6;
  }
  puVar4 = PTR_DAT_06f9a428;
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x130);
  uVar10 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)RootMotion_Dynamics_MuscleCollision_TypeInfo);
    FUN_04c97f1c(lVar11,uVar12,*(undefined8 *)Pathfinding_Util_MutableGraphTransform_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar6 + 0xb8);
    *(long *)(lVar8 + 0x130) = lVar11;
    thunk_FUN_03048534(lVar8 + 0x130,lVar11);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar10,uVar9,uVar7,lVar11);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80af0;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar7 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar8);
    lVar8 = *(long *)puVar6;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x138);
  uVar10 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)RootMotion_Dynamics_MuscleHit_TypeInfo);
    FUN_04c97b48(lVar11,uVar12,
                 *(undefined8 *)UnityEngine_Rendering_Universal_MyIntersectNodeSort_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar6 + 0xb8);
    *(long *)(lVar8 + 0x138) = lVar11;
    thunk_FUN_03048534(lVar8 + 0x138,lVar11);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar10,uVar9,uVar7,lVar11);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f807e8;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar7 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar8);
    lVar8 = *(long *)puVar6;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x140);
  uVar10 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)
                                 UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    FUN_04c979c0(lVar11,uVar12,
                 *(undefined8 *)System_Runtime_Serialization_NCNameDataContract_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar6 + 0xb8);
    *(long *)(lVar8 + 0x140) = lVar11;
    thunk_FUN_03048534(lVar8 + 0x140,lVar11);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar10,uVar9,uVar7,lVar11);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80860;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar7 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar8);
    lVar8 = *(long *)puVar6;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x148);
  uVar10 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)MusicValue_TypeInfo);
    FUN_04c97cd0(lVar11,uVar12,
                 *(undefined8 *)System_Runtime_Serialization_NMTOKENDataContract_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar6 + 0xb8);
    *(long *)(lVar8 + 0x148) = lVar11;
    thunk_FUN_03048534(lVar8 + 0x148,lVar11);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar10,uVar9,uVar7,lVar11);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80868;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar7 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar8);
    lVar8 = *(long *)puVar6;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x150);
  uVar10 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)MusicLoopPlayerTime_TypeInfo);
    FUN_04c97d94(lVar11,uVar12,*(undefined8 *)Pathfinding_NNConstraint_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar6 + 0xb8);
    *(long *)(lVar8 + 0x150) = lVar11;
    thunk_FUN_03048534(lVar8 + 0x150,lVar11);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar10,uVar9,uVar7,lVar11);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f807f0;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar7 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar8);
    lVar8 = *(long *)puVar6;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x158);
  uVar10 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)System_Net_Sockets_MulticastOption_TypeInfo);
    FUN_04c97a84(lVar11,uVar12,*(undefined8 *)Pathfinding_NNConstraintWithTraversalProvider_TypeInfo
                 ,0);
    lVar8 = *(long *)(*(long *)puVar6 + 0xb8);
    *(long *)(lVar8 + 0x158) = lVar11;
    thunk_FUN_03048534(lVar8 + 0x158,lVar11);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar10,uVar9,uVar7,lVar11);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80910;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar7 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar8);
    lVar8 = *(long *)puVar6;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x160);
  uVar10 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)
                                 NodeCanvas_DialogueTrees_MultipleChoiceRequestInfo_TypeInfo);
    FUN_04c98168(lVar11,uVar12,*(undefined8 *)Pathfinding_NNInfo_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar6 + 0xb8);
    *(long *)(lVar8 + 0x160) = lVar11;
    thunk_FUN_03048534(lVar8 + 0x160,lVar11);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar10,uVar9,uVar7,lVar11);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80918;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar7 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar8);
    lVar8 = *(long *)puVar6;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x168);
  uVar10 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)MusicLoopPlayer_TypeInfo);
    FUN_04c9822c(lVar11,uVar12,*(undefined8 *)NPC_Eye_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar6 + 0xb8);
    *(long *)(lVar8 + 0x168) = lVar11;
    thunk_FUN_03048534(lVar8 + 0x168,lVar11);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar10,uVar9,uVar7,lVar11);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80920;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar7 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar8);
    lVar8 = *(long *)puVar6;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x170);
  uVar10 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)MusicPlayer_TypeInfo);
    FUN_04c982f0(lVar11,uVar12,
                 *(undefined8 *)System_Runtime_Serialization_Formatters_Binary_NameCache_TypeInfo,0)
    ;
    lVar8 = *(long *)(*(long *)puVar6 + 0xb8);
    *(long *)(lVar8 + 0x170) = lVar11;
    thunk_FUN_03048534(lVar8 + 0x170,lVar11);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar10,uVar9,uVar7,lVar11);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f75070;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar7 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar8);
    lVar8 = *(long *)puVar6;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x178);
  uVar10 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)MusicFadePlayer_TypeInfo);
    FUN_04c980a4(lVar11,uVar12,*(undefined8 *)System_Runtime_Serialization_NameDataContract_TypeInfo
                 ,0);
    lVar8 = *(long *)(*(long *)puVar6 + 0xb8);
    *(long *)(lVar8 + 0x178) = lVar11;
    thunk_FUN_03048534(lVar8 + 0x178,lVar11);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar10,uVar9,uVar7,lVar11);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80828;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar7 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar8);
    lVar8 = *(long *)puVar6;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x180);
  uVar10 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)RootMotion_Dynamics_Muscle_TypeInfo);
    FUN_04c97c0c(lVar11,uVar12,*(undefined8 *)System_Threading_Mutex_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar6 + 0xb8);
    *(long *)(lVar8 + 0x180) = lVar11;
    thunk_FUN_03048534(lVar8 + 0x180,lVar11);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar10,uVar9,uVar7,lVar11);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f9a8d8;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar7 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar8);
    lVar8 = *(long *)puVar6;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x188);
  uVar10 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)
                                 RootMotion_Dynamics_MuscleCollisionBroadcaster_TypeInfo);
    FUN_04c97e58(lVar11,uVar12,*(undefined8 *)MutliFingersScreenTouch_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar6 + 0xb8);
    *(long *)(lVar8 + 0x188) = lVar11;
    thunk_FUN_03048534(lVar8 + 0x188,lVar11);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar10,uVar9,uVar7,lVar11);
  return;
}


