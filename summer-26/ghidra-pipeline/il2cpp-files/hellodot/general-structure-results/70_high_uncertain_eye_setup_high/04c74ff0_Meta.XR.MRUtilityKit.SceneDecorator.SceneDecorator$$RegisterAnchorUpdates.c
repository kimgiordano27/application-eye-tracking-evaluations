/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$RegisterAnchorUpdates
ENTRY_POINT: 04c74ff0
PROGRAM: hellodot-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__RegisterAnchorUpdates(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int *unaff_x19;
  long unaff_x20;
  long *plVar12;
  long lVar13;
  undefined1 auVar14 [16];
  
  if ((param_1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e6708);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e80b8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e8040);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7b40);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e6768);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e6770);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e6778);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7c28);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7c30);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7c38);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e6780);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ddb20);
    *(undefined1 *)(unaff_x20 + 0xaad) = 1;
  }
  puVar1 = PTR_DAT_065e7b40;
  lVar13 = *(long *)(unaff_x19 + 8);
  if (*unaff_x19 == 0) {
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_03428244(*(undefined8 *)(lVar13 + 0x10),*(undefined8 *)PTR_DAT_065ddb20,
                 *(undefined8 *)PTR_DAT_065e7c28);
    if (*(long *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar4 = FUN_04c6d394(*(long *)(lVar13 + 0x18),*(undefined8 *)(lVar13 + 0x20),
                         *(undefined8 *)(lVar13 + 0x28));
    if (*(long *)(lVar13 + 0x28) != 0) {
      FUN_04c60134(*(long *)(lVar13 + 0x28),*(undefined8 *)(lVar13 + 0x30));
    }
    if (*(long *)(lVar13 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar5 = FUN_04c1b4f0(*(long *)(lVar13 + 0x30),0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar6 = FUN_05685b20(lVar5,0);
    plVar12 = *(long **)(lVar13 + 0x38);
                    /* try { // try from 04c7510c to 04d75133 has its CatchHandler @ 04c754e4 */
    if (plVar12 != (long *)0x0) {
      uVar7 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e6708);
      puVar2 = PTR_DAT_065e7c30;
      lVar5 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065e7c30) {
            lVar5 = lVar5 + (long)*piVar11 * 0x10 + 0x138;
            goto LAB_04c75194;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      lVar5 = FUN_02ce0a7c(plVar12,*(long *)PTR_DAT_065e7c30,0);
LAB_04c75194:
      FUN_047b3b70(uVar7,plVar12,*(undefined8 *)(lVar5 + 8),0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_04c3a758(lVar4,uVar7,0);
      puVar3 = PTR_DAT_065e7c38;
      plVar12 = *(long **)(lVar13 + 0x38);
      lVar5 = *(long *)PTR_DAT_065e7c38;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar5 = *(long *)puVar3;
      }
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar9 = *plVar12;
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04c75234;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_02ce0a7c(plVar12,*(long *)puVar2,0);
LAB_04c75234:
      (*(code *)*puVar8)(plVar12,uVar7,puVar8[1]);
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar4 = FUN_04c3ab60(lVar4,uVar6,*(undefined8 *)(lVar13 + 0x10),*(undefined8 *)(lVar13 + 0x40),0
                        );
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar14 = FUN_0404bcb8(lVar4,0,*(undefined8 *)PTR_DAT_065e6780);
    uVar10 = FUN_044a8fc8();
    if ((uVar10 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 10) = auVar14;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030bc1b0(unaff_x19 + 2);
      return;
    }
  }
  uVar6 = FUN_044a9014();
  FUN_04c3a424(uVar6,0);
  if (lVar13 != 0) {
    uVar6 = *(undefined8 *)(lVar13 + 0x20);
    *unaff_x19 = -2;
    puVar2 = PTR_DAT_065e8040;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04266690(unaff_x19 + 2,uVar6,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


