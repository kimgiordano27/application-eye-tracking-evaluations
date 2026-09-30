/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$ReconstructNormalAtWorldPos
ENTRY_POINT: 077033a0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__ReconstructNormalAtWorldPos(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_04447ba8(PTR_DAT_09f30010);
  FUN_04447ba8(PTR_DAT_09f30018);
  FUN_04447ba8(PTR_DAT_09f30020);
  FUN_04447ba8(PTR_DAT_09f30028);
  FUN_04447ba8(PTR_DAT_09f30030);
  FUN_04447ba8(PTR_DAT_09f30038);
  FUN_04447ba8(PTR_DAT_09f30040);
  FUN_04447ba8(PTR_DAT_09f30048);
  FUN_04447ba8(PTR_DAT_09f30050);
  FUN_04447ba8(PTR_DAT_09f2f820);
  FUN_04447ba8(PTR_DAT_09f2fef0);
  FUN_04447ba8(PTR_DAT_09f2f828);
  FUN_04447ba8(PTR_DAT_09f2f830);
  FUN_04447ba8(PTR_DAT_09f2f838);
  FUN_04447ba8(PTR_DAT_09f2ff80);
  *(undefined1 *)(unaff_x20 + 0xff6) = 1;
  lVar3 = FUN_076f25e4();
  plVar6 = (long *)(unaff_x19 + 0xe8);
  lVar5 = *plVar6;
  if (lVar5 == 0) {
    if (lVar3 == 0) goto LAB_0770374c;
    if (*(char *)(lVar3 + 0x10) == '\0') {
      in_stack_00000040 = *(undefined8 *)(lVar3 + 0x20);
      uVar4 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f2f838,&stack0x00000040);
      FUN_078b5afc(*(undefined8 *)PTR_DAT_09f2ff80,uVar4,*(undefined8 *)(lVar3 + 0x18),0);
      FUN_076f1130();
      *plVar6 = 0;
      thunk_FUN_044bb4b4(plVar6,0);
      return;
    }
    *plVar6 = *(long *)(lVar3 + 0x28);
    thunk_FUN_044bb4b4(plVar6);
    lVar5 = *plVar6;
  }
  puVar1 = (undefined8 *)(unaff_x19 + 0x10c);
  if (*(char *)(unaff_x19 + 0xdf) != '\0') {
    puVar1 = (undefined8 *)(unaff_x19 + 0xf4);
  }
  in_stack_00000048 = puVar1[1];
  in_stack_00000040 = *puVar1;
  in_stack_00000050 = puVar1[2];
  if (lVar5 != 0) {
    FUN_076fd2f0(lVar5);
    puVar2 = PTR_DAT_09f30010;
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      plVar6 = (long *)(*(long *)(unaff_x19 + 0x50) + 0x20);
      lVar3 = *plVar6;
      uVar4 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30010);
      FUN_073a6ca4();
      lVar3 = FUN_07a84204(lVar3,uVar4,0);
      if (lVar3 == 0) {
        lVar5 = 0;
      }
      else {
        uVar4 = *(undefined8 *)puVar2;
        lVar5 = thunk_FUN_04485110(lVar3,uVar4);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_044481e4(lVar3,uVar4);
        }
      }
      puVar2 = PTR_DAT_09f205b0;
      *plVar6 = lVar5;
      thunk_FUN_044bb4b4(plVar6);
      lVar3 = *(long *)(unaff_x19 + 0x68);
      uVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
      FUN_074890f0();
      if (lVar3 != 0) {
        FUN_076ff4d8(lVar3,uVar4);
        lVar3 = *(long *)(unaff_x19 + 0x70);
        uVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
        FUN_074890f0();
        if (lVar3 != 0) {
          FUN_076ff4d8(lVar3,uVar4);
          lVar3 = *(long *)(unaff_x19 + 0x78);
          uVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
          FUN_074890f0();
          if (lVar3 != 0) {
            FUN_076ff4d8(lVar3,uVar4);
            lVar3 = *(long *)(unaff_x19 + 0x80);
            uVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
            FUN_074890f0();
            if (lVar3 != 0) {
              FUN_076ff4d8(lVar3,uVar4);
              lVar3 = *(long *)(unaff_x19 + 0x88);
              uVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
              FUN_074890f0();
              if (lVar3 != 0) {
                FUN_076ff4d8(lVar3,uVar4);
                lVar3 = *(long *)(unaff_x19 + 0x90);
                uVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                FUN_074890f0();
                if (lVar3 != 0) {
                  FUN_076ff4d8(lVar3,uVar4);
                  lVar3 = *(long *)(unaff_x19 + 0x98);
                  uVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                  FUN_074890f0();
                  if (lVar3 != 0) {
                    FUN_076ff4d8(lVar3,uVar4);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0770374c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


