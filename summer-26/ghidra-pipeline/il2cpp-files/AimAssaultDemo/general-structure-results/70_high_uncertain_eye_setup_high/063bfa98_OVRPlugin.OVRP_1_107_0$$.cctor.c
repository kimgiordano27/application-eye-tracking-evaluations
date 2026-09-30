/*
FUNCTION_NAME: OVRPlugin.OVRP_1_107_0$$.cctor
ENTRY_POINT: 063bfa98
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_107_0___cctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  long *in_stack_000000a0;
  ulong in_stack_000000a8;
  long *in_stack_000000b0;
  long *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long *in_stack_000000d0;
  ulong in_stack_000000d8;
  long *in_stack_000000e0;
  long *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  if ((DAT_0825c824 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d91a58);
    FUN_0373b518(PTR_DAT_07db7770);
    FUN_0373b518(PTR_DAT_07d91a60);
    FUN_0373b518(PTR_DAT_07d91a68);
    FUN_0373b518(PTR_DAT_07d91a70);
    FUN_0373b518(PTR_DAT_07d91a80);
    FUN_0373b518(PTR_DAT_07d91a88);
    FUN_0373b518(PTR_DAT_07db7768);
    DAT_0825c824 = 1;
  }
  puVar1 = PTR_DAT_07db7770;
  in_stack_000000f0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = (long *)0x0;
  in_stack_000000e8 = (long *)0x0;
  in_stack_000000e0 = (long *)0x0;
  if ((param_1 == 0) || (iVar5 = FUN_05b0f3d0(param_1,*(undefined8 *)PTR_DAT_07db7770), iVar5 == 0))
  {
    return 0;
  }
  uVar6 = FUN_05b0f3d0(param_1,*(undefined8 *)puVar1);
  lVar7 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07db7768,uVar6);
  FUN_05b0fb30(&stack0x000000a0,param_1,*(undefined8 *)PTR_DAT_07d91a58);
  puVar2 = PTR_DAT_07d91a68;
  puVar1 = PTR_DAT_07d86548;
  uVar13 = 0;
  in_stack_000000d8 = in_stack_000000a8;
  in_stack_000000d0 = in_stack_000000a0;
  in_stack_000000e8 = in_stack_000000b8;
  in_stack_000000e0 = in_stack_000000b0;
  in_stack_000000f0 = in_stack_000000c0;
  do {
    uVar8 = FUN_05e3d424(&stack0x000000d0,*(undefined8 *)puVar2);
    plVar4 = in_stack_000000e8;
    plVar3 = in_stack_000000e0;
    if ((uVar8 & 1) == 0) {
      FUN_05e3d544(&stack0x000000d0,*(undefined8 *)PTR_DAT_07d91a60);
      return lVar7;
    }
    if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar9 = thunk_FUN_0374b7cc(in_stack_000000e8,0);
    lVar14 = *(long *)(puVar1 + 0x48);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar10 = FUN_062519f8(lVar14 + 0x20,0);
    uVar8 = FUN_0625ad04(uVar9,uVar10,0);
    if ((uVar8 & 1) == 0) {
      uVar9 = thunk_FUN_0374b7cc(plVar4,0);
      lVar14 = *(long *)(puVar1 + 0x90);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar10 = FUN_062519f8(lVar14 + 0x20,0);
      uVar8 = FUN_0625ad04(uVar9,uVar10,0);
      if ((uVar8 & 1) == 0) {
        uVar9 = thunk_FUN_0374b7cc(plVar4,0);
        lVar14 = *(long *)(puVar1 + 0x80);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar10 = FUN_062519f8(lVar14 + 0x20,0);
        uVar8 = FUN_0625ad04(uVar9,uVar10,0);
        if ((uVar8 & 1) == 0) {
          thunk_FUN_037a15ac(PTR_DAT_07d864a0);
          uVar9 = thunk_FUN_037788cc();
          uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db7778);
          FUN_0627a0a0(uVar9,uVar10,0);
          uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db7780);
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar9,uVar10);
        }
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = (long *)0x0;
        in_stack_000000b8 = (long *)0x0;
        in_stack_000000b0 = (long *)0x0;
        if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(puVar1 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(plVar4);
        }
        puVar12 = (undefined8 *)thunk_FUN_03778a20(plVar4);
        uVar9 = *puVar12;
        in_stack_000000a0 = plVar3;
        thunk_FUN_037aeb94(&stack0x000000a0,plVar3);
        in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
        in_stack_000000b0 = (long *)0x0;
        in_stack_000000c0 = uVar9;
        thunk_FUN_037aeb94(&stack0x000000b0,0);
        in_stack_000000b8 = (long *)((ulong)in_stack_000000b8 & 0xffffffff00000000);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        lVar14 = lVar7 + (long)(int)uVar13 * 0x28;
        *(undefined8 *)(lVar14 + 0x40) = in_stack_000000c0;
        *(ulong *)(lVar14 + 0x28) = in_stack_000000a8;
        *(long **)(lVar14 + 0x20) = in_stack_000000a0;
        *(long **)(lVar14 + 0x38) = in_stack_000000b8;
        *(long **)(lVar14 + 0x30) = in_stack_000000b0;
        thunk_FUN_037aeb94(lVar14 + 0x20,0);
      }
      else {
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = (long *)0x0;
        in_stack_000000b8 = (long *)0x0;
        in_stack_000000b0 = (long *)0x0;
        if (*plVar4 != *(long *)(puVar1 + 0x90)) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(plVar4);
        }
        in_stack_000000a0 = plVar3;
        thunk_FUN_037aeb94(&stack0x000000a0,plVar3);
        in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
        in_stack_000000b0 = plVar4;
        thunk_FUN_037aeb94(&stack0x000000b0,plVar4);
        in_stack_000000b8 = (long *)((ulong)in_stack_000000b8 & 0xffffffff00000000);
        in_stack_000000c0 = 0;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        lVar14 = lVar7 + (long)(int)uVar13 * 0x28;
        *(undefined8 *)(lVar14 + 0x40) = 0;
        *(ulong *)(lVar14 + 0x28) = in_stack_000000a8;
        *(long **)(lVar14 + 0x20) = in_stack_000000a0;
        *(long **)(lVar14 + 0x38) = in_stack_000000b8;
        *(long **)(lVar14 + 0x30) = in_stack_000000b0;
        thunk_FUN_037aeb94(lVar14 + 0x20,0);
      }
    }
    else {
      in_stack_000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = (long *)0x0;
      in_stack_000000b8 = (long *)0x0;
      in_stack_000000b0 = (long *)0x0;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(puVar1 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(plVar4);
      }
      puVar11 = (undefined4 *)thunk_FUN_03778a20(plVar4);
      uVar6 = *puVar11;
      in_stack_000000a0 = plVar3;
      thunk_FUN_037aeb94(&stack0x000000a0,plVar3);
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,1);
      in_stack_000000b8 = (long *)CONCAT44(in_stack_000000b8._4_4_,uVar6);
      in_stack_000000b0 = (long *)0x0;
      thunk_FUN_037aeb94(&stack0x000000b0,0);
      in_stack_000000c0 = 0;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      lVar14 = lVar7 + (long)(int)uVar13 * 0x28;
      *(undefined8 *)(lVar14 + 0x40) = 0;
      *(ulong *)(lVar14 + 0x28) = in_stack_000000a8;
      *(long **)(lVar14 + 0x20) = in_stack_000000a0;
      *(long **)(lVar14 + 0x38) = in_stack_000000b8;
      *(long **)(lVar14 + 0x30) = in_stack_000000b0;
      thunk_FUN_037aeb94(lVar14 + 0x20,0);
    }
    uVar13 = uVar13 + 1;
  } while( true );
}


