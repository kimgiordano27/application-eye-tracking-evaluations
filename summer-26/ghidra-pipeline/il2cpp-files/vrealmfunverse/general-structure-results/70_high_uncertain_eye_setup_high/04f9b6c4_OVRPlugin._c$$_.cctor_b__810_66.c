/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_66
ENTRY_POINT: 04f9b6c4
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


void OVRPlugin_<>c__<_cctor>b__810_66(void)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
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
    if (!(bool)in_ZR) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(unaff_x20);
    }
    in_stack_00000010 = unaff_x21;
    thunk_FUN_02bb0e9c(&stack0x00000010,unaff_x21);
    in_stack_00000018 = in_stack_00000018 & 0xffffffff00000000;
    in_stack_00000020 = unaff_x20;
    thunk_FUN_02bb0e9c(unaff_x23 + 0x10,unaff_x20);
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
    lVar7 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
    *(undefined8 *)(lVar7 + 0x40) = 0;
    *(ulong *)(lVar7 + 0x28) = in_stack_00000018;
    *(undefined8 *)(lVar7 + 0x20) = in_stack_00000010;
    *(ulong *)(lVar7 + 0x38) = in_stack_00000028;
    *(long **)(lVar7 + 0x30) = in_stack_00000020;
    thunk_FUN_02bb0e9c(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
    while( true ) {
      while( true ) {
        unaff_w24 = unaff_w24 + 1;
        uVar2 = FUN_047e368c(&stack0x00000040,*unaff_x26);
        unaff_x20 = in_stack_00000058;
        unaff_x21 = in_stack_00000050;
        if ((uVar2 & 1) == 0) {
          FUN_047e37ac(&stack0x00000040,*(undefined8 *)UnityEngine_Rendering_GPUPrefixSum_var);
          return;
        }
        if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar3 = thunk_FUN_02b4c898(in_stack_00000058,0);
        lVar7 = *(long *)(unaff_x27 + 0x48);
        if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar4 = FUN_04d8a7b0(lVar7 + 0x20,0);
        uVar2 = FUN_04d938a0(uVar3,uVar4,0);
        if ((uVar2 & 1) == 0) break;
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = 0;
        in_stack_00000028 = 0;
        in_stack_00000020 = (long *)0x0;
        if (*(long *)(*unaff_x20 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(unaff_x20);
        }
        puVar5 = (undefined4 *)thunk_FUN_02b7978c(unaff_x20);
        uVar1 = *puVar5;
        in_stack_00000010 = unaff_x21;
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
        lVar7 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
        *(undefined8 *)(lVar7 + 0x40) = 0;
        *(ulong *)(lVar7 + 0x28) = in_stack_00000018;
        *(undefined8 *)(lVar7 + 0x20) = in_stack_00000010;
        *(ulong *)(lVar7 + 0x38) = in_stack_00000028;
        *(long **)(lVar7 + 0x30) = in_stack_00000020;
        thunk_FUN_02bb0e9c(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
      }
      uVar3 = thunk_FUN_02b4c898(unaff_x20,0);
      lVar7 = *(long *)(unaff_x27 + 0x90);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar4 = FUN_04d8a7b0(lVar7 + 0x20,0);
      uVar2 = FUN_04d938a0(uVar3,uVar4,0);
      if ((uVar2 & 1) != 0) break;
      uVar3 = thunk_FUN_02b4c898(unaff_x20,0);
      lVar7 = *(long *)(unaff_x27 + 0x80);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar4 = FUN_04d8a7b0(lVar7 + 0x20,0);
      uVar2 = FUN_04d938a0(uVar3,uVar4,0);
      if ((uVar2 & 1) == 0) {
        thunk_FUN_02ba3594(PTR_DAT_06312bc0);
        uVar3 = thunk_FUN_02b79644();
        uVar4 = thunk_FUN_02ba3594(System_Func<HandSkeletonJoint,_HandSkeletonJoint>_TypeInfo);
        FUN_04db2a6c(uVar3,uVar4,0);
        uVar4 = thunk_FUN_02ba3594(System_Func<HierarchyNode,_HierarchyNode>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar3,uVar4);
      }
      in_stack_00000030 = 0;
      in_stack_00000018 = 0;
      in_stack_00000010 = 0;
      in_stack_00000028 = 0;
      in_stack_00000020 = (long *)0x0;
      if (*(long *)(*unaff_x20 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(unaff_x20);
      }
      puVar6 = (undefined8 *)thunk_FUN_02b7978c(unaff_x20);
      uVar3 = *puVar6;
      in_stack_00000010 = unaff_x21;
      thunk_FUN_02bb0e9c(&stack0x00000010,unaff_x21);
      in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,2);
      in_stack_00000020 = (long *)0x0;
      in_stack_00000030 = uVar3;
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
      lVar7 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
      *(undefined8 *)(lVar7 + 0x40) = in_stack_00000030;
      *(ulong *)(lVar7 + 0x28) = in_stack_00000018;
      *(undefined8 *)(lVar7 + 0x20) = in_stack_00000010;
      *(ulong *)(lVar7 + 0x38) = in_stack_00000028;
      *(long **)(lVar7 + 0x30) = in_stack_00000020;
      thunk_FUN_02bb0e9c(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
    }
    in_stack_00000030 = 0;
    in_stack_00000018 = 0;
    in_stack_00000010 = 0;
    in_stack_00000028 = 0;
    in_stack_00000020 = (long *)0x0;
    in_ZR = *unaff_x20 == *(long *)(unaff_x27 + 0x90);
  } while( true );
}


