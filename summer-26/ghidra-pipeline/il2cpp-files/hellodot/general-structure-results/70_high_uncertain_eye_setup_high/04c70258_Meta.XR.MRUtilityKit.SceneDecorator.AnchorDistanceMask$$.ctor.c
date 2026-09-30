/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.AnchorDistanceMask$$.ctor
ENTRY_POINT: 04c70258
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_MRUtilityKit_SceneDecorator_AnchorDistanceMask___ctor
                 (long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined8 uStack0000000000000008;
  
  puVar1 = PTR_DAT_065e7718;
  uStack0000000000000008 = param_2;
  if ((DAT_06a6da69 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7b68);
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
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7e30);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7e38);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7e40);
    DAT_06a6da69 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  puVar1 = PTR_DAT_065e7260;
  FUN_04c6722c(uStack0000000000000008);
  lVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
  FUN_04f7383c(lVar6,0);
  puVar4 = PTR_DAT_065e7e18;
  puVar3 = PTR_DAT_065e4308;
  puVar2 = PTR_DAT_065c86d8;
  puVar1 = PTR_DAT_065c86c0;
  if (param_3 == 0) {
    uVar10 = 0;
    uVar16 = uVar10;
  }
  else {
    uVar16 = *(undefined8 *)(param_3 + 0x18);
    uVar10 = *(undefined8 *)(param_3 + 0x10);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  *(undefined8 *)(lVar6 + 0x18) = uVar16;
  *(undefined8 *)(lVar6 + 0x10) = uVar10;
  plVar7 = (long *)(**(code **)(*param_1 + 0x2d8))
                             (param_1,uStack0000000000000008,lVar6,*(undefined8 *)(*param_1 + 0x2e0)
                             );
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  plVar8 = (long *)(**(code **)(*plVar7 + 0x338))(plVar7,*(undefined8 *)(*plVar7 + 0x340));
  if (plVar8 != (long *)0x0) {
    lVar6 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04c70440;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar3,0);
LAB_04c70440:
    iVar5 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if (iVar5 != 0) {
      lVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
      FUN_04f7383c(lVar6,0);
      auVar18 = (**(code **)(*plVar7 + 0x3d8))(plVar7,*(undefined8 *)(*plVar7 + 0x3e0));
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      *(undefined1 (*) [16])(lVar6 + 0x10) = auVar18;
      lVar12 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_065e53a8) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_04c704f0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_065e53a8,2);
LAB_04c704f0:
      uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      lVar12 = *(long *)PTR_DAT_065e7e40;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar12);
        lVar12 = *(long *)PTR_DAT_065e7e40;
      }
      lVar15 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
      if (lVar15 == 0) {
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar12);
          lVar12 = *(long *)PTR_DAT_065e7e40;
        }
        uVar16 = **(undefined8 **)(lVar12 + 0xb8);
        lVar15 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065d6b80);
        FUN_04a5701c(lVar15,uVar16,*(undefined8 *)PTR_DAT_065e7e30,0);
        lVar12 = *(long *)PTR_DAT_065e7e40;
        *(long *)(*(long *)(lVar12 + 0xb8) + 8) = lVar15;
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar12);
        lVar12 = *(long *)PTR_DAT_065e7e40;
      }
      lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
      if (lVar17 == 0) {
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar12);
          lVar12 = *(long *)PTR_DAT_065e7e40;
        }
        uVar16 = **(undefined8 **)(lVar12 + 0xb8);
        lVar17 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065d6b80);
        FUN_04a5701c(lVar17,uVar16,*(undefined8 *)PTR_DAT_065e7e38,0);
        *(long *)(*(long *)(*(long *)PTR_DAT_065e7e40 + 0xb8) + 0x10) = lVar17;
      }
      uVar10 = FUN_033f7aa4(uVar10,lVar15,lVar17,*(undefined8 *)PTR_DAT_065e4d98);
      plVar11 = (long *)thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e7b68);
      FUN_04c5aa60(plVar11,0);
      uVar16 = (**(code **)(*plVar7 + 0x3f8))(plVar7,*(undefined8 *)(*plVar7 + 0x400));
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x408))(plVar11,uVar16,*(undefined8 *)(*plVar11 + 0x410));
        (**(code **)(*plVar11 + 0x348))(plVar11,uVar10,*(undefined8 *)(*plVar11 + 0x350));
        (**(code **)(*param_1 + 0x558))(param_1,plVar11,lVar6,*(undefined8 *)(*param_1 + 0x560));
        return plVar8;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(uVar16,uVar16);
    }
  }
  plVar7 = (long *)thunk_FUN_02cea894(*(undefined8 *)puVar2);
  FUN_04678954(plVar7,*(undefined8 *)puVar1);
  return plVar7;
}


