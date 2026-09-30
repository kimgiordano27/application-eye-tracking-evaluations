/*
FUNCTION_NAME: FUN_01d8dab8
ENTRY_POINT: 01d8dab8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_15;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


/* WARNING: Removing unreachable block (ram,0x01d8e218) */
/* WARNING: Removing unreachable block (ram,0x01d8e21c) */
/* WARNING: Removing unreachable block (ram,0x01d8e254) */

void FUN_01d8dab8(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  byte bVar18;
  int *piVar19;
  long *plVar20;
  
  if ((DAT_0377f685 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(UnityEngine_UIElements_EventCallback<PointerCaptureOutEvent>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f4638);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_8>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_get_Result__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<StylePropertyId>__ctor__);
    thunk_FUN_00d48444(Method_Unity_ThrowStub_ThrowNotSupportedException__);
    thunk_FUN_00d48444(
                      UnityEngine_XR_ARFoundation_ARTrackableManager<XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider,_XRRaycast,_ARRaycast>_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_11565);
    thunk_FUN_00d48444(long___TypeInfo);
    thunk_FUN_00d48444(StringLiteral_6153);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass21_0_<DOAnchorMin>b__1__)
    ;
    thunk_FUN_00d48444(StringLiteral_5343);
    thunk_FUN_00d48444(StringLiteral_12694);
    thunk_FUN_00d48444(Sirenix_Utilities_MemberAliasMethodInfo_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f19d8);
    thunk_FUN_00d48444(StringLiteral_3287);
    thunk_FUN_00d48444(StringLiteral_7091);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_116>_SliceWithStride<Vector3>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033eced0);
    thunk_FUN_00d48444(Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo);
    DAT_0377f685 = 1;
  }
  puVar3 = Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo;
  puVar2 = PTR_DAT_033f19d8;
  if (param_2 == 0) goto LAB_01d8e228;
  plVar20 = *(long **)(param_2 + 0x98);
  if (plVar20 == (long *)0x0) goto LAB_01d8dc98;
  lVar15 = *plVar20;
  bVar18 = *(byte *)(lVar15 + 300);
  bVar1 = *(byte *)(*(long *)StringLiteral_5343 + 300);
  if ((bVar1 <= bVar18) &&
     (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)StringLiteral_5343)) {
LAB_01d8e22c:
    uVar13 = FUN_01d34728(0);
    uVar14 = thunk_FUN_00d48444(
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteStartConstructorAsync>d__40>__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar13,uVar14);
  }
  bVar1 = *(byte *)(*(long *)Sirenix_Utilities_MemberAliasMethodInfo_TypeInfo + 300);
  if ((bVar1 <= bVar18) &&
     (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) ==
      *(long *)Sirenix_Utilities_MemberAliasMethodInfo_TypeInfo)) goto LAB_01d8e22c;
  bVar1 = *(byte *)(*(long *)StringLiteral_12694 + 300);
  if ((bVar18 < bVar1) ||
     (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_12694))
  goto LAB_01d8dc98;
  plVar10 = *(long **)(param_2 + 0x60);
  if (plVar10 != (long *)0x0) {
    bVar18 = *(byte *)(*(long *)PTR_DAT_033f19d8 + 300);
    if ((bVar18 <= *(byte *)(*plVar10 + 300)) &&
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar18 * 8 + -8) == *(long *)PTR_DAT_033f19d8))
    {
      lVar15 = FUN_01eca598(plVar10,0);
      if (lVar15 == 0) goto LAB_01d8e228;
      uVar11 = FUN_015fe7e8(*(undefined8 *)(lVar15 + 0x18),*(undefined8 *)puVar3,0);
      if ((uVar11 & 1) == 0) goto LAB_01d8ddb0;
      plVar10 = *(long **)(param_2 + 0x60);
      lVar15 = thunk_FUN_00d62348(*(undefined8 *)
                                   UnityEngine_UIElements_EventCallback<PointerCaptureOutEvent>_TypeInfo
                                 );
      if (lVar15 == 0) goto LAB_01d8e228;
      if (plVar10 == (long *)0x0) {
LAB_01d8dd88:
        plVar10 = (long *)0x0;
      }
      else {
        bVar18 = *(byte *)(*(long *)puVar2 + 300);
        if (*(byte *)(*plVar10 + 300) < bVar18) goto LAB_01d8dd88;
        if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar18 * 8 + -8) != *(long *)puVar2) {
          plVar10 = (long *)0x0;
        }
      }
      FUN_01d8d998(lVar15,plVar10);
      *(long *)(param_1 + 0x18) = lVar15;
    }
  }
LAB_01d8ddb0:
  plVar10 = plVar20 + 10;
  if (*plVar10 != 0) {
    uVar11 = thunk_FUN_015fe514(*(undefined8 *)(*plVar10 + 0x18),*(undefined8 *)puVar3,0);
    plVar16 = (long *)*plVar10;
    if (plVar16 != (long *)0x0) {
      if ((uVar11 & 1) == 0) {
        lVar15 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
      }
      else {
        lVar15 = plVar16[2];
      }
      lVar17 = *(long *)(param_1 + 0x18);
      *(long *)(param_1 + 0x10) = lVar15;
      if (((lVar17 != 0) && (*(long *)(lVar17 + 0x28) != 0)) &&
         (0 < *(int *)(*(long *)(lVar17 + 0x28) + 0x10))) {
        plVar10 = (long *)(lVar17 + 0x20);
      }
      *(long *)(param_1 + 0x20) = *plVar10;
      if ((lVar15 == 0) || (*(int *)(lVar15 + 0x10) == 0)) {
        if (plVar20[0xb] == 0) goto LAB_01d8e228;
        lVar15 = *(long *)(plVar20[0xb] + 0x50);
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(long *)(param_1 + 0x10) = lVar15;
      }
      uVar11 = thunk_FUN_015fe514(lVar15,*(undefined8 *)PTR_DAT_033eced0,0);
      if ((uVar11 & 1) != 0) {
        *(undefined8 *)(param_1 + 0x10) =
             *(undefined8 *)
              Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_116>_SliceWithStride<Vector3>__
        ;
      }
      if (plVar20[0xc] != 0) {
        lVar15 = FUN_01ebf8ac(plVar20[0xc],0);
        puVar8 = StringLiteral_11565;
        puVar6 = Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass21_0_<DOAnchorMin>b__1__;
        puVar5 = Method_Unity_ThrowStub_ThrowNotSupportedException__;
        puVar4 = Method_System_Collections_Generic_HashSet<StylePropertyId>__ctor__;
        puVar3 = long___TypeInfo;
        puVar2 = PTR_DAT_033f4638;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        while (uVar11 = FUN_01ec0bb4(lVar15,0), puVar7 = StringLiteral_10310, (uVar11 & 1) != 0) {
          plVar20 = (long *)FUN_01ec0c54(lVar15,0);
          if (plVar20 != (long *)0x0) {
            lVar17 = *plVar20;
            bVar18 = *(byte *)(lVar17 + 300);
            bVar1 = *(byte *)(*(long *)
                               Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_8>__
                             + 300);
            if ((bVar18 < bVar1) ||
               (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)
                 Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_8>__
               )) {
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(plVar20);
            }
            bVar1 = *(byte *)(*(long *)
                               Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_get_Result__
                             + 300);
            if ((bVar1 <= bVar18) &&
               (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)
                 Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_get_Result__
               )) {
              lVar17 = plVar20[10];
              if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__ + 0xe0) ==
                  0) {
                thunk_FUN_00d32864();
              }
              uVar9 = FUN_016fef60(lVar17,0,0);
              *(undefined4 *)(param_1 + 0x30) = uVar9;
              lVar17 = *plVar20;
              bVar18 = *(byte *)(lVar17 + 300);
            }
            bVar1 = *(byte *)(*(long *)StringLiteral_6153 + 300);
            if ((bVar1 <= bVar18) &&
               (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)StringLiteral_6153)) {
              lVar17 = plVar20[10];
              if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__ + 0xe0) ==
                  0) {
                thunk_FUN_00d32864();
              }
              uVar9 = FUN_016fef60(lVar17,0,0);
              *(undefined4 *)(param_1 + 0x34) = uVar9;
              lVar17 = *plVar20;
              bVar18 = *(byte *)(lVar17 + 300);
            }
            bVar1 = *(byte *)(*(long *)
                               UnityEngine_XR_ARFoundation_ARTrackableManager<XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider,_XRRaycast,_ARRaycast>_TypeInfo
                             + 300);
            if ((bVar1 <= bVar18) &&
               (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)
                 UnityEngine_XR_ARFoundation_ARTrackableManager<XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider,_XRRaycast,_ARRaycast>_TypeInfo
               )) {
              lVar17 = plVar20[10];
              if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__ + 0xe0) ==
                  0) {
                thunk_FUN_00d32864();
              }
              uVar9 = FUN_016fef60(lVar17,0,0);
              *(undefined4 *)(param_1 + 0x38) = uVar9;
              lVar17 = *plVar20;
              bVar18 = *(byte *)(lVar17 + 300);
            }
            bVar1 = *(byte *)(*(long *)puVar6 + 300);
            if ((bVar1 <= bVar18) &&
               (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar6)) {
              *(long *)(param_1 + 0x40) = plVar20[10];
              lVar17 = *plVar20;
              bVar18 = *(byte *)(lVar17 + 300);
            }
            bVar1 = *(byte *)(*(long *)puVar2 + 300);
            if ((bVar1 <= bVar18) &&
               (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
              uVar11 = FUN_015ff8a0(*(undefined8 *)(param_1 + 0x70),0);
              if ((uVar11 & 1) == 0) {
                lVar17 = FUN_01600424(*(undefined8 *)(param_1 + 0x70),
                                      *(undefined8 *)StringLiteral_3287,plVar20[10],0);
              }
              else {
                lVar17 = plVar20[10];
              }
              *(long *)(param_1 + 0x70) = lVar17;
              lVar17 = *plVar20;
              bVar18 = *(byte *)(lVar17 + 300);
            }
            bVar1 = *(byte *)(*(long *)puVar8 + 300);
            if ((bVar1 <= bVar18) &&
               (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar8)) {
              *(long *)(param_1 + 0x60) = plVar20[10];
              lVar17 = *plVar20;
              bVar18 = *(byte *)(lVar17 + 300);
            }
            bVar1 = *(byte *)(*(long *)puVar3 + 300);
            if ((bVar1 <= bVar18) &&
               (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3)) {
              *(long *)(param_1 + 0x68) = plVar20[10];
              lVar17 = *plVar20;
              bVar18 = *(byte *)(lVar17 + 300);
            }
            bVar1 = *(byte *)(*(long *)puVar4 + 300);
            if ((bVar1 <= bVar18) &&
               (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)) {
              *(long *)(param_1 + 0x50) = plVar20[10];
              lVar17 = *plVar20;
              bVar18 = *(byte *)(lVar17 + 300);
            }
            bVar1 = *(byte *)(*(long *)puVar5 + 300);
            if ((bVar1 <= bVar18) &&
               (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar5)) {
              *(long *)(param_1 + 0x58) = plVar20[10];
            }
          }
        }
        plVar20 = (long *)thunk_FUN_00d6225c(lVar15,*(undefined8 *)StringLiteral_10310);
        if (plVar20 != (long *)0x0) {
          lVar15 = *plVar20;
          uVar11 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar11 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar7) {
                puVar12 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_01d8e200;
              }
              uVar11 = uVar11 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar11 != 0);
          }
          puVar12 = (undefined8 *)FUN_00d59724(plVar20,*(long *)puVar7,0);
LAB_01d8e200:
          (*(code *)*puVar12)(plVar20,puVar12[1]);
        }
LAB_01d8dc98:
        puVar2 = StringLiteral_7091;
        if (*(int *)(*(long *)
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar15 = FUN_01d98168(param_2,*(undefined8 *)puVar2,0);
        if (lVar15 != 0) {
          *(long *)(param_1 + 0x48) = lVar15;
        }
        return;
      }
    }
  }
LAB_01d8e228:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


