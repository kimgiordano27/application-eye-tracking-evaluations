/*
FUNCTION_NAME: Meta.Voice.NLayer.Decoder.LayerIIIDecoder$$ApplyIStereo
ENTRY_POINT: 0138b5c4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void Meta_Voice_NLayer_Decoder_LayerIIIDecoder__ApplyIStereo(long param_1,undefined8 param_2)

{
  void *__dest;
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  void *__src;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  uint unaff_w20;
  undefined8 uVar10;
  long *unaff_x21;
  undefined8 uVar11;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
code_r0x0138b5c4:
  lVar4 = thunk_FUN_00d6225c(param_1,param_2);
  if (lVar4 == 0) {
LAB_0138ba0c:
    *(int *)(unaff_x29 + -0x70) = (int)*(undefined8 *)(unaff_x29 + -200);
    uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar10,0);
  }
  uVar7 = *(uint *)(unaff_x27 + 3);
LAB_0138b5d0:
  if (uVar7 < 3) goto LAB_0138b9f4;
  unaff_x27[6] = *(long *)
                  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_136>_SliceWithStride<Vector4>__
  ;
  puVar1 = StringLiteral_4901;
  *(char *)(unaff_x29 + -0x80) = (char)unaff_w20;
  *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)puVar1;
  *(undefined8 *)(unaff_x29 + -0x88) = 0xffffffffffffffff;
  lVar4 = FUN_017a7f78(unaff_x29 + -0x90,0);
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x27 + 0x40)), lVar5 == 0))
  goto LAB_0138ba0c;
  uVar7 = *(uint *)(unaff_x27 + 3);
  if (3 < uVar7) {
    unaff_x27[7] = lVar4;
    if (*unaff_x23 != 0) {
      lVar4 = thunk_FUN_00d6225c(*unaff_x23,*(undefined8 *)(*unaff_x27 + 0x40));
      if (lVar4 == 0) goto LAB_0138ba0c;
      uVar7 = *(uint *)(unaff_x27 + 3);
    }
    if (4 < uVar7) {
      unaff_x27[8] = *unaff_x23;
      lVar4 = *unaff_x21;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x25) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_0138b6b4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724();
LAB_0138b6b4:
      lVar4 = (*(code *)*puVar6)();
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x27 + 0x40)), lVar5 == 0))
      goto LAB_0138ba0c;
      uVar7 = *(uint *)(unaff_x27 + 3);
      if (5 < uVar7) {
                    /* try { // try from 0138b6e8 to 0148b6f3 has its CatchHandler @ 0138bf14 */
        unaff_x27[9] = lVar4;
        if (*(long *)System_Func<Mesh,_Color[]>_TypeInfo != 0) {
          lVar4 = thunk_FUN_00d6225c(*(long *)System_Func<Mesh,_Color[]>_TypeInfo,
                                     *(undefined8 *)(*unaff_x27 + 0x40));
          if (lVar4 == 0) goto LAB_0138ba0c;
          uVar7 = *(uint *)(unaff_x27 + 3);
        }
                    /* try { // try from 0138b710 to 0148b71f has its CatchHandler @ 0138bf04 */
        if (6 < uVar7) {
          unaff_x27[10] = *(long *)System_Func<Mesh,_Color[]>_TypeInfo;
                    /* try { // try from 0138b734 to 0148b737 has its CatchHandler @ 0138bf00 */
          uVar10 = *(undefined8 *)
                    (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x98) + 0x20) + 0xc0) + 0x30);
          if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar10 = FUN_01780344(uVar10,0);
                    /* try { // try from 0138b760 to 0148b76b has its CatchHandler @ 0138bf0c */
          if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0) ==
              0) {
            thunk_FUN_00d32864(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__);
          }
          lVar4 = FUN_01c4b4e0(uVar10,0);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x27 + 0x40)), lVar5 == 0))
          goto LAB_0138ba0c;
          uVar7 = *(uint *)(unaff_x27 + 3);
          if (7 < uVar7) {
            unaff_x27[0xb] = lVar4;
            if (*(long *)Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                != 0) {
              lVar4 = thunk_FUN_00d6225c(*(long *)
                                          Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                                         ,*(undefined8 *)(*unaff_x27 + 0x40));
              if (lVar4 == 0) goto LAB_0138ba0c;
              uVar7 = *(uint *)(unaff_x27 + 3);
            }
            if (8 < uVar7) {
              unaff_x27[0xc] =
                   *(long *)
                    Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
              uVar10 = FUN_01600844(unaff_x27,0);
              if (unaff_x28 != 0) {
                FUN_01c25764(unaff_x28,uVar10,0);
                lVar4 = *unaff_x21;
                uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *unaff_x25) goto LAB_0138b850;
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
LAB_0138b840:
                puVar6 = (undefined8 *)FUN_00d59724();
LAB_0138b860:
                (*(code *)*puVar6)();
                do {
                  lVar4 = *unaff_x21;
                  uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
                  if (uVar8 != 0) {
                    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == *unaff_x25) {
                        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 0x10) * 0x10 + 0x138);
                        goto LAB_0138b164;
                      }
                      uVar8 = uVar8 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_00d59724();
LAB_0138b164:
                  unaff_w20 = (*(code *)*puVar6)();
                  if (((unaff_w20 & 0xff) < 0x10) &&
                     ((1 << (ulong)(unaff_w20 & 0x1f) & 0xa100U) != 0)) {
                    lVar5 = *(long *)(unaff_x29 + -0x98);
                    *(int *)(unaff_x29 + -0x70) = (int)*(undefined8 *)(unaff_x29 + -200);
                    lVar4 = *(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x28);
                    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                      lVar4 = FUN_00d5941c(lVar4);
                    }
                    __dest = *(void **)(unaff_x29 + -0xb0);
                    lVar3 = *(long *)(unaff_x29 + -0xa8);
                    __src = (void *)FUN_00da5060(*(undefined8 *)(unaff_x29 + -0xa0),lVar4,
                                                 *(undefined8 *)(unaff_x29 + -0xc0));
                    memcpy(__dest,__src,*(size_t *)(unaff_x29 + -0xb8));
                    if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x28) +
                                  0x132) & 1) == 0) {
                      FUN_00d5941c();
                    }
                    if (*(long *)(lVar3 + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
                      __stack_chk_fail();
                    }
                    return;
                  }
                  uVar8 = FUN_015ff8a0(*(undefined8 *)(unaff_x29 + -0x60),0);
                  if ((uVar8 & 1) != 0) goto code_r0x0138b1a8;
                  if (unaff_x26 == 0) break;
                  uVar8 = FUN_0129eff4();
                  if ((uVar8 & 1) == 0) {
                    lVar4 = *unaff_x21;
                    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
                    if (uVar8 == 0) goto LAB_0138b2dc;
                    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                    goto LAB_0138b2c4;
                  }
                  uVar10 = *(undefined8 *)(unaff_x29 + -0x68);
                  if (*(int *)(*(long *)System_Net_FileWebRequest_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar10 = FUN_01c258c8(uVar10,0);
                  if (*(int *)(*(long *)
                                Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)
                                        Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__
                                      );
                  }
                  plVar2 = (long *)FUN_01c25a14(uVar10,0);
                  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  uVar10 = (**(code **)(*plVar2 + 0x178))();
                  uVar11 = *(undefined8 *)(unaff_x29 + -0x68);
                  if (*(int *)(*(long *)System_Net_FileWebRequest_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  FUN_01c25a6c(uVar11,*(undefined8 *)(unaff_x29 + -0xa0),uVar10,0);
                } while( true );
              }
              goto LAB_0138ba00;
            }
          }
        }
      }
    }
  }
  goto LAB_0138b9f4;
code_r0x0138b1a8:
  lVar4 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x25) {
        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 8) * 0x10 + 0x138);
        goto LAB_0138b2fc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_00d59724();
LAB_0138b2fc:
  lVar4 = (*(code *)*puVar6)();
  if ((lVar4 == 0) || (lVar4 = FUN_01c25128(lVar4,0), lVar4 == 0)) goto LAB_0138ba00;
  lVar4 = FUN_01c254c8(lVar4,0);
  plVar2 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
  if (plVar2 == (long *)0x0) goto LAB_0138ba00;
  if ((*unaff_x24 != 0) &&
     (lVar5 = thunk_FUN_00d6225c(*unaff_x24,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
  goto LAB_0138ba0c;
  if ((int)plVar2[3] == 0) goto LAB_0138b9f4;
  plVar2[4] = *unaff_x24;
  puVar1 = StringLiteral_4901;
  *(char *)(unaff_x29 + -0x80) = (char)unaff_w20;
  *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)puVar1;
  *(undefined8 *)(unaff_x29 + -0x88) = 0xffffffffffffffff;
  lVar5 = FUN_017a7f78(unaff_x29 + -0x90,0);
  if ((lVar5 != 0) &&
     (lVar3 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
  goto LAB_0138ba0c;
  uVar7 = *(uint *)(plVar2 + 3);
  if (uVar7 < 2) goto LAB_0138b9f4;
  plVar2[5] = lVar5;
  if (*unaff_x23 != 0) {
    lVar5 = thunk_FUN_00d6225c(*unaff_x23,*(undefined8 *)(*plVar2 + 0x40));
    if (lVar5 == 0) goto LAB_0138ba0c;
    uVar7 = *(uint *)(plVar2 + 3);
  }
  if (uVar7 < 3) goto LAB_0138b9f4;
  plVar2[6] = *unaff_x23;
  lVar5 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x25) {
        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 5) * 0x10 + 0x138);
        goto LAB_0138b438;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_00d59724();
LAB_0138b438:
  lVar5 = (*(code *)*puVar6)();
  if ((lVar5 != 0) &&
     (lVar3 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
  goto LAB_0138ba0c;
  uVar7 = *(uint *)(plVar2 + 3);
  if (uVar7 < 4) goto LAB_0138b9f4;
  plVar2[7] = lVar5;
  if (*unaff_x19 != 0) {
    lVar5 = thunk_FUN_00d6225c(*unaff_x19,*(undefined8 *)(*plVar2 + 0x40));
    if (lVar5 == 0) goto LAB_0138ba0c;
    uVar7 = *(uint *)(plVar2 + 3);
  }
  if (uVar7 < 5) goto LAB_0138b9f4;
  plVar2[8] = *unaff_x19;
  uVar10 = FUN_01600844(plVar2,0);
  if (lVar4 == 0) goto LAB_0138ba00;
  FUN_01c25600(lVar4,uVar10,0);
  lVar4 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar8 == 0) goto LAB_0138b840;
  piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
  while (*(long *)(piVar9 + -2) != *unaff_x25) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) goto LAB_0138b840;
  }
LAB_0138b850:
  puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 0x25) * 0x10 + 0x138);
  goto LAB_0138b860;
code_r0x0138b5bc:
  param_2 = *(undefined8 *)(*unaff_x27 + 0x40);
  goto code_r0x0138b5c4;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0138b2c4:
    if (*(long *)(piVar9 + -2) == *unaff_x25) {
      puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 8) * 0x10 + 0x138);
      goto LAB_0138b500;
    }
  }
LAB_0138b2dc:
  puVar6 = (undefined8 *)FUN_00d59724();
LAB_0138b500:
  lVar4 = (*(code *)*puVar6)();
  if ((lVar4 != 0) && (lVar4 = FUN_01c25128(lVar4,0), lVar4 != 0)) {
    unaff_x28 = FUN_01c254c8(lVar4,0);
    unaff_x27 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,9);
    if (unaff_x27 != (long *)0x0) {
      if ((*(long *)Method_Oculus_Interaction_Input_DataSource<HandDataAsset>_Start__ != 0) &&
         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                      Method_Oculus_Interaction_Input_DataSource<HandDataAsset>_Start__
                                     ,*(undefined8 *)(*unaff_x27 + 0x40)), lVar4 == 0))
      goto LAB_0138ba0c;
      uVar7 = *(uint *)(unaff_x27 + 3);
      if (uVar7 != 0) {
        unaff_x27[4] = *(long *)Method_Oculus_Interaction_Input_DataSource<HandDataAsset>_Start__;
        lVar4 = *(long *)(unaff_x29 + -0x60);
        if (lVar4 != 0) {
          lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x27 + 0x40));
          if (lVar5 == 0) goto LAB_0138ba0c;
          uVar7 = *(uint *)(unaff_x27 + 3);
        }
        if (1 < uVar7) {
          unaff_x27[5] = lVar4;
          param_1 = *(long *)
                     Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_136>_SliceWithStride<Vector4>__
          ;
          if (param_1 != 0) goto code_r0x0138b5bc;
          goto LAB_0138b5d0;
        }
      }
LAB_0138b9f4:
      *(int *)(unaff_x29 + -0x70) = (int)*(undefined8 *)(unaff_x29 + -200);
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
  }
LAB_0138ba00:
  *(int *)(unaff_x29 + -0x70) = (int)*(undefined8 *)(unaff_x29 + -200);
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


