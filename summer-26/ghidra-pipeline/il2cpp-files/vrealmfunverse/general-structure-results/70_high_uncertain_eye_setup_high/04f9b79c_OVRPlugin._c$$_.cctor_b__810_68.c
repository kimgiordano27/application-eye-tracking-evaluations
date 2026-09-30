/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_68
ENTRY_POINT: 04f9b79c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_68(undefined8 *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  long unaff_x19;
  undefined8 unaff_x21;
  long unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  int unaff_w29;
  undefined8 uVar7;
  undefined8 uStack0000000000000010;
  ulong in_stack_00000018;
  long *in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  do {
    uVar7 = *param_1;
    uStack0000000000000010 = unaff_x21;
    thunk_FUN_02bb0e9c(&stack0x00000010,unaff_x21);
    in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,2);
    in_stack_00000020 = (long *)0x0;
    in_stack_00000030 = uVar7;
    thunk_FUN_02bb0e9c(unaff_x23 + 0x10,0);
    in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000;
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar6 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
    *(undefined8 *)(lVar6 + 0x40) = in_stack_00000030;
    *(ulong *)(lVar6 + 0x28) = in_stack_00000018;
    *(undefined8 *)(lVar6 + 0x20) = uStack0000000000000010;
    *(ulong *)(lVar6 + 0x38) = in_stack_00000028;
    *(long **)(lVar6 + 0x30) = in_stack_00000020;
    thunk_FUN_02bb0e9c(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
    while( true ) {
      while( true ) {
        unaff_w24 = unaff_w24 + 1;
        uVar3 = FUN_047e368c(&stack0x00000040,*unaff_x26);
        plVar2 = in_stack_00000058;
        unaff_x21 = in_stack_00000050;
        if ((uVar3 & 1) == 0) {
          FUN_047e37ac(&stack0x00000040,*(undefined8 *)UnityEngine_Rendering_GPUPrefixSum_var);
          return;
        }
        if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar7 = thunk_FUN_02b4c898(in_stack_00000058,0);
        lVar6 = *(long *)(unaff_x27 + 0x48);
        if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar4 = FUN_04d8a7b0(lVar6 + 0x20,0);
        uVar3 = FUN_04d938a0(uVar7,uVar4,0);
        if ((uVar3 & 1) == 0) break;
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        uStack0000000000000010 = 0;
        in_stack_00000028 = 0;
        in_stack_00000020 = (long *)0x0;
        if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(plVar2);
        }
        puVar5 = (undefined4 *)thunk_FUN_02b7978c(plVar2);
        uVar1 = *puVar5;
        uStack0000000000000010 = unaff_x21;
        thunk_FUN_02bb0e9c(&stack0x00000010,unaff_x21);
        in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar1);
        in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,1);
        in_stack_00000020 = (long *)0x0;
        thunk_FUN_02bb0e9c(unaff_x23 + 0x10,0);
        in_stack_00000030 = 0;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar6 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
        *(undefined8 *)(lVar6 + 0x40) = 0;
        *(ulong *)(lVar6 + 0x28) = in_stack_00000018;
        *(undefined8 *)(lVar6 + 0x20) = uStack0000000000000010;
        *(ulong *)(lVar6 + 0x38) = in_stack_00000028;
        *(long **)(lVar6 + 0x30) = in_stack_00000020;
        thunk_FUN_02bb0e9c(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
      }
      uVar7 = thunk_FUN_02b4c898(plVar2,0);
      lVar6 = *(long *)(unaff_x27 + 0x90);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar4 = FUN_04d8a7b0(lVar6 + 0x20,0);
      uVar3 = FUN_04d938a0(uVar7,uVar4,0);
      if ((uVar3 & 1) == 0) break;
      in_stack_00000030 = 0;
      in_stack_00000018 = 0;
      uStack0000000000000010 = 0;
      in_stack_00000028 = 0;
      in_stack_00000020 = (long *)0x0;
      if (*plVar2 != *(long *)(unaff_x27 + 0x90)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(plVar2);
      }
      uStack0000000000000010 = unaff_x21;
      thunk_FUN_02bb0e9c(&stack0x00000010,unaff_x21);
      in_stack_00000018 = in_stack_00000018 & 0xffffffff00000000;
      in_stack_00000020 = plVar2;
      thunk_FUN_02bb0e9c(unaff_x23 + 0x10,plVar2);
      in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000;
      in_stack_00000030 = 0;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar6 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
      *(undefined8 *)(lVar6 + 0x40) = 0;
      *(ulong *)(lVar6 + 0x28) = in_stack_00000018;
      *(undefined8 *)(lVar6 + 0x20) = uStack0000000000000010;
      *(ulong *)(lVar6 + 0x38) = in_stack_00000028;
      *(long **)(lVar6 + 0x30) = in_stack_00000020;
      thunk_FUN_02bb0e9c(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
    }
    uVar7 = thunk_FUN_02b4c898(plVar2,0);
    lVar6 = *(long *)(unaff_x27 + 0x80);
    if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar4 = FUN_04d8a7b0(lVar6 + 0x20,0);
    uVar3 = FUN_04d938a0(uVar7,uVar4,0);
    if ((uVar3 & 1) == 0) {
      thunk_FUN_02ba3594(PTR_DAT_06312bc0);
      uVar7 = thunk_FUN_02b79644();
      uVar4 = thunk_FUN_02ba3594(System_Func<HandSkeletonJoint,_HandSkeletonJoint>_TypeInfo);
      FUN_04db2a6c(uVar7,uVar4,0);
      uVar4 = thunk_FUN_02ba3594(System_Func<HierarchyNode,_HierarchyNode>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar7,uVar4);
    }
    in_stack_00000030 = 0;
    in_stack_00000018 = 0;
    uStack0000000000000010 = 0;
    in_stack_00000028 = 0;
    in_stack_00000020 = (long *)0x0;
    if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(plVar2);
    }
    param_1 = (undefined8 *)thunk_FUN_02b7978c(plVar2);
  } while( true );
}


