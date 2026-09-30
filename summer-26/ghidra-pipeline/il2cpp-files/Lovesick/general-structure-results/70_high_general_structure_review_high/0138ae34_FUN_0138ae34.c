/*
FUNCTION_NAME: FUN_0138ae34
ENTRY_POINT: 0138ae34
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_3;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0138ae34(undefined8 param_1,void *param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  void *__src;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  int *piVar16;
  ulong uVar17;
  undefined8 uVar18;
  void *pvVar19;
  long local_e0;
  ulong local_d8;
  void *local_d0;
  ulong local_c8;
  void *local_c0;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0 [2];
  undefined1 local_90;
  uint local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  
                    /* catch() { ... } // from try @ 0138acd4 with catch @ 0138ae3c
                       catch() { ... } // from try @ 0138adfc with catch @ 0138ae3c */
                    /* try { // try from 0138ae44 to 0148ae47 has its CatchHandler @ 0138b384 */
                    /* try { // try from 0138ae48 to 0148ae63 has its CatchHandler @ 0138a1ec */
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
                    /* try { // try from 0138ae64 to 0148ae67 has its CatchHandler @ 0138b374 */
  if ((DAT_0377676f & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_1154);
    thunk_FUN_00d48444(StringLiteral_4901);
    thunk_FUN_00d48444(System_Net_FileWebRequest_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9688);
                    /* try { // try from 0138aeb0 to 0148aebb has its CatchHandler @ 0138b3c4 */
    thunk_FUN_00d48444(Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Clear__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_System_Reflection_Emit_MethodBuilder_GetCustomAttributes__);
    thunk_FUN_00d48444(System_Text_RegularExpressions_RegexMatchTimeoutException_TypeInfo);
    thunk_FUN_00d48444(Method_Oculus_Interaction_Input_DataSource<HandDataAsset>_Start__);
                    /* try { // try from 0138af00 to 0148af0b has its CatchHandler @ 0138b3b0 */
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_136>_SliceWithStride<Vector4>__
                      );
    thunk_FUN_00d48444(System_Func<Mesh,_Color[]>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Security_Cryptography_TripleDES_IsWeakKey__);
                    /* try { // try from 0138af24 to 0148af2b has its CatchHandler @ 0138b3c4 */
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__);
                    /* try { // try from 0138af30 to 0148af37 has its CatchHandler @ 0138b3a8 */
    DAT_0377676f = 1;
  }
                    /* try { // try from 0138af3c to 0148af43 has its CatchHandler @ 0138b3a4 */
  lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
                    /* try { // try from 0138af54 to 0148af5b has its CatchHandler @ 0138b3a0 */
  if (*(int *)(lVar7 + 0x28) < 0) {
    iVar5 = thunk_FUN_00d42afc();
    uVar6 = iVar5 - 0x10;
  }
  else {
    uVar6 = 8;
  }
  uVar17 = (ulong)uVar6;
                    /* try { // try from 0138af74 to 0148af77 has its CatchHandler @ 0138b390 */
  pvVar19 = (void *)((long)&local_e0 - (uVar17 + 0xf & 0x1fffffff0));
                    /* try { // try from 0138af8c to 0148afaf has its CatchHandler @ 0138b3c0 */
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  memcpy(pvVar19,param_2,uVar17);
  lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  local_d0 = pvVar19;
  local_c0 = param_2;
  local_b0 = thunk_FUN_00d61fa0(lVar7,pvVar19);
                    /* try { // try from 0138afd4 to 0148afd7 has its CatchHandler @ 0138b38c */
  uVar18 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30);
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
  }
  puVar4 = StringLiteral_9688;
                    /* try { // try from 0138aff0 to 0148b013 has its CatchHandler @ 0138b3bc */
  uVar18 = FUN_01780344(uVar18,0);
  puVar13 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
  (*(code *)puVar13[2])(*puVar13,puVar13,param_1,0,local_a0);
  lVar7 = local_a0[0];
  if (local_a0[0] == 0) {
    if (param_3 == (long *)0x0) goto LAB_0138ba20;
                    /* try { // try from 0138b038 to 0148b03b has its CatchHandler @ 0138b388 */
    lVar7 = *param_3;
    uVar15 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* try { // try from 0138b054 to 0148b073 has its CatchHandler @ 0138b3d0 */
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar13 = (undefined8 *)(lVar7 + (long)(*piVar16 + 8) * 0x10 + 0x138);
          goto LAB_0138b088;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(param_3,*(long *)puVar4,8);
LAB_0138b088:
                    /* try { // try from 0138b08c to 0148b093 has its CatchHandler @ 0138b3b0 */
    lVar7 = (*(code *)*puVar13)(param_3,puVar13[1]);
                    /* try { // try from 0138b098 to 0148b09f has its CatchHandler @ 0138b398 */
    if ((lVar7 == 0) || (lVar7 = FUN_01c25128(lVar7,0), lVar7 == 0)) goto LAB_0138ba20;
                    /* try { // try from 0138b0a4 to 0148b0ab has its CatchHandler @ 0138b394 */
    lVar7 = FUN_01c25190(lVar7,0);
  }
  if (*(int *)(*(long *)System_Net_FileWebRequest_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  local_c8 = uVar17;
  local_b8 = lVar8;
  local_a8 = param_4;
  lVar8 = FUN_01c252c8(uVar18,lVar7,0);
  puVar3 = Method_System_Security_Cryptography_TripleDES_IsWeakKey__;
  puVar2 = Method_System_Reflection_Emit_MethodBuilder_GetCustomAttributes__;
  puVar1 = System_Text_RegularExpressions_RegexMatchTimeoutException_TypeInfo;
  if (param_3 != (long *)0x0) {
                    /* try { // try from 0138b0e8 to 0148b117 has its CatchHandler @ 0138b3ac */
    local_d8 = (ulong)local_80;
    local_e0 = (long)(int)local_80;
LAB_0138b114:
    lVar7 = *param_3;
    uVar17 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar17 != 0) {
                    /* try { // try from 0138b124 to 0148b13f has its CatchHandler @ 0138b3b4 */
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar13 = (undefined8 *)(lVar7 + (long)(*piVar16 + 0x10) * 0x10 + 0x138);
          goto LAB_0138b164;
        }
        uVar17 = uVar17 - 1;
        piVar16 = piVar16 + 4;
                    /* try { // try from 0138b140 to 0148b28b has its CatchHandler @ 0138a1ec */
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(param_3,*(long *)puVar4,0x10);
LAB_0138b164:
    uVar6 = (*(code *)*puVar13)(param_3,&local_70,puVar13[1]);
    lVar7 = local_a8;
    if (((uVar6 & 0xff) < 0x10) && ((1 << (ulong)(uVar6 & 0x1f) & 0xa100U) != 0)) {
      local_80 = (uint)local_d8;
      lVar8 = *(long *)(*(long *)(*(long *)(local_a8 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c(lVar8);
      }
      lVar11 = local_b8;
      pvVar19 = local_c0;
      __src = (void *)FUN_00da5060(local_b0,lVar8,local_d0);
      memcpy(pvVar19,__src,local_c8);
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x28) + 0x132) & 1) == 0)
      {
        FUN_00d5941c();
      }
      if (*(long *)(lVar11 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    uVar17 = FUN_015ff8a0(local_70,0);
    if ((uVar17 & 1) == 0) {
      if (lVar8 == 0) {
LAB_0138ba00:
        local_80 = (uint)local_d8;
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar17 = FUN_0129eff4(lVar8,local_70,&local_78,*(undefined8 *)StringLiteral_1154);
      uVar18 = local_78;
      if ((uVar17 & 1) != 0) {
        if (*(int *)(*(long *)System_Net_FileWebRequest_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar18 = FUN_01c258c8(uVar18,0);
        if (*(int *)(*(long *)Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__ +
                    0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__);
        }
        plVar10 = (long *)FUN_01c25a14(uVar18,0);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar9 = (**(code **)(*plVar10 + 0x178))(plVar10,param_3,*(undefined8 *)(*plVar10 + 0x180));
        uVar18 = local_78;
        if (*(int *)(*(long *)System_Net_FileWebRequest_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01c25a6c(uVar18,local_b0,uVar9,0);
        goto LAB_0138b114;
      }
      lVar7 = *param_3;
      uVar17 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar17 != 0) {
        piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
            puVar13 = (undefined8 *)(lVar7 + (long)(*piVar16 + 8) * 0x10 + 0x138);
            goto LAB_0138b500;
          }
          uVar17 = uVar17 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(param_3,*(long *)puVar4,8);
LAB_0138b500:
      lVar7 = (*(code *)*puVar13)(param_3,puVar13[1]);
      if ((lVar7 == 0) || (lVar7 = FUN_01c25128(lVar7,0), lVar7 == 0)) goto LAB_0138ba00;
      lVar7 = FUN_01c254c8(lVar7,0);
      plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,9);
      if (plVar10 == (long *)0x0) goto LAB_0138ba00;
      if ((*(long *)Method_Oculus_Interaction_Input_DataSource<HandDataAsset>_Start__ != 0) &&
         (lVar11 = thunk_FUN_00d6225c(*(long *)
                                       Method_Oculus_Interaction_Input_DataSource<HandDataAsset>_Start__
                                      ,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
      goto LAB_0138ba0c;
      lVar11 = local_70;
      uVar14 = *(uint *)(plVar10 + 3);
      if (uVar14 == 0) goto LAB_0138b9f4;
      plVar10[4] = *(long *)Method_Oculus_Interaction_Input_DataSource<HandDataAsset>_Start__;
      if (local_70 != 0) {
        lVar12 = thunk_FUN_00d6225c(local_70,*(undefined8 *)(*plVar10 + 0x40));
        if (lVar12 == 0) goto LAB_0138ba0c;
        uVar14 = *(uint *)(plVar10 + 3);
      }
      if (uVar14 < 2) goto LAB_0138b9f4;
      plVar10[5] = lVar11;
      if (*(long *)
           Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_136>_SliceWithStride<Vector4>__
          != 0) {
        lVar11 = thunk_FUN_00d6225c(*(long *)
                                     Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_136>_SliceWithStride<Vector4>__
                                    ,*(undefined8 *)(*plVar10 + 0x40));
        if (lVar11 == 0) goto LAB_0138ba0c;
        uVar14 = *(uint *)(plVar10 + 3);
      }
      if (uVar14 < 3) goto LAB_0138b9f4;
      plVar10[6] = *(long *)
                    Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_136>_SliceWithStride<Vector4>__
      ;
      local_a0[0] = *(long *)StringLiteral_4901;
      local_a0[1] = 0xffffffffffffffff;
      local_90 = (char)uVar6;
      lVar11 = FUN_017a7f78(local_a0,0);
      if ((lVar11 != 0) &&
         (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
      goto LAB_0138ba0c;
      uVar6 = *(uint *)(plVar10 + 3);
      if (uVar6 < 4) goto LAB_0138b9f4;
      plVar10[7] = lVar11;
      if (*(long *)puVar3 != 0) {
        lVar11 = thunk_FUN_00d6225c(*(long *)puVar3,*(undefined8 *)(*plVar10 + 0x40));
        if (lVar11 == 0) goto LAB_0138ba0c;
        uVar6 = *(uint *)(plVar10 + 3);
      }
      if (uVar6 < 5) goto LAB_0138b9f4;
      plVar10[8] = *(long *)puVar3;
      lVar11 = *param_3;
      uVar17 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar17 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
            puVar13 = (undefined8 *)(lVar11 + (long)(*piVar16 + 5) * 0x10 + 0x138);
            goto LAB_0138b6b4;
          }
          uVar17 = uVar17 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(param_3,*(long *)puVar4,5);
LAB_0138b6b4:
      lVar11 = (*(code *)*puVar13)(param_3,puVar13[1]);
      if ((lVar11 != 0) &&
         (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
      goto LAB_0138ba0c;
      uVar6 = *(uint *)(plVar10 + 3);
      if (uVar6 < 6) goto LAB_0138b9f4;
      plVar10[9] = lVar11;
      if (*(long *)System_Func<Mesh,_Color[]>_TypeInfo != 0) {
        lVar11 = thunk_FUN_00d6225c(*(long *)System_Func<Mesh,_Color[]>_TypeInfo,
                                    *(undefined8 *)(*plVar10 + 0x40));
        if (lVar11 == 0) goto LAB_0138ba0c;
        uVar6 = *(uint *)(plVar10 + 3);
      }
      if (uVar6 < 7) goto LAB_0138b9f4;
      plVar10[10] = *(long *)System_Func<Mesh,_Color[]>_TypeInfo;
      uVar18 = *(undefined8 *)(*(long *)(*(long *)(local_a8 + 0x20) + 0xc0) + 0x30);
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar18 = FUN_01780344(uVar18,0);
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__);
      }
      lVar11 = FUN_01c4b4e0(uVar18,0);
      if ((lVar11 != 0) &&
         (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
      goto LAB_0138ba0c;
      uVar6 = *(uint *)(plVar10 + 3);
      if (uVar6 < 8) goto LAB_0138b9f4;
      plVar10[0xb] = lVar11;
      if (*(long *)Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__ != 0)
      {
        lVar11 = thunk_FUN_00d6225c(*(long *)
                                     Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                                    ,*(undefined8 *)(*plVar10 + 0x40));
        if (lVar11 == 0) goto LAB_0138ba0c;
        uVar6 = *(uint *)(plVar10 + 3);
      }
      if (uVar6 < 9) goto LAB_0138b9f4;
      plVar10[0xc] = *(long *)
                      Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
      uVar18 = FUN_01600844(plVar10,0);
      if (lVar7 == 0) goto LAB_0138ba00;
      FUN_01c25764(lVar7,uVar18,0);
      lVar11 = *param_3;
      lVar7 = *(long *)puVar4;
      uVar17 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar17 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar7) goto LAB_0138b850;
          uVar17 = uVar17 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar17 != 0);
      }
    }
    else {
      lVar7 = *param_3;
      uVar17 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar17 != 0) {
        piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
            puVar13 = (undefined8 *)(lVar7 + (long)(*piVar16 + 8) * 0x10 + 0x138);
            goto LAB_0138b2fc;
          }
          uVar17 = uVar17 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(param_3,*(long *)puVar4,8);
LAB_0138b2fc:
      lVar7 = (*(code *)*puVar13)(param_3,puVar13[1]);
      if ((lVar7 == 0) || (lVar7 = FUN_01c25128(lVar7,0), lVar7 == 0)) goto LAB_0138ba00;
      lVar7 = FUN_01c254c8(lVar7,0);
      plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
      if (plVar10 == (long *)0x0) goto LAB_0138ba00;
      lVar11 = *(long *)puVar1;
      if ((lVar11 != 0) &&
         (lVar11 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
LAB_0138ba0c:
        local_80 = (uint)local_d8;
        uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar18,0);
      }
      if ((int)plVar10[3] == 0) goto LAB_0138b9f4;
      plVar10[4] = *(long *)puVar1;
      local_a0[0] = *(long *)StringLiteral_4901;
      local_a0[1] = 0xffffffffffffffff;
      local_90 = (char)uVar6;
      lVar11 = FUN_017a7f78(local_a0,0);
      if ((lVar11 != 0) &&
         (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
      goto LAB_0138ba0c;
      uVar6 = *(uint *)(plVar10 + 3);
      if (uVar6 < 2) {
LAB_0138b9f4:
        local_80 = (uint)local_d8;
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar10[5] = lVar11;
      if (*(long *)puVar3 != 0) {
        lVar11 = thunk_FUN_00d6225c(*(long *)puVar3,*(undefined8 *)(*plVar10 + 0x40));
        if (lVar11 == 0) goto LAB_0138ba0c;
        uVar6 = *(uint *)(plVar10 + 3);
      }
      if (uVar6 < 3) goto LAB_0138b9f4;
      plVar10[6] = *(long *)puVar3;
      lVar11 = *param_3;
      uVar17 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar17 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
            puVar13 = (undefined8 *)(lVar11 + (long)(*piVar16 + 5) * 0x10 + 0x138);
            goto LAB_0138b438;
          }
          uVar17 = uVar17 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(param_3,*(long *)puVar4,5);
LAB_0138b438:
      lVar11 = (*(code *)*puVar13)(param_3,puVar13[1]);
      if ((lVar11 != 0) &&
         (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
      goto LAB_0138ba0c;
      uVar6 = *(uint *)(plVar10 + 3);
      if (uVar6 < 4) goto LAB_0138b9f4;
      plVar10[7] = lVar11;
      lVar11 = *(long *)puVar2;
      if (lVar11 != 0) {
        lVar11 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40));
        if (lVar11 == 0) goto LAB_0138ba0c;
        uVar6 = *(uint *)(plVar10 + 3);
      }
      if (uVar6 < 5) goto LAB_0138b9f4;
      plVar10[8] = *(long *)puVar2;
      uVar18 = FUN_01600844(plVar10,0);
      if (lVar7 == 0) goto LAB_0138ba00;
      FUN_01c25600(lVar7,uVar18,0);
      lVar11 = *param_3;
      lVar7 = *(long *)puVar4;
      uVar17 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar17 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar7) goto LAB_0138b850;
          uVar17 = uVar17 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar17 != 0);
      }
    }
    puVar13 = (undefined8 *)FUN_00d59724(param_3,lVar7,0x25);
    goto LAB_0138b860;
  }
LAB_0138ba20:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_0138b850:
  puVar13 = (undefined8 *)(lVar11 + (long)(*piVar16 + 0x25) * 0x10 + 0x138);
LAB_0138b860:
  (*(code *)*puVar13)(param_3,puVar13[1]);
  goto LAB_0138b114;
}


