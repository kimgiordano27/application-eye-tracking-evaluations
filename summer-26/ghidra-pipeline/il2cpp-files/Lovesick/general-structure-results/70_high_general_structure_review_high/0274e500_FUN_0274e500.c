/*
FUNCTION_NAME: FUN_0274e500
ENTRY_POINT: 0274e500
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void FUN_0274e500(long param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  long lVar16;
  
  if ((DAT_03788485 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_2057);
    thunk_FUN_00d48444(StringLiteral_7632);
    thunk_FUN_00d48444(PTR_DAT_033ea878);
    thunk_FUN_00d48444(UnityEngine_EventSystems_IDragHandler_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_4717);
    thunk_FUN_00d48444(StringLiteral_8964);
    thunk_FUN_00d48444(Obi_IAerodynamicConstraintsUser_TypeInfo);
    thunk_FUN_00d48444(Method_System_IO_Compression_DeflateStreamNative_UnmanagedWrite__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_ProBuilder_MeshOperations_Bevel_<>c__DisplayClass0_2_<BevelEdges>b__5__
                      );
    thunk_FUN_00d48444(Method_System_Tuple<TextWriter,_char[],_int,_int>_get_Item1__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JArray_<LoadAsync>d__2>__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vshll_high_n_u32__);
    thunk_FUN_00d48444(Meta_WitAi_Json_WitResponseArray_<GetEnumerator>d__14_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<List<TEdge>>_Clear__);
    thunk_FUN_00d48444(Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<StateEvent>__);
    thunk_FUN_00d48444(PTR_DAT_033eb2e8);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<BsonProperty>_Add__);
    thunk_FUN_00d48444(PTR_DAT_033f2120);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_n_s16__);
    thunk_FUN_00d48444(StringLiteral_10512);
    thunk_FUN_00d48444(StringLiteral_6449);
    DAT_03788485 = 1;
  }
  FUN_027a3234(param_1,param_2,0);
  puVar4 = StringLiteral_2057;
  puVar3 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<StateEvent>__;
  if (param_2 == (long *)0x0) {
                    /* catch() { ... } // from try @ 0274eadc with catch @ 0274eb6c */
                    /* catch() { ... } // from try @ 0274eabc with catch @ 0274eb78
                       catch() { ... } // from try @ 0274eb34 with catch @ 0274eb78 */
    return;
  }
  lVar9 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  lVar10 = FUN_012c4efc(*(undefined8 *)puVar4);
  puVar4 = StringLiteral_7632;
  puVar3 = PTR_DAT_033eb2e8;
  if (lVar9 == lVar10) {
    bVar6 = true;
  }
  else {
    lVar9 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    lVar10 = FUN_012c4efc(*(undefined8 *)puVar4);
    bVar6 = lVar9 == lVar10;
  }
  lVar9 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  puVar3 = PTR_DAT_033ea878;
  if (bVar6) {
    FUN_0274eba8(param_1,lVar9);
    return;
  }
  if (*(int *)(*(long *)Method_System_Tuple<TextWriter,_char[],_int,_int>_get_Item1__ + 0xe0) == 0)
  {
    thunk_FUN_00d32864();
  }
  puVar5 = StringLiteral_10512;
  lVar10 = FUN_012c4efc(*(undefined8 *)puVar3);
  puVar4 = StringLiteral_4717;
  puVar3 = Meta_WitAi_Json_WitResponseArray_<GetEnumerator>d__14_TypeInfo;
  if (lVar9 == lVar10) {
    uVar15 = *(undefined8 *)puVar5;
    uVar1 = *(uint *)(param_1 + 0x2b8);
    lVar9 = thunk_FUN_00d6225c(param_2,uVar15);
    if (lVar9 == 0) {
LAB_0274eb88:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(param_2,uVar15);
    }
    lVar16 = *(long *)puVar5;
    plVar11 = (long *)thunk_FUN_00d6225c(param_2,lVar16);
    if (plVar11 != (long *)0x0) {
      lVar9 = *plVar11;
      uVar13 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar16) {
                    /* try { // try from 0274e974 to 0284e98b has its CatchHandler @ 0274e7d8 */
            puVar12 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0274e980;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724(plVar11,lVar16,0);
LAB_0274e980:
      uVar7 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                    /* try { // try from 0274e98c to 0284e98f has its CatchHandler @ 0274e9b4 */
                    /* try { // try from 0274e990 to 0284e9b7 has its CatchHandler @ 0274e7d8 */
      uVar1 = 1 << (ulong)(uVar7 & 0x1f) | uVar1;
LAB_0274e9c0:
                    /* try { // try from 0274e9c0 to 0284e9cb has its CatchHandler @ 0274e7d8 */
      *(uint *)(param_1 + 0x2b8) = uVar1;
                    /* try { // try from 0274e9cc to 0284e9d3 has its CatchHandler @ 0274e9d4 */
                    /* catch() { ... } // from try @ 0274e970 with catch @ 0274e9d4
                       catch() { ... } // from try @ 0274e9b8 with catch @ 0274e9d4
                       catch() { ... } // from try @ 0274e9cc with catch @ 0274e9d4 */
      FUN_0274dd94(param_1);
      return;
    }
  }
  else {
    lVar9 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    /* try { // try from 0274e7d8 to 0284e83f has its CatchHandler @ 0274e7d8
                       catch() { ... } // from try @ 0274e7d8 with catch @ 0274e7d8
                       catch() { ... } // from try @ 0274e858 with catch @ 0274e7d8
                       catch() { ... } // from try @ 0274e908 with catch @ 0274e7d8
                       catch() { ... } // from try @ 0274e974 with catch @ 0274e7d8
                       catch() { ... } // from try @ 0274e990 with catch @ 0274e7d8
                       catch() { ... } // from try @ 0274e9c0 with catch @ 0274e7d8 */
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    lVar10 = FUN_012c4efc(*(undefined8 *)puVar4);
    puVar4 = 
    Method_UnityEngine_ProBuilder_MeshOperations_Bevel_<>c__DisplayClass0_2_<BevelEdges>b__5__;
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JArray_<LoadAsync>d__2>__
    ;
    if (lVar9 == lVar10) {
      uVar15 = *(undefined8 *)puVar5;
      uVar1 = *(uint *)(param_1 + 0x2b8);
      lVar9 = thunk_FUN_00d6225c(param_2,uVar15);
      if (lVar9 == 0) goto LAB_0274eb88;
      lVar16 = *(long *)puVar5;
      plVar11 = (long *)thunk_FUN_00d6225c(param_2,lVar16);
      if (plVar11 != (long *)0x0) {
        lVar9 = *plVar11;
        uVar13 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar16) {
              puVar12 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0274e9a8;
            }
                    /* try { // try from 0274e840 to 0284e843 has its CatchHandler @ 0274e878 */
            uVar13 = uVar13 - 1;
                    /* try { // try from 0274e844 to 0284e84f has its CatchHandler @ 0274e888 */
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
                    /* try { // try from 0274e854 to 0284e857 has its CatchHandler @ 0274e87c */
                    /* try { // try from 0274e858 to 0284e8a3 has its CatchHandler @ 0274e7d8 */
        puVar12 = (undefined8 *)FUN_00d59724(plVar11,lVar16,0);
LAB_0274e9a8:
        uVar7 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                    /* catch() { ... } // from try @ 0274e98c with catch @ 0274e9b4 */
                    /* try { // try from 0274e9b8 to 0284e9bf has its CatchHandler @ 0274e9d4 */
        uVar1 = uVar1 & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
        goto LAB_0274e9c0;
      }
    }
    else {
                    /* catch() { ... } // from try @ 0274e840 with catch @ 0274e878 */
                    /* catch() { ... } // from try @ 0274e854 with catch @ 0274e87c */
      lVar9 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
                    /* catch() { ... } // from try @ 0274e844 with catch @ 0274e888 */
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      lVar10 = FUN_012c4efc(*(undefined8 *)puVar4);
      puVar4 = StringLiteral_8964;
      puVar3 = PTR_DAT_033f2120;
                    /* try { // try from 0274e8a4 to 0284e8bb has its CatchHandler @ 0274e968 */
      if (lVar9 != lVar10) {
                    /* try { // try from 0274e8c4 to 0284e8c7 has its CatchHandler @ 0274e958 */
        lVar9 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
                    /* try { // try from 0274e8c8 to 0284e8e3 has its CatchHandler @ 0274e95c */
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar3);
        }
        lVar10 = FUN_012c4efc(*(undefined8 *)puVar4);
        puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vshll_high_n_u32__;
        puVar3 = Obi_IAerodynamicConstraintsUser_TypeInfo;
                    /* try { // try from 0274e8e8 to 0284e8f3 has its CatchHandler @ 0274e954 */
        if (lVar9 != lVar10) {
                    /* try { // try from 0274e9d8 to 0284ea4b has its CatchHandler @ 0274e9d8
                       catch() { ... } // from try @ 0274e9d8 with catch @ 0274e9d8
                       catch() { ... } // from try @ 0274ea6c with catch @ 0274e9d8
                       catch() { ... } // from try @ 0274eb18 with catch @ 0274e9d8
                       catch() { ... } // from try @ 0274eb84 with catch @ 0274e9d8
                       catch() { ... } // from try @ 0274eba0 with catch @ 0274e9d8
                       catch() { ... } // from try @ 0274ebd0 with catch @ 0274e9d8 */
          lVar9 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar4);
          }
          lVar10 = FUN_012c4efc(*(undefined8 *)puVar3);
          puVar4 = Method_System_Collections_Generic_List<List<TEdge>>_Clear__;
          puVar3 = UnityEngine_EventSystems_IDragHandler_TypeInfo;
          if (lVar9 == lVar10) {
            uVar1 = *(uint *)(param_1 + 0x2b4) & 0xffffffbf;
          }
          else {
                    /* catch() { ... } // from try @ 0274ea4c with catch @ 0274ea90 */
                    /* catch() { ... } // from try @ 0274ea68 with catch @ 0274ea94 */
            lVar9 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
                    /* catch() { ... } // from try @ 0274ea50 with catch @ 0274eaa0 */
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar4);
            }
            lVar10 = FUN_012c4efc(*(undefined8 *)puVar3);
            puVar4 = Method_System_IO_Compression_DeflateStreamNative_UnmanagedWrite__;
            puVar3 = Method_System_Collections_Generic_List<BsonProperty>_Add__;
                    /* try { // try from 0274eabc to 0284ead3 has its CatchHandler @ 0274eb78 */
            if (lVar9 != lVar10) {
                    /* try { // try from 0274eadc to 0284eadf has its CatchHandler @ 0274eb6c */
                    /* try { // try from 0274eae0 to 0284eaf3 has its CatchHandler @ 0274eb68 */
                    /* try { // try from 0274eaf8 to 0284eb03 has its CatchHandler @ 0274eb64 */
              lVar9 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    /* try { // try from 0274eb0c to 0284eb17 has its CatchHandler @ 0274eb60 */
                thunk_FUN_00d32864(*(long *)puVar3);
              }
                    /* try { // try from 0274eb18 to 0284eb33 has its CatchHandler @ 0274e9d8 */
              lVar10 = FUN_012c4efc(*(undefined8 *)puVar4);
              if (lVar9 != lVar10) {
                return;
              }
                    /* try { // try from 0274eb34 to 0284eb43 has its CatchHandler @ 0274eb78 */
              bVar2 = *(byte *)(*(long *)StringLiteral_6449 + 300);
                    /* try { // try from 0274eb44 to 0284eb5b has its CatchHandler @ 0274eb5c */
              if ((bVar2 <= *(byte *)(*param_2 + 300)) &&
                 (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) ==
                  *(long *)StringLiteral_6449)) {
                    /* catch() { ... } // from try @ 0274eb44 with catch @ 0274eb5c */
                    /* catch() { ... } // from try @ 0274eb0c with catch @ 0274eb60 */
                    /* catch() { ... } // from try @ 0274eaf8 with catch @ 0274eb64 */
                    /* catch() { ... } // from try @ 0274eae0 with catch @ 0274eb68 */
                FUN_0274ee30(lVar10,param_2);
                return;
              }
                    /* try { // try from 0274eba0 to 0284ebc7 has its CatchHandler @ 0274e9d8 */
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(param_2);
            }
            uVar1 = *(uint *)(param_1 + 0x2b4) | 0x40;
          }
          FUN_0274dd00(param_1,uVar1);
          return;
        }
      }
      FUN_0274dd94(param_1);
      puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_n_s16__;
      lVar9 = *(long *)(param_1 + 0x388);
                    /* try { // try from 0274e8fc to 0284e907 has its CatchHandler @ 0274e950 */
      if (lVar9 == 0) {
        return;
      }
                    /* try { // try from 0274e908 to 0284e923 has its CatchHandler @ 0274e7d8 */
      lVar16 = *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_n_s16__;
      lVar10 = thunk_FUN_00d6225c(param_2,lVar16);
      if (lVar10 != 0) {
        lVar10 = *(long *)puVar3;
                    /* try { // try from 0274e924 to 0284e933 has its CatchHandler @ 0274e968 */
        plVar11 = (long *)thunk_FUN_00d6225c(param_2,lVar10);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0274eb9c to 0284eb9f has its CatchHandler @ 0274ebc4 */
          FUN_00da544c(param_2,lVar10);
        }
        lVar16 = *plVar11;
                    /* try { // try from 0274e934 to 0284e94b has its CatchHandler @ 0274e94c */
        uVar13 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
                    /* catch() { ... } // from try @ 0274e934 with catch @ 0274e94c */
                    /* catch() { ... } // from try @ 0274e8fc with catch @ 0274e950 */
            if (*(long *)(piVar14 + -2) == lVar10) {
              puVar12 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0274ea38;
            }
                    /* catch() { ... } // from try @ 0274e8e8 with catch @ 0274e954 */
            uVar13 = uVar13 - 1;
                    /* catch() { ... } // from try @ 0274e8c4 with catch @ 0274e958 */
            piVar14 = piVar14 + 4;
                    /* catch() { ... } // from try @ 0274e8c8 with catch @ 0274e95c */
          } while (uVar13 != 0);
        }
                    /* catch() { ... } // from try @ 0274e8a4 with catch @ 0274e968
                       catch() { ... } // from try @ 0274e924 with catch @ 0274e968 */
        puVar12 = (undefined8 *)FUN_00d59724(plVar11,lVar10,0);
                    /* try { // try from 0274e970 to 0284e973 has its CatchHandler @ 0274e9d4 */
LAB_0274ea38:
        uVar8 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                    /* try { // try from 0274ea4c to 0284ea4f has its CatchHandler @ 0274ea90 */
                    /* try { // try from 0274ea50 to 0284ea63 has its CatchHandler @ 0274eaa0 */
        lVar9 = FUN_02765da4(lVar9,uVar8,0);
        while( true ) {
          if (lVar9 == 0) {
            return;
          }
          if (lVar9 == param_1) break;
                    /* try { // try from 0274ea68 to 0284ea6b has its CatchHandler @ 0274ea94 */
          FUN_0274dd94(lVar9);
                    /* try { // try from 0274ea6c to 0284eabb has its CatchHandler @ 0274e9d8 */
          lVar9 = *(long *)(lVar9 + 0x378);
        }
        return;
      }
    }
  }
                    /* try { // try from 0274eb80 to 0284eb83 has its CatchHandler @ 0274ebe4 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0274eb84 to 0284eb9b has its CatchHandler @ 0274e9d8 */
  FUN_00da544c(param_2,lVar16);
}


