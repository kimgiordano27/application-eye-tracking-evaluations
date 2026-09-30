/*
FUNCTION_NAME: OVRPlugin$$GetControllerState2
ENTRY_POINT: 051b4a54
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetControllerState2(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  puVar1 = PTR_DAT_06608a20;
  if ((DAT_06a7131c & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608a78);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608a80);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608a88);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d65c0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608a90);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608a98);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608a20);
    DAT_06a7131c = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b4 = 0.0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  *(undefined1 *)(param_1 + 0x168) = 0;
  puVar2 = PTR_DAT_06608a98;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  lVar12 = *(long *)puVar2;
  lVar6 = *(long *)(lVar12 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02ce0978();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02ce0978();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  lVar6 = *(long *)(lVar12 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02ce0978();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02ce0978();
  }
  puVar4 = PTR_DAT_06608a90;
  puVar3 = PTR_DAT_06608a88;
  puVar2 = PTR_DAT_06608a80;
  puVar1 = PTR_DAT_065d65c0;
  plVar7 = (long *)**(long **)(lVar6 + 0xb8);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  (**(code **)(*plVar7 + 0x198))(&local_d8,plVar7,param_1,*(undefined8 *)(*plVar7 + 0x1a0));
  local_80 = local_c8;
  uStack_88 = uStack_d0;
  local_90 = local_d8;
  FUN_036c00a0(&local_d8,&local_90,*(undefined8 *)puVar4);
  uStack_a8 = uStack_d0;
  local_b0 = local_d8;
  uStack_98 = uStack_c0;
  uStack_a0 = local_c8;
  lVar6 = 0;
  fVar14 = -INFINITY;
  do {
    uVar8 = FUN_048aab44(&local_b0,*(undefined8 *)puVar2);
    if ((uVar8 & 1) == 0) {
      FUN_048aade0(&local_b0,*(undefined8 *)PTR_DAT_06608a78);
      return lVar6;
    }
    lVar12 = FUN_048aaa00(&local_b0,*(undefined8 *)puVar3);
    plVar7 = *(long **)(param_1 + 0x120);
    if (plVar7 == (long *)0x0) {
      uVar13 = 0x3f800000;
    }
    else {
      lVar10 = *plVar7;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 4) * 0x10 + 0x138);
            goto LAB_051b4c84;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar1,4);
LAB_051b4c84:
      uVar13 = (*(code *)*puVar9)(plVar7,puVar9[1]);
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(uVar13);
    }
    FUN_051b3a20(lVar12,(undefined8 *)(param_1 + 0x148),(undefined8 *)(param_1 + 0x150),&local_b4);
    fVar5 = local_b4;
    if (fVar14 < local_b4) {
      if (*(long *)(param_1 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_051ad6d0(*(long *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x148),0);
      if (*(long *)(param_1 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_051ad6d0(*(long *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x150),0);
      *(undefined1 *)(param_1 + 0x168) = 1;
      lVar6 = lVar12;
      fVar14 = fVar5;
    }
  } while( true );
}


