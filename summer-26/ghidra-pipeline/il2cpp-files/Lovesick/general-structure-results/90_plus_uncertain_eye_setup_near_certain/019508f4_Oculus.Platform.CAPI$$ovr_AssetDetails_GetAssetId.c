/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_AssetDetails_GetAssetId
ENTRY_POINT: 019508f4
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


void Oculus_Platform_CAPI__ovr_AssetDetails_GetAssetId
               (undefined1 param_1 [16],ulong param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined4 *puVar12;
  long unaff_x19;
  float fVar13;
  float fVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  puVar8 = Method_OVRPlugin_<>c_<_cctor>b__796_109__;
  FUN_02669c18(param_4,0);
  lVar4 = FUN_00da4fb8(*(undefined8 *)puVar8,*(undefined4 *)(unaff_x19 + 0x2c));
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  puVar8 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_01950f58;
  iVar1 = *(int *)(unaff_x19 + 0x20);
  puVar9 = *(uint **)(*(long *)
                       Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                     + 0xb8);
  uVar19 = *puVar9;
  uVar22 = (ulong)puVar9[1];
  uVar23 = puVar9[2];
  FUN_0266af34(&stack0x000000a0,*(long *)(unaff_x19 + 0x18),0);
  in_stack_000000e8 = in_stack_000000a8;
  in_stack_000000e0 = in_stack_000000a0;
  in_stack_000000f0 = in_stack_000000b0;
  uVar15 = FUN_02687a8c(&stack0x000000e0,0);
  puVar3 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__;
  iVar2 = *(int *)(unaff_x19 + 0x20);
  if (((iVar2 == 0) || (uVar15 = param_3, iVar2 == 2)) || (uVar15 = param_2, iVar2 == 1)) {
    uVar20 = uVar15;
    uVar24 = (ulong)uVar23;
    if (((iVar1 != 0) && (uVar20 = (ulong)uVar19, uVar24 = uVar15, iVar1 != 2)) &&
       (uVar22 = uVar15, uVar24 = (ulong)uVar23, iVar1 != 1)) {
LAB_01950fa0:
      thunk_FUN_00d48444(
                        Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int,_List<Renderer>>_Dispose__
                        );
      uVar6 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar7 = thunk_FUN_00d48444(
                                System_Linq_Expressions_Interpreter_AddInstruction_AddInt64_TypeInfo
                                );
      FUN_0176c6a4(uVar6,uVar7,0);
      puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsl_n_s32__;
      goto LAB_01950fdc;
    }
    if (0 < *(int *)(unaff_x19 + 0x2c)) {
      if (lVar4 == 0) goto LAB_01950f58;
      uVar15 = 0;
      lVar5 = lVar4 + 0x20;
      do {
        if (*(uint *)(lVar4 + 0x18) <= uVar15) goto LAB_01950f5c;
        FUN_02681b14(lVar5,*(undefined8 *)(unaff_x19 + 0x18),0);
        if (DAT_03774f00 == '\0') {
          thunk_FUN_00d48444(puVar3);
          DAT_03774f00 = '\x01';
        }
        puVar10 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
        uVar29 = *puVar10;
        uVar28 = puVar10[1];
        uVar27 = puVar10[2];
        uVar26 = puVar10[3];
        if (DAT_03774e1c == '\0') {
          thunk_FUN_00d48444(puVar8);
          DAT_03774e1c = '\x01';
        }
        FUN_02693870(&stack0x00000060,uVar20,uVar22,uVar24,uVar29,uVar28,uVar27,uVar26,0);
        in_stack_000000b8 = in_stack_00000078;
        in_stack_000000b0 = in_stack_00000070;
        in_stack_000000c8 = in_stack_00000088;
        in_stack_000000c0 = in_stack_00000080;
        in_stack_000000a8 = in_stack_00000068;
        in_stack_000000a0 = in_stack_00000060;
        in_stack_000000d8 = in_stack_00000098;
        in_stack_000000d0 = in_stack_00000090;
        if (*(uint *)(lVar4 + 0x18) <= uVar15) goto LAB_01950f5c;
        in_stack_00000038 = in_stack_00000078;
        in_stack_00000030 = in_stack_00000070;
        in_stack_00000048 = in_stack_00000088;
        in_stack_00000040 = in_stack_00000080;
        in_stack_00000028 = in_stack_00000068;
        in_stack_00000020 = in_stack_00000060;
        in_stack_00000058 = in_stack_00000098;
        in_stack_00000050 = in_stack_00000090;
        uVar6 = in_stack_00000060;
        uVar7 = in_stack_00000070;
        FUN_02681d40(lVar5,&stack0x00000020,0);
        fVar18 = (float)uVar7;
        fVar17 = (float)uVar6;
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_01950f58;
        iVar1 = *(int *)(unaff_x19 + 0x20);
        FUN_0266af34(&stack0x00000060,*(long *)(unaff_x19 + 0x18),0);
        in_stack_000000e8 = in_stack_00000068;
        in_stack_000000e0 = in_stack_00000060;
        in_stack_000000f0 = in_stack_00000070;
        fVar13 = (float)FUN_02687a8c(&stack0x000000e0,0);
        iVar2 = *(int *)(unaff_x19 + 0x20);
        if (((iVar2 != 0) && (fVar13 = fVar18, iVar2 != 2)) && (fVar13 = fVar17, iVar2 != 1))
        goto LAB_01950f60;
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_01950f58;
        FUN_0266af34(&stack0x00000060,*(long *)(unaff_x19 + 0x18),0);
        in_stack_000000e8 = in_stack_00000068;
        in_stack_000000e0 = in_stack_00000060;
        in_stack_000000f0 = in_stack_00000070;
        fVar14 = (float)FUN_02687be0(&stack0x000000e0,0);
        iVar2 = *(int *)(unaff_x19 + 0x20);
        if (((iVar2 != 0) && (fVar14 = fVar18, iVar2 != 2)) && (fVar14 = fVar17, iVar2 != 1))
        goto LAB_01950f60;
        param_2 = (ulong)(uint)*(float *)(unaff_x19 + 0x30);
        uVar15 = uVar15 + 1;
        param_3 = (ulong)(uint)(float)(int)uVar15;
        uVar16 = (ulong)(uint)(fVar13 + fVar14 * (float)(int)uVar15 * *(float *)(unaff_x19 + 0x30));
        uVar21 = uVar16;
        uVar25 = uVar24;
        if (((iVar1 != 0) && (uVar21 = uVar20, uVar25 = uVar16, iVar1 != 2)) &&
           (uVar22 = uVar16, uVar25 = uVar24, iVar1 != 1)) goto LAB_01950fa0;
        lVar5 = lVar5 + 0x68;
        uVar20 = uVar21;
        uVar24 = uVar25;
      } while ((long)uVar15 < (long)*(int *)(unaff_x19 + 0x2c));
    }
    uVar27 = (undefined4)param_3;
    uVar26 = (undefined4)param_2;
    FUN_0266f340(param_4,lVar4,1,1,0);
    uVar6 = FUN_0266b978(param_4,0);
    *(undefined8 *)(unaff_x19 + 0x48) = uVar6;
    uVar6 = FUN_0266ba24(param_4,0);
    *(undefined8 *)(unaff_x19 + 0x50) = uVar6;
    uVar6 = FUN_0266bad0(param_4,0);
    *(undefined8 *)(unaff_x19 + 0x58) = uVar6;
    if (*(long *)(unaff_x19 + 0x48) == 0) {
LAB_01950f58:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar4 = FUN_00da4fb8(*(undefined8 *)
                          Method_System_Collections_Generic_HashSet<RTHandle>_Contains__,
                         *(undefined4 *)(*(long *)(unaff_x19 + 0x48) + 0x18));
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_01950f58;
    lVar5 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                         *(undefined4 *)(*(long *)(unaff_x19 + 0x48) + 0x18));
    *(long *)(unaff_x19 + 0x78) = lVar5;
    puVar8 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    if (lVar4 == 0) goto LAB_01950f58;
    uVar19 = *(uint *)(lVar4 + 0x18);
    if (0 < (long)((ulong)uVar19 << 0x20)) {
      lVar11 = *(long *)(unaff_x19 + 0x48);
      uVar15 = 0;
      puVar10 = (undefined4 *)(lVar11 + 0x20);
      do {
        if (lVar11 == 0) goto LAB_01950f58;
        if (*(uint *)(lVar11 + 0x18) <= uVar15) {
LAB_01950f5c:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        iVar1 = *(int *)(unaff_x19 + 0x20);
        if (iVar1 == 2) {
          puVar12 = (undefined4 *)(lVar11 + uVar15 * 0xc + 0x28);
        }
        else if (iVar1 == 1) {
          puVar12 = (undefined4 *)(lVar11 + uVar15 * 0xc + 0x24);
        }
        else {
          puVar12 = puVar10;
          if (iVar1 != 0) goto LAB_01950f60;
        }
        if (uVar19 <= uVar15) goto LAB_01950f5c;
        *(undefined4 *)(lVar4 + 0x20 + uVar15 * 4) = *puVar12;
        if (lVar5 == 0) goto LAB_01950f58;
        if (*(uint *)(lVar5 + 0x18) <= uVar15) goto LAB_01950f5c;
        *(int *)(lVar5 + 0x20 + uVar15 * 4) = (int)uVar15;
        uVar15 = uVar15 + 1;
        puVar10 = puVar10 + 3;
      } while ((long)uVar15 < (long)(int)uVar19);
    }
    FUN_010b0610(lVar4,lVar5,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsubw_u32__);
    lVar4 = *(long *)(unaff_x19 + 0x88);
    uVar6 = FUN_0266b978(param_4,0);
    if (lVar4 == 0) goto LAB_01950f58;
    FUN_0266b9c4(lVar4,uVar6,0);
    lVar4 = *(long *)(unaff_x19 + 0x88);
    uVar6 = FUN_0266ba24(param_4,0);
    if (lVar4 == 0) goto LAB_01950f58;
    FUN_0266ba70(lVar4,uVar6,0);
    lVar4 = *(long *)(unaff_x19 + 0x88);
    uVar6 = FUN_0266bad0(param_4,0);
    if (lVar4 == 0) goto LAB_01950f58;
    FUN_0266bb1c(lVar4,uVar6,0);
    lVar4 = *(long *)(unaff_x19 + 0x88);
    uVar6 = UnityEngine_UIElements_KeyboardNavigationManipulator__OnNavigationMove(param_4,0);
    if (lVar4 == 0) goto LAB_01950f58;
    FUN_0266bbc8(lVar4,uVar6,0);
    lVar4 = *(long *)(unaff_x19 + 0x88);
    uVar6 = FUN_0266bc28(param_4,0);
    if (lVar4 == 0) goto LAB_01950f58;
    FUN_0266bc74(lVar4,uVar6,0);
    lVar4 = *(long *)(unaff_x19 + 0x88);
    uVar6 = FUN_0266bcd4(param_4,0);
    if (lVar4 == 0) goto LAB_01950f58;
    FUN_0266bd20(lVar4,uVar6,0);
    lVar4 = *(long *)(unaff_x19 + 0x88);
    uVar6 = FUN_0266bd80(param_4,0);
    if (lVar4 == 0) goto LAB_01950f58;
    UnityEngine_UIElements_StylePropertyAnimationSystem__StartTransition(lVar4,uVar6,0);
    lVar4 = *(long *)(unaff_x19 + 0x88);
    uVar6 = FUN_0266c0dc(param_4,0);
    if (lVar4 == 0) goto LAB_01950f58;
    FUN_0266c128(lVar4,uVar6,0);
    lVar4 = *(long *)(unaff_x19 + 0x88);
    uVar6 = FUN_0266da78(param_4,0);
    if (lVar4 == 0) goto LAB_01950f58;
    FUN_0266db2c(lVar4,uVar6,0);
    if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_01950f58;
    uVar6 = FUN_0266b978(*(long *)(unaff_x19 + 0x88),0);
    *(undefined8 *)(unaff_x19 + 0x60) = uVar6;
    if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_01950f58;
    uVar6 = FUN_0266ba24(*(long *)(unaff_x19 + 0x88),0);
    *(undefined8 *)(unaff_x19 + 0x68) = uVar6;
    if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_01950f58;
    uVar6 = FUN_0266bad0(*(long *)(unaff_x19 + 0x88),0);
    *(undefined8 *)(unaff_x19 + 0x70) = uVar6;
    FUN_0266af34(&stack0x000000a0,param_4,0);
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f0 = in_stack_000000b0;
    uVar28 = FUN_02687be0(&stack0x000000e0,0);
    iVar1 = *(int *)(unaff_x19 + 0x20);
    if (((iVar1 == 0) || (uVar28 = uVar27, iVar1 == 2)) || (uVar28 = uVar26, iVar1 == 1)) {
      *(undefined4 *)(unaff_x19 + 0x44) = uVar28;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_0268c1d0(param_4,0);
      return;
    }
  }
LAB_01950f60:
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int,_List<Renderer>>_Dispose__
                    );
  uVar6 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  uVar7 = thunk_FUN_00d48444(System_Linq_Expressions_Interpreter_AddInstruction_AddInt64_TypeInfo);
  FUN_0176c6a4(uVar6,uVar7,0);
  puVar8 = 
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_string>>_TypeInfo;
LAB_01950fdc:
  uVar7 = thunk_FUN_00d48444(puVar8);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar6,uVar7);
}


