/*
FUNCTION_NAME: Meta.Voice.NLayer.Decoder.LayerIIIDecoder$$ApplyFullStereo
ENTRY_POINT: 0138b378
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


void Meta_Voice_NLayer_Decoder_LayerIIIDecoder__ApplyFullStereo(long param_1,undefined8 param_2)

{
  void *__dest;
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  void *__src;
  uint uVar8;
  undefined8 in_x9;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  undefined8 uVar11;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
code_r0x0138b378:
  puVar1 = StringLiteral_4901;
  *(char *)(unaff_x29 + -0x80) = (char)unaff_w20;
                    /* catch() { ... } // from try @ 0138ae44 with catch @ 0138b384 */
                    /* catch() { ... } // from try @ 0138b038 with catch @ 0138b388
                       catch() { ... } // from try @ 0138b320 with catch @ 0138b388
                       catch() { ... } // from try @ 0138b364 with catch @ 0138b388 */
  *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)puVar1;
  *(undefined8 *)(unaff_x29 + -0x88) = in_x9;
                    /* catch() { ... } // from try @ 0138afd4 with catch @ 0138b38c
                       catch() { ... } // from try @ 0138b318 with catch @ 0138b38c
                       catch() { ... } // from try @ 0138b34c with catch @ 0138b38c */
  lVar3 = FUN_017a7f78(param_1,param_2);
                    /* catch() { ... } // from try @ 0138af74 with catch @ 0138b390
                       catch() { ... } // from try @ 0138b30c with catch @ 0138b390
                       catch() { ... } // from try @ 0138b334 with catch @ 0138b390 */
                    /* catch() { ... } // from try @ 0138b0a4 with catch @ 0138b394 */
                    /* catch() { ... } // from try @ 0138b098 with catch @ 0138b398
                       catch() { ... } // from try @ 0138b32c with catch @ 0138b398 */
                    /* catch() { ... } // from try @ 0138a64c with catch @ 0138b39c */
                    /* catch() { ... } // from try @ 0138af54 with catch @ 0138b3a0 */
                    /* catch() { ... } // from try @ 0138af3c with catch @ 0138b3a4 */
                    /* catch() { ... } // from try @ 0138af30 with catch @ 0138b3a8
                       catch() { ... } // from try @ 0138b308 with catch @ 0138b3a8 */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x28 + 0x40)), lVar4 == 0))
  goto LAB_0138ba0c;
                    /* catch() { ... } // from try @ 0138b0e8 with catch @ 0138b3ac */
  uVar8 = *(uint *)(unaff_x28 + 3);
                    /* catch() { ... } // from try @ 0138af00 with catch @ 0138b3b0
                       catch() { ... } // from try @ 0138b08c with catch @ 0138b3b0
                       catch() { ... } // from try @ 0138b328 with catch @ 0138b3b0 */
                    /* catch() { ... } // from try @ 0138b124 with catch @ 0138b3b4
                       catch() { ... } // from try @ 0138b330 with catch @ 0138b3b4 */
  if (uVar8 < 2) {
LAB_0138b9f4:
    *(int *)(unaff_x29 + -0x70) = (int)*(undefined8 *)(unaff_x29 + -200);
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
                    /* catch() { ... } // from try @ 0138a628 with catch @ 0138b3b8 */
  unaff_x28[5] = lVar3;
                    /* catch() { ... } // from try @ 0138aff0 with catch @ 0138b3bc
                       catch() { ... } // from try @ 0138b31c with catch @ 0138b3bc
                       catch() { ... } // from try @ 0138b358 with catch @ 0138b3bc */
                    /* catch() { ... } // from try @ 0138af8c with catch @ 0138b3c0
                       catch() { ... } // from try @ 0138b314 with catch @ 0138b3c0
                       catch() { ... } // from try @ 0138b340 with catch @ 0138b3c0 */
  if (*unaff_x23 != 0) {
                    /* catch() { ... } // from try @ 0138aeb0 with catch @ 0138b3c4
                       catch() { ... } // from try @ 0138af24 with catch @ 0138b3c4
                       catch() { ... } // from try @ 0138b304 with catch @ 0138b3c4 */
                    /* catch() { ... } // from try @ 0138a67c with catch @ 0138b3c8
                       catch() { ... } // from try @ 0138b2e0 with catch @ 0138b3c8 */
                    /* catch() { ... } // from try @ 0138a664 with catch @ 0138b3cc */
    lVar3 = thunk_FUN_00d6225c(*unaff_x23,*(undefined8 *)(*unaff_x28 + 0x40));
                    /* catch() { ... } // from try @ 0138b054 with catch @ 0138b3d0
                       catch() { ... } // from try @ 0138b324 with catch @ 0138b3d0 */
    if (lVar3 == 0) goto LAB_0138ba0c;
                    /* catch() { ... } // from try @ 0138a5d8 with catch @ 0138b3d4 */
    uVar8 = *(uint *)(unaff_x28 + 3);
  }
                    /* catch() { ... } // from try @ 0138a5b4 with catch @ 0138b3d8 */
                    /* catch() { ... } // from try @ 0138a600 with catch @ 0138b3dc */
  if (uVar8 < 3) goto LAB_0138b9f4;
                    /* catch() { ... } // from try @ 0138a700 with catch @ 0138b3e0 */
                    /* catch() { ... } // from try @ 0138a788 with catch @ 0138b3e4
                       catch() { ... } // from try @ 0138b2d4 with catch @ 0138b3e4 */
  unaff_x28[6] = *unaff_x23;
                    /* catch() { ... } // from try @ 0138a698 with catch @ 0138b3e8
                       catch() { ... } // from try @ 0138a744 with catch @ 0138b3e8
                       catch() { ... } // from try @ 0138b2f8 with catch @ 0138b3e8 */
  lVar3 = *unaff_x21;
                    /* catch() { ... } // from try @ 0138a56c with catch @ 0138b3ec */
                    /* catch() { ... } // from try @ 0138aaf4 with catch @ 0138b3f0 */
  uVar9 = (ulong)*(ushort *)(lVar3 + 0x12a);
                    /* catch() { ... } // from try @ 0138aa78 with catch @ 0138b3f4 */
  if (uVar9 != 0) {
                    /* catch() { ... } // from try @ 0138a7e0 with catch @ 0138b3f8 */
    piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x25) {
        puVar5 = (undefined8 *)(lVar3 + (long)(*piVar10 + 5) * 0x10 + 0x138);
        goto LAB_0138b438;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
                    /* try { // try from 0138b414 to 0148b417 has its CatchHandler @ 0138b49c */
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_00d59724();
LAB_0138b438:
  lVar3 = (*(code *)*puVar5)();
  if ((lVar3 == 0) ||
     (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x28 + 0x40)), lVar4 != 0)) {
    uVar8 = *(uint *)(unaff_x28 + 3);
    if (3 < uVar8) {
      unaff_x28[7] = lVar3;
      if (*unaff_x19 != 0) {
        lVar3 = thunk_FUN_00d6225c(*unaff_x19,*(undefined8 *)(*unaff_x28 + 0x40));
        if (lVar3 == 0) goto LAB_0138ba0c;
        uVar8 = *(uint *)(unaff_x28 + 3);
      }
      if (4 < uVar8) {
        unaff_x28[8] = *unaff_x19;
        uVar6 = FUN_01600844(unaff_x28,0);
        if (unaff_x27 != 0) {
          FUN_01c25600(unaff_x27,uVar6,0);
          lVar3 = *unaff_x21;
          uVar9 = (ulong)*(ushort *)(lVar3 + 0x12a);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *unaff_x25) goto LAB_0138b850;
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
LAB_0138b840:
          puVar5 = (undefined8 *)FUN_00d59724();
LAB_0138b860:
          (*(code *)*puVar5)();
          do {
            lVar3 = *unaff_x21;
            uVar9 = (ulong)*(ushort *)(lVar3 + 0x12a);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *unaff_x25) {
                  puVar5 = (undefined8 *)(lVar3 + (long)(*piVar10 + 0x10) * 0x10 + 0x138);
                  goto LAB_0138b164;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_00d59724();
LAB_0138b164:
            unaff_w20 = (*(code *)*puVar5)();
            if (((unaff_w20 & 0xff) < 0x10) && ((1 << (ulong)(unaff_w20 & 0x1f) & 0xa100U) != 0)) {
              lVar4 = *(long *)(unaff_x29 + -0x98);
              *(int *)(unaff_x29 + -0x70) = (int)*(undefined8 *)(unaff_x29 + -200);
              lVar3 = *(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x28);
              if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
                lVar3 = FUN_00d5941c(lVar3);
              }
              __dest = *(void **)(unaff_x29 + -0xb0);
              lVar7 = *(long *)(unaff_x29 + -0xa8);
              __src = (void *)FUN_00da5060(*(undefined8 *)(unaff_x29 + -0xa0),lVar3,
                                           *(undefined8 *)(unaff_x29 + -0xc0));
              memcpy(__dest,__src,*(size_t *)(unaff_x29 + -0xb8));
              if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x28) + 0x132) &
                  1) == 0) {
                FUN_00d5941c();
              }
              if (*(long *)(lVar7 + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return;
            }
            uVar9 = FUN_015ff8a0(*(undefined8 *)(unaff_x29 + -0x60),0);
            if ((uVar9 & 1) != 0) {
              lVar3 = *unaff_x21;
              uVar9 = (ulong)*(ushort *)(lVar3 + 0x12a);
              if (uVar9 == 0) goto LAB_0138b1d8;
              piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              goto LAB_0138b1c0;
            }
            if (unaff_x26 == 0) break;
            uVar9 = FUN_0129eff4();
            if ((uVar9 & 1) == 0) goto LAB_0138b2ac;
            uVar6 = *(undefined8 *)(unaff_x29 + -0x68);
            if (*(int *)(*(long *)System_Net_FileWebRequest_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar6 = FUN_01c258c8(uVar6,0);
            if (*(int *)(*(long *)
                          Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__ +
                        0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)
                                  Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__
                                );
            }
            plVar2 = (long *)FUN_01c25a14(uVar6,0);
            if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar6 = (**(code **)(*plVar2 + 0x178))();
            uVar11 = *(undefined8 *)(unaff_x29 + -0x68);
            if (*(int *)(*(long *)System_Net_FileWebRequest_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_01c25a6c(uVar11,*(undefined8 *)(unaff_x29 + -0xa0),uVar6,0);
          } while( true );
        }
        goto LAB_0138ba00;
      }
    }
    goto LAB_0138b9f4;
  }
LAB_0138ba0c:
  *(int *)(unaff_x29 + -0x70) = (int)*(undefined8 *)(unaff_x29 + -200);
  uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar6,0);
LAB_0138b2ac:
  lVar3 = *unaff_x21;
  uVar9 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x25) {
        puVar5 = (undefined8 *)(lVar3 + (long)(*piVar10 + 8) * 0x10 + 0x138);
        goto LAB_0138b500;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_00d59724();
LAB_0138b500:
  lVar3 = (*(code *)*puVar5)();
  if ((lVar3 == 0) || (lVar3 = FUN_01c25128(lVar3,0), lVar3 == 0)) goto LAB_0138ba00;
  lVar3 = FUN_01c254c8(lVar3,0);
  plVar2 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,9);
  if (plVar2 == (long *)0x0) goto LAB_0138ba00;
  if ((*(long *)Method_Oculus_Interaction_Input_DataSource<HandDataAsset>_Start__ != 0) &&
     (lVar4 = thunk_FUN_00d6225c(*(long *)
                                  Method_Oculus_Interaction_Input_DataSource<HandDataAsset>_Start__,
                                 *(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) goto LAB_0138ba0c;
  uVar8 = *(uint *)(plVar2 + 3);
  if (uVar8 == 0) goto LAB_0138b9f4;
  plVar2[4] = *(long *)Method_Oculus_Interaction_Input_DataSource<HandDataAsset>_Start__;
  lVar4 = *(long *)(unaff_x29 + -0x60);
  if (lVar4 != 0) {
    lVar7 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar2 + 0x40));
    if (lVar7 == 0) goto LAB_0138ba0c;
    uVar8 = *(uint *)(plVar2 + 3);
  }
  if (uVar8 < 2) goto LAB_0138b9f4;
  plVar2[5] = lVar4;
  if (*(long *)
       Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_136>_SliceWithStride<Vector4>__
      != 0) {
    lVar4 = thunk_FUN_00d6225c(*(long *)
                                Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_136>_SliceWithStride<Vector4>__
                               ,*(undefined8 *)(*plVar2 + 0x40));
    if (lVar4 == 0) goto LAB_0138ba0c;
    uVar8 = *(uint *)(plVar2 + 3);
  }
  if (uVar8 < 3) goto LAB_0138b9f4;
  plVar2[6] = *(long *)
               Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_136>_SliceWithStride<Vector4>__
  ;
  puVar1 = StringLiteral_4901;
  *(char *)(unaff_x29 + -0x80) = (char)unaff_w20;
  *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)puVar1;
  *(undefined8 *)(unaff_x29 + -0x88) = 0xffffffffffffffff;
  lVar4 = FUN_017a7f78(unaff_x29 + -0x90,0);
  if ((lVar4 != 0) &&
     (lVar7 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0))
  goto LAB_0138ba0c;
  uVar8 = *(uint *)(plVar2 + 3);
  if (uVar8 < 4) goto LAB_0138b9f4;
  plVar2[7] = lVar4;
  if (*unaff_x23 != 0) {
    lVar4 = thunk_FUN_00d6225c(*unaff_x23,*(undefined8 *)(*plVar2 + 0x40));
    if (lVar4 == 0) goto LAB_0138ba0c;
    uVar8 = *(uint *)(plVar2 + 3);
  }
  if (uVar8 < 5) goto LAB_0138b9f4;
  plVar2[8] = *unaff_x23;
  lVar4 = *unaff_x21;
  uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x25) {
        puVar5 = (undefined8 *)(lVar4 + (long)(*piVar10 + 5) * 0x10 + 0x138);
        goto LAB_0138b6b4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_00d59724();
LAB_0138b6b4:
  lVar4 = (*(code *)*puVar5)();
  if ((lVar4 != 0) &&
     (lVar7 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0))
  goto LAB_0138ba0c;
  uVar8 = *(uint *)(plVar2 + 3);
  if (uVar8 < 6) goto LAB_0138b9f4;
  plVar2[9] = lVar4;
  if (*(long *)System_Func<Mesh,_Color[]>_TypeInfo != 0) {
    lVar4 = thunk_FUN_00d6225c(*(long *)System_Func<Mesh,_Color[]>_TypeInfo,
                               *(undefined8 *)(*plVar2 + 0x40));
    if (lVar4 == 0) goto LAB_0138ba0c;
    uVar8 = *(uint *)(plVar2 + 3);
  }
  if (uVar8 < 7) goto LAB_0138b9f4;
  plVar2[10] = *(long *)System_Func<Mesh,_Color[]>_TypeInfo;
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x98) + 0x20) + 0xc0) + 0x30);
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_01780344(uVar6,0);
  if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__);
  }
  lVar4 = FUN_01c4b4e0(uVar6,0);
  if ((lVar4 != 0) &&
     (lVar7 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0))
  goto LAB_0138ba0c;
  uVar8 = *(uint *)(plVar2 + 3);
  if (uVar8 < 8) goto LAB_0138b9f4;
  plVar2[0xb] = lVar4;
  if (*(long *)Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__ != 0) {
    lVar4 = thunk_FUN_00d6225c(*(long *)
                                Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                               ,*(undefined8 *)(*plVar2 + 0x40));
    if (lVar4 == 0) goto LAB_0138ba0c;
    uVar8 = *(uint *)(plVar2 + 3);
  }
  if (uVar8 < 9) goto LAB_0138b9f4;
  plVar2[0xc] = *(long *)Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
  uVar6 = FUN_01600844(plVar2,0);
  if (lVar3 == 0) goto LAB_0138ba00;
  FUN_01c25764(lVar3,uVar6,0);
  lVar3 = *unaff_x21;
  uVar9 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar9 == 0) goto LAB_0138b840;
  piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
  while (*(long *)(piVar10 + -2) != *unaff_x25) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) goto LAB_0138b840;
  }
LAB_0138b850:
  puVar5 = (undefined8 *)(lVar3 + (long)(*piVar10 + 0x25) * 0x10 + 0x138);
  goto LAB_0138b860;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_0138b1c0:
    if (*(long *)(piVar10 + -2) == *unaff_x25) {
      puVar5 = (undefined8 *)(lVar3 + (long)(*piVar10 + 8) * 0x10 + 0x138);
      goto LAB_0138b2fc;
    }
  }
LAB_0138b1d8:
  puVar5 = (undefined8 *)FUN_00d59724();
LAB_0138b2fc:
  lVar3 = (*(code *)*puVar5)();
  if ((lVar3 != 0) && (lVar3 = FUN_01c25128(lVar3,0), lVar3 != 0)) {
    unaff_x27 = FUN_01c254c8(lVar3,0);
    unaff_x28 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
    if (unaff_x28 != (long *)0x0) {
      if ((*unaff_x24 == 0) ||
         (lVar3 = thunk_FUN_00d6225c(*unaff_x24,*(undefined8 *)(*unaff_x28 + 0x40)), lVar3 != 0)) {
        if ((int)unaff_x28[3] == 0) goto LAB_0138b9f4;
        in_x9 = 0xffffffffffffffff;
        param_1 = unaff_x29 + -0x90;
        param_2 = 0;
        unaff_x28[4] = *unaff_x24;
        goto code_r0x0138b378;
      }
      goto LAB_0138ba0c;
    }
  }
LAB_0138ba00:
  *(int *)(unaff_x29 + -0x70) = (int)*(undefined8 *)(unaff_x29 + -200);
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


