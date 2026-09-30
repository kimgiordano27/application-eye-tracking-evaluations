/*
FUNCTION_NAME: FUN_051a0080
ENTRY_POINT: 051a0080
PROGRAM: hellodot-libil2cpp.so
SCORE: 165
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_7;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_051a0080(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  
  if ((DAT_06a7122c & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608500);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065defe0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8998);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066084f0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608508);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608510);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608518);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608520);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608528);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608530);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608538);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608540);
    DAT_06a7122c = 1;
  }
  puVar1 = PTR_DAT_06608538;
  if (*(char *)(param_1 + 0x78) == '\0') {
    return;
  }
  lVar8 = *(long *)(param_1 + 0x20);
  uVar4 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065c8998);
  FUN_04e9e238(uVar4,param_1,*(undefined8 *)puVar1,0);
  puVar2 = PTR_DAT_06608540;
  puVar1 = PTR_DAT_065defe0;
  if (lVar8 != 0) {
    FUN_036c3464(lVar8,uVar4,*(undefined8 *)PTR_DAT_066084f0);
    lVar8 = *(long *)(param_1 + 0x20);
    uVar4 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
    FUN_047b28cc(uVar4,param_1,*(undefined8 *)puVar2,0);
    if (lVar8 != 0) {
      FUN_036c3094(lVar8,uVar4,*(undefined8 *)PTR_DAT_06608508);
      puVar2 = PTR_DAT_06608528;
      puVar1 = PTR_DAT_06608500;
      if (*(long *)(param_1 + 0x20) != 0) {
        plVar9 = *(long **)(*(long *)(param_1 + 0x20) + 0xd8);
        uVar4 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06608500);
        FUN_047b3b70(uVar4,param_1,*(undefined8 *)puVar2,0);
        puVar2 = PTR_DAT_06608520;
        if (plVar9 != (long *)0x0) {
          lVar8 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06608520) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
                goto OVRManager__get_eyeTrackedFoveatedRenderingEnabled;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_06608520,0);
OVRManager__get_eyeTrackedFoveatedRenderingEnabled:
          (*(code *)*puVar5)(plVar9,uVar4,puVar5[1]);
          puVar3 = PTR_DAT_06608530;
          if (*(long *)(param_1 + 0x20) != 0) {
            plVar9 = *(long **)(*(long *)(param_1 + 0x20) + 0xe0);
            uVar4 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
            FUN_047b3b70(uVar4,param_1,*(undefined8 *)puVar3,0);
            if (plVar9 != (long *)0x0) {
              lVar8 = *plVar9;
              uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                    puVar5 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_051a0304;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar2,0);
LAB_051a0304:
              (*(code *)*puVar5)(plVar9,uVar4,puVar5[1]);
              if (*(long *)(param_1 + 0x28) != 0) {
                FUN_050e7a24(*(long *)(param_1 + 0x28),0);
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


