/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 06100e00
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


void OVRPlugin_Qpl_Annotation_Builder__Add
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],long param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 in_x9;
  long unaff_x19;
  long unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  long lVar8;
  int unaff_w29;
  long *plVar9;
  ulong uVar10;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  long *in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  uVar10 = param_3._8_8_;
  uVar7 = param_3._0_8_;
  uVar2 = param_2._8_8_;
  plVar9 = param_2._0_8_;
  do {
    *(undefined8 *)(param_1 + 0x40) = in_x9;
    *(ulong *)(param_1 + 0x28) = uVar10;
    *(undefined8 *)(param_1 + 0x20) = uVar7;
    *(ulong *)(param_1 + 0x38) = uVar2;
    *(long **)(param_1 + 0x30) = plVar9;
    thunk_FUN_036b7ad0(param_4,0);
    while( true ) {
      unaff_w24 = unaff_w24 + 1;
      uVar2 = FUN_05959498(&stack0x00000040,*unaff_x26);
      plVar9 = in_stack_00000058;
      uVar7 = in_stack_00000050;
      if ((uVar2 & 1) == 0) {
        FUN_059595b8(&stack0x00000040,*(undefined8 *)PTR_DAT_07a20418);
        return;
      }
      if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar3 = thunk_FUN_03652da4(in_stack_00000058,0);
      lVar8 = *(long *)(unaff_x27 + 0x48);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar4 = FUN_05e26f18(lVar8 + 0x20,0);
      uVar2 = FUN_05e30794(uVar3,uVar4,0);
      if ((uVar2 & 1) != 0) break;
      uVar3 = thunk_FUN_03652da4(plVar9,0);
      lVar8 = *(long *)(unaff_x27 + 0x90);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar4 = FUN_05e26f18(lVar8 + 0x20,0);
      uVar2 = FUN_05e30794(uVar3,uVar4,0);
      if ((uVar2 & 1) == 0) {
        uVar3 = thunk_FUN_03652da4(plVar9,0);
        lVar8 = *(long *)(unaff_x27 + 0x80);
        if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar4 = FUN_05e26f18(lVar8 + 0x20,0);
        uVar2 = FUN_05e30794(uVar3,uVar4,0);
        if ((uVar2 & 1) == 0) {
          thunk_FUN_036aa1c8(PTR_DAT_079f4ff8);
          uVar7 = thunk_FUN_0367fe20();
          uVar3 = thunk_FUN_036aa1c8(PTR_DAT_07a24f60);
          FUN_05e4fb54(uVar7,uVar3,0);
          uVar3 = thunk_FUN_036aa1c8(PTR_DAT_07a24f68);
                    /* WARNING: Subroutine does not return */
          FUN_03642acc(uVar7,uVar3);
        }
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = 0;
        in_stack_00000028 = 0;
        in_stack_00000020 = (long *)0x0;
        if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_03643084(plVar9);
        }
        puVar6 = (undefined8 *)thunk_FUN_0367ff68(plVar9);
        uVar3 = *puVar6;
        in_stack_00000010 = uVar7;
        thunk_FUN_036b7ad0(&stack0x00000010,uVar7);
        in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,2);
        in_stack_00000020 = (long *)0x0;
        in_stack_00000030 = uVar3;
        thunk_FUN_036b7ad0(unaff_x23 + 0x10,0);
        in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        lVar8 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
        *(undefined8 *)(lVar8 + 0x40) = in_stack_00000030;
        *(ulong *)(lVar8 + 0x28) = in_stack_00000018;
        *(undefined8 *)(lVar8 + 0x20) = in_stack_00000010;
        *(ulong *)(lVar8 + 0x38) = in_stack_00000028;
        *(long **)(lVar8 + 0x30) = in_stack_00000020;
        thunk_FUN_036b7ad0(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
      }
      else {
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = 0;
        in_stack_00000028 = 0;
        in_stack_00000020 = (long *)0x0;
        if (*plVar9 != *(long *)(unaff_x27 + 0x90)) {
                    /* WARNING: Subroutine does not return */
          FUN_03643084(plVar9);
        }
        in_stack_00000010 = uVar7;
        thunk_FUN_036b7ad0(&stack0x00000010,uVar7);
        in_stack_00000018 = in_stack_00000018 & 0xffffffff00000000;
        in_stack_00000020 = plVar9;
        thunk_FUN_036b7ad0(unaff_x23 + 0x10,plVar9);
        in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000;
        in_stack_00000030 = 0;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        lVar8 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
        *(undefined8 *)(lVar8 + 0x40) = 0;
        *(ulong *)(lVar8 + 0x28) = in_stack_00000018;
        *(undefined8 *)(lVar8 + 0x20) = in_stack_00000010;
        *(ulong *)(lVar8 + 0x38) = in_stack_00000028;
        *(long **)(lVar8 + 0x30) = in_stack_00000020;
        thunk_FUN_036b7ad0(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
      }
    }
    in_stack_00000030 = 0;
    in_stack_00000018 = 0;
    in_stack_00000010 = 0;
    in_stack_00000028 = 0;
    in_stack_00000020 = (long *)0x0;
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084(plVar9);
    }
    puVar5 = (undefined4 *)thunk_FUN_0367ff68(plVar9);
    uVar1 = *puVar5;
    in_stack_00000010 = uVar7;
    thunk_FUN_036b7ad0(&stack0x00000010,uVar7);
    in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar1);
    in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,1);
    in_stack_00000020 = (long *)0x0;
    thunk_FUN_036b7ad0(unaff_x23 + 0x10,0);
    in_stack_00000030 = 0;
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    param_1 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
    param_4 = unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29;
    in_x9 = 0;
    plVar9 = in_stack_00000020;
    uVar2 = in_stack_00000028;
    uVar7 = in_stack_00000010;
    uVar10 = in_stack_00000018;
  } while( true );
}


