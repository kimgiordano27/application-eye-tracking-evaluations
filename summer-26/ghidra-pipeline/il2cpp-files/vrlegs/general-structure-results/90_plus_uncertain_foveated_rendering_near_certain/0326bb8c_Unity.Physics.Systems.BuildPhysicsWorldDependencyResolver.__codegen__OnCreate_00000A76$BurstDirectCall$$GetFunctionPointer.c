/*
FUNCTION_NAME: Unity.Physics.Systems.BuildPhysicsWorldDependencyResolver.__codegen__OnCreate_00000A76$BurstDirectCall$$GetFunctionPointer
ENTRY_POINT: 0326bb8c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 91
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: validity_gate;ray_interaction;foveation_rendering;keyword_support
EVIDENCE: validity_or_gating_hits_14;ray_or_cast_sink_hits_4;strong_foveation_hits_4;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


void Unity_Physics_Systems_BuildPhysicsWorldDependencyResolver___codegen__OnCreate_00000A76_BurstDirectCall__GetFunctionPointer
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  long lVar11;
  undefined1 auVar12 [16];
  int iStack0000000000000004;
  int iStack0000000000000008;
  int iStack000000000000000c;
  int iStack0000000000000010;
  int iStack0000000000000014;
  int iStack0000000000000018;
  int iStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  int iStack0000000000000048;
  int iStack000000000000004c;
  
  FUN_01ab69ac(Unity_XR_CoreUtils_BoundsUtils_TypeInfo);
  FUN_01ab69ac(System_Reflection_RuntimePropertyInfo___TypeInfo);
  *(undefined1 *)(unaff_x23 + 0x8ba) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if ((unaff_x19[1] != 1) || (*unaff_x19 != 0x39)) {
    return;
  }
  _in_stack_00000030 = FUN_0326ba20();
  uVar5 = FUN_032978d0(&stack0x00000030,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  lVar11 = *unaff_x22;
  uVar6 = FUN_025b1328();
  if (lVar11 == 0) {
LAB_0326c15c:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  _in_stack_00000020 = FUN_032835e4(lVar11,uVar6,0);
  puVar2 = PTR_DAT_03cd8408;
  lVar11 = *(long *)PTR_DAT_03cd8408;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar11 = *(long *)puVar2;
  }
  auVar12 = FUN_03283ad0(&stack0x00000020,*(undefined4 *)(*(long *)(lVar11 + 0xb8) + 4),0);
  puVar3 = System_Reflection_RuntimePropertyInfo___TypeInfo;
  _in_stack_00000020 = auVar12;
  auVar12 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                      (&stack0x00000020,
                       *(undefined8 *)System_Reflection_RuntimePropertyInfo___TypeInfo,0);
  _in_stack_00000020 = auVar12;
  if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_0271c480(0);
  plVar7 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
  puVar1 = PTR_DAT_03cbeda8;
  iStack000000000000004c = unaff_x19[5];
  lVar11 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,(long)&stack0x00000048 + 4);
  if (plVar7 == (long *)0x0) goto LAB_0326c15c;
  if (lVar11 != 0) {
    lVar8 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar7 + 0x40));
    if (lVar8 == 0) goto LAB_0326c164;
  }
  if ((int)plVar7[3] != 0) {
    plVar7[4] = lVar11;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7 + 4,lVar11);
    iStack0000000000000048 = unaff_x19[4] + 1;
    lVar11 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x00000048);
    if (lVar11 != 0) {
      lVar8 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar7 + 0x40));
      if (lVar8 == 0) goto LAB_0326c164;
    }
    if (*(uint *)(plVar7 + 3) < 2) goto LAB_0326c160;
    plVar7[5] = lVar11;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7 + 5,lVar11);
    lVar11 = FUN_032986bc(&stack0x00000030,0);
    if (lVar11 != 0) {
      lVar8 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar7 + 0x40));
      if (lVar8 == 0) goto LAB_0326c164;
    }
    if (2 < *(uint *)(plVar7 + 3)) {
      plVar7[6] = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7 + 6,lVar11);
      iStack000000000000001c = unaff_x19[5];
      lVar11 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,(long)&stack0x00000018 + 4);
      if (lVar11 != 0) {
        lVar8 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar7 + 0x40));
        if (lVar8 == 0) {
LAB_0326c164:
          uVar6 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar6,0);
        }
      }
      if (3 < *(uint *)(plVar7 + 3)) {
        plVar7[7] = lVar11;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7 + 7,lVar11);
        uVar6 = FUN_025beaa4(uVar6,*(undefined8 *)Unity_XR_CoreUtils_BoundsUtils_TypeInfo,plVar7,0);
        auVar12 = FUN_03283f90(&stack0x00000020,uVar6,0);
        _in_stack_00000020 = auVar12;
        auVar12 = FUN_03283b60(&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
        _in_stack_00000020 = auVar12;
        FUN_03283ba8(&stack0x00000020,unaff_x19[0xb],0);
        lVar11 = *unaff_x22;
        uVar6 = FUN_025b1328();
        if (lVar11 != 0) {
          auVar12 = FUN_032835e4(lVar11,uVar6,0);
          _in_stack_00000020 = auVar12;
          auVar12 = FUN_03283ad0(&stack0x00000020,
                                 *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4),0);
          _in_stack_00000020 = auVar12;
          auVar12 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                              (&stack0x00000020,*(undefined8 *)puVar3,0);
          _in_stack_00000020 = auVar12;
          uVar6 = FUN_0271c480(0);
          iStack0000000000000018 = unaff_x19[4] + 1;
          uVar9 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x00000018);
          iStack0000000000000014 = unaff_x19[4] + 3;
          uVar10 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,(long)&stack0x00000010 + 4);
          puVar4 = UnityEngine_UIElements_BoundsIntField_TypeInfo;
          uVar6 = FUN_025be9f0(uVar6,*(undefined8 *)UnityEngine_UIElements_BoundsIntField_TypeInfo,
                               uVar9,uVar10,0);
          auVar12 = FUN_03283f90(&stack0x00000020,uVar6,0);
          _in_stack_00000020 = auVar12;
          auVar12 = FUN_03283b60(&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
          _in_stack_00000020 = auVar12;
          FUN_03283ba8(&stack0x00000020,unaff_x19[0xb],0);
          lVar11 = *unaff_x22;
          uVar6 = FUN_025b1328();
          if (lVar11 != 0) {
            auVar12 = FUN_032835e4(lVar11,uVar6,0);
            _in_stack_00000020 = auVar12;
            auVar12 = FUN_03283ad0(&stack0x00000020,
                                   *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4),0);
            _in_stack_00000020 = auVar12;
            auVar12 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                                (&stack0x00000020,*(undefined8 *)puVar3,0);
            _in_stack_00000020 = auVar12;
            uVar6 = FUN_0271c480(0);
            iStack0000000000000010 = unaff_x19[4] + 3;
            uVar9 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x00000010);
            iStack000000000000000c = unaff_x19[4] + 5;
            uVar10 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,(long)&stack0x00000008 + 4);
            uVar6 = FUN_025be9f0(uVar6,*(undefined8 *)puVar4,uVar9,uVar10,0);
            auVar12 = FUN_03283f90(&stack0x00000020,uVar6,0);
            _in_stack_00000020 = auVar12;
            auVar12 = FUN_03283b60(&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
            _in_stack_00000020 = auVar12;
            FUN_03283ba8(&stack0x00000020,unaff_x19[0xb],0);
            lVar11 = *unaff_x22;
            uVar6 = FUN_025b1328();
            if (lVar11 != 0) {
              auVar12 = FUN_032835e4(lVar11,uVar6,0);
              _in_stack_00000020 = auVar12;
              auVar12 = FUN_03283ad0(&stack0x00000020,
                                     *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4),0);
              _in_stack_00000020 = auVar12;
              auVar12 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                                  (&stack0x00000020,*(undefined8 *)puVar3,0);
              _in_stack_00000020 = auVar12;
              uVar6 = FUN_0271c480(0);
              iStack0000000000000008 = unaff_x19[4] + 5;
              uVar9 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x00000008);
              iStack0000000000000004 = unaff_x19[4] + 7;
              uVar10 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x00000004);
              uVar6 = FUN_025be9f0(uVar6,*(undefined8 *)puVar4,uVar9,uVar10,0);
              auVar12 = FUN_03283f90(&stack0x00000020,uVar6,0);
              _in_stack_00000020 = auVar12;
              auVar12 = FUN_03283b60(&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
              _in_stack_00000020 = auVar12;
              FUN_03283ba8(&stack0x00000020,unaff_x19[0xb],0);
              return;
            }
          }
        }
        goto LAB_0326c15c;
      }
    }
  }
LAB_0326c160:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


