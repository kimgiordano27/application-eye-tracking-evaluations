/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$ReceiveAnchorRemoved
ENTRY_POINT: 04c75624
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__ReceiveAnchorRemoved(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  int *unaff_x19;
  long unaff_x20;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c86c0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c86d8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e4d98);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d6b80);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7260);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e4308);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e53a8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca9b0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cbbe0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7e18);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7718);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e80e8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e80f0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e80f8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7e40);
  *(undefined1 *)(unaff_x20 + 0xaaf) = 1;
  puVar2 = PTR_DAT_065e80e8;
  puVar1 = PTR_DAT_065e80d8;
  plVar17 = (long *)PTR_DAT_065e7e50;
  in_stack_00000000 = 0;
  in_stack_00000008 = 0;
  iVar3 = *unaff_x19;
  plVar12 = *(long **)(unaff_x19 + 0xc);
  if (iVar3 == 0) {
    _in_stack_00000000 = *(undefined1 (*) [16])(unaff_x19 + 0x14);
    iVar3 = -1;
    unaff_x19[0x14] = 0;
    unaff_x19[0x15] = 0;
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    *unaff_x19 = -1;
LAB_04c75800:
    plVar5 = (long *)FUN_044a9014();
    if (iVar3 == 1) goto LAB_04c75818;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar6 = (long *)(**(code **)(*plVar5 + 0x338))(plVar5,*(undefined8 *)(*plVar5 + 0x340));
    *(long **)(unaff_x19 + 0x18) = plVar6;
    if (plVar6 == (long *)0x0) {
LAB_04c75960:
      uVar13 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065c86d8);
      FUN_04678954(uVar13,*(undefined8 *)PTR_DAT_065c86c0);
      goto LAB_04c75984;
    }
    lVar4 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065e4308) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04c758c8;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)PTR_DAT_065e4308,0);
LAB_04c758c8:
    iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (iVar3 == 0) goto LAB_04c75960;
    lVar4 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e7e18);
    FUN_04f7383c(lVar4,0);
    auVar18 = (**(code **)(*plVar5 + 0x3d8))(plVar5,*(undefined8 *)(*plVar5 + 0x3e0));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    *(undefined1 (*) [16])(lVar4 + 0x10) = auVar18;
    plVar6 = *(long **)(unaff_x19 + 0x18);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar10 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065e53a8) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_04c759ec;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)PTR_DAT_065e53a8,2);
LAB_04c759ec:
    uVar13 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    plVar6 = (long *)PTR_DAT_065e7e40;
    lVar10 = *(long *)PTR_DAT_065e7e40;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar10);
      lVar10 = *plVar6;
    }
    lVar14 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
    if (lVar14 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar10);
        lVar10 = *plVar6;
      }
      uVar15 = **(undefined8 **)(lVar10 + 0xb8);
      lVar14 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065d6b80);
      FUN_04a5701c(lVar14,uVar15,*(undefined8 *)PTR_DAT_065e80f0,0);
      plVar6 = (long *)PTR_DAT_065e7e40;
      lVar10 = *(long *)PTR_DAT_065e7e40;
      *(long *)(*(long *)(lVar10 + 0xb8) + 0x18) = lVar14;
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar10);
      lVar10 = *plVar6;
    }
    lVar16 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x20);
    if (lVar16 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar10);
        lVar10 = *(long *)PTR_DAT_065e7e40;
      }
      uVar15 = **(undefined8 **)(lVar10 + 0xb8);
      lVar16 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065d6b80);
      FUN_04a5701c(lVar16,uVar15,*(undefined8 *)PTR_DAT_065e80f8,0);
      *(long *)(*(long *)(*(long *)PTR_DAT_065e7e40 + 0xb8) + 0x20) = lVar16;
      plVar17 = (long *)PTR_DAT_065e7e50;
    }
    uVar13 = FUN_033f7aa4(uVar13,lVar14,lVar16,*(undefined8 *)PTR_DAT_065e4d98);
    plVar6 = (long *)thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e7b68);
    FUN_04c5aa60(plVar6,0);
    uVar15 = (**(code **)(*plVar5 + 0x3f8))(plVar5,*(undefined8 *)(*plVar5 + 0x400));
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(uVar15,uVar15);
    }
    (**(code **)(*plVar6 + 0x408))(plVar6,uVar15,*(undefined8 *)(*plVar6 + 0x410));
    (**(code **)(*plVar6 + 0x348))(plVar6,uVar13,*(undefined8 *)(*plVar6 + 0x350));
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar4 = (**(code **)(*plVar12 + 0x568))
                      (plVar12,plVar6,lVar4,*(undefined8 *)(unaff_x19 + 0xe),
                       *(undefined8 *)(*plVar12 + 0x570));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar18 = FUN_0404bcb8(lVar4,0,*(undefined8 *)PTR_DAT_065e80e8);
    _in_stack_00000000 = auVar18;
    uVar9 = FUN_044a8fc8();
    if ((uVar9 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000000;
      if (*(int *)(*plVar17 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030b8348(unaff_x19 + 2);
      return;
    }
  }
  else {
    if (iVar3 != 1) {
      uVar13 = *(undefined8 *)(unaff_x19 + 8);
      if (*(int *)(*(long *)PTR_DAT_065e7718 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_04c6722c(uVar13);
      uVar9 = 0;
      if (*(long *)(unaff_x19 + 10) != 0) {
        uVar9 = *(ulong *)(*(long *)(unaff_x19 + 10) + 0x20);
      }
      iVar8 = 3;
      if ((uVar9 & 0xff) != 0) {
        iVar8 = (int)(uVar9 >> 0x20);
      }
      unaff_x19[0x10] = iVar8;
      lVar4 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e7260);
      FUN_04f7383c(lVar4,0);
      lVar10 = *(long *)(unaff_x19 + 10);
      if (lVar10 == 0) {
        uVar13 = 0;
        uVar15 = uVar13;
      }
      else {
        uVar15 = *(undefined8 *)(lVar10 + 0x18);
        uVar13 = *(undefined8 *)(lVar10 + 0x10);
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      *(undefined8 *)(lVar4 + 0x18) = uVar15;
      *(undefined8 *)(lVar4 + 0x10) = uVar13;
      *(long *)(unaff_x19 + 0x12) = lVar4;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar4 = (**(code **)(*plVar12 + 0x2e8))
                        (plVar12,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x12),
                         *(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)(*plVar12 + 0x2f0));
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      _in_stack_00000000 = FUN_0404bcb8(lVar4,0,*(undefined8 *)puVar2);
      uVar9 = FUN_044a8fc8();
      if ((uVar9 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000000;
        if (*(int *)(*plVar17 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_030b8348(unaff_x19 + 2);
        return;
      }
      goto LAB_04c75800;
    }
LAB_04c75818:
    _in_stack_00000000 = *(undefined1 (*) [16])(unaff_x19 + 0x14);
    unaff_x19[0x14] = 0;
    unaff_x19[0x15] = 0;
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    *unaff_x19 = -1;
  }
  FUN_044a9014(&stack0x00000000,*(undefined8 *)puVar1);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x18);
LAB_04c75984:
  *unaff_x19 = -2;
  unaff_x19[0x12] = 0;
  puVar1 = PTR_DAT_065e80c8;
  unaff_x19[0x13] = 0;
  if (*(int *)(*plVar17 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04266690(unaff_x19 + 2,uVar13,*(undefined8 *)puVar1);
  return;
}


