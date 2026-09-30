/*
FUNCTION_NAME: FUN_051c27c4
ENTRY_POINT: 051c27c4
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_051c27c4(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
                 undefined8 param_4,long param_5,long param_6)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_06a71397 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065df010);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06604d90);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608408);
    DAT_06a71397 = 1;
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  plVar6 = *(long **)(param_5 + 0x68);
  if (plVar6 == (long *)0x0) {
    bVar1 = *(char *)(param_5 + 0xa4) != '\0';
  }
  else {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_065df010) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_051c2898;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)PTR_DAT_065df010,0);
LAB_051c2898:
    bVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  }
  if (param_6 != 0) {
    FUN_051c21ac(param_6,bVar1 & 1);
    if (*(char *)(param_6 + 0x34) != '\0') {
      return;
    }
    lVar3 = *(long *)(param_5 + 0x38);
    if (lVar3 != 0) {
      local_70 = *(undefined8 *)(lVar3 + 0x168);
      uStack_88 = *(undefined8 *)(lVar3 + 0x150);
      local_90 = *(undefined8 *)(lVar3 + 0x148);
      uStack_78 = *(undefined8 *)(lVar3 + 0x160);
      uVar9 = *(undefined8 *)(lVar3 + 0x158);
      uStack_80 = uVar9;
      if (*(int *)(*(long *)PTR_DAT_06608408 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      OVRManager__remove_SpaceSetComponentStatusComplete(&local_90,0);
      uVar7 = FUN_051c20fc(param_6);
      lVar3 = *(long *)(param_5 + 0x38);
      if (lVar3 != 0) {
        local_70 = *(undefined8 *)(lVar3 + 0x168);
        uStack_88 = *(undefined8 *)(lVar3 + 0x150);
        uVar10 = *(undefined8 *)(lVar3 + 0x148);
        uStack_78 = *(undefined8 *)(lVar3 + 0x160);
        uStack_80 = *(undefined8 *)(lVar3 + 0x158);
        uVar11 = param_3;
        local_90 = uVar10;
        FUN_0519da8c(&local_90,0);
        uVar8 = FUN_05eea074(0);
        lVar3 = FUN_05ef2cb4(param_5,0);
        if (lVar3 != 0) {
          FUN_05f0278c(uVar7,uVar9,param_3,uVar8,uVar10,uVar11,param_4,lVar3,0);
          if (*(long *)(param_5 + 0x40) != 0) {
            FUN_05ec2414(*(long *)(param_5 + 0x40),1,0);
            plVar6 = *(long **)(param_5 + 0x58);
            if (plVar6 == (long *)0x0) {
              uVar4 = (ulong)*(uint *)(param_5 + 0xa8);
            }
            else {
              lVar3 = *plVar6;
              uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
              if (uVar4 != 0) {
                piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06604d90) {
                    puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
                    goto LAB_051c2a00;
                  }
                  uVar4 = uVar4 - 1;
                  piVar5 = piVar5 + 4;
                } while (uVar4 != 0);
              }
              puVar2 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)PTR_DAT_06604d90,0);
LAB_051c2a00:
              uVar4 = (*(code *)*puVar2)(plVar6,puVar2[1]);
            }
            lVar3 = 0x98;
            if (*(char *)(param_5 + 0xb0) != '\0') {
              lVar3 = 0x90;
            }
            if (*(long *)(param_5 + lVar3) != 0) {
              FUN_05eaba3c(uVar4,*(long *)(param_5 + lVar3),0);
              FUN_051c2624(param_5);
              FUN_051c2a68(param_5,bVar1 & 1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


