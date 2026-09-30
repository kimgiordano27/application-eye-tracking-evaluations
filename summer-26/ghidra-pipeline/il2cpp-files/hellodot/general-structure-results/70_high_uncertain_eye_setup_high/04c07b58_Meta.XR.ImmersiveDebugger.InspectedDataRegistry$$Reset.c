/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedDataRegistry$$Reset
ENTRY_POINT: 04c07b58
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_InspectedDataRegistry__Reset(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int *unaff_x19;
  long unaff_x20;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1ce8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e13b0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e3a48);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e39e8);
  *(undefined1 *)(unaff_x20 + 0x570) = 1;
  puVar1 = PTR_DAT_065ce810;
  if (*unaff_x19 == 0) {
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    unaff_x19[0x14] = 0;
    unaff_x19[0x15] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 8);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar10 = *(long **)(lVar9 + 0x18);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065e1ce8) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_04c07c28;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)PTR_DAT_065e1ce8,1);
LAB_04c07c28:
    uVar4 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    puVar2 = PTR_DAT_065e13b0;
    lVar6 = *(long *)PTR_DAT_065e13b0;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar6 = *(long *)puVar2;
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
    if (*(int *)(*(long *)PTR_DAT_065c9598 + 0xe0) == 0) {
      thunk_FUN_02cd038c(*(long *)PTR_DAT_065c9598);
    }
    uVar11 = FUN_04f1385c(uVar4,uVar11,0);
    uVar4 = FUN_04c06af0(lVar9,*(undefined8 *)(unaff_x19 + 10),uVar4,uVar11);
    lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5058);
    FUN_04c11f70(lVar6,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    *(undefined8 *)(lVar6 + 0x30) = uVar4;
    puVar2 = PTR_DAT_065e3a48;
    *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(unaff_x19 + 0xc);
    uVar12 = *(undefined8 *)(lVar9 + 0x28);
    lVar5 = *(long *)puVar2;
    uVar4 = *(undefined8 *)(lVar9 + 0x10);
    uVar11 = *(undefined8 *)(lVar9 + 0x18);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar5 = *(long *)puVar2;
    }
    lVar9 = FUN_04c124a4(lVar6,uVar12,uVar4,0,uVar11,**(undefined8 **)(lVar5 + 0xb8),
                         *(undefined8 *)(unaff_x19 + 0xe),0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar13 = FUN_0404bcb8(lVar9,0,*(undefined8 *)PTR_DAT_065e39e8);
    uVar7 = FUN_044a8fc8();
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0x12) = auVar13;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_0309fca0(unaff_x19 + 2);
      return;
    }
  }
  uVar4 = FUN_044a9014();
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    FUN_04bfc754();
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -2;
    puVar2 = PTR_DAT_065ce848;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_0411bcac(unaff_x19 + 2,1,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c(0,uVar4);
}


