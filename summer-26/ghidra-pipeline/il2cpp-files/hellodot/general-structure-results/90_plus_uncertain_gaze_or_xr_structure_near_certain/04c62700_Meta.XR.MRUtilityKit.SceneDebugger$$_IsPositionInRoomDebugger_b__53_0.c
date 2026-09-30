/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$<IsPositionInRoomDebugger>b__53_0
ENTRY_POINT: 04c62700
PROGRAM: hellodot-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDebugger__<IsPositionInRoomDebugger>b__53_0(long param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  long *plVar7;
  long *unaff_x22;
  long lVar8;
  long unaff_x23;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(*(undefined8 *)(param_1 + 0x3e0));
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e73e8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e73f0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e73f8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7400);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7408);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7410);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7418);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8668);
  *(undefined1 *)(unaff_x23 + 0x9c9) = 1;
  puVar2 = PTR_DAT_065e7400;
  in_stack_00000008 = 0;
  plVar7 = *(long **)(unaff_x20 + 0x40);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04c62bd4(*(undefined8 *)puVar2,&stack0x00000018);
  auVar11 = FUN_04c62c58();
  puVar2 = PTR_DAT_065e7408;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x388))
              (plVar7,auVar11._0_8_,auVar11._8_8_,*(undefined8 *)(*plVar7 + 0x390));
    plVar7 = *(long **)(unaff_x20 + 0x40);
    FUN_04c62bd4(*(undefined8 *)puVar2,&stack0x00000018);
    auVar11 = FUN_04c62c58();
    puVar2 = PTR_DAT_065e73f8;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x4c8))
                (plVar7,auVar11._0_8_,auVar11._8_8_,*(undefined8 *)(*plVar7 + 0x4d0));
      plVar7 = *(long **)(unaff_x20 + 0x40);
      auVar11 = FUN_04c62bd4(*(undefined8 *)puVar2,&stack0x00000018);
      puVar3 = PTR_DAT_065e73f0;
      puVar2 = PTR_DAT_065c8668;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x348))(plVar7,auVar11._0_8_,*(undefined8 *)(*plVar7 + 0x350));
        auVar11 = FUN_04c62bd4(*(undefined8 *)puVar3,&stack0x00000018);
        lVar5 = *(long *)puVar2;
        if (auVar11._0_8_ != 0) {
          lVar5 = auVar11._0_8_;
        }
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          auVar11 = thunk_FUN_02cd038c(*unaff_x22);
        }
        puVar2 = PTR_DAT_065e73e8;
        if (lVar5 != 0) {
          uVar4 = FUN_04dbbb18(lVar5,**(undefined8 **)(*unaff_x22 + 0xb8),0);
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_02cd038c(lVar5);
            lVar5 = *(long *)puVar2;
          }
          puVar3 = PTR_DAT_065e4810;
          lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar8 == 0) {
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_02cd038c(lVar5);
              lVar5 = *(long *)puVar2;
            }
            uVar9 = **(undefined8 **)(lVar5 + 0xb8);
            lVar8 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065d7878);
            FUN_04a5632c(lVar8,uVar9,*(undefined8 *)PTR_DAT_065e73c8,0);
            *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar8;
          }
          uVar4 = UnityEngine_Rendering_RenderPipeline__IsRenderRequestSupported<__Il2CppFullySharedGenericType>
                            (uVar4,lVar8,*(undefined8 *)puVar3);
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_02cd038c(lVar5);
            lVar5 = *(long *)puVar2;
          }
          puVar3 = PTR_DAT_065e73b0;
          lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
          if (lVar8 == 0) {
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_02cd038c(lVar5);
              lVar5 = *(long *)puVar2;
            }
            uVar9 = **(undefined8 **)(lVar5 + 0xb8);
            lVar8 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065d9628);
            FUN_04a5701c(lVar8,uVar9,*(undefined8 *)PTR_DAT_065e73d0,0);
            *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar8;
          }
          uVar4 = FUN_033eb504(uVar4,lVar8,*(undefined8 *)puVar3);
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_02cd038c(lVar5);
            lVar5 = *(long *)puVar2;
          }
          lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
          if (lVar8 == 0) {
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_02cd038c(lVar5);
              lVar5 = *(long *)puVar2;
            }
            uVar9 = **(undefined8 **)(lVar5 + 0xb8);
            lVar8 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e73c0);
            FUN_04a5701c(lVar8,uVar9,*(undefined8 *)PTR_DAT_065e73d8,0);
            lVar5 = *(long *)puVar2;
            *(long *)(*(long *)(lVar5 + 0xb8) + 0x18) = lVar8;
          }
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_02cd038c(lVar5);
            lVar5 = *(long *)puVar2;
          }
          puVar3 = PTR_DAT_065e73b8;
          lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
          if (lVar10 == 0) {
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_02cd038c(lVar5);
              lVar5 = *(long *)puVar2;
            }
            uVar9 = **(undefined8 **)(lVar5 + 0xb8);
            lVar10 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e73c0);
            FUN_04a5701c(lVar10,uVar9,*(undefined8 *)PTR_DAT_065e73e0,0);
            *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) = lVar10;
          }
          auVar11 = FUN_033f7aa4(uVar4,lVar8,lVar10,*(undefined8 *)puVar3);
          lVar5 = auVar11._0_8_;
          auVar1._8_8_ = 0;
          auVar1._0_8_ = auVar11._8_8_;
          auVar11 = auVar1 << 0x40;
          if (lVar5 != 0) {
            plVar7 = *(long **)(unaff_x20 + 0x40);
            auVar11 = FUN_0467ad20(lVar5,*(undefined8 *)PTR_DAT_065e7418,&stack0x00000008,
                                   *(undefined8 *)PTR_DAT_065e73a8);
            puVar2 = PTR_DAT_065e7410;
            if (plVar7 != (long *)0x0) {
              uVar4 = in_stack_00000008;
              if ((auVar11._0_8_ & 1) == 0) {
                uVar4 = 0;
              }
              (**(code **)(*plVar7 + 0x2a8))(plVar7,uVar4,*(undefined8 *)(*plVar7 + 0x2b0));
              plVar7 = *(long **)(unaff_x20 + 0x40);
              auVar11 = FUN_0467ad20(lVar5,*(undefined8 *)puVar2);
              if ((plVar7 != (long *)0x0) &&
                 (auVar11 = (**(code **)(*plVar7 + 0x468))
                                      (plVar7,0,*(undefined8 *)(*plVar7 + 0x470)), unaff_x19 != 0))
              {
                plVar6 = *(long **)(unaff_x20 + 0x40);
                plVar7 = (long *)FUN_054de920();
                if (plVar7 == (long *)0x0) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
                }
                auVar11._8_8_ = uVar4;
                auVar11._0_8_ = uVar4;
                if (plVar6 != (long *)0x0) {
                  (**(code **)(*plVar6 + 0x288))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 0x290));
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c(auVar11._0_8_,auVar11._8_8_);
}


