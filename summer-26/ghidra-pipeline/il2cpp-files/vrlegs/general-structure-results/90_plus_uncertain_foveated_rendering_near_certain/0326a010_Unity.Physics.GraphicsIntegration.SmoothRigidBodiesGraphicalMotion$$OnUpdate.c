/*
FUNCTION_NAME: Unity.Physics.GraphicsIntegration.SmoothRigidBodiesGraphicalMotion$$OnUpdate
ENTRY_POINT: 0326a010
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;ray_interaction;foveation_rendering;frame_behavior;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_9;strong_foveation_hits_2;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


void Unity_Physics_GraphicsIntegration_SmoothRigidBodiesGraphicalMotion__OnUpdate
               (long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long unaff_x19;
  uint *puVar17;
  int iVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long *unaff_x24;
  uint *puVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  int in_stack_00000080;
  undefined8 in_stack_000000a8;
  int in_stack_000000b0;
  int in_stack_000000d0;
  undefined8 in_stack_000000f8;
  int in_stack_00000100;
  long in_stack_00000118;
  
  puVar3 = System_Linq_Expressions_BlockExpression_TypeInfo;
  if (*(long *)(param_1 + 8) == 0) {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      param_2 = *unaff_x24;
    }
    uVar20 = **(undefined8 **)(param_2 + 0xb8);
    uVar9 = thunk_FUN_01a89e68(*(undefined8 *)System_Linq_Expressions_BlockN_TypeInfo);
    FUN_0225a3e8(uVar9,uVar20,*(undefined8 *)Oculus_Platform_Models_BlockedUserList_TypeInfo,0);
    puVar10 = (undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 8);
    *puVar10 = uVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,uVar9);
  }
  FUN_01f233a0();
  memcpy(&stack0x000000d0,&stack0x00000018,0x48);
  lVar11 = *unaff_x24;
  uVar9 = *(undefined8 *)(unaff_x19 + 0x38);
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar11 = *unaff_x24;
  }
  lVar19 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
  if (lVar19 == 0) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar11 = *unaff_x24;
    }
    uVar20 = **(undefined8 **)(lVar11 + 0xb8);
    lVar19 = thunk_FUN_01a89e68(*(undefined8 *)System_Linq_Expressions_BlockN_TypeInfo);
    FUN_0225a3e8(lVar19,uVar20,*(undefined8 *)UnityEngine_UIElements_BlurEvent_TypeInfo,0);
    plVar12 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
    *plVar12 = lVar19;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12,lVar19);
  }
  FUN_01f233a0(uVar9,lVar19,&stack0x00000018,*(undefined8 *)puVar3);
  memcpy(&stack0x00000080,&stack0x00000018,0x48);
  bVar6 = in_stack_000000d0 != 0x30;
  bVar7 = in_stack_00000080 != 0x31;
  if (!bVar6 && !bVar7) {
                    /* try { // try from 0326a168 to 0336a187 has its CatchHandler @ 0326a4cc */
    if (in_stack_000000b0 < in_stack_00000100) {
      iVar18 = (in_stack_000000f8._4_4_ + in_stack_00000100) - in_stack_000000a8._4_4_;
      iVar2 = in_stack_000000b0;
    }
    else {
      iVar18 = (in_stack_000000b0 - in_stack_00000100) + in_stack_000000a8._4_4_;
      iVar2 = in_stack_00000100;
    }
    iVar1 = iVar2 + 7;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    if (in_stack_00000118 == 0) goto LAB_0326aae4;
    iVar1 = iVar1 >> 3;
                    /* try { // try from 0326a1b8 to 0336a1c3 has its CatchHandler @ 0326a4c8 */
    _in_stack_00000070 =
         FUN_032835e4(in_stack_00000118,
                      *(undefined8 *)_Common_Gameplay_Support_Scripts_InteractiveItem_Bomb_TypeInfo,
                      0);
    puVar3 = Mono_CSharp_Argument_TypeInfo;
                    /* try { // try from 0326a1c4 to 0336a20b has its CatchHandler @ 03269f70 */
    auVar24 = FUN_03283994(&stack0x00000070,*(undefined8 *)Mono_CSharp_Argument_TypeInfo,0);
    _in_stack_00000070 = auVar24;
    auVar24 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                        (&stack0x00000070,*(undefined8 *)puVar3,0);
    _in_stack_00000070 = auVar24;
    auVar24 = FUN_03283b60(&stack0x00000070,iVar2 + iVar1 * -8,0);
                    /* try { // try from 0326a20c to 0336a21b has its CatchHandler @ 0326a4b4 */
    _in_stack_00000070 = auVar24;
    auVar24 = FUN_03283b18(&stack0x00000070,iVar1,0);
    _in_stack_00000070 = auVar24;
                    /* try { // try from 0326a22c to 0336a22f has its CatchHandler @ 0326a4a4 */
    auVar24 = FUN_03283ba8(&stack0x00000070,iVar18,0);
                    /* try { // try from 0326a230 to 0336a237 has its CatchHandler @ 0326a4bc */
    _in_stack_00000070 = auVar24;
    lVar11 = FUN_01ab6a94(*(undefined8 *)_Common_Gameplay_Scripts_TagGame_DigitSlot___TypeInfo,1);
    puVar3 = PTR_DAT_03cdee68;
                    /* try { // try from 0326a254 to 0336a25b has its CatchHandler @ 0326a4c0 */
    lVar19 = *(long *)PTR_DAT_03cdee68;
    if (*(int *)(lVar19 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar19);
      lVar19 = *(long *)puVar3;
    }
    if (lVar11 == 0) goto LAB_0326aae4;
                    /* try { // try from 0326a274 to 0336a277 has its CatchHandler @ 0326a494 */
                    /* try { // try from 0326a278 to 0336a28b has its CatchHandler @ 0326a4b0 */
    if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0326aab0;
    uVar9 = **(undefined8 **)(lVar19 + 0xb8);
    *(undefined8 *)(lVar11 + 0x28) = (*(undefined8 **)(lVar19 + 0xb8))[1];
    *(undefined8 *)(lVar11 + 0x20) = uVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar11 + 0x20),0);
                    /* try { // try from 0326a29c to 0336a2a3 has its CatchHandler @ 0326a4c4 */
    FUN_03283c8c(&stack0x00000070,lVar11,0);
    uVar9 = FUN_0326b6a0(&stack0x000000d0,0);
                    /* try { // try from 0326a2bc to 0336a2bf has its CatchHandler @ 0326a498 */
                    /* try { // try from 0326a2c0 to 0336a2d3 has its CatchHandler @ 0326a4a8 */
    uVar20 = FUN_0326b6a0(&stack0x00000080,0);
    if (in_stack_00000118 == 0) goto LAB_0326aae4;
                    /* try { // try from 0326a2d4 to 0336a2e7 has its CatchHandler @ 03269f70 */
    auVar24 = FUN_032835e4(in_stack_00000118,*(undefined8 *)UnityEngine_BoneWeight_TypeInfo,0);
                    /* try { // try from 0326a2e8 to 0336a2f7 has its CatchHandler @ 0326a4ac */
    _in_stack_00000070 = auVar24;
    uVar13 = FUN_0326adf0(&stack0x000000d0,0);
    puVar3 = PTR_DAT_03cd8408;
                    /* try { // try from 0326a304 to 0336a313 has its CatchHandler @ 0326a4a0 */
    lVar11 = *(long *)PTR_DAT_03cd8408;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar11);
      lVar11 = *(long *)puVar3;
    }
    lVar19 = 8;
    if ((uVar13 & 1) == 0) {
      lVar19 = 4;
    }
                    /* try { // try from 0326a330 to 0336a38b has its CatchHandler @ 0326a4d4 */
    auVar24 = FUN_03283ad0(&stack0x00000070,*(undefined4 *)(*(long *)(lVar11 + 0xb8) + lVar19),0);
    iVar18 = in_stack_00000100 + 7;
    if (-1 < in_stack_00000100) {
      iVar18 = in_stack_00000100;
    }
    _in_stack_00000070 = auVar24;
    auVar24 = FUN_03283b18(&stack0x00000070,(iVar18 >> 3) - iVar1,0);
    _in_stack_00000070 = auVar24;
    auVar24 = FUN_03283b60(&stack0x00000070,in_stack_00000100 % 8,0);
    _in_stack_00000070 = auVar24;
    auVar24 = FUN_03283ba8(&stack0x00000070,in_stack_000000f8._4_4_,0);
    _in_stack_00000070 = auVar24;
    auVar24 = FUN_03283f90(&stack0x00000070,uVar9,0);
    _in_stack_00000070 = auVar24;
    auVar24 = FUN_0326ba20(&stack0x000000d0,0);
                    /* try { // try from 0326a3dc to 0336a3ff has its CatchHandler @ 0326a4d0 */
    auVar24 = FUN_0328412c(&stack0x00000070,auVar24._0_8_,auVar24._8_8_,0);
    _in_stack_00000070 = auVar24;
    uVar14 = Unity_Physics_Systems_BuildPhysicsWorldDependencyResolver____codegen__OnCreate_BurstManaged
                       (&stack0x000000d0,0);
    FUN_03284050(&stack0x00000070,uVar14,0);
    if (in_stack_00000118 == 0) goto LAB_0326aae4;
                    /* try { // try from 0326a420 to 0336a433 has its CatchHandler @ 0326a49c */
    auVar24 = FUN_032835e4(in_stack_00000118,*(undefined8 *)Mono_CSharp_BoolLiteral_TypeInfo,0);
    _in_stack_00000070 = auVar24;
    uVar13 = FUN_0326adf0(&stack0x00000080,0);
                    /* try { // try from 0326a434 to 0336a487 has its CatchHandler @ 03269f70 */
    lVar11 = *(long *)puVar3;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar11);
      lVar11 = *(long *)puVar3;
    }
    lVar19 = 8;
    if ((uVar13 & 1) == 0) {
      lVar19 = 4;
    }
    auVar24 = FUN_03283ad0(&stack0x00000070,*(undefined4 *)(*(long *)(lVar11 + 0xb8) + lVar19),0);
                    /* try { // try from 0326a488 to 0336a48b has its CatchHandler @ 0326a4b8 */
    iVar18 = in_stack_000000b0 + 7;
                    /* try { // try from 0326a48c to 0336a4eb has its CatchHandler @ 03269f70 */
    if (-1 < in_stack_000000b0) {
      iVar18 = in_stack_000000b0;
    }
                    /* catch() { ... } // from try @ 0326a274 with catch @ 0326a494 */
    _in_stack_00000070 = auVar24;
                    /* catch() { ... } // from try @ 0326a2bc with catch @ 0326a498 */
    auVar24 = FUN_03283b18(&stack0x00000070,(iVar18 >> 3) - iVar1,0);
                    /* catch() { ... } // from try @ 0326a420 with catch @ 0326a49c */
                    /* catch() { ... } // from try @ 0326a304 with catch @ 0326a4a0 */
                    /* catch() { ... } // from try @ 0326a22c with catch @ 0326a4a4 */
                    /* catch() { ... } // from try @ 0326a2c0 with catch @ 0326a4a8 */
                    /* catch() { ... } // from try @ 0326a2e8 with catch @ 0326a4ac */
                    /* catch() { ... } // from try @ 0326a278 with catch @ 0326a4b0 */
                    /* catch() { ... } // from try @ 0326a20c with catch @ 0326a4b4 */
                    /* catch() { ... } // from try @ 0326a488 with catch @ 0326a4b8 */
                    /* catch() { ... } // from try @ 0326a230 with catch @ 0326a4bc */
    _in_stack_00000070 = auVar24;
                    /* catch() { ... } // from try @ 0326a254 with catch @ 0326a4c0 */
    auVar24 = FUN_03283b60(&stack0x00000070,in_stack_000000b0 % 8,0);
                    /* catch() { ... } // from try @ 0326a29c with catch @ 0326a4c4 */
                    /* catch() { ... } // from try @ 0326a1b8 with catch @ 0326a4c8 */
                    /* catch() { ... } // from try @ 0326a168 with catch @ 0326a4cc */
    _in_stack_00000070 = auVar24;
                    /* catch() { ... } // from try @ 0326a3dc with catch @ 0326a4d0 */
                    /* catch() { ... } // from try @ 0326a330 with catch @ 0326a4d4 */
    auVar24 = FUN_03283ba8(&stack0x00000070,in_stack_000000a8._4_4_,0);
    _in_stack_00000070 = auVar24;
                    /* try { // try from 0326a4ec to 0336a4ef has its CatchHandler @ 0326a518 */
    auVar24 = FUN_03283f90(&stack0x00000070,uVar20,0);
                    /* try { // try from 0326a4f0 to 0336a527 has its CatchHandler @ 03269f70 */
    _in_stack_00000070 = auVar24;
    auVar24 = FUN_0326ba20(&stack0x00000080,0);
                    /* catch() { ... } // from try @ 0326a4ec with catch @ 0326a518 */
    auVar24 = FUN_0328412c(&stack0x00000070,auVar24._0_8_,auVar24._8_8_,0);
    _in_stack_00000070 = auVar24;
                    /* try { // try from 0326a528 to 0336a52f has its CatchHandler @ 0326a544 */
    uVar14 = Unity_Physics_Systems_BuildPhysicsWorldDependencyResolver____codegen__OnCreate_BurstManaged
                       (&stack0x00000080,0);
                    /* try { // try from 0326a530 to 0336a53b has its CatchHandler @ 03269f70 */
    FUN_03284050(&stack0x00000070,uVar14,0);
                    /* try { // try from 0326a53c to 0336a543 has its CatchHandler @ 0326a544 */
    if (in_stack_00000118 == 0) goto LAB_0326aae4;
                    /* catch() { ... } // from try @ 0326a528 with catch @ 0326a544
                       catch() { ... } // from try @ 0326a53c with catch @ 0326a544 */
    auVar24 = FUN_032835e4(in_stack_00000118,*(undefined8 *)Unity_Physics_BodyFrame_TypeInfo,0);
    puVar3 = PTR_DAT_03cbfcb0;
    _in_stack_00000070 = auVar24;
    lVar11 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfcb0,2);
    if (lVar11 == 0) goto LAB_0326aae4;
    if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0326aab0;
    *(undefined8 *)(lVar11 + 0x20) = uVar20;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar11 + 0x20),uVar20);
    if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_0326aab0;
    *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)UnityEngine_Rendering_BoolParameter_TypeInfo;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    puVar5 = Mono_CSharp_BlockVariableDeclarator_TypeInfo;
    puVar4 = PTR_DAT_03cc4f00;
    uVar14 = FUN_01fec928(*(undefined8 *)PTR_DAT_03cc4f00,lVar11,
                          *(undefined8 *)Mono_CSharp_BlockVariableDeclarator_TypeInfo);
    FUN_03283f90(&stack0x00000070,uVar14,0);
    if (in_stack_00000118 == 0) goto LAB_0326aae4;
    auVar24 = FUN_032835e4(in_stack_00000118,*(undefined8 *)UnityEngine_BoneWeight1_TypeInfo,0);
    _in_stack_00000070 = auVar24;
    lVar11 = FUN_01ab6a94(*(undefined8 *)puVar3,2);
    if (lVar11 == 0) goto LAB_0326aae4;
    if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0326aab0;
    *(undefined8 *)(lVar11 + 0x20) = uVar20;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar11 + 0x20),uVar20);
    if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_0326aab0;
    *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)System_ComponentModel_BooleanConverter_TypeInfo;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar20 = FUN_01fec928(*(undefined8 *)puVar4,lVar11,*(undefined8 *)puVar5);
    FUN_03283f90(&stack0x00000070,uVar20,0);
    if (in_stack_00000118 == 0) goto LAB_0326aae4;
    auVar24 = FUN_032835e4(in_stack_00000118,*(undefined8 *)bool_TypeInfo,0);
    _in_stack_00000070 = auVar24;
    lVar11 = FUN_01ab6a94(*(undefined8 *)puVar3,2);
    if (lVar11 == 0) goto LAB_0326aae4;
    if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0326aab0;
    *(undefined8 *)(lVar11 + 0x20) = uVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar11 + 0x20),uVar9);
    if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_0326aab0;
    *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)UnityEngine_XR_Bone_TypeInfo;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar20 = FUN_01fec928(*(undefined8 *)puVar4,lVar11,*(undefined8 *)puVar5);
    FUN_03283f90(&stack0x00000070,uVar20,0);
    if (in_stack_00000118 == 0) goto LAB_0326aae4;
    auVar24 = FUN_032835e4(in_stack_00000118,*(undefined8 *)Mono_CSharp_BoolConstant_TypeInfo,0);
    _in_stack_00000070 = auVar24;
    lVar11 = FUN_01ab6a94(*(undefined8 *)puVar3,2);
    if (lVar11 == 0) goto LAB_0326aae4;
    if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0326aab0;
    *(undefined8 *)(lVar11 + 0x20) = uVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar11 + 0x20),uVar9);
    if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_0326aab0;
    *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)UniHumanoid_BoneLimit_TypeInfo;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar9 = FUN_01fec928(*(undefined8 *)puVar4,lVar11,*(undefined8 *)puVar5);
    FUN_03283f90(&stack0x00000070,uVar9,0);
  }
  lVar11 = *(long *)(unaff_x19 + 0x38);
  if (lVar11 != 0) {
    if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
      uVar13 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
      if (uVar13 != 0) {
        uVar23 = 0;
        puVar22 = (uint *)(lVar11 + 0x50);
        do {
          if (puVar22[-4] == 1) {
            puVar17 = puVar22 + -0xc;
            if (bVar6 || bVar7) {
LAB_0326a7f8:
              lVar19 = FUN_0326b29c(puVar17,0);
              if (lVar19 != 0) {
                uVar9 = FUN_0326af58(puVar17,0);
                if (in_stack_00000118 == 0) goto LAB_0326aae4;
                auVar24 = FUN_0328357c(in_stack_00000118,0);
                _in_stack_00000018 = auVar24;
                uVar20 = thunk_FUN_01a89a98(*(undefined8 *)Mono_CSharp_BlockVariable_TypeInfo,
                                            &stack0x00000018);
                lVar16 = *unaff_x24;
                if (*(int *)(lVar16 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(lVar16);
                  lVar16 = *unaff_x24;
                }
                lVar21 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x18);
                if (lVar21 == 0) {
                  if (*(int *)(lVar16 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(lVar16);
                    lVar16 = *unaff_x24;
                  }
                  uVar14 = **(undefined8 **)(lVar16 + 0xb8);
                  lVar21 = thunk_FUN_01a89e68(*(undefined8 *)
                                               System_Linq_Expressions_BlockExpressionList_TypeInfo)
                  ;
                  FUN_021de1ac(lVar21,uVar14,
                               *(undefined8 *)
                                _Common_Gameplay_Support_Scripts_InteractiveItem_Board_TypeInfo,0);
                  plVar12 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x18);
                  *plVar12 = lVar21;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12,lVar21);
                }
                uVar9 = FUN_01fec968(uVar9,uVar20,lVar21,
                                     *(undefined8 *)Oculus_Platform_Models_BlockedUser_TypeInfo);
                if (in_stack_00000118 == 0) goto LAB_0326aae4;
                auVar24 = FUN_032835e4(in_stack_00000118,uVar9,0);
                _in_stack_00000070 = auVar24;
                uVar20 = FUN_0326b168(puVar17,0);
                auVar24 = FUN_03283994(&stack0x00000070,uVar20,0);
                _in_stack_00000070 = auVar24;
                auVar24 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                                    (&stack0x00000070,lVar19,0);
                _in_stack_00000070 = auVar24;
                auVar24 = FUN_03283b18(&stack0x00000070,*puVar22 >> 3,0);
                _in_stack_00000070 = auVar24;
                auVar24 = FUN_03283b60(&stack0x00000070,*puVar22 & 7,0);
                _in_stack_00000070 = auVar24;
                auVar24 = FUN_03283ba8(&stack0x00000070,puVar22[-1],0);
                _in_stack_00000070 = auVar24;
                uVar8 = FUN_0326b394(puVar17,0);
                auVar24 = FUN_03283ad0(&stack0x00000070,uVar8,0);
                _in_stack_00000070 = auVar24;
                auVar24 = FUN_0326ba20(puVar17,0);
                auVar24 = FUN_0328412c(&stack0x00000070,auVar24._0_8_,auVar24._8_8_,0);
                _in_stack_00000070 = auVar24;
                uVar20 = Unity_Physics_Systems_BuildPhysicsWorldDependencyResolver____codegen__OnCreate_BurstManaged
                                   (puVar17,0);
                auVar24 = FUN_03284050(&stack0x00000070,uVar20,0);
                _in_stack_00000060 = auVar24;
                uVar20 = FUN_0326b6a0(puVar17,0);
                uVar15 = FUN_025be440(uVar20,0);
                if ((uVar15 & 1) == 0) {
                  FUN_03283f90(&stack0x00000060,uVar20,0);
                }
                lVar19 = FUN_0326b4b8(puVar17,0);
                if (lVar19 != 0) {
                  FUN_03283c8c(&stack0x00000060,lVar19,0);
                }
                FUN_0326bae8(puVar17,puVar17,uVar9,&stack0x00000118,0);
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
        } while (uVar23 < *(uint *)(lVar11 + 0x18));
      }
LAB_0326aab0:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
LAB_0326aab4:
    if (in_stack_00000118 != 0) {
      FUN_03283748(in_stack_00000118,0);
      return;
    }
  }
LAB_0326aae4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


