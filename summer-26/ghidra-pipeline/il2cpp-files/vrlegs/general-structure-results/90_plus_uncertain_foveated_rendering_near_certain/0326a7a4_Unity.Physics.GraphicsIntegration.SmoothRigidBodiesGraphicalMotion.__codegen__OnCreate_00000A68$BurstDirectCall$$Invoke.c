/*
FUNCTION_NAME: Unity.Physics.GraphicsIntegration.SmoothRigidBodiesGraphicalMotion.__codegen__OnCreate_00000A68$BurstDirectCall$$Invoke
ENTRY_POINT: 0326a7a4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 102
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_8;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;strong_foveation_hits_1;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


void Unity_Physics_GraphicsIntegration_SmoothRigidBodiesGraphicalMotion___codegen__OnCreate_00000A68_BurstDirectCall__Invoke
               (void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  uint *puVar9;
  long lVar10;
  long *unaff_x24;
  undefined8 uVar11;
  uint *puVar12;
  uint unaff_w26;
  long lVar13;
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
  
  uVar2 = FUN_01fec928();
  FUN_03283f90(&stack0x00000070,uVar2,0);
  lVar13 = *(long *)(unaff_x19 + 0x38);
  if (lVar13 != 0) {
    if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
      uVar7 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
      if (uVar7 != 0) {
        uVar14 = 0;
        puVar12 = (uint *)(lVar13 + 0x50);
        uStack0000000000000014 = unaff_w26;
        do {
          if ((puVar12[-4] == 1) &&
             (((puVar9 = puVar12 + -0xc, (unaff_w26 & 1) != 0 ||
               ((uVar6 = FUN_0326af34(puVar9,1,0x30,0), (uVar6 & 1) == 0 &&
                (uVar6 = FUN_0326af34(puVar9,1,0x31,0), (uVar6 & 1) == 0)))) &&
              (lVar3 = FUN_0326b29c(puVar9,0), lVar3 != 0)))) {
            uVar2 = FUN_0326af58(puVar9,0);
            if (in_stack_00000118 == 0) goto LAB_0326aae4;
            auVar15 = FUN_0328357c(in_stack_00000118,0);
            _in_stack_00000018 = auVar15;
            uVar4 = thunk_FUN_01a89a98(*(undefined8 *)Mono_CSharp_BlockVariable_TypeInfo,
                                       &stack0x00000018);
            lVar8 = *unaff_x24;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar8);
              lVar8 = *unaff_x24;
            }
            lVar10 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
            if (lVar10 == 0) {
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar8);
                lVar8 = *unaff_x24;
              }
              uVar11 = **(undefined8 **)(lVar8 + 0xb8);
              lVar10 = thunk_FUN_01a89e68(*(undefined8 *)
                                           System_Linq_Expressions_BlockExpressionList_TypeInfo);
              FUN_021de1ac(lVar10,uVar11,
                           *(undefined8 *)
                            _Common_Gameplay_Support_Scripts_InteractiveItem_Board_TypeInfo,0);
              plVar5 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x18);
              *plVar5 = lVar10;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,lVar10);
              unaff_w26 = uStack0000000000000014;
            }
            uVar2 = FUN_01fec968(uVar2,uVar4,lVar10,
                                 *(undefined8 *)Oculus_Platform_Models_BlockedUser_TypeInfo);
            if (in_stack_00000118 == 0) goto LAB_0326aae4;
            auVar15 = FUN_032835e4(in_stack_00000118,uVar2,0);
            _in_stack_00000070 = auVar15;
            uVar4 = FUN_0326b168(puVar9,0);
            auVar15 = FUN_03283994(&stack0x00000070,uVar4,0);
            _in_stack_00000070 = auVar15;
            auVar15 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                                (&stack0x00000070,lVar3,0);
            _in_stack_00000070 = auVar15;
            auVar15 = FUN_03283b18(&stack0x00000070,*puVar12 >> 3,0);
            _in_stack_00000070 = auVar15;
            auVar15 = FUN_03283b60(&stack0x00000070,*puVar12 & 7,0);
            _in_stack_00000070 = auVar15;
            auVar15 = FUN_03283ba8(&stack0x00000070,puVar12[-1],0);
            _in_stack_00000070 = auVar15;
            uVar1 = FUN_0326b394(puVar9,0);
            auVar15 = FUN_03283ad0(&stack0x00000070,uVar1,0);
            _in_stack_00000070 = auVar15;
            auVar15 = FUN_0326ba20(puVar9,0);
            auVar15 = FUN_0328412c(&stack0x00000070,auVar15._0_8_,auVar15._8_8_,0);
            _in_stack_00000070 = auVar15;
            uVar4 = Unity_Physics_Systems_BuildPhysicsWorldDependencyResolver____codegen__OnCreate_BurstManaged
                              (puVar9,0);
            auVar15 = FUN_03284050(&stack0x00000070,uVar4,0);
            _in_stack_00000060 = auVar15;
            uVar4 = FUN_0326b6a0(puVar9,0);
            uVar6 = FUN_025be440(uVar4,0);
            if ((uVar6 & 1) == 0) {
              FUN_03283f90(&stack0x00000060,uVar4,0);
            }
            lVar3 = FUN_0326b4b8(puVar9,0);
            if (lVar3 != 0) {
              FUN_03283c8c(&stack0x00000060,lVar3,0);
            }
            FUN_0326bae8(puVar9,puVar9,uVar2,&stack0x00000118,0);
          }
          if (uVar7 - 1 == uVar14) goto LAB_0326aab4;
          uVar14 = uVar14 + 1;
          puVar12 = puVar12 + 0x12;
        } while (uVar14 < *(uint *)(lVar13 + 0x18));
      }
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


