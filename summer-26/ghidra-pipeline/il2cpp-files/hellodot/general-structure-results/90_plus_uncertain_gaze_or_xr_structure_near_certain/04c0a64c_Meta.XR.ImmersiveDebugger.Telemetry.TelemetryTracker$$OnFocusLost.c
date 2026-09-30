/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnFocusLost
ENTRY_POINT: 04c0a64c
PROGRAM: hellodot-libil2cpp.so
SCORE: 111
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnFocusLost(ulong param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x20;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 in_stack_00000008;
  undefined1 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined1 *in_stack_00000028;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000068;
  undefined1 in_stack_00000078;
  int iStack000000000000007c;
  
  if ((param_1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca230);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5190);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e4520);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e44b8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c85d0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1bd0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1bd8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1be0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e39d8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9448);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9440);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9438);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1be8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e3f50);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5198);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e51a0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e51a8);
    *(undefined1 *)(unaff_x20 + 0x58f) = 1;
  }
  puVar2 = PTR_DAT_065e39d8;
  puVar1 = PTR_DAT_065ca230;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000048 = 0;
  in_stack_00000078 = 0;
  in_stack_00000040 = 0;
  iStack000000000000007c = *param_2;
  in_stack_00000068 = *(long *)(param_2 + 8);
  if (iStack000000000000007c == 0) {
    iVar6 = 0;
  }
  else {
    if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar13 = *(long *)PTR_DAT_065ca230;
    plVar12 = *(long **)(in_stack_00000068 + 0x20);
    lVar9 = *(long *)(lVar13 + 0x38);
    if (lVar9 == 0) {
      FUN_02ce09d4(lVar13);
      lVar9 = *(long *)(lVar13 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02ce0978();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar9 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02ce0978();
    }
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar8 = *plVar12;
    lVar13 = *(long *)puVar2;
    uVar14 = **(undefined8 **)(lVar9 + 0xb8);
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    uVar15 = *(undefined8 *)PTR_DAT_065e5198;
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar13) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_04c0a81c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar12,lVar13,3);
LAB_04c0a81c:
    (*(code *)*puVar5)(plVar12,uVar15,uVar14,puVar5[1]);
    iVar6 = iStack000000000000007c;
  }
  puVar3 = PTR_DAT_065e3f50;
  in_stack_00000010 = (undefined1 *)&stack0x0000007c;
  in_stack_00000018 = &stack0x00000068;
  in_stack_00000020 = &stack0x00000048;
  in_stack_00000028 = &stack0x00000078;
  in_stack_00000008 = 0;
  if (iVar6 == 0) goto LAB_04c0a99c;
  param_2[10] = 0;
  param_2[0xb] = 0;
  lVar9 = *(long *)puVar3;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar9 = *(long *)puVar3;
  }
  uVar7 = 0;
  lVar9 = **(long **)(lVar9 + 0xb8);
  param_2[0xe] = 0;
  *(long *)(param_2 + 0xc) = lVar9;
  puVar5 = (undefined8 *)PTR_DAT_065c85d0;
  while( true ) {
    PTR_DAT_065c85d0 = (undefined *)puVar5;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar7) {
      uVar15 = *(undefined8 *)(param_2 + 10);
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      uVar14 = thunk_FUN_02c7737c(PTR_DAT_065ca920);
      uVar14 = FUN_04dba1c8(uVar14,uVar15,0);
      uVar15 = thunk_FUN_02c7737c(PTR_DAT_065e51b0);
      uVar14 = FUN_04db00f0(uVar15,uVar14,0);
      thunk_FUN_02c7737c(PTR_DAT_065cfdb8);
      uVar15 = thunk_FUN_02cea894();
      FUN_04f30dfc(uVar15,uVar14,0);
      uVar14 = thunk_FUN_02c7737c(PTR_DAT_065e51b8);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar15,uVar14);
    }
    if (*(uint *)(lVar9 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    uVar14 = *(undefined8 *)(lVar9 + (long)(int)uVar7 * 8 + 0x20);
    *(undefined8 *)(param_2 + 0x10) = uVar14;
    lVar9 = thunk_FUN_02cea894(*puVar5);
    FUN_04f966c0(lVar9,uVar14,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar14 = FUN_04f96608(lVar9,0);
    if (iStack000000000000007c == 0) {
LAB_04c0a99c:
      _in_stack_00000050 = *(undefined1 (*) [16])(param_2 + 0x12);
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      param_2[0x14] = 0;
      param_2[0x15] = 0;
      iStack000000000000007c = -1;
      *param_2 = -1;
    }
    else {
      if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar9 = *(long *)(in_stack_00000068 + 0x28);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar9 = (**(code **)(lVar9 + 0x18))
                        (*(undefined8 *)(lVar9 + 0x40),uVar14,*(undefined8 *)(lVar9 + 0x28));
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      auVar16 = FUN_04046650(lVar9,0,*(undefined8 *)PTR_DAT_065e1be8);
      _in_stack_00000050 = auVar16;
      uVar10 = FUN_044a8b38(&stack0x00000050,*(undefined8 *)PTR_DAT_065e1be0);
      if ((uVar10 & 1) == 0) {
        iStack000000000000007c = 0;
        *param_2 = 0;
        *(undefined1 (*) [16])(param_2 + 0x12) = _in_stack_00000050;
        if (*(int *)(*(long *)PTR_DAT_065e44b8 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_030ab96c(param_2 + 2,&stack0x00000050,param_2,*(undefined8 *)PTR_DAT_065e5190);
        uVar14 = 0;
        iVar6 = 8;
        goto LAB_04c0ab68;
      }
    }
    uVar10 = FUN_044a8b84(&stack0x00000050,*(undefined8 *)PTR_DAT_065e1bd8);
    if ((uVar10 & 1) != 0) break;
    lVar9 = *(long *)(param_2 + 10);
    if (lVar9 == 0) {
      lVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065c9438);
      System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                (lVar9,*(undefined8 *)PTR_DAT_065c9440);
      *(long *)(param_2 + 10) = lVar9;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
    }
    uVar14 = *(undefined8 *)PTR_DAT_065e51a0;
    lVar13 = *(long *)(lVar9 + 0x10);
    lVar8 = *(long *)PTR_DAT_065c9448;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar7 = *(uint *)(lVar9 + 0x18);
    if (uVar7 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar7 + 1;
      *(undefined8 *)(lVar13 + (long)(int)uVar7 * 8 + 0x20) = uVar14;
    }
    else {
      FUN_039683cc(lVar9,uVar14,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    lVar9 = *(long *)(param_2 + 0xc);
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    uVar7 = param_2[0xe] + 1;
    param_2[0xe] = uVar7;
    puVar5 = (undefined8 *)PTR_DAT_065c85d0;
  }
  if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar13 = *(long *)puVar1;
  plVar12 = *(long **)(in_stack_00000068 + 0x20);
  lVar9 = *(long *)(lVar13 + 0x38);
  if (lVar9 == 0) {
    FUN_02ce09d4(lVar13);
    lVar9 = *(long *)(lVar13 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02ce0978();
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  lVar9 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02ce0978();
  }
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar8 = *plVar12;
  lVar13 = *(long *)puVar2;
  uVar14 = **(undefined8 **)(lVar9 + 0xb8);
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  uVar15 = *(undefined8 *)PTR_DAT_065e51a8;
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar13) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 4) * 0x10 + 0x138);
        goto LAB_04c0ab3c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_02ce0a7c(plVar12,lVar13,4);
LAB_04c0ab3c:
  (*(code *)*puVar5)(plVar12,uVar15,uVar14,puVar5[1]);
  if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar14 = FUN_04c04054();
  iVar6 = 10;
LAB_04c0ab68:
  FUN_02999e40(&stack0x00000008);
  puVar4 = in_stack_00000028;
  if (iVar6 == 0) {
    *param_2 = -2;
    lVar9 = thunk_FUN_02c7737c(PTR_DAT_065e44b8);
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar14 = thunk_FUN_02c7737c(PTR_DAT_065e4540);
    FUN_042668a8(param_2 + 2,puVar4,uVar14);
  }
  else if (iVar6 == 10) {
    *param_2 = -2;
    if (*(int *)(*(long *)PTR_DAT_065e44b8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04266690(param_2 + 2,uVar14,*(undefined8 *)PTR_DAT_065e4520);
  }
  return;
}


