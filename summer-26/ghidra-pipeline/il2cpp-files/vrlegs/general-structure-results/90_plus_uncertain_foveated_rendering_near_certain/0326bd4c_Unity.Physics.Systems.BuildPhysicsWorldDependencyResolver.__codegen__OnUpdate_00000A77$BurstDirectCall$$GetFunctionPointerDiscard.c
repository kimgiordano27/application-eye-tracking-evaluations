/*
FUNCTION_NAME: Unity.Physics.Systems.BuildPhysicsWorldDependencyResolver.__codegen__OnUpdate_00000A77$BurstDirectCall$$GetFunctionPointerDiscard
ENTRY_POINT: 0326bd4c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 97
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: validity_gate;ray_interaction;foveation_rendering;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_4;strong_foveation_hits_3;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


void Unity_Physics_Systems_BuildPhysicsWorldDependencyResolver___codegen__OnUpdate_00000A77_BurstDirectCall__GetFunctionPointerDiscard
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long *unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 auVar7 [16];
  int iStack0000000000000004;
  int iStack0000000000000008;
  int iStack000000000000000c;
  int iStack0000000000000010;
  int iStack0000000000000014;
  int iStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  *(undefined8 *)(param_1 + 0x28) = unaff_x25;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar2 = FUN_032986bc(&stack0x00000030,0);
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*unaff_x24 + 0x40)), lVar3 == 0)) {
LAB_0326c164:
    uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar4,0);
  }
                    /* try { // try from 0326bd84 to 0336bd87 has its CatchHandler @ 0326bda4 */
                    /* try { // try from 0326bd88 to 0336bdcb has its CatchHandler @ 0326ba20 */
  if (2 < *(uint *)(unaff_x24 + 3)) {
                    /* catch() { ... } // from try @ 0326bcc0 with catch @ 0326bd90 */
    unaff_x24[6] = lVar2;
                    /* catch() { ... } // from try @ 0326bcc4 with catch @ 0326bd94 */
                    /* catch() { ... } // from try @ 0326bce0 with catch @ 0326bd98 */
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x24 + 6,lVar2);
                    /* catch() { ... } // from try @ 0326bcf8 with catch @ 0326bd9c */
    uStack000000000000001c = *(undefined4 *)(unaff_x19 + 0x14);
                    /* catch() { ... } // from try @ 0326bd0c with catch @ 0326bda0 */
                    /* catch() { ... } // from try @ 0326bd84 with catch @ 0326bda4 */
                    /* catch() { ... } // from try @ 0326bc98 with catch @ 0326bda8 */
                    /* catch() { ... } // from try @ 0326bc5c with catch @ 0326bdac */
    lVar2 = thunk_FUN_01a89a98(*unaff_x28,(long)&stack0x00000018 + 4);
                    /* catch() { ... } // from try @ 0326bc10 with catch @ 0326bdb0 */
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*unaff_x24 + 0x40)), lVar3 == 0))
    goto LAB_0326c164;
                    /* try { // try from 0326bdcc to 0336bdcf has its CatchHandler @ 0326bdf8 */
                    /* try { // try from 0326bdd0 to 0336be07 has its CatchHandler @ 0326ba20 */
    if (3 < *(uint *)(unaff_x24 + 3)) {
      unaff_x24[7] = lVar2;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x24 + 7,lVar2);
                    /* catch() { ... } // from try @ 0326bdcc with catch @ 0326bdf8 */
      uVar4 = FUN_025beaa4();
                    /* try { // try from 0326be08 to 0336be0f has its CatchHandler @ 0326be24 */
                    /* try { // try from 0326be10 to 0336be1b has its CatchHandler @ 0326ba20 */
      _in_stack_00000020 = FUN_03283f90(&stack0x00000020,uVar4,0);
                    /* try { // try from 0326be1c to 0336be23 has its CatchHandler @ 0326be24 */
                    /* catch() { ... } // from try @ 0326be08 with catch @ 0326be24
                       catch() { ... } // from try @ 0326be1c with catch @ 0326be24 */
      auVar7 = FUN_03283b60(&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
      _in_stack_00000020 = auVar7;
      FUN_03283ba8(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
      lVar2 = *unaff_x22;
      uVar4 = FUN_025b1328();
      if (lVar2 != 0) {
        auVar7 = FUN_032835e4(lVar2,uVar4,0);
        _in_stack_00000020 = auVar7;
        auVar7 = FUN_03283ad0(&stack0x00000020,*(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 4),0);
        _in_stack_00000020 = auVar7;
        auVar7 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                           (&stack0x00000020,*unaff_x27,0);
        _in_stack_00000020 = auVar7;
        uVar4 = FUN_0271c480(0);
        iStack0000000000000018 = *(int *)(unaff_x19 + 0x10) + 1;
        uVar5 = thunk_FUN_01a89a98(*unaff_x28,&stack0x00000018);
        iStack0000000000000014 = *(int *)(unaff_x19 + 0x10) + 3;
        uVar6 = thunk_FUN_01a89a98(*unaff_x28,(long)&stack0x00000010 + 4);
        puVar1 = UnityEngine_UIElements_BoundsIntField_TypeInfo;
        uVar4 = FUN_025be9f0(uVar4,*(undefined8 *)UnityEngine_UIElements_BoundsIntField_TypeInfo,
                             uVar5,uVar6,0);
        auVar7 = FUN_03283f90(&stack0x00000020,uVar4,0);
        _in_stack_00000020 = auVar7;
        auVar7 = FUN_03283b60(&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
        _in_stack_00000020 = auVar7;
        FUN_03283ba8(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
        lVar2 = *unaff_x22;
        uVar4 = FUN_025b1328();
        if (lVar2 != 0) {
          auVar7 = FUN_032835e4(lVar2,uVar4,0);
          _in_stack_00000020 = auVar7;
          auVar7 = FUN_03283ad0(&stack0x00000020,*(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 4),0
                               );
          _in_stack_00000020 = auVar7;
          auVar7 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                             (&stack0x00000020,*unaff_x27,0);
          _in_stack_00000020 = auVar7;
          uVar4 = FUN_0271c480(0);
          iStack0000000000000010 = *(int *)(unaff_x19 + 0x10) + 3;
          uVar5 = thunk_FUN_01a89a98(*unaff_x28,&stack0x00000010);
          iStack000000000000000c = *(int *)(unaff_x19 + 0x10) + 5;
          uVar6 = thunk_FUN_01a89a98(*unaff_x28,(long)&stack0x00000008 + 4);
          uVar4 = FUN_025be9f0(uVar4,*(undefined8 *)puVar1,uVar5,uVar6,0);
          auVar7 = FUN_03283f90(&stack0x00000020,uVar4,0);
          _in_stack_00000020 = auVar7;
          auVar7 = FUN_03283b60(&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
          _in_stack_00000020 = auVar7;
          FUN_03283ba8(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
          lVar2 = *unaff_x22;
          uVar4 = FUN_025b1328();
          if (lVar2 != 0) {
            auVar7 = FUN_032835e4(lVar2,uVar4,0);
            _in_stack_00000020 = auVar7;
            auVar7 = FUN_03283ad0(&stack0x00000020,*(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 4)
                                  ,0);
            _in_stack_00000020 = auVar7;
            auVar7 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                               (&stack0x00000020,*unaff_x27,0);
            _in_stack_00000020 = auVar7;
            uVar4 = FUN_0271c480(0);
            iStack0000000000000008 = *(int *)(unaff_x19 + 0x10) + 5;
            uVar5 = thunk_FUN_01a89a98(*unaff_x28,&stack0x00000008);
            iStack0000000000000004 = *(int *)(unaff_x19 + 0x10) + 7;
            uVar6 = thunk_FUN_01a89a98(*unaff_x28,&stack0x00000004);
            uVar4 = FUN_025be9f0(uVar4,*(undefined8 *)puVar1,uVar5,uVar6,0);
            auVar7 = FUN_03283f90(&stack0x00000020,uVar4,0);
            _in_stack_00000020 = auVar7;
            auVar7 = FUN_03283b60(&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
            _in_stack_00000020 = auVar7;
            FUN_03283ba8(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


