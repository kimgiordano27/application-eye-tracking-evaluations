/*
FUNCTION_NAME: Unity.Physics.Systems.PhysicsBuildWorldGroup$$.ctor
ENTRY_POINT: 0326bf74
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: validity_gate;ray_interaction;foveation_rendering;keyword_support
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_4;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


void Unity_Physics_Systems_PhysicsBuildWorldGroup___ctor(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 auVar5 [16];
  int iStack0000000000000004;
  int in_stack_00000008;
  int iStack000000000000000c;
  int in_stack_00000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  
  uStack0000000000000020 = param_1;
  uStack0000000000000028 = param_2;
  _uStack0000000000000020 =
       FUN_03283ad0(&stack0x00000020,*(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 4),0);
  auVar5 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                     (&stack0x00000020,*unaff_x27,0);
  _uStack0000000000000020 = auVar5;
  uVar1 = FUN_0271c480(0);
  in_stack_00000010 = *(int *)(unaff_x19 + 0x10) + 3;
  uVar2 = thunk_FUN_01a89a98(*unaff_x28,&stack0x00000010);
  iStack000000000000000c = *(int *)(unaff_x19 + 0x10) + 5;
  uVar3 = thunk_FUN_01a89a98(*unaff_x28,&stack0x0000000c);
  uVar1 = FUN_025be9f0(uVar1,*unaff_x25,uVar2,uVar3,0);
  auVar5 = FUN_03283f90(&stack0x00000020,uVar1,0);
  _uStack0000000000000020 = auVar5;
  auVar5 = FUN_03283b60(&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
  _uStack0000000000000020 = auVar5;
  FUN_03283ba8(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
  lVar4 = *unaff_x22;
  uVar1 = FUN_025b1328();
  if (lVar4 != 0) {
    auVar5 = FUN_032835e4(lVar4,uVar1,0);
    _uStack0000000000000020 = auVar5;
    auVar5 = FUN_03283ad0(&stack0x00000020,*(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 4),0);
    _uStack0000000000000020 = auVar5;
    auVar5 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                       (&stack0x00000020,*unaff_x27,0);
    _uStack0000000000000020 = auVar5;
    uVar1 = FUN_0271c480(0);
    in_stack_00000008 = *(int *)(unaff_x19 + 0x10) + 5;
    uVar2 = thunk_FUN_01a89a98(*unaff_x28,&stack0x00000008);
    iStack0000000000000004 = *(int *)(unaff_x19 + 0x10) + 7;
    uVar3 = thunk_FUN_01a89a98(*unaff_x28,&stack0x00000004);
    uVar1 = FUN_025be9f0(uVar1,*unaff_x25,uVar2,uVar3,0);
    auVar5 = FUN_03283f90(&stack0x00000020,uVar1,0);
    _uStack0000000000000020 = auVar5;
    auVar5 = FUN_03283b60(&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
    _uStack0000000000000020 = auVar5;
    FUN_03283ba8(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


