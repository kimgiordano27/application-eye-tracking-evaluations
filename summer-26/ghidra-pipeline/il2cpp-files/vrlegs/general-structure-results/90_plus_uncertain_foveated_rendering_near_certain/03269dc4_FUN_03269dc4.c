/*
FUNCTION_NAME: FUN_03269dc4
ENTRY_POINT: 03269dc4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 97
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;possible_biometrics
MODULES: weak_source_state;validity_gate;ray_interaction;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;ray_or_cast_sink_hits_8;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering;functionality_possible_biometrics_hits_2
*/


void FUN_03269dc4(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  uint *puVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  uint *puVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  undefined1 local_168 [4] [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  puVar5 = Fusion_Photon_Realtime_AuthenticationValues_TypeInfo;
  if ((DAT_0412c8a8 & 1) == 0) {
    FUN_01ab69ac(System_Linq_Expressions_BlockExpression_TypeInfo);
    FUN_01ab69ac(Fusion_Photon_Realtime_AuthenticationValues_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cdee68);
    FUN_01ab69ac(System_Linq_Expressions_BlockExpressionList_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cd8408);
    FUN_01ab69ac(_Common_Gameplay_Scripts_TagGame_DigitSlot___TypeInfo);
    FUN_01ab69ac(System_Linq_Expressions_BlockN_TypeInfo);
    FUN_01ab69ac(Mono_CSharp_BlockVariable_TypeInfo);
    FUN_01ab69ac(Mono_CSharp_BlockVariableDeclarator_TypeInfo);
    FUN_01ab69ac(Oculus_Platform_Models_BlockedUser_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbfcb0);
    FUN_01ab69ac(Oculus_Platform_Models_BlockedUserList_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_BlurEvent_TypeInfo);
    FUN_01ab69ac(_Common_Gameplay_Support_Scripts_InteractiveItem_Board_TypeInfo);
    FUN_01ab69ac(_Common_Gameplay_Support_Scripts_InteractiveItem_BoardGun_TypeInfo);
    FUN_01ab69ac(Unity_Physics_BodyFrame_TypeInfo);
    FUN_01ab69ac(_Common_Gameplay_Support_Scripts_InteractiveItem_Bomb_TypeInfo);
    FUN_01ab69ac(Mono_CSharp_Argument_TypeInfo);
    FUN_01ab69ac(UnityEngine_XR_Bone_TypeInfo);
    FUN_01ab69ac(UniHumanoid_BoneLimit_TypeInfo);
    FUN_01ab69ac(UnityEngine_BoneWeight_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc4f00);
    FUN_01ab69ac(UnityEngine_BoneWeight1_TypeInfo);
    FUN_01ab69ac(Mono_CSharp_BoolConstant_TypeInfo);
    FUN_01ab69ac(Mono_CSharp_BoolLiteral_TypeInfo);
    FUN_01ab69ac(UnityEngine_Rendering_BoolParameter_TypeInfo);
    FUN_01ab69ac(bool_TypeInfo);
    FUN_01ab69ac(System_ComponentModel_BooleanConverter_TypeInfo);
    DAT_0412c8a8 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_c0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
                    /* try { // try from 03269f70 to 0336a167 has its CatchHandler @ 03269f70
                       catch() { ... } // from try @ 03269f70 with catch @ 03269f70
                       catch() { ... } // from try @ 0326a1c4 with catch @ 03269f70
                       catch() { ... } // from try @ 0326a2d4 with catch @ 03269f70
                       catch() { ... } // from try @ 0326a434 with catch @ 03269f70
                       catch() { ... } // from try @ 0326a48c with catch @ 03269f70
                       catch() { ... } // from try @ 0326a4f0 with catch @ 03269f70
                       catch() { ... } // from try @ 0326a530 with catch @ 03269f70 */
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  local_110._0_8_ = 0;
  local_110._8_8_ = 0;
  local_120._0_8_ = 0;
  local_120._8_8_ = 0;
  lVar10 = thunk_FUN_01a89e68(*(undefined8 *)puVar5);
  FUN_0328398c(lVar10,0);
  puVar5 = _Common_Gameplay_Support_Scripts_InteractiveItem_BoardGun_TypeInfo;
  if (lVar10 == 0) goto LAB_0326aae4;
  *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(param_1 + 0x50);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  FUN_03283524(lVar10,*(undefined8 *)(param_1 + 0x48),0);
  local_168[0]._0_8_ = (ulong)(uint)local_168[0]._4_4_ << 0x20;
  FUN_03291114(local_168,0x48,0x49,0x44,0x20,0);
  *(undefined4 *)(lVar10 + 0x28) = local_168[0]._0_4_;
  lVar11 = *(long *)puVar5;
  uVar19 = *(undefined8 *)(param_1 + 0x38);
  local_68 = lVar10;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar11 = *(long *)puVar5;
  }
  puVar3 = System_Linq_Expressions_BlockExpression_TypeInfo;
  lVar10 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
  if (lVar10 == 0) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar11 = *(long *)puVar5;
    }
    uVar20 = **(undefined8 **)(lVar11 + 0xb8);
    lVar10 = thunk_FUN_01a89e68(*(undefined8 *)System_Linq_Expressions_BlockN_TypeInfo);
    FUN_0225a3e8(lVar10,uVar20,*(undefined8 *)Oculus_Platform_Models_BlockedUserList_TypeInfo,0);
    plVar12 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
    *plVar12 = lVar10;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12,lVar10);
  }
  FUN_01f233a0(uVar19,lVar10,local_168,*(undefined8 *)puVar3);
  memcpy(&local_b0,local_168,0x48);
  lVar10 = *(long *)puVar5;
  uVar19 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar10 = *(long *)puVar5;
  }
  lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
  if (lVar11 == 0) {
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar10 = *(long *)puVar5;
    }
    uVar20 = **(undefined8 **)(lVar10 + 0xb8);
    lVar11 = thunk_FUN_01a89e68(*(undefined8 *)System_Linq_Expressions_BlockN_TypeInfo);
    FUN_0225a3e8(lVar11,uVar20,*(undefined8 *)UnityEngine_UIElements_BlurEvent_TypeInfo,0);
    plVar12 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
    *plVar12 = lVar11;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12,lVar11);
  }
  FUN_01f233a0(uVar19,lVar11,local_168,*(undefined8 *)puVar3);
  memcpy(&local_100,local_168,0x48);
  bVar7 = (int)local_b0 != 0x30;
  bVar8 = (int)local_100 != 0x31;
  if (!bVar7 && !bVar8) {
    if ((int)local_d0 < (int)local_80) {
      iVar18 = (uStack_88._4_4_ + (int)local_80) - uStack_d8._4_4_;
      iVar2 = (int)local_d0;
    }
    else {
      iVar18 = ((int)local_d0 - (int)local_80) + uStack_d8._4_4_;
      iVar2 = (int)local_80;
    }
    iVar1 = iVar2 + 7;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    if (local_68 == 0) goto LAB_0326aae4;
    iVar1 = iVar1 >> 3;
    local_110 = FUN_032835e4(local_68,*(undefined8 *)
                                       _Common_Gameplay_Support_Scripts_InteractiveItem_Bomb_TypeInfo
                             ,0);
    puVar3 = Mono_CSharp_Argument_TypeInfo;
    auVar24 = FUN_03283994(local_110,*(undefined8 *)Mono_CSharp_Argument_TypeInfo,0);
    local_110 = auVar24;
    auVar24 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                        (local_110,*(undefined8 *)puVar3,0);
    local_110 = auVar24;
    auVar24 = FUN_03283b60(local_110,iVar2 + iVar1 * -8,0);
    local_110 = auVar24;
    auVar24 = FUN_03283b18(local_110,iVar1,0);
    local_110 = auVar24;
    auVar24 = FUN_03283ba8(local_110,iVar18,0);
    local_110 = auVar24;
    lVar10 = FUN_01ab6a94(*(undefined8 *)_Common_Gameplay_Scripts_TagGame_DigitSlot___TypeInfo,1);
    puVar3 = PTR_DAT_03cdee68;
    lVar11 = *(long *)PTR_DAT_03cdee68;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar11);
      lVar11 = *(long *)puVar3;
    }
    if (lVar10 == 0) goto LAB_0326aae4;
    if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0326aab0;
    uVar19 = **(undefined8 **)(lVar11 + 0xb8);
    *(undefined8 *)(lVar10 + 0x28) = (*(undefined8 **)(lVar11 + 0xb8))[1];
    *(undefined8 *)(lVar10 + 0x20) = uVar19;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar10 + 0x20),0);
    FUN_03283c8c(local_110,lVar10,0);
    uVar19 = FUN_0326b6a0(&local_b0,0);
    uVar20 = FUN_0326b6a0(&local_100,0);
    if (local_68 == 0) goto LAB_0326aae4;
    auVar24 = FUN_032835e4(local_68,*(undefined8 *)UnityEngine_BoneWeight_TypeInfo,0);
    local_110 = auVar24;
    uVar13 = FUN_0326adf0(&local_b0,0);
    puVar3 = PTR_DAT_03cd8408;
    lVar10 = *(long *)PTR_DAT_03cd8408;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar10);
      lVar10 = *(long *)puVar3;
    }
    lVar11 = 8;
    if ((uVar13 & 1) == 0) {
      lVar11 = 4;
    }
    auVar24 = FUN_03283ad0(local_110,*(undefined4 *)(*(long *)(lVar10 + 0xb8) + lVar11),0);
    iVar18 = (int)local_80 + 7;
    if (-1 < (int)local_80) {
      iVar18 = (int)local_80;
    }
    local_110 = auVar24;
    auVar24 = FUN_03283b18(local_110,(iVar18 >> 3) - iVar1,0);
    local_110 = auVar24;
    auVar24 = FUN_03283b60(local_110,(int)local_80 % 8,0);
    local_110 = auVar24;
    auVar24 = FUN_03283ba8(local_110,uStack_88._4_4_,0);
    local_110 = auVar24;
    auVar24 = FUN_03283f90(local_110,uVar19,0);
    local_110 = auVar24;
    auVar24 = FUN_0326ba20(&local_b0,0);
    auVar24 = FUN_0328412c(local_110,auVar24._0_8_,auVar24._8_8_,0);
    local_110 = auVar24;
    uVar14 = Unity_Physics_Systems_BuildPhysicsWorldDependencyResolver____codegen__OnCreate_BurstManaged
                       (&local_b0,0);
    FUN_03284050(local_110,uVar14,0);
    if (local_68 == 0) goto LAB_0326aae4;
    auVar24 = FUN_032835e4(local_68,*(undefined8 *)Mono_CSharp_BoolLiteral_TypeInfo,0);
    local_110 = auVar24;
    uVar13 = FUN_0326adf0(&local_100,0);
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar10);
      lVar10 = *(long *)puVar3;
    }
    lVar11 = 8;
    if ((uVar13 & 1) == 0) {
      lVar11 = 4;
    }
    auVar24 = FUN_03283ad0(local_110,*(undefined4 *)(*(long *)(lVar10 + 0xb8) + lVar11),0);
    iVar18 = (int)local_d0 + 7;
    if (-1 < (int)local_d0) {
      iVar18 = (int)local_d0;
    }
    local_110 = auVar24;
    auVar24 = FUN_03283b18(local_110,(iVar18 >> 3) - iVar1,0);
    local_110 = auVar24;
    auVar24 = FUN_03283b60(local_110,(int)local_d0 % 8,0);
    local_110 = auVar24;
    auVar24 = FUN_03283ba8(local_110,uStack_d8._4_4_,0);
    local_110 = auVar24;
    auVar24 = FUN_03283f90(local_110,uVar20,0);
    local_110 = auVar24;
    auVar24 = FUN_0326ba20(&local_100,0);
    auVar24 = FUN_0328412c(local_110,auVar24._0_8_,auVar24._8_8_,0);
    local_110 = auVar24;
    uVar14 = Unity_Physics_Systems_BuildPhysicsWorldDependencyResolver____codegen__OnCreate_BurstManaged
                       (&local_100,0);
    FUN_03284050(local_110,uVar14,0);
    if (local_68 == 0) goto LAB_0326aae4;
    auVar24 = FUN_032835e4(local_68,*(undefined8 *)Unity_Physics_BodyFrame_TypeInfo,0);
    puVar3 = PTR_DAT_03cbfcb0;
    local_110 = auVar24;
    lVar10 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfcb0,2);
    if (lVar10 == 0) goto LAB_0326aae4;
    if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0326aab0;
    *(undefined8 *)(lVar10 + 0x20) = uVar20;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar10 + 0x20),uVar20);
    if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_0326aab0;
    *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)UnityEngine_Rendering_BoolParameter_TypeInfo;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    puVar6 = Mono_CSharp_BlockVariableDeclarator_TypeInfo;
    puVar4 = PTR_DAT_03cc4f00;
    uVar14 = FUN_01fec928(*(undefined8 *)PTR_DAT_03cc4f00,lVar10,
                          *(undefined8 *)Mono_CSharp_BlockVariableDeclarator_TypeInfo);
    FUN_03283f90(local_110,uVar14,0);
    if (local_68 == 0) goto LAB_0326aae4;
    auVar24 = FUN_032835e4(local_68,*(undefined8 *)UnityEngine_BoneWeight1_TypeInfo,0);
    local_110 = auVar24;
    lVar10 = FUN_01ab6a94(*(undefined8 *)puVar3,2);
    if (lVar10 == 0) goto LAB_0326aae4;
    if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0326aab0;
    *(undefined8 *)(lVar10 + 0x20) = uVar20;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar10 + 0x20),uVar20);
    if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_0326aab0;
    *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)System_ComponentModel_BooleanConverter_TypeInfo;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar20 = FUN_01fec928(*(undefined8 *)puVar4,lVar10,*(undefined8 *)puVar6);
    FUN_03283f90(local_110,uVar20,0);
    if (local_68 == 0) goto LAB_0326aae4;
    auVar24 = FUN_032835e4(local_68,*(undefined8 *)bool_TypeInfo,0);
    local_110 = auVar24;
    lVar10 = FUN_01ab6a94(*(undefined8 *)puVar3,2);
    if (lVar10 == 0) goto LAB_0326aae4;
    if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0326aab0;
    *(undefined8 *)(lVar10 + 0x20) = uVar19;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar10 + 0x20),uVar19);
    if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_0326aab0;
    *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)UnityEngine_XR_Bone_TypeInfo;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar20 = FUN_01fec928(*(undefined8 *)puVar4,lVar10,*(undefined8 *)puVar6);
    FUN_03283f90(local_110,uVar20,0);
    if (local_68 == 0) goto LAB_0326aae4;
    auVar24 = FUN_032835e4(local_68,*(undefined8 *)Mono_CSharp_BoolConstant_TypeInfo,0);
    local_110 = auVar24;
    lVar10 = FUN_01ab6a94(*(undefined8 *)puVar3,2);
    if (lVar10 == 0) goto LAB_0326aae4;
    if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0326aab0;
    *(undefined8 *)(lVar10 + 0x20) = uVar19;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar10 + 0x20),uVar19);
    if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_0326aab0;
    *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)UniHumanoid_BoneLimit_TypeInfo;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar19 = FUN_01fec928(*(undefined8 *)puVar4,lVar10,*(undefined8 *)puVar6);
    FUN_03283f90(local_110,uVar19,0);
  }
  lVar10 = *(long *)(param_1 + 0x38);
  if (lVar10 != 0) {
    if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
      uVar13 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      if (uVar13 != 0) {
        uVar23 = 0;
        puVar22 = (uint *)(lVar10 + 0x50);
        do {
          if (puVar22[-4] == 1) {
            puVar17 = puVar22 + -0xc;
            if (bVar7 || bVar8) {
LAB_0326a7f8:
              lVar11 = FUN_0326b29c(puVar17,0);
              if (lVar11 != 0) {
                uVar19 = FUN_0326af58(puVar17,0);
                if (local_68 == 0) goto LAB_0326aae4;
                auVar24 = FUN_0328357c(local_68,0);
                local_168[0] = auVar24;
                uVar20 = thunk_FUN_01a89a98(*(undefined8 *)Mono_CSharp_BlockVariable_TypeInfo,
                                            local_168);
                lVar16 = *(long *)puVar5;
                if (*(int *)(lVar16 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(lVar16);
                  lVar16 = *(long *)puVar5;
                }
                lVar21 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x18);
                if (lVar21 == 0) {
                  if (*(int *)(lVar16 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(lVar16);
                    lVar16 = *(long *)puVar5;
                  }
                  uVar14 = **(undefined8 **)(lVar16 + 0xb8);
                  lVar21 = thunk_FUN_01a89e68(*(undefined8 *)
                                               System_Linq_Expressions_BlockExpressionList_TypeInfo)
                  ;
                  FUN_021de1ac(lVar21,uVar14,
                               *(undefined8 *)
                                _Common_Gameplay_Support_Scripts_InteractiveItem_Board_TypeInfo,0);
                  plVar12 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
                  *plVar12 = lVar21;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12,lVar21);
                }
                uVar19 = FUN_01fec968(uVar19,uVar20,lVar21,
                                      *(undefined8 *)Oculus_Platform_Models_BlockedUser_TypeInfo);
                if (local_68 == 0) goto LAB_0326aae4;
                auVar24 = FUN_032835e4(local_68,uVar19,0);
                local_110 = auVar24;
                uVar20 = FUN_0326b168(puVar17,0);
                auVar24 = FUN_03283994(local_110,uVar20,0);
                local_110 = auVar24;
                auVar24 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                                    (local_110,lVar11,0);
                local_110 = auVar24;
                auVar24 = FUN_03283b18(local_110,*puVar22 >> 3,0);
                local_110 = auVar24;
                auVar24 = FUN_03283b60(local_110,*puVar22 & 7,0);
                local_110 = auVar24;
                auVar24 = FUN_03283ba8(local_110,puVar22[-1],0);
                local_110 = auVar24;
                uVar9 = FUN_0326b394(puVar17,0);
                auVar24 = FUN_03283ad0(local_110,uVar9,0);
                local_110 = auVar24;
                auVar24 = FUN_0326ba20(puVar17,0);
                auVar24 = FUN_0328412c(local_110,auVar24._0_8_,auVar24._8_8_,0);
                local_110 = auVar24;
                uVar20 = Unity_Physics_Systems_BuildPhysicsWorldDependencyResolver____codegen__OnCreate_BurstManaged
                                   (puVar17,0);
                auVar24 = FUN_03284050(local_110,uVar20,0);
                local_120 = auVar24;
                uVar20 = FUN_0326b6a0(puVar17,0);
                uVar15 = FUN_025be440(uVar20,0);
                if ((uVar15 & 1) == 0) {
                  FUN_03283f90(local_120,uVar20,0);
                }
                lVar11 = FUN_0326b4b8(puVar17,0);
                if (lVar11 != 0) {
                  FUN_03283c8c(local_120,lVar11,0);
                }
                FUN_0326bae8(puVar17,puVar17,uVar19,&local_68,0);
              }
            }
            else {
              uVar15 = FUN_0326af34(puVar17,1,0x30,0);
              if ((uVar15 & 1) == 0) {
                uVar15 = FUN_0326af34(puVar17,1,0x31,0);
                if ((uVar15 & 1) == 0) goto LAB_0326a7f8;
              }
            }
          }
          if (uVar13 - 1 == uVar23) goto LAB_0326aab4;
          uVar23 = uVar23 + 1;
          puVar22 = puVar22 + 0x12;
        } while (uVar23 < *(uint *)(lVar10 + 0x18));
      }
LAB_0326aab0:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
LAB_0326aab4:
    if (local_68 != 0) {
      FUN_03283748(local_68,0);
      return;
    }
  }
LAB_0326aae4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


