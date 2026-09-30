/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$ToNativeArray
ENTRY_POINT: 06100e80
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 112
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__ToNativeArray(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  int unaff_w29;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  long *in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  do {
    thunk_FUN_036b7ad0(param_1,param_2);
    in_stack_00000018 = in_stack_00000018 & 0xffffffff00000000;
    in_stack_00000020 = unaff_x20;
    thunk_FUN_036b7ad0(unaff_x23 + 0x10,unaff_x20);
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
    lVar7 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
    *(undefined8 *)(lVar7 + 0x40) = 0;
    *(ulong *)(lVar7 + 0x28) = in_stack_00000018;
    *(undefined8 *)(lVar7 + 0x20) = in_stack_00000010;
    *(ulong *)(lVar7 + 0x38) = in_stack_00000028;
    *(long **)(lVar7 + 0x30) = in_stack_00000020;
    thunk_FUN_036b7ad0(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
    while( true ) {
      while( true ) {
        unaff_w24 = unaff_w24 + 1;
        uVar2 = FUN_05959498(&stack0x00000040,*unaff_x26);
        unaff_x20 = in_stack_00000058;
        param_2 = in_stack_00000050;
        if ((uVar2 & 1) == 0) {
          FUN_059595b8(&stack0x00000040,*(undefined8 *)PTR_DAT_07a20418);
          return;
        }
        if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar3 = thunk_FUN_03652da4(in_stack_00000058,0);
        lVar7 = *(long *)(unaff_x27 + 0x48);
        if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar4 = FUN_05e26f18(lVar7 + 0x20,0);
        uVar2 = FUN_05e30794(uVar3,uVar4,0);
        if ((uVar2 & 1) == 0) break;
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = 0;
        in_stack_00000028 = 0;
        in_stack_00000020 = (long *)0x0;
        if (*(long *)(*unaff_x20 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_03643084(unaff_x20);
        }
        puVar5 = (undefined4 *)thunk_FUN_0367ff68(unaff_x20);
        uVar1 = *puVar5;
        in_stack_00000010 = param_2;
        thunk_FUN_036b7ad0(&stack0x00000010,param_2);
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
        lVar7 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
        *(undefined8 *)(lVar7 + 0x40) = 0;
        *(ulong *)(lVar7 + 0x28) = in_stack_00000018;
        *(undefined8 *)(lVar7 + 0x20) = in_stack_00000010;
        *(ulong *)(lVar7 + 0x38) = in_stack_00000028;
        *(long **)(lVar7 + 0x30) = in_stack_00000020;
        thunk_FUN_036b7ad0(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
      }
      uVar3 = thunk_FUN_03652da4(unaff_x20,0);
      lVar7 = *(long *)(unaff_x27 + 0x90);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar4 = FUN_05e26f18(lVar7 + 0x20,0);
      uVar2 = FUN_05e30794(uVar3,uVar4,0);
      if ((uVar2 & 1) != 0) break;
      uVar3 = thunk_FUN_03652da4(unaff_x20,0);
      lVar7 = *(long *)(unaff_x27 + 0x80);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar4 = FUN_05e26f18(lVar7 + 0x20,0);
      uVar2 = FUN_05e30794(uVar3,uVar4,0);
      if ((uVar2 & 1) == 0) {
        thunk_FUN_036aa1c8(PTR_DAT_079f4ff8);
        uVar3 = thunk_FUN_0367fe20();
        uVar4 = thunk_FUN_036aa1c8(PTR_DAT_07a24f60);
        FUN_05e4fb54(uVar3,uVar4,0);
        uVar4 = thunk_FUN_036aa1c8(PTR_DAT_07a24f68);
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar3,uVar4);
      }
      in_stack_00000030 = 0;
      in_stack_00000018 = 0;
      in_stack_00000010 = 0;
      in_stack_00000028 = 0;
      in_stack_00000020 = (long *)0x0;
      if (*(long *)(*unaff_x20 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03643084(unaff_x20);
      }
      puVar6 = (undefined8 *)thunk_FUN_0367ff68(unaff_x20);
      uVar3 = *puVar6;
      in_stack_00000010 = param_2;
      thunk_FUN_036b7ad0(&stack0x00000010,param_2);
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
      lVar7 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
      *(undefined8 *)(lVar7 + 0x40) = in_stack_00000030;
      *(ulong *)(lVar7 + 0x28) = in_stack_00000018;
      *(undefined8 *)(lVar7 + 0x20) = in_stack_00000010;
      *(ulong *)(lVar7 + 0x38) = in_stack_00000028;
      *(long **)(lVar7 + 0x30) = in_stack_00000020;
      thunk_FUN_036b7ad0(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
    }
    in_stack_00000030 = 0;
    in_stack_00000018 = 0;
    in_stack_00000010 = 0;
    in_stack_00000028 = 0;
    in_stack_00000020 = (long *)0x0;
    if (*unaff_x20 != *(long *)(unaff_x27 + 0x90)) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084(unaff_x20);
    }
    in_stack_00000010 = param_2;
    param_1 = &stack0x00000010;
  } while( true );
}


