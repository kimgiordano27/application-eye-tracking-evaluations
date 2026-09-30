/*
FUNCTION_NAME: Unity.Physics.GraphicsIntegration.SmoothRigidBodiesGraphicalMotion.__codegen__OnUpdate_00000A69$BurstDirectCall$$Invoke
ENTRY_POINT: 0326a85c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 108
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;foveation_rendering;frame_behavior;keyword_support
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;strong_foveation_hits_1;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


void Unity_Physics_GraphicsIntegration_SmoothRigidBodiesGraphicalMotion___codegen__OnUpdate_00000A69_BurstDirectCall__Invoke
               (long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long lVar5;
  long *unaff_x24;
  undefined8 uVar6;
  uint *unaff_x25;
  uint *puVar7;
  uint unaff_w26;
  long unaff_x27;
  ulong unaff_x28;
  ulong unaff_x29;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000118;
  
  do {
    thunk_FUN_01a58e78(param_1);
    param_1 = *unaff_x24;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0xb8) + 0x18);
      if (lVar5 == 0) {
        if (*(int *)(param_1 + 0xe0) == 0) {
          thunk_FUN_01a58e78(param_1);
          param_1 = *unaff_x24;
        }
        uVar6 = **(undefined8 **)(param_1 + 0xb8);
        lVar5 = thunk_FUN_01a89e68(*(undefined8 *)
                                    System_Linq_Expressions_BlockExpressionList_TypeInfo);
        FUN_021de1ac(lVar5,uVar6,
                     *(undefined8 *)_Common_Gameplay_Support_Scripts_InteractiveItem_Board_TypeInfo,
                     0);
        plVar2 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x18);
        *plVar2 = lVar5;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2,lVar5);
        unaff_w26 = in_stack_00000010._4_4_;
      }
      uVar6 = FUN_01fec968(unaff_x20,unaff_x22,lVar5,
                           *(undefined8 *)Oculus_Platform_Models_BlockedUser_TypeInfo);
      if (in_stack_00000118 == 0) {
LAB_0326aae4:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      auVar8 = FUN_032835e4(in_stack_00000118,uVar6,0);
      _in_stack_00000070 = auVar8;
      uVar3 = FUN_0326b168(unaff_x19,0);
      auVar8 = FUN_03283994(&stack0x00000070,uVar3,0);
      _in_stack_00000070 = auVar8;
      auVar8 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                         (&stack0x00000070,unaff_x21,0);
      _in_stack_00000070 = auVar8;
      auVar8 = FUN_03283b18(&stack0x00000070,*unaff_x25 >> 3,0);
      _in_stack_00000070 = auVar8;
      auVar8 = FUN_03283b60(&stack0x00000070,*unaff_x25 & 7,0);
      _in_stack_00000070 = auVar8;
      auVar8 = FUN_03283ba8(&stack0x00000070,unaff_x25[-1],0);
      _in_stack_00000070 = auVar8;
      uVar1 = FUN_0326b394(unaff_x19,0);
      auVar8 = FUN_03283ad0(&stack0x00000070,uVar1,0);
      _in_stack_00000070 = auVar8;
      auVar8 = FUN_0326ba20(unaff_x19,0);
      auVar8 = FUN_0328412c(&stack0x00000070,auVar8._0_8_,auVar8._8_8_,0);
      _in_stack_00000070 = auVar8;
      uVar3 = Unity_Physics_Systems_BuildPhysicsWorldDependencyResolver____codegen__OnCreate_BurstManaged
                        (unaff_x19,0);
      auVar8 = FUN_03284050(&stack0x00000070,uVar3,0);
      _in_stack_00000060 = auVar8;
      uVar3 = FUN_0326b6a0(unaff_x19,0);
      uVar4 = FUN_025be440(uVar3,0);
      if ((uVar4 & 1) == 0) {
        FUN_03283f90(&stack0x00000060,uVar3,0);
      }
      lVar5 = FUN_0326b4b8(unaff_x19,0);
      if (lVar5 != 0) {
        FUN_03283c8c(&stack0x00000060,lVar5,0);
      }
      FUN_0326bae8(unaff_x19,unaff_x19,uVar6,&stack0x00000118,0);
      do {
        puVar7 = unaff_x25;
        if (unaff_x29 == unaff_x28) {
          if (in_stack_00000118 != 0) {
            FUN_03283748(in_stack_00000118,0);
            return;
          }
          goto LAB_0326aae4;
        }
        unaff_x28 = unaff_x28 + 1;
        unaff_x25 = puVar7 + 0x12;
        if (*(uint *)(unaff_x27 + 0x18) <= unaff_x28) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
      } while ((puVar7[0xe] != 1) ||
              (((unaff_x19 = puVar7 + 6, (unaff_w26 & 1) == 0 &&
                ((uVar4 = FUN_0326af34(unaff_x19,1,0x30,0), (uVar4 & 1) != 0 ||
                 (uVar4 = FUN_0326af34(unaff_x19,1,0x31,0), (uVar4 & 1) != 0)))) ||
               (unaff_x21 = FUN_0326b29c(unaff_x19,0), unaff_x21 == 0))));
      unaff_x20 = FUN_0326af58(unaff_x19,0);
      if (in_stack_00000118 == 0) goto LAB_0326aae4;
      auVar8 = FUN_0328357c(in_stack_00000118,0);
      _in_stack_00000018 = auVar8;
      unaff_x22 = thunk_FUN_01a89a98(*(undefined8 *)Mono_CSharp_BlockVariable_TypeInfo,
                                     &stack0x00000018);
      param_1 = *unaff_x24;
    } while (*(int *)(param_1 + 0xe0) != 0);
  } while( true );
}


