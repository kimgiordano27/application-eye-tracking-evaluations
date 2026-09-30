/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.Mask2D$$GenerateAffineTransform
ENTRY_POINT: 04c702b8
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


long * Meta_XR_MRUtilityKit_SceneDecorator_Mask2D__GenerateAffineTransform(void)

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
  ulong uVar12;
  int *piVar13;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined8 in_stack_00000008;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
                    /* try { // try from 04c702bc to 04d702bf has its CatchHandler @ 04c70600 */
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7260);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e4308);
                    /* try { // try from 04c702d4 to 04d702eb has its CatchHandler @ 04c70608 */
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e53a8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca9b0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cbbe0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7e18);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7718);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7e30);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7e38);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7e40);
  *(undefined1 *)(unaff_x21 + 0xa69) = 1;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  puVar1 = PTR_DAT_065e7260;
  FUN_04c6722c(in_stack_00000008);
  lVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
  FUN_04f7383c(lVar6,0);
  puVar4 = PTR_DAT_065e7e18;
  puVar3 = PTR_DAT_065e4308;
  puVar2 = PTR_DAT_065c86d8;
  puVar1 = PTR_DAT_065c86c0;
  if (unaff_x22 == 0) {
    uVar10 = 0;
    uVar15 = uVar10;
  }
  else {
    uVar15 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  *(undefined8 *)(lVar6 + 0x18) = uVar15;
  *(undefined8 *)(lVar6 + 0x10) = uVar10;
  plVar7 = (long *)(**(code **)(*unaff_x20 + 0x2d8))();
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  plVar8 = (long *)(**(code **)(*plVar7 + 0x338))(plVar7,*(undefined8 *)(*plVar7 + 0x340));
  if (plVar8 != (long *)0x0) {
    lVar6 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_04c70440;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar3,0);
LAB_04c70440:
    iVar5 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if (iVar5 != 0) {
      lVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
      FUN_04f7383c(lVar6,0);
      auVar17 = (**(code **)(*plVar7 + 0x3d8))(plVar7,*(undefined8 *)(*plVar7 + 0x3e0));
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      *(undefined1 (*) [16])(lVar6 + 0x10) = auVar17;
      lVar6 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065e53a8) {
            puVar9 = (undefined8 *)(lVar6 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_04c704f0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_065e53a8,2);
LAB_04c704f0:
      uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      lVar6 = *(long *)PTR_DAT_065e7e40;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar6);
        lVar6 = *(long *)PTR_DAT_065e7e40;
      }
      lVar14 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar14 == 0) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar6);
          lVar6 = *(long *)PTR_DAT_065e7e40;
        }
        uVar15 = **(undefined8 **)(lVar6 + 0xb8);
        lVar14 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065d6b80);
        FUN_04a5701c(lVar14,uVar15,*(undefined8 *)PTR_DAT_065e7e30,0);
        lVar6 = *(long *)PTR_DAT_065e7e40;
        *(long *)(*(long *)(lVar6 + 0xb8) + 8) = lVar14;
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar6);
        lVar6 = *(long *)PTR_DAT_065e7e40;
      }
      lVar16 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if (lVar16 == 0) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar6);
          lVar6 = *(long *)PTR_DAT_065e7e40;
        }
        uVar15 = **(undefined8 **)(lVar6 + 0xb8);
        lVar16 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065d6b80);
        FUN_04a5701c(lVar16,uVar15,*(undefined8 *)PTR_DAT_065e7e38,0);
        *(long *)(*(long *)(*(long *)PTR_DAT_065e7e40 + 0xb8) + 0x10) = lVar16;
      }
      uVar10 = FUN_033f7aa4(uVar10,lVar14,lVar16,*(undefined8 *)PTR_DAT_065e4d98);
      plVar11 = (long *)thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e7b68);
      FUN_04c5aa60(plVar11,0);
      uVar15 = (**(code **)(*plVar7 + 0x3f8))(plVar7,*(undefined8 *)(*plVar7 + 0x400));
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x408))(plVar11,uVar15,*(undefined8 *)(*plVar11 + 0x410));
        (**(code **)(*plVar11 + 0x348))(plVar11,uVar10,*(undefined8 *)(*plVar11 + 0x350));
        (**(code **)(*unaff_x20 + 0x558))();
        return plVar8;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(uVar15,uVar15);
    }
  }
  plVar7 = (long *)thunk_FUN_02cea894(*(undefined8 *)puVar2);
  FUN_04678954(plVar7,*(undefined8 *)puVar1);
  return plVar7;
}


