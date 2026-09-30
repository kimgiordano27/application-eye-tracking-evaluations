/*
FUNCTION_NAME: Meta.Voice.NLayer.Decoder.LayerIIIDecoder$$ApplyLsfIStereo
ENTRY_POINT: 0138b418
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


void Meta_Voice_NLayer_Decoder_LayerIIIDecoder__ApplyLsfIStereo(void)

{
  void *__dest;
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  void *__src;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 uVar12;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
code_r0x0138b418:
  puVar4 = (undefined8 *)FUN_00d59724();
LAB_0138b438:
  lVar5 = (*(code *)*puVar4)();
                    /* try { // try from 0138b45c to 0148b487 has its CatchHandler @ 0138b4a4 */
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x28 + 0x40)), lVar6 == 0))
  goto LAB_0138ba0c;
  uVar2 = *(uint *)(unaff_x28 + 3);
  if (3 < uVar2) {
    unaff_x28[7] = lVar5;
    if (*unaff_x19 != 0) {
      lVar5 = thunk_FUN_00d6225c(*unaff_x19,*(undefined8 *)(*unaff_x28 + 0x40));
      if (lVar5 == 0) goto LAB_0138ba0c;
                    /* try { // try from 0138b488 to 0148b493 has its CatchHandler @ 0138a1ec */
      uVar2 = *(uint *)(unaff_x28 + 3);
    }
    if (4 < uVar2) {
                    /* try { // try from 0138b494 to 0148b49b has its CatchHandler @ 0138b4a4 */
                    /* catch() { ... } // from try @ 0138b414 with catch @ 0138b49c */
      unaff_x28[8] = *unaff_x19;
                    /* catch() { ... } // from try @ 0138b28c with catch @ 0138b4a4
                       catch() { ... } // from try @ 0138b45c with catch @ 0138b4a4
                       catch() { ... } // from try @ 0138b494 with catch @ 0138b4a4 */
      uVar7 = FUN_01600844(unaff_x28,0);
                    /* try { // try from 0138b4a8 to 0148b6e7 has its CatchHandler @ 0138b4a8
                       catch() { ... } // from try @ 0138b4a8 with catch @ 0138b4a8
                       catch() { ... } // from try @ 0138b870 with catch @ 0138b4a8
                       catch() { ... } // from try @ 0138b8d4 with catch @ 0138b4a8
                       catch() { ... } // from try @ 0138bb4c with catch @ 0138b4a8
                       catch() { ... } // from try @ 0138bb8c with catch @ 0138b4a8
                       catch() { ... } // from try @ 0138bcb8 with catch @ 0138b4a8
                       catch() { ... } // from try @ 0138bd80 with catch @ 0138b4a8
                       catch() { ... } // from try @ 0138bec0 with catch @ 0138b4a8
                       catch() { ... } // from try @ 0138bee0 with catch @ 0138b4a8
                       catch() { ... } // from try @ 0138bf90 with catch @ 0138b4a8
                       catch() { ... } // from try @ 0138c01c with catch @ 0138b4a8 */
      if (unaff_x27 != 0) {
        FUN_01c25600(unaff_x27,uVar7,0);
        lVar5 = *unaff_x21;
        uVar10 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x25) goto LAB_0138b850;
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
LAB_0138b840:
        puVar4 = (undefined8 *)FUN_00d59724();
LAB_0138b860:
        (*(code *)*puVar4)();
        do {
          lVar5 = *unaff_x21;
          uVar10 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x25) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar11 + 0x10) * 0x10 + 0x138);
                goto LAB_0138b164;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar4 = (undefined8 *)FUN_00d59724();
LAB_0138b164:
          uVar2 = (*(code *)*puVar4)();
          if (((uVar2 & 0xff) < 0x10) && ((1 << (ulong)(uVar2 & 0x1f) & 0xa100U) != 0)) {
            lVar6 = *(long *)(unaff_x29 + -0x98);
            *(int *)(unaff_x29 + -0x70) = (int)*(undefined8 *)(unaff_x29 + -200);
            lVar5 = *(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x28);
            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
              lVar5 = FUN_00d5941c(lVar5);
            }
            __dest = *(void **)(unaff_x29 + -0xb0);
            lVar8 = *(long *)(unaff_x29 + -0xa8);
            __src = (void *)FUN_00da5060(*(undefined8 *)(unaff_x29 + -0xa0),lVar5,
                                         *(undefined8 *)(unaff_x29 + -0xc0));
            memcpy(__dest,__src,*(size_t *)(unaff_x29 + -0xb8));
            if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x28) + 0x132) & 1)
                == 0) {
              FUN_00d5941c();
            }
            if (*(long *)(lVar8 + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return;
          }
          uVar10 = FUN_015ff8a0(*(undefined8 *)(unaff_x29 + -0x60),0);
          if ((uVar10 & 1) != 0) {
            lVar5 = *unaff_x21;
            uVar10 = (ulong)*(ushort *)(lVar5 + 0x12a);
            if (uVar10 == 0) goto LAB_0138b1d8;
            piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            goto LAB_0138b1c0;
          }
          if (unaff_x26 == 0) break;
          uVar10 = FUN_0129eff4();
          if ((uVar10 & 1) == 0) goto LAB_0138b2ac;
          uVar7 = *(undefined8 *)(unaff_x29 + -0x68);
          if (*(int *)(*(long *)System_Net_FileWebRequest_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar7 = FUN_01c258c8(uVar7,0);
          if (*(int *)(*(long *)Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__
                      + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)
                                Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__
                              );
          }
          plVar3 = (long *)FUN_01c25a14(uVar7,0);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar7 = (**(code **)(*plVar3 + 0x178))();
          uVar12 = *(undefined8 *)(unaff_x29 + -0x68);
          if (*(int *)(*(long *)System_Net_FileWebRequest_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01c25a6c(uVar12,*(undefined8 *)(unaff_x29 + -0xa0),uVar7,0);
        } while( true );
      }
      goto LAB_0138ba00;
    }
  }
  goto LAB_0138b9f4;
LAB_0138b2ac:
  lVar5 = *unaff_x21;
  uVar10 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x25) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar11 + 8) * 0x10 + 0x138);
        goto LAB_0138b500;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)FUN_00d59724();
LAB_0138b500:
  lVar5 = (*(code *)*puVar4)();
  if ((lVar5 == 0) || (lVar5 = FUN_01c25128(lVar5,0), lVar5 == 0)) goto LAB_0138ba00;
  lVar5 = FUN_01c254c8(lVar5,0);
  plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,9);
  if (plVar3 == (long *)0x0) goto LAB_0138ba00;
  if ((*(long *)Method_Oculus_Interaction_Input_DataSource<HandDataAsset>_Start__ != 0) &&
     (lVar6 = thunk_FUN_00d6225c(*(long *)
                                  Method_Oculus_Interaction_Input_DataSource<HandDataAsset>_Start__,
                                 *(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0)) goto LAB_0138ba0c;
  uVar9 = *(uint *)(plVar3 + 3);
  if (uVar9 == 0) goto LAB_0138b9f4;
  plVar3[4] = *(long *)Method_Oculus_Interaction_Input_DataSource<HandDataAsset>_Start__;
  lVar6 = *(long *)(unaff_x29 + -0x60);
  if (lVar6 != 0) {
    lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar3 + 0x40));
    if (lVar8 == 0) goto LAB_0138ba0c;
    uVar9 = *(uint *)(plVar3 + 3);
  }
  if (uVar9 < 2) goto LAB_0138b9f4;
  plVar3[5] = lVar6;
  if (*(long *)
       Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_136>_SliceWithStride<Vector4>__
      != 0) {
    lVar6 = thunk_FUN_00d6225c(*(long *)
                                Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_136>_SliceWithStride<Vector4>__
                               ,*(undefined8 *)(*plVar3 + 0x40));
    if (lVar6 == 0) goto LAB_0138ba0c;
    uVar9 = *(uint *)(plVar3 + 3);
  }
  if (uVar9 < 3) goto LAB_0138b9f4;
  plVar3[6] = *(long *)
               Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_136>_SliceWithStride<Vector4>__
  ;
  puVar1 = StringLiteral_4901;
  *(char *)(unaff_x29 + -0x80) = (char)uVar2;
  *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)puVar1;
  *(undefined8 *)(unaff_x29 + -0x88) = 0xffffffffffffffff;
  lVar6 = FUN_017a7f78(unaff_x29 + -0x90,0);
  if ((lVar6 != 0) &&
     (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar8 == 0))
  goto LAB_0138ba0c;
  uVar2 = *(uint *)(plVar3 + 3);
  if (uVar2 < 4) goto LAB_0138b9f4;
  plVar3[7] = lVar6;
  if (*unaff_x23 != 0) {
    lVar6 = thunk_FUN_00d6225c(*unaff_x23,*(undefined8 *)(*plVar3 + 0x40));
    if (lVar6 == 0) goto LAB_0138ba0c;
    uVar2 = *(uint *)(plVar3 + 3);
  }
  if (uVar2 < 5) goto LAB_0138b9f4;
  plVar3[8] = *unaff_x23;
  lVar6 = *unaff_x21;
  uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x25) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar11 + 5) * 0x10 + 0x138);
        goto LAB_0138b6b4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)FUN_00d59724();
LAB_0138b6b4:
  lVar6 = (*(code *)*puVar4)();
  if ((lVar6 != 0) &&
     (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar8 == 0))
  goto LAB_0138ba0c;
  uVar2 = *(uint *)(plVar3 + 3);
  if (uVar2 < 6) goto LAB_0138b9f4;
  plVar3[9] = lVar6;
  if (*(long *)System_Func<Mesh,_Color[]>_TypeInfo != 0) {
    lVar6 = thunk_FUN_00d6225c(*(long *)System_Func<Mesh,_Color[]>_TypeInfo,
                               *(undefined8 *)(*plVar3 + 0x40));
    if (lVar6 == 0) goto LAB_0138ba0c;
    uVar2 = *(uint *)(plVar3 + 3);
  }
  if (uVar2 < 7) goto LAB_0138b9f4;
  plVar3[10] = *(long *)System_Func<Mesh,_Color[]>_TypeInfo;
  uVar7 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x98) + 0x20) + 0xc0) + 0x30);
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar7 = FUN_01780344(uVar7,0);
  if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__);
  }
  lVar6 = FUN_01c4b4e0(uVar7,0);
  if ((lVar6 != 0) &&
     (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar8 == 0))
  goto LAB_0138ba0c;
  uVar2 = *(uint *)(plVar3 + 3);
  if (uVar2 < 8) goto LAB_0138b9f4;
  plVar3[0xb] = lVar6;
  if (*(long *)Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__ != 0) {
    lVar6 = thunk_FUN_00d6225c(*(long *)
                                Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                               ,*(undefined8 *)(*plVar3 + 0x40));
    if (lVar6 == 0) goto LAB_0138ba0c;
    uVar2 = *(uint *)(plVar3 + 3);
  }
  if (uVar2 < 9) goto LAB_0138b9f4;
  plVar3[0xc] = *(long *)Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
  uVar7 = FUN_01600844(plVar3,0);
  if (lVar5 == 0) goto LAB_0138ba00;
  FUN_01c25764(lVar5,uVar7,0);
  lVar5 = *unaff_x21;
  uVar10 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar10 == 0) goto LAB_0138b840;
  piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
  while (*(long *)(piVar11 + -2) != *unaff_x25) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) goto LAB_0138b840;
  }
LAB_0138b850:
  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar11 + 0x25) * 0x10 + 0x138);
  goto LAB_0138b860;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0138b1c0:
    if (*(long *)(piVar11 + -2) == *unaff_x25) {
      puVar4 = (undefined8 *)(lVar5 + (long)(*piVar11 + 8) * 0x10 + 0x138);
      goto LAB_0138b2fc;
    }
  }
LAB_0138b1d8:
  puVar4 = (undefined8 *)FUN_00d59724();
LAB_0138b2fc:
  lVar5 = (*(code *)*puVar4)();
  if ((lVar5 != 0) && (lVar5 = FUN_01c25128(lVar5,0), lVar5 != 0)) {
    unaff_x27 = FUN_01c254c8(lVar5,0);
    unaff_x28 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
    if (unaff_x28 != (long *)0x0) {
      if ((*unaff_x24 == 0) ||
         (lVar5 = thunk_FUN_00d6225c(*unaff_x24,*(undefined8 *)(*unaff_x28 + 0x40)), lVar5 != 0)) {
        if ((int)unaff_x28[3] == 0) {
LAB_0138b9f4:
          *(int *)(unaff_x29 + -0x70) = (int)*(undefined8 *)(unaff_x29 + -200);
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        unaff_x28[4] = *unaff_x24;
        puVar1 = StringLiteral_4901;
        *(char *)(unaff_x29 + -0x80) = (char)uVar2;
        *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)puVar1;
        *(undefined8 *)(unaff_x29 + -0x88) = 0xffffffffffffffff;
        lVar5 = FUN_017a7f78(unaff_x29 + -0x90,0);
        if ((lVar5 == 0) ||
           (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x28 + 0x40)), lVar6 != 0)) {
          uVar2 = *(uint *)(unaff_x28 + 3);
          if (uVar2 < 2) goto LAB_0138b9f4;
          unaff_x28[5] = lVar5;
          if (*unaff_x23 != 0) {
            lVar5 = thunk_FUN_00d6225c(*unaff_x23,*(undefined8 *)(*unaff_x28 + 0x40));
            if (lVar5 == 0) goto LAB_0138ba0c;
            uVar2 = *(uint *)(unaff_x28 + 3);
          }
          if (2 < uVar2) {
            unaff_x28[6] = *unaff_x23;
            lVar5 = *unaff_x21;
            uVar10 = (ulong)*(ushort *)(lVar5 + 0x12a);
            if (uVar10 == 0) goto code_r0x0138b418;
            piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            while (*(long *)(piVar11 + -2) != *unaff_x25) {
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
              if (uVar10 == 0) goto code_r0x0138b418;
            }
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar11 + 5) * 0x10 + 0x138);
            goto LAB_0138b438;
          }
          goto LAB_0138b9f4;
        }
      }
LAB_0138ba0c:
      *(int *)(unaff_x29 + -0x70) = (int)*(undefined8 *)(unaff_x29 + -200);
      uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar7,0);
    }
  }
LAB_0138ba00:
  *(int *)(unaff_x29 + -0x70) = (int)*(undefined8 *)(unaff_x29 + -200);
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


