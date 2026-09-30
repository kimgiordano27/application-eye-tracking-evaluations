/*
FUNCTION_NAME: Unity.Physics.Systems.BuildPhysicsWorldDependencyResolver.__codegen__OnUpdate_00000A77$BurstDirectCall$$GetFunctionPointer
ENTRY_POINT: 0326be68
PROGRAM: vrlegs-libil2cpp.so
SCORE: 91
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: validity_gate;ray_interaction;foveation_rendering;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_4;strong_foveation_hits_3;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


void Unity_Physics_Systems_BuildPhysicsWorldDependencyResolver___codegen__OnUpdate_00000A77_BurstDirectCall__GetFunctionPointer
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 auVar6 [16];
  int iStack0000000000000004;
  int iStack0000000000000008;
  int iStack000000000000000c;
  int in_stack_00000010;
  int iStack0000000000000014;
  int in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  _in_stack_00000020 = FUN_032835e4(param_1,param_2,0);
  auVar6 = FUN_03283ad0(&stack0x00000020,*(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 4),0);
  _in_stack_00000020 = auVar6;
  auVar6 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                     (&stack0x00000020,*unaff_x27,0);
  _in_stack_00000020 = auVar6;
  uVar2 = FUN_0271c480(0);
  in_stack_00000018 = *(int *)(unaff_x19 + 0x10) + 1;
  uVar3 = thunk_FUN_01a89a98(*unaff_x28,&stack0x00000018);
  iStack0000000000000014 = *(int *)(unaff_x19 + 0x10) + 3;
  uVar4 = thunk_FUN_01a89a98(*unaff_x28,&stack0x00000014);
  puVar1 = UnityEngine_UIElements_BoundsIntField_TypeInfo;
  uVar2 = FUN_025be9f0(uVar2,*(undefined8 *)UnityEngine_UIElements_BoundsIntField_TypeInfo,uVar3,
                       uVar4,0);
  auVar6 = FUN_03283f90(&stack0x00000020,uVar2,0);
  _in_stack_00000020 = auVar6;
  auVar6 = FUN_03283b60(&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
  _in_stack_00000020 = auVar6;
  FUN_03283ba8(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
  lVar5 = *unaff_x22;
  uVar2 = FUN_025b1328();
  if (lVar5 != 0) {
    auVar6 = FUN_032835e4(lVar5,uVar2,0);
    _in_stack_00000020 = auVar6;
    auVar6 = FUN_03283ad0(&stack0x00000020,*(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 4),0);
    _in_stack_00000020 = auVar6;
    auVar6 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                       (&stack0x00000020,*unaff_x27,0);
    _in_stack_00000020 = auVar6;
    uVar2 = FUN_0271c480(0);
    in_stack_00000010 = *(int *)(unaff_x19 + 0x10) + 3;
    uVar3 = thunk_FUN_01a89a98(*unaff_x28,&stack0x00000010);
    iStack000000000000000c = *(int *)(unaff_x19 + 0x10) + 5;
    uVar4 = thunk_FUN_01a89a98(*unaff_x28,(long)&stack0x00000008 + 4);
    uVar2 = FUN_025be9f0(uVar2,*(undefined8 *)puVar1,uVar3,uVar4,0);
    auVar6 = FUN_03283f90(&stack0x00000020,uVar2,0);
    _in_stack_00000020 = auVar6;
    auVar6 = FUN_03283b60(&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
    _in_stack_00000020 = auVar6;
    FUN_03283ba8(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
    lVar5 = *unaff_x22;
    uVar2 = FUN_025b1328();
    if (lVar5 != 0) {
      auVar6 = FUN_032835e4(lVar5,uVar2,0);
      _in_stack_00000020 = auVar6;
      auVar6 = FUN_03283ad0(&stack0x00000020,*(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 4),0);
      _in_stack_00000020 = auVar6;
      auVar6 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                         (&stack0x00000020,*unaff_x27,0);
      _in_stack_00000020 = auVar6;
      uVar2 = FUN_0271c480(0);
      iStack0000000000000008 = *(int *)(unaff_x19 + 0x10) + 5;
      uVar3 = thunk_FUN_01a89a98(*unaff_x28,&stack0x00000008);
      iStack0000000000000004 = *(int *)(unaff_x19 + 0x10) + 7;
      uVar4 = thunk_FUN_01a89a98(*unaff_x28,&stack0x00000004);
      uVar2 = FUN_025be9f0(uVar2,*(undefined8 *)puVar1,uVar3,uVar4,0);
      auVar6 = FUN_03283f90(&stack0x00000020,uVar2,0);
      _in_stack_00000020 = auVar6;
      auVar6 = FUN_03283b60(&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
      _in_stack_00000020 = auVar6;
      FUN_03283ba8(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


