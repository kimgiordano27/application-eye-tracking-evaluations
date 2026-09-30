/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_62
ENTRY_POINT: 04f9b510
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


long OVRPlugin_<>c__<_cctor>b__810_62(undefined8 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  long *in_stack_00000010;
  ulong in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  long *in_stack_00000040;
  ulong in_stack_00000048;
  long *in_stack_00000050;
  long *in_stack_00000058;
  undefined8 in_stack_00000060;
  
  lVar7 = FUN_02b3c908(*param_1);
  FUN_0452e1f4(&stack0x00000010);
  puVar4 = UnityEngine_Rendering_GPUResidentDrawerSettings_var;
  puVar3 = PTR_DAT_06312310;
  uVar13 = 0;
  lVar1 = lVar7 + 0x20;
  in_stack_00000048 = in_stack_00000018;
  in_stack_00000040 = in_stack_00000010;
  in_stack_00000058 = in_stack_00000028;
  in_stack_00000050 = in_stack_00000020;
  in_stack_00000060 = in_stack_00000030;
  do {
    uVar8 = FUN_047e368c(&stack0x00000040,*(undefined8 *)puVar4);
    plVar6 = in_stack_00000058;
    plVar5 = in_stack_00000050;
    if ((uVar8 & 1) == 0) {
      FUN_047e37ac(&stack0x00000040,*(undefined8 *)UnityEngine_Rendering_GPUPrefixSum_var);
      return lVar7;
    }
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar9 = thunk_FUN_02b4c898(in_stack_00000058,0);
    lVar14 = *(long *)(puVar3 + 0x48);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar10 = FUN_04d8a7b0(lVar14 + 0x20,0);
    uVar8 = FUN_04d938a0(uVar9,uVar10,0);
    if ((uVar8 & 1) == 0) {
      uVar9 = thunk_FUN_02b4c898(plVar6,0);
      lVar14 = *(long *)(puVar3 + 0x90);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_04d8a7b0(lVar14 + 0x20,0);
      uVar8 = FUN_04d938a0(uVar9,uVar10,0);
      if ((uVar8 & 1) == 0) {
        uVar9 = thunk_FUN_02b4c898(plVar6,0);
        lVar14 = *(long *)(puVar3 + 0x80);
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar10 = FUN_04d8a7b0(lVar14 + 0x20,0);
        uVar8 = FUN_04d938a0(uVar9,uVar10,0);
        if ((uVar8 & 1) == 0) {
          thunk_FUN_02ba3594(PTR_DAT_06312bc0);
          uVar9 = thunk_FUN_02b79644();
          uVar10 = thunk_FUN_02ba3594(System_Func<HandSkeletonJoint,_HandSkeletonJoint>_TypeInfo);
          FUN_04db2a6c(uVar9,uVar10,0);
          uVar10 = thunk_FUN_02ba3594(System_Func<HierarchyNode,_HierarchyNode>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar9,uVar10);
        }
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = (long *)0x0;
        in_stack_00000028 = (long *)0x0;
        in_stack_00000020 = (long *)0x0;
        if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)(puVar3 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(plVar6);
        }
        puVar12 = (undefined8 *)thunk_FUN_02b7978c(plVar6);
        uVar9 = *puVar12;
        in_stack_00000010 = plVar5;
        thunk_FUN_02bb0e9c(&stack0x00000010,plVar5);
        in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,2);
        in_stack_00000020 = (long *)0x0;
        in_stack_00000030 = uVar9;
        thunk_FUN_02bb0e9c(&stack0x00000020,0);
        in_stack_00000028 = (long *)((ulong)in_stack_00000028 & 0xffffffff00000000);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar14 = lVar7 + (long)(int)uVar13 * 0x28;
        *(undefined8 *)(lVar14 + 0x40) = in_stack_00000030;
        *(ulong *)(lVar14 + 0x28) = in_stack_00000018;
        *(long **)(lVar14 + 0x20) = in_stack_00000010;
        *(long **)(lVar14 + 0x38) = in_stack_00000028;
        *(long **)(lVar14 + 0x30) = in_stack_00000020;
        thunk_FUN_02bb0e9c(lVar1 + (long)(int)uVar13 * 0x28,0);
      }
      else {
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = (long *)0x0;
        in_stack_00000028 = (long *)0x0;
        in_stack_00000020 = (long *)0x0;
        if (*plVar6 != *(long *)(puVar3 + 0x90)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(plVar6);
        }
        in_stack_00000010 = plVar5;
        thunk_FUN_02bb0e9c(&stack0x00000010,plVar5);
        in_stack_00000018 = in_stack_00000018 & 0xffffffff00000000;
        in_stack_00000020 = plVar6;
        thunk_FUN_02bb0e9c(&stack0x00000020,plVar6);
        in_stack_00000028 = (long *)((ulong)in_stack_00000028 & 0xffffffff00000000);
        in_stack_00000030 = 0;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar14 = lVar7 + (long)(int)uVar13 * 0x28;
        *(undefined8 *)(lVar14 + 0x40) = 0;
        *(ulong *)(lVar14 + 0x28) = in_stack_00000018;
        *(long **)(lVar14 + 0x20) = in_stack_00000010;
        *(long **)(lVar14 + 0x38) = in_stack_00000028;
        *(long **)(lVar14 + 0x30) = in_stack_00000020;
        thunk_FUN_02bb0e9c(lVar1 + (long)(int)uVar13 * 0x28,0);
      }
    }
    else {
      in_stack_00000030 = 0;
      in_stack_00000018 = 0;
      in_stack_00000010 = (long *)0x0;
      in_stack_00000028 = (long *)0x0;
      in_stack_00000020 = (long *)0x0;
      if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)(puVar3 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(plVar6);
      }
      puVar11 = (undefined4 *)thunk_FUN_02b7978c(plVar6);
      uVar2 = *puVar11;
      in_stack_00000010 = plVar5;
      thunk_FUN_02bb0e9c(&stack0x00000010,plVar5);
      in_stack_00000028 = (long *)CONCAT44(in_stack_00000028._4_4_,uVar2);
      in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,1);
      in_stack_00000020 = (long *)0x0;
      thunk_FUN_02bb0e9c(&stack0x00000020,0);
      in_stack_00000030 = 0;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar14 = lVar7 + (long)(int)uVar13 * 0x28;
      *(undefined8 *)(lVar14 + 0x40) = 0;
      *(ulong *)(lVar14 + 0x28) = in_stack_00000018;
      *(long **)(lVar14 + 0x20) = in_stack_00000010;
      *(long **)(lVar14 + 0x38) = in_stack_00000028;
      *(long **)(lVar14 + 0x30) = in_stack_00000020;
      thunk_FUN_02bb0e9c(lVar1 + (long)(int)uVar13 * 0x28,0);
    }
    uVar13 = uVar13 + 1;
  } while( true );
}


