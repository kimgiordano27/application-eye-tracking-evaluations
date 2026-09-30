/*
FUNCTION_NAME: Unity.Physics.GraphicsIntegration.SmoothRigidBodiesGraphicalMotion.SmoothMotionJob$$Execute
ENTRY_POINT: 0326a934
PROGRAM: vrlegs-libil2cpp.so
SCORE: 88
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;ray_interaction;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_4;strong_foveation_hits_1;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


void Unity_Physics_GraphicsIntegration_SmoothRigidBodiesGraphicalMotion_SmoothMotionJob__Execute
               (undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  uint *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x24;
  uint *unaff_x25;
  uint *puVar9;
  uint unaff_w26;
  long unaff_x27;
  ulong unaff_x28;
  ulong unaff_x29;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  long in_stack_00000118;
  
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = param_1;
  while( true ) {
    _uStack0000000000000070 = auVar10;
    auVar10 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                        (&stack0x00000070,unaff_x21,0);
    _uStack0000000000000070 = auVar10;
    auVar10 = FUN_03283b18(&stack0x00000070,*unaff_x25 >> 3,0);
    _uStack0000000000000070 = auVar10;
    auVar10 = FUN_03283b60(&stack0x00000070,*unaff_x25 & 7,0);
    _uStack0000000000000070 = auVar10;
    auVar10 = FUN_03283ba8(&stack0x00000070,unaff_x25[-1],0);
    _uStack0000000000000070 = auVar10;
    uVar1 = FUN_0326b394(unaff_x19,0);
    auVar10 = FUN_03283ad0(&stack0x00000070,uVar1,0);
    _uStack0000000000000070 = auVar10;
    auVar10 = FUN_0326ba20(unaff_x19,0);
    auVar10 = FUN_0328412c(&stack0x00000070,auVar10._0_8_,auVar10._8_8_,0);
    _uStack0000000000000070 = auVar10;
    uVar4 = Unity_Physics_Systems_BuildPhysicsWorldDependencyResolver____codegen__OnCreate_BurstManaged
                      (unaff_x19,0);
    auVar10 = FUN_03284050(&stack0x00000070,uVar4,0);
    _in_stack_00000060 = auVar10;
    uVar4 = FUN_0326b6a0(unaff_x19,0);
    uVar5 = FUN_025be440(uVar4,0);
    if ((uVar5 & 1) == 0) {
      FUN_03283f90(&stack0x00000060,uVar4,0);
    }
                    /* try { // try from 0326aa2c to 0336ac1b has its CatchHandler @ 0326aa2c
                       catch() { ... } // from try @ 0326aa2c with catch @ 0326aa2c
                       catch() { ... } // from try @ 0326ac78 with catch @ 0326aa2c
                       catch() { ... } // from try @ 0326ada8 with catch @ 0326aa2c
                       catch() { ... } // from try @ 0326af10 with catch @ 0326aa2c
                       catch() { ... } // from try @ 0326af6c with catch @ 0326aa2c
                       catch() { ... } // from try @ 0326afd0 with catch @ 0326aa2c
                       catch() { ... } // from try @ 0326b010 with catch @ 0326aa2c */
    lVar6 = FUN_0326b4b8(unaff_x19,0);
    if (lVar6 != 0) {
      FUN_03283c8c(&stack0x00000060,lVar6,0);
    }
    FUN_0326bae8(unaff_x19,unaff_x19,unaff_x20,&stack0x00000118,0);
    do {
      puVar9 = unaff_x25;
      if (unaff_x29 == unaff_x28) {
        if (in_stack_00000118 != 0) {
          FUN_03283748(in_stack_00000118,0);
          return;
        }
        goto LAB_0326aae4;
      }
      unaff_x28 = unaff_x28 + 1;
      unaff_x25 = puVar9 + 0x12;
      if (*(uint *)(unaff_x27 + 0x18) <= unaff_x28) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
    } while ((puVar9[0xe] != 1) ||
            (((unaff_x19 = puVar9 + 6, (unaff_w26 & 1) == 0 &&
              ((uVar5 = FUN_0326af34(unaff_x19,1,0x30,0), (uVar5 & 1) != 0 ||
               (uVar5 = FUN_0326af34(unaff_x19,1,0x31,0), (uVar5 & 1) != 0)))) ||
             (unaff_x21 = FUN_0326b29c(unaff_x19,0), unaff_x21 == 0))));
    uVar4 = FUN_0326af58(unaff_x19,0);
    if (in_stack_00000118 == 0) break;
    auVar10 = FUN_0328357c(in_stack_00000118,0);
    _in_stack_00000018 = auVar10;
    uVar2 = thunk_FUN_01a89a98(*(undefined8 *)Mono_CSharp_BlockVariable_TypeInfo,&stack0x00000018);
    lVar6 = *unaff_x24;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar6);
      lVar6 = *unaff_x24;
    }
    lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
    if (lVar7 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar6);
        lVar6 = *unaff_x24;
      }
      uVar8 = **(undefined8 **)(lVar6 + 0xb8);
      lVar7 = thunk_FUN_01a89e68(*(undefined8 *)System_Linq_Expressions_BlockExpressionList_TypeInfo
                                );
      FUN_021de1ac(lVar7,uVar8,
                   *(undefined8 *)_Common_Gameplay_Support_Scripts_InteractiveItem_Board_TypeInfo,0)
      ;
      plVar3 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x18);
      *plVar3 = lVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3,lVar7);
      unaff_w26 = in_stack_00000010._4_4_;
    }
    unaff_x20 = FUN_01fec968(uVar4,uVar2,lVar7,
                             *(undefined8 *)Oculus_Platform_Models_BlockedUser_TypeInfo);
    if (in_stack_00000118 == 0) break;
    auVar10 = FUN_032835e4(in_stack_00000118,unaff_x20,0);
    _uStack0000000000000070 = auVar10;
    uVar4 = FUN_0326b168(unaff_x19,0);
    auVar10 = FUN_03283994(&stack0x00000070,uVar4,0);
  }
LAB_0326aae4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


