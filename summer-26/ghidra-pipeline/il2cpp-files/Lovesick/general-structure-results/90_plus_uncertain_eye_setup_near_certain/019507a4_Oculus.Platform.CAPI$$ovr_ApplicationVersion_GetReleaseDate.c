/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_ApplicationVersion_GetReleaseDate
ENTRY_POINT: 019507a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Oculus_Platform_CAPI__ovr_ApplicationVersion_GetReleaseDate
               (undefined1 param_1 [16],ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined4 *puVar13;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar14;
  long *unaff_x23;
  float fVar15;
  float fVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(PTR_DAT_033f3618);
  thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
  thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
  thunk_FUN_00d48444(System_Collections_Generic_Dictionary<Hash128,_int[]>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x1b6) = 1;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000e0 = 0;
  uVar14 = *(undefined8 *)(unaff_x19 + 0x88);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar9 = PTR_DAT_033f3618;
  uVar4 = FUN_0268b4e0(uVar14,0,0);
  if ((uVar4 & 1) != 0) {
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar9);
    puVar3 = System_Collections_Generic_Dictionary<Hash128,_int[]>_TypeInfo;
    if (lVar5 == 0) goto LAB_01950f58;
    FUN_02669c18(lVar5,0);
    *(long *)(unaff_x19 + 0x88) = lVar5;
    FUN_0268b75c(lVar5,*(undefined8 *)puVar3,0);
    if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_01950f58;
    UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
              (*(long *)(unaff_x19 + 0x88),0);
    FUN_010c2c5c();
    if (in_stack_000000a0 == 0) goto LAB_01950f58;
    FUN_02677530(in_stack_000000a0,*(undefined8 *)(unaff_x19 + 0x88),0);
  }
  if (*(long *)(unaff_x19 + 0x88) == 0) {
LAB_01950f58:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_0266ed50(*(long *)(unaff_x19 + 0x88),0);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x18);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
  uVar4 = FUN_0268b4e0(uVar14,0,0);
  if ((uVar4 & 1) != 0) {
    uVar14 = FUN_00da4fb8(*(undefined8 *)puVar3,0);
    *(undefined8 *)(unaff_x19 + 0x78) = uVar14;
    return;
  }
  *(uint *)(unaff_x19 + 0x2c) =
       *(uint *)(unaff_x19 + 0x2c) & ((int)*(uint *)(unaff_x19 + 0x2c) >> 0x1f ^ 0xffffffffU);
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar9);
  puVar9 = Method_OVRPlugin_<>c_<_cctor>b__796_109__;
  if (lVar5 == 0) goto LAB_01950f58;
  FUN_02669c18(lVar5,0);
  lVar6 = FUN_00da4fb8(*(undefined8 *)puVar9,*(undefined4 *)(unaff_x19 + 0x2c));
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  puVar9 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_01950f58;
  iVar1 = *(int *)(unaff_x19 + 0x20);
  puVar10 = *(uint **)(*(long *)
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      + 0xb8);
  uVar20 = *puVar10;
  uVar23 = (ulong)puVar10[1];
  uVar24 = puVar10[2];
  FUN_0266af34(&stack0x000000a0,*(long *)(unaff_x19 + 0x18),0);
  in_stack_000000e8 = in_stack_000000a8;
  in_stack_000000e0 = in_stack_000000a0;
  in_stack_000000f0 = in_stack_000000b0;
  uVar4 = FUN_02687a8c(&stack0x000000e0,0);
  puVar3 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__;
  iVar2 = *(int *)(unaff_x19 + 0x20);
  if (((iVar2 == 0) || (uVar4 = param_3, iVar2 == 2)) || (uVar4 = param_2, iVar2 == 1)) {
    uVar21 = uVar4;
    uVar25 = (ulong)uVar24;
    if (((iVar1 != 0) && (uVar21 = (ulong)uVar20, uVar25 = uVar4, iVar1 != 2)) &&
       (uVar23 = uVar4, uVar25 = (ulong)uVar24, iVar1 != 1)) {
LAB_01950fa0:
      thunk_FUN_00d48444(
                        Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int,_List<Renderer>>_Dispose__
                        );
      uVar14 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar8 = thunk_FUN_00d48444(
                                System_Linq_Expressions_Interpreter_AddInstruction_AddInt64_TypeInfo
                                );
      FUN_0176c6a4(uVar14,uVar8,0);
      puVar9 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsl_n_s32__;
      goto LAB_01950fdc;
    }
    if (0 < *(int *)(unaff_x19 + 0x2c)) {
      if (lVar6 == 0) goto LAB_01950f58;
      uVar4 = 0;
      lVar7 = lVar6 + 0x20;
      do {
        if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_01950f5c;
        FUN_02681b14(lVar7,*(undefined8 *)(unaff_x19 + 0x18),0);
        if (DAT_03774f00 == '\0') {
          thunk_FUN_00d48444(puVar3);
          DAT_03774f00 = '\x01';
        }
        puVar11 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
        uVar30 = *puVar11;
        uVar29 = puVar11[1];
        uVar28 = puVar11[2];
        uVar27 = puVar11[3];
        if (DAT_03774e1c == '\0') {
          thunk_FUN_00d48444(puVar9);
          DAT_03774e1c = '\x01';
        }
        FUN_02693870(&stack0x00000060,uVar21,uVar23,uVar25,uVar30,uVar29,uVar28,uVar27,0);
        in_stack_000000b8 = in_stack_00000078;
        in_stack_000000b0 = in_stack_00000070;
        in_stack_000000c8 = in_stack_00000088;
        in_stack_000000c0 = in_stack_00000080;
        in_stack_000000a8 = in_stack_00000068;
        in_stack_000000a0 = in_stack_00000060;
        in_stack_000000d8 = in_stack_00000098;
        in_stack_000000d0 = in_stack_00000090;
        if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_01950f5c;
        in_stack_00000038 = in_stack_00000078;
        in_stack_00000030 = in_stack_00000070;
        in_stack_00000048 = in_stack_00000088;
        in_stack_00000040 = in_stack_00000080;
        in_stack_00000028 = in_stack_00000068;
        in_stack_00000020 = in_stack_00000060;
        in_stack_00000058 = in_stack_00000098;
        in_stack_00000050 = in_stack_00000090;
        lVar12 = in_stack_00000060;
        uVar14 = in_stack_00000070;
        FUN_02681d40(lVar7,&stack0x00000020,0);
        fVar19 = (float)uVar14;
        fVar18 = (float)lVar12;
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_01950f58;
        iVar1 = *(int *)(unaff_x19 + 0x20);
        FUN_0266af34(&stack0x00000060,*(long *)(unaff_x19 + 0x18),0);
        in_stack_000000e8 = in_stack_00000068;
        in_stack_000000e0 = in_stack_00000060;
        in_stack_000000f0 = in_stack_00000070;
        fVar15 = (float)FUN_02687a8c(&stack0x000000e0,0);
        iVar2 = *(int *)(unaff_x19 + 0x20);
        if (((iVar2 != 0) && (fVar15 = fVar19, iVar2 != 2)) && (fVar15 = fVar18, iVar2 != 1))
        goto LAB_01950f60;
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_01950f58;
        FUN_0266af34(&stack0x00000060,*(long *)(unaff_x19 + 0x18),0);
        in_stack_000000e8 = in_stack_00000068;
        in_stack_000000e0 = in_stack_00000060;
        in_stack_000000f0 = in_stack_00000070;
        fVar16 = (float)FUN_02687be0(&stack0x000000e0,0);
        iVar2 = *(int *)(unaff_x19 + 0x20);
        if (((iVar2 != 0) && (fVar16 = fVar19, iVar2 != 2)) && (fVar16 = fVar18, iVar2 != 1))
        goto LAB_01950f60;
        param_2 = (ulong)(uint)*(float *)(unaff_x19 + 0x30);
        uVar4 = uVar4 + 1;
        param_3 = (ulong)(uint)(float)(int)uVar4;
        uVar17 = (ulong)(uint)(fVar15 + fVar16 * (float)(int)uVar4 * *(float *)(unaff_x19 + 0x30));
        uVar22 = uVar17;
        uVar26 = uVar25;
        if (((iVar1 != 0) && (uVar22 = uVar21, uVar26 = uVar17, iVar1 != 2)) &&
           (uVar23 = uVar17, uVar26 = uVar25, iVar1 != 1)) goto LAB_01950fa0;
        lVar7 = lVar7 + 0x68;
        uVar21 = uVar22;
        uVar25 = uVar26;
      } while ((long)uVar4 < (long)*(int *)(unaff_x19 + 0x2c));
    }
    uVar28 = (undefined4)param_3;
    uVar27 = (undefined4)param_2;
    FUN_0266f340(lVar5,lVar6,1,1,0);
    uVar14 = FUN_0266b978(lVar5,0);
    *(undefined8 *)(unaff_x19 + 0x48) = uVar14;
    uVar14 = FUN_0266ba24(lVar5,0);
    *(undefined8 *)(unaff_x19 + 0x50) = uVar14;
    uVar14 = FUN_0266bad0(lVar5,0);
    *(undefined8 *)(unaff_x19 + 0x58) = uVar14;
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_01950f58;
    lVar6 = FUN_00da4fb8(*(undefined8 *)
                          Method_System_Collections_Generic_HashSet<RTHandle>_Contains__,
                         *(undefined4 *)(*(long *)(unaff_x19 + 0x48) + 0x18));
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_01950f58;
    lVar7 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                         *(undefined4 *)(*(long *)(unaff_x19 + 0x48) + 0x18));
    *(long *)(unaff_x19 + 0x78) = lVar7;
    puVar9 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    if (lVar6 == 0) goto LAB_01950f58;
    uVar20 = *(uint *)(lVar6 + 0x18);
    if (0 < (long)((ulong)uVar20 << 0x20)) {
      lVar12 = *(long *)(unaff_x19 + 0x48);
      uVar4 = 0;
      puVar11 = (undefined4 *)(lVar12 + 0x20);
      do {
        if (lVar12 == 0) goto LAB_01950f58;
        if (*(uint *)(lVar12 + 0x18) <= uVar4) {
LAB_01950f5c:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        iVar1 = *(int *)(unaff_x19 + 0x20);
        if (iVar1 == 2) {
          puVar13 = (undefined4 *)(lVar12 + uVar4 * 0xc + 0x28);
        }
        else if (iVar1 == 1) {
          puVar13 = (undefined4 *)(lVar12 + uVar4 * 0xc + 0x24);
        }
        else {
          puVar13 = puVar11;
          if (iVar1 != 0) goto LAB_01950f60;
        }
        if (uVar20 <= uVar4) goto LAB_01950f5c;
        *(undefined4 *)(lVar6 + 0x20 + uVar4 * 4) = *puVar13;
        if (lVar7 == 0) goto LAB_01950f58;
        if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_01950f5c;
        *(int *)(lVar7 + 0x20 + uVar4 * 4) = (int)uVar4;
        uVar4 = uVar4 + 1;
        puVar11 = puVar11 + 3;
      } while ((long)uVar4 < (long)(int)uVar20);
    }
    FUN_010b0610(lVar6,lVar7,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsubw_u32__);
    lVar6 = *(long *)(unaff_x19 + 0x88);
    uVar14 = FUN_0266b978(lVar5,0);
    if (lVar6 == 0) goto LAB_01950f58;
    FUN_0266b9c4(lVar6,uVar14,0);
    lVar6 = *(long *)(unaff_x19 + 0x88);
    uVar14 = FUN_0266ba24(lVar5,0);
    if (lVar6 == 0) goto LAB_01950f58;
    FUN_0266ba70(lVar6,uVar14,0);
    lVar6 = *(long *)(unaff_x19 + 0x88);
    uVar14 = FUN_0266bad0(lVar5,0);
    if (lVar6 == 0) goto LAB_01950f58;
    FUN_0266bb1c(lVar6,uVar14,0);
    lVar6 = *(long *)(unaff_x19 + 0x88);
    uVar14 = UnityEngine_UIElements_KeyboardNavigationManipulator__OnNavigationMove(lVar5,0);
    if (lVar6 == 0) goto LAB_01950f58;
    FUN_0266bbc8(lVar6,uVar14,0);
    lVar6 = *(long *)(unaff_x19 + 0x88);
    uVar14 = FUN_0266bc28(lVar5,0);
    if (lVar6 == 0) goto LAB_01950f58;
    FUN_0266bc74(lVar6,uVar14,0);
    lVar6 = *(long *)(unaff_x19 + 0x88);
    uVar14 = FUN_0266bcd4(lVar5,0);
    if (lVar6 == 0) goto LAB_01950f58;
    FUN_0266bd20(lVar6,uVar14,0);
    lVar6 = *(long *)(unaff_x19 + 0x88);
    uVar14 = FUN_0266bd80(lVar5,0);
    if (lVar6 == 0) goto LAB_01950f58;
    UnityEngine_UIElements_StylePropertyAnimationSystem__StartTransition(lVar6,uVar14,0);
    lVar6 = *(long *)(unaff_x19 + 0x88);
    uVar14 = FUN_0266c0dc(lVar5,0);
    if (lVar6 == 0) goto LAB_01950f58;
    FUN_0266c128(lVar6,uVar14,0);
    lVar6 = *(long *)(unaff_x19 + 0x88);
    uVar14 = FUN_0266da78(lVar5,0);
    if (lVar6 == 0) goto LAB_01950f58;
    FUN_0266db2c(lVar6,uVar14,0);
    if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_01950f58;
    uVar14 = FUN_0266b978(*(long *)(unaff_x19 + 0x88),0);
    *(undefined8 *)(unaff_x19 + 0x60) = uVar14;
    if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_01950f58;
    uVar14 = FUN_0266ba24(*(long *)(unaff_x19 + 0x88),0);
    *(undefined8 *)(unaff_x19 + 0x68) = uVar14;
    if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_01950f58;
    uVar14 = FUN_0266bad0(*(long *)(unaff_x19 + 0x88),0);
    *(undefined8 *)(unaff_x19 + 0x70) = uVar14;
    FUN_0266af34(&stack0x000000a0,lVar5,0);
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f0 = in_stack_000000b0;
    uVar29 = FUN_02687be0(&stack0x000000e0,0);
    iVar1 = *(int *)(unaff_x19 + 0x20);
    if (((iVar1 == 0) || (uVar29 = uVar28, iVar1 == 2)) || (uVar29 = uVar27, iVar1 == 1)) {
      *(undefined4 *)(unaff_x19 + 0x44) = uVar29;
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_0268c1d0(lVar5,0);
      return;
    }
  }
LAB_01950f60:
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int,_List<Renderer>>_Dispose__
                    );
  uVar14 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  uVar8 = thunk_FUN_00d48444(System_Linq_Expressions_Interpreter_AddInstruction_AddInt64_TypeInfo);
  FUN_0176c6a4(uVar14,uVar8,0);
  puVar9 = 
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_string>>_TypeInfo;
LAB_01950fdc:
  uVar8 = thunk_FUN_00d48444(puVar9);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar14,uVar8);
}


