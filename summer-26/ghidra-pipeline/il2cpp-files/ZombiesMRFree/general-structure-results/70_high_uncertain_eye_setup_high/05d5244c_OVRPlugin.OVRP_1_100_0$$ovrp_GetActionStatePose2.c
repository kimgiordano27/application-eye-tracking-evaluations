/*
FUNCTION_NAME: OVRPlugin.OVRP_1_100_0$$ovrp_GetActionStatePose2
ENTRY_POINT: 05d5244c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_100_0__ovrp_GetActionStatePose2(ulong param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  undefined8 uVar9;
  uint unaff_w25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_000000a0;
  ulong in_stack_000000a8;
  long *in_stack_000000b0;
  ulong in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000e0;
  long *in_stack_000000e8;
  
  do {
    plVar2 = in_stack_000000e8;
    uVar7 = in_stack_000000e0;
    if ((param_1 & 1) == 0) {
      FUN_055c9570(&stack0x000000d0,*(undefined8 *)PTR_DAT_06fb33d8);
      return;
    }
    if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar3 = thunk_FUN_02fe6234(in_stack_000000e8,0);
    uVar9 = *unaff_x27;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar9 = FUN_05afde1c(uVar9,0);
    uVar4 = FUN_05b0716c(uVar3,uVar9,0);
    if ((uVar4 & 1) == 0) {
      uVar3 = thunk_FUN_02fe6234(plVar2,0);
      uVar9 = *(undefined8 *)PTR_DAT_06f80908;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar9 = FUN_05afde1c(uVar9,0);
      uVar4 = FUN_05b0716c(uVar3,uVar9,0);
      if ((uVar4 & 1) == 0) {
        uVar3 = thunk_FUN_02fe6234(plVar2,0);
        uVar9 = *(undefined8 *)PTR_DAT_06f80828;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar9 = FUN_05afde1c(uVar9,0);
        uVar4 = FUN_05b0716c(uVar3,uVar9,0);
        if ((uVar4 & 1) == 0) {
          thunk_FUN_03037804(PTR_DAT_06f6d5c8);
          uVar7 = thunk_FUN_0301080c();
          uVar3 = thunk_FUN_03037804(PTR_DAT_06fb94b8);
          FUN_05b27038(uVar7,uVar3,0);
          uVar3 = thunk_FUN_03037804(PTR_DAT_06fb94c0);
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar7,uVar3);
        }
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = (long *)0x0;
        if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_06f7a4c8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe9884(plVar2);
        }
        puVar6 = (undefined8 *)thunk_FUN_03010960(plVar2);
        uVar3 = *puVar6;
        in_stack_000000a0 = uVar7;
        thunk_FUN_03048534(&stack0x000000a0,uVar7);
        in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
        in_stack_000000b0 = (long *)0x0;
        in_stack_000000c0 = uVar3;
        thunk_FUN_03048534();
        in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        lVar8 = unaff_x19 + (int)unaff_w25 * unaff_x29;
        *(undefined8 *)(lVar8 + 0x40) = in_stack_000000c0;
        *(ulong *)(lVar8 + 0x28) = in_stack_000000a8;
        *(undefined8 *)(lVar8 + 0x20) = in_stack_000000a0;
        *(ulong *)(lVar8 + 0x38) = in_stack_000000b8;
        *(long **)(lVar8 + 0x30) = in_stack_000000b0;
        thunk_FUN_03048534(lVar8 + 0x20,0);
      }
      else {
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = (long *)0x0;
        if (*plVar2 != *(long *)PTR_DAT_06f6df20) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe9884(plVar2);
        }
        in_stack_000000a0 = uVar7;
        thunk_FUN_03048534(&stack0x000000a0,uVar7);
        in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
        in_stack_000000b0 = plVar2;
        thunk_FUN_03048534();
        in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
        in_stack_000000c0 = 0;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        lVar8 = unaff_x19 + (int)unaff_w25 * unaff_x29;
        *(undefined8 *)(lVar8 + 0x40) = 0;
        *(ulong *)(lVar8 + 0x28) = in_stack_000000a8;
        *(undefined8 *)(lVar8 + 0x20) = in_stack_000000a0;
        *(ulong *)(lVar8 + 0x38) = in_stack_000000b8;
        *(long **)(lVar8 + 0x30) = in_stack_000000b0;
        thunk_FUN_03048534(lVar8 + 0x20,0);
      }
    }
    else {
      in_stack_000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = (long *)0x0;
      if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_06f6df30 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884(plVar2);
      }
      puVar5 = (undefined4 *)thunk_FUN_03010960(plVar2);
      uVar1 = *puVar5;
      in_stack_000000a0 = uVar7;
      thunk_FUN_03048534(&stack0x000000a0,uVar7);
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,1);
      in_stack_000000b8 = CONCAT44(in_stack_000000b8._4_4_,uVar1);
      in_stack_000000b0 = (long *)0x0;
      thunk_FUN_03048534();
      in_stack_000000c0 = 0;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar8 = unaff_x19 + (int)unaff_w25 * unaff_x29;
      *(undefined8 *)(lVar8 + 0x40) = 0;
      *(ulong *)(lVar8 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar8 + 0x20) = in_stack_000000a0;
      *(ulong *)(lVar8 + 0x38) = in_stack_000000b8;
      *(long **)(lVar8 + 0x30) = in_stack_000000b0;
      thunk_FUN_03048534(lVar8 + 0x20,0);
    }
    unaff_w25 = unaff_w25 + 1;
    param_1 = FUN_055c9450(&stack0x000000d0,*unaff_x26);
  } while( true );
}


