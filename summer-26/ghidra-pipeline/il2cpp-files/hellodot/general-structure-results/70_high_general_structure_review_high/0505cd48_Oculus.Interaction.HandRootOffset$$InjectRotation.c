/*
FUNCTION_NAME: Oculus.Interaction.HandRootOffset$$InjectRotation
ENTRY_POINT: 0505cd48
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Oculus_Interaction_HandRootOffset__InjectRotation(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  int *unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack000000000000002c;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(*(undefined8 *)(param_1 + 0xbe0));
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fdfc0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06601178);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8688);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1be8);
  *(undefined1 *)(unaff_x20 + 0x1cc) = 1;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  iVar1 = *unaff_x19;
  if (iVar1 == 0) {
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    *unaff_x19 = -1;
LAB_0505cdec:
    uVar4 = FUN_044a8b84(&stack0x00000010,*(undefined8 *)PTR_DAT_065e1bd8);
    if ((uVar4 & 1) == 0) {
      uVar8 = *(undefined8 *)(unaff_x19 + 8);
      uVar7 = thunk_FUN_02c7737c(PTR_DAT_06601b08);
      uVar7 = FUN_04fbd0d4(uVar8,uVar7,0);
      uVar8 = thunk_FUN_02c7737c(PTR_DAT_06601b50);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar7,uVar8);
    }
LAB_0505ce5c:
    if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar3 = Niantic_Platform_Analytics_Telemetry_PluginInfo__set_Version
                      (*(long *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar9 = FUN_04046650(lVar3,0,*(undefined8 *)PTR_DAT_065e1be8);
    _in_stack_00000010 = auVar9;
    uVar4 = FUN_044a8b38(&stack0x00000010,*(undefined8 *)PTR_DAT_065e1be0);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000010;
      if (*(int *)(*(long *)PTR_DAT_06601a98 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030aa290(unaff_x19 + 2,&stack0x00000010);
      return;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        unaff_x19[0x14] = 0;
        unaff_x19[0x15] = 0;
        unaff_x19[0x16] = 0;
        unaff_x19[0x17] = 0;
        *unaff_x19 = -1;
        _in_stack_00000010 = ZEXT816(0);
        goto LAB_0505cfa0;
      }
      plVar2 = *(long **)(unaff_x19 + 8);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      iVar1 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
      if (iVar1 == 0) {
        plVar2 = *(long **)(unaff_x19 + 8);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar3 = (**(code **)(*plVar2 + 0x188))
                          (plVar2,*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)(*plVar2 + 400));
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        _in_stack_00000010 = FUN_04046650(lVar3,0,*(undefined8 *)PTR_DAT_065e1be8);
        uVar4 = FUN_044a8b38(&stack0x00000010,*(undefined8 *)PTR_DAT_065e1be0);
        if ((uVar4 & 1) == 0) {
          *unaff_x19 = 0;
          *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000010;
          if (*(int *)(*(long *)PTR_DAT_06601a98 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_030aa290(unaff_x19 + 2,&stack0x00000010);
          return;
        }
        goto LAB_0505cdec;
      }
      goto LAB_0505ce5c;
    }
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    *unaff_x19 = -1;
  }
  FUN_044a8b84(&stack0x00000010,*(undefined8 *)PTR_DAT_065e1bd8);
  plVar2 = *(long **)(unaff_x19 + 8);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  iVar1 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
  plVar2 = *(long **)(unaff_x19 + 8);
  if (iVar1 != 4) {
    lVar3 = thunk_FUN_02c7737c(PTR_DAT_065dc0d8);
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar7 = FUN_04ef45ec(0);
    plVar5 = *(long **)(unaff_x19 + 8);
    if (plVar5 != (long *)0x0) {
      uStack000000000000002c =
           (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
      uVar8 = thunk_FUN_02c7737c(PTR_DAT_065fe178);
      uVar8 = thunk_FUN_02cea4e8(uVar8,&stack0x0000002c);
      uVar6 = thunk_FUN_02c7737c(PTR_DAT_06601b00);
      uVar7 = FUN_05017038(uVar6,uVar7,uVar8,0);
      uVar7 = FUN_04fbd0d4(plVar2,uVar7,0);
      uVar8 = thunk_FUN_02c7737c(PTR_DAT_06601b50);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar7,uVar8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  plVar2 = (long *)(**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(*plVar2 + 0x250));
  lVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06601178);
  if ((plVar2 != (long *)0x0) && (*plVar2 != *(long *)PTR_DAT_065c8688)) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce8018(plVar2);
  }
  FUN_050551e4(lVar3,plVar2);
  *(long *)(unaff_x19 + 0xe) = lVar3;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar8 = *(undefined8 *)(unaff_x19 + 0xc);
  uVar7 = thunk_FUN_02cea798(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)PTR_DAT_065fdfc0);
  FUN_05050abc(lVar3,uVar7,uVar8);
  if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar3 = FUN_05051418(*(long *)(unaff_x19 + 0xe),*(undefined8 *)(unaff_x19 + 8),
                       *(undefined8 *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x19 + 10));
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  auVar9 = FUN_04fa5130(lVar3,0,0);
  uVar4 = FUN_04e5bb90();
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 2;
    *(undefined1 (*) [16])(unaff_x19 + 0x14) = auVar9;
    FUN_0620720c(&PTR_DAT_06601000);
    return;
  }
LAB_0505cfa0:
  FUN_04e5bbac();
  uVar7 = *(undefined8 *)(unaff_x19 + 0xe);
  unaff_x19[0xe] = 0;
  unaff_x19[0xf] = 0;
  *unaff_x19 = -2;
  if (*(int *)(*(long *)PTR_DAT_06601a98 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04266690(unaff_x19 + 2,uVar7,*(undefined8 *)PTR_DAT_06601b48);
  return;
}


