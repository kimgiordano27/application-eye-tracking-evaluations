/*
FUNCTION_NAME: Meta.Voice.NLayer.Decoder.LayerIIIDecoder$$ApplyMidSide
ENTRY_POINT: 0138b26c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Meta_Voice_NLayer_Decoder_LayerIIIDecoder__ApplyMidSide(void)

{
  void *__dest;
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  void *__src;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  code *in_x9;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 uVar12;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
code_r0x0138b26c:
  uVar4 = (*in_x9)();
  uVar12 = *(undefined8 *)(unaff_x29 + -0x68);
                    /* try { // try from 0138b28c to 0148b2c3 has its CatchHandler @ 0138b4a4 */
  if (*(int *)(*(long *)System_Net_FileWebRequest_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_01c25a6c(uVar12,*(undefined8 *)(unaff_x29 + -0xa0),uVar4,0);
LAB_0138b114:
  lVar9 = *unaff_x21;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x25) {
        puVar3 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x10) * 0x10 + 0x138);
        goto LAB_0138b164;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar3 = (undefined8 *)FUN_00d59724();
LAB_0138b164:
  uVar2 = (*(code *)*puVar3)();
  if (((uVar2 & 0xff) < 0x10) && ((1 << (ulong)(uVar2 & 0x1f) & 0xa100U) != 0)) {
    lVar6 = *(long *)(unaff_x29 + -0x98);
    *(int *)(unaff_x29 + -0x70) = (int)*(undefined8 *)(unaff_x29 + -200);
    lVar9 = *(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c(lVar9);
    }
    __dest = *(void **)(unaff_x29 + -0xb0);
    lVar7 = *(long *)(unaff_x29 + -0xa8);
    __src = (void *)FUN_00da5060(*(undefined8 *)(unaff_x29 + -0xa0),lVar9,
                                 *(undefined8 *)(unaff_x29 + -0xc0));
    memcpy(__dest,__src,*(size_t *)(unaff_x29 + -0xb8));
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x28) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    if (*(long *)(lVar7 + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  uVar10 = FUN_015ff8a0(*(undefined8 *)(unaff_x29 + -0x60),0);
  if ((uVar10 & 1) == 0) {
    if (unaff_x26 == 0) goto LAB_0138ba00;
    uVar10 = FUN_0129eff4();
    if ((uVar10 & 1) != 0) goto code_r0x0138b20c;
    lVar9 = *unaff_x21;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* try { // try from 0138b2c4 to 0148b2cb has its CatchHandler @ 0138b370 */
                    /* try { // try from 0138b2cc to 0148b2d3 has its CatchHandler @ 0138a1ec */
        if (*(long *)(piVar11 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
          goto LAB_0138b500;
        }
        uVar10 = uVar10 - 1;
                    /* try { // try from 0138b2d4 to 0148b2d7 has its CatchHandler @ 0138b3e4 */
        piVar11 = piVar11 + 4;
                    /* try { // try from 0138b2d8 to 0148b2df has its CatchHandler @ 0138a1ec */
      } while (uVar10 != 0);
    }
                    /* try { // try from 0138b2e0 to 0148b2f7 has its CatchHandler @ 0138b3c8 */
    puVar3 = (undefined8 *)FUN_00d59724();
LAB_0138b500:
    lVar9 = (*(code *)*puVar3)();
    if ((lVar9 == 0) || (lVar9 = FUN_01c25128(lVar9,0), lVar9 == 0)) goto LAB_0138ba00;
    lVar9 = FUN_01c254c8(lVar9,0);
    plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,9);
    if (plVar5 == (long *)0x0) goto LAB_0138ba00;
    if ((*(long *)Method_Oculus_Interaction_Input_DataSource<HandDataAsset>_Start__ != 0) &&
       (lVar6 = thunk_FUN_00d6225c(*(long *)
                                    Method_Oculus_Interaction_Input_DataSource<HandDataAsset>_Start__
                                   ,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    goto LAB_0138ba0c;
    uVar8 = *(uint *)(plVar5 + 3);
    if (uVar8 == 0) goto LAB_0138b9f4;
    plVar5[4] = *(long *)Method_Oculus_Interaction_Input_DataSource<HandDataAsset>_Start__;
    lVar6 = *(long *)(unaff_x29 + -0x60);
    if (lVar6 != 0) {
      lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar7 == 0) goto LAB_0138ba0c;
      uVar8 = *(uint *)(plVar5 + 3);
    }
    if (uVar8 < 2) goto LAB_0138b9f4;
    plVar5[5] = lVar6;
    if (*(long *)
         Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_136>_SliceWithStride<Vector4>__
        != 0) {
      lVar6 = thunk_FUN_00d6225c(*(long *)
                                  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_136>_SliceWithStride<Vector4>__
                                 ,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar6 == 0) goto LAB_0138ba0c;
      uVar8 = *(uint *)(plVar5 + 3);
    }
    if (uVar8 < 3) goto LAB_0138b9f4;
    plVar5[6] = *(long *)
                 Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_136>_SliceWithStride<Vector4>__
    ;
    puVar1 = StringLiteral_4901;
    *(char *)(unaff_x29 + -0x80) = (char)uVar2;
    *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)puVar1;
    *(undefined8 *)(unaff_x29 + -0x88) = 0xffffffffffffffff;
    lVar6 = FUN_017a7f78(unaff_x29 + -0x90,0);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_0138ba0c;
    uVar2 = *(uint *)(plVar5 + 3);
    if (uVar2 < 4) goto LAB_0138b9f4;
    plVar5[7] = lVar6;
    if (*unaff_x23 != 0) {
      lVar6 = thunk_FUN_00d6225c(*unaff_x23,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar6 == 0) goto LAB_0138ba0c;
      uVar2 = *(uint *)(plVar5 + 3);
    }
    if (uVar2 < 5) goto LAB_0138b9f4;
    plVar5[8] = *unaff_x23;
    lVar6 = *unaff_x21;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_0138b6b4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724();
LAB_0138b6b4:
    lVar6 = (*(code *)*puVar3)();
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_0138ba0c;
    uVar2 = *(uint *)(plVar5 + 3);
    if (uVar2 < 6) goto LAB_0138b9f4;
    plVar5[9] = lVar6;
    if (*(long *)System_Func<Mesh,_Color[]>_TypeInfo != 0) {
      lVar6 = thunk_FUN_00d6225c(*(long *)System_Func<Mesh,_Color[]>_TypeInfo,
                                 *(undefined8 *)(*plVar5 + 0x40));
      if (lVar6 == 0) goto LAB_0138ba0c;
      uVar2 = *(uint *)(plVar5 + 3);
    }
    if (uVar2 < 7) goto LAB_0138b9f4;
    plVar5[10] = *(long *)System_Func<Mesh,_Color[]>_TypeInfo;
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x98) + 0x20) + 0xc0) + 0x30)
    ;
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_01780344(uVar4,0);
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__);
    }
    lVar6 = FUN_01c4b4e0(uVar4,0);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_0138ba0c;
    uVar2 = *(uint *)(plVar5 + 3);
    if (uVar2 < 8) goto LAB_0138b9f4;
    plVar5[0xb] = lVar6;
    if (*(long *)Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__ != 0) {
      lVar6 = thunk_FUN_00d6225c(*(long *)
                                  Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                                 ,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar6 == 0) goto LAB_0138ba0c;
      uVar2 = *(uint *)(plVar5 + 3);
    }
    if (uVar2 < 9) goto LAB_0138b9f4;
    plVar5[0xc] = *(long *)
                   Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
    uVar4 = FUN_01600844(plVar5,0);
    if (lVar9 == 0) goto LAB_0138ba00;
    FUN_01c25764(lVar9,uVar4,0);
    lVar9 = *unaff_x21;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x25) goto LAB_0138b850;
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
  }
  else {
    lVar9 = *unaff_x21;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x25) {
                    /* try { // try from 0138b2f8 to 0148b303 has its CatchHandler @ 0138b3e8 */
          puVar3 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
          goto LAB_0138b2fc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724();
LAB_0138b2fc:
                    /* try { // try from 0138b304 to 0148b307 has its CatchHandler @ 0138b3c4 */
    lVar9 = (*(code *)*puVar3)();
                    /* try { // try from 0138b308 to 0148b30b has its CatchHandler @ 0138b3a8 */
                    /* try { // try from 0138b30c to 0148b313 has its CatchHandler @ 0138b390 */
                    /* try { // try from 0138b314 to 0148b317 has its CatchHandler @ 0138b3c0 */
    if ((lVar9 == 0) || (lVar9 = FUN_01c25128(lVar9,0), lVar9 == 0)) {
LAB_0138ba00:
      *(int *)(unaff_x29 + -0x70) = (int)*(undefined8 *)(unaff_x29 + -200);
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
                    /* try { // try from 0138b318 to 0148b31b has its CatchHandler @ 0138b38c */
                    /* try { // try from 0138b31c to 0148b31f has its CatchHandler @ 0138b3bc */
    lVar9 = FUN_01c254c8(lVar9,0);
                    /* try { // try from 0138b320 to 0148b323 has its CatchHandler @ 0138b388 */
                    /* try { // try from 0138b324 to 0148b327 has its CatchHandler @ 0138b3d0 */
                    /* try { // try from 0138b328 to 0148b32b has its CatchHandler @ 0138b3b0 */
                    /* try { // try from 0138b32c to 0148b32f has its CatchHandler @ 0138b398 */
                    /* try { // try from 0138b330 to 0148b333 has its CatchHandler @ 0138b3b4 */
                    /* try { // try from 0138b334 to 0148b33f has its CatchHandler @ 0138b390 */
    plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
    if (plVar5 == (long *)0x0) goto LAB_0138ba00;
                    /* try { // try from 0138b340 to 0148b34b has its CatchHandler @ 0138b3c0 */
                    /* try { // try from 0138b34c to 0148b357 has its CatchHandler @ 0138b38c */
                    /* try { // try from 0138b358 to 0148b363 has its CatchHandler @ 0138b3bc */
    if ((*unaff_x24 != 0) &&
       (lVar6 = thunk_FUN_00d6225c(*unaff_x24,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
LAB_0138ba0c:
      *(int *)(unaff_x29 + -0x70) = (int)*(undefined8 *)(unaff_x29 + -200);
      uVar4 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar4,0);
    }
    if ((int)plVar5[3] == 0) goto LAB_0138b9f4;
                    /* try { // try from 0138b364 to 0148b36f has its CatchHandler @ 0138b388 */
                    /* catch() { ... } // from try @ 0138b2c4 with catch @ 0138b370
                       try { // try from 0138b370 to 0148b413 has its CatchHandler @ 0138a1ec */
                    /* catch() { ... } // from try @ 0138ae64 with catch @ 0138b374 */
    plVar5[4] = *unaff_x24;
    puVar1 = StringLiteral_4901;
    *(char *)(unaff_x29 + -0x80) = (char)uVar2;
    *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)puVar1;
    *(undefined8 *)(unaff_x29 + -0x88) = 0xffffffffffffffff;
    lVar6 = FUN_017a7f78(unaff_x29 + -0x90,0);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_0138ba0c;
    uVar2 = *(uint *)(plVar5 + 3);
    if (uVar2 < 2) {
LAB_0138b9f4:
      *(int *)(unaff_x29 + -0x70) = (int)*(undefined8 *)(unaff_x29 + -200);
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar5[5] = lVar6;
    if (*unaff_x23 != 0) {
      lVar6 = thunk_FUN_00d6225c(*unaff_x23,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar6 == 0) goto LAB_0138ba0c;
      uVar2 = *(uint *)(plVar5 + 3);
    }
    if (uVar2 < 3) goto LAB_0138b9f4;
    plVar5[6] = *unaff_x23;
    lVar6 = *unaff_x21;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_0138b438;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724();
LAB_0138b438:
    lVar6 = (*(code *)*puVar3)();
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_0138ba0c;
    uVar2 = *(uint *)(plVar5 + 3);
    if (uVar2 < 4) goto LAB_0138b9f4;
    plVar5[7] = lVar6;
    if (*unaff_x19 != 0) {
      lVar6 = thunk_FUN_00d6225c(*unaff_x19,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar6 == 0) goto LAB_0138ba0c;
      uVar2 = *(uint *)(plVar5 + 3);
    }
    if (uVar2 < 5) goto LAB_0138b9f4;
    plVar5[8] = *unaff_x19;
    uVar4 = FUN_01600844(plVar5,0);
    if (lVar9 == 0) goto LAB_0138ba00;
    FUN_01c25600(lVar9,uVar4,0);
    lVar9 = *unaff_x21;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x25) goto LAB_0138b850;
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
  }
  puVar3 = (undefined8 *)FUN_00d59724();
  goto LAB_0138b860;
code_r0x0138b20c:
  uVar4 = *(undefined8 *)(unaff_x29 + -0x68);
  if (*(int *)(*(long *)System_Net_FileWebRequest_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_01c258c8(uVar4,0);
  if (*(int *)(*(long *)Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__ + 0xe0)
      == 0) {
    thunk_FUN_00d32864(*(long *)Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__
                      );
  }
  plVar5 = (long *)FUN_01c25a14(uVar4,0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  in_x9 = *(code **)(*plVar5 + 0x178);
  goto code_r0x0138b26c;
LAB_0138b850:
  puVar3 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x25) * 0x10 + 0x138);
LAB_0138b860:
  (*(code *)*puVar3)();
  goto LAB_0138b114;
}


