/*
FUNCTION_NAME: OVRManager$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 051a034c
PROGRAM: hellodot-libil2cpp.so
SCORE: 165
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_7;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__set_eyeTrackedFoveatedRenderingEnabled(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  long *plVar8;
  
  if ((param_1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608500);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065defe0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8998);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608510);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608518);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066084f8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608548);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608520);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608528);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608530);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608538);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608540);
    *(undefined1 *)(unaff_x20 + 0x22d) = 1;
  }
  if (*(char *)(unaff_x19 + 0x78) == '\0') {
    return;
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065c8998);
  FUN_04e9e238();
  puVar1 = PTR_DAT_065defe0;
  if (lVar7 != 0) {
    FUN_036c3500(lVar7,uVar3,*(undefined8 *)PTR_DAT_066084f8);
    lVar7 = *(long *)(unaff_x19 + 0x20);
    uVar3 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
    FUN_047b28cc();
    if (lVar7 != 0) {
      FUN_036c3144(lVar7,uVar3,*(undefined8 *)PTR_DAT_06608548);
      puVar1 = PTR_DAT_06608500;
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        plVar8 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xd8);
        uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06608500);
        FUN_047b3b70();
        puVar2 = PTR_DAT_06608520;
        if (plVar8 != (long *)0x0) {
          lVar7 = *plVar8;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06608520) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_051a052c;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_06608520,1);
LAB_051a052c:
          (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            plVar8 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xe0);
            uVar3 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
            FUN_047b3b70();
            if (plVar8 != (long *)0x0) {
              lVar7 = *plVar8;
              uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                    puVar4 = (undefined8 *)(lVar7 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                    goto LAB_051a05c0;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              puVar4 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,1);
LAB_051a05c0:
              (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
              if (*(long *)(unaff_x19 + 0x28) != 0) {
                FUN_050e7a24(*(long *)(unaff_x19 + 0x28),0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


