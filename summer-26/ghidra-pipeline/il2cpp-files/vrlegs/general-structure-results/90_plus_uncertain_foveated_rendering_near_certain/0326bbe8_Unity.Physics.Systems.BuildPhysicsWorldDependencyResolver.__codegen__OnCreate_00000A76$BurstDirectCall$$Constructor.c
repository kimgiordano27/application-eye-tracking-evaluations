/*
FUNCTION_NAME: Unity.Physics.Systems.BuildPhysicsWorldDependencyResolver.__codegen__OnCreate_00000A76$BurstDirectCall$$Constructor
ENTRY_POINT: 0326bbe8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 91
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: validity_gate;ray_interaction;foveation_rendering;keyword_support
EVIDENCE: validity_or_gating_hits_11;ray_or_cast_sink_hits_4;strong_foveation_hits_4;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


void Unity_Physics_Systems_BuildPhysicsWorldDependencyResolver___codegen__OnCreate_00000A76_BurstDirectCall__Constructor
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long lVar10;
  undefined1 auVar11 [16];
  int iStack0000000000000004;
  int iStack0000000000000008;
  int iStack000000000000000c;
  int iStack0000000000000010;
  int iStack0000000000000014;
  int iStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  int iStack0000000000000048;
  undefined4 uStack000000000000004c;
  
  lVar10 = *unaff_x22;
  uVar5 = FUN_025b1328();
  if (lVar10 != 0) {
                    /* try { // try from 0326bc10 to 0336bc2f has its CatchHandler @ 0326bdb0 */
    _in_stack_00000020 = FUN_032835e4(lVar10,uVar5,0);
    puVar2 = PTR_DAT_03cd8408;
    lVar10 = *(long *)PTR_DAT_03cd8408;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar10 = *(long *)puVar2;
    }
    auVar11 = FUN_03283ad0(&stack0x00000020,*(undefined4 *)(*(long *)(lVar10 + 0xb8) + 4),0);
    puVar3 = System_Reflection_RuntimePropertyInfo___TypeInfo;
                    /* try { // try from 0326bc5c to 0336bc67 has its CatchHandler @ 0326bdac */
    _in_stack_00000020 = auVar11;
                    /* try { // try from 0326bc68 to 0336bc97 has its CatchHandler @ 0326ba20 */
    auVar11 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                        (&stack0x00000020,
                         *(undefined8 *)System_Reflection_RuntimePropertyInfo___TypeInfo,0);
    _in_stack_00000020 = auVar11;
    if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_0271c480(0);
    plVar6 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
    puVar1 = PTR_DAT_03cbeda8;
    uStack000000000000004c = *(undefined4 *)(unaff_x19 + 0x14);
    lVar10 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,(long)&stack0x00000048 + 4);
    if (plVar6 != (long *)0x0) {
      if ((lVar10 != 0) &&
         (lVar7 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
LAB_0326c164:
        uVar5 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar5,0);
      }
      if ((int)plVar6[3] != 0) {
        plVar6[4] = lVar10;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 4,lVar10);
        iStack0000000000000048 = *(int *)(unaff_x19 + 0x10) + 1;
        lVar10 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x00000048);
        if ((lVar10 != 0) &&
           (lVar7 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
        goto LAB_0326c164;
        if (1 < *(uint *)(plVar6 + 3)) {
          plVar6[5] = lVar10;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 5,lVar10);
          lVar10 = FUN_032986bc(&stack0x00000030,0);
          if ((lVar10 != 0) &&
             (lVar7 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
          goto LAB_0326c164;
          if (2 < *(uint *)(plVar6 + 3)) {
            plVar6[6] = lVar10;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 6,lVar10);
            uStack000000000000001c = *(undefined4 *)(unaff_x19 + 0x14);
            lVar10 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,(long)&stack0x00000018 + 4);
            if ((lVar10 != 0) &&
               (lVar7 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
            goto LAB_0326c164;
            if (3 < *(uint *)(plVar6 + 3)) {
              plVar6[7] = lVar10;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 7,lVar10);
              uVar5 = FUN_025beaa4(uVar5,*(undefined8 *)Unity_XR_CoreUtils_BoundsUtils_TypeInfo,
                                   plVar6,0);
              auVar11 = FUN_03283f90(&stack0x00000020,uVar5,0);
              _in_stack_00000020 = auVar11;
              auVar11 = FUN_03283b60(&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
              _in_stack_00000020 = auVar11;
              FUN_03283ba8(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
              lVar10 = *unaff_x22;
              uVar5 = FUN_025b1328();
              if (lVar10 != 0) {
                auVar11 = FUN_032835e4(lVar10,uVar5,0);
                _in_stack_00000020 = auVar11;
                auVar11 = FUN_03283ad0(&stack0x00000020,
                                       *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4),0);
                _in_stack_00000020 = auVar11;
                auVar11 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                                    (&stack0x00000020,*(undefined8 *)puVar3,0);
                _in_stack_00000020 = auVar11;
                uVar5 = FUN_0271c480(0);
                iStack0000000000000018 = *(int *)(unaff_x19 + 0x10) + 1;
                uVar8 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x00000018);
                iStack0000000000000014 = *(int *)(unaff_x19 + 0x10) + 3;
                uVar9 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,(long)&stack0x00000010 + 4);
                puVar4 = UnityEngine_UIElements_BoundsIntField_TypeInfo;
                uVar5 = FUN_025be9f0(uVar5,*(undefined8 *)
                                            UnityEngine_UIElements_BoundsIntField_TypeInfo,uVar8,
                                     uVar9,0);
                auVar11 = FUN_03283f90(&stack0x00000020,uVar5,0);
                _in_stack_00000020 = auVar11;
                auVar11 = FUN_03283b60(&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
                _in_stack_00000020 = auVar11;
                FUN_03283ba8(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
                lVar10 = *unaff_x22;
                uVar5 = FUN_025b1328();
                if (lVar10 != 0) {
                  auVar11 = FUN_032835e4(lVar10,uVar5,0);
                  _in_stack_00000020 = auVar11;
                  auVar11 = FUN_03283ad0(&stack0x00000020,
                                         *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4),0);
                  _in_stack_00000020 = auVar11;
                  auVar11 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                                      (&stack0x00000020,*(undefined8 *)puVar3,0);
                  _in_stack_00000020 = auVar11;
                  uVar5 = FUN_0271c480(0);
                  iStack0000000000000010 = *(int *)(unaff_x19 + 0x10) + 3;
                  uVar8 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x00000010);
                  iStack000000000000000c = *(int *)(unaff_x19 + 0x10) + 5;
                  uVar9 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,(long)&stack0x00000008 + 4);
                  uVar5 = FUN_025be9f0(uVar5,*(undefined8 *)puVar4,uVar8,uVar9,0);
                  auVar11 = FUN_03283f90(&stack0x00000020,uVar5,0);
                  _in_stack_00000020 = auVar11;
                  auVar11 = FUN_03283b60(&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
                  _in_stack_00000020 = auVar11;
                  FUN_03283ba8(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
                  lVar10 = *unaff_x22;
                  uVar5 = FUN_025b1328();
                  if (lVar10 != 0) {
                    auVar11 = FUN_032835e4(lVar10,uVar5,0);
                    _in_stack_00000020 = auVar11;
                    auVar11 = FUN_03283ad0(&stack0x00000020,
                                           *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4),0)
                    ;
                    _in_stack_00000020 = auVar11;
                    auVar11 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                                        (&stack0x00000020,*(undefined8 *)puVar3,0);
                    _in_stack_00000020 = auVar11;
                    uVar5 = FUN_0271c480(0);
                    iStack0000000000000008 = *(int *)(unaff_x19 + 0x10) + 5;
                    uVar8 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x00000008);
                    iStack0000000000000004 = *(int *)(unaff_x19 + 0x10) + 7;
                    uVar9 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x00000004);
                    uVar5 = FUN_025be9f0(uVar5,*(undefined8 *)puVar4,uVar8,uVar9,0);
                    auVar11 = FUN_03283f90(&stack0x00000020,uVar5,0);
                    _in_stack_00000020 = auVar11;
                    auVar11 = FUN_03283b60(&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
                    _in_stack_00000020 = auVar11;
                    FUN_03283ba8(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
                    return;
                  }
                }
              }
              goto LAB_0326c15c;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
  }
LAB_0326c15c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


