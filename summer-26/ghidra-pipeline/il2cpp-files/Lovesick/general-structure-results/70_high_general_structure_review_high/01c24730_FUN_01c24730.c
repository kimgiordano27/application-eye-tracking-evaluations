/*
FUNCTION_NAME: FUN_01c24730
ENTRY_POINT: 01c24730
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01c24730(long param_1,undefined8 *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  long local_68;
  
  if ((DAT_0377e9f8 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_1154);
    thunk_FUN_00d48444(StringLiteral_4901);
    thunk_FUN_00d48444(System_Net_FileWebRequest_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9688);
    thunk_FUN_00d48444(Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Clear__);
    thunk_FUN_00d48444(Method_System_Reflection_Emit_MethodBuilder_GetCustomAttributes__);
    thunk_FUN_00d48444(System_Text_RegularExpressions_RegexMatchTimeoutException_TypeInfo);
    thunk_FUN_00d48444(Method_Oculus_Interaction_Input_DataSource<HandDataAsset>_Start__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_136>_SliceWithStride<Vector4>__
                      );
    thunk_FUN_00d48444(System_Func<Mesh,_Color[]>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Security_Cryptography_TripleDES_IsWeakKey__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__);
    DAT_0377e9f8 = 1;
  }
  puVar4 = StringLiteral_9688;
  local_70 = 0;
  local_68 = 0;
  if (param_3 != (long *)0x0) {
    lVar12 = *param_3;
    uVar16 = *(undefined8 *)(param_1 + 0x10);
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_9688) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar15 + 8) * 0x10 + 0x138);
          goto LAB_01c24878;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(param_3,*(long *)StringLiteral_9688,8);
LAB_01c24878:
    lVar12 = (*(code *)*puVar6)(param_3,puVar6[1]);
    if ((lVar12 != 0) &&
       (lVar12 = FUN_01c25128(), plVar18 = (long *)System_Net_FileWebRequest_TypeInfo, lVar12 != 0))
    {
      uVar7 = FUN_01c25190();
      if (*(int *)(*plVar18 + 0xe0) == 0) {
        thunk_FUN_00d32864(*plVar18);
      }
      puVar3 = Method_System_Security_Cryptography_TripleDES_IsWeakKey__;
      puVar2 = Method_System_Reflection_Emit_MethodBuilder_GetCustomAttributes__;
      puVar1 = System_Text_RegularExpressions_RegexMatchTimeoutException_TypeInfo;
      lVar12 = FUN_01c252c8(uVar16,uVar7);
LAB_01c248e0:
      lVar13 = *param_3;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0x10) * 0x10 + 0x138);
            goto LAB_01c24930;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(param_3,*(long *)puVar4,0x10);
LAB_01c24930:
      uVar5 = (*(code *)*puVar6)(param_3,&local_68,puVar6[1]);
      if (((uVar5 & 0xff) < 0x10) && ((1 << (ulong)(uVar5 & 0x1f) & 0xa100U) != 0)) {
        return;
      }
      uVar14 = FUN_015ff8a0(local_68,0);
      if ((uVar14 & 1) == 0) {
        if (lVar12 != 0) {
          uVar14 = FUN_0129eff4(lVar12,local_68,&local_70,*(undefined8 *)StringLiteral_1154);
          uVar16 = local_70;
          if ((uVar14 & 1) != 0) goto code_r0x01c249d8;
          lVar13 = *param_3;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                puVar6 = (undefined8 *)(lVar13 + (long)(*piVar15 + 8) * 0x10 + 0x138);
                goto LAB_01c24ca8;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar6 = (undefined8 *)FUN_00d59724(param_3,*(long *)puVar4,8);
LAB_01c24ca8:
          lVar13 = (*(code *)*puVar6)(param_3,puVar6[1]);
          if ((lVar13 != 0) && (lVar13 = FUN_01c25128(), lVar13 != 0)) {
            lVar13 = FUN_01c254c8();
            plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,9);
            if (plVar8 != (long *)0x0) {
              if ((*(long *)Method_Oculus_Interaction_Input_DataSource<HandDataAsset>_Start__ != 0)
                 && (lVar9 = thunk_FUN_00d6225c(*(long *)
                                                 Method_Oculus_Interaction_Input_DataSource<HandDataAsset>_Start__
                                                ,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
              goto LAB_01c250e4;
              lVar9 = local_68;
              uVar11 = *(uint *)(plVar8 + 3);
              if (uVar11 == 0) goto LAB_01c250dc;
              plVar8[4] = *(long *)Method_Oculus_Interaction_Input_DataSource<HandDataAsset>_Start__
              ;
              if (local_68 != 0) {
                lVar10 = thunk_FUN_00d6225c(local_68,*(undefined8 *)(*plVar8 + 0x40));
                if (lVar10 == 0) goto LAB_01c250e4;
                uVar11 = *(uint *)(plVar8 + 3);
              }
              if (uVar11 < 2) goto LAB_01c250dc;
              plVar8[5] = lVar9;
              plVar18 = (long *)System_Net_FileWebRequest_TypeInfo;
              if (*(long *)
                   Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_136>_SliceWithStride<Vector4>__
                  != 0) {
                lVar9 = thunk_FUN_00d6225c(*(long *)
                                            Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_136>_SliceWithStride<Vector4>__
                                           ,*(undefined8 *)(*plVar8 + 0x40));
                if (lVar9 == 0) goto LAB_01c250e4;
                uVar11 = *(uint *)(plVar8 + 3);
              }
              if (uVar11 < 3) goto LAB_01c250dc;
              plVar8[6] = *(long *)
                           Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_136>_SliceWithStride<Vector4>__
              ;
              local_88 = *(undefined8 *)StringLiteral_4901;
              uStack_80 = 0xffffffffffffffff;
              local_78 = (char)uVar5;
              lVar9 = FUN_017a7f78(&local_88,0);
              if ((lVar9 != 0) &&
                 (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
              goto LAB_01c250e4;
              uVar5 = *(uint *)(plVar8 + 3);
              if (uVar5 < 4) goto LAB_01c250dc;
              plVar8[7] = lVar9;
              if (*(long *)puVar3 != 0) {
                lVar9 = thunk_FUN_00d6225c(*(long *)puVar3,*(undefined8 *)(*plVar8 + 0x40));
                if (lVar9 == 0) goto LAB_01c250e4;
                uVar5 = *(uint *)(plVar8 + 3);
              }
              if (uVar5 < 5) goto LAB_01c250dc;
              plVar8[8] = *(long *)puVar3;
              lVar9 = *param_3;
              uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                    puVar6 = (undefined8 *)(lVar9 + (long)(*piVar15 + 5) * 0x10 + 0x138);
                    goto LAB_01c24e58;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar6 = (undefined8 *)FUN_00d59724(param_3,*(long *)puVar4,5);
LAB_01c24e58:
              lVar9 = (*(code *)*puVar6)(param_3,puVar6[1]);
              if ((lVar9 != 0) &&
                 (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
              goto LAB_01c250e4;
              uVar5 = *(uint *)(plVar8 + 3);
              if (uVar5 < 6) goto LAB_01c250dc;
              plVar8[9] = lVar9;
              if (*(long *)System_Func<Mesh,_Color[]>_TypeInfo != 0) {
                lVar9 = thunk_FUN_00d6225c(*(long *)System_Func<Mesh,_Color[]>_TypeInfo,
                                           *(undefined8 *)(*plVar8 + 0x40));
                if (lVar9 == 0) goto LAB_01c250e4;
                uVar5 = *(uint *)(plVar8 + 3);
              }
              if (uVar5 < 7) goto LAB_01c250dc;
              plVar8[10] = *(long *)System_Func<Mesh,_Color[]>_TypeInfo;
              uVar16 = *(undefined8 *)(param_1 + 0x10);
              if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0)
                  == 0) {
                thunk_FUN_00d32864();
              }
              lVar9 = FUN_01c4b4e0(uVar16,0);
              if ((lVar9 != 0) &&
                 (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
              goto LAB_01c250e4;
              uVar5 = *(uint *)(plVar8 + 3);
              if (uVar5 < 8) goto LAB_01c250dc;
              plVar8[0xb] = lVar9;
              if (*(long *)
                   Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__ != 0)
              {
                lVar9 = thunk_FUN_00d6225c(*(long *)
                                            Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                                           ,*(undefined8 *)(*plVar8 + 0x40));
                if (lVar9 == 0) goto LAB_01c250e4;
                uVar5 = *(uint *)(plVar8 + 3);
              }
              if (uVar5 < 9) goto LAB_01c250dc;
              plVar8[0xc] = *(long *)
                             Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
              ;
              uVar16 = FUN_01600844(plVar8,0);
              if (lVar13 != 0) {
                FUN_01c25764(lVar13,uVar16);
                lVar9 = *param_3;
                lVar13 = *(long *)puVar4;
                uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == lVar13) goto LAB_01c24fbc;
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                goto LAB_01c24fac;
              }
            }
          }
        }
      }
      else {
        lVar13 = *param_3;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
              puVar6 = (undefined8 *)(lVar13 + (long)(*piVar15 + 8) * 0x10 + 0x138);
              goto LAB_01c24ab4;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar6 = (undefined8 *)FUN_00d59724(param_3,*(long *)puVar4,8);
LAB_01c24ab4:
        lVar13 = (*(code *)*puVar6)(param_3,puVar6[1]);
        if ((lVar13 != 0) && (lVar13 = FUN_01c25128(), lVar13 != 0)) {
          lVar13 = FUN_01c254c8();
          plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
          if (plVar8 != (long *)0x0) {
            lVar9 = *(long *)puVar1;
            if ((lVar9 != 0) &&
               (lVar9 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
LAB_01c250e4:
              uVar16 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar16,0);
            }
            if ((int)plVar8[3] == 0) goto LAB_01c250dc;
            plVar8[4] = *(long *)puVar1;
            local_88 = *(undefined8 *)StringLiteral_4901;
            uStack_80 = 0xffffffffffffffff;
            local_78 = (char)uVar5;
            lVar9 = FUN_017a7f78(&local_88,0);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
            goto LAB_01c250e4;
            uVar5 = *(uint *)(plVar8 + 3);
            if (uVar5 < 2) {
LAB_01c250dc:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            plVar8[5] = lVar9;
            if (*(long *)puVar3 != 0) {
              lVar9 = thunk_FUN_00d6225c(*(long *)puVar3,*(undefined8 *)(*plVar8 + 0x40));
              if (lVar9 == 0) goto LAB_01c250e4;
              uVar5 = *(uint *)(plVar8 + 3);
            }
            if (uVar5 < 3) goto LAB_01c250dc;
            plVar8[6] = *(long *)puVar3;
            lVar9 = *param_3;
            uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                  puVar6 = (undefined8 *)(lVar9 + (long)(*piVar15 + 5) * 0x10 + 0x138);
                  goto LAB_01c24be4;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar6 = (undefined8 *)FUN_00d59724(param_3,*(long *)puVar4,5);
LAB_01c24be4:
            lVar9 = (*(code *)*puVar6)(param_3,puVar6[1]);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
            goto LAB_01c250e4;
            uVar5 = *(uint *)(plVar8 + 3);
            if (uVar5 < 4) goto LAB_01c250dc;
            plVar8[7] = lVar9;
            lVar9 = *(long *)puVar2;
            if (lVar9 != 0) {
              lVar9 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40));
              if (lVar9 == 0) goto LAB_01c250e4;
              uVar5 = *(uint *)(plVar8 + 3);
            }
            if (uVar5 < 5) goto LAB_01c250dc;
            plVar8[8] = *(long *)puVar2;
            uVar16 = FUN_01600844(plVar8,0);
            if (lVar13 != 0) {
              FUN_01c25600(lVar13,uVar16);
              lVar9 = *param_3;
              lVar13 = *(long *)puVar4;
              uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == lVar13) goto LAB_01c24fbc;
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
LAB_01c24fac:
              puVar6 = (undefined8 *)FUN_00d59724(param_3,lVar13,0x25);
              goto LAB_01c24fcc;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
code_r0x01c249d8:
  if (*(int *)(*plVar18 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar16 = FUN_01c258c8(uVar16);
  if (*(int *)(*(long *)Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__ + 0xe0)
      == 0) {
    thunk_FUN_00d32864(*(long *)Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__
                      );
  }
  plVar8 = (long *)FUN_01c25a14(uVar16);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar7 = (**(code **)(*plVar8 + 0x178))(plVar8,param_3,*(undefined8 *)(*plVar8 + 0x180));
  uVar16 = local_70;
  uVar17 = *param_2;
  if (*(int *)(*plVar18 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_01c25a6c(uVar16,uVar17,uVar7);
  goto LAB_01c248e0;
LAB_01c24fbc:
  puVar6 = (undefined8 *)(lVar9 + (long)(*piVar15 + 0x25) * 0x10 + 0x138);
LAB_01c24fcc:
  (*(code *)*puVar6)(param_3,puVar6[1]);
  goto LAB_01c248e0;
}


