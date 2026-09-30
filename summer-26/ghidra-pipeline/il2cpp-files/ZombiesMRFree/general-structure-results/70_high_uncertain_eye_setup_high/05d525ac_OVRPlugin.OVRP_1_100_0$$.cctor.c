/*
FUNCTION_NAME: OVRPlugin.OVRP_1_100_0$$.cctor
ENTRY_POINT: 05d525ac
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


void OVRPlugin_OVRP_1_100_0___cctor(undefined **param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar7;
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
    if (*unaff_x21 != *(long *)param_1[0x1e4]) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(unaff_x21);
    }
    in_stack_000000a0 = unaff_x22;
    thunk_FUN_03048534(&stack0x000000a0,unaff_x22);
    in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
    in_stack_000000b0 = unaff_x21;
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
    lVar6 = unaff_x19 + (int)unaff_w25 * unaff_x29;
    *(undefined8 *)(lVar6 + 0x40) = 0;
    *(ulong *)(lVar6 + 0x28) = in_stack_000000a8;
    *(undefined8 *)(lVar6 + 0x20) = in_stack_000000a0;
    *(ulong *)(lVar6 + 0x38) = in_stack_000000b8;
    *(long **)(lVar6 + 0x30) = in_stack_000000b0;
    thunk_FUN_03048534(lVar6 + 0x20,0);
    while( true ) {
      while( true ) {
        unaff_w25 = unaff_w25 + 1;
        uVar2 = FUN_055c9450(&stack0x000000d0,*unaff_x26);
        unaff_x21 = in_stack_000000e8;
        unaff_x22 = in_stack_000000e0;
        if ((uVar2 & 1) == 0) {
          FUN_055c9570(&stack0x000000d0,*(undefined8 *)PTR_DAT_06fb33d8);
          return;
        }
        if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        uVar3 = thunk_FUN_02fe6234(in_stack_000000e8,0);
        uVar7 = *unaff_x27;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar7 = FUN_05afde1c(uVar7,0);
        uVar2 = FUN_05b0716c(uVar3,uVar7,0);
        if ((uVar2 & 1) == 0) break;
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = (long *)0x0;
        if (*(long *)(*unaff_x21 + 0x40) != *(long *)(*(long *)PTR_DAT_06f6df30 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe9884(unaff_x21);
        }
        puVar4 = (undefined4 *)thunk_FUN_03010960(unaff_x21);
        uVar1 = *puVar4;
        in_stack_000000a0 = unaff_x22;
        thunk_FUN_03048534(&stack0x000000a0,unaff_x22);
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
        lVar6 = unaff_x19 + (int)unaff_w25 * unaff_x29;
        *(undefined8 *)(lVar6 + 0x40) = 0;
        *(ulong *)(lVar6 + 0x28) = in_stack_000000a8;
        *(undefined8 *)(lVar6 + 0x20) = in_stack_000000a0;
        *(ulong *)(lVar6 + 0x38) = in_stack_000000b8;
        *(long **)(lVar6 + 0x30) = in_stack_000000b0;
        thunk_FUN_03048534(lVar6 + 0x20,0);
      }
      uVar3 = thunk_FUN_02fe6234(unaff_x21,0);
      uVar7 = *(undefined8 *)PTR_DAT_06f80908;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar7 = FUN_05afde1c(uVar7,0);
      uVar2 = FUN_05b0716c(uVar3,uVar7,0);
      if ((uVar2 & 1) != 0) break;
      uVar3 = thunk_FUN_02fe6234(unaff_x21,0);
      uVar7 = *(undefined8 *)PTR_DAT_06f80828;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar7 = FUN_05afde1c(uVar7,0);
      uVar2 = FUN_05b0716c(uVar3,uVar7,0);
      if ((uVar2 & 1) == 0) {
        thunk_FUN_03037804(PTR_DAT_06f6d5c8);
        uVar3 = thunk_FUN_0301080c();
        uVar7 = thunk_FUN_03037804(PTR_DAT_06fb94b8);
        FUN_05b27038(uVar3,uVar7,0);
        uVar7 = thunk_FUN_03037804(PTR_DAT_06fb94c0);
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar3,uVar7);
      }
      in_stack_000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = (long *)0x0;
      if (*(long *)(*unaff_x21 + 0x40) != *(long *)(*(long *)PTR_DAT_06f7a4c8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884(unaff_x21);
      }
      puVar5 = (undefined8 *)thunk_FUN_03010960(unaff_x21);
      uVar3 = *puVar5;
      in_stack_000000a0 = unaff_x22;
      thunk_FUN_03048534(&stack0x000000a0,unaff_x22);
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
      lVar6 = unaff_x19 + (int)unaff_w25 * unaff_x29;
      *(undefined8 *)(lVar6 + 0x40) = in_stack_000000c0;
      *(ulong *)(lVar6 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar6 + 0x20) = in_stack_000000a0;
      *(ulong *)(lVar6 + 0x38) = in_stack_000000b8;
      *(long **)(lVar6 + 0x30) = in_stack_000000b0;
      thunk_FUN_03048534(lVar6 + 0x20,0);
    }
    in_stack_000000c0 = 0;
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000b0 = (long *)0x0;
    param_1 = &PTR_DAT_06f6d000;
  } while( true );
}


