/*
FUNCTION_NAME: OVRPlugin.OVRP_1_100_0$$ovrp_GetCurrentInteractionProfileName
ENTRY_POINT: 05d523c8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_100_0__ovrp_GetCurrentInteractionProfileName(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
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
  
  uVar6 = FUN_052bc2fc();
  lVar7 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06fb94a8,uVar6);
  FUN_052bca5c(&stack0x000000a0);
  puVar3 = PTR_DAT_06fb33e0;
  puVar2 = PTR_DAT_06f80868;
  puVar1 = PTR_DAT_06f6d6a0;
  uVar14 = 0;
  in_stack_000000d8 = in_stack_000000a8;
  in_stack_000000d0 = in_stack_000000a0;
  in_stack_000000e8 = in_stack_000000b8;
  in_stack_000000e0 = in_stack_000000b0;
  in_stack_000000f0 = in_stack_000000c0;
  do {
    uVar8 = FUN_055c9450(&stack0x000000d0,*(undefined8 *)puVar3);
    plVar5 = in_stack_000000e8;
    plVar4 = in_stack_000000e0;
    if ((uVar8 & 1) == 0) {
      FUN_055c9570(&stack0x000000d0,*(undefined8 *)PTR_DAT_06fb33d8);
      return lVar7;
    }
    if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar9 = thunk_FUN_02fe6234(in_stack_000000e8,0);
    uVar13 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar13 = FUN_05afde1c(uVar13,0);
    uVar8 = FUN_05b0716c(uVar9,uVar13,0);
    if ((uVar8 & 1) == 0) {
      uVar9 = thunk_FUN_02fe6234(plVar5,0);
      uVar13 = *(undefined8 *)PTR_DAT_06f80908;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar13 = FUN_05afde1c(uVar13,0);
      uVar8 = FUN_05b0716c(uVar9,uVar13,0);
      if ((uVar8 & 1) == 0) {
        uVar9 = thunk_FUN_02fe6234(plVar5,0);
        uVar13 = *(undefined8 *)PTR_DAT_06f80828;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar13 = FUN_05afde1c(uVar13,0);
        uVar8 = FUN_05b0716c(uVar9,uVar13,0);
        if ((uVar8 & 1) == 0) {
          thunk_FUN_03037804(PTR_DAT_06f6d5c8);
          uVar9 = thunk_FUN_0301080c();
          uVar13 = thunk_FUN_03037804(PTR_DAT_06fb94b8);
          FUN_05b27038(uVar9,uVar13,0);
          uVar13 = thunk_FUN_03037804(PTR_DAT_06fb94c0);
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar9,uVar13);
        }
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = (long *)0x0;
        in_stack_000000b8 = (long *)0x0;
        in_stack_000000b0 = (long *)0x0;
        if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)PTR_DAT_06f7a4c8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe9884(plVar5);
        }
        puVar11 = (undefined8 *)thunk_FUN_03010960(plVar5);
        uVar9 = *puVar11;
        in_stack_000000a0 = plVar4;
        thunk_FUN_03048534(&stack0x000000a0,plVar4);
        in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
        in_stack_000000b0 = (long *)0x0;
        in_stack_000000c0 = uVar9;
        thunk_FUN_03048534(&stack0x000000b0,0);
        in_stack_000000b8 = (long *)((ulong)in_stack_000000b8 & 0xffffffff00000000);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        lVar12 = lVar7 + (long)(int)uVar14 * 0x28;
        *(undefined8 *)(lVar12 + 0x40) = in_stack_000000c0;
        *(ulong *)(lVar12 + 0x28) = in_stack_000000a8;
        *(long **)(lVar12 + 0x20) = in_stack_000000a0;
        *(long **)(lVar12 + 0x38) = in_stack_000000b8;
        *(long **)(lVar12 + 0x30) = in_stack_000000b0;
        thunk_FUN_03048534(lVar12 + 0x20,0);
      }
      else {
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = (long *)0x0;
        in_stack_000000b8 = (long *)0x0;
        in_stack_000000b0 = (long *)0x0;
        if (*plVar5 != *(long *)PTR_DAT_06f6df20) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe9884(plVar5);
        }
        in_stack_000000a0 = plVar4;
        thunk_FUN_03048534(&stack0x000000a0,plVar4);
        in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
        in_stack_000000b0 = plVar5;
        thunk_FUN_03048534(&stack0x000000b0,plVar5);
        in_stack_000000b8 = (long *)((ulong)in_stack_000000b8 & 0xffffffff00000000);
        in_stack_000000c0 = 0;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        lVar12 = lVar7 + (long)(int)uVar14 * 0x28;
        *(undefined8 *)(lVar12 + 0x40) = 0;
        *(ulong *)(lVar12 + 0x28) = in_stack_000000a8;
        *(long **)(lVar12 + 0x20) = in_stack_000000a0;
        *(long **)(lVar12 + 0x38) = in_stack_000000b8;
        *(long **)(lVar12 + 0x30) = in_stack_000000b0;
        thunk_FUN_03048534(lVar12 + 0x20,0);
      }
    }
    else {
      in_stack_000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = (long *)0x0;
      in_stack_000000b8 = (long *)0x0;
      in_stack_000000b0 = (long *)0x0;
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)PTR_DAT_06f6df30 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884(plVar5);
      }
      puVar10 = (undefined4 *)thunk_FUN_03010960(plVar5);
      uVar6 = *puVar10;
      in_stack_000000a0 = plVar4;
      thunk_FUN_03048534(&stack0x000000a0,plVar4);
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,1);
      in_stack_000000b8 = (long *)CONCAT44(in_stack_000000b8._4_4_,uVar6);
      in_stack_000000b0 = (long *)0x0;
      thunk_FUN_03048534(&stack0x000000b0,0);
      in_stack_000000c0 = 0;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar12 = lVar7 + (long)(int)uVar14 * 0x28;
      *(undefined8 *)(lVar12 + 0x40) = 0;
      *(ulong *)(lVar12 + 0x28) = in_stack_000000a8;
      *(long **)(lVar12 + 0x20) = in_stack_000000a0;
      *(long **)(lVar12 + 0x38) = in_stack_000000b8;
      *(long **)(lVar12 + 0x30) = in_stack_000000b0;
      thunk_FUN_03048534(lVar12 + 0x20,0);
    }
    uVar14 = uVar14 + 1;
  } while( true );
}


