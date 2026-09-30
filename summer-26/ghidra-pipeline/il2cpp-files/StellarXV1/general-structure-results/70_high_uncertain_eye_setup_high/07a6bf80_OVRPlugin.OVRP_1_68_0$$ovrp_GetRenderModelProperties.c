/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_GetRenderModelProperties
ENTRY_POINT: 07a6bf80
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_68_0__ovrp_GetRenderModelProperties(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  long unaff_x19;
  long unaff_x20;
  uint uVar14;
  long lVar15;
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
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_092e6c88);
  FUN_04077588(PTR_DAT_09287440);
  FUN_04077588(PTR_DAT_09287448);
  FUN_04077588(PTR_DAT_09287450);
  FUN_04077588(PTR_DAT_09287498);
  FUN_04077588(PTR_DAT_092874a0);
  FUN_04077588(PTR_DAT_092f0f88);
  *(undefined1 *)(unaff_x19 + 0x614) = 1;
  in_stack_00000060 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = (long *)0x0;
  in_stack_00000058 = (long *)0x0;
  in_stack_00000050 = (long *)0x0;
  if ((unaff_x20 == 0) || (iVar6 = FUN_06efc490(), iVar6 == 0)) {
    return 0;
  }
  uVar7 = FUN_06efc490();
  lVar8 = FUN_04077674(*(undefined8 *)PTR_DAT_092f0f88,uVar7);
  FUN_06efcc0c(&stack0x00000010);
  puVar3 = PTR_DAT_09287448;
  puVar2 = PTR_DAT_09285980;
  uVar14 = 0;
  lVar1 = lVar8 + 0x20;
  in_stack_00000048 = in_stack_00000018;
  in_stack_00000040 = in_stack_00000010;
  in_stack_00000058 = in_stack_00000028;
  in_stack_00000050 = in_stack_00000020;
  in_stack_00000060 = in_stack_00000030;
  do {
    uVar9 = FUN_05385f24(&stack0x00000040,*(undefined8 *)puVar3);
    plVar5 = in_stack_00000058;
    plVar4 = in_stack_00000050;
    if ((uVar9 & 1) == 0) {
      FUN_05386044(&stack0x00000040,*(undefined8 *)PTR_DAT_09287440);
      return lVar8;
    }
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar10 = thunk_FUN_0408781c(in_stack_00000058,0);
    lVar15 = *(long *)(puVar2 + 0x48);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar11 = FUN_0768890c(lVar15 + 0x20,0);
    uVar9 = FUN_07691f40(uVar10,uVar11,0);
    if ((uVar9 & 1) == 0) {
      uVar10 = thunk_FUN_0408781c(plVar5,0);
      lVar15 = *(long *)(puVar2 + 0x90);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar11 = FUN_0768890c(lVar15 + 0x20,0);
      uVar9 = FUN_07691f40(uVar10,uVar11,0);
      if ((uVar9 & 1) == 0) {
        uVar10 = thunk_FUN_0408781c(plVar5,0);
        lVar15 = *(long *)(puVar2 + 0x80);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar11 = FUN_0768890c(lVar15 + 0x20,0);
        uVar9 = FUN_07691f40(uVar10,uVar11,0);
        if ((uVar9 & 1) == 0) {
          thunk_FUN_040dedf8(PTR_DAT_09285a20);
          uVar10 = thunk_FUN_040b4efc();
          uVar11 = thunk_FUN_040dedf8(PTR_DAT_092f0f90);
          FUN_076b16a0(uVar10,uVar11,0);
          uVar11 = thunk_FUN_040dedf8(PTR_DAT_092f0f98);
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar10,uVar11);
        }
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = (long *)0x0;
        in_stack_00000028 = (long *)0x0;
        in_stack_00000020 = (long *)0x0;
        if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(puVar2 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077bb0(plVar5);
        }
        puVar13 = (undefined8 *)thunk_FUN_040b5044(plVar5);
        uVar10 = *puVar13;
        in_stack_00000010 = plVar4;
        thunk_FUN_040ec700(&stack0x00000010,plVar4);
        in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,2);
        in_stack_00000020 = (long *)0x0;
        in_stack_00000030 = uVar10;
        thunk_FUN_040ec700(&stack0x00000020,0);
        in_stack_00000028 = (long *)((ulong)in_stack_00000028 & 0xffffffff00000000);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar15 = lVar8 + (long)(int)uVar14 * 0x28;
        *(undefined8 *)(lVar15 + 0x40) = in_stack_00000030;
        *(ulong *)(lVar15 + 0x28) = in_stack_00000018;
        *(long **)(lVar15 + 0x20) = in_stack_00000010;
        *(long **)(lVar15 + 0x38) = in_stack_00000028;
        *(long **)(lVar15 + 0x30) = in_stack_00000020;
        thunk_FUN_040ec700(lVar1 + (long)(int)uVar14 * 0x28,0);
      }
      else {
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = (long *)0x0;
        in_stack_00000028 = (long *)0x0;
        in_stack_00000020 = (long *)0x0;
        if (*plVar5 != *(long *)(puVar2 + 0x90)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077bb0(plVar5);
        }
        in_stack_00000010 = plVar4;
        thunk_FUN_040ec700(&stack0x00000010,plVar4);
        in_stack_00000018 = in_stack_00000018 & 0xffffffff00000000;
        in_stack_00000020 = plVar5;
        thunk_FUN_040ec700(&stack0x00000020,plVar5);
        in_stack_00000028 = (long *)((ulong)in_stack_00000028 & 0xffffffff00000000);
        in_stack_00000030 = 0;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar15 = lVar8 + (long)(int)uVar14 * 0x28;
        *(undefined8 *)(lVar15 + 0x40) = 0;
        *(ulong *)(lVar15 + 0x28) = in_stack_00000018;
        *(long **)(lVar15 + 0x20) = in_stack_00000010;
        *(long **)(lVar15 + 0x38) = in_stack_00000028;
        *(long **)(lVar15 + 0x30) = in_stack_00000020;
        thunk_FUN_040ec700(lVar1 + (long)(int)uVar14 * 0x28,0);
      }
    }
    else {
      in_stack_00000030 = 0;
      in_stack_00000018 = 0;
      in_stack_00000010 = (long *)0x0;
      in_stack_00000028 = (long *)0x0;
      in_stack_00000020 = (long *)0x0;
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(puVar2 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(plVar5);
      }
      puVar12 = (undefined4 *)thunk_FUN_040b5044(plVar5);
      uVar7 = *puVar12;
      in_stack_00000010 = plVar4;
      thunk_FUN_040ec700(&stack0x00000010,plVar4);
      in_stack_00000028 = (long *)CONCAT44(in_stack_00000028._4_4_,uVar7);
      in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,1);
      in_stack_00000020 = (long *)0x0;
      thunk_FUN_040ec700(&stack0x00000020,0);
      in_stack_00000030 = 0;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar15 = lVar8 + (long)(int)uVar14 * 0x28;
      *(undefined8 *)(lVar15 + 0x40) = 0;
      *(ulong *)(lVar15 + 0x28) = in_stack_00000018;
      *(long **)(lVar15 + 0x20) = in_stack_00000010;
      *(long **)(lVar15 + 0x38) = in_stack_00000028;
      *(long **)(lVar15 + 0x30) = in_stack_00000020;
      thunk_FUN_040ec700(lVar1 + (long)(int)uVar14 * 0x28,0);
    }
    uVar14 = uVar14 + 1;
  } while( true );
}


