/*
FUNCTION_NAME: Unity.Physics.GraphicsIntegration.SmoothRigidBodiesGraphicalMotion$$__AssignQueries
ENTRY_POINT: 0326a688
PROGRAM: vrlegs-libil2cpp.so
SCORE: 88
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;ray_interaction;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_14;ray_or_cast_sink_hits_4;strong_foveation_hits_1;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


void Unity_Physics_GraphicsIntegration_SmoothRigidBodiesGraphicalMotion____AssignQueries
               (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x19;
  uint *puVar10;
  undefined8 unaff_x20;
  long lVar11;
  undefined8 *unaff_x24;
  undefined8 uVar12;
  undefined8 *unaff_x25;
  uint *puVar13;
  uint unaff_w26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  ulong uVar14;
  undefined1 auVar15 [16];
  uint uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000118;
  
  if (param_1 != 0) {
    _in_stack_00000070 = FUN_032835e4(param_1,*(undefined8 *)bool_TypeInfo,0);
    lVar2 = FUN_01ab6a94(*unaff_x24,2);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        *(undefined8 *)(lVar2 + 0x20) = unaff_x20;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar2 + 0x20));
        if (1 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)UnityEngine_XR_Bone_TypeInfo;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          uVar3 = FUN_01fec928(*unaff_x25,lVar2,*unaff_x27);
          FUN_03283f90(&stack0x00000070,uVar3,0);
          if (in_stack_00000118 != 0) {
            auVar15 = FUN_032835e4(in_stack_00000118,
                                   *(undefined8 *)Mono_CSharp_BoolConstant_TypeInfo,0);
            _in_stack_00000070 = auVar15;
            lVar2 = FUN_01ab6a94(*unaff_x24,2);
            if (lVar2 != 0) {
              if (*(int *)(lVar2 + 0x18) != 0) {
                *(undefined8 *)(lVar2 + 0x20) = unaff_x20;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          ((undefined8 *)(lVar2 + 0x20));
                if (1 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)UniHumanoid_BoneLimit_TypeInfo;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  uVar3 = FUN_01fec928(*unaff_x25,lVar2,*unaff_x27);
                  FUN_03283f90(&stack0x00000070,uVar3,0);
                  lVar2 = *(long *)(unaff_x19 + 0x38);
                  if (lVar2 != 0) {
                    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
                      uVar8 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
                      if (uVar8 != 0) {
                        uVar14 = 0;
                        puVar13 = (uint *)(lVar2 + 0x50);
                        uStack0000000000000014 = unaff_w26;
                        do {
                          if ((puVar13[-4] == 1) &&
                             (((puVar10 = puVar13 + -0xc, (unaff_w26 & 1) != 0 ||
                               ((uVar7 = FUN_0326af34(puVar10,1,0x30,0), (uVar7 & 1) == 0 &&
                                (uVar7 = FUN_0326af34(puVar10,1,0x31,0), (uVar7 & 1) == 0)))) &&
                              (lVar4 = FUN_0326b29c(puVar10,0), lVar4 != 0)))) {
                            uVar3 = FUN_0326af58(puVar10,0);
                            if (in_stack_00000118 == 0) goto LAB_0326aae4;
                            auVar15 = FUN_0328357c(in_stack_00000118,0);
                            _in_stack_00000018 = auVar15;
                            uVar5 = thunk_FUN_01a89a98(*(undefined8 *)
                                                        Mono_CSharp_BlockVariable_TypeInfo,
                                                       &stack0x00000018);
                            lVar9 = *unaff_x28;
                            if (*(int *)(lVar9 + 0xe0) == 0) {
                              thunk_FUN_01a58e78(lVar9);
                              lVar9 = *unaff_x28;
                            }
                            lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
                            if (lVar11 == 0) {
                              if (*(int *)(lVar9 + 0xe0) == 0) {
                                thunk_FUN_01a58e78(lVar9);
                                lVar9 = *unaff_x28;
                              }
                              uVar12 = **(undefined8 **)(lVar9 + 0xb8);
                              lVar11 = thunk_FUN_01a89e68(*(undefined8 *)
                                                                                                                      
                                                  System_Linq_Expressions_BlockExpressionList_TypeInfo
                                                  );
                              FUN_021de1ac(lVar11,uVar12,
                                           *(undefined8 *)
                                            _Common_Gameplay_Support_Scripts_InteractiveItem_Board_TypeInfo
                                           ,0);
                              plVar6 = (long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
                              *plVar6 = lVar11;
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                        (plVar6,lVar11);
                              unaff_w26 = uStack0000000000000014;
                            }
                            uVar3 = FUN_01fec968(uVar3,uVar5,lVar11,
                                                 *(undefined8 *)
                                                  Oculus_Platform_Models_BlockedUser_TypeInfo);
                            if (in_stack_00000118 == 0) goto LAB_0326aae4;
                            auVar15 = FUN_032835e4(in_stack_00000118,uVar3,0);
                            _in_stack_00000070 = auVar15;
                            uVar5 = FUN_0326b168(puVar10,0);
                            auVar15 = FUN_03283994(&stack0x00000070,uVar5,0);
                            _in_stack_00000070 = auVar15;
                            auVar15 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                                                (&stack0x00000070,lVar4,0);
                            _in_stack_00000070 = auVar15;
                            auVar15 = FUN_03283b18(&stack0x00000070,*puVar13 >> 3,0);
                            _in_stack_00000070 = auVar15;
                            auVar15 = FUN_03283b60(&stack0x00000070,*puVar13 & 7,0);
                            _in_stack_00000070 = auVar15;
                            auVar15 = FUN_03283ba8(&stack0x00000070,puVar13[-1],0);
                            _in_stack_00000070 = auVar15;
                            uVar1 = FUN_0326b394(puVar10,0);
                            auVar15 = FUN_03283ad0(&stack0x00000070,uVar1,0);
                            _in_stack_00000070 = auVar15;
                            auVar15 = FUN_0326ba20(puVar10,0);
                            auVar15 = FUN_0328412c(&stack0x00000070,auVar15._0_8_,auVar15._8_8_,0);
                            _in_stack_00000070 = auVar15;
                            uVar5 = Unity_Physics_Systems_BuildPhysicsWorldDependencyResolver____codegen__OnCreate_BurstManaged
                                              (puVar10,0);
                            auVar15 = FUN_03284050(&stack0x00000070,uVar5,0);
                            _in_stack_00000060 = auVar15;
                            uVar5 = FUN_0326b6a0(puVar10,0);
                            uVar7 = FUN_025be440(uVar5,0);
                            if ((uVar7 & 1) == 0) {
                              FUN_03283f90(&stack0x00000060,uVar5,0);
                            }
                            lVar4 = FUN_0326b4b8(puVar10,0);
                            if (lVar4 != 0) {
                              FUN_03283c8c(&stack0x00000060,lVar4,0);
                            }
                            FUN_0326bae8(puVar10,puVar10,uVar3,&stack0x00000118,0);
                          }
                          if (uVar8 - 1 == uVar14) goto LAB_0326aab4;
                          uVar14 = uVar14 + 1;
                          puVar13 = puVar13 + 0x12;
                        } while (uVar14 < *(uint *)(lVar2 + 0x18));
                      }
                      goto LAB_0326aab0;
                    }
LAB_0326aab4:
                    if (in_stack_00000118 != 0) {
                      FUN_03283748(in_stack_00000118,0);
                      return;
                    }
                  }
                  goto LAB_0326aae4;
                }
              }
              goto LAB_0326aab0;
            }
          }
          goto LAB_0326aae4;
        }
      }
LAB_0326aab0:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
  }
LAB_0326aae4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


