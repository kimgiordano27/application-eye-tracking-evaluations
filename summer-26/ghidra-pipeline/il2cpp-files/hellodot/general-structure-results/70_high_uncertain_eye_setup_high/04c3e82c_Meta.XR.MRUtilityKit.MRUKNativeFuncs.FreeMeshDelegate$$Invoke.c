/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.FreeMeshDelegate$$Invoke
ENTRY_POINT: 04c3e82c
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_FreeMeshDelegate__Invoke(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_DAT_065e6910;
  puVar3 = PTR_DAT_065e01c0;
  if ((*(byte *)(unaff_x20 + 0x78b) & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e6918);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e01b8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e01c0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e6910);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e6920);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e6928);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd4b8);
    *(undefined1 *)(unaff_x20 + 0x78b) = 1;
  }
  FUN_0400503c(param_1,*(undefined8 *)puVar1);
  plVar9 = *(long **)(param_1 + 0x50);
  lVar4 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
  FUN_04c2c1d8(lVar4,0);
  puVar1 = PTR_DAT_065dd4b8;
  if (lVar4 != 0) {
    uVar10 = *(undefined8 *)PTR_DAT_065e6920;
    *(undefined1 *)(lVar4 + 0x20) = 1;
    *(undefined8 *)(lVar4 + 0x10) = uVar10;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)puVar1;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    puVar2 = PTR_DAT_065e01b8;
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065e01b8) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
            goto LAB_04c3e950;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065e01b8,5);
LAB_04c3e950:
      (*(code *)*puVar5)(plVar9,uVar10,lVar4,puVar5[1]);
      plVar9 = *(long **)(param_1 + 0x50);
      lVar4 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
      FUN_04c2c1d8(lVar4,0);
      if (lVar4 != 0) {
        uVar10 = *(undefined8 *)PTR_DAT_065e6928;
        *(undefined1 *)(lVar4 + 0x20) = 1;
        *(undefined8 *)(lVar4 + 0x10) = uVar10;
        *(undefined8 *)(lVar4 + 0x18) = 0;
        *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)puVar1;
        *(undefined8 *)(lVar4 + 0x30) = 0;
        if (plVar9 != (long *)0x0) {
          lVar6 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
                goto LAB_04c3e9f4;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar2,5);
LAB_04c3e9f4:
                    /* WARNING: Could not recover jumptable at 0x04c3ea14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar5)(plVar9,uVar10,lVar4,puVar5[1]);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


