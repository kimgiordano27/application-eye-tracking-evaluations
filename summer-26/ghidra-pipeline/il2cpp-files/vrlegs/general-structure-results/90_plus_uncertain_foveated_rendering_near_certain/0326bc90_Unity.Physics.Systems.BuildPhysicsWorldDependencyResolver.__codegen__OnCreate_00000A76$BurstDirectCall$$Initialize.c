/*
FUNCTION_NAME: Unity.Physics.Systems.BuildPhysicsWorldDependencyResolver.__codegen__OnCreate_00000A76$BurstDirectCall$$Initialize
ENTRY_POINT: 0326bc90
PROGRAM: vrlegs-libil2cpp.so
SCORE: 91
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: validity_gate;ray_interaction;foveation_rendering;keyword_support
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_4;strong_foveation_hits_3;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


void Unity_Physics_Systems_BuildPhysicsWorldDependencyResolver___codegen__OnCreate_00000A76_BurstDirectCall__Initialize
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined1 auVar9 [16];
  int iStack0000000000000004;
  int iStack0000000000000008;
  int iStack000000000000000c;
  int iStack0000000000000010;
  int iStack0000000000000014;
  int iStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  int in_stack_00000048;
  undefined4 uStack000000000000004c;
  
  uVar3 = FUN_0271c480();
  plVar4 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
  puVar1 = PTR_DAT_03cbeda8;
  uStack000000000000004c = *(undefined4 *)(unaff_x19 + 0x14);
  lVar5 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x0000004c);
  if (plVar4 == (long *)0x0) {
LAB_0326c15c:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_0326c164:
    uVar3 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar3,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 4,lVar5);
    in_stack_00000048 = *(int *)(unaff_x19 + 0x10) + 1;
    lVar5 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x00000048);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_0326c164;
    if (1 < *(uint *)(plVar4 + 3)) {
      plVar4[5] = lVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 5,lVar5);
      lVar5 = FUN_032986bc(&stack0x00000030,0);
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
      goto LAB_0326c164;
      if (2 < *(uint *)(plVar4 + 3)) {
        plVar4[6] = lVar5;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 6,lVar5);
        uStack000000000000001c = *(undefined4 *)(unaff_x19 + 0x14);
        lVar5 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,(long)&stack0x00000018 + 4);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
        goto LAB_0326c164;
        if (3 < *(uint *)(plVar4 + 3)) {
          plVar4[7] = lVar5;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 7,lVar5);
          uVar3 = FUN_025beaa4(uVar3,*(undefined8 *)Unity_XR_CoreUtils_BoundsUtils_TypeInfo,plVar4,0
                              );
          _in_stack_00000020 = FUN_03283f90(&stack0x00000020,uVar3,0);
          auVar9 = FUN_03283b60(&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
          _in_stack_00000020 = auVar9;
          FUN_03283ba8(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
          lVar5 = *unaff_x22;
          uVar3 = FUN_025b1328();
          if (lVar5 != 0) {
            auVar9 = FUN_032835e4(lVar5,uVar3,0);
            _in_stack_00000020 = auVar9;
            auVar9 = FUN_03283ad0(&stack0x00000020,*(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 4)
                                  ,0);
            _in_stack_00000020 = auVar9;
            auVar9 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                               (&stack0x00000020,*unaff_x27,0);
            _in_stack_00000020 = auVar9;
            uVar3 = FUN_0271c480(0);
            iStack0000000000000018 = *(int *)(unaff_x19 + 0x10) + 1;
            uVar7 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x00000018);
            iStack0000000000000014 = *(int *)(unaff_x19 + 0x10) + 3;
            uVar8 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,(long)&stack0x00000010 + 4);
            puVar2 = UnityEngine_UIElements_BoundsIntField_TypeInfo;
            uVar3 = FUN_025be9f0(uVar3,*(undefined8 *)UnityEngine_UIElements_BoundsIntField_TypeInfo
                                 ,uVar7,uVar8,0);
            auVar9 = FUN_03283f90(&stack0x00000020,uVar3,0);
            _in_stack_00000020 = auVar9;
            auVar9 = FUN_03283b60(&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
            _in_stack_00000020 = auVar9;
            FUN_03283ba8(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
            lVar5 = *unaff_x22;
            uVar3 = FUN_025b1328();
            if (lVar5 != 0) {
              auVar9 = FUN_032835e4(lVar5,uVar3,0);
              _in_stack_00000020 = auVar9;
              auVar9 = FUN_03283ad0(&stack0x00000020,
                                    *(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 4),0);
              _in_stack_00000020 = auVar9;
              auVar9 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                                 (&stack0x00000020,*unaff_x27,0);
              _in_stack_00000020 = auVar9;
              uVar3 = FUN_0271c480(0);
              iStack0000000000000010 = *(int *)(unaff_x19 + 0x10) + 3;
              uVar7 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x00000010);
              iStack000000000000000c = *(int *)(unaff_x19 + 0x10) + 5;
              uVar8 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,(long)&stack0x00000008 + 4);
              uVar3 = FUN_025be9f0(uVar3,*(undefined8 *)puVar2,uVar7,uVar8,0);
              auVar9 = FUN_03283f90(&stack0x00000020,uVar3,0);
              _in_stack_00000020 = auVar9;
              auVar9 = FUN_03283b60(&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
              _in_stack_00000020 = auVar9;
              FUN_03283ba8(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
              lVar5 = *unaff_x22;
              uVar3 = FUN_025b1328();
              if (lVar5 != 0) {
                auVar9 = FUN_032835e4(lVar5,uVar3,0);
                _in_stack_00000020 = auVar9;
                auVar9 = FUN_03283ad0(&stack0x00000020,
                                      *(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 4),0);
                _in_stack_00000020 = auVar9;
                auVar9 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                                   (&stack0x00000020,*unaff_x27,0);
                _in_stack_00000020 = auVar9;
                uVar3 = FUN_0271c480(0);
                iStack0000000000000008 = *(int *)(unaff_x19 + 0x10) + 5;
                uVar7 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x00000008);
                iStack0000000000000004 = *(int *)(unaff_x19 + 0x10) + 7;
                uVar8 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x00000004);
                uVar3 = FUN_025be9f0(uVar3,*(undefined8 *)puVar2,uVar7,uVar8,0);
                auVar9 = FUN_03283f90(&stack0x00000020,uVar3,0);
                _in_stack_00000020 = auVar9;
                auVar9 = FUN_03283b60(&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
                _in_stack_00000020 = auVar9;
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


