/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_82
ENTRY_POINT: 090db818
PROGRAM: Hyper-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_82(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  int unaff_w29;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  long *in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  do {
    thunk_FUN_049a583c();
    do {
      uVar2 = FUN_08d895f0(unaff_x28 + 0x20,0);
      uVar3 = FUN_08d93fbc(unaff_x22,uVar2,0);
      if ((uVar3 & 1) == 0) {
        uVar2 = thunk_FUN_04956588(unaff_x20,0);
        lVar7 = *(long *)(unaff_x27 + 0x90);
        if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar5 = FUN_08d895f0(lVar7 + 0x20,0);
        uVar3 = FUN_08d93fbc(uVar2,uVar5,0);
        if ((uVar3 & 1) == 0) {
          uVar2 = thunk_FUN_04956588(unaff_x20,0);
          lVar7 = *(long *)(unaff_x27 + 0x80);
          if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar5 = FUN_08d895f0(lVar7 + 0x20,0);
          uVar3 = FUN_08d93fbc(uVar2,uVar5,0);
          if ((uVar3 & 1) == 0) {
            thunk_FUN_049ae08c(PTR_DAT_0ac098c8);
            uVar2 = thunk_FUN_04983f60();
            uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac79aa0);
            FUN_08db3e00(uVar2,uVar5,0);
            uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac79aa8);
                    /* WARNING: Subroutine does not return */
            FUN_04948050(uVar2,uVar5);
          }
          in_stack_00000030 = 0;
          in_stack_00000018 = 0;
          in_stack_00000010 = 0;
          in_stack_00000028 = 0;
          in_stack_00000020 = (long *)0x0;
          if (*(long *)(*unaff_x20 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_0494850c(unaff_x20);
          }
          puVar6 = (undefined8 *)thunk_FUN_049840a8(unaff_x20);
          uVar2 = *puVar6;
          in_stack_00000010 = unaff_x21;
          thunk_FUN_049ee3d8(&stack0x00000010,unaff_x21);
          in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,2);
          in_stack_00000020 = (long *)0x0;
          in_stack_00000030 = uVar2;
          thunk_FUN_049ee3d8(unaff_x23 + 0x10,0);
          in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000;
          if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
            FUN_04948194();
          }
          lVar7 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
          *(undefined8 *)(lVar7 + 0x40) = in_stack_00000030;
          *(ulong *)(lVar7 + 0x28) = in_stack_00000018;
          *(undefined8 *)(lVar7 + 0x20) = in_stack_00000010;
          *(ulong *)(lVar7 + 0x38) = in_stack_00000028;
          *(long **)(lVar7 + 0x30) = in_stack_00000020;
          thunk_FUN_049ee3d8(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
        }
        else {
          in_stack_00000030 = 0;
          in_stack_00000018 = 0;
          in_stack_00000010 = 0;
          in_stack_00000028 = 0;
          in_stack_00000020 = (long *)0x0;
          if (*unaff_x20 != *(long *)(unaff_x27 + 0x90)) {
                    /* WARNING: Subroutine does not return */
            FUN_0494850c(unaff_x20);
          }
          in_stack_00000010 = unaff_x21;
          thunk_FUN_049ee3d8(&stack0x00000010,unaff_x21);
          in_stack_00000018 = in_stack_00000018 & 0xffffffff00000000;
          in_stack_00000020 = unaff_x20;
          thunk_FUN_049ee3d8(unaff_x23 + 0x10,unaff_x20);
          in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000;
          in_stack_00000030 = 0;
          if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
            FUN_04948194();
          }
          lVar7 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
          *(undefined8 *)(lVar7 + 0x40) = 0;
          *(ulong *)(lVar7 + 0x28) = in_stack_00000018;
          *(undefined8 *)(lVar7 + 0x20) = in_stack_00000010;
          *(ulong *)(lVar7 + 0x38) = in_stack_00000028;
          *(long **)(lVar7 + 0x30) = in_stack_00000020;
          thunk_FUN_049ee3d8(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
        }
      }
      else {
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = 0;
        in_stack_00000028 = 0;
        in_stack_00000020 = (long *)0x0;
        if (*(long *)(*unaff_x20 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_0494850c(unaff_x20);
        }
        puVar4 = (undefined4 *)thunk_FUN_049840a8(unaff_x20);
        uVar1 = *puVar4;
        in_stack_00000010 = unaff_x21;
        thunk_FUN_049ee3d8(&stack0x00000010,unaff_x21);
        in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar1);
        in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,1);
        in_stack_00000020 = (long *)0x0;
        thunk_FUN_049ee3d8(unaff_x23 + 0x10,0);
        in_stack_00000030 = 0;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        lVar7 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
        *(undefined8 *)(lVar7 + 0x40) = 0;
        *(ulong *)(lVar7 + 0x28) = in_stack_00000018;
        *(undefined8 *)(lVar7 + 0x20) = in_stack_00000010;
        *(ulong *)(lVar7 + 0x38) = in_stack_00000028;
        *(long **)(lVar7 + 0x30) = in_stack_00000020;
        thunk_FUN_049ee3d8(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
      }
      unaff_w24 = unaff_w24 + 1;
      uVar3 = FUN_060b6c80(&stack0x00000040,*unaff_x26);
      unaff_x20 = in_stack_00000058;
      unaff_x21 = in_stack_00000050;
      if ((uVar3 & 1) == 0) {
        FUN_060b6da0(&stack0x00000040,*(undefined8 *)PTR_DAT_0ac6f088);
        return;
      }
      if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      unaff_x22 = thunk_FUN_04956588(in_stack_00000058,0);
      unaff_x28 = *(long *)(unaff_x27 + 0x48);
    } while (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) != 0);
  } while( true );
}


