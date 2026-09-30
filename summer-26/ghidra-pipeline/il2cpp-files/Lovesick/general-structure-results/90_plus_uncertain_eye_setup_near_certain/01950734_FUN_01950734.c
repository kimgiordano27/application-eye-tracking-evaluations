/*
FUNCTION_NAME: FUN_01950734
ENTRY_POINT: 01950734
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01950734(undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  long local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  long local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  puVar10 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_0377a1b6 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vsubw_u32__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_109__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<StyleValue>_get_Count__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(PTR_DAT_033f3618);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<Hash128,_int[]>_TypeInfo);
    DAT_0377a1b6 = 1;
  }
  uStack_b8 = 0;
  local_b0 = 0;
  local_c0 = 0;
  uVar15 = *(undefined8 *)(param_4 + 0x88);
  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar3 = PTR_DAT_033f3618;
  uVar5 = FUN_0268b4e0(uVar15,0,0);
  if ((uVar5 & 1) != 0) {
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    puVar4 = System_Collections_Generic_Dictionary<Hash128,_int[]>_TypeInfo;
    if (lVar6 == 0) goto LAB_01950f58;
    FUN_02669c18(lVar6,0);
    *(long *)(param_4 + 0x88) = lVar6;
    FUN_0268b75c(lVar6,*(undefined8 *)puVar4,0);
    puVar4 = Method_System_Collections_Generic_List<StyleValue>_get_Count__;
    if (*(long *)(param_4 + 0x88) == 0) goto LAB_01950f58;
    UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
              (*(long *)(param_4 + 0x88),0);
    FUN_010c2c5c(param_4,&local_100,*(undefined8 *)puVar4);
    if (local_100 == 0) goto LAB_01950f58;
    FUN_02677530(local_100,*(undefined8 *)(param_4 + 0x88),0);
  }
  if (*(long *)(param_4 + 0x88) == 0) {
LAB_01950f58:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_0266ed50(*(long *)(param_4 + 0x88),0);
  uVar15 = *(undefined8 *)(param_4 + 0x18);
  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar10 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
  uVar5 = FUN_0268b4e0(uVar15,0,0);
  if ((uVar5 & 1) != 0) {
    uVar15 = FUN_00da4fb8(*(undefined8 *)puVar10,0);
    *(undefined8 *)(param_4 + 0x78) = uVar15;
    return;
  }
  *(uint *)(param_4 + 0x2c) =
       *(uint *)(param_4 + 0x2c) & ((int)*(uint *)(param_4 + 0x2c) >> 0x1f ^ 0xffffffffU);
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  puVar10 = Method_OVRPlugin_<>c_<_cctor>b__796_109__;
  if (lVar6 == 0) goto LAB_01950f58;
  FUN_02669c18(lVar6,0);
  lVar7 = FUN_00da4fb8(*(undefined8 *)puVar10,*(undefined4 *)(param_4 + 0x2c));
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  puVar10 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  if (*(long *)(param_4 + 0x18) == 0) goto LAB_01950f58;
  iVar1 = *(int *)(param_4 + 0x20);
  puVar11 = *(uint **)(*(long *)
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      + 0xb8);
  uVar21 = *puVar11;
  uVar24 = (ulong)puVar11[1];
  uVar25 = puVar11[2];
  FUN_0266af34(&local_100,*(long *)(param_4 + 0x18),0);
  uStack_b8 = uStack_f8;
  local_c0 = local_100;
  local_b0 = local_f0;
  uVar5 = FUN_02687a8c(&local_c0,0);
  puVar3 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__;
  iVar2 = *(int *)(param_4 + 0x20);
  if (((iVar2 == 0) || (uVar5 = param_3, iVar2 == 2)) || (uVar5 = param_2, iVar2 == 1)) {
    uVar22 = uVar5;
    uVar26 = (ulong)uVar25;
    if (((iVar1 != 0) && (uVar22 = (ulong)uVar21, uVar26 = uVar5, iVar1 != 2)) &&
       (uVar24 = uVar5, uVar26 = (ulong)uVar25, iVar1 != 1)) {
LAB_01950fa0:
      thunk_FUN_00d48444(
                        Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int,_List<Renderer>>_Dispose__
                        );
      uVar15 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar9 = thunk_FUN_00d48444(
                                System_Linq_Expressions_Interpreter_AddInstruction_AddInt64_TypeInfo
                                );
      FUN_0176c6a4(uVar15,uVar9,0);
      puVar10 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsl_n_s32__;
      goto LAB_01950fdc;
    }
    if (0 < *(int *)(param_4 + 0x2c)) {
      if (lVar7 == 0) goto LAB_01950f58;
      uVar5 = 0;
      lVar8 = lVar7 + 0x20;
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_01950f5c;
        FUN_02681b14(lVar8,*(undefined8 *)(param_4 + 0x18),0);
        if (DAT_03774f00 == '\0') {
          thunk_FUN_00d48444(puVar3);
          DAT_03774f00 = '\x01';
        }
        puVar12 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
        uVar31 = *puVar12;
        uVar30 = puVar12[1];
        uVar29 = puVar12[2];
        uVar28 = puVar12[3];
        if (DAT_03774e1c == '\0') {
          thunk_FUN_00d48444(puVar10);
          DAT_03774e1c = '\x01';
        }
        FUN_02693870(&local_140,uVar22,uVar24,uVar26,uVar31,uVar30,uVar29,uVar28,0);
        uStack_e8 = uStack_128;
        local_f0 = local_130;
        uStack_d8 = uStack_118;
        uStack_e0 = uStack_120;
        uStack_f8 = uStack_138;
        local_100 = local_140;
        uStack_c8 = uStack_108;
        local_d0 = local_110;
        if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_01950f5c;
        uStack_168 = uStack_128;
        local_170 = local_130;
        uStack_158 = uStack_118;
        uStack_160 = uStack_120;
        uStack_178 = uStack_138;
        local_180 = local_140;
        uStack_148 = uStack_108;
        local_150 = local_110;
        lVar13 = local_140;
        uVar15 = local_130;
        FUN_02681d40(lVar8,&local_180,0);
        fVar20 = (float)uVar15;
        fVar19 = (float)lVar13;
        if (*(long *)(param_4 + 0x18) == 0) goto LAB_01950f58;
        iVar1 = *(int *)(param_4 + 0x20);
        FUN_0266af34(&local_140,*(long *)(param_4 + 0x18),0);
        uStack_b8 = uStack_138;
        local_c0 = local_140;
        local_b0 = local_130;
        fVar16 = (float)FUN_02687a8c(&local_c0,0);
        iVar2 = *(int *)(param_4 + 0x20);
        if (((iVar2 != 0) && (fVar16 = fVar20, iVar2 != 2)) && (fVar16 = fVar19, iVar2 != 1))
        goto LAB_01950f60;
        if (*(long *)(param_4 + 0x18) == 0) goto LAB_01950f58;
        FUN_0266af34(&local_140,*(long *)(param_4 + 0x18),0);
        uStack_b8 = uStack_138;
        local_c0 = local_140;
        local_b0 = local_130;
        fVar17 = (float)FUN_02687be0(&local_c0,0);
        iVar2 = *(int *)(param_4 + 0x20);
        if (((iVar2 != 0) && (fVar17 = fVar20, iVar2 != 2)) && (fVar17 = fVar19, iVar2 != 1))
        goto LAB_01950f60;
        param_2 = (ulong)(uint)*(float *)(param_4 + 0x30);
        uVar5 = uVar5 + 1;
        param_3 = (ulong)(uint)(float)(int)uVar5;
        uVar18 = (ulong)(uint)(fVar16 + fVar17 * (float)(int)uVar5 * *(float *)(param_4 + 0x30));
        uVar23 = uVar18;
        uVar27 = uVar26;
        if (((iVar1 != 0) && (uVar23 = uVar22, uVar27 = uVar18, iVar1 != 2)) &&
           (uVar24 = uVar18, uVar27 = uVar26, iVar1 != 1)) goto LAB_01950fa0;
        lVar8 = lVar8 + 0x68;
        uVar22 = uVar23;
        uVar26 = uVar27;
      } while ((long)uVar5 < (long)*(int *)(param_4 + 0x2c));
    }
    uVar29 = (undefined4)param_3;
    uVar28 = (undefined4)param_2;
    FUN_0266f340(lVar6,lVar7,1,1,0);
    uVar15 = FUN_0266b978(lVar6,0);
    *(undefined8 *)(param_4 + 0x48) = uVar15;
    uVar15 = FUN_0266ba24(lVar6,0);
    *(undefined8 *)(param_4 + 0x50) = uVar15;
    uVar15 = FUN_0266bad0(lVar6,0);
    *(undefined8 *)(param_4 + 0x58) = uVar15;
    if (*(long *)(param_4 + 0x48) == 0) goto LAB_01950f58;
    lVar7 = FUN_00da4fb8(*(undefined8 *)
                          Method_System_Collections_Generic_HashSet<RTHandle>_Contains__,
                         *(undefined4 *)(*(long *)(param_4 + 0x48) + 0x18));
    if (*(long *)(param_4 + 0x48) == 0) goto LAB_01950f58;
    lVar8 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                         *(undefined4 *)(*(long *)(param_4 + 0x48) + 0x18));
    *(long *)(param_4 + 0x78) = lVar8;
    puVar10 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    if (lVar7 == 0) goto LAB_01950f58;
    uVar21 = *(uint *)(lVar7 + 0x18);
    if (0 < (long)((ulong)uVar21 << 0x20)) {
      lVar13 = *(long *)(param_4 + 0x48);
      uVar5 = 0;
      puVar12 = (undefined4 *)(lVar13 + 0x20);
      do {
        if (lVar13 == 0) goto LAB_01950f58;
        if (*(uint *)(lVar13 + 0x18) <= uVar5) {
LAB_01950f5c:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        iVar1 = *(int *)(param_4 + 0x20);
        if (iVar1 == 2) {
          puVar14 = (undefined4 *)(lVar13 + uVar5 * 0xc + 0x28);
        }
        else if (iVar1 == 1) {
          puVar14 = (undefined4 *)(lVar13 + uVar5 * 0xc + 0x24);
        }
        else {
          puVar14 = puVar12;
          if (iVar1 != 0) goto LAB_01950f60;
        }
        if (uVar21 <= uVar5) goto LAB_01950f5c;
        *(undefined4 *)(lVar7 + 0x20 + uVar5 * 4) = *puVar14;
        if (lVar8 == 0) goto LAB_01950f58;
        if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_01950f5c;
        *(int *)(lVar8 + 0x20 + uVar5 * 4) = (int)uVar5;
        uVar5 = uVar5 + 1;
        puVar12 = puVar12 + 3;
      } while ((long)uVar5 < (long)(int)uVar21);
    }
    FUN_010b0610(lVar7,lVar8,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsubw_u32__);
    lVar7 = *(long *)(param_4 + 0x88);
    uVar15 = FUN_0266b978(lVar6,0);
    if (lVar7 == 0) goto LAB_01950f58;
    FUN_0266b9c4(lVar7,uVar15,0);
    lVar7 = *(long *)(param_4 + 0x88);
    uVar15 = FUN_0266ba24(lVar6,0);
    if (lVar7 == 0) goto LAB_01950f58;
    FUN_0266ba70(lVar7,uVar15,0);
    lVar7 = *(long *)(param_4 + 0x88);
    uVar15 = FUN_0266bad0(lVar6,0);
    if (lVar7 == 0) goto LAB_01950f58;
    FUN_0266bb1c(lVar7,uVar15,0);
    lVar7 = *(long *)(param_4 + 0x88);
    uVar15 = UnityEngine_UIElements_KeyboardNavigationManipulator__OnNavigationMove(lVar6,0);
    if (lVar7 == 0) goto LAB_01950f58;
    FUN_0266bbc8(lVar7,uVar15,0);
    lVar7 = *(long *)(param_4 + 0x88);
    uVar15 = FUN_0266bc28(lVar6,0);
    if (lVar7 == 0) goto LAB_01950f58;
    FUN_0266bc74(lVar7,uVar15,0);
    lVar7 = *(long *)(param_4 + 0x88);
    uVar15 = FUN_0266bcd4(lVar6,0);
    if (lVar7 == 0) goto LAB_01950f58;
    FUN_0266bd20(lVar7,uVar15,0);
    lVar7 = *(long *)(param_4 + 0x88);
    uVar15 = FUN_0266bd80(lVar6,0);
    if (lVar7 == 0) goto LAB_01950f58;
    UnityEngine_UIElements_StylePropertyAnimationSystem__StartTransition(lVar7,uVar15,0);
    lVar7 = *(long *)(param_4 + 0x88);
    uVar15 = FUN_0266c0dc(lVar6,0);
    if (lVar7 == 0) goto LAB_01950f58;
    FUN_0266c128(lVar7,uVar15,0);
    lVar7 = *(long *)(param_4 + 0x88);
    uVar15 = FUN_0266da78(lVar6,0);
    if (lVar7 == 0) goto LAB_01950f58;
    FUN_0266db2c(lVar7,uVar15,0);
    if (*(long *)(param_4 + 0x88) == 0) goto LAB_01950f58;
    uVar15 = FUN_0266b978(*(long *)(param_4 + 0x88),0);
    *(undefined8 *)(param_4 + 0x60) = uVar15;
    if (*(long *)(param_4 + 0x88) == 0) goto LAB_01950f58;
    uVar15 = FUN_0266ba24(*(long *)(param_4 + 0x88),0);
    *(undefined8 *)(param_4 + 0x68) = uVar15;
    if (*(long *)(param_4 + 0x88) == 0) goto LAB_01950f58;
    uVar15 = FUN_0266bad0(*(long *)(param_4 + 0x88),0);
    *(undefined8 *)(param_4 + 0x70) = uVar15;
    FUN_0266af34(&local_100,lVar6,0);
    uStack_b8 = uStack_f8;
    local_c0 = local_100;
    local_b0 = local_f0;
    uVar30 = FUN_02687be0(&local_c0,0);
    iVar1 = *(int *)(param_4 + 0x20);
    if (((iVar1 == 0) || (uVar30 = uVar29, iVar1 == 2)) || (uVar30 = uVar28, iVar1 == 1)) {
      *(undefined4 *)(param_4 + 0x44) = uVar30;
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_0268c1d0(lVar6,0);
      return;
    }
  }
LAB_01950f60:
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int,_List<Renderer>>_Dispose__
                    );
  uVar15 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  uVar9 = thunk_FUN_00d48444(System_Linq_Expressions_Interpreter_AddInstruction_AddInt64_TypeInfo);
  FUN_0176c6a4(uVar15,uVar9,0);
  puVar10 = 
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_string>>_TypeInfo;
LAB_01950fdc:
  uVar9 = thunk_FUN_00d48444(puVar10);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar15,uVar9);
}


