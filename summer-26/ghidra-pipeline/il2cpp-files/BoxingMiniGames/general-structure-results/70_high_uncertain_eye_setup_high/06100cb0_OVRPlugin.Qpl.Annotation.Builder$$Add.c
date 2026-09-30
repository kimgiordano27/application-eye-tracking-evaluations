/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 06100cb0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Qpl_Annotation_Builder__Add(undefined4 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  long *in_stack_00000010;
  ulong in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  long *in_stack_00000040;
  ulong in_stack_00000048;
  long *in_stack_00000050;
  long *in_stack_00000058;
  undefined8 in_stack_00000060;
  
  lVar7 = FUN_03642a4c(*(undefined8 *)PTR_DAT_07a24f50,param_1);
  FUN_056af808(&stack0x00000010);
  puVar4 = PTR_DAT_07a20420;
  puVar3 = PTR_DAT_079f4610;
  uVar13 = 0;
  lVar1 = lVar7 + 0x20;
  in_stack_00000048 = in_stack_00000018;
  in_stack_00000040 = in_stack_00000010;
  in_stack_00000058 = in_stack_00000028;
  in_stack_00000050 = in_stack_00000020;
  in_stack_00000060 = in_stack_00000030;
  do {
    uVar8 = FUN_05959498(&stack0x00000040,*(undefined8 *)puVar4);
    plVar6 = in_stack_00000058;
    plVar5 = in_stack_00000050;
    if ((uVar8 & 1) == 0) {
      FUN_059595b8(&stack0x00000040,*(undefined8 *)PTR_DAT_07a20418);
      return lVar7;
    }
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar9 = thunk_FUN_03652da4(in_stack_00000058,0);
    lVar14 = *(long *)(puVar3 + 0x48);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar10 = FUN_05e26f18(lVar14 + 0x20,0);
    uVar8 = FUN_05e30794(uVar9,uVar10,0);
    if ((uVar8 & 1) == 0) {
      uVar9 = thunk_FUN_03652da4(plVar6,0);
      lVar14 = *(long *)(puVar3 + 0x90);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar10 = FUN_05e26f18(lVar14 + 0x20,0);
      uVar8 = FUN_05e30794(uVar9,uVar10,0);
      if ((uVar8 & 1) == 0) {
        uVar9 = thunk_FUN_03652da4(plVar6,0);
        lVar14 = *(long *)(puVar3 + 0x80);
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar10 = FUN_05e26f18(lVar14 + 0x20,0);
        uVar8 = FUN_05e30794(uVar9,uVar10,0);
        if ((uVar8 & 1) == 0) {
          thunk_FUN_036aa1c8(PTR_DAT_079f4ff8);
          uVar9 = thunk_FUN_0367fe20();
          uVar10 = thunk_FUN_036aa1c8(PTR_DAT_07a24f60);
          FUN_05e4fb54(uVar9,uVar10,0);
          uVar10 = thunk_FUN_036aa1c8(PTR_DAT_07a24f68);
                    /* WARNING: Subroutine does not return */
          FUN_03642acc(uVar9,uVar10);
        }
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = (long *)0x0;
        in_stack_00000028 = (long *)0x0;
        in_stack_00000020 = (long *)0x0;
        if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)(puVar3 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_03643084(plVar6);
        }
        puVar12 = (undefined8 *)thunk_FUN_0367ff68(plVar6);
        uVar9 = *puVar12;
        in_stack_00000010 = plVar5;
        thunk_FUN_036b7ad0(&stack0x00000010,plVar5);
        in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,2);
        in_stack_00000020 = (long *)0x0;
        in_stack_00000030 = uVar9;
        thunk_FUN_036b7ad0(&stack0x00000020,0);
        in_stack_00000028 = (long *)((ulong)in_stack_00000028 & 0xffffffff00000000);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        lVar14 = lVar7 + (long)(int)uVar13 * 0x28;
        *(undefined8 *)(lVar14 + 0x40) = in_stack_00000030;
        *(ulong *)(lVar14 + 0x28) = in_stack_00000018;
        *(long **)(lVar14 + 0x20) = in_stack_00000010;
        *(long **)(lVar14 + 0x38) = in_stack_00000028;
        *(long **)(lVar14 + 0x30) = in_stack_00000020;
        thunk_FUN_036b7ad0(lVar1 + (long)(int)uVar13 * 0x28,0);
      }
      else {
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = (long *)0x0;
        in_stack_00000028 = (long *)0x0;
        in_stack_00000020 = (long *)0x0;
        if (*plVar6 != *(long *)(puVar3 + 0x90)) {
                    /* WARNING: Subroutine does not return */
          FUN_03643084(plVar6);
        }
        in_stack_00000010 = plVar5;
        thunk_FUN_036b7ad0(&stack0x00000010,plVar5);
        in_stack_00000018 = in_stack_00000018 & 0xffffffff00000000;
        in_stack_00000020 = plVar6;
        thunk_FUN_036b7ad0(&stack0x00000020,plVar6);
        in_stack_00000028 = (long *)((ulong)in_stack_00000028 & 0xffffffff00000000);
        in_stack_00000030 = 0;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        lVar14 = lVar7 + (long)(int)uVar13 * 0x28;
        *(undefined8 *)(lVar14 + 0x40) = 0;
        *(ulong *)(lVar14 + 0x28) = in_stack_00000018;
        *(long **)(lVar14 + 0x20) = in_stack_00000010;
        *(long **)(lVar14 + 0x38) = in_stack_00000028;
        *(long **)(lVar14 + 0x30) = in_stack_00000020;
        thunk_FUN_036b7ad0(lVar1 + (long)(int)uVar13 * 0x28,0);
      }
    }
    else {
      in_stack_00000030 = 0;
      in_stack_00000018 = 0;
      in_stack_00000010 = (long *)0x0;
      in_stack_00000028 = (long *)0x0;
      in_stack_00000020 = (long *)0x0;
      if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)(puVar3 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03643084(plVar6);
      }
      puVar11 = (undefined4 *)thunk_FUN_0367ff68(plVar6);
      uVar2 = *puVar11;
      in_stack_00000010 = plVar5;
      thunk_FUN_036b7ad0(&stack0x00000010,plVar5);
      in_stack_00000028 = (long *)CONCAT44(in_stack_00000028._4_4_,uVar2);
      in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,1);
      in_stack_00000020 = (long *)0x0;
      thunk_FUN_036b7ad0(&stack0x00000020,0);
      in_stack_00000030 = 0;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      lVar14 = lVar7 + (long)(int)uVar13 * 0x28;
      *(undefined8 *)(lVar14 + 0x40) = 0;
      *(ulong *)(lVar14 + 0x28) = in_stack_00000018;
      *(long **)(lVar14 + 0x20) = in_stack_00000010;
      *(long **)(lVar14 + 0x38) = in_stack_00000028;
      *(long **)(lVar14 + 0x30) = in_stack_00000020;
      thunk_FUN_036b7ad0(lVar1 + (long)(int)uVar13 * 0x28,0);
    }
    uVar13 = uVar13 + 1;
  } while( true );
}


