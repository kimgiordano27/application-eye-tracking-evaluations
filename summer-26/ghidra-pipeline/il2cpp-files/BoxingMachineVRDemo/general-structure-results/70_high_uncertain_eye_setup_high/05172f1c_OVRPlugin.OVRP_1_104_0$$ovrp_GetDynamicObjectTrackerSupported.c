/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetDynamicObjectTrackerSupported
ENTRY_POINT: 05172f1c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_104_0__ovrp_GetDynamicObjectTrackerSupported(void)

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
  long unaff_x19;
  long unaff_x20;
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
  
  FUN_02d6084c();
  FUN_02d6084c(PTR_DAT_06782aa0);
  FUN_02d6084c(PTR_DAT_06782618);
  FUN_02d6084c(PTR_DAT_06782620);
  FUN_02d6084c(PTR_DAT_06782628);
  FUN_02d6084c(PTR_DAT_06782630);
  FUN_02d6084c(PTR_DAT_06782638);
  FUN_02d6084c(PTR_DAT_06782a98);
  *(undefined1 *)(unaff_x19 + 0xee4) = 1;
  in_stack_000000f0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = (long *)0x0;
  in_stack_000000e8 = (long *)0x0;
  in_stack_000000e0 = (long *)0x0;
  if ((unaff_x20 == 0) || (iVar5 = FUN_048953c0(), iVar5 == 0)) {
    return 0;
  }
  uVar6 = FUN_048953c0();
  lVar7 = FUN_02d60934(*(undefined8 *)PTR_DAT_06782a98,uVar6);
  System_Collections_Generic_ArraySortHelper<SerializableDictionary_Item<object,_bool>>__Heapsort
            (&stack0x000000a0);
  puVar2 = PTR_DAT_06782620;
  puVar1 = PTR_DAT_0675e258;
  uVar13 = 0;
  in_stack_000000d8 = in_stack_000000a8;
  in_stack_000000d0 = in_stack_000000a0;
  in_stack_000000e8 = in_stack_000000b8;
  in_stack_000000e0 = in_stack_000000b0;
  in_stack_000000f0 = in_stack_000000c0;
  do {
    uVar8 = FUN_04b3a824(&stack0x000000d0,*(undefined8 *)puVar2);
    plVar4 = in_stack_000000e8;
    plVar3 = in_stack_000000e0;
    if ((uVar8 & 1) == 0) {
      FUN_04b3a944(&stack0x000000d0,*(undefined8 *)PTR_DAT_06782618);
      return lVar7;
    }
    if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar9 = thunk_FUN_02d709fc(in_stack_000000e8,0);
    lVar14 = *(long *)(puVar1 + 0x48);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar10 = FUN_05015c2c(lVar14 + 0x20,0);
    uVar8 = FUN_0501ed54(uVar9,uVar10,0);
    if ((uVar8 & 1) == 0) {
      uVar9 = thunk_FUN_02d709fc(plVar4,0);
      lVar14 = *(long *)(puVar1 + 0x90);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar10 = FUN_05015c2c(lVar14 + 0x20,0);
      uVar8 = FUN_0501ed54(uVar9,uVar10,0);
      if ((uVar8 & 1) == 0) {
        uVar9 = thunk_FUN_02d709fc(plVar4,0);
        lVar14 = *(long *)(puVar1 + 0x80);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar10 = FUN_05015c2c(lVar14 + 0x20,0);
        uVar8 = FUN_0501ed54(uVar9,uVar10,0);
        if ((uVar8 & 1) == 0) {
          thunk_FUN_02dc61f4(PTR_DAT_067608d0);
          uVar9 = thunk_FUN_02d9d534();
          uVar10 = thunk_FUN_02dc61f4(PTR_DAT_06782aa8);
          FUN_0503de34(uVar9,uVar10,0);
          uVar10 = thunk_FUN_02dc61f4(PTR_DAT_06782ab0);
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar9,uVar10);
        }
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = (long *)0x0;
        in_stack_000000b8 = (long *)0x0;
        in_stack_000000b0 = (long *)0x0;
        if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(puVar1 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(plVar4);
        }
        puVar12 = (undefined8 *)thunk_FUN_02d9d688(plVar4);
        uVar9 = *puVar12;
        in_stack_000000a0 = plVar3;
        thunk_FUN_02dd37b4(&stack0x000000a0,plVar3);
        in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
        in_stack_000000b0 = (long *)0x0;
        in_stack_000000c0 = uVar9;
        thunk_FUN_02dd37b4(&stack0x000000b0,0);
        in_stack_000000b8 = (long *)((ulong)in_stack_000000b8 & 0xffffffff00000000);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        lVar14 = lVar7 + (long)(int)uVar13 * 0x28;
        *(undefined8 *)(lVar14 + 0x40) = in_stack_000000c0;
        *(ulong *)(lVar14 + 0x28) = in_stack_000000a8;
        *(long **)(lVar14 + 0x20) = in_stack_000000a0;
        *(long **)(lVar14 + 0x38) = in_stack_000000b8;
        *(long **)(lVar14 + 0x30) = in_stack_000000b0;
        thunk_FUN_02dd37b4(lVar14 + 0x20,0);
      }
      else {
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = (long *)0x0;
        in_stack_000000b8 = (long *)0x0;
        in_stack_000000b0 = (long *)0x0;
        if (*plVar4 != *(long *)(puVar1 + 0x90)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(plVar4);
        }
        in_stack_000000a0 = plVar3;
        thunk_FUN_02dd37b4(&stack0x000000a0,plVar3);
        in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
        in_stack_000000b0 = plVar4;
        thunk_FUN_02dd37b4(&stack0x000000b0,plVar4);
        in_stack_000000b8 = (long *)((ulong)in_stack_000000b8 & 0xffffffff00000000);
        in_stack_000000c0 = 0;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        lVar14 = lVar7 + (long)(int)uVar13 * 0x28;
        *(undefined8 *)(lVar14 + 0x40) = 0;
        *(ulong *)(lVar14 + 0x28) = in_stack_000000a8;
        *(long **)(lVar14 + 0x20) = in_stack_000000a0;
        *(long **)(lVar14 + 0x38) = in_stack_000000b8;
        *(long **)(lVar14 + 0x30) = in_stack_000000b0;
        thunk_FUN_02dd37b4(lVar14 + 0x20,0);
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
        FUN_02d60e88(plVar4);
      }
      puVar11 = (undefined4 *)thunk_FUN_02d9d688(plVar4);
      uVar6 = *puVar11;
      in_stack_000000a0 = plVar3;
      thunk_FUN_02dd37b4(&stack0x000000a0,plVar3);
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,1);
      in_stack_000000b8 = (long *)CONCAT44(in_stack_000000b8._4_4_,uVar6);
      in_stack_000000b0 = (long *)0x0;
      thunk_FUN_02dd37b4(&stack0x000000b0,0);
      in_stack_000000c0 = 0;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      lVar14 = lVar7 + (long)(int)uVar13 * 0x28;
      *(undefined8 *)(lVar14 + 0x40) = 0;
      *(ulong *)(lVar14 + 0x28) = in_stack_000000a8;
      *(long **)(lVar14 + 0x20) = in_stack_000000a0;
      *(long **)(lVar14 + 0x38) = in_stack_000000b8;
      *(long **)(lVar14 + 0x30) = in_stack_000000b0;
      thunk_FUN_02dd37b4(lVar14 + 0x20,0);
    }
    uVar13 = uVar13 + 1;
  } while( true );
}


